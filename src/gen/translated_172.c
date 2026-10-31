#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_00d9fa20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9fa20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fa20u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00d9fa60 */
GEN_LIB GEN_FRAME uint F_00d9fa60(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xd9fa60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00d9faa0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9faa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9faa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(param_1,this,8);
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = iVar1 + 1;
  return *(int *)this + iVar1 * 8;
}

/* ref: hkCpuJobThreadPool::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9fae0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d9f4d0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00d9fb20 */
GEN_LIB GEN_FRAME uint F_00d9fb20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fb20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9fb30 */
GEN_LIB GEN_FRAME uint F_00d9fb30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fb30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00d9fb40 */
GEN_LIB GEN_FRAME uint F_00d9fb40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fb40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: hkMemoryInitUtil::DestroyAllocators */
GEN_LIB GEN_NOFRAME unsigned int F_00d9fb50(void)
{
  GEN_ENTER(0xd9fb50u, 0u, 0u, 0u, 0u);
  if (REFG(undefined4 * PTR32, 0x15dff44) != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15dff44))))(REFG(undefined4 * PTR32, 0x15dff44) GEN_EDX_ARG,0);
    REFG(undefined4 * PTR32, 0x15dff44) = ((undefined4 *)GEN_TOP(0x0));
  }
  if (REFG(undefined4 * PTR32, 0x15dff40) != ((undefined4 *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15dff40))))(REFG(undefined4 * PTR32, 0x15dff40) GEN_EDX_ARG,0);
    REFG(undefined4 * PTR32, 0x15dff40) = ((undefined4 *)GEN_TOP(0x0));
  }
  return;
}

/* ref: hkMemoryInitUtil::InitFreeListDefault */
GEN_LIB GEN_FRAME uint F_00d9fb90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xd9fb90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  uVar1 = F_00db94b0(&REFG(undefined, 0x15da4b0) GEN_EDX_ARG,param_1);
  if (uVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = uVar1 + 4;
  }
  uVar2 = F_00db7bc0(&REFG(undefined, 0x15da590) GEN_EDX_ARG,uVar1,iVar3,param_3);
  if (uVar2 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = uVar2 + 4;
  }
  piVar4 = ((int *)GEN_TOP(F_00db6b70(&REFG(undefined, 0x15db050) GEN_EDX_ARG,param_1,uVar2,iVar3,5)));
  REFG(int * PTR32, 0x15da4a8) = piVar4;
  REFG(undefined4, 0x15dff40) = uVar1;
  REFG(undefined4, 0x15dff44) = uVar2;
  F_00d9b8e0(piVar4);
  REFG(undefined * PTR32, 0x15da4ac) = ((code *)REFP(0xd9fb50));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar4 + 4))))(piVar4 GEN_EDX_ARG,param_2,3);
  return uVar1;
}

/* ref: hkMemoryInitUtil::InitFreeListWithAllocator */
GEN_LIB GEN_FRAME uint F_00d9fc20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd9fc20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  uVar1 = F_00db7bc0(&REFG(undefined, 0x15da590) GEN_EDX_ARG,param_1,param_2,param_4);
  if (uVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = uVar1 + 4;
  }
  piVar3 = ((int *)GEN_TOP(F_00db6b70(&REFG(undefined, 0x15db050) GEN_EDX_ARG,param_1,uVar1,iVar2,5)));
  REFG(int * PTR32, 0x15da4a8) = piVar3;
  REFG(undefined4, 0x15dff44) = uVar1;
  F_00d9b8e0(piVar3);
  REFG(undefined * PTR32, 0x15da4ac) = ((code *)REFP(0xd9fb50));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar3 + 4))))(piVar3 GEN_EDX_ARG,param_3,3);
  return uVar1;
}

/* ref: hkMemoryInitUtil::InitFreeListCustom */
GEN_LIB GEN_FRAME uint F_00d9fc90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xd9fc90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(F_00db6b70(&REFG(undefined, 0x15db050) GEN_EDX_ARG,param_1,param_2,param_3,5)));
  REFG(int * PTR32, 0x15da4a8) = piVar1;
  F_00d9b8e0(piVar1);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,param_4,3);
  return uVar2;
}

/* ref: FUN_00d9fce0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9fce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9fce0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x113bee4));
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = param_2;
  return (uint)this;
}

/* ref: hkMemoryTrackStreamWriter::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9fd10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fd10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkMemoryTrackStreamWriter::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9fd20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fd20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: hkMemoryTrackStreamWriter::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9fd30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xd9fd30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 1;
}

/* ref: hkOstream::WriteString */
GEN_LIB GEN_NOFRAME uint F_00d9fd40(GEN_P(int in_esi, unsigned int gen_a0), GEN_P(int * in_edi, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fd40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_esi = (int)gen_a0;)
  GEN_PIN(int * in_edi = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  
  if (in_esi != 0) {
    iVar1 = *in_edi;
    uVar2 = F_00da0e60(in_esi);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((iVar1 + 0x10))))(in_edi,in_esi,uVar2);
    return uVar2;
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*in_edi + 0x10))))(in_edi GEN_EDX_ARG,&REFG(undefined1, 0x1119e80),6);
  return uVar2;
}

/* ref: FUN_00d9fd70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9fd70(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fd70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  *((undefined2 *)GEN_TOP(((int)in_ecx + 6))) = 1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x113bf10));
  in_ecx[2] = param_2;
  if (param_2 != 0) {
    F_00d91830(param_2 GEN_EDX_FWD);
  }
  return (uint)in_ecx;
}

/* ref: FUN_00d9fda0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00d9fda0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xd9fda0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint in_EAX = 0;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113bf10));
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) != ((undefined *)GEN_TOP(0x0))) {
    in_EAX = F_00d91840(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return in_EAX;
}

/* ref: FUN_00d9fdc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9fdc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fdc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1);
  return param_1;
}

/* ref: FUN_00d9fde0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9fde0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fde0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1272c, 4, 4);
  
  (*(undefined4 *)(gen_frame + 0x12724)) = 0xd9fded;
  F_00da0ce0(((undefined1 *)(gen_frame + 0x10000)),0x2728,&REFG(undefined, 0x113bf1c),param_1);
  F_00d9fd40(((undefined1 *)(gen_frame + 0x10000)),*((undefined4 *)GEN_TOP(((int)this + 8))));
  return (uint)this;
}

/* ref: hkOstream::WriteBool */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9fe30(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fe30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  char * in_esi;
  
  in_esi = ((char *)REFP(0x113bf28));
  if (param_2 == '\0') {
    in_esi = ((char *)REFP(0x113bf20));
  }
  F_00d9fd40(in_esi,*((undefined4 *)GEN_TOP((param_1 + 8))));
  return param_1;
}

/* ref: hkOstream::WriteChar */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9fe60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xd9fe60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x10))))(*(int * PTR32 *)(this + 8) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[0]),1);
  return (uint)this;
}

/* ref: hkOstream::WriteCString */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9fe80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fe80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00d9fd40(param_1,*(undefined4 *)(this + 8));
  return (uint)this;
}

/* ref: hkOstream::WriteShort */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9fea0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1272c, 4, 4);
  
  (*(undefined4 *)(gen_frame + 0x12724)) = 0xd9fead;
  F_00da0ce0(((undefined1 *)(gen_frame + 0x10000)),0x2728,&REFG(undefined, 0x113bf30),(int)(short)param_1);
  F_00d9fd40(((undefined1 *)(gen_frame + 0x10000)),*(undefined4 *)(this + 8));
  return (uint)this;
}

/* ref: hkOstream::WriteUShort */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9fef0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9fef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1272c, 4, 4);
  
  (*(undefined4 *)(gen_frame + 0x12724)) = 0xd9fefd;
  F_00da0ce0(((undefined1 *)(gen_frame + 0x10000)),0x2728,&REFG(undefined, 0x110f840),param_1 & 0xffff);
  F_00d9fd40(((undefined1 *)(gen_frame + 0x10000)),*(undefined4 *)(this + 8));
  return (uint)this;
}

/* ref: hkOstream::WriteInt */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ff40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ff40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1272c, 4, 4);
  
  (*(undefined4 *)(gen_frame + 0x12724)) = 0xd9ff4d;
  F_00da0ce0(((undefined1 *)(gen_frame + 0x10000)),0x2728,&REFG(undefined, 0x113bf30),param_1);
  F_00d9fd40(((undefined1 *)(gen_frame + 0x10000)),*(undefined4 *)(this + 8));
  return (uint)this;
}

/* ref: hkOstream::WriteUInt */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ff90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xd9ff90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1272c, 4, 4);
  
  (*(undefined4 *)(gen_frame + 0x12724)) = 0xd9ff9d;
  F_00da0ce0(((undefined1 *)(gen_frame + 0x10000)),0x2728,&REFG(undefined, 0x110f840),param_1);
  F_00d9fd40(((undefined1 *)(gen_frame + 0x10000)),*(undefined4 *)(this + 8));
  return (uint)this;
}

/* ref: hkOstream::WriteFloat */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00d9ffe0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xd9ffe0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_FRAME_DECL_TOP(0x1272c, 4, 4);
  
  (*(undefined4 *)(gen_frame + 0x12724)) = 0xd9ffed;
  F_00da0ce0(((undefined1 *)(gen_frame + 0x10000)),0x2728,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)param_2),
                     (int)((ulonglong)gen_d2bits((double)param_2) >> 0x20));
  F_00d9fd40(((undefined1 *)(gen_frame + 0x10000)),*((undefined4 *)GEN_TOP((param_1 + 8))));
  return param_1;
}

/* ref: hkOstream::WriteInt64 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda0040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x1272c, 4, 4);
  
  (*(undefined4 *)(gen_frame + 0x12724)) = 0xda004d;
  F_00da0ce0(((undefined1 *)(gen_frame + 0x10000)),0x2728,((char *)REFP(0x113bf38)),param_1,param_2);
  F_00d9fd40(((undefined1 *)(gen_frame + 0x10000)),*(undefined4 *)(this + 8));
  return (uint)this;
}

/* ref: hkOstream::WriteUInt64 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda0090u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x1272c, 4, 4);
  
  (*(undefined4 *)(gen_frame + 0x12724)) = 0xda009d;
  F_00da0ce0(((undefined1 *)(gen_frame + 0x10000)),0x2728,((char *)REFP(0x113bf40)),param_1,param_2);
  F_00d9fd40(((undefined1 *)(gen_frame + 0x10000)),*(undefined4 *)(this + 8));
  return (uint)this;
}

/* ref: hkOstream::Printf */
GEN_LIB GEN_FRAME uint F_00da00e0(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xda00e0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  GEN_FRAME_DECL_TOP(0x1272c, 4, 4);
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x12724)) = 0xda00ed;
  F_00da0cd0(((undefined1 *)(gen_frame + 0x10000)),0x2728,param_2,((undefined *)&gen_args[2]));
  uVar1 = F_00d9fd40(((undefined1 *)(gen_frame + 0x10000)),*((undefined4 *)GEN_TOP((param_1 + 8))));
  return uVar1;
}

/* ref: hkOstream::Write */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00da0140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda0140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return (uint)(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x10))))(*(int * PTR32 *)(this + 8) GEN_EDX_FWD,param_1,param_2));
}

/* ref: hkOstream::SetStreamWriter */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda0150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00d919e0(param_1 GEN_EDX_FWD);
  if (*(undefined * PTR32 *)(this + 8) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00d91a80(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG);
  }
  *(undefined * PTR32 *)(this + 8) = param_1;
  return uVar1;
}

/* ref: hkOstream::vf2 */
GEN_LIB GEN_NOFRAME uint F_00da0180(void)
{
  GEN_ENTER(0xda0180u, 0u, 0u, 0u, 0u);
  return 0x15dff48;
}

/* ref: FUN_00da0190 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda0190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113bf10));
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dffa8) + 0x10))))(REFG(int * PTR32, 0x15dffa8) GEN_EDX_FWD,param_1);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar1;
  return (uint)this;
}

/* ref: FUN_00da01c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da01c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xda01c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  LPVOID pvVar1;
  uint uVar2;
  
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113bf10));
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x1c);
  *((undefined2 *)GEN_TOP((uVar2 + 4))) = 0x1c;
  uVar2 = F_00dba580(uVar2 GEN_EDX_ARG,param_1,param_2,(undefined1)param_3);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar2;
  return (uint)this;
}

/* ref: FUN_00da0220 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda0220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  LPVOID pvVar1;
  undefined4 * puVar2;
  
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113bf10));
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar2 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x10)));
  puVar2[1] = 0x10010;
  *puVar2 = (*(undefined * PTR32 (*)[10])REFP(0x113bee4));
  puVar2[2] = param_1;
  puVar2[3] = 1;
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar2;
  return (uint)this;
}

/* ref: hkOstream::WriteFloat_00da0280 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda0280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x12730, 0, 4);
  
  (*(undefined * PTR32 *)(gen_frame + 0x12728)) = ((undefined *)GEN_TOP(0xda028d));
  (*(undefined * PTR32 *)(gen_frame + 0x12728)) = this;
  F_00da0ce0(((undefined1 *)(gen_frame + 0x10000)),0x2728,&REFG(undefined, 0x113bf34),(int)(ulonglong)gen_d2bits((double)*param_1),
                     (int)((ulonglong)gen_d2bits((double)*param_1) >> 0x20));
  F_00d9fd40(((undefined1 *)(gen_frame + 0x10000)),*(undefined4 *)(this + 8));
  return (uint)(*(undefined * PTR32 *)(gen_frame + 0x12728));
}

/* ref: hkOstream::WriteVector4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da02e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda02e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  F_00da00e0(this,((char *)REFP(0x113bf48)),(int)(ulonglong)gen_d2bits((double)*param_1),
         (int)((ulonglong)gen_d2bits((double)*param_1) >> 0x20),
         (int)(ulonglong)gen_d2bits((double)param_1[1]),
         (int)((ulonglong)gen_d2bits((double)param_1[1]) >> 0x20),
         (int)(ulonglong)gen_d2bits((double)param_1[2]),
         (int)((ulonglong)gen_d2bits((double)param_1[2]) >> 0x20),
         (int)(ulonglong)gen_d2bits((double)param_1[3]),
         (int)((ulonglong)gen_d2bits((double)param_1[3]) >> 0x20));
  return (uint)this;
}

/* ref: hkOstream::WriteQuaternion */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda0340u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  F_00da00e0(this,((char *)REFP(0x113bf58)),(int)(ulonglong)gen_d2bits((double)*param_1),
         (int)((ulonglong)gen_d2bits((double)*param_1) >> 0x20),
         (int)(ulonglong)gen_d2bits((double)param_1[1]),
         (int)((ulonglong)gen_d2bits((double)param_1[1]) >> 0x20),
         (int)(ulonglong)gen_d2bits((double)param_1[2]),
         (int)((ulonglong)gen_d2bits((double)param_1[2]) >> 0x20),
         (int)(ulonglong)gen_d2bits((double)param_1[3]),
         (int)((ulonglong)gen_d2bits((double)param_1[3]) >> 0x20));
  return (uint)this;
}

/* ref: hkOstream::WriteRotation */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da03a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda03a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  float * pfVar2;
  
  pfVar2 = ((float *)GEN_TOP((param_1 + 0x10)));
  iVar1 = 3;
  do {
    F_00da00e0(this,((char *)REFP(0x113bf68)),(int)(ulonglong)gen_d2bits((double)pfVar2[-4]),
           (int)((ulonglong)gen_d2bits((double)pfVar2[-4]) >> 0x20),
           (int)(ulonglong)gen_d2bits((double)*pfVar2),
           (int)((ulonglong)gen_d2bits((double)*pfVar2) >> 0x20),
           (int)(ulonglong)gen_d2bits((double)pfVar2[4]),
           (int)((ulonglong)gen_d2bits((double)pfVar2[4]) >> 0x20));
    pfVar2 = pfVar2 + 1;
    iVar1 = iVar1 - 1;
  } while (iVar1 != 0);
  return (uint)this;
}

/* ref: hkOstream::WriteTransform */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda0400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x30;
  this_00 = ((undefined *)GEN_TOP(F_00da03a0(this GEN_EDX_FWD,param_1)));
  uVar1 = F_00da02e0(this_00 GEN_EDX_ARG,iVar2);
  return uVar1;
}

/* ref: hkOstream::WriteStringPtr */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda0420u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_1;
  if ((uVar1 & 0xfffffffe) != 0) {
    iVar2 = **(int * PTR32 *)(this + 8);
    F_00d91360(param_1 GEN_EDX_FWD);
    ((code *)*((gen_code32 *)GEN_TOP((iVar2 + 0x10))))(*(undefined4 *)(this + 8),uVar1 & 0xfffffffe);
    return (uint)this;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x10))))(*(int * PTR32 *)(this + 8) GEN_EDX_ARG,&REFG(undefined1, 0x1119e80),6);
  return (uint)this;
}

/* ref: hkOstream::WriteStringBuf */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda0470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  if (*param_1 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_FWD,*param_1,param_1[1] - 1);
    return (uint)this;
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x10))))(piVar1 GEN_EDX_ARG,&REFG(undefined1, 0x1119e80),6);
  return (uint)this;
}

/* ref: FUN_00da04b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da04b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda04b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  LPVOID pvVar1;
  undefined * this_00;
  uint uVar2;
  
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113bf10));
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x14)));
  *((undefined2 *)GEN_TOP(((int)this_00 + 4))) = 0x14;
  uVar2 = F_00da0820(this_00 GEN_EDX_ARG,param_1,1);
  *((uint *)GEN_TOP(((int)this + 8))) = uVar2;
  return (uint)this;
}

/* ref: FUN_00da0540 */
GEN_LIB GEN_FRAME unsigned int F_00da0540(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda0540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00da0570 */
GEN_LIB GEN_FRAME uint F_00da0570(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda0570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00da05c0 */
GEN_LIB GEN_FRAME uint F_00da05c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda05c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: hkOstream::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da05f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda05f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d9fda0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00da0630 */
GEN_LIB GEN_FRAME uint F_00da0630(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda0630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkMemoryTrackStreamWriter::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da0660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda0660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(this + 8);
  return (piVar1[5] - 1 + piVar1[3]) * *piVar1 + piVar1[1];
}

/* ref: FUN_00da0680 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0680(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda0680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00db9df0(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x1c);
  }
  return (uint)param_1;
}

/* ref: FUN_00da06c0 */
GEN_LIB GEN_FRAME uint F_00da06c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda06c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00da06f0 */
GEN_LIB GEN_FRAME uint F_00da06f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda06f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  *((short *)GEN_TOP((uVar2 + 4))) = (short)param_1;
  return uVar2;
}

/* ref: FUN_00da0720 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00da0720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda0720u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * this_00;
  LPVOID pvVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x113bee4));
  if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
    this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + 8)));
    if (this_00 != ((undefined *)GEN_TOP(0x0))) {
      F_00db9df0(this_00 GEN_EDX_FWD);
      pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,this_00);
    }
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
    return;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return;
}

/* ref: hkMemoryTrackStreamWriter::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0770(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda0770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined * this;
  LPVOID pvVar1;
  
  *param_1 = (*(undefined * PTR32 (*)[10])REFP(0x113bee4));
  if ((param_1[3] == 0) && (this = ((undefined *)GEN_TOP(param_1[2])), this != ((undefined *)GEN_TOP(0x0)))) {
    F_00db9df0(this GEN_EDX_FWD);
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,this);
  }
  *param_1 = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*(ushort *)(param_1 + 1));
  }
  return (uint)param_1;
}

/* ref: FUN_00da07e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da07e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda07e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  iVar3 = *((int *)GEN_TOP((iVar1 + 4))) + 1;
  uVar4 = *((uint *)GEN_TOP((iVar1 + 8))) & 0x3fffffff;
  if ((int)uVar4 < iVar3) {
    iVar2 = uVar4 * 2;
    if (iVar3 < iVar2) {
      iVar3 = iVar2;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),iVar1,iVar3,1);
  }
  uVar4 = (*((int * PTR32 *)GEN_TOP(((int)this + 8))))[1];
  *((undefined1 *)GEN_TOP((uVar4 + **((int * PTR32 *)GEN_TOP(((int)this + 8)))))) = 0;
  return uVar4;
}

/* ref: FUN_00da0820 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda0820u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *((undefined2 *)GEN_TOP(((int)this + 6))) = 1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x113bf78));
  *((int *)GEN_TOP(((int)this + 8))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *((undefined4 *)GEN_TOP((param_1 + 4)));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = param_2;
  iVar2 = *((int *)GEN_TOP((param_1 + 4))) + 1;
  uVar3 = *((uint *)GEN_TOP((param_1 + 8))) & 0x3fffffff;
  if ((int)uVar3 < iVar2) {
    iVar1 = uVar3 * 2;
    if (iVar2 < iVar1) {
      iVar2 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516ac),param_1,iVar2,1);
  }
  *((undefined1 *)GEN_TOP(((*((int * PTR32 *)GEN_TOP(((int)this + 8))))[1] + **((int * PTR32 *)GEN_TOP(((int)this + 8)))))) = 0;
  return (uint)this;
}

/* ref: hkArrayStreamWriter::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda0890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkArrayStreamWriter::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da08a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda08a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkArrayStreamWriter::vf8 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da08b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda08b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0xc)));
}

/* ref: hkArrayStreamWriter::vf2 */
GEN_LIB GEN_NOFRAME uint F_00da08c0(void)
{
  GEN_ENTER(0xda08c0u, 0u, 0u, 0u, 0u);
  return 0x15e0008;
}

/* ref: FUN_00da08d0 */
GEN_LIB GEN_FRAME uint F_00da08d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda08d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: FUN_00da0900 */
GEN_LIB GEN_FRAME unsigned int F_00da0900(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda0900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: FUN_00da0930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0930(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda0930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 & 0x3fffffff);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return (uint)param_1;
}

/* ref: FUN_00da09a0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00da09a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda09a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined4 * puVar2;
  uint uVar3;
  LPVOID pvVar4;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x10)));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[10])REFP(0x113bf78));
  if (iVar1 == 0) {
    puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)));
    if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
      uVar3 = puVar2[2];
      puVar2[1] = 0;
      if (-1 < (int)uVar3) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*puVar2,uVar3 & 0x3fffffff)
        ;
      }
      *puVar2 = 0;
      puVar2[2] = 0x80000000;
      pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x2c))) GEN_EDX_ARG,puVar2);
    }
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
    return;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return;
}

/* ref: hkArrayStreamWriter::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0a20(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda0a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00da09a0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00da0a60 */
GEN_LIB GEN_FRAME uint F_00da0a60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda0a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00da0a80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0a80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda0a80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint in_ecx;
  
  F_00d9fd70(this GEN_EDX_FWD,0);
  iVar1 = param_1 - 0x20 + param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113bfb0));
  if (iVar1 != 0) {
    in_ecx = F_00dba580(iVar1 GEN_EDX_ARG,param_1,param_2 - 0x20,1);
    *((uint *)GEN_TOP(((int)this + 8))) = in_ecx;
    F_00d91830(in_ecx GEN_EDX_ARG);
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  F_00d91830(0 GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00da0ae0 */
GEN_LIB GEN_FRAME uint F_00da0ae0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda0ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x210, 0, 4);
  code * pcVar1;
  undefined * this;
  undefined * phVar2;
  uint uVar3;
  int iVar4;
  char * pcVar5;
  undefined * puVar6;
  undefined * puVar7;
  char * pcVar8;
  char * pcVar9;
  char * pcVar10;
  char * pcVar11;
  char * pcVar12;
  
  F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  iVar4 = (int)*((short *)GEN_TOP((param_1 + 6)));
  pcVar12 = ((char *)REFP(0x113c110));
  pcVar11 = ((char *)REFP(0x113c0f4));
  pcVar10 = 
  ((char *)REFP(0x113c088))
  ;
  pcVar9 = ((char *)REFP(0x113c054));
  pcVar8 = ((char *)REFP(0x113c01c));
  puVar7 = &REFG(undefined, 0x113c018);
  puVar6 = &REFG(undefined, 0x113c010);
  pcVar5 = ((char *)REFP(0x113bffc));
  this = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((char *)REFP(0x113bfd8)))));
  phVar2 = ((undefined *)GEN_TOP(F_00d9fde0(this GEN_EDX_ARG,param_1)));
  phVar2 = ((undefined *)GEN_TOP(F_00d9fe80(phVar2 GEN_EDX_ARG,pcVar5)));
  phVar2 = ((undefined *)GEN_TOP(F_00d9ff40(phVar2 GEN_EDX_ARG,iVar4)));
  phVar2 = ((undefined *)GEN_TOP(F_00d9fe80(phVar2 GEN_EDX_ARG,puVar6)));
  phVar2 = ((undefined *)GEN_TOP(F_00d9fe80(phVar2 GEN_EDX_ARG,param_2)));
  phVar2 = ((undefined *)GEN_TOP(F_00d9fe80(phVar2 GEN_EDX_ARG,puVar7)));
  phVar2 = ((undefined *)GEN_TOP(F_00d9fe80(phVar2 GEN_EDX_ARG,pcVar8)));
  phVar2 = ((undefined *)GEN_TOP(F_00d9fe80(phVar2 GEN_EDX_ARG,pcVar9)));
  phVar2 = ((undefined *)GEN_TOP(F_00d9fe80(phVar2 GEN_EDX_ARG,pcVar10)));
  phVar2 = ((undefined *)GEN_TOP(F_00d9fe80(phVar2 GEN_EDX_ARG,pcVar11)));
  F_00d9fe80(phVar2 GEN_EDX_ARG,pcVar12);
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,3,0x2c66f2d8,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x113bfbc)),0x21);
  if (uVar3 != 0) {
    pcVar1 = ((code *)GEN_TOP(swi(3)));
    uVar3 = (*pcVar1)();
    return uVar3;
  }
  uVar3 = F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
  return uVar3;
}

/* ref: FUN_00da0bc0 */
GEN_LIB GEN_FRAME uint F_00da0bc0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda0bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_FRAME_DECL_TOP(0x210, 0, 4);
  code * pcVar1;
  uint uVar2;
  
  F_00da0a80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
  F_00d9fe80(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG,param_1);
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                    (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,3,0x2636fe25,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x113bfbc)),0x28);
  if (uVar2 != 0) {
    pcVar1 = ((code *)GEN_TOP(swi(3)));
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  uVar2 = F_00d9fda0(((undefined1 *)(gen_frame + 0x200)) GEN_EDX_ARG);
  return uVar2;
}

/* ref: FUN_00da0c20 */
GEN_LIB GEN_FRAME uint F_00da0c20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda0c20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkErrStream::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da0c50(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda0c50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00d9fda0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: hkString::ToUpper */
GEN_LIB GEN_FRAME byte F_00da0c90(GEN_P(byte param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda0c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  byte bVar1;
  
  bVar1 = param_1;
  if ((byte)(param_1 + 0x9f) < 0x1a) {
    bVar1 = param_1 - 0x20;
  }
  return bVar1;
}

/* ref: hkString::ToLower */
GEN_LIB GEN_FRAME byte F_00da0cb0(GEN_P(byte param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda0cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte param_1 = (byte)gen_a0;)
  byte bVar1;
  
  bVar1 = param_1;
  if ((byte)(param_1 + 0xbf) < 0x1a) {
    bVar1 = param_1 + 0x20;
  }
  return bVar1;
}

/* ref: hkString::VSnprintf */
GEN_LIB GEN_FRAME uint F_00da0cd0(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(gen_size32 param_2, unsigned int gen_a1), GEN_P(char * param_3, unsigned int gen_a2), GEN_P(undefined * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xda0cd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_size32 param_2 = (gen_size32)gen_a1;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined * param_4 = (undefined *)(uintptr_t)gen_a3;)
  uint uVar1;
  
  uVar1 = F_01051c9c(param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: hkString::Snprintf */
GEN_LIB GEN_FRAME uint F_00da0ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, ...)
{
  GEN_ENTER(0xda0ce0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[35];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  { va_list gen_va; va_start(gen_va, gen_a2);
    for (int gen_i = 3; gen_i < 35; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * param_1 = (char *)(uintptr_t)gen_a0;
  gen_size32 param_2 = (gen_size32)gen_a1;
  char * param_3 = (char *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_01051c9c(param_1,param_2,param_3,((undefined *)&gen_args[3]));
  return uVar1;
}

/* ref: hkString::Sprintf */
GEN_LIB GEN_FRAME uint F_00da0d00(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xda0d00u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  char * param_1 = (char *)(uintptr_t)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c576a9(param_1,param_2,((undefined *)&gen_args[2]));
  return uVar1;
}

/* ref: hkString::StrCmp */
GEN_LIB GEN_FRAME uint F_00da0d20(GEN_P(byte * param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda0d20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(byte * param_2 = (byte *)(uintptr_t)gen_a1;)
  byte bVar1;
  byte * pbVar2;
  byte * pbVar3;
  bool bVar4;
  
  pbVar2 = param_1;
  pbVar3 = param_2;
  while( true ) {
    bVar1 = *pbVar2;
    bVar4 = bVar1 < *pbVar3;
    if (bVar1 != *pbVar3) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = pbVar2[1];
    bVar4 = bVar1 < pbVar3[1];
    if (bVar1 != pbVar3[1]) break;
    pbVar2 = pbVar2 + 2;
    pbVar3 = pbVar3 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (1 - (uint)bVar4) - (uint)(bVar4 != 0);
}

/* ref: hkString::StrNcmp */
GEN_LIB GEN_FRAME uint F_00da0d60(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1), GEN_P(gen_size32 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda0d60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 param_3 = (gen_size32)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c4b813(param_1,param_2,param_3);
  return uVar1;
}

/* ref: hkString::StrCasecmp */
GEN_LIB GEN_FRAME uint F_00da0d70(GEN_P(int param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda0d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  byte bVar1;
  byte bVar2;
  char * pcVar3;
  
  pcVar3 = param_2;
  while( true ) {
    if ((pcVar3[param_1 - (int)param_2] == '\0') && (*pcVar3 == '\0')) {
      return 0;
    }
    bVar1 = F_00da0cb0(pcVar3[param_1 - (int)param_2]);
    bVar2 = F_00da0cb0(*pcVar3);
    if ((char)bVar1 < (char)bVar2) {
      return 0xffffffff;
    }
    if ((char)bVar2 < (char)bVar1) break;
    pcVar3 = pcVar3 + 1;
  }
  return 1;
}

/* ref: hkString::StrNcasecmp */
GEN_LIB GEN_FRAME uint F_00da0dc0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda0dc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  byte bVar1;
  byte bVar2;
  char * pcVar3;
  int iVar4;
  
  iVar4 = 0;
  pcVar3 = param_2;
  while( true ) {
    if (((pcVar3[param_1 - (int)param_2] == '\0') && (*pcVar3 == '\0')) || (param_3 <= iVar4)) {
      return 0;
    }
    bVar1 = F_00da0cb0(pcVar3[param_1 - (int)param_2]);
    bVar2 = F_00da0cb0(*pcVar3);
    if ((char)bVar1 < (char)bVar2) {
      return 0xffffffff;
    }
    if ((char)bVar2 < (char)bVar1) break;
    iVar4 = iVar4 + 1;
    pcVar3 = pcVar3 + 1;
  }
  return 1;
}

/* ref: hkString::StrCpy */
GEN_LIB GEN_FRAME unsigned int F_00da0e20(GEN_P(int param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda0e20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  char * pcVar2;
  
  pcVar2 = param_2;
  do {
    cVar1 = *pcVar2;
    pcVar2[param_1 - (int)param_2] = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  return 0;
}

/* ref: hkString::StrNcpy */
GEN_LIB GEN_FRAME uint F_00da0e40(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1), GEN_P(gen_size32 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda0e40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(gen_size32 param_3 = (gen_size32)gen_a2;)
  char * pcVar1;
  
  pcVar1 = ((char *)GEN_TOP(0x0));
  if (param_3 != 0) {
    pcVar1 = F_00c52620(param_1,param_2,param_3);
  }
  return (uint)pcVar1;
}

/* ref: hkString::StrLen */
GEN_LIB GEN_FRAME uint F_00da0e60(GEN_P(char * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda0e60u, gen_a0, 0u, 0u, 0u);
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

/* ref: hkString::AtoUlong */
GEN_LIB GEN_FRAME uint F_00da0e80(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda0e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulong uVar1;
  
  uVar1 = F_00c4abb6(param_1,((char * PTR32 *)GEN_TOP(0x0)),param_2);
  return uVar1;
}

/* ref: hkString::AtoInt64 */
GEN_LIB GEN_FRAME ulonglong F_00da0ea0(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda0ea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00c4afd5(param_1,((char * PTR32 *)GEN_TOP(0x0)),param_2);
  return uVar1;
}

/* ref: hkString::Atof */
GEN_LIB GEN_FRAME float F_00da0ec0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda0ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  double dVar1;
  
  dVar1 = F_00c52474(param_1,0);
  return (float)dVar1;
}

/* ref: hkString::StrStr */
GEN_LIB GEN_FRAME uint F_00da0ee0(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(char * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda0ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_2 = (char *)(uintptr_t)gen_a1;)
  char * pcVar1;
  
  pcVar1 = F_00c46a10(param_1,param_2);
  return (uint)pcVar1;
}

/* ref: hkString::StrChr */
GEN_LIB GEN_FRAME uint F_00da0ef0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda0ef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00c51da0(param_1,(undefined1)param_2);
  return uVar1;
}

/* ref: hkString::StrRchr */
GEN_LIB GEN_FRAME uint F_00da0f00(GEN_P(char * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda0f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  char * pcVar1;
  
  pcVar1 = F_00c51220(param_1,param_2);
  return (uint)pcVar1;
}

/* ref: hkString::StrDup_00da0f10 */
GEN_LIB GEN_FRAME uint F_00da0f10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda0f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da0e60(param_1);
  uVar1 = F_00d92460(param_2,uVar1 + 1);
  F_00da0e20(uVar1,param_1);
  return uVar1;
}

/* ref: hkString::StrFree */
GEN_LIB GEN_FRAME uint F_00da0f40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda0f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00d924b0(param_2,param_1);
  return uVar1;
}

/* ref: hkString::StrNdup */
GEN_LIB GEN_FRAME uint F_00da0f60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda0f60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00da0e60(param_1);
  if ((int)param_2 < (int)uVar1) {
    uVar1 = param_2;
  }
  uVar2 = F_00d92460(param_3,uVar1 + 1);
  F_00da0e40(uVar2,param_1,uVar1);
  *((undefined1 *)GEN_TOP((uVar2 + uVar1))) = 0;
  return uVar2;
}

/* ref: hkString::StrLwr */
GEN_LIB GEN_FRAME uint F_00da0fb0(GEN_P(byte * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda0fb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  byte bVar1;
  byte * pbVar2;
  
  bVar1 = *param_1;
  pbVar2 = param_1;
  while (bVar1 != 0) {
    bVar1 = F_00da0cb0(*pbVar2);
    *pbVar2 = bVar1;
    pbVar2 = pbVar2 + 1;
    bVar1 = *pbVar2;
  }
  return (uint)param_1;
}

/* ref: hkString::StrUpr */
GEN_LIB GEN_FRAME uint F_00da0fe0(GEN_P(byte * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda0fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(byte * param_1 = (byte *)(uintptr_t)gen_a0;)
  byte bVar1;
  byte * pbVar2;
  
  bVar1 = *param_1;
  pbVar2 = param_1;
  while (bVar1 != 0) {
    bVar1 = F_00da0c90(*pbVar2);
    *pbVar2 = bVar1;
    pbVar2 = pbVar2 + 1;
    bVar1 = *pbVar2;
  }
  return (uint)param_1;
}

/* ref: hkString::MemCpy */
GEN_LIB GEN_FRAME uint F_00da1010(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda1010u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(param_1,param_2,param_3);
  return (uint)uVar1;
}

/* ref: hkString::MemMove */
GEN_LIB GEN_FRAME uint F_00da1020(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda1020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00c46e20(param_1,param_2,param_3);
  return uVar1;
}

/* ref: hkString::MemSet */
GEN_LIB GEN_FRAME uint F_00da1030(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(gen_size32 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda1030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(gen_size32 param_3 = (gen_size32)gen_a2;)
  undefined * pvVar1;
  
  pvVar1 = F_00c48350(param_1,param_2,param_3);
  return (uint)pvVar1;
}

/* ref: hkString::MemCmp */
GEN_LIB GEN_FRAME uint F_00da1040(GEN_P(byte * param_1, unsigned int gen_a0), GEN_P(byte * param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda1040u, gen_a0, gen_a1, gen_a2, 0u);
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
    if (*(int *)pbVar3 != *(int *)pbVar2) goto LAB_00da106b;
    pbVar2 = pbVar2 + 4;
    pbVar3 = pbVar3 + 4;
  }
  if (uVar4 == 0) {
    return 0;
  }
LAB_00da106b: ;
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

/* ref: hkString::BeginsWith */
GEN_LIB GEN_FRAME uint F_00da10c0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(char * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda10c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a2;)
  char * pcVar1;
  char cVar2;
  
  cVar2 = *param_3;
  if (cVar2 != '\0') {
    pcVar1 = param_3;
    do {
      if (pcVar1[param_2 - (int)param_3] != cVar2) {
        *param_1 = 0;
        return (uint)param_1;
      }
      cVar2 = pcVar1[1];
      pcVar1 = pcVar1 + 1;
    } while (cVar2 != '\0');
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkString::EndsWith */
GEN_LIB GEN_FRAME uint F_00da10f0(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda10f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = F_00da0e60(param_2);
  uVar2 = F_00da0e60(param_3);
  if ((int)uVar1 < (int)uVar2) {
LAB_00da1111: ;
    *param_1 = 0;
    return (uint)param_1;
  }
  iVar3 = 0;
  if (0 < (int)uVar2) {
    do {
      if (*((char *)GEN_TOP(((uVar1 - uVar2) + param_2 + iVar3))) != *((char *)GEN_TOP((iVar3 + param_3))))
      goto LAB_00da1111;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)uVar2);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkString::LastIndexOf */
GEN_LIB GEN_FRAME uint F_00da1140(GEN_P(int param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda1140u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da0f00(param_1,(int)param_2);
  if (uVar1 != 0) {
    return uVar1 - param_1;
  }
  return 0xffffffff;
}

/* ref: hkString::IndexOf */
GEN_LIB GEN_FRAME uint F_00da1170(GEN_P(int param_1, unsigned int gen_a0), GEN_P(char param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xda1170u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  uVar2 = param_3;
  if (0 < (int)param_3) {
    do {
      if (*((char *)GEN_TOP((iVar1 + param_1))) == '\0') {
        return 0xffffffff;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_3);
  }
  for (; ((int)uVar2 < param_4 && (*((char *)GEN_TOP((uVar2 + param_1))) != '\0')); uVar2 = uVar2 + 1) {
    if (*((char *)GEN_TOP((uVar2 + param_1))) == param_2) {
      return uVar2;
    }
  }
  return 0xffffffff;
}

/* ref: hkString::MemClear16 */
GEN_LIB GEN_FRAME unsigned int F_00da11c0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda11c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  iVar2 = param_2 >> 4;
  puVar1 = param_1;
  while (iVar2 = iVar2 - 1, -1 < iVar2) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1 = puVar1 + 4;
  }
  return 0;
}

/* ref: FUN_00da11e0 */
GEN_LIB GEN_FRAME uint F_00da11e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda11e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00da0f40(param_1,*((undefined4 *)GEN_TOP(((int)pvVar1 + 0x2c))));
  return uVar2;
}

/* ref: FUN_00da1210 */
GEN_LIB GEN_FRAME uint F_00da1210(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda1210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00da0f10(param_1,*((undefined4 *)GEN_TOP(((int)pvVar1 + 0x2c))));
  return uVar2;
}

/* ref: hkString::StrNdup_00da1240 */
GEN_LIB GEN_FRAME uint F_00da1240(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda1240u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = F_00da0f60(param_1,param_2,*((undefined4 *)GEN_TOP(((int)pvVar1 + 0x2c))));
  return uVar2;
}

/* ref: hkString::FindAllOccurrences */
GEN_LIB GEN_FRAME uint F_00da1270(GEN_P(undefined1 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(char * param_3, unsigned int gen_a2), GEN_P(int * param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xda1270u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(char * param_3 = (char *)(uintptr_t)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  char cVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  
  pcVar3 = param_3;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = F_00da0ee0(param_2,param_3);
  *param_1 = 0;
  while( true ) {
    if (uVar4 == 0) {
      return (uint)param_1;
    }
    uVar2 = param_4[2];
    *param_1 = 1;
    if (param_4[1] == (uVar2 & 0x3fffffff)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_4,4);
    }
    *((uint *)GEN_TOP((*param_4 + param_4[1] * 4))) = uVar4 - param_2;
    param_4[1] = param_4[1] + 1;
    if (param_5 == 0) break;
    uVar4 = F_00da0ee0(pcVar3 + (uVar4 - (int)(param_3 + 1)),param_3);
  }
  return (uint)param_1;
}

/* ref: FUN_00da1310 */
GEN_LIB GEN_FRAME uint F_00da1310(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda1310u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: hkMonitorStream::IsBufferAllocatedOnTheHeap */
GEN_LIB GEN_FRAME uint F_00da1320(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined1 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda1320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined1 *)GEN_TOP((param_1 + 0x10)));
  return (uint)param_2;
}

/* ref: hkMonitorStream::Reset */
GEN_LIB GEN_FRAME uint F_00da1330(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda1330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  param_1[1] = *param_1;
  return (uint)param_1;
}

/* ref: hkMonitorStream::Init */
GEN_LIB GEN_NOFRAME uint F_00da1340(void)
{
  GEN_ENTER(0xda1340u, 0u, 0u, 0u, 0u);
  LPVOID pvVar1;
  undefined4 * lpTlsValue;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  lpTlsValue = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) GEN_EDX_ARG,0x14)))
  ;
  gen_imp_TlsSetValue(REFG(undefined4, 0x15dff7c),lpTlsValue);
  *(undefined1 *)(lpTlsValue + 4) = 0;
  *lpTlsValue = 0;
  lpTlsValue[2] = 0;
  lpTlsValue[1] = 0;
  lpTlsValue[3] = 0;
  return 0;
}

/* ref: hkMonitorStream::Quit */
GEN_LIB GEN_FRAME uint F_00da1380(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda1380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  LPVOID pvVar3;
  LPVOID pvVar4;
  uint uVar5;
  
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15dff7c));
  iVar1 = *param_1;
  if ((iVar1 != 0) && ((char)param_1[4] != '\0')) {
    iVar2 = param_1[2];
    pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x30))) + 0x10))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x30))) GEN_EDX_ARG,iVar1,iVar2 - iVar1);
  }
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x30))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x30))) GEN_EDX_ARG,pvVar3,0x14);
  uVar5 = gen_imp_TlsSetValue(REFG(undefined4, 0x15dff7c),(LPVOID)0x0);
  return uVar5;
}

/* ref: hkMonitorStream::Resize */
GEN_LIB GEN_FRAME uint F_00da13f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xda13f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  uint uVar1;
  LPVOID pvVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(*(uint * PTR32 *)&gen_args[0]);
  uVar1 = (*(uint * PTR32 *)&gen_args[0])[2];
  uVar4 = (*(uint *)&gen_args[1]);
  if ((*(uint *)&gen_args[1]) != uVar1 - uVar3) {
    if (0 < (int)(*(uint *)&gen_args[1])) {
      if ((uVar3 != 0) && ((char)(*(uint * PTR32 *)&gen_args[0])[4] != '\0')) {
        pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x30))) + 0x10))))
                  (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x30))) GEN_EDX_ARG,uVar3,uVar1 - uVar3);
      }
      *((undefined1 *)GEN_TOP(((*(uint * PTR32 *)&gen_args[0]) + 4))) = 1;
      pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x30))) + 0xc))))
                        (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x30))) GEN_EDX_ARG,&(*(uint *)&gen_args[1]));
      *(*(uint * PTR32 *)&gen_args[0]) = uVar3;
      (*(uint * PTR32 *)&gen_args[0])[1] = uVar3;
      (*(uint * PTR32 *)&gen_args[0])[2] = uVar3 + (*(uint *)&gen_args[1]);
      uVar3 = (uVar3 + (*(uint *)&gen_args[1])) - 0x20;
      (*(uint * PTR32 *)&gen_args[0])[3] = uVar3;
      return uVar3;
    }
    uVar4 = F_00da1380((*(uint * PTR32 *)&gen_args[0]));
  }
  return uVar4;
}

/* ref: hkMonitorStream::SetStaticBuffer */
GEN_LIB GEN_FRAME uint F_00da1480(GEN_P(int * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda1480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  
  if ((char)param_1[4] != '\0') {
    F_00da13f0(param_1,0);
  }
  *(undefined1 *)(param_1 + 4) = 0;
  *param_1 = param_2;
  param_1[1] = param_2;
  param_1[2] = param_2 + param_3;
  uVar1 = (param_2 + param_3) - 0x20;
  param_1[3] = uVar1;
  return uVar1;
}

/* ref: hkThreadLocalPointer::hkThreadLocalPointer_00da14e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da14e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda14e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  DWORD DVar1;
  
  DVar1 = gen_imp_TlsAlloc();
  *(DWORD *)this = DVar1;
  return (uint)this;
}

/* ref: hkThreadLocalPointer::SetValue_00da1500 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00da1500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(LPVOID param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda1500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(LPVOID param_1 = (LPVOID)gen_a1;)
  return (uint)(gen_imp_TlsSetValue(*(DWORD *)this,param_1));
}

/* ref: hkMemoryAllocator::BlockAllocArray */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da1520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda1520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD,param_1 * 0x14);
  return uVar1;
}

/* ref: hkMemoryAllocator::BlockFreeArray */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da1540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda1540u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD,param_1,param_2 * 0x14);
  return uVar1;
}

/* ref: FUN_00da1560 */
GEN_LIB GEN_FRAME uint F_00da1560(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda1560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return *((uint *)GEN_TOP((param_1 + 8)));
}

/* ref: Global::ThreadAllocArray20 */
GEN_LIB GEN_FRAME uint F_00da1580(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda1580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) + 4))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) GEN_EDX_ARG,param_1 * 0x14);
  return uVar2;
}

/* ref: FUN_00da15b0 */
GEN_LIB GEN_FRAME uint F_00da15b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda15b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) + 0x10))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) GEN_EDX_ARG,param_1,param_2);
  return uVar2;
}

/* ref: Global::ThreadReallocArray20 */
GEN_LIB GEN_FRAME uint F_00da15e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda15e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) GEN_EDX_ARG,param_1,param_2 * 0x14);
  return uVar2;
}

/* ref: Global::ThreadFree */
GEN_LIB GEN_FRAME uint F_00da1610(unsigned int gen_a0)
{
  GEN_ENTER(0xda1610u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  int * piVar1;
  code * pcVar2;
  undefined4 * puVar3;
  LPVOID pvVar4;
  uint uVar5;
  
  pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar3 = (*(undefined4 * PTR32 *)&gen_args[0]);
  (*(undefined4 * PTR32 *)&gen_args[0]) = ((undefined4 *)GEN_TOP(*(*(undefined4 * PTR32 *)&gen_args[0])));
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x30)));
  pcVar2 = *((gen_code32 *)GEN_TOP((*piVar1 + 0xc)));
  uVar5 = (*pcVar2)(piVar1,&(*(undefined4 * PTR32 *)&gen_args[0]));
  *puVar3 = (*(undefined4 * PTR32 *)&gen_args[0]);
  return uVar5;
}

/* ref: Global::Matrix34Transpose3x3 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00da1640(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda1640u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = in_ecx[6];
  uVar2 = in_ecx[1];
  uVar3 = in_ecx[2];
  *in_ecx = *in_ecx;
  in_ecx[1] = in_ecx[4];
  in_ecx[2] = in_ecx[8];
  in_ecx[3] = in_ecx[9];
  in_ecx[4] = uVar2;
  in_ecx[5] = in_ecx[5];
  in_ecx[6] = in_ecx[9];
  in_ecx[7] = in_ecx[0xb];
  in_ecx[8] = uVar3;
  in_ecx[9] = uVar1;
  in_ecx[10] = in_ecx[10];
  in_ecx[0xb] = in_ecx[0xb];
  return;
}

/* ref: Global::FloatSqrt */
GEN_LIB GEN_FRAME float F_00da1720(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xda1720u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return SQRT(param_1);
}

/* ref: Global::FloatRsqrt */
GEN_LIB GEN_FRAME float F_00da1730(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xda1730u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return REFG(float, 0x1087f04) / SQRT(param_1);
}

/* ref: Global::Matrix34Multiply_00da1790 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00da1790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda1790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
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
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = param_2[3];
  fVar5 = param_1[8];
  fVar6 = param_1[9];
  fVar7 = param_1[10];
  fVar8 = param_1[0xb];
  fVar9 = param_1[4];
  fVar10 = param_1[5];
  fVar11 = param_1[6];
  *(float *)this = param_1[2] * fVar3 + (*param_1 * fVar1 + param_1[1] * fVar2);
  *((float *)GEN_TOP(((int)this + 4))) = fVar3 * fVar11 + (fVar1 * fVar9 + fVar2 * fVar10);
  *((float *)GEN_TOP(((int)this + 8))) = fVar7 * fVar3 + (fVar5 * fVar1 + fVar6 * fVar2);
  *((float *)GEN_TOP(((int)this + 0xc))) = fVar8 * fVar4 + (fVar6 * fVar2 + fVar8 * fVar4);
  fVar1 = param_2[4];
  fVar2 = param_2[5];
  fVar3 = param_2[6];
  fVar4 = param_2[7];
  fVar5 = param_1[8];
  fVar6 = param_1[9];
  fVar7 = param_1[10];
  fVar8 = param_1[0xb];
  fVar9 = param_1[4];
  fVar10 = param_1[5];
  fVar11 = param_1[6];
  *((float *)GEN_TOP(((int)this + 0x10))) = param_1[2] * fVar3 + (*param_1 * fVar1 + param_1[1] * fVar2);
  *((float *)GEN_TOP(((int)this + 0x14))) = fVar3 * fVar11 + (fVar1 * fVar9 + fVar2 * fVar10);
  *((float *)GEN_TOP(((int)this + 0x18))) = fVar7 * fVar3 + (fVar5 * fVar1 + fVar6 * fVar2);
  *((float *)GEN_TOP(((int)this + 0x1c))) = fVar8 * fVar4 + (fVar6 * fVar2 + fVar8 * fVar4);
  fVar1 = param_2[8];
  fVar2 = param_2[9];
  fVar3 = param_2[10];
  fVar4 = param_2[0xb];
  fVar5 = param_1[8];
  fVar6 = param_1[9];
  fVar7 = param_1[10];
  fVar8 = param_1[0xb];
  fVar9 = param_1[4];
  fVar10 = param_1[5];
  fVar11 = param_1[6];
  *((float *)GEN_TOP(((int)this + 0x20))) = param_1[2] * fVar3 + (*param_1 * fVar1 + param_1[1] * fVar2);
  *((float *)GEN_TOP(((int)this + 0x24))) = fVar3 * fVar11 + (fVar1 * fVar9 + fVar2 * fVar10);
  *((float *)GEN_TOP(((int)this + 0x28))) = fVar7 * fVar3 + (fVar5 * fVar1 + fVar6 * fVar2);
  *((float *)GEN_TOP(((int)this + 0x2c))) = fVar8 * fVar4 + (fVar6 * fVar2 + fVar8 * fVar4);
  return 0;
}

/* ref: Global::Matrix34ScaleRows */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da1860(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda1860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = *param_2 * *in_ecx;
  in_ecx[1] = fVar1 * in_ecx[1];
  in_ecx[2] = fVar2 * in_ecx[2];
  in_ecx[3] = fVar3 * in_ecx[3];
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  in_ecx[4] = in_ecx[4] * *param_2;
  in_ecx[5] = in_ecx[5] * fVar1;
  in_ecx[6] = in_ecx[6] * fVar2;
  in_ecx[7] = in_ecx[7] * fVar3;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  in_ecx[8] = in_ecx[8] * *param_2;
  in_ecx[9] = in_ecx[9] * fVar1;
  in_ecx[10] = in_ecx[10] * fVar2;
  in_ecx[0xb] = in_ecx[0xb] * fVar3;
  return (uint)param_2;
}

/* ref: Global::Matrix34SetCrossProduct */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00da1890(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda1890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  *in_ecx = 0;
  in_ecx[1] = (undefined4)gen_fl2bits(fVar3);
  in_ecx[2] = (undefined4)gen_fl2bits(0.0 - fVar2);
  in_ecx[3] = 0;
  in_ecx[4] = (undefined4)gen_fl2bits(0.0 - fVar3);
  in_ecx[5] = 0;
  in_ecx[6] = (undefined4)gen_fl2bits(fVar1);
  in_ecx[7] = 0;
  in_ecx[8] = (undefined4)gen_fl2bits(fVar2);
  in_ecx[9] = (undefined4)gen_fl2bits(0.0 - fVar1);
  in_ecx[10] = 0;
  in_ecx[0xb] = 0;
  return 0;
}

/* ref: Global::Matrix34SetScaled */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da18f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda18f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(float *)this = *param_1 * *param_2;
  *((float *)GEN_TOP(((int)this + 4))) = fVar1 * fVar4;
  *((float *)GEN_TOP(((int)this + 8))) = fVar2 * fVar5;
  *((float *)GEN_TOP(((int)this + 0xc))) = fVar3 * fVar6;
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *((float *)GEN_TOP(((int)this + 0x10))) = param_2[4] * *param_1;
  *((float *)GEN_TOP(((int)this + 0x14))) = fVar1 * fVar4;
  *((float *)GEN_TOP(((int)this + 0x18))) = fVar2 * fVar5;
  *((float *)GEN_TOP(((int)this + 0x1c))) = fVar3 * fVar6;
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *((float *)GEN_TOP(((int)this + 0x20))) = param_2[8] * *param_1;
  *((float *)GEN_TOP(((int)this + 0x24))) = fVar1 * fVar4;
  *((float *)GEN_TOP(((int)this + 0x28))) = fVar2 * fVar5;
  *((float *)GEN_TOP(((int)this + 0x2c))) = fVar3 * fVar6;
  return (uint)param_1;
}

/* ref: Global::Matrix34Add */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da1920(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda1920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = *param_2 + *in_ecx;
  in_ecx[1] = fVar1 + in_ecx[1];
  in_ecx[2] = fVar2 + in_ecx[2];
  in_ecx[3] = fVar3 + in_ecx[3];
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  in_ecx[4] = param_2[4] + in_ecx[4];
  in_ecx[5] = fVar1 + in_ecx[5];
  in_ecx[6] = fVar2 + in_ecx[6];
  in_ecx[7] = fVar3 + in_ecx[7];
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  in_ecx[8] = param_2[8] + in_ecx[8];
  in_ecx[9] = fVar1 + in_ecx[9];
  in_ecx[10] = fVar2 + in_ecx[10];
  in_ecx[0xb] = fVar3 + in_ecx[0xb];
  return (uint)param_2;
}

/* ref: Global::Matrix34Subtract */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da1950(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda1950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = *in_ecx - *param_2;
  in_ecx[1] = in_ecx[1] - fVar1;
  in_ecx[2] = in_ecx[2] - fVar2;
  in_ecx[3] = in_ecx[3] - fVar3;
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  in_ecx[4] = in_ecx[4] - param_2[4];
  in_ecx[5] = in_ecx[5] - fVar1;
  in_ecx[6] = in_ecx[6] - fVar2;
  in_ecx[7] = in_ecx[7] - fVar3;
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  in_ecx[8] = in_ecx[8] - param_2[8];
  in_ecx[9] = in_ecx[9] - fVar1;
  in_ecx[10] = in_ecx[10] - fVar2;
  in_ecx[0xb] = in_ecx[0xb] - fVar3;
  return (uint)param_2;
}

/* ref: Global::ComputeJacobiRotation */
GEN_LIB GEN_FRAME unsigned int F_00da1a20(GEN_P(float in_eax, float gen_a0), GEN_P(float in_ecx, float gen_a1), GEN_P(float * in_esi, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xda1a20u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_a2, gen_a3);
  GEN_PIN(float in_eax = (float)gen_a0;)
  GEN_PIN(float in_ecx = (float)gen_a1;)
  GEN_PIN(float * in_esi = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar2 = REFG(float, 0x1087f04);
  in_esi[3] = in_eax;
  in_esi[2] = in_ecx;
  fVar1 = (*((float *)GEN_TOP((param_4 + (int)gen_fl2bits(in_eax) * 0x14))) -
          *((float *)GEN_TOP((param_4 + (int)gen_fl2bits(in_ecx) * 0x14)))) /
          (*((float *)GEN_TOP((param_4 + ((int)gen_fl2bits(in_ecx) + (int)gen_fl2bits(in_eax) * 4) * 4))) *
          REFG(float, 0x10928e4));
  fVar3 = SQRT(fVar1 * fVar1 + fVar2);
  if (*(float *)&REFG(undefined, 0x1088114) <= fVar1) {
    fVar3 = fVar3 + fVar1;
  }
  else {
    fVar3 = fVar1 - fVar3;
  }
  fVar3 = fVar2 / fVar3;
  fVar2 = fVar2 / SQRT(fVar3 * fVar3 + fVar2);
  *in_esi = fVar2;
  in_esi[1] = fVar2 * fVar3;
  return 0;
}

/* ref: Global::Matrix34SetTransposed */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00da1c00(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda1c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  local_30 = (undefined4)param_2[2];
  uStack_2c = (undefined4)((ulonglong)param_2[2] >> 0x20);
  uStack_28 = (undefined4)param_2[3];
  local_20 = (undefined4)*param_2;
  uStack_1c = (undefined4)((ulonglong)*param_2 >> 0x20);
  uStack_18 = (undefined4)param_2[1];
  local_40 = (undefined4)param_2[4];
  uStack_3c = (undefined4)((ulonglong)param_2[4] >> 0x20);
  uStack_38 = (undefined4)param_2[5];
  uStack_34 = (undefined4)((ulonglong)param_2[5] >> 0x20);
  *in_ecx = local_20;
  in_ecx[1] = local_30;
  in_ecx[2] = local_40;
  in_ecx[3] = uStack_3c;
  in_ecx[4] = uStack_1c;
  in_ecx[5] = uStack_2c;
  in_ecx[6] = uStack_3c;
  in_ecx[7] = uStack_34;
  in_ecx[8] = uStack_18;
  in_ecx[9] = uStack_28;
  in_ecx[10] = uStack_38;
  in_ecx[0xb] = uStack_34;
  return 0;
}

/* ref: Global::Matrix34MultiplyRotation */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00da1ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda1ca0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  float * pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float * pfVar5;
  int iVar6;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  local_40 = gen_bits2f((uint)*param_1);
  fStack_3c = gen_bits2f((uint)((ulonglong)*param_1 >> 0x20));
  fStack_38 = gen_bits2f((uint)param_1[1]);
  fStack_34 = gen_bits2f((uint)((ulonglong)param_1[1] >> 0x20));
  local_30 = gen_bits2f((uint)param_1[2]);
  fStack_2c = gen_bits2f((uint)((ulonglong)param_1[2] >> 0x20));
  fStack_28 = gen_bits2f((uint)param_1[3]);
  fStack_24 = gen_bits2f((uint)((ulonglong)param_1[3] >> 0x20));
  local_20 = gen_bits2f((uint)param_1[4]);
  fStack_1c = gen_bits2f((uint)((ulonglong)param_1[4] >> 0x20));
  fStack_18 = gen_bits2f((uint)param_1[5]);
  fStack_14 = gen_bits2f((uint)((ulonglong)param_1[5] >> 0x20));
  iVar6 = 2;
  pfVar5 = ((float *)GEN_TOP((param_2 + 0x20)));
  do {
    fVar2 = *pfVar5;
    fVar3 = pfVar5[1];
    fVar4 = pfVar5[2];
    pfVar1 = ((float *)GEN_TOP((((int)this - param_2) + (int)pfVar5)));
    *pfVar1 = (fVar2 * local_40 + fVar3 * local_30) + fVar4 * local_20;
    pfVar1[1] = (fVar2 * fStack_3c + fVar3 * fStack_2c) + fVar4 * fStack_1c;
    pfVar1[2] = (fVar2 * fStack_38 + fVar3 * fStack_28) + fVar4 * fStack_18;
    pfVar1[3] = (fVar2 * fStack_34 + fVar3 * fStack_24) + fVar4 * fStack_14;
    pfVar5 = pfVar5 - 4;
    iVar6 = iVar6 - 1;
  } while (-1 < iVar6);
  return 0;
}

/* ref: Global::Matrix34AddScaled */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da1f60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda1f60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(float *)this = *param_1 * *param_2 + *(float *)this;
  *((float *)GEN_TOP(((int)this + 4))) = fVar1 * fVar4 + *((float *)GEN_TOP(((int)this + 4)));
  *((float *)GEN_TOP(((int)this + 8))) = fVar2 * fVar5 + *((float *)GEN_TOP(((int)this + 8)));
  *((float *)GEN_TOP(((int)this + 0xc))) = fVar3 * fVar6 + *((float *)GEN_TOP(((int)this + 0xc)));
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *((float *)GEN_TOP(((int)this + 0x10))) = param_2[4] * *param_1 + *((float *)GEN_TOP(((int)this + 0x10)));
  *((float *)GEN_TOP(((int)this + 0x14))) = fVar1 * fVar4 + *((float *)GEN_TOP(((int)this + 0x14)));
  *((float *)GEN_TOP(((int)this + 0x18))) = fVar2 * fVar5 + *((float *)GEN_TOP(((int)this + 0x18)));
  *((float *)GEN_TOP(((int)this + 0x1c))) = fVar3 * fVar6 + *((float *)GEN_TOP(((int)this + 0x1c)));
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *((float *)GEN_TOP(((int)this + 0x20))) = param_2[8] * *param_1 + *((float *)GEN_TOP(((int)this + 0x20)));
  *((float *)GEN_TOP(((int)this + 0x24))) = fVar1 * fVar4 + *((float *)GEN_TOP(((int)this + 0x24)));
  *((float *)GEN_TOP(((int)this + 0x28))) = fVar2 * fVar5 + *((float *)GEN_TOP(((int)this + 0x28)));
  *((float *)GEN_TOP(((int)this + 0x2c))) = fVar3 * fVar6 + *((float *)GEN_TOP(((int)this + 0x2c)));
  return (uint)param_1;
}

/* ref: Global::Matrix34NearEqual */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00da1fa0(GEN_P(float * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xda1fa0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined4 in_EAX = 0;
  uint uVar4;
  undefined4 in_EDX = 0;
  undefined4 uVar5;
  
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(ABS(param_1[1] - param_2[1]) < param_3);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(ABS(*param_1 - *param_2) < param_3);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(ABS(param_1[2] - param_2[2]) < param_3);
  (*(undefined4 *)((char *)&auVar1 + 12)) = -(uint)(ABS(param_1[3] - param_2[3]) < param_3);
  uVar4 = gen_movmskps(&(auVar1));
  if ((((char)(uVar4 & 7) == '\a') &&
      ((*(undefined4 *)((char *)&auVar2 + 4)) = -(uint)(ABS(param_1[5] - param_2[5]) < param_3),
      (*(undefined4 *)((char *)&auVar2 + 0)) = -(uint)(ABS(param_1[4] - param_2[4]) < param_3),
      (*(undefined4 *)((char *)&auVar2 + 8)) = -(uint)(ABS(param_1[6] - param_2[6]) < param_3),
      (*(undefined4 *)((char *)&auVar2 + 12)) = -(uint)(ABS(param_1[7] - param_2[7]) < param_3),
      uVar5 = gen_movmskps(&(auVar2)), ((byte)uVar5 & 7) == 7)) &&
     ((*(undefined4 *)((char *)&auVar3 + 4)) = -(uint)(ABS(param_1[9] - param_2[9]) < param_3),
     (*(undefined4 *)((char *)&auVar3 + 0)) = -(uint)(ABS(param_1[8] - param_2[8]) < param_3),
     (*(undefined4 *)((char *)&auVar3 + 8)) = -(uint)(ABS(param_1[10] - param_2[10]) < param_3),
     (*(undefined4 *)((char *)&auVar3 + 12)) = -(uint)(ABS(param_1[0xb] - param_2[0xb]) < param_3),
     uVar5 = gen_movmskps(&(auVar3)), ((byte)uVar5 & 7) == 7)) {
    return 1;
  }
  return 0;
}

/* ref: Global::Matrix34NearEqualVector */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00da2020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda2020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 in_EDX = 0;
  undefined4 uVar8;
  
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = param_2[3];
  (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(ABS(*((float *)GEN_TOP(((int)this + 4))) - param_1[1]) < fVar5);
  (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(ABS(*(float *)this - *param_1) < fVar4);
  (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(ABS(*((float *)GEN_TOP(((int)this + 8))) - param_1[2]) < fVar6);
  (*(undefined4 *)((char *)&auVar1 + 12)) = -(uint)(ABS(*((float *)GEN_TOP(((int)this + 0xc))) - param_1[3]) < fVar7);
  uVar8 = gen_movmskps(&(auVar1));
  if (((((byte)uVar8 & 7) == 7) &&
      ((*(undefined4 *)((char *)&auVar2 + 4)) = -(uint)(ABS(*((float *)GEN_TOP(((int)this + 0x14))) - param_1[5]) < fVar5),
      (*(undefined4 *)((char *)&auVar2 + 0)) = -(uint)(ABS(*((float *)GEN_TOP(((int)this + 0x10))) - param_1[4]) < fVar4),
      (*(undefined4 *)((char *)&auVar2 + 8)) = -(uint)(ABS(*((float *)GEN_TOP(((int)this + 0x18))) - param_1[6]) < fVar6),
      (*(undefined4 *)((char *)&auVar2 + 12)) = -(uint)(ABS(*((float *)GEN_TOP(((int)this + 0x1c))) - param_1[7]) < fVar7),
      uVar8 = gen_movmskps(&(auVar2)), ((byte)uVar8 & 7) == 7)) &&
     ((*(undefined4 *)((char *)&auVar3 + 4)) = -(uint)(ABS(*((float *)GEN_TOP(((int)this + 0x24))) - param_1[9]) < fVar5),
     (*(undefined4 *)((char *)&auVar3 + 0)) = -(uint)(ABS(*((float *)GEN_TOP(((int)this + 0x20))) - param_1[8]) < fVar4),
     (*(undefined4 *)((char *)&auVar3 + 8)) = -(uint)(ABS(*((float *)GEN_TOP(((int)this + 0x28))) - param_1[10]) < fVar6),
     (*(undefined4 *)((char *)&auVar3 + 12)) = -(uint)(ABS(*((float *)GEN_TOP(((int)this + 0x2c))) - param_1[0xb]) < fVar7),
     uVar8 = gen_movmskps(&(auVar3)), ((byte)uVar8 & 7) == 7)) {
    return 1;
  }
  return 0;
}

/* ref: Global::Matrix34TryInvert3x3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da2150(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xda2150u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  undefined1 auVar1 [16];
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
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  
  fVar2 = in_ecx[8];
  fVar3 = in_ecx[9];
  fVar4 = in_ecx[10];
  fVar5 = in_ecx[0xb];
  fVar6 = in_ecx[4];
  fVar7 = in_ecx[5];
  fVar8 = in_ecx[6];
  fVar9 = in_ecx[7];
  fVar20 = fVar7 * fVar4 - fVar8 * fVar3;
  fVar21 = fVar8 * fVar2 - fVar6 * fVar4;
  fVar22 = fVar6 * fVar3 - fVar7 * fVar2;
  fVar10 = *in_ecx;
  fVar11 = in_ecx[1];
  fVar12 = in_ecx[2];
  fVar13 = in_ecx[3];
  fVar14 = fVar10 * fVar20;
  fVar15 = fVar11 * fVar21;
  fVar16 = fVar12 * fVar22;
  fVar17 = (fVar15 + fVar14) + fVar16;
  fVar18 = (fVar15 + fVar14) + fVar16;
  fVar19 = (fVar15 + fVar14) + fVar16;
  fVar16 = (fVar15 + fVar14) + fVar16;
  (*(unsigned long long *)((unsigned char *)(auVar23) + 0)) = CONCAT44((uint)gen_fl2bits(fVar18),(uint)gen_fl2bits(fVar17)) & 0x7fffffff7fffffff;
  (*(float *)((char *)&auVar23 + 8)) = ABS(fVar19);
  (*(float *)((char *)&auVar23 + 12)) = ABS(fVar16);
  if ((param_2 * param_2) * param_2 < ABS(fVar17)) {
    (*(undefined4 *)((char *)&auVar1 + 4)) = (undefined4)gen_fl2bits(fVar18);
    (*(undefined4 *)((char *)&auVar1 + 0)) = (undefined4)gen_fl2bits(fVar17);
    (*(undefined4 *)((char *)&auVar1 + 8)) = (undefined4)gen_fl2bits(fVar19);
    (*(undefined4 *)((char *)&auVar1 + 12)) = (undefined4)gen_fl2bits(fVar16);
    gen_rcpps(&(auVar23), &(auVar23), &(auVar1));
    fVar14 = (*(float *)&REFG(undefined, 0x113c150) - (*(float *)((char *)&auVar23 + 0)) * fVar17) * (*(float *)((char *)&auVar23 + 0));
    fVar15 = (*(float *)&REFG(undefined, 0x113c154) - (*(float *)((char *)&auVar23 + 4)) * fVar18) * (*(float *)((char *)&auVar23 + 4));
    fVar17 = (*(float *)&REFG(undefined, 0x113c158) - (*(float *)((char *)&auVar23 + 8)) * fVar19) * (*(float *)((char *)&auVar23 + 8));
    fVar16 = (*(float *)&REFG(undefined, 0x113c15c) - (*(float *)((char *)&auVar23 + 12)) * fVar16) * (*(float *)((char *)&auVar23 + 12));
    *in_ecx = fVar14 * fVar20;
    in_ecx[1] = fVar15 * fVar21;
    in_ecx[2] = fVar17 * fVar22;
    in_ecx[3] = fVar16 * (fVar9 * fVar5 - fVar9 * fVar5);
    in_ecx[4] = fVar14 * (fVar3 * fVar12 - fVar4 * fVar11);
    in_ecx[5] = fVar15 * (fVar4 * fVar10 - fVar2 * fVar12);
    in_ecx[6] = fVar17 * (fVar2 * fVar11 - fVar3 * fVar10);
    in_ecx[7] = fVar16 * (fVar5 * fVar13 - fVar5 * fVar13);
    in_ecx[8] = fVar14 * (fVar8 * fVar11 - fVar7 * fVar12);
    in_ecx[9] = fVar15 * (fVar6 * fVar12 - fVar8 * fVar10);
    in_ecx[10] = fVar17 * (fVar7 * fVar10 - fVar6 * fVar11);
    in_ecx[0xb] = fVar16 * (fVar9 * fVar13 - fVar9 * fVar13);
    F_00da1640(in_ecx GEN_EDX_FWD);
    return 0;
  }
  return 1;
}

/* ref: Global::Matrix34Invert3x3 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00da2230(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda2230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
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
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  undefined1 auVar27 [16];
  
  fVar1 = in_ecx[4];
  fVar2 = in_ecx[5];
  fVar3 = in_ecx[6];
  fVar4 = in_ecx[7];
  fVar5 = in_ecx[8];
  fVar6 = in_ecx[9];
  fVar7 = in_ecx[10];
  fVar8 = in_ecx[0xb];
  fVar24 = fVar7 * fVar2 - fVar6 * fVar3;
  fVar25 = fVar5 * fVar3 - fVar7 * fVar1;
  fVar26 = fVar6 * fVar1 - fVar5 * fVar2;
  fVar9 = *in_ecx;
  fVar10 = in_ecx[1];
  fVar11 = in_ecx[2];
  fVar12 = in_ecx[3];
  fVar17 = fVar9 * fVar24;
  fVar18 = fVar10 * fVar25;
  fVar19 = fVar11 * fVar26;
  fVar20 = (fVar18 + fVar17) + fVar19;
  fVar21 = (fVar18 + fVar17) + fVar19;
  fVar22 = (fVar18 + fVar17) + fVar19;
  fVar19 = (fVar18 + fVar17) + fVar19;
  uVar13 = -(uint)((*(float *)&REFG(undefined, 0x1138cc0) * *(float *)&REFG(undefined, 0x1138cc0)) * *(float *)&REFG(undefined, 0x1138cc0) <
                  fVar20);
  uVar14 = -(uint)((*(float *)&REFG(undefined, 0x1138cc4) * *(float *)&REFG(undefined, 0x1138cc4)) * *(float *)&REFG(undefined, 0x1138cc4) <
                  fVar21);
  uVar15 = -(uint)((*(float *)&REFG(undefined, 0x1138cc8) * *(float *)&REFG(undefined, 0x1138cc8)) * *(float *)&REFG(undefined, 0x1138cc8) <
                  fVar22);
  uVar16 = -(uint)((*(float *)&REFG(undefined, 0x1138ccc) * *(float *)&REFG(undefined, 0x1138ccc)) * *(float *)&REFG(undefined, 0x1138ccc) <
                  fVar19);
  (*(undefined4 *)((char *)&auVar23 + 0)) = uVar13 & (uint)gen_fl2bits(fVar20);
  (*(undefined4 *)((char *)&auVar23 + 4)) = uVar14 & (uint)gen_fl2bits(fVar21);
  (*(undefined4 *)((char *)&auVar23 + 8)) = uVar15 & (uint)gen_fl2bits(fVar22);
  (*(undefined4 *)((char *)&auVar23 + 12)) = uVar16 & (uint)gen_fl2bits(fVar19);
  (*(undefined4 *)((char *)&auVar27 + 0)) = ~uVar13 & (uint)REFG(float, 0x1138af0);
  (*(undefined4 *)((char *)&auVar27 + 4)) = ~uVar14 & (*(undefined4 *)((char *)&REFG(float, 0x1138af0) + 4));
  (*(undefined4 *)((char *)&auVar27 + 8)) = ~uVar15 & (*(undefined4 *)((char *)&REFG(float, 0x1138af0) + 8));
  (*(undefined4 *)((char *)&auVar27 + 12)) = ~uVar16 & (*(undefined4 *)((char *)&REFG(float, 0x1138af0) + 12));
  undefined1 gen_vt0[16]; gen_v16_or(gen_vt0, &(auVar23), &(auVar27));
  memcpy(auVar23, gen_vt0, 16);
  gen_rcpps(&(auVar27), &(*(gen_v16 *)&REFG(float, 0x1138af0)), &(auVar23));
  fVar17 = gen_bits2f((uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113c150) - (*(float *)((char *)&auVar27 + 0)) * (*(float *)((char *)&auVar23 + 0)))
                                        * (*(float *)((char *)&auVar27 + 0))) & uVar13);
  fVar18 = gen_bits2f((uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113c154) - (*(float *)((char *)&auVar27 + 4)) * (*(float *)((char *)&auVar23 + 4)))
                                        * (*(float *)((char *)&auVar27 + 4))) & uVar14);
  fVar19 = gen_bits2f((uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113c158) - (*(float *)((char *)&auVar27 + 8)) * (*(float *)((char *)&auVar23 + 8)))
                                        * (*(float *)((char *)&auVar27 + 8))) & uVar15);
  fVar20 = gen_bits2f((uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113c15c) - (*(float *)((char *)&auVar27 + 12)) * (*(float *)((char *)&auVar23 + 12))
                                        ) * (*(float *)((char *)&auVar27 + 12))) & uVar16);
  *in_ecx = fVar17 * fVar24;
  in_ecx[1] = fVar18 * fVar25;
  in_ecx[2] = fVar19 * fVar26;
  in_ecx[3] = fVar20 * (fVar8 * fVar4 - fVar8 * fVar4);
  in_ecx[4] = fVar17 * (fVar6 * fVar11 - fVar7 * fVar10);
  in_ecx[5] = fVar18 * (fVar7 * fVar9 - fVar5 * fVar11);
  in_ecx[6] = fVar19 * (fVar5 * fVar10 - fVar6 * fVar9);
  in_ecx[7] = fVar20 * (fVar8 * fVar12 - fVar8 * fVar12);
  in_ecx[8] = fVar17 * (fVar3 * fVar10 - fVar2 * fVar11);
  in_ecx[9] = fVar18 * (fVar1 * fVar11 - fVar3 * fVar9);
  in_ecx[10] = fVar19 * (fVar2 * fVar9 - fVar1 * fVar10);
  in_ecx[0xb] = fVar20 * (fVar4 * fVar12 - fVar4 * fVar12);
  return;
}

/* ref: Global::Matrix34InvertWrapper */
GEN_LIB GEN_FRAME unsigned int F_00da25e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda25e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  F_00da2230(param_1 GEN_EDX_ARG);
  return;
}

/* ref: Global::FloatLessEqual */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00da3190(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda3190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  
  fVar1 = *in_ecx;
  return (GEN_ISNAN(fVar1) || GEN_ISNAN(*param_2)) || (fVar1 < *param_2 || fVar1 == *param_2);
}

/* ref: Global::Vector4CompareGreater */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da31b0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda31b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_3[1];
  fVar2 = param_3[2];
  fVar3 = param_3[3];
  fVar4 = in_ecx[1];
  fVar5 = in_ecx[2];
  fVar6 = in_ecx[3];
  *param_2 = -(uint)(*param_3 < *in_ecx);
  param_2[1] = -(uint)(fVar1 < fVar4);
  param_2[2] = -(uint)(fVar2 < fVar5);
  param_2[3] = -(uint)(fVar3 < fVar6);
  return (uint)param_2;
}

/* ref: FUN_00da31d0 */
GEN_LIB GEN_FRAME uint F_00da31d0(GEN_P(float * param_1, unsigned int gen_a0), GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2), GEN_P(float * param_4, unsigned int gen_a3), GEN_P(float * param_5, unsigned int gen_a4), GEN_P(float * param_6, unsigned int gen_a5), GEN_P(float * param_7, unsigned int gen_a6))
{
  GEN_ENTER(0xda31d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_5 = (float *)(uintptr_t)gen_a4;)
  GEN_PIN(float * param_6 = (float *)(uintptr_t)gen_a5;)
  GEN_PIN(float * param_7 = (float *)(uintptr_t)gen_a6;)
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
  
  fVar1 = *param_3;
  fVar2 = param_3[1];
  fVar3 = param_3[2];
  fVar4 = *param_4;
  fVar5 = param_4[1];
  fVar6 = param_4[2];
  fVar7 = *param_5;
  fVar8 = param_5[1];
  fVar9 = param_5[2];
  fVar10 = param_5[3];
  fVar11 = *param_6;
  fVar12 = param_6[1];
  fVar13 = param_6[2];
  fVar14 = param_6[3];
  *param_7 = param_1[2] * param_2[2] + (*param_1 * *param_2 + param_1[1] * param_2[1]);
  param_7[1] = fVar3 * fVar6 + (fVar1 * fVar4 + fVar2 * fVar5);
  param_7[2] = fVar9 * fVar13 + (fVar7 * fVar11 + fVar8 * fVar12);
  param_7[3] = fVar10 * fVar14 + (fVar8 * fVar12 + fVar10 * fVar14);
  return (uint)param_7;
}

/* ref: FUN_00da3230 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da3230(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda3230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *in_ecx;
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00da3250 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da3250(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda3250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0x14)));
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00da3270 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da3270(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda3270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0x28)));
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00da3290 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da3290(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda3290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0x24)));
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00da32b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da32b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda32b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0x20)));
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00da32d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da32d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda32d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0x10)));
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: FUN_00da32f0 */
GEN_LIB GEN_FRAME uint F_00da32f0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda32f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138b0c);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138b08);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138b04);
  *param_1 = *(undefined4 *)&REFG(undefined, 0x1138b00);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00da3600 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da3600(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda3600u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  *(float *)this = *param_1 * *param_2 + *(float *)this;
  *((float *)GEN_TOP(((int)this + 4))) = fVar1 * fVar4 + *((float *)GEN_TOP(((int)this + 4)));
  *((float *)GEN_TOP(((int)this + 8))) = fVar2 * fVar5 + *((float *)GEN_TOP(((int)this + 8)));
  *((float *)GEN_TOP(((int)this + 0xc))) = fVar3 * fVar6 + *((float *)GEN_TOP(((int)this + 0xc)));
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *((float *)GEN_TOP(((int)this + 0x10))) = param_2[4] * *param_1 + *((float *)GEN_TOP(((int)this + 0x10)));
  *((float *)GEN_TOP(((int)this + 0x14))) = fVar1 * fVar4 + *((float *)GEN_TOP(((int)this + 0x14)));
  *((float *)GEN_TOP(((int)this + 0x18))) = fVar2 * fVar5 + *((float *)GEN_TOP(((int)this + 0x18)));
  *((float *)GEN_TOP(((int)this + 0x1c))) = fVar3 * fVar6 + *((float *)GEN_TOP(((int)this + 0x1c)));
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  *((float *)GEN_TOP(((int)this + 0x20))) = param_2[8] * *param_1 + *((float *)GEN_TOP(((int)this + 0x20)));
  *((float *)GEN_TOP(((int)this + 0x24))) = fVar1 * fVar4 + *((float *)GEN_TOP(((int)this + 0x24)));
  *((float *)GEN_TOP(((int)this + 0x28))) = fVar2 * fVar5 + *((float *)GEN_TOP(((int)this + 0x28)));
  *((float *)GEN_TOP(((int)this + 0x2c))) = fVar3 * fVar6 + *((float *)GEN_TOP(((int)this + 0x2c)));
  return (uint)param_1;
}

/* ref: hkSemaphore::hkSemaphore */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da3670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(LONG param_1, unsigned int gen_a1), GEN_P(LONG param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda3670u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(LONG param_1 = (LONG)gen_a1;)
  GEN_PIN(LONG param_2 = (LONG)gen_a2;)
  HANDLE pvVar1;
  
  pvVar1 = gen_imp_CreateSemaphoreA((GEN_LPANY)0x0,param_1,param_2,(LPCSTR)0x0);
  *(HANDLE *)this = pvVar1;
  return (uint)this;
}

/* ref: hkSemaphore::~hkSemaphore */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00da36a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda36a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  return (uint)(gen_imp_CloseHandle(*(HANDLE *)this));
}

/* ref: hkSemaphore::Acquire */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00da36b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda36b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  return (uint)(gen_imp_WaitForSingleObject(*(HANDLE *)this,0xffffffff));
}

/* ref: hkSemaphore::Release */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00da36c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(LONG param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda36c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(LONG param_1 = (LONG)gen_a1;)
  return (uint)(gen_imp_ReleaseSemaphore(*(HANDLE *)this,param_1,(LPLONG)0x0));
}

/* ref: hkSemaphore::AcquireStatic */
GEN_LIB GEN_FRAME unsigned int F_00da36e0(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda36e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  F_00da36b0(param_1 GEN_EDX_ARG);
  return;
}

/* ref: hkSemaphore::ReleaseStatic */
GEN_LIB GEN_FRAME unsigned int F_00da36f0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda36f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_00da36c0(param_1 GEN_EDX_ARG,param_2);
  return;
}

/* ref: hkMemUtil::MemCpy */
GEN_LIB GEN_FRAME uint F_00da3710(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda3710u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  ulonglong uVar1;
  
  uVar1 = F_00c46aa0(param_1,param_2,param_3);
  return (uint)uVar1;
}

/* ref: hkMemUtil::MemSet */
GEN_LIB GEN_FRAME uint F_00da3720(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(gen_size32 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda3720u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(gen_size32 param_3 = (gen_size32)gen_a2;)
  undefined * pvVar1;
  
  pvVar1 = F_00c48350(param_1,param_2,param_3);
  return (uint)pvVar1;
}

/* ref: hkMemUtil::MemCpyBackward8 */
GEN_LIB GEN_FRAME unsigned int F_00da3730(GEN_P(uint in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda3730u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = in_eax >> 3;
  if (7 < in_eax) {
    puVar1 = ((undefined4 *)GEN_TOP((param_3 - 8 + uVar2 * 8)));
    do {
      *puVar1 = *((undefined4 *)GEN_TOP(((in_ecx - param_3) + (int)puVar1)));
      puVar1[1] = *((undefined4 *)GEN_TOP(((in_ecx - param_3) + 4 + (int)puVar1)));
      puVar1 = puVar1 - 2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}

/* ref: hkMemUtil::MemCpyBackward4 */
GEN_LIB GEN_FRAME unsigned int F_00da3760(GEN_P(uint in_eax, unsigned int gen_a0), GEN_P(int in_edx, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda3760u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  GEN_PIN(int in_edx = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = in_eax >> 2;
  if (3 < in_eax) {
    puVar1 = ((undefined4 *)GEN_TOP((param_3 - 4 + uVar2 * 4)));
    do {
      *puVar1 = *((undefined4 *)GEN_TOP(((in_edx - param_3) + (int)puVar1)));
      puVar1 = puVar1 - 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}

/* ref: hkMemUtil::MemCpyBackward2 */
GEN_LIB GEN_FRAME unsigned int F_00da3790(GEN_P(uint in_eax, unsigned int gen_a0), GEN_P(int in_edx, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda3790u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint in_eax = (uint)gen_a0;)
  GEN_PIN(int in_edx = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined2 * puVar1;
  uint uVar2;
  
  uVar2 = in_eax >> 1;
  if (1 < in_eax) {
    puVar1 = ((undefined2 *)GEN_TOP((param_3 - 2 + uVar2 * 2)));
    do {
      *puVar1 = *((undefined2 *)GEN_TOP(((in_edx - param_3) + (int)puVar1)));
      puVar1 = puVar1 - 1;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return 0;
}

/* ref: hkMemUtil::MemCpyBackward1 */
GEN_LIB GEN_FRAME unsigned int GEN_FASTCALL F_00da37c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda37c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  undefined1 * puVar1;
  
  if (param_2 != 0) {
    puVar1 = ((undefined1 *)GEN_TOP((param_2 - 1 + param_3)));
    do {
      *puVar1 = puVar1[param_1 - param_3];
      puVar1 = puVar1 - 1;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
  return;
}

/* ref: hkMemUtil::MemCpyBackward */
GEN_LIB GEN_FRAME uint F_00da37e0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda37e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  undefined4 * puVar1;
  undefined2 * puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 * puVar8;
  
  uVar4 = param_3 & 0xfffffff8;
  uVar6 = param_3;
  uVar3 = param_1;
  uVar5 = param_2;
  if ((((uVar4 != 0) && ((param_3 & 7) == 0)) && ((param_1 & 7) == 0)) && ((param_2 & 7) == 0)) {
    uVar6 = param_3 >> 3;
    if (7 < param_3) {
      puVar1 = ((undefined4 *)GEN_TOP(((param_1 - 8) + uVar6 * 8)));
      do {
        *puVar1 = *((undefined4 *)GEN_TOP(((param_2 - param_1) + (int)puVar1)));
        puVar1[1] = *((undefined4 *)GEN_TOP(((param_2 - param_1) + 4 + (int)puVar1)));
        puVar1 = puVar1 - 2;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    uVar3 = param_1 + uVar4;
    uVar5 = param_2 + uVar4;
    uVar6 = 0;
  }
  uVar4 = uVar6 & 0xfffffffc;
  if (((uVar4 != 0) && ((uVar6 & 3) == 0)) && (((uVar3 & 3) == 0 && ((uVar5 & 3) == 0)))) {
    uVar7 = uVar6 >> 2;
    if (3 < uVar6) {
      puVar1 = ((undefined4 *)GEN_TOP(((uVar3 - 4) + uVar7 * 4)));
      do {
        *puVar1 = *((undefined4 *)GEN_TOP(((int)puVar1 + (uVar5 - uVar3))));
        puVar1 = puVar1 - 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    uVar3 = uVar3 + uVar4;
    uVar5 = uVar5 + uVar4;
    uVar6 = 0;
  }
  uVar4 = uVar6 & 0xfffffffe;
  if (((uVar4 != 0) && ((uVar6 & 1) == 0)) && (((uVar3 & 1) == 0 && ((uVar5 & 1) == 0)))) {
    uVar7 = uVar6 >> 1;
    if (1 < uVar6) {
      puVar2 = ((undefined2 *)GEN_TOP(((uVar3 - 2) + uVar7 * 2)));
      do {
        *puVar2 = *((undefined2 *)GEN_TOP(((int)puVar2 + (uVar5 - uVar3))));
        puVar2 = puVar2 - 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    uVar3 = uVar3 + uVar4;
    uVar5 = uVar5 + uVar4;
    uVar6 = 0;
  }
  if (uVar6 != 0) {
    puVar8 = ((undefined1 *)GEN_TOP(((uVar6 - 1) + uVar3)));
    do {
      *puVar8 = puVar8[uVar5 - uVar3];
      puVar8 = puVar8 - 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return 0;
}

/* ref: hkMemUtil::MemMove */
GEN_LIB GEN_FRAME uint F_00da38f0(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda38f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  uint uVar1;
  
  if (param_2 < param_1) {
    uVar1 = F_00da37e0(param_1,param_2,param_3);
    return uVar1;
  }
  uVar1 = param_1;
  if (param_1 < param_2) {
    uVar1 = F_00da3710(param_1,param_2,param_3);
  }
  return uVar1;
}

/* ref: FUN_00da3920 */
GEN_LIB GEN_FRAME uint F_00da3920(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda3920u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00da3930 */
GEN_LIB GEN_FRAME uint F_00da3930(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda3930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: hkCachedHashMap::GetIterator */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da3970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda3970u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = 0;
  if (-1 < *((int *)GEN_TOP(((int)this + 8)))) {
    piVar2 = *(int * PTR32 *)this;
    do {
      if (*piVar2 != -1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 3;
    } while ((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8))));
  }
  return uVar1;
}

/* ref: hkCachedHashMap::GetKey */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da3990(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda3990u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + 4 + param_2 * 0xc)));
}

/* ref: hkCachedHashMap::GetValue */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da39b0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda39b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*in_ecx + 8 + param_2 * 0xc)));
}

/* ref: hkCachedHashMap::SetValue */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da39d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda39d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP((*(int *)this + 8 + param_1 * 0xc))) = param_2;
  return param_1 * 3;
}

/* ref: hkCachedHashMap::GetNext */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da39f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda39f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int * piVar2;
  
  uVar1 = param_1 + 1;
  if ((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)))) {
    piVar2 = ((int *)GEN_TOP((*(int *)this + uVar1 * 0xc)));
    do {
      if (*piVar2 != -1) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 3;
    } while ((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8))));
  }
  return uVar1;
}

/* ref: hkCachedHashMap::Insert */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da3a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda3a20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  char * pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char * pcVar7;
  uint uVar8;
  
  uVar5 = 0;
  cVar2 = *param_1;
  pcVar7 = param_1;
  while (cVar2 != '\0') {
    pcVar1 = pcVar7 + 1;
    pcVar7 = pcVar7 + 1;
    uVar5 = (int)cVar2 + uVar5 * 0x1f;
    cVar2 = *pcVar1;
  }
  uVar5 = uVar5 & 0x7fffffff;
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    F_00da3fc0(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
  }
  uVar8 = *((uint *)GEN_TOP(((int)this + 8))) & uVar5;
  iVar4 = uVar8 * 0xc;
  iVar3 = *((int *)GEN_TOP((iVar4 + *(int *)this)));
  while (iVar3 != -1) {
    if ((*((uint *)GEN_TOP((iVar4 + *(int *)this))) == uVar5) &&
       (uVar6 = F_00da0d20(param_1,*((undefined4 *)GEN_TOP((iVar4 + 4 + *(int *)this)))), uVar6 == 0))
    goto LAB_00da3ab2;
    uVar8 = uVar8 + 1 & *((uint *)GEN_TOP(((int)this + 8)));
    iVar4 = uVar8 * 0xc;
    iVar3 = *((int *)GEN_TOP((iVar4 + *(int *)this)));
  }
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
LAB_00da3ab2: ;
  uVar8 = uVar8 * 0xc;
  *((uint *)GEN_TOP((uVar8 + *(int *)this))) = uVar5;
  *((char * PTR32 *)GEN_TOP((uVar8 + 4 + *(int *)this))) = param_1;
  *((undefined4 *)GEN_TOP((uVar8 + 8 + *(int *)this))) = param_2;
  return uVar8;
}

/* ref: hkCachedHashMap::FindKey */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da3ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda3ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char * pcVar1;
  uint * puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  char * pcVar6;
  uint uVar7;
  
  uVar4 = 0;
  cVar3 = *param_1;
  pcVar6 = param_1;
  while (cVar3 != '\0') {
    pcVar1 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
    uVar4 = (int)cVar3 + uVar4 * 0x1f;
    cVar3 = *pcVar1;
  }
  uVar7 = *((uint *)GEN_TOP(((int)this + 8))) & uVar4 & 0x7fffffff;
  puVar2 = ((uint *)GEN_TOP((*(int *)this + uVar7 * 0xc)));
  uVar5 = *puVar2;
  while( true ) {
    if (uVar5 == 0xffffffff) {
      return *((int *)GEN_TOP(((int)this + 8))) + 1;
    }
    if ((uVar5 == (uVar4 & 0x7fffffff)) && (uVar5 = F_00da0d20(param_1,puVar2[1]), uVar5 == 0)
       ) break;
    uVar7 = uVar7 + 1 & *((uint *)GEN_TOP(((int)this + 8)));
    puVar2 = ((uint *)GEN_TOP((*(int *)this + uVar7 * 0xc)));
    uVar5 = *puVar2;
  }
  return uVar7;
}

/* ref: hkCachedHashMap::Remove */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00da3b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda3b70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  *((undefined4 *)GEN_TOP((*(int *)this + param_1 * 0xc))) = 0xffffffff;
  uVar5 = *((uint *)GEN_TOP(((int)this + 8)));
  uVar3 = uVar5 + param_1 & uVar5;
  iVar1 = *((int *)GEN_TOP((*(int *)this + uVar3 * 0xc)));
  while (iVar1 != -1) {
    uVar3 = uVar3 + uVar5 & uVar5;
    iVar1 = *((int *)GEN_TOP((*(int *)this + uVar3 * 0xc)));
  }
  uVar4 = uVar3 + 1 & uVar5;
  uVar3 = param_1 + 1 & uVar5;
  iVar2 = uVar3 * 0xc;
  iVar1 = *((int *)GEN_TOP((*(int *)this + iVar2)));
  uVar6 = param_1;
  while (iVar1 != -1) {
    uVar5 = *((uint *)GEN_TOP((*(int *)this + iVar2))) & uVar5;
    if ((((uVar3 < uVar4) || (uVar5 <= uVar6)) &&
        ((uVar6 <= uVar3 || ((uVar5 <= uVar6 && (uVar3 < uVar5)))))) &&
       ((uVar5 <= uVar6 || (uVar4 <= uVar5)))) {
      iVar1 = uVar6 * 0xc;
      *((uint *)GEN_TOP((iVar1 + *(int *)this))) = *((uint *)GEN_TOP((*(int *)this + iVar2)));
      *((undefined4 *)GEN_TOP((iVar1 + 4 + *(int *)this))) = *((undefined4 *)GEN_TOP((*(int *)this + 4 + iVar2)));
      *((undefined4 *)GEN_TOP((iVar1 + 8 + *(int *)this))) = *((undefined4 *)GEN_TOP((*(int *)this + 8 + iVar2)));
      *((undefined4 *)GEN_TOP((iVar2 + *(int *)this))) = 0xffffffff;
      uVar6 = uVar3;
    }
    uVar5 = *((uint *)GEN_TOP(((int)this + 8)));
    uVar3 = uVar3 + 1 & uVar5;
    iVar2 = uVar3 * 0xc;
    iVar1 = *((int *)GEN_TOP((iVar2 + *(int *)this)));
  }
  return 0;
}

/* ref: hkCachedHashMap::IsOk */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da3c40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda3c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int local_c;
  int local_8;
  
  uVar4 = *((uint *)GEN_TOP(((int)this + 8)));
  local_c = 0;
  if (-1 < (int)uVar4) {
    local_8 = 0;
    do {
      iVar1 = *(int *)this;
      if (*((int *)GEN_TOP((iVar1 + local_8))) != -1) {
        uVar2 = *((uint *)GEN_TOP((iVar1 + local_8)));
        uVar3 = *((undefined4 *)GEN_TOP((iVar1 + 4 + local_8)));
        uVar4 = uVar4 & uVar2;
        while ((*((uint *)GEN_TOP((*(int *)this + uVar4 * 0xc))) != uVar2 ||
               (uVar5 = F_00da0d20(uVar3,*((undefined4 *)GEN_TOP((*(int *)this + uVar4 * 0xc + 4)))),
               uVar5 != 0))) {
          uVar4 = uVar4 + 1 & *((uint *)GEN_TOP(((int)this + 8)));
        }
      }
      uVar4 = *((uint *)GEN_TOP(((int)this + 8)));
      local_8 = local_8 + 0xc;
      local_c = local_c + 1;
    } while (local_c <= (int)uVar4);
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: hkCachedHashMap::Clear */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00da3cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda3cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (*((int *)GEN_TOP(((int)this + 8))) != -1 && -1 < *((int *)GEN_TOP(((int)this + 8))) + 1) {
    iVar2 = 0;
    do {
      *((undefined4 *)GEN_TOP((iVar2 + *(int *)this))) = 0xffffffff;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0xc;
    } while (iVar1 < *((int *)GEN_TOP(((int)this + 8))) + 1);
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    return 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return 0;
}

/* ref: hkCachedHashMap::Swap */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da3d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda3d10u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: hkCachedHashMap::Merge */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da3d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda3d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = param_1[2];
  if (-1 < (int)uVar1) {
    iVar2 = 0;
    iVar3 = uVar1 + 1;
    do {
      uVar1 = *param_1;
      if (*((int *)GEN_TOP((uVar1 + iVar2))) != -1) {
        uVar1 = F_00da3a20(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((uVar1 + 4 + iVar2))),*((undefined4 *)GEN_TOP((uVar1 + 8 + iVar2))));
      }
      iVar2 = iVar2 + 0xc;
      iVar3 = iVar3 - 1;
    } while (iVar3 != 0);
  }
  return uVar1;
}

/* ref: FUN_00da3da0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da3da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda3da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD,param_1 * 0xc);
  return uVar1;
}

/* ref: FUN_00da3dc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da3dc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda3dc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD,param_1,param_2 * 0xc);
  return uVar1;
}

/* ref: hkCachedHashMap::hkCachedHashMap */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da3de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda3de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 4))))(&REFG(undefined * PTR32, 0x13516ac),0xc0);
  *(uint *)this = uVar1;
  F_00da1030(uVar1,0xff,0xc0);
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0xf;
  return (uint)this;
}

/* ref: hkCachedHashMap::~hkCachedHashMap */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da3e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda3e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 8))))
                    (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(*((int *)GEN_TOP(((int)this + 8))) * 3 + 3) * 4
                    );
  return uVar1;
}

/* ref: hkCachedHashMap::IsValid */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da3e40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda3e40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  *((bool *)GEN_TOP(param_2)) = param_3 <= *((int *)GEN_TOP((in_ecx + 8)));
  return param_2;
}

/* ref: hkCachedHashMap::GetOrInsert */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da3e60(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda3e60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  undefined4 uVar1;
  uint uVar2;
  char * pcVar3;
  uint uVar4;
  
  uVar1 = (*(undefined4 *)&gen_args[0]);
  uVar2 = F_00da3ae0(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]));
  pcVar3 = ((char *)GEN_TOP(F_00da3e40(this GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[0]) + 3,uVar2)));
  uVar4 = (*(uint *)&gen_args[1]);
  if (*pcVar3 != '\0') {
    uVar4 = F_00da39b0(this GEN_EDX_ARG,uVar2);
    return uVar4;
  }
  F_00da3a20(this GEN_EDX_ARG,uVar1,(*(uint *)&gen_args[1]));
  return uVar4;
}

/* ref: hkCachedHashMap::Get */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da3eb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda3eb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint uVar1;
  char * pcVar2;
  
  uVar1 = F_00da3ae0(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]));
  pcVar2 = ((char *)GEN_TOP(F_00da3e40(this GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[0]) + 3,uVar1)));
  if (*pcVar2 != '\0') {
    uVar1 = F_00da39b0(this GEN_EDX_ARG,uVar1);
    *(*(uint * PTR32 *)&gen_args[1]) = uVar1;
    return 0;
  }
  return 1;
}

/* ref: hkCachedHashMap::RemoveKey */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da3f00(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xda3f00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  char * pcVar2;
  
  uVar1 = F_00da3ae0(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]));
  pcVar2 = ((char *)GEN_TOP(F_00da3e40(this GEN_EDX_ARG,(int)&(*(undefined4 *)&gen_args[0]) + 3,uVar1)));
  if (*pcVar2 != '\0') {
    F_00da3b70(this GEN_EDX_ARG,uVar1);
    return 0;
  }
  return 1;
}

/* ref: hkCachedHashMap::Assign */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da3f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda3f40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  
  ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 8))))
            (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(*((int *)GEN_TOP(((int)this + 8))) * 3 + 3) * 4);
  iVar1 = param_1[2];
  *((int *)GEN_TOP(((int)this + 8))) = iVar1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 4))))(&REFG(undefined * PTR32, 0x13516ac),(iVar1 * 3 + 3) * 4);
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  *(uint *)this = uVar2;
  F_00da1010(uVar2,*param_1,(iVar1 * 3 + 3) * 4);
  return (uint)this;
}

/* ref: hkCachedHashMap::ResizeTable */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da3fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda3fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 * puVar4;
  
  iVar1 = *(int *)this;
  iVar3 = *((int *)GEN_TOP(((int)this + 8))) + 1;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 4))))(&REFG(undefined * PTR32, 0x13516ac),param_1 * 0xc);
  *(uint *)this = uVar2;
  F_00da1030(uVar2,0xff,param_1 * 0xc);
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((int *)GEN_TOP(((int)this + 8))) = param_1 - 1;
  if (0 < iVar3) {
    puVar4 = ((undefined4 *)GEN_TOP((iVar1 + 4)));
    param_1 = iVar3;
    do {
      if (puVar4[-1] != -1) {
        F_00da3a20(this GEN_EDX_ARG,*puVar4,puVar4[1]);
      }
      puVar4 = puVar4 + 3;
      param_1 = param_1 - 1;
    } while (param_1 != 0);
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 8))))(&REFG(undefined * PTR32, 0x13516ac),iVar1,iVar3 * 0xc);
  return uVar2;
}

/* ref: Global::RouterHeapAllocate */
GEN_LIB GEN_FRAME uint F_00da4060(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda4060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: Global::RouterHeapFree16 */
GEN_LIB GEN_FRAME unsigned int F_00da4080(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda4080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  }
  return;
}

/* ref: hkCachedHashMap::HasKey */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da40b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda40b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3ae0(this GEN_EDX_FWD,param_2);
  F_00da3e40(this GEN_EDX_ARG,param_1,uVar1);
  return param_1;
}

/* ref: hkCachedHashMap::TryInsert */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da40e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda40e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  char * pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char * pcVar6;
  uint uVar7;
  
  if (*((int *)GEN_TOP(((int)this + 8))) < *((int *)GEN_TOP(((int)this + 4))) * 2) {
    F_00da3fc0(this GEN_EDX_FWD,*((int *)GEN_TOP(((int)this + 8))) * 2 + 2);
  }
  uVar4 = 0;
  cVar2 = *param_1;
  pcVar6 = param_1;
  while (cVar2 != '\0') {
    pcVar1 = pcVar6 + 1;
    pcVar6 = pcVar6 + 1;
    uVar4 = (int)cVar2 + uVar4 * 0x1f;
    cVar2 = *pcVar1;
  }
  uVar4 = uVar4 & 0x7fffffff;
  uVar7 = uVar4;
  while( true ) {
    uVar7 = uVar7 & *((uint *)GEN_TOP(((int)this + 8)));
    iVar3 = uVar7 * 0xc;
    if ((*((uint *)GEN_TOP((*(int *)this + iVar3))) == uVar4) &&
       (uVar5 = F_00da0d20(param_1,*((undefined4 *)GEN_TOP((*(int *)this + 4 + iVar3)))), uVar5 == 0))
    break;
    if (*((int *)GEN_TOP((iVar3 + *(int *)this))) == -1) {
      iVar3 = uVar7 * 0xc;
      *((uint *)GEN_TOP((iVar3 + *(int *)this))) = uVar4;
      *((char * PTR32 *)GEN_TOP((iVar3 + 4 + *(int *)this))) = param_1;
      *((undefined4 *)GEN_TOP((iVar3 + 8 + *(int *)this))) = param_2;
      *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
      return uVar7;
    }
    uVar7 = uVar7 + 1;
  }
  return uVar7;
}

/* ref: hkCachedHashMap::GetWithDefault */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da4190(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda4190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  F_00da3eb0(this GEN_EDX_FWD,(*(undefined4 *)&gen_args[0]),&(*(uint *)&gen_args[1]));
  return (*(uint *)&gen_args[1]);
}

/* ref: hkCachedHashMap::Reserve */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da41b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda41b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = 8;
  if (8 < param_1 * 2) {
    do {
      uVar1 = uVar1 * 2;
    } while ((int)uVar1 < param_1 * 2);
  }
  if (*((int *)GEN_TOP(((int)this + 8))) + 1 < (int)uVar1) {
    uVar1 = F_00da3fc0(this GEN_EDX_FWD,uVar1);
  }
  return uVar1;
}

/* ref: FUN_00da4200 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da4200(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda4200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  return in_ecx;
}

/* ref: hkStringBuf::IndexOfChar */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da4230(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xda4230u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  uint uVar1;
  int iVar2;
  
  iVar2 = param_4;
  if (param_1[1] - 1 <= param_4) {
    iVar2 = param_1[1] - 1;
  }
  if ((int)param_3 < iVar2) {
    uVar1 = param_3;
    do {
      if (*((char *)GEN_TOP((*param_1 + uVar1))) == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < iVar2);
  }
  return 0xffffffff;
}

/* ref: hkStringBuf::IndexOf */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da4270(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xda4270u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  
  uVar1 = F_00da0ee0(*(int *)this + param_2,param_1);
  if (uVar1 != 0) {
    return uVar1 - *(int *)this;
  }
  return 0xffffffff;
}

/* ref: hkStringBuf::IndexOfCaseInsensitive */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da42a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda42a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  char * pcVar6;
  uint local_8;
  
  pcVar6 = *(char * PTR32 *)this;
  cVar4 = *pcVar6;
  local_8 = 0;
  uVar2 = local_8;
  do {
    if (cVar4 == '\0') {
      return 0xffffffff;
    }
    iVar5 = 0;
    cVar4 = *param_1;
    while (cVar4 != '\0') {
      cVar3 = pcVar6[iVar5];
      if ((byte)(cVar3 + 0xbfU) < 0x1a) {
        cVar3 = cVar3 + ' ';
      }
      if ((byte)(cVar4 + 0xbfU) < 0x1a) {
        cVar4 = cVar4 + ' ';
      }
      if (cVar3 != cVar4) break;
      iVar1 = iVar5 + 1;
      iVar5 = iVar5 + 1;
      cVar4 = param_1[iVar1];
    }
    if (param_1[iVar5] == '\0') {
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    pcVar6 = pcVar6 + 1;
    cVar4 = *pcVar6;
  } while( true );
}

/* ref: hkStringBuf::LastIndexOfChar */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da4330(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xda4330u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  uint uVar1;
  int iVar2;
  
  iVar2 = param_4;
  if (param_1[1] - 1 < param_4) {
    iVar2 = param_1[1] - 1;
  }
  uVar1 = iVar2 - 1;
  if (param_3 <= (int)uVar1) {
    do {
      if (*((char *)GEN_TOP((*param_1 + uVar1))) == param_2) {
        return uVar1;
      }
      uVar1 = uVar1 - 1;
    } while (param_3 <= (int)uVar1);
  }
  return 0xffffffff;
}

/* ref: hkStringBuf::LastIndexOf */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da4370(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xda4370u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0xffffffff;
  for (uVar1 = F_00da0ee0(*(undefined4 *)this,param_1); uVar1 != 0;
      uVar1 = F_00da0ee0(uVar1 + 1,param_1)) {
    uVar2 = uVar1 - *(int *)this;
  }
  return uVar2;
}

/* ref: hkStringBuf::CompareTo */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da43b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda43b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da0d20(*(undefined4 *)this,param_1);
  return uVar1;
}

/* ref: FUN_00da43d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da43d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda43d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da0d70(*(undefined4 *)this,param_1);
  return uVar1;
}

/* ref: hkStringBuf::LessThan */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da43f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda43f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da0d20(*(undefined4 *)this,param_2);
  *((bool *)GEN_TOP(param_1)) = (int)uVar1 < 0;
  return param_1;
}

/* ref: hkStringBuf::Equals */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da4410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda4410u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00da43b0(this GEN_EDX_FWD,param_1);
  return (uint)(uVar1 == 0);
}

/* ref: hkStringBuf::StartsWith */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da4430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda4430u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  char cVar1;
  char * pcVar2;
  int iVar3;
  
  pcVar2 = *(char * PTR32 *)this;
  iVar3 = 0;
  cVar1 = *pcVar2;
  while ((cVar1 != '\0' && (*((char *)GEN_TOP((iVar3 + param_1))) != '\0'))) {
    if (pcVar2[iVar3] != *((char *)GEN_TOP((iVar3 + param_1)))) {
      return 0;
    }
    iVar3 = iVar3 + 1;
    cVar1 = pcVar2[iVar3];
  }
  return (uint)(*((char *)GEN_TOP((iVar3 + param_1))) == '\0');
}

/* ref: hkStringBuf::StartsWithCase */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da4470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda4470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(char * param_1 = (char *)(uintptr_t)gen_a1;)
  char cVar1;
  char cVar2;
  char * pcVar3;
  char * pcVar4;
  
  pcVar3 = *(char * PTR32 *)this;
  cVar2 = *pcVar3;
  pcVar4 = param_1;
  while( true ) {
    if ((cVar2 == '\0') || (cVar2 = *pcVar4, cVar2 == '\0')) {
      return 1;
    }
    cVar1 = *pcVar3;
    if ((byte)(cVar1 + 0xbfU) < 0x1a) {
      cVar1 = cVar1 + ' ';
    }
    if ((byte)(cVar2 + 0xbfU) < 0x1a) {
      cVar2 = cVar2 + ' ';
    }
    if (cVar1 != cVar2) break;
    pcVar3 = pcVar3 + 1;
    pcVar4 = pcVar4 + 1;
    cVar2 = *pcVar3;
  }
  return 0;
}

/* ref: hkStringBuf::EndsWith */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da44d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda44d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00da0e60(param_1);
  if (*((int *)GEN_TOP(((int)this + 4))) - 1 < (int)uVar1) {
    return 0;
  }
  iVar2 = 0;
  if (0 < (int)uVar1) {
    do {
      if (*((char *)GEN_TOP((*(int *)this + (*((int *)GEN_TOP(((int)this + 4))) - uVar1) - 1 + iVar2))) !=
          *((char *)GEN_TOP((iVar2 + param_1)))) {
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (int)uVar1);
  }
  return 1;
}

/* ref: hkStringBuf::EndsWithCase */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da4520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda4520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  char cVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  
  uVar2 = F_00da0e60(param_1);
  if (*((int *)GEN_TOP(((int)this + 4))) - 1 < (int)uVar2) {
    return 0;
  }
  iVar4 = 0;
  if (0 < (int)uVar2) {
    do {
      cVar1 = *((char *)GEN_TOP((*(int *)this + (*((int *)GEN_TOP(((int)this + 4))) - uVar2) - 1 + iVar4)));
      if ((byte)(cVar1 + 0xbfU) < 0x1a) {
        cVar1 = cVar1 + ' ';
      }
      cVar3 = *((char *)GEN_TOP((iVar4 + param_1)));
      if ((byte)(cVar3 + 0xbfU) < 0x1a) {
        cVar3 = cVar3 + ' ';
      }
      if (cVar1 != cVar3) {
        return 0;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)uVar2);
  }
  return 1;
}

/* ref: hkStringBuf::ReplaceChar */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da45a0(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xda45a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = 0;
  if (param_1[1] == 1 || param_1[1] - 1 < 0) {
    return 0;
  }
  do {
    if (*((char *)GEN_TOP((*param_1 + iVar1))) == param_2) {
      *((undefined1 *)GEN_TOP((*param_1 + iVar1))) = param_3;
      uVar2 = 1;
      if (param_4 == 0) {
        return 1;
      }
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < param_1[1] - 1);
  return uVar2;
}

/* ref: hkStringBuf::LowerCase */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00da45f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda45f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 1 && -1 < *((int *)GEN_TOP(((int)this + 4))) - 1) {
    do {
      cVar1 = *((char *)GEN_TOP((*(int *)this + iVar2)));
      if ((byte)(cVar1 + 0xbfU) < 0x1a) {
        cVar1 = cVar1 + ' ';
      }
      *((char *)GEN_TOP((*(int *)this + iVar2))) = cVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 4))) - 1);
  }
  return 0;
}

/* ref: hkStringBuf::UpperCase */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00da4630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda4630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*((int *)GEN_TOP(((int)this + 4))) != 1 && -1 < *((int *)GEN_TOP(((int)this + 4))) - 1) {
    do {
      cVar1 = *((char *)GEN_TOP((*(int *)this + iVar2)));
      if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        cVar1 = cVar1 - 0x20;
      }
      *((char *)GEN_TOP((*(int *)this + iVar2))) = cVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 4))) - 1);
  }
  return 0;
}

/* ref: hkStringBuf::ChompStart */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00da4670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda4670u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  undefined1 * puVar2;
  int iVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar3 = param_1;
  if (iVar1 <= param_1) {
    iVar3 = iVar1;
  }
  if (0 < iVar3) {
    *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - iVar3;
    puVar2 = *(undefined1 * PTR32 *)this;
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    if (0 < iVar1) {
      do {
        *puVar2 = puVar2[iVar3];
        puVar2 = puVar2 + 1;
        iVar1 = iVar1 - 1;
      } while (iVar1 != 0);
    }
  }
  return 0;
}

/* ref: hkStringBuf::AssignCString */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da46f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda46f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 == 0) {
    if ((*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff) == 0) {
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,1,1);
    }
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 1;
    **(undefined1 * PTR32 *)this = 0;
    return (uint)this;
  }
  uVar2 = F_00da0e60(param_1);
  iVar1 = uVar2 + 1;
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar4,1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  *((undefined1 *)GEN_TOP((uVar2 + *(int *)this))) = 0;
  F_00da1010(*(undefined4 *)this,param_1,uVar2);
  return (uint)this;
}

/* ref: hkStringBuf::Split */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da47a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda47a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(undefined4 *)this;
  if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),param_2,4);
  }
  *((undefined4 *)GEN_TOP((*param_2 + param_2[1] * 4))) = uVar1;
  param_2[1] = param_2[1] + 1;
  uVar2 = param_2[1];
  for (uVar4 = F_00da4230(this GEN_EDX_ARG,(undefined1)param_1,0,0x7fffffff); -1 < (int)uVar4;
      uVar4 = F_00da4230(this GEN_EDX_ARG,(undefined1)param_1,uVar4 + 1,0x7fffffff)) {
    *((undefined1 *)GEN_TOP((uVar4 + *(int *)this))) = 0;
    iVar3 = *(int *)this;
    if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
      F_00d95710(&REFG(undefined * PTR32, 0x13516a4),param_2,4);
    }
    *((uint *)GEN_TOP((*param_2 + param_2[1] * 4))) = iVar3 + uVar4 + 1;
    param_2[1] = param_2[1] + 1;
    uVar2 = param_2[1];
  }
  return uVar2;
}

/* ref: hkStringBuf::Clear */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da4850(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda4850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined1 * puVar1;
  
  if ((*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff) == 0) {
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,1,1);
  }
  puVar1 = *(undefined1 * PTR32 *)this;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 1;
  *puVar1 = 0;
  return (uint)puVar1;
}

/* ref: hkStringBuf::Printf */
GEN_LIB GEN_FRAME uint F_00da4890(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xda4890u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined3 extraout_var = 0;
  uint uVar5;
  
  while( true ) {
    while( true ) {
      uVar5 = param_1[2] & 0x3fffffff;
      uVar3 = F_00da0cd0(*param_1,uVar5,param_2,((undefined *)&gen_args[2]));
      if (-1 < (int)uVar3) break;
      uVar5 = uVar5 * 2;
      if (uVar5 < 0x100) {
        uVar5 = 0xff;
      }
      iVar1 = uVar5 + 1;
      if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
        iVar4 = (param_1[2] & 0x3fffffffU) * 2;
        if (iVar4 <= iVar1) {
          iVar4 = iVar1;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516a4),param_1,iVar4,1);
      }
      param_1[1] = iVar1;
      *((undefined1 *)GEN_TOP((uVar5 + *param_1))) = 0;
    }
    if ((int)uVar3 < (int)uVar5) break;
    iVar1 = uVar3 + 1;
    if ((int)(param_1[2] & 0x3fffffffU) < iVar1) {
      iVar4 = (param_1[2] & 0x3fffffffU) * 2;
      if (iVar4 <= iVar1) {
        iVar4 = iVar1;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),param_1,iVar4,1);
    }
    param_1[1] = iVar1;
    *((undefined1 *)GEN_TOP((uVar3 + *param_1))) = 0;
  }
  iVar1 = uVar3 + 1;
  uVar5 = param_1[2] & 0x3fffffff;
  if ((int)uVar5 < iVar1) {
    iVar4 = uVar5 * 2;
    if ((int)(uVar5 * 2) <= iVar1) {
      iVar4 = iVar1;
    }
    bVar2 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),param_1,iVar4,1);
    uVar5 = CONCAT31(extraout_var,bVar2);
  }
  param_1[1] = iVar1;
  *((undefined1 *)GEN_TOP((uVar3 + *param_1))) = 0;
  return uVar5;
}

/* ref: hkStringBuf::AppendJoin */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00da4980(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xda4980u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_FRAME_DECL_TOP(0x38, 8, 4);
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = param_1;
  ((int *)(gen_frame + 0x0))[2] = param_3;
  ((int *)(gen_frame + 0x0))[1] = param_2;
  ((int *)(gen_frame + 0x0))[4] = param_5;
  iVar7 = 0;
  iVar5 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  ((int *)(gen_frame + 0x0))[3] = param_4;
  iVar6 = 0;
  (*(undefined8 *)(gen_frame + 0x1c)) = 0;
  (*(undefined8 *)(gen_frame + 0x24)) = 0;
  (*(undefined8 *)(gen_frame + 0x2c)) = 0;
  ((int *)(gen_frame + 0x0))[0] = param_1;
  (*(undefined4 *)(gen_frame + 0x14)) = param_6;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  iVar1 = iVar5;
  iVar3 = param_1;
  while (iVar3 != 0) {
    uVar2 = F_00da0e60(iVar3);
    iVar1 = iVar1 + uVar2;
    iVar6 = iVar6 + 1;
    *((uint *)GEN_TOP(((int)&(*(undefined8 *)(gen_frame + 0x1c)) + iVar7))) = uVar2;
    iVar7 = iVar6 * 4;
    iVar3 = ((int *)(gen_frame + 0x0))[(int)(iVar6)];
  }
  iVar7 = iVar1 + 1;
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < iVar7) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar7) {
      iVar3 = iVar7;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar7;
  *((undefined1 *)GEN_TOP((iVar1 + *(int *)this))) = 0;
  param_1 = 0;
  if (iVar4 != 0) {
    iVar7 = 0;
    do {
      iVar1 = *((int *)GEN_TOP(((int)&(*(undefined8 *)(gen_frame + 0x1c)) + iVar7)));
      F_00da1010(*(int *)this + iVar5,iVar4,iVar1);
      param_1 = param_1 + 1;
      iVar7 = param_1 * 4;
      iVar4 = ((int *)(gen_frame + 0x0))[(int)(param_1)];
      iVar5 = iVar5 + iVar1;
    } while (iVar4 != 0);
  }
  return 0;
}

/* ref: hkStringBuf::SetJoin */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00da4a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xda4a90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  F_00da4850(this GEN_EDX_FWD);
  F_00da4980(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

/* ref: hkStringBuf::ChompEnd */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00da4ac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda4ac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (0 < param_1) {
    uVar2 = (*((int *)GEN_TOP(((int)this + 4))) - param_1) - 1;
    uVar2 = ((int)uVar2 < 0) - 1 & uVar2;
    iVar1 = uVar2 + 1;
    uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
    if ((int)uVar3 < iVar1) {
      iVar4 = uVar3 * 2;
      if (iVar4 <= iVar1) {
        iVar4 = iVar1;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar4,1);
    }
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
    *((undefined1 *)GEN_TOP((uVar2 + *(int *)this))) = 0;
  }
  return;
}

/* ref: hkStringBuf::Slice */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da4b20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda4b20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  undefined3 extraout_var = 0;
  
  if (param_1 != 0) {
    F_00da38f0(*(int *)this,param_1 + *(int *)this,param_2);
  }
  iVar1 = param_2 + 1;
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if ((int)(uVar3 * 2) <= iVar1) {
      iVar4 = iVar1;
    }
    bVar2 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar4,1);
    uVar3 = CONCAT31(extraout_var,bVar2);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  *((undefined1 *)GEN_TOP((param_2 + *(int *)this))) = 0;
  return uVar3;
}

/* ref: hkStringBuf::Set */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da4b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda4b80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar2 = param_2;
  if ((int)param_2 < 0) {
    uVar2 = F_00da0e60(param_1);
  }
  iVar1 = uVar2 + 1;
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < iVar1) {
    iVar4 = uVar3 * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar4,1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  *((undefined1 *)GEN_TOP((uVar2 + *(int *)this))) = 0;
  uVar2 = F_00da3710(*(undefined4 *)this,param_1,uVar2);
  return uVar2;
}

/* ref: hkStringBuf::Append */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da4bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda4bf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = 0;
  if (param_1 != 0) {
    if ((int)param_2 < 0) {
      param_2 = F_00da0e60(param_1);
    }
    iVar4 = *((int *)GEN_TOP(((int)this + 4))) - 1;
    iVar1 = *((int *)GEN_TOP(((int)this + 4))) + param_2;
    uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
    if ((int)uVar2 < iVar1) {
      iVar3 = uVar2 * 2;
      if (iVar3 <= iVar1) {
        iVar3 = iVar1;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,1);
    }
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
    *((undefined1 *)GEN_TOP((iVar4 + param_2 + *(int *)this))) = 0;
    uVar2 = F_00da3710(*(int *)this + iVar4,param_1,param_2);
  }
  return uVar2;
}

/* ref: hkStringBuf::AssignCopy */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da4cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xda4cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  undefined1 * puVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < (*(int * PTR32 *)&gen_args[0])[1]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)this + 8)))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar3);
    }
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(piVar2[1]));
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc)));
    uVar3 = (*pcVar1)(&REFG(undefined * PTR32, 0x13516a4),&(*(int * PTR32 *)&gen_args[0]));
    *(uint *)this = uVar3;
    *((int * PTR32 *)GEN_TOP(((int)this + 8))) = (*(int * PTR32 *)&gen_args[0]);
  }
  iVar6 = piVar2[1];
  puVar4 = *(undefined1 * PTR32 *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar6;
  if (0 < iVar6) {
    iVar5 = *piVar2 - (int)puVar4;
    do {
      *puVar4 = puVar4[iVar5];
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return (uint)this;
}

/* ref: hkStringBuf::AppendCString */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da4d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda4d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if (param_1 != 0) {
    uVar1 = F_00da0e60(param_1);
    F_00d9eb80(this GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516a4),*((int *)GEN_TOP(((int)this + 4))) - 1,param_1,uVar1);
  }
  return (uint)this;
}

/* ref: hkStringBuf::Insert */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00da4db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xda4db0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = param_3;
    if ((int)param_3 < 0) {
      uVar1 = F_00da0e60(param_2);
    }
    F_00d9eb80(this GEN_EDX_ARG,&REFG(undefined * PTR32, 0x13516a4),param_1,param_2,uVar1);
  }
  return;
}

/* ref: hkStringBuf::hkStringBuf_00da4df0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da4df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda4df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  *(undefined1 * PTR32 *)this = ((undefined1 *)GEN_TOP(((int)this + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000080;
  if (param_1 != 0) {
    uVar2 = F_00da0e60(param_1);
    iVar1 = uVar2 + 1;
    uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
    if ((int)uVar3 < iVar1) {
      iVar4 = uVar3 * 2;
      if (iVar4 <= iVar1) {
        iVar4 = iVar1;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar4,1);
    }
    *((int *)GEN_TOP(((int)this + 4))) = iVar1;
    *((undefined1 *)GEN_TOP((uVar2 + *(int *)this))) = 0;
    F_00da1010(*(undefined4 *)this,param_1,uVar2);
    return (uint)this;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 1;
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
  return (uint)this;
}

/* ref: hkStringBuf::hkStringBufFromStringPtr */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da4e80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda4e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000080;
  F_00da46f0(this GEN_EDX_FWD,*param_1 & 0xfffffffe);
  return (uint)this;
}

/* ref: hkStringBuf::hkStringBufJoin */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da4eb0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6))
{
  GEN_ENTER(0xda4eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  *(undefined1 * PTR32 *)this = ((undefined1 *)GEN_TOP(((int)this + 0xc)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000080;
  *((undefined1 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  F_00da4980(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5,param_6);
  return (uint)this;
}

/* ref: hkStringBuf::hkStringBufWithLength */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da4f00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda4f00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 + 1;
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000080;
  if (0x80 < iVar1) {
    iVar2 = 0x100;
    if (0xff < iVar1) {
      iVar2 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar2,1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  *((undefined1 *)GEN_TOP((param_2 + *(int *)this))) = 0;
  F_00da1010(*(undefined4 *)this,param_1,param_2);
  return (uint)this;
}

/* ref: hkStringBuf::hkStringBufCopy */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da4f70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xda4f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  undefined1 * puVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000080;
  (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[1]));
  if (0x80 < (int)(*(int * PTR32 *)&gen_args[0])) {
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc)));
    uVar3 = (*pcVar1)(&REFG(undefined * PTR32, 0x13516a4),&(*(int * PTR32 *)&gen_args[0]));
    *(uint *)this = uVar3;
    *((int * PTR32 *)GEN_TOP(((int)this + 8))) = (*(int * PTR32 *)&gen_args[0]);
  }
  iVar6 = piVar2[1];
  puVar4 = *(undefined1 * PTR32 *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar6;
  if (0 < iVar6) {
    iVar5 = *piVar2 - (int)puVar4;
    do {
      *puVar4 = puVar4[iVar5];
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return (uint)this;
}

/* ref: hkStringBuf::Prepend */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00da4fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda4fe0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00da4db0(this GEN_EDX_FWD,0,param_1,param_2);
  return;
}

/* ref: hkStringBuf::PathNormalize */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da5000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda5000u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xb0, 0, 4);
  undefined4 * puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  F_00da4f70(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_FWD,this);
  F_00da45a0(&(*(undefined4 *)(gen_frame + 0x0)) GEN_EDX_ARG,0x5c,0x2f,1);
  (*(int *)(gen_frame + 0x90)) = 0;
  (*(int *)(gen_frame + 0x94)) = 0;
  (*(uint *)(gen_frame + 0x98)) = 0x80000000;
  F_00da47a0((((undefined *)GEN_TOP((uint)(&(*(undefined4 *)(gen_frame + 0x0)))))) GEN_EDX_ARG,0x2f,&(*(int *)(gen_frame + 0x90)));
  iVar4 = 0;
  (*(int *)(gen_frame + 0x8c)) = 0;
  if (0 < (*(int *)(gen_frame + 0x94))) {
    do {
      uVar3 = F_00da0d20(&REFG(undefined, 0x113be34),*((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x90)) + iVar4 * 4))));
      if (uVar3 != 0) {
        (*(int *)(gen_frame + 0x8c)) = iVar4;
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < (*(int *)(gen_frame + 0x94)));
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xa0)) = ((undefined4 *)GEN_TOP(0x0));
  (*(uint *)(gen_frame + 0xa4)) = 0;
  (*(int *)(gen_frame + 0x9c)) = 0;
  (*(uint *)(gen_frame + 0xa8)) = 0x80000000;
  iVar4 = (*(int *)(gen_frame + 0x94));
  while (iVar4 = iVar4 - 1, -1 < iVar4) {
    uVar2 = *((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x90)) + iVar4 * 4)));
    uVar3 = F_00da0d20(&REFG(undefined, 0x113be34),uVar2);
    if (uVar3 == 0) {
      (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) + 1;
    }
    else if ((*(int *)(gen_frame + 0x9c)) < 1) {
      puVar1 = ((undefined4 *)GEN_TOP(((*(int *)(gen_frame + 0x90)) + iVar4 * 4)));
      if ((*(uint *)(gen_frame + 0xa4)) == ((*(uint *)(gen_frame + 0xa8)) & 0x3fffffff)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516a4),&(*(undefined4 * PTR32 *)(gen_frame + 0xa0)),4);
      }
      (*(undefined4 * PTR32 *)(gen_frame + 0xa0))[(*(uint *)(gen_frame + 0xa4))] = *puVar1;
      (*(uint *)(gen_frame + 0xa4)) = (*(uint *)(gen_frame + 0xa4)) + 1;
    }
    else {
      (*(int *)(gen_frame + 0x9c)) = (*(int *)(gen_frame + 0x9c)) - 1;
    }
  }
  F_00da4850(this GEN_EDX_ARG);
  uVar3 = (*(uint *)(gen_frame + 0xa4));
  if (0 < (int)(*(uint *)(gen_frame + 0xa4))) {
    while (uVar3 = uVar3 - 1, 0 < (int)uVar3) {
      uVar2 = (*(undefined4 * PTR32 *)(gen_frame + 0xa0))[uVar3];
      F_00da4980(this GEN_EDX_ARG,uVar2,&REFG(undefined, 0x1080808),0,0,0,0);
    }
    uVar2 = *(*(undefined4 * PTR32 *)(gen_frame + 0xa0));
    F_00da4bf0(this GEN_EDX_ARG,uVar2,0xffffffff);
    iVar4 = (*(int *)(gen_frame + 0x8c));
    if (0 < (*(int *)(gen_frame + 0x8c))) {
      do {
        F_00da4fe0(this GEN_EDX_ARG,&REFG(undefined, 0x113be30),0xffffffff);
        iVar4 = iVar4 - 1;
      } while (iVar4 != 0);
    }
  }
  (*(uint *)(gen_frame + 0xa4)) = 0;
  if (((*(uint *)(gen_frame + 0xa8)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(undefined4 * PTR32 *)(gen_frame + 0xa0)),(*(uint *)(gen_frame + 0xa8)) * 4);
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0xa0)) = ((undefined4 *)GEN_TOP(0x0));
  (*(uint *)(gen_frame + 0xa8)) = 0x80000000;
  (*(int *)(gen_frame + 0x94)) = 0;
  if (((*(uint *)(gen_frame + 0x98)) & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x90)),(*(uint *)(gen_frame + 0x98)) * 4);
  }
  (*(int *)(gen_frame + 0x90)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(uint *)(gen_frame + 0x98)) = 0x80000000;
  uVar3 = (*(uint *)(gen_frame + 0x8));
  if (((*(uint *)(gen_frame + 0x8)) & 0x80000000) == 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10)))) (&REFG(undefined * PTR32, 0x13516a4),(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
  }
  return uVar3;
}

/* ref: hkStringBuf::Replace */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da51f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xda51f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_TOP(0xa4, 12, 4);
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  uVar2 = F_00da0e60(param_1);
  (*(uint *)(gen_frame + 0x90)) = uVar2;
  uVar3 = F_00da0e60(param_2);
  (*(uint *)(gen_frame + 0x94)) = uVar3;
  (*(uint *)(gen_frame + 0x9c)) = 0;
  if ((int)uVar2 < (int)uVar3) {
    F_00da4f70(&(*(int *)(gen_frame + 0x0)) GEN_EDX_ARG,this);
    F_00da4850(this GEN_EDX_ARG);
    iVar6 = 0;
    uVar2 = F_00da4270(&(*(int *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,0,0x7fffffff);
    if (-1 < (int)uVar2) {
      (*(uint *)(gen_frame + 0x9c)) = 1;
      do {
        F_00da4bf0(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)) + iVar6,uVar2 - iVar6);
        F_00da4bf0(this GEN_EDX_ARG,param_2,(*(uint *)(gen_frame + 0x94)));
        iVar6 = uVar2 + (*(uint *)(gen_frame + 0x90));
        if (param_3 == 0) break;
        uVar2 = F_00da4270(&(*(int *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1,iVar6,0x7fffffff);
      } while (-1 < (int)uVar2);
    }
    F_00da4bf0(this GEN_EDX_ARG,(*(int *)(gen_frame + 0x0)) + iVar6,((*(int *)(gen_frame + 0x4)) - iVar6) - 1);
    (*(int *)(gen_frame + 0x4)) = 0;
    if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516a4),(*(int *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
      return (*(uint *)(gen_frame + 0x9c));
    }
  }
  else {
    iVar6 = *(int *)this;
    (*(int *)(gen_frame + 0x98)) = 0;
    iVar7 = 0;
    (*(uint *)(gen_frame + 0x8c)) = F_00da4270(this GEN_EDX_ARG,param_1,0,0x7fffffff);
    while (iVar5 = (*(int *)(gen_frame + 0x98)), (*(uint *)(gen_frame + 0x8c)) != 0xffffffff) {
      for (; iVar5 < (int)(*(uint *)(gen_frame + 0x8c)); iVar5 = iVar5 + 1) {
        uVar1 = *((undefined1 *)GEN_TOP((iVar5 + iVar6)));
        *((undefined1 *)GEN_TOP((iVar7 + iVar6))) = uVar1;
        iVar7 = iVar7 + 1;
      }
      iVar4 = 0;
      if (0 < (int)(*(uint *)(gen_frame + 0x94))) {
        do {
          *((undefined1 *)GEN_TOP((iVar7 + iVar6))) = *((undefined1 *)GEN_TOP((iVar4 + param_2)));
          iVar4 = iVar4 + 1;
          iVar7 = iVar7 + 1;
        } while (iVar4 < (int)(*(uint *)(gen_frame + 0x94)));
      }
      (*(int *)(gen_frame + 0x98)) = iVar5 + (*(uint *)(gen_frame + 0x90));
      if (param_3 == 0) break;
      (*(uint *)(gen_frame + 0x8c)) = F_00da4270(this GEN_EDX_ARG,param_1,(*(uint *)(gen_frame + 0x8c)) + (*(uint *)(gen_frame + 0x90)),0x7fffffff);
    }
    iVar5 = (*(int *)(gen_frame + 0x98));
    if ((*(int *)(gen_frame + 0x98)) < *((int *)GEN_TOP(((int)this + 4))) - 1) {
      do {
        *((undefined1 *)GEN_TOP((iVar7 + iVar6))) = *((undefined1 *)GEN_TOP((iVar5 + iVar6)));
        iVar5 = iVar5 + 1;
        iVar7 = iVar7 + 1;
      } while (iVar5 < *((int *)GEN_TOP(((int)this + 4))) - 1);
    }
    *((undefined1 *)GEN_TOP((iVar7 + iVar6))) = 0;
    iVar6 = iVar7 + 1;
    uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
    if ((int)uVar2 < iVar6) {
      iVar5 = uVar2 * 2;
      if (iVar5 <= iVar6) {
        iVar5 = iVar6;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar5,1);
    }
    iVar5 = *(int *)this;
    *((int *)GEN_TOP(((int)this + 4))) = iVar6;
    *((undefined1 *)GEN_TOP((iVar7 + iVar5))) = 0;
  }
  return (*(uint *)(gen_frame + 0x9c));
}

/* ref: hkStringBuf::AppendPrintf */
GEN_LIB GEN_FRAME uint F_00da53f0(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xda53f0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  GEN_FRAME_DECL_TOP(0x90, 0, 4);
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x8)) = 0x80000080;
  (*(int *)(gen_frame + 0x4)) = 1;
  ((undefined1 *)(gen_frame + 0xc))[0] = 0;
  while( true ) {
    while( true ) {
      uVar2 = (*(uint *)(gen_frame + 0x8)) & 0x3fffffff;
      uVar3 = F_00da0cd0((*(undefined1 * PTR32 *)(gen_frame + 0x0)),uVar2,param_2,((undefined *)&gen_args[2]));
      if (-1 < (int)uVar3) break;
      uVar2 = uVar2 * 2;
      if (uVar2 < 0x100) {
        uVar2 = 0xff;
      }
      iVar1 = uVar2 + 1;
      if ((int)((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) < iVar1) {
        iVar4 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
        if (iVar4 <= iVar1) {
          iVar4 = iVar1;
        }
        F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),iVar4,1);
      }
      (*(int *)(gen_frame + 0x4)) = iVar1;
      (*(undefined1 * PTR32 *)(gen_frame + 0x0))[uVar2] = 0;
    }
    if ((int)uVar3 < (int)uVar2) break;
    iVar1 = uVar3 + 1;
    if ((int)((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) < iVar1) {
      iVar4 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
      if (iVar4 <= iVar1) {
        iVar4 = iVar1;
      }
      F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),iVar4,1);
    }
    (*(int *)(gen_frame + 0x4)) = iVar1;
    (*(undefined1 * PTR32 *)(gen_frame + 0x0))[uVar3] = 0;
  }
  iVar1 = uVar3 + 1;
  if ((int)((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) < iVar1) {
    iVar4 = ((*(uint *)(gen_frame + 0x8)) & 0x3fffffff) * 2;
    if (iVar4 <= iVar1) {
      iVar4 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),iVar4,1);
  }
  (*(int *)(gen_frame + 0x4)) = iVar1;
  (*(undefined1 * PTR32 *)(gen_frame + 0x0))[uVar3] = 0;
  F_00da4bf0(param_1 GEN_EDX_ARG,(*(undefined1 * PTR32 *)(gen_frame + 0x0)),0xffffffff);
  (*(int *)(gen_frame + 0x4)) = 0;
  uVar2 = (*(uint *)(gen_frame + 0x8));
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff);
  }
  return uVar2;
}

/* ref: hkArray::hkArrayFromBuffer */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da55b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xda55b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: hkArray::SetSize */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da55d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda55d0u, gen_a0, gen_a1, 0u, 0u);
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
    bVar1 = F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,1);
    uVar2 = CONCAT31(extraout_var,bVar1);
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return uVar2;
}

/* ref: hkArray::PushBack */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da5610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda5610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  
  if (*((uint *)GEN_TOP(((int)this + 4))) == (*((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516a4),this,4);
  }
  puVar1 = ((undefined4 *)GEN_TOP((*(int *)this + *((int *)GEN_TOP(((int)this + 4))) * 4)));
  *puVar1 = *param_1;
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  return (uint)puVar1;
}

/* ref: hkArray::AssignCopy */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da5650(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xda5650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  undefined1 * puVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < (*(int * PTR32 *)&gen_args[0])[1]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)this + 8)))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar3);
    }
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(piVar2[1]));
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc)));
    uVar3 = (*pcVar1)(&REFG(undefined * PTR32, 0x13516a4),&(*(int * PTR32 *)&gen_args[0]));
    *(uint *)this = uVar3;
    *((int * PTR32 *)GEN_TOP(((int)this + 8))) = (*(int * PTR32 *)&gen_args[0]);
  }
  iVar6 = piVar2[1];
  puVar4 = *(undefined1 * PTR32 *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar6;
  if (0 < iVar6) {
    iVar5 = *piVar2 - (int)puVar4;
    do {
      *puVar4 = puVar4[iVar5];
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return (uint)this;
}

/* ref: hkStringBuf::SetLength */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da56d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda56d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = param_1 + 1;
  uVar2 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar2 < iVar1) {
    iVar3 = uVar2 * 2;
    if (iVar3 <= iVar1) {
      iVar3 = iVar1;
    }
    F_00d95690(&REFG(undefined * PTR32, 0x13516a4),this,iVar3,1);
  }
  uVar2 = *(uint *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar1;
  *((undefined1 *)GEN_TOP((param_1 + uVar2))) = 0;
  return uVar2;
}

/* ref: FUN_00da5720 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00da5720(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xda5720u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  F_00d9eb80(this GEN_EDX_FWD,&REFG(undefined * PTR32, 0x13516a4),param_1,param_2,param_3);
  return;
}

/* ref: hkInplaceArray::hkInplaceArray */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da5740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda5740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(int *)this = (int)this + 0xc;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000080;
  return (uint)this;
}

/* ref: FUN_00da5760 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da5760(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xda5760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  code * pcVar1;
  int * piVar2;
  uint uVar3;
  undefined1 * puVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = (*(int * PTR32 *)&gen_args[0]);
  uVar3 = *((uint *)GEN_TOP(((int)this + 8))) & 0x3fffffff;
  if ((int)uVar3 < (*(int * PTR32 *)&gen_args[0])[1]) {
    if (-1 < (int)*((uint *)GEN_TOP(((int)this + 8)))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),*(undefined4 *)this,uVar3);
    }
    (*(int * PTR32 *)&gen_args[0]) = ((int *)GEN_TOP(piVar2[1]));
    pcVar1 = *((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0xc)));
    uVar3 = (*pcVar1)(&REFG(undefined * PTR32, 0x13516a4),&(*(int * PTR32 *)&gen_args[0]));
    *(uint *)this = uVar3;
    *((int * PTR32 *)GEN_TOP(((int)this + 8))) = (*(int * PTR32 *)&gen_args[0]);
  }
  iVar6 = piVar2[1];
  puVar4 = *(undefined1 * PTR32 *)this;
  *((int *)GEN_TOP(((int)this + 4))) = iVar6;
  if (0 < iVar6) {
    iVar5 = *piVar2 - (int)puVar4;
    do {
      *puVar4 = puVar4[iVar5];
      puVar4 = puVar4 + 1;
      iVar6 = iVar6 - 1;
    } while (iVar6 != 0);
  }
  return (uint)this;
}

/* ref: hkArray::ClearAndDeallocate_00da57e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da57e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda57e0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00da5820 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da5820(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda5820u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00da5890 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da5890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda5890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  while ((*(int *)this == 0 || (uVar1 = F_00da0d20(param_1,*(int *)this), uVar1 != 0))) {
    this = *((undefined * PTR32 *)GEN_TOP(((int)this + 8)));
    if (this == ((int *)GEN_TOP(0x0))) {
      return 0;
    }
  }
  return (uint)this;
}

/* ref: Global::LinkSingletonList */
GEN_LIB GEN_FRAME uint F_00da58d0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda58d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16));
  ((byte *)(gen_frame + 0x0))[0x10] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) = uVar3 & 0xffffff00;
  F_00da3de0(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)));
  for (puVar1 = param_2; puVar2 = param_1, puVar1 != ((undefined4 *)GEN_TOP(0x0));
      puVar1 = ((undefined4 *)GEN_TOP(puVar1[2]))) {
    F_00da3a20(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,*puVar1,puVar1);
  }
  for (; puVar2 != ((undefined4 *)GEN_TOP(0x0)); puVar2 = ((undefined4 *)GEN_TOP(puVar2[2]))) {
    uVar4 = F_00da4190(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,*puVar2,0);
    if (uVar4 != 0) {
      *((undefined4 *)GEN_TOP(puVar2[3])) = **((undefined4 * PTR32 *)GEN_TOP((uVar4 + 0xc)));
      if (*((int *)GEN_TOP(puVar2[3])) != 0) {
        F_00d91830(*((int *)GEN_TOP(puVar2[3])) GEN_EDX_ARG);
      }
    }
  }
  uVar4 = F_00da3e20(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar4;
}

/* ref: Global::UnlinkSingletonList */
GEN_LIB GEN_FRAME uint F_00da5950(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda5950u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar3 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16));
  ((byte *)(gen_frame + 0x0))[0x10] = 0;
  (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)) = uVar3 & 0xffffff00;
  F_00da3de0(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 16)));
  for (puVar1 = param_2; puVar2 = param_1, puVar1 != ((undefined4 *)GEN_TOP(0x0));
      puVar1 = ((undefined4 *)GEN_TOP(puVar1[2]))) {
    F_00da3a20(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,*puVar1,puVar1);
  }
  for (; puVar2 != ((undefined4 *)GEN_TOP(0x0)); puVar2 = ((undefined4 *)GEN_TOP(puVar2[2]))) {
    uVar4 = F_00da4190(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,*puVar2,0);
    if (uVar4 != 0) {
      if (*((int *)GEN_TOP(puVar2[3])) != 0) {
        F_00d91840(*((undefined * PTR32 *)GEN_TOP(puVar2[3])) GEN_EDX_ARG);
      }
      *((undefined4 *)GEN_TOP(puVar2[3])) = 0;
    }
  }
  uVar4 = F_00da3e20(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar4;
}

/* ref: FUN_00da59d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da59d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda59d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint local_8;
  
  local_8 = (uint)this & 0xffffff00;
  F_00da3de0(this GEN_EDX_FWD,local_8);
  return (uint)this;
}

/* ref: FUN_00da59f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da59f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda59f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da3a20(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00da5a00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da5a00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda5a00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da4190(this GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00da5a10 */
GEN_LIB GEN_FRAME uint F_00da5a10(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda5a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00da5a30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da5a30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda5a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0xc))) = param_2;
  return param_2;
}

/* ref: Global::CriticalSectionLock */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da5a60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(LPCRITICAL_SECTION param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda5a60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(LPCRITICAL_SECTION param_1 = (LPCRITICAL_SECTION)gen_a1;)
  *(LPCRITICAL_SECTION *)this = param_1;
  gen_imp_EnterCriticalSection(param_1);
  return (uint)this;
}

/* ref: FUN_00da5a90 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da5a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda5a90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00db3820(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: hkMultiThreadCheck::MarkForRead */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00da5aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda5aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = REFG(undefined4, 0x15dff8c);
  if (((*((ushort *)GEN_TOP(((int)this + 8))) & 0x8000) == 0) && (REFG(undefined4, 0x15dff8c) != (LPCRITICAL_SECTION)0x0)) {
    gen_imp_EnterCriticalSection(REFG(undefined4, 0x15dff8c));
    iVar1 = *(int *)this;
    if ((iVar1 == -0x3f) || ((iVar1 == -0x1f || (iVar1 == -0xf)))) {
      *(uint *)this = (-(uint)(param_1 != 1) & 0xffffffe0) - 0x1f;
    }
    *((short *)GEN_TOP(((int)this + 10))) = *((short *)GEN_TOP(((int)this + 10))) << 1;
    *((short *)GEN_TOP(((int)this + 8))) = *((short *)GEN_TOP(((int)this + 8))) + 1;
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: hkMultiThreadCheck::MarkForWrite */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00da5b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda5b00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = REFG(undefined4, 0x15dff8c);
  if (((*((ushort *)GEN_TOP(((int)this + 8))) & 0x8000) == 0) && (REFG(undefined4, 0x15dff8c) != (LPCRITICAL_SECTION)0x0)) {
    gen_imp_EnterCriticalSection(REFG(undefined4, 0x15dff8c));
    uVar1 = F_00db61e0();
    *((short *)GEN_TOP(((int)this + 8))) = *((short *)GEN_TOP(((int)this + 8))) + 1;
    *((ushort *)GEN_TOP(((int)this + 10))) = *((short *)GEN_TOP(((int)this + 10))) * 2 | 1;
    if (*(int *)this == -0xf) {
      *(uint *)this = uVar1;
    }
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: hkMultiThreadCheck::UnmarkForRead */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00da5ba0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda5ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = REFG(undefined4, 0x15dff8c);
  if (((*((ushort *)GEN_TOP(((int)this + 8))) & 0x8000) == 0) && (REFG(undefined4, 0x15dff8c) != (LPCRITICAL_SECTION)0x0)) {
    gen_imp_EnterCriticalSection(REFG(undefined4, 0x15dff8c));
    *((ushort *)GEN_TOP(((int)this + 10))) = *((ushort *)GEN_TOP(((int)this + 10))) >> 1;
    *((short *)GEN_TOP(((int)this + 8))) = *((short *)GEN_TOP(((int)this + 8))) - 1;
    if (*((short *)GEN_TOP(((int)this + 8))) == 0) {
      *(undefined4 *)this = 0xfffffff1;
    }
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: FUN_00da5bf0 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00da5bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda5bf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = REFG(undefined4, 0x15dff8c);
  if (((*((ushort *)GEN_TOP(((int)this + 8))) & 0x8000) == 0) && (REFG(undefined4, 0x15dff8c) != (LPCRITICAL_SECTION)0x0)) {
    gen_imp_EnterCriticalSection(REFG(undefined4, 0x15dff8c));
    *((ushort *)GEN_TOP(((int)this + 10))) = *((ushort *)GEN_TOP(((int)this + 10))) >> 1;
    *((short *)GEN_TOP(((int)this + 8))) = *((short *)GEN_TOP(((int)this + 8))) - 1;
    if (*((short *)GEN_TOP(((int)this + 8))) == 0) {
      *(undefined4 *)this = 0xfffffff1;
    }
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: FUN_00da5c70 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da5c70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda5c70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  if (((*((ushort *)GEN_TOP(((int)this + 8))) & 0x8000) != 0) || (REFG(int, 0x15dff8c) == 0)) {
    *(undefined4 *)this = 0xfffffff1;
    *((undefined2 *)GEN_TOP(((int)this + 8))) = 0;
  }
  return 0x8000;
}

/* ref: hkMultiThreadCheck::StaticInit */
GEN_LIB GEN_FRAME uint F_00da5cd0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda5cd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  undefined * this;
  undefined * phVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                           (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x18)));
  if (this == ((undefined *)GEN_TOP(0x0))) {
    REFG(undefined4, 0x15dff8c) = 0;
  }
  else {
    REFG(undefined4, 0x15dff8c) = F_00da5ee0(this GEN_EDX_ARG,1000);
  }
  phVar2 = REFG(undefined4, 0x15dffb0);
  if ((REFG(undefined4, 0x15dffb0) == ((undefined *)GEN_TOP(0x0))) &&
     (phVar2 = ((undefined *)GEN_TOP(F_00db36d0())),
     REFG(undefined4, 0x15dffb0) != ((undefined *)GEN_TOP(0x0)))) {
    F_00d91840(REFG(undefined4, 0x15dffb0) GEN_EDX_ARG);
  }
  REFG(undefined4, 0x15dffb0) = phVar2;
  *(undefined * PTR32 *)&REFG(undefined, 0x15dff84) = REFG(undefined4, 0x15dffb0);
  *(undefined4 *)&REFG(undefined, 0x15dff90) = 0;
  *(undefined4 *)&REFG(undefined, 0x15dff94) = 0;
  *(undefined4 *)&REFG(undefined, 0x15dff98) = 0x80000000;
  *(undefined4 *)&REFG(undefined, 0x15dffa0) = 0xffffffff;
  *(undefined4 *)&REFG(undefined, 0x15dffa4) = 0xffffffff;
  *(undefined * PTR32 *)&REFG(undefined, 0x15dff88) = &REFG(undefined, 0x15dff90);
  *(undefined4 *)&REFG(undefined, 0x15dff9c) = param_1;
  return 0xffffffff;
}

/* ref: Global::StackTraceLineCallback */
GEN_LIB GEN_FRAME uint F_00da5df0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda5df0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL_TOP(0x90, 0, 4);
  uint uVar1;
  
  F_00da4df0(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  uVar1 = F_00da4270(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x113c184)),0,0x7fffffff);
  if (uVar1 == 0xffffffff) {
    uVar1 = F_00da4370(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,&REFG(undefined, 0x1118c14),0,0x7fffffff);
    if (uVar1 != 0xffffffff) {
      F_00da4670(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar1 + 1);
    }
    F_00da4d70(param_2 GEN_EDX_ARG,(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)));
  }
  ((byte *)(gen_frame + 0x0))[4] = 0;
  ((byte *)(gen_frame + 0x0))[5] = 0;
  ((byte *)(gen_frame + 0x0))[6] = 0;
  ((byte *)(gen_frame + 0x0))[7] = 0;
  uVar1 = (*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8));
  if (-1 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516a4),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) & 0x3fffffff);
  }
  return uVar1;
}

/* ref: Global::SetStackTracer */
GEN_LIB GEN_FRAME unsigned int F_00da5e90(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda5e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  if (REFG(undefined4, 0x15dffb0) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91840(REFG(undefined4, 0x15dffb0) GEN_EDX_ARG);
    REFG(undefined4, 0x15dffb0) = ((undefined *)GEN_TOP(param_1));
    return;
  }
  REFG(undefined4, 0x15dffb0) = ((undefined *)GEN_TOP(param_1));
  return;
}

/* ref: Global::RouterAlloc */
GEN_LIB GEN_FRAME uint F_00da5ec0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda5ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: hkCriticalSection::CriticalSection */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da5ee0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xda5ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  DWORD dwSpinCount;
  
  dwSpinCount = (*(DWORD *)&gen_args[0]);
  if ((*(DWORD *)&gen_args[0]) == 0) {
    F_00d9baa0(&(*(DWORD *)&gen_args[0]));
    dwSpinCount = (*(DWORD *)&gen_args[0]) * 1000;
  }
  gen_imp_InitializeCriticalSectionAndSpinCount(this,dwSpinCount);
  return (uint)this;
}

/* ref: hkClassMember::GetClassMemberTypeProperties */
GEN_LIB GEN_FRAME uint F_00da5f30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda5f30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return (uint)(&REFG(undefined, 0x13523c8) + param_1 * 0xc);
}

/* ref: hkClassMember::IsBasicType */
GEN_LIB GEN_NOFRAME uint F_00da5f50(GEN_P(int in_eax, unsigned int gen_a0))
{
  GEN_ENTER(0xda5f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  if ((-1 < in_eax) &&
     ((((in_eax < 0x14 || (in_eax == 0x1c)) || (in_eax == 0x1e)) ||
      (((in_eax == 0x1d || (in_eax == 0x20)) || (in_eax == 0x21)))))) {
    return 1;
  }
  return 0;
}

/* ref: hkClassMember::AppendBasicTypeName */
GEN_LIB GEN_FRAME uint GEN_FASTCALL F_00da5f80(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda5f80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = F_00da46f0(param_1 GEN_EDX_ARG,(&REFG(undefined * PTR32, 0x13523cc))[(int)(param_3 * 3)]);
    return uVar1;
  }
  uVar1 = F_00da4890(param_1,((char *)REFP(0x113c198)),(&REFG(undefined * PTR32, 0x13523cc))[(int)(param_3 * 3)],param_2);
  return uVar1;
}

/* ref: FUN_00da5fc0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da5fc0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda5fc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 4)));
}

/* ref: FUN_00da5fd0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da5fd0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda5fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 4)));
}

/* ref: FUN_00da5fe0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da5fe0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda5fe0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 8)));
}

/* ref: FUN_00da5ff0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da5ff0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda5ff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (int)*((short *)GEN_TOP((in_ecx + 0xe)));
}

/* ref: hkClassMember::GetAttribute */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda6010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00d925c0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x14))) GEN_EDX_FWD,param_1);
    return uVar1;
  }
  return 0;
}

/* ref: hkClassMember::GetSizeInBytes */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da6030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda6030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)*((byte *)GEN_TOP(((int)this + 0xc)));
  switch((unsigned int)(uintptr_t)(uVar3)) {
  case 1: ;
  case 2: ;
  case 3: ;
  case 4: ;
  case 5: ;
  case 6: ;
  case 7: ;
  case 8: ;
  case 9: ;
  case 10: ;
  case 0xb: ;
  case 0xc: ;
  case 0xd: ;
  case 0xe: ;
  case 0xf: ;
  case 0x10: ;
  case 0x11: ;
  case 0x12: ;
  case 0x14: ;
  case 0x15: ;
  case 0x16: ;
  case 0x1a: ;
  case 0x1b: ;
  case 0x1c: ;
  case 0x1d: ;
  case 0x1e: ;
  case 0x20: ;
  case 0x21: ;
  case 0x22: ;
    break;
  default: ;
    return 0xffffffff;
  case 0x18: ;
  case 0x1f: ;
    uVar3 = F_00da5ff0(this GEN_EDX_FWD);
    if (uVar3 == 0) {
      uVar3 = 1;
      iVar2 = ((int)(uint)(this));
    }
    else {
      uVar3 = F_00da5ff0(((int)(uint)(this)) GEN_EDX_ARG);
      iVar2 = ((int)(uint)(((int)(uint)(this))));
    }
    return (int)*(short *)(&REFG(undefined, 0x13523d0) + (uint)*((byte *)GEN_TOP((iVar2 + 0xd))) * 0xc) * uVar3;
  case 0x19: ;
    uVar3 = F_00da5ff0(this GEN_EDX_ARG);
    if (uVar3 == 0) {
      uVar3 = F_00da5fc0(((undefined4)(uint)(this)) GEN_EDX_ARG);
      uVar3 = F_00d929c0(uVar3 GEN_EDX_ARG);
      return uVar3;
    }
    uVar3 = F_00da5ff0(((undefined4)(uint)(this)) GEN_EDX_ARG);
    uVar1 = F_00da5fc0(((undefined4)(uint)((this))) GEN_EDX_ARG);
    uVar1 = F_00d929c0(uVar1 GEN_EDX_ARG);
    return uVar1 * uVar3;
  }
  uVar1 = F_00da5ff0(this GEN_EDX_ARG);
  if (uVar1 == 0) {
    return (int)*(short *)(&REFG(undefined, 0x13523d0) + uVar3 * 0xc);
  }
  uVar1 = F_00da5ff0(((undefined4)(uint)(this)) GEN_EDX_ARG);
  return (int)*(short *)(&REFG(undefined, 0x13523d0) + uVar3 * 0xc) * uVar1;
}

/* ref: FUN_00da6120 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6120(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda6120u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *((bool *)GEN_TOP(param_1)) = (*((ushort *)GEN_TOP(((int)this + 0x10))) & 0x200) == 0x200;
  return param_1;
}

/* ref: hkClassMember::GetAlignment */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da6140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda6140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  
  uVar1 = (uint)*((byte *)GEN_TOP(((int)this + 0xc)));
  if ((uVar1 == 0x18) || (uVar1 == 0x1f)) {
    uVar1 = (uint)*((byte *)GEN_TOP(((int)this + 0xd)));
  }
  if (uVar1 == 0x19) {
    uVar1 = 1;
    iVar4 = 0;
    uVar2 = F_00d927e0(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD);
    if (0 < (int)uVar2) {
      do {
        pvVar3 = ((undefined *)GEN_TOP(F_00d92800(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,iVar4)));
        uVar2 = F_00da6140(pvVar3 GEN_EDX_ARG);
        if ((int)uVar1 < (int)uVar2) {
          pvVar3 = ((undefined *)GEN_TOP(F_00d92800(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,iVar4)));
          uVar1 = F_00da6140(pvVar3 GEN_EDX_ARG);
        }
        iVar4 = iVar4 + 1;
        uVar2 = F_00d927e0(*((undefined * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
      } while (iVar4 < (int)uVar2);
    }
  }
  else {
    uVar1 = (uint)*(short *)(&REFG(undefined, 0x13523d2) + uVar1 * 0xc);
  }
  if (((*((ushort *)GEN_TOP(((int)this + 0x10))) & 0x180) != 0) &&
     (uVar2 = (-(uint)((*((ushort *)GEN_TOP(((int)this + 0x10))) & 0x100) != 0) & 8) + 8,
     (int)uVar1 < (int)uVar2)) {
    uVar1 = uVar2;
  }
  return uVar1;
}

/* ref: FUN_00da61e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da61e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda61e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return (uint)*((byte *)GEN_TOP((in_ecx + 0xd)));
}

/* ref: hkClassMember::GetArrayMemberSize */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da61f0(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda61f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00da61e0(in_ecx GEN_EDX_FWD);
  if (uVar1 != 0x18) {
    uVar1 = F_00da61e0(((undefined4)(uint)(in_ecx)) GEN_EDX_ARG);
    if (uVar1 != 0x1f) {
      uVar1 = F_00da61e0(((undefined4)(uint)((in_ecx))) GEN_EDX_ARG);
      if (uVar1 != 0x19) {
        uVar1 = F_00da61e0(((undefined4)(uint)(((in_ecx)))) GEN_EDX_ARG);
        return (int)*(short *)(&REFG(undefined, 0x13523d0) + uVar1 * 0xc);
      }
      uVar1 = F_00da5fc0(((undefined4)(uint)(((in_ecx)))) GEN_EDX_ARG);
      uVar1 = F_00d929c0(uVar1 GEN_EDX_ARG);
      return uVar1;
    }
  }
  return 0xffffffff;
}

/* ref: FUN_00da6230 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda6230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dba980((uint)*((byte *)GEN_TOP(((int)this + 0xc))),(uint)*((byte *)GEN_TOP(((int)this + 0xd))),param_1)
  ;
  return uVar1;
}

/* ref: FUN_00da6250 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda6250u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00dbaaa0((uint)*((byte *)GEN_TOP(((int)this + 0xc))),(uint)*((byte *)GEN_TOP(((int)this + 0xd))),param_1
                           ,param_2,param_2 >> 0x1f);
  return uVar1;
}

/* ref: hkClassMember::GetTypeOf */
GEN_LIB GEN_FRAME uint F_00da6280(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda6280u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_FRAME_DECL_TOP(0x90, 0, 4);
  uint uVar1;
  uint uVar2;
  undefined * PTR32 * ppuVar3;
  
  uVar1 = F_00da0d60(param_1,((char *)REFP(0x1126558)),5);
  if (uVar1 == 0) {
    return 0x18;
  }
  uVar1 = F_00da0d60(param_1,((char *)REFP(0x113c1dc)),6);
  if (uVar1 == 0) {
    return 0x1f;
  }
  uVar1 = F_00da0d60(param_1,((char *)REFP(0x113c1d0)),8);
  if (uVar1 == 0) {
    return 0x16;
  }
  uVar1 = F_00da0d60(param_1,((char *)REFP(0x113c1c4)),0xb);
  if (uVar1 == 0) {
    return 0x22;
  }
  uVar1 = F_00da0d60(param_1,((char *)REFP(0x113c1b4)),0xe);
  if (uVar1 == 0) {
    return 0x1a;
  }
  uVar1 = F_00da0d60(param_1,((char *)REFP(0x113c1ac)),5);
  if (uVar1 == 0) {
    return 0x1d;
  }
  uVar1 = F_00da0d60(param_1,((char *)REFP(0x113c1a0)),0xb);
  if (uVar1 == 0) {
    return 0x21;
  }
  uVar1 = F_00da0f00(param_1,0x2a);
  if ((uVar1 != 0) && (*((char *)GEN_TOP((uVar1 + 1))) == '\0')) {
    return 0x14;
  }
  F_00da4df0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1);
  uVar1 = F_00da0ef0(param_1,0x5b);
  if (uVar1 != 0) {
    F_00da4b20(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,0,uVar1 - param_1);
  }
  uVar1 = 0;
  ppuVar3 = &REFG(undefined * PTR32, 0x13523cc);
  do {
    uVar2 = F_00da4410(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,*ppuVar3);
    if (uVar2 != 0) {
      F_00d877b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
      return uVar1;
    }
    ppuVar3 = ppuVar3 + 3;
    uVar1 = uVar1 + 1;
  } while ((int)ppuVar3 < 0x1352570);
  F_00d877b0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return 0;
}

/* ref: hkClassMember::GetSubtypeOf */
GEN_LIB GEN_FRAME uint F_00da6400(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda6400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_FRAME_DECL_TOP(0x90, 0, 4);
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00da0d60(param_1,((char *)REFP(0x113c1d0)),8);
  if (uVar1 == 0) {
    uVar1 = F_00da0e60(param_1 + 8);
    F_00da4f00(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1 + 8,uVar1 - 1);
    uVar1 = F_00da6280((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)));
    ((byte *)(gen_frame + 0x0))[4] = 0;
    ((byte *)(gen_frame + 0x0))[5] = 0;
    ((byte *)(gen_frame + 0x0))[6] = 0;
    ((byte *)(gen_frame + 0x0))[7] = 0;
    if (-1 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516a4),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) & 0x3fffffff);
    }
    return uVar1;
  }
  uVar1 = F_00da0d60(param_1,((char *)REFP(0x113c1c4)),0xb);
  if (uVar1 == 0) {
    uVar1 = F_00da0e60(param_1 + 0xb);
    F_00da4f00(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1 + 0xb,uVar1 - 1);
    uVar1 = F_00da6280((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)));
    ((byte *)(gen_frame + 0x0))[4] = 0;
    ((byte *)(gen_frame + 0x0))[5] = 0;
    ((byte *)(gen_frame + 0x0))[6] = 0;
    ((byte *)(gen_frame + 0x0))[7] = 0;
    if (-1 < (int)(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8))) {
      ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))
                (&REFG(undefined * PTR32, 0x13516a4),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)),(*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 8)) & 0x3fffffff);
    }
    return uVar1;
  }
  uVar1 = F_00da0d60(param_1,((char *)REFP(0x113c1b4)),0xe);
  if (uVar1 == 0) {
    uVar1 = F_00da0e60(param_1 + 0xe);
    F_00da4f00(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1 + 0xe,uVar1 - 1);
    uVar1 = F_00da6280((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)));
    F_00d877b0(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return uVar1;
  }
  uVar1 = F_00da0ef0(param_1,0x5b);
  if (uVar1 != 0) {
    uVar2 = F_00da0ef0(param_1,0x5d);
    F_00da4f00(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar1 + 1,(uVar2 - uVar1) - 1);
    uVar1 = F_00da0e80((*(undefined4 *)((char *)((byte *)(gen_frame + 0x0)) + 0)),0);
    F_00d877b0(((byte *)(gen_frame + 0x0)) GEN_EDX_ARG);
    return uVar1;
  }
  return 0;
}

/* ref: hkClassMember::GetTypeName */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da65b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda65b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x90, 0, 4);
  int iVar1;
  char * pcVar2;
  uint in_eax;
  char * pcVar3;
  uint uVar4;
  
  uVar4 = (uint)*((byte *)GEN_TOP(((int)this + 0xc)));
  if (*((int *)GEN_TOP(((int)this + 4))) == 0) {
    pcVar2 = ((char *)REFP(0x113c290));
  }
  else {
    pcVar2 = ((char *)GEN_TOP(F_00d92610(*((int *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD)));
  }
  if (*((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) == ((undefined4 *)GEN_TOP(0x0))) {
    pcVar3 = ((char *)REFP(0x113c290));
  }
  else {
    pcVar3 = ((char *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP(((int)this + 8)))));
  }
  (*(undefined1 * PTR32 *)(gen_frame + 0x0)) = ((undefined1 *)(gen_frame + 0xc));
  (*(uint *)(gen_frame + 0x8)) = 0x80000080;
  (*(int *)(gen_frame + 0x4)) = 1;
  ((undefined1 *)(gen_frame + 0xc))[0] = 0;
  if (((((uVar4 < 0x14) || (uVar4 == 0x1c)) || (uVar4 == 0x1e)) ||
      ((uVar4 == 0x1d || (uVar4 == 0x20)))) || ((uVar4 == 0x21 || (uVar4 == 0x1b)))) {
    F_00da5f80(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(int)*((short *)GEN_TOP(((int)this + 0xe))),uVar4);
  }
  else if (uVar4 == 0x14) {
    if (*((int *)GEN_TOP(((int)this + 4))) == 0) {
      if (*((char *)GEN_TOP(((int)this + 0xd))) == '\x02') {
        F_00da46f0(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x113c1ac)));
      }
      else {
        F_00da46f0(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG,((char *)REFP(0x113c27c)));
      }
    }
    else {
      uVar4 = F_00d92610(*((int *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG);
      F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),((char *)REFP(0x113c284)),uVar4);
    }
  }
  else if (((uVar4 == 0x16) || (uVar4 == 0x1a)) || (uVar4 == 0x22)) {
    in_eax = F_00da61e0(this GEN_EDX_ARG);
    if (uVar4 == 0x16) {
      pcVar3 = ((char *)REFP(0x113c244));
    }
    else {
      pcVar3 = ((char *)REFP(0x113c234));
      if (uVar4 != 0x1a) {
        pcVar3 = ((char *)REFP(0x113c228));
      }
    }
    uVar4 = F_00da5f50(in_eax);
    if ((char)uVar4 == '\0') {
      if (in_eax == 0x14) {
        if (*((int *)GEN_TOP(((int)this + 4))) == 0) {
          F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),((char *)REFP(0x113c1f8)),pcVar3);
        }
        else {
          F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),((char *)REFP(0x113c208)),pcVar3,pcVar2);
        }
      }
      else if (in_eax == 0x19) {
        F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),((char *)REFP(0x113c1e4)),pcVar3,pcVar2);
      }
    }
    else {
      F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),((char *)REFP(0x113c218)),pcVar3,(&REFG(undefined * PTR32, 0x13523cc))[(int)(in_eax * 3)]);
    }
  }
  else if (uVar4 == 0x18) {
    F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),((char *)REFP(0x113c274)),pcVar3);
  }
  else if (uVar4 == 0x1f) {
    F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),((char *)REFP(0x113c268)),pcVar3);
  }
  else if (uVar4 == 0x19) {
    if (*((short *)GEN_TOP(((int)this + 0xe))) == 0) {
      F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),((char *)REFP(0x113c25c)),pcVar2);
    }
    else {
      F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x0)),((char *)REFP(0x113c24c)),pcVar2,(int)*((short *)GEN_TOP(((int)this + 0xe))));
    }
  }
  F_00da0e40(param_1,(*(undefined1 * PTR32 *)(gen_frame + 0x0)),param_2);
  iVar1 = (*(int *)(gen_frame + 0x4));
  (*(int *)(gen_frame + 0x4)) = 0;
  if (-1 < (int)(*(uint *)(gen_frame + 0x8))) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516a4) + 0x10))))(&REFG(undefined * PTR32, 0x13516a4),(*(undefined1 * PTR32 *)(gen_frame + 0x0)),(*(uint *)(gen_frame + 0x8)) & 0x3fffffff)
    ;
  }
  return iVar1 - 1;
}

/* ref: FUN_00da6860 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6860(GEN_P(undefined1 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda6860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined1 * in_ecx = (undefined1 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00da6870 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6870(GEN_P(ushort * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda6870u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ushort * in_ecx = (ushort *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return (uint)(*in_ecx & (ushort)param_2);
}

/* ref: FUN_00da6880 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00da6880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda6880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return (*(ushort *)this & (ushort)param_1) == (ushort)param_1;
}

/* ref: FUN_00da68a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da68a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda68a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 1;
}

/* ref: FUN_00da68b0 */
GEN_LIB GEN_NOFRAME uint F_00da68b0(void)
{
  GEN_ENTER(0xda68b0u, 0u, 0u, 0u, 0u);
  return 0xffffffff;
}

/* ref: FUN_00da68c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da68c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda68c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00da68d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da68d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda68d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  *((undefined2 *)GEN_TOP(((int)param_1 + 6))) = 1;
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x113c3ec));
  param_1[2] = param_2;
  *(undefined1 *)(param_1 + 3) = param_3;
  F_00d919e0(param_2 GEN_EDX_FWD);
  return (uint)param_1;
}

/* ref: FUN_00da6900 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da6900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda6900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x113c3ec));
  uVar1 = F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar1;
}

/* ref: hkOArchive::Write8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6920(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xda6920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x10))))(*(int * PTR32 *)(this + 8) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[0]),1);
  return uVar1;
}

/* ref: hkOArchive::Write8u */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6940(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xda6940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x10))))(*(int * PTR32 *)(this + 8) GEN_EDX_FWD,&(*(undefined4 *)&gen_args[0]),1);
  return uVar1;
}

/* ref: hkOArchive::WriteArrayGeneric */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6970(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xda6970u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  GEN_FRAME_DECL_TOP(0x210, 0, 4);
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 * puVar7;
  uint uVar8;
  
  (*(undefined * PTR32 *)(gen_frame + 0x200)) = this;
  if (this[0xc] != (undefined1)0x0) {
    uVar3 = 0x200;
    (*(int *)(gen_frame + 0x208)) = param_1;
    uVar4 = (uint)(0x200 / (longlong)param_2);
    uVar8 = param_2 * param_3;
    uVar5 = uVar8 & 0x800001ff;
    if ((int)uVar5 < 0) {
      uVar5 = (uVar5 - 1 | 0xfffffe00) + 1;
    }
    uVar6 = (int)uVar5 / param_2;
    (*(uint *)(gen_frame + 0x204)) = uVar6;
    uVar2 = uVar4;
    for (; 0 < (int)uVar8; uVar8 = uVar8 - uVar3) {
      uVar6 = uVar4;
      param_1 = uVar2;
      if ((int)uVar8 < 0x200) {
        uVar3 = uVar5;
        uVar6 = (*(uint *)(gen_frame + 0x204));
        param_1 = (*(uint *)(gen_frame + 0x204));
      }
      F_00da1010(((undefined1 *)(gen_frame + 0x0)),(*(int *)(gen_frame + 0x208)),uVar3);
      uVar4 = uVar6;
      if (param_2 == 2) {
        puVar7 = ((undefined1 *)(gen_frame + 0x0));
        if (0 < (int)uVar6) {
          do {
            uVar1 = *puVar7;
            *puVar7 = puVar7[1];
            puVar7[1] = uVar1;
            puVar7 = puVar7 + 2;
            uVar6 = uVar6 - 1;
            uVar4 = param_1;
          } while (uVar6 != 0);
        }
      }
      else if (param_2 == 4) {
        if (0 < (int)uVar6) {
          puVar7 = ((undefined1 *)(gen_frame + 0x0)) + 2;
          do {
            uVar1 = puVar7[-2];
            puVar7[-2] = puVar7[1];
            puVar7[1] = uVar1;
            uVar1 = puVar7[-1];
            puVar7[-1] = *puVar7;
            *puVar7 = uVar1;
            puVar7 = puVar7 + 4;
            uVar6 = uVar6 - 1;
            uVar4 = param_1;
          } while (uVar6 != 0);
        }
      }
      else if ((param_2 == 8) && (0 < (int)uVar6)) {
        puVar7 = ((undefined1 *)(gen_frame + 0x0)) + 6;
        do {
          uVar1 = puVar7[-6];
          puVar7[-6] = puVar7[1];
          puVar7[1] = uVar1;
          uVar1 = puVar7[-5];
          puVar7[-5] = *puVar7;
          *puVar7 = uVar1;
          uVar1 = puVar7[-4];
          puVar7[-4] = puVar7[-1];
          puVar7[-1] = uVar1;
          uVar1 = puVar7[-3];
          puVar7[-3] = puVar7[-2];
          puVar7[-2] = uVar1;
          puVar7 = puVar7 + 8;
          uVar6 = uVar6 - 1;
          uVar4 = param_1;
        } while (uVar6 != 0);
      }
      uVar6 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x200)) + 8) + 0x10))))
                        (*(int * PTR32 *)((*(undefined * PTR32 *)(gen_frame + 0x200)) + 8) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),uVar3);
      (*(int *)(gen_frame + 0x208)) = (*(int *)(gen_frame + 0x208)) + uVar3;
      uVar2 = param_1;
    }
    return uVar6;
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x10))))(*(int * PTR32 *)(this + 8) GEN_EDX_ARG,param_1,param_2 * param_3);
  return uVar3;
}

/* ref: hkOArchive::WriteRaw */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6ae0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda6ae0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 8) + 0x10))))(*(int * PTR32 *)(this + 8) GEN_EDX_FWD,param_1,param_2);
  return uVar1;
}

/* ref: hkOArchive::SetByteSwap */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00da6af0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda6af0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 0xc))) = param_2;
  return param_2;
}

/* ref: FUN_00da6b00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6b00(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda6b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined1 *)GEN_TOP((in_ecx + 0xc)));
  return (uint)param_2;
}

/* ref: FUN_00da6b10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda6b10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 8))) + 0xc))))(*((int * PTR32 *)GEN_TOP(((int)this + 8))) GEN_EDX_FWD,param_1);
  return param_1;
}

/* ref: FUN_00da6b30 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da6b30(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda6b30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 8)));
}

/* ref: hkOArchive::SetStreamWriter */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda6b40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  F_00d919e0(param_1 GEN_EDX_FWD);
  uVar1 = F_00d91a80(*(undefined * PTR32 *)(this + 8) GEN_EDX_ARG);
  *(undefined * PTR32 *)(this + 8) = param_1;
  return uVar1;
}

/* ref: FUN_00da6b70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6b70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda6b70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  uint uVar1;
  
  *((undefined2 *)GEN_TOP(((int)param_1 + 6))) = 1;
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x113c3ec));
  *(undefined1 *)(param_1 + 3) = param_3;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dffa8) + 0x10))))(REFG(int * PTR32, 0x15dffa8) GEN_EDX_FWD,param_2);
  param_1[2] = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00da6bb0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6bb0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xda6bb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  LPVOID pvVar1;
  uint uVar2;
  
  *((undefined2 *)GEN_TOP(((int)param_1 + 6))) = 1;
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x113c3ec));
  *(undefined1 *)(param_1 + 3) = param_4;
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x1c);
  *((undefined2 *)GEN_TOP((uVar2 + 4))) = 0x1c;
  uVar2 = F_00dba580(uVar2 GEN_EDX_ARG,param_2,param_3,0);
  param_1[2] = uVar2;
  return (uint)param_1;
}

/* ref: hkOArchive::Write16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6c10(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xda6c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  
  uVar1 = F_00da6970(this GEN_EDX_FWD,&(*(undefined4 *)&gen_args[0]),2,1);
  return uVar1;
}

/* ref: hkOArchive::Write16u */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6c30(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xda6c30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  
  uVar1 = F_00da6970(this GEN_EDX_FWD,&(*(undefined4 *)&gen_args[0]),2,1);
  return uVar1;
}

/* ref: hkOArchive::Write32 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6c50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xda6c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  
  uVar1 = F_00da6970(this GEN_EDX_FWD,&(*(undefined4 *)&gen_args[0]),4,1);
  return uVar1;
}

/* ref: hkOArchive::Write32u */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6c70(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xda6c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  
  uVar1 = F_00da6970(this GEN_EDX_FWD,&(*(undefined4 *)&gen_args[0]),4,1);
  return uVar1;
}

/* ref: hkOArchive::Write64 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6c90(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda6c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00da6970(this GEN_EDX_FWD,&(*(undefined4 *)&gen_args[0]),8,1);
  return uVar1;
}

/* ref: hkOArchive::Write64u */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6cb0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda6cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00da6970(this GEN_EDX_FWD,&(*(undefined4 *)&gen_args[0]),8,1);
  return uVar1;
}

/* ref: hkOArchive::WriteFloat32 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6cd0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xda6cd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  
  uVar1 = F_00da6970(this GEN_EDX_FWD,&(*(undefined4 *)&gen_args[0]),4,1);
  return uVar1;
}

/* ref: hkOArchive::WriteDouble64 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6cf0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xda6cf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  uint uVar1;
  
  uVar1 = F_00da6970(this GEN_EDX_FWD,&(*(undefined4 *)&gen_args[0]),8,1);
  return uVar1;
}

/* ref: hkOArchive::WriteArray8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda6d10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da6970(this GEN_EDX_FWD,param_1,1,param_2);
  return uVar1;
}

/* ref: hkOArchive::WriteArray8u */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda6d30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da6970(this GEN_EDX_FWD,param_1,1,param_2);
  return uVar1;
}

/* ref: hkOArchive::WriteArray16 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6d50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda6d50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da6970(this GEN_EDX_FWD,param_1,2,param_2);
  return uVar1;
}

/* ref: hkOArchive::WriteArray16u */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda6d70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da6970(this GEN_EDX_FWD,param_1,2,param_2);
  return uVar1;
}

/* ref: hkOArchive::WriteArray32 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6d90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda6d90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da6970(this GEN_EDX_FWD,param_1,4,param_2);
  return uVar1;
}

/* ref: hkOArchive::WriteArray32u */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda6db0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da6970(this GEN_EDX_FWD,param_1,4,param_2);
  return uVar1;
}

/* ref: hkOArchive::WriteArray64 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6dd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda6dd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da6970(this GEN_EDX_FWD,param_1,8,param_2);
  return uVar1;
}

/* ref: hkOArchive::WriteArray64u */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6df0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda6df0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da6970(this GEN_EDX_FWD,param_1,8,param_2);
  return uVar1;
}

/* ref: hkOArchive::WriteArrayFloat32 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda6e10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da6970(this GEN_EDX_FWD,param_1,4,param_2);
  return uVar1;
}

/* ref: hkOArchive::WriteArrayDoubleAsFloat32 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00da6e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda6e30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = 0;
  if (0 < param_2) {
    do {
      F_00da6cd0(this GEN_EDX_FWD,(undefined4)gen_fl2bits((float)*((double *)GEN_TOP((param_1 + iVar1 * 8)))));
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

/* ref: hkOArchive::WriteArrayDouble64 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6e70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda6e70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = F_00da6970(this GEN_EDX_FWD,param_1,8,param_2);
  return uVar1;
}

/* ref: FUN_00da6e90 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6e90(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined1 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda6e90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined1 param_3 = (undefined1)gen_a2;)
  LPVOID pvVar1;
  undefined * this;
  uint uVar2;
  
  *((undefined2 *)GEN_TOP(((int)param_1 + 6))) = 1;
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x113c3ec));
  *(undefined1 *)(param_1 + 3) = param_3;
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))
                           (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,0x14)));
  *((undefined2 *)GEN_TOP(((int)this + 4))) = 0x14;
  uVar2 = F_00da0820(this GEN_EDX_ARG,param_2,1);
  param_1[2] = uVar2;
  return (uint)param_1;
}

/* ref: FUN_00da6ef0 */
GEN_LIB GEN_FRAME uint F_00da6ef0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda6ef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkOArchive::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6f20(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda6f20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00da6900(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: hkClassEnum::GetItem */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6f90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda6f90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((int *)GEN_TOP((in_ecx + 4))) + param_2 * 8;
}

/* ref: hkClassEnum::GetNameOfValue */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda6fa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  int iVar1;
  int * piVar2;
  
  iVar1 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 8)))) {
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 4)));
    do {
      if (*piVar2 == param_1) {
        *param_2 = (*((int * PTR32 *)GEN_TOP(((int)this + 4))))[iVar1 * 2 + 1];
        return 0;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar1 < *((int *)GEN_TOP(((int)this + 8))));
  }
  return 1;
}

/* ref: hkClassEnum::GetValueOfName */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da6fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda6fe0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  if (0 < *((int *)GEN_TOP(((int)this + 8)))) {
    do {
      uVar1 = F_00da0d70(param_1,*((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 4 + iVar2 * 8))))
      ;
      if (uVar1 == 0) {
        *param_2 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar2 * 8)));
        return 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *((int *)GEN_TOP(((int)this + 8))));
  }
  return 1;
}

/* ref: hkClassEnum::GetSignature */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da7030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda7030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  (*(undefined * PTR32 *)(gen_frame + 0x10)) = this;
  F_00da68d0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_FWD,param_1,0);
  uVar1 = *(undefined4 *)this;
  uVar4 = F_00da0e60(uVar1);
  F_00da6ae0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar1,uVar4);
  iVar2 = *((int *)GEN_TOP(((int)this + 8)));
  iVar5 = 0;
  if (0 < iVar2) {
    do {
      iVar3 = *((int *)GEN_TOP(((int)this + 4)));
      uVar1 = *((undefined4 *)GEN_TOP((iVar3 + 4 + iVar5 * 8)));
      uVar4 = F_00da0e60(uVar1);
      F_00da6ae0(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar1,uVar4);
      F_00da6c50(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,*((undefined4 *)GEN_TOP((iVar3 + iVar5 * 8))));
      iVar5 = iVar5 + 1;
      this = (*(undefined * PTR32 *)(gen_frame + 0x10));
    } while (iVar5 < iVar2);
  }
  F_00da6c50(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,iVar2);
  uVar4 = F_00da6900(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar4;
}

/* ref: hkClassEnum::GetAttribute */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da70d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda70d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00d925c0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xc))) GEN_EDX_FWD,param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_00da70f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da70f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda70f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  uint uVar1;
  
  (*(undefined2 *)(gen_frame + 0x6)) = 1;
  (*(undefined4 *)(gen_frame + 0x8)) = 0xffffffff;
  (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) = (*(undefined * PTR32 (*)[9])REFP(0x1138a44));
  F_00da7030(this GEN_EDX_FWD,&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)));
  uVar1 = F_00d930a0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x0)) GEN_EDX_ARG);
  return uVar1;
}

/* ref: hkClassEnum::DecomposeFlags */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00da7130(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(int * param_2, unsigned int gen_a2), GEN_P(uint * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xda7130u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a2;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a3;)
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  
  param_2[1] = 0;
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  uVar4 = param_1;
  while ((iVar1 = iVar1 - 1, -1 < iVar1 && (uVar4 != 0))) {
    uVar2 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar1 * 8)));
    if ((uVar2 & uVar4) == uVar2) {
      uVar3 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + iVar1 * 8 + 4)));
      if (param_2[1] == (param_2[2] & 0x3fffffffU)) {
        F_00d95710(&REFG(undefined * PTR32, 0x13516ac),param_2,4);
      }
      *((undefined4 *)GEN_TOP((*param_2 + param_2[1] * 4))) = uVar3;
      param_2[1] = param_2[1] + 1;
      uVar4 = uVar4 & ~uVar2;
    }
  }
  *param_3 = uVar4;
  return uVar4 != 0;
}

/* ref: hkArray::PushBack_00da71c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da71c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda71c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: hkStreamReader::Skip */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da7200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda7200u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x204, 12, 4);
  int iVar1;
  uint uVar2;
  int iVar3;
  
  for (iVar3 = param_1; iVar3 != 0; iVar3 = iVar3 - uVar2) {
    iVar1 = 0x200;
    if (iVar3 < 0x201) {
      iVar1 = iVar3;
    }
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)),iVar1);
    if (uVar2 == 0) break;
  }
  return param_1 - iVar3;
}

/* ref: hkStreamReader::ReadByte */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da7260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda7260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,(int)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3,1);
  if (uVar1 != 0) {
    return (int)(*(undefined1 *)((char *)&(*(undefined * PTR32 *)(gen_frame + 0x0)) + 3));
  }
  return 0xffffffff;
}

/* ref: hkSocket::ReaderAdapter::vf7 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da7290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda7290u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  return 1;
}

/* ref: hkSocket::ReaderAdapter::vf8 */
GEN_LIB GEN_NOFRAME uint F_00da72a0(void)
{
  GEN_ENTER(0xda72a0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: hkSocket::ReaderAdapter::vf10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da72b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda72b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return 1;
}

/* ref: hkSocket::ReaderAdapter::vf11 */
GEN_LIB GEN_NOFRAME uint F_00da72c0(void)
{
  GEN_ENTER(0xda72c0u, 0u, 0u, 0u, 0u);
  return 0xffffffff;
}

/* ref: hkSocket::ReaderAdapter::vf6 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da72d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda72d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: hkSocket::ReaderAdapter::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da72e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda72e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: Global::SquareRoot_00da7340 */
GEN_LIB GEN_FRAME float F_00da7340(GEN_P(float param_1, float gen_a0))
{
  GEN_ENTER(0xda7340u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  GEN_PIN(float param_1 = (float)gen_a0;)
  return SQRT(param_1);
}

/* ref: Global::SetRotationFromQuaternion */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00da7350(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda7350u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float local_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  fVar1 = *(float *)&REFG(undefined, 0x1138af0);
  local_20 = gen_bits2f((uint)*param_2);
  fStack_1c = gen_bits2f((uint)((ulonglong)*param_2 >> 0x20));
  fStack_18 = gen_bits2f((uint)param_2[1]);
  fStack_14 = gen_bits2f((uint)((ulonglong)param_2[1] >> 0x20));
  fVar4 = fStack_1c + fStack_1c;
  fVar5 = fStack_18 + fStack_18;
  fVar2 = local_20 * (local_20 + local_20);
  fVar3 = fStack_14 * (local_20 + local_20);
  *in_ecx = *(float *)&REFG(undefined, 0x1138af0) - (fStack_1c * fVar4 + fStack_18 * fVar5);
  in_ecx[1] = local_20 * fVar4 + fStack_14 * fVar5;
  in_ecx[2] = local_20 * fVar5 - fStack_14 * fVar4;
  in_ecx[3] = 0.0;
  in_ecx[4] = local_20 * fVar4 - fStack_14 * fVar5;
  in_ecx[5] = fVar1 - (fVar2 + fStack_18 * fVar5);
  in_ecx[6] = fStack_1c * fVar5 + fVar3;
  in_ecx[7] = 0.0;
  in_ecx[8] = local_20 * fVar5 + fStack_14 * fVar4;
  in_ecx[9] = fStack_1c * fVar5 - fVar3;
  in_ecx[10] = fVar1 - (fVar2 + fStack_1c * fVar4);
  in_ecx[0xb] = 0.0;
  return 0;
}

/* ref: Global::IsOrthonormal */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00da74d0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1))
{
  GEN_ENTER(0xda74d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 in_EAX = 0;
  undefined4 uVar11;
  
  fVar2 = *in_ecx;
  fVar3 = in_ecx[1];
  fVar4 = in_ecx[2];
  if (!(param_2 < ((fVar3 * fVar3 + fVar2 * fVar2) + fVar4 * fVar4) - *(float *)&REFG(undefined, 0x1138af0))) {
    fVar5 = in_ecx[4];
    fVar6 = in_ecx[5];
    fVar7 = in_ecx[6];
    if (!(param_2 < ((fVar6 * fVar6 + fVar5 * fVar5) + fVar7 * fVar7) - *(float *)&REFG(undefined, 0x1138af0))) {
      fVar8 = in_ecx[8];
      fVar9 = in_ecx[9];
      fVar10 = in_ecx[10];
      if (!(param_2 < ((fVar9 * fVar9 + fVar8 * fVar8) + fVar10 * fVar10) - *(float *)&REFG(undefined, 0x1138af0))
         ) {
        (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(ABS((fVar5 * fVar4 - fVar7 * fVar2) - fVar9) < param_2);
        (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(ABS((fVar7 * fVar3 - fVar6 * fVar4) - fVar8) < param_2);
        (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(ABS((fVar6 * fVar2 - fVar5 * fVar3) - fVar10) < param_2);
        (*(undefined4 *)((char *)&auVar1 + 12)) =
             -(uint)(ABS((in_ecx[7] * in_ecx[3] - in_ecx[7] * in_ecx[3]) - in_ecx[0xb]) < param_2);
        uVar11 = gen_movmskps(&(auVar1));
        return ((byte)uVar11 & 7) == 7;
      }
    }
  }
  return 0;
}

/* ref: Global::SetRow0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da7780(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda7780u, gen_a0, gen_a1, 0u, 0u);
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
  return (uint)param_2;
}

/* ref: Global::SetRow1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da7790(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda7790u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP((in_ecx + 0x18))) = uVar2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x1c))) = uVar3;
  return (uint)param_2;
}

/* ref: Global::SetRow2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da77b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda77b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *((undefined4 *)GEN_TOP((in_ecx + 0x20))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x24))) = uVar1;
  *((undefined4 *)GEN_TOP((in_ecx + 0x28))) = uVar2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x2c))) = uVar3;
  return (uint)param_2;
}

/* ref: Global::ToDoubleMatrix */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00da7b30(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(double * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda7b30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(double * param_2 = (double *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  double dVar3;
  
  fVar1 = *in_ecx;
  param_2[4] = (double)in_ecx[4];
  param_2[5] = (double)in_ecx[5];
  param_2[6] = (double)in_ecx[6];
  param_2[8] = (double)in_ecx[8];
  param_2[9] = (double)in_ecx[9];
  fVar2 = in_ecx[10];
  *param_2 = (double)fVar1;
  fVar1 = in_ecx[1];
  param_2[10] = (double)fVar2;
  fVar2 = in_ecx[0xc];
  param_2[1] = (double)fVar1;
  fVar1 = in_ecx[2];
  param_2[0xc] = (double)fVar2;
  fVar2 = in_ecx[0xd];
  param_2[2] = (double)fVar1;
  param_2[0xd] = (double)fVar2;
  fVar1 = in_ecx[0xe];
  param_2[3] = 0.0;
  param_2[7] = 0.0;
  param_2[0xb] = 0.0;
  dVar3 = REFG(double, 0x1088130);
  param_2[0xe] = (double)fVar1;
  param_2[0xf] = dVar3;
  return 0;
}

/* ref: Global::FromDoubleMatrix */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00da7c00(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(double * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda7c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(double * param_2 = (double *)(uintptr_t)gen_a1;)
  double dVar1;
  double dVar2;
  float fVar3;
  
  dVar1 = *param_2;
  in_ecx[4] = (float)param_2[4];
  in_ecx[5] = (float)param_2[5];
  in_ecx[6] = (float)param_2[6];
  in_ecx[8] = (float)param_2[8];
  in_ecx[9] = (float)param_2[9];
  dVar2 = param_2[10];
  *in_ecx = (float)dVar1;
  dVar1 = param_2[1];
  in_ecx[10] = (float)dVar2;
  dVar2 = param_2[0xc];
  in_ecx[1] = (float)dVar1;
  dVar1 = param_2[2];
  in_ecx[0xc] = (float)dVar2;
  dVar2 = param_2[0xd];
  in_ecx[2] = (float)dVar1;
  in_ecx[0xd] = (float)dVar2;
  dVar1 = param_2[0xe];
  in_ecx[3] = 0.0;
  in_ecx[7] = 0.0;
  in_ecx[0xb] = 0.0;
  fVar3 = REFG(float, 0x1087f04);
  in_ecx[0xe] = (float)dVar1;
  in_ecx[0xf] = fVar3;
  return 0;
}

/* ref: Global::SetInverseRigidTransform */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00da7d00(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda7d00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  local_20 = gen_bits2f((uint)*param_2);
  fStack_1c = gen_bits2f((uint)((ulonglong)*param_2 >> 0x20));
  fStack_18 = gen_bits2f((uint)param_2[1]);
  local_30 = gen_bits2f((uint)param_2[2]);
  fStack_2c = gen_bits2f((uint)((ulonglong)param_2[2] >> 0x20));
  fStack_28 = gen_bits2f((uint)param_2[3]);
  local_40 = gen_bits2f((uint)param_2[4]);
  fStack_3c = gen_bits2f((uint)((ulonglong)param_2[4] >> 0x20));
  fStack_38 = gen_bits2f((uint)param_2[5]);
  fStack_34 = gen_bits2f((uint)((ulonglong)param_2[5] >> 0x20));
  in_ecx[4] = fStack_1c;
  in_ecx[5] = fStack_2c;
  in_ecx[6] = fStack_3c;
  in_ecx[7] = fStack_34;
  *in_ecx = local_20;
  in_ecx[1] = local_30;
  in_ecx[2] = local_40;
  in_ecx[3] = fStack_3c;
  in_ecx[8] = fStack_18;
  in_ecx[9] = fStack_28;
  in_ecx[10] = fStack_38;
  in_ecx[0xb] = fStack_34;
  fVar1 = gen_bits2f(*(uint *)(param_2 + 6) ^ *(uint *)&REFG(undefined, 0x10ab9c0));
  fVar2 = gen_bits2f(*((uint *)GEN_TOP(((int)param_2 + 0x34))) ^ *(uint *)&REFG(undefined, 0x10ab9c4));
  fVar3 = gen_bits2f(*(uint *)(param_2 + 7) ^ *(uint *)&REFG(undefined, 0x10ab9c8));
  in_ecx[0xc] = (fVar2 * fStack_1c + fVar1 * local_20) + fVar3 * fStack_18;
  in_ecx[0xd] = (fVar2 * fStack_2c + fVar1 * local_30) + fVar3 * fStack_28;
  in_ecx[0xe] = (fVar2 * fStack_3c + fVar1 * local_40) + fVar3 * fStack_38;
  in_ecx[0xf] = (fVar2 * fStack_34 + fVar1 * fStack_3c) + fVar3 * fStack_34;
  return 0;
}

/* ref: Global::NearEqualAffine */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da81c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda81c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  undefined1 auVar1 [16];
  byte bVar2;
  undefined4 extraout_EDX = 0;
  undefined4 uVar3;
  
  bVar2 = F_00da2020(this GEN_EDX_FWD,param_1,param_2);
  if (bVar2 != 0) {
    (*(undefined4 *)((char *)&auVar1 + 4)) = -(uint)(ABS(*((float *)GEN_TOP(((int)this + 0x34))) - *((float *)GEN_TOP((param_1 + 0x34)))) < param_2[1]);
    (*(undefined4 *)((char *)&auVar1 + 0)) = -(uint)(ABS(*((float *)GEN_TOP(((int)this + 0x30))) - *((float *)GEN_TOP((param_1 + 0x30)))) < *param_2 );
    (*(undefined4 *)((char *)&auVar1 + 8)) = -(uint)(ABS(*((float *)GEN_TOP(((int)this + 0x38))) - *((float *)GEN_TOP((param_1 + 0x38)))) < param_2[2]);
    (*(undefined4 *)((char *)&auVar1 + 12)) = -(uint)(ABS(*((float *)GEN_TOP(((int)this + 0x3c))) - *((float *)GEN_TOP((param_1 + 0x3c)))) < param_2[3]);
    uVar3 = gen_movmskps(&(auVar1));
    if (((byte)uVar3 & 7) == 7) {
      return 1;
    }
  }
  return 0;
}

/* ref: Global::GetAffine */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da8220(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda8220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar4 = *(uint *)&REFG(undefined, 0x1138afc);
  uVar1 = in_ecx[0xc];
  uVar2 = in_ecx[0xd];
  uVar3 = in_ecx[0xe];
  uVar9 = *(uint *)&REFG(undefined, 0x10abc24) & in_ecx[1];
  uVar10 = *(uint *)&REFG(undefined, 0x10abc28) & in_ecx[2];
  uVar11 = *(uint *)&REFG(undefined, 0x10abc2c) & in_ecx[3];
  uVar12 = *(uint *)&REFG(undefined, 0x10abc20) & in_ecx[4];
  uVar13 = *(uint *)&REFG(undefined, 0x10abc24) & in_ecx[5];
  uVar14 = *(uint *)&REFG(undefined, 0x10abc28) & in_ecx[6];
  uVar15 = *(uint *)&REFG(undefined, 0x10abc2c) & in_ecx[7];
  uVar5 = *(uint *)&REFG(undefined, 0x10abc20) & in_ecx[8];
  uVar6 = *(uint *)&REFG(undefined, 0x10abc24) & in_ecx[9];
  uVar7 = *(uint *)&REFG(undefined, 0x10abc28) & in_ecx[10];
  uVar8 = *(uint *)&REFG(undefined, 0x10abc2c) & in_ecx[0xb];
  *param_2 = *(uint *)&REFG(undefined, 0x10abc20) & *in_ecx;
  param_2[1] = uVar9;
  param_2[2] = uVar10;
  param_2[3] = uVar11;
  param_2[4] = uVar12;
  param_2[5] = uVar13;
  param_2[6] = uVar14;
  param_2[7] = uVar15;
  param_2[8] = uVar5;
  param_2[9] = uVar6;
  param_2[10] = uVar7;
  param_2[0xb] = uVar8;
  param_2[0xc] = uVar1;
  param_2[0xd] = uVar2;
  param_2[0xe] = uVar3;
  param_2[0xf] = uVar4;
  return (uint)param_2;
}

/* ref: Global::SetAffine */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da8270(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda8270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar4 = *(uint *)&REFG(undefined, 0x1138afc);
  uVar1 = param_2[0xc];
  uVar2 = param_2[0xd];
  uVar3 = param_2[0xe];
  uVar9 = *(uint *)&REFG(undefined, 0x10abc24) & param_2[1];
  uVar10 = *(uint *)&REFG(undefined, 0x10abc28) & param_2[2];
  uVar11 = *(uint *)&REFG(undefined, 0x10abc2c) & param_2[3];
  uVar12 = *(uint *)&REFG(undefined, 0x10abc20) & param_2[4];
  uVar13 = *(uint *)&REFG(undefined, 0x10abc24) & param_2[5];
  uVar14 = *(uint *)&REFG(undefined, 0x10abc28) & param_2[6];
  uVar15 = *(uint *)&REFG(undefined, 0x10abc2c) & param_2[7];
  uVar5 = *(uint *)&REFG(undefined, 0x10abc20) & param_2[8];
  uVar6 = *(uint *)&REFG(undefined, 0x10abc24) & param_2[9];
  uVar7 = *(uint *)&REFG(undefined, 0x10abc28) & param_2[10];
  uVar8 = *(uint *)&REFG(undefined, 0x10abc2c) & param_2[0xb];
  *in_ecx = *(uint *)&REFG(undefined, 0x10abc20) & *param_2;
  in_ecx[1] = uVar9;
  in_ecx[2] = uVar10;
  in_ecx[3] = uVar11;
  in_ecx[4] = uVar12;
  in_ecx[5] = uVar13;
  in_ecx[6] = uVar14;
  in_ecx[7] = uVar15;
  in_ecx[8] = uVar5;
  in_ecx[9] = uVar6;
  in_ecx[10] = uVar7;
  in_ecx[0xb] = uVar8;
  in_ecx[0xc] = uVar1;
  in_ecx[0xd] = uVar2;
  in_ecx[0xe] = uVar3;
  in_ecx[0xf] = uVar4;
  return (uint)param_2;
}

/* ref: Global::GetRow0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da83a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda83a0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Global::DecomposeMatrix_00da8830 */
GEN_LIB GEN_NOFRAME byte F_00da8830(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda8830u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x1d0, 0);
  float * this;
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  undefined1 auVar4 [16];
  byte bVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar15;
  float fVar17;
  float fVar19;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar16;
  float fVar18;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  float fVar20;
  float fVar23;
  float fVar24;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar25;
  float fVar26;
  undefined8 uVar27;
  float fVar35;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  float fVar33;
  float fVar37;
  undefined1 auVar30 [16];
  float fVar34;
  float fVar36;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  
  F_00da8270(&(*(float *)(gen_frame + 0x80)) GEN_EDX_ARG,param_1);
  F_00dbd040(&(*(float *)(gen_frame + 0xc0)) GEN_EDX_ARG,param_1);
  fVar9 = *(float *)&REFG(undefined, 0x1138afc);
  (*(float *)(gen_frame + 0xc0)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xc0))) & *(uint *)&REFG(undefined, 0x10abc20));
  (*(float *)(gen_frame + 0xc4)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xc4))) & *(uint *)&REFG(undefined, 0x10abc24));
  (*(float *)(gen_frame + 0xc8)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xc8))) & *(uint *)&REFG(undefined, 0x10abc28));
  (*(float *)(gen_frame + 0xcc)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xcc))) & *(uint *)&REFG(undefined, 0x10abc2c));
  (*(float *)(gen_frame + 0xd0)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xd0))) & *(uint *)&REFG(undefined, 0x10abc20));
  (*(float *)(gen_frame + 0xd4)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xd4))) & *(uint *)&REFG(undefined, 0x10abc24));
  (*(float *)(gen_frame + 0xd8)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xd8))) & *(uint *)&REFG(undefined, 0x10abc28));
  (*(float *)(gen_frame + 0xdc)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xdc))) & *(uint *)&REFG(undefined, 0x10abc2c));
  (*(float *)(gen_frame + 0xe0)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xe0))) & *(uint *)&REFG(undefined, 0x10abc20));
  (*(float *)(gen_frame + 0xe4)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xe4))) & *(uint *)&REFG(undefined, 0x10abc24));
  (*(float *)(gen_frame + 0xe8)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xe8))) & *(uint *)&REFG(undefined, 0x10abc28));
  (*(float *)(gen_frame + 0xec)) = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xec))) & *(uint *)&REFG(undefined, 0x10abc2c));
  *param_2 = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xb0)));
  param_2[1] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xb4)));
  param_2[2] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xb8)));
  param_2[3] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xbc)));
  (*(float *)(gen_frame + 0xfc)) = fVar9;
  iVar8 = 0;
  (*(float *)(gen_frame + 0x140)) = (*(float *)(gen_frame + 0x80));
  (*(undefined4 *)(gen_frame + 0x144)) = (*(undefined4 *)(gen_frame + 0x84));
  (*(undefined4 *)(gen_frame + 0x148)) = (*(undefined4 *)(gen_frame + 0x88));
  (*(undefined4 *)(gen_frame + 0x14c)) = (*(undefined4 *)(gen_frame + 0x8c));
  (*(undefined4 *)(gen_frame + 0x150)) = (*(undefined4 *)(gen_frame + 0x90));
  (*(undefined4 *)(gen_frame + 0x154)) = (*(undefined4 *)(gen_frame + 0x94));
  (*(undefined4 *)(gen_frame + 0x158)) = (*(undefined4 *)(gen_frame + 0x98));
  (*(undefined4 *)(gen_frame + 0x15c)) = (*(undefined4 *)(gen_frame + 0x9c));
  (*(undefined4 *)(gen_frame + 0x160)) = (*(undefined4 *)(gen_frame + 0xa0));
  (*(undefined4 *)(gen_frame + 0x164)) = (*(undefined4 *)(gen_frame + 0xa4));
  (*(undefined4 *)(gen_frame + 0x168)) = (*(undefined4 *)(gen_frame + 0xa8));
  (*(undefined4 *)(gen_frame + 0x16c)) = (*(undefined4 *)(gen_frame + 0xac));
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 0)) = gen_bits2f(*(undefined4 *)&REFG(undefined, 0x1138bd0));
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 4)) = gen_bits2f(*(undefined4 *)&REFG(undefined, 0x1138bd4));
  (*(undefined8 *)(gen_frame + 0x1b0)) = CONCAT44(*(undefined4 *)&REFG(undefined, 0x1138bd4),*(undefined4 *)&REFG(undefined, 0x1138bd0));
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 0)) = gen_bits2f(*(undefined4 *)&REFG(undefined, 0x1138bd8));
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 4)) = gen_bits2f(*(undefined4 *)&REFG(undefined, 0x1138bdc));
  (*(undefined8 *)(gen_frame + 0x1b8)) = CONCAT44(*(undefined4 *)&REFG(undefined, 0x1138bdc),*(undefined4 *)&REFG(undefined, 0x1138bd8));
  do {
    (*(undefined4 *)(gen_frame + 0x70)) = (*(undefined4 *)(gen_frame + 0x160));
    (*(undefined4 *)(gen_frame + 0x74)) = (*(undefined4 *)(gen_frame + 0x164));
    (*(undefined4 *)(gen_frame + 0x78)) = (*(undefined4 *)(gen_frame + 0x168));
    (*(undefined4 *)(gen_frame + 0x7c)) = (*(undefined4 *)(gen_frame + 0x16c));
    (*(undefined4 *)(gen_frame + 0x30)) = (*(undefined4 *)(gen_frame + 0x160));
    (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 *)(gen_frame + 0x164));
    (*(undefined4 *)(gen_frame + 0x38)) = (*(undefined4 *)(gen_frame + 0x168));
    (*(undefined4 *)(gen_frame + 0x3c)) = (*(undefined4 *)(gen_frame + 0x16c));
    (*(float *)(gen_frame + 0x50)) = (*(float *)(gen_frame + 0x140));
    (*(undefined4 *)(gen_frame + 0x54)) = (*(undefined4 *)(gen_frame + 0x144));
    (*(undefined4 *)(gen_frame + 0x58)) = (*(undefined4 *)(gen_frame + 0x148));
    (*(undefined4 *)(gen_frame + 0x5c)) = (*(undefined4 *)(gen_frame + 0x14c));
    (*(undefined4 *)(gen_frame + 0x60)) = (*(undefined4 *)(gen_frame + 0x150));
    (*(undefined4 *)(gen_frame + 0x64)) = (*(undefined4 *)(gen_frame + 0x154));
    (*(undefined4 *)(gen_frame + 0x68)) = (*(undefined4 *)(gen_frame + 0x158));
    (*(undefined4 *)(gen_frame + 0x6c)) = (*(undefined4 *)(gen_frame + 0x15c));
    (*(float *)(gen_frame + 0x10)) = (*(float *)(gen_frame + 0x140));
    (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)(gen_frame + 0x144));
    (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0x148));
    (*(undefined4 *)(gen_frame + 0x1c)) = (*(undefined4 *)(gen_frame + 0x14c));
    (*(undefined4 *)(gen_frame + 0x20)) = (*(undefined4 *)(gen_frame + 0x150));
    (*(undefined4 *)(gen_frame + 0x24)) = (*(undefined4 *)(gen_frame + 0x154));
    (*(undefined4 *)(gen_frame + 0x28)) = (*(undefined4 *)(gen_frame + 0x158));
    (*(undefined4 *)(gen_frame + 0x2c)) = (*(undefined4 *)(gen_frame + 0x15c));
    F_00da2150(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG,REFG(float, 0x10905c4));
    F_00da1640(&(*(float *)(gen_frame + 0x10)) GEN_EDX_ARG);
    (*(float *)(gen_frame + 0x110)) = (*(float *)(gen_frame + 0x50));
    (*(float *)(gen_frame + 0x114)) = gen_bits2f((*(undefined4 *)(gen_frame + 0x54)));
    (*(float *)(gen_frame + 0x118)) = gen_bits2f((*(undefined4 *)(gen_frame + 0x58)));
    (*(float *)(gen_frame + 0x11c)) = gen_bits2f((*(undefined4 *)(gen_frame + 0x5c)));
    (*(float *)(gen_frame + 0x120)) = gen_bits2f((*(undefined4 *)(gen_frame + 0x60)));
    (*(float *)(gen_frame + 0x124)) = gen_bits2f((*(undefined4 *)(gen_frame + 0x64)));
    (*(float *)(gen_frame + 0x128)) = gen_bits2f((*(undefined4 *)(gen_frame + 0x68)));
    (*(float *)(gen_frame + 0x12c)) = gen_bits2f((*(undefined4 *)(gen_frame + 0x6c)));
    (*(float *)(gen_frame + 0x130)) = gen_bits2f((*(undefined4 *)(gen_frame + 0x70)));
    (*(float *)(gen_frame + 0x134)) = gen_bits2f((*(undefined4 *)(gen_frame + 0x74)));
    (*(float *)(gen_frame + 0x138)) = gen_bits2f((*(undefined4 *)(gen_frame + 0x78)));
    (*(float *)(gen_frame + 0x13c)) = gen_bits2f((*(undefined4 *)(gen_frame + 0x7c)));
    F_00da1920(&(*(float *)(gen_frame + 0x110)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x10)));
    F_00da18f0(&(*(float *)(gen_frame + 0x140)) GEN_EDX_ARG,&(*(undefined8 *)(gen_frame + 0x1b0)),&(*(float *)(gen_frame + 0x110)));
    iVar8 = iVar8 + 1;
    if (0x1d < iVar8) break;
    bVar5 = F_00da1fa0(&(*(float *)(gen_frame + 0x140)) GEN_EDX_ARG,&(*(float *)(gen_frame + 0x50)),REFG(float, 0x10905c4));
  } while (bVar5 == 0);
  param_2[0x30] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x140)));
  param_2[0x31] = (*(undefined4 *)(gen_frame + 0x144));
  param_2[0x32] = (*(undefined4 *)(gen_frame + 0x148));
  param_2[0x33] = (*(undefined4 *)(gen_frame + 0x14c));
  param_2[0x34] = (*(undefined4 *)(gen_frame + 0x150));
  param_2[0x35] = (*(undefined4 *)(gen_frame + 0x154));
  param_2[0x36] = (*(undefined4 *)(gen_frame + 0x158));
  param_2[0x37] = (*(undefined4 *)(gen_frame + 0x15c));
  param_2[0x38] = (*(undefined4 *)(gen_frame + 0x160));
  param_2[0x39] = (*(undefined4 *)(gen_frame + 0x164));
  param_2[0x3a] = (*(undefined4 *)(gen_frame + 0x168));
  param_2[0x3b] = (*(undefined4 *)(gen_frame + 0x16c));
  uVar27 = *(undefined8 *)(param_2 + 0x30);
  (*(undefined8 *)(gen_frame + 0x1b0)) = uVar27;
  uVar1 = *(undefined8 *)(param_2 + 0x32);
  (*(undefined8 *)(gen_frame + 0x1b8)) = uVar1;
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 0)) = gen_bits2f((uint)uVar27);
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 4)) = gen_bits2f((uint)((ulonglong)uVar27 >> 0x20));
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 0)) = gen_bits2f((uint)uVar1);
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
  fVar9 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 0));
  fVar15 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 4));
  fVar17 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 0));
  (*(undefined4 *)((char *)&auVar28 + 4)) = (undefined4)gen_fl2bits(fVar9);
  (*(undefined4 *)((char *)&auVar28 + 0)) = (undefined4)gen_fl2bits(fVar9);
  (*(undefined4 *)((char *)&auVar28 + 8)) = (undefined4)gen_fl2bits(fVar9);
  (*(undefined4 *)((char *)&auVar28 + 12)) = (undefined4)gen_fl2bits(fVar9);
  (*(float *)((char *)&auVar52 + 0)) = (fVar15 + fVar9) + fVar17;
  (*(float *)((char *)&auVar52 + 4)) = (fVar15 + fVar9) + fVar17;
  (*(float *)((char *)&auVar52 + 8)) = (fVar15 + fVar9) + fVar17;
  (*(float *)((char *)&auVar52 + 12)) = (fVar15 + fVar9) + fVar17;
  gen_rsqrtps(&(auVar29), &(auVar28), &(auVar52));
  fVar9 = (*(float *)((char *)&auVar29 + 0));
  fVar15 = (*(float *)((char *)&auVar29 + 4));
  fVar17 = (*(float *)((char *)&auVar29 + 8));
  fVar19 = (*(float *)((char *)&auVar29 + 12));
  (*(float *)((char *)&auVar51 + 0)) = *(float *)&REFG(undefined, 0x113c440) * fVar9;
  (*(float *)((char *)&auVar51 + 4)) = *(float *)&REFG(undefined, 0x113c444) * fVar15;
  (*(float *)((char *)&auVar51 + 8)) = *(float *)&REFG(undefined, 0x113c448) * fVar17;
  (*(float *)((char *)&auVar51 + 12)) = *(float *)&REFG(undefined, 0x113c44c) * fVar19;
  fVar41 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 0)) * gen_bits2f(~-(uint)((*(float *)((char *)&auVar52 + 0)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113c430) - (fVar9 * (*(float *)((char *)&auVar52 + 0))) * fVar9) * (*(float *)((char *)&auVar51 + 0))));
  fVar43 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 4)) * gen_bits2f(~-(uint)((*(float *)((char *)&auVar52 + 4)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113c434) - (fVar15 * (*(float *)((char *)&auVar52 + 4))) * fVar15) * (*(float *)((char *)&auVar51 + 4))));
  fVar45 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 0)) * gen_bits2f(~-(uint)((*(float *)((char *)&auVar52 + 8)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113c438) - (fVar17 * (*(float *)((char *)&auVar52 + 8))) * fVar17) * (*(float *)((char *)&auVar51 + 8))));
  fVar47 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 4)) * gen_bits2f(~-(uint)((*(float *)((char *)&auVar52 + 12)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113c43c) - (fVar19 * (*(float *)((char *)&auVar52 + 12))) * fVar19) * (*(float *)((char *)&auVar51 + 12))));
  uVar27 = *(undefined8 *)(param_2 + 0x34);
  (*(undefined8 *)(gen_frame + 0x1b0)) = uVar27;
  uVar1 = *(undefined8 *)(param_2 + 0x36);
  (*(undefined8 *)(gen_frame + 0x1b8)) = uVar1;
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 0)) = gen_bits2f((uint)uVar27);
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 4)) = gen_bits2f((uint)((ulonglong)uVar27 >> 0x20));
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 0)) = gen_bits2f((uint)uVar1);
  fVar9 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 0));
  fVar15 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 4));
  fVar17 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 0));
  (*(float *)((char *)&auVar29 + 0)) = (fVar15 + fVar9) + fVar17;
  (*(float *)((char *)&auVar29 + 4)) = (fVar15 + fVar9) + fVar17;
  (*(float *)((char *)&auVar29 + 8)) = (fVar15 + fVar9) + fVar17;
  (*(float *)((char *)&auVar29 + 12)) = (fVar15 + fVar9) + fVar17;
  gen_rsqrtps(&(auVar52), &(auVar51), &(auVar29));
  fVar25 = (*(float *)((char *)&auVar52 + 0));
  fVar33 = (*(float *)((char *)&auVar52 + 4));
  fVar35 = (*(float *)((char *)&auVar52 + 8));
  fVar37 = (*(float *)((char *)&auVar52 + 12));
  fVar9 = (fVar25 * (*(float *)((char *)&auVar29 + 0))) * fVar25;
  fVar15 = (fVar33 * (*(float *)((char *)&auVar29 + 4))) * fVar33;
  fVar17 = (fVar35 * (*(float *)((char *)&auVar29 + 8))) * fVar35;
  fVar19 = (fVar37 * (*(float *)((char *)&auVar29 + 12))) * fVar37;
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x1a0)) + 0)) = (undefined4)gen_fl2bits(fVar9);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x1a0)) + 4)) = (undefined4)gen_fl2bits(fVar15);
  (*(float *)(gen_frame + 0x1a8)) = fVar17;
  (*(float *)(gen_frame + 0x1ac)) = fVar19;
  uVar27 = *(undefined8 *)(param_2 + 0x38);
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
  fVar25 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar29 + 0)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113c430) - fVar9) * (*(float *)&REFG(undefined, 0x113c440) * fVar25))) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 0));
  fVar33 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar29 + 4)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113c434) - fVar15) * (*(float *)&REFG(undefined, 0x113c444) * fVar33))) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 4));
  fVar35 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar29 + 8)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113c438) - fVar17) * (*(float *)&REFG(undefined, 0x113c448) * fVar35))) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 0));
  fVar37 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar29 + 12)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113c43c) - fVar19) * (*(float *)&REFG(undefined, 0x113c44c) * fVar37))) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 4));
  (*(undefined8 *)(gen_frame + 0x1b0)) = uVar27;
  uVar27 = (*(undefined8 *)(gen_frame + 0x1b0));
  uVar1 = *(undefined8 *)(param_2 + 0x3a);
  (*(undefined8 *)(gen_frame + 0x1b8)) = uVar1;
  uVar1 = (*(undefined8 *)(gen_frame + 0x1b8));
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 0)) = gen_bits2f((uint)uVar27);
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 4)) = gen_bits2f((uint)((ulonglong)uVar27 >> 0x20));
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 0)) = gen_bits2f((uint)uVar1);
  fVar9 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 0));
  fVar15 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 4)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 4));
  fVar17 = (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 0)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 0));
  (*(undefined4 *)((char *)&auVar53 + 4)) = (undefined4)gen_fl2bits(fVar9);
  (*(undefined4 *)((char *)&auVar53 + 0)) = (undefined4)gen_fl2bits(fVar9);
  (*(undefined4 *)((char *)&auVar53 + 8)) = (undefined4)gen_fl2bits(fVar9);
  (*(undefined4 *)((char *)&auVar53 + 12)) = (undefined4)gen_fl2bits(fVar9);
  (*(float *)((char *)&auVar21 + 0)) = (fVar15 + fVar9) + fVar17;
  (*(float *)((char *)&auVar21 + 4)) = (fVar15 + fVar9) + fVar17;
  (*(float *)((char *)&auVar21 + 8)) = (fVar15 + fVar9) + fVar17;
  (*(float *)((char *)&auVar21 + 12)) = (fVar15 + fVar9) + fVar17;
  (*(float *)(gen_frame + 0x170)) = *(float *)&REFG(undefined, 0x113c430);
  (*(float *)(gen_frame + 0x174)) = *(float *)&REFG(undefined, 0x113c434);
  (*(float *)(gen_frame + 0x178)) = *(float *)&REFG(undefined, 0x113c438);
  (*(float *)(gen_frame + 0x17c)) = *(float *)&REFG(undefined, 0x113c43c);
  (*(float *)(gen_frame + 0x180)) = *(float *)&REFG(undefined, 0x113c440);
  (*(float *)(gen_frame + 0x184)) = *(float *)&REFG(undefined, 0x113c444);
  (*(float *)(gen_frame + 0x188)) = *(float *)&REFG(undefined, 0x113c448);
  (*(float *)(gen_frame + 0x18c)) = *(float *)&REFG(undefined, 0x113c44c);
  gen_rsqrtps(&(auVar52), &(auVar53), &(auVar21));
  memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x1a0))), &(auVar52), sizeof(auVar52) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x1a0))) ? sizeof(auVar52) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x1a0))));
  memcpy(&(auVar52), &(*(gen_v16 *)((undefined1 *)(gen_frame + 0x1a0))), sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x1a0))) < sizeof(auVar52) ? sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x1a0))) : sizeof(auVar52));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x1a0)) + 0)) = (*(undefined4 *)((char *)&auVar52 + 0));
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x1a0)) + 4)) = (*(undefined4 *)((char *)&auVar52 + 4));
  (*(float *)(gen_frame + 0x1a8)) = (*(float *)((char *)&auVar52 + 8));
  (*(float *)(gen_frame + 0x1ac)) = (*(float *)((char *)&auVar52 + 12));
  fVar50 = *(float *)&REFG(undefined, 0x113c44c) * (*(float *)(gen_frame + 0x1ac));
  (*(float *)(gen_frame + 0x190)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x1a0)) + 0))) * (*(float *)((char *)&auVar21 + 0));
  (*(float *)(gen_frame + 0x194)) = gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x1a0)) + 4))) * (*(float *)((char *)&auVar21 + 4));
  (*(float *)(gen_frame + 0x198)) = (*(float *)(gen_frame + 0x1a8)) * (*(float *)((char *)&auVar21 + 8));
  (*(float *)(gen_frame + 0x19c)) = (*(float *)(gen_frame + 0x1ac)) * (*(float *)((char *)&auVar21 + 12));
  fVar9 = (gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x1a0)) + 0))) * (*(float *)((char *)&auVar21 + 0))) * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x1a0)) + 0)));
  fVar15 = (gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x1a0)) + 4))) * (*(float *)((char *)&auVar21 + 4))) * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x1a0)) + 4)));
  fVar17 = ((*(float *)(gen_frame + 0x1a8)) * (*(float *)((char *)&auVar21 + 8))) * (*(float *)(gen_frame + 0x1a8));
  fVar19 = ((*(float *)(gen_frame + 0x1ac)) * (*(float *)((char *)&auVar21 + 12))) * (*(float *)(gen_frame + 0x1ac));
  (*(float *)(gen_frame + 0x190)) = fVar9;
  (*(float *)(gen_frame + 0x194)) = fVar15;
  (*(float *)(gen_frame + 0x198)) = fVar17;
  (*(float *)(gen_frame + 0x19c)) = fVar19;
  fVar19 = *(float *)&REFG(undefined, 0x113c43c) - fVar19;
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 4)) = gen_bits2f((uint)((ulonglong)uVar1 >> 0x20));
  fVar9 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar21 + 0)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113c430) - fVar9) * (*(float *)&REFG(undefined, 0x113c440) * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x1a0)) + 0)))))) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 0));
  fVar15 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar21 + 4)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113c434) - fVar15) * (*(float *)&REFG(undefined, 0x113c444) * gen_bits2f((*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x1a0)) + 4)))))) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 4));
  fVar17 = gen_bits2f(~-(uint)((*(float *)((char *)&auVar21 + 8)) <= 0.0) & (uint)gen_fl2bits((*(float *)&REFG(undefined, 0x113c438) - fVar17) * (*(float *)&REFG(undefined, 0x113c448) * (*(float *)(gen_frame + 0x1a8))))) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 0));
  fVar49 = ((fVar35 * fVar9 - fVar25 * fVar17) * fVar43 +
           (fVar33 * fVar17 - fVar35 * fVar15) * fVar41) +
           (fVar25 * fVar15 - fVar33 * fVar9) * fVar45;
  if (!(0.0 <= fVar49)) {
    fVar41 = fVar41 * *(float *)&REFG(undefined, 0x1138ad0);
    fVar43 = fVar43 * *(float *)&REFG(undefined, 0x1138ad4);
    fVar45 = fVar45 * *(float *)&REFG(undefined, 0x1138ad8);
    fVar47 = fVar47 * *(float *)&REFG(undefined, 0x1138adc);
  }
  this = (float *)(param_2 + 4);
  *((bool *)GEN_TOP(((int)param_2 + 0x32))) = !(0.0 <= fVar49);
  (*(float *)(gen_frame + 0x110)) = fVar41;
  (*(float *)(gen_frame + 0x114)) = fVar43;
  (*(float *)(gen_frame + 0x118)) = fVar45;
  (*(float *)(gen_frame + 0x11c)) = fVar47;
  (*(float *)(gen_frame + 0x120)) = fVar25;
  (*(float *)(gen_frame + 0x124)) = fVar33;
  (*(float *)(gen_frame + 0x128)) = fVar35;
  (*(float *)(gen_frame + 0x12c)) = fVar37;
  (*(float *)(gen_frame + 0x130)) = fVar9;
  (*(float *)(gen_frame + 0x134)) = fVar15;
  (*(float *)(gen_frame + 0x138)) = fVar17;
  (*(float *)(gen_frame + 0x13c)) = gen_bits2f(~-(uint)((*(float *)((char *)&auVar21 + 12)) <= 0.0) & (uint)gen_fl2bits(fVar19 * fVar50)) * (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 4));
  memcpy(&(*(gen_v16 *)((undefined1 *)(gen_frame + 0x1a0))), &(auVar52), sizeof(auVar52) < sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x1a0))) ? sizeof(auVar52) : sizeof(*(gen_v16 *)((undefined1 *)(gen_frame + 0x1a0))));
  (*(undefined8 *)(gen_frame + 0x1b0)) = uVar27;
  (*(undefined8 *)(gen_frame + 0x1b8)) = uVar1;
  F_00d991c0(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x110)));
  fVar9 = *this;
  fVar15 = gen_bits2f(param_2[5]);
  fVar17 = gen_bits2f(param_2[6]);
  fVar19 = gen_bits2f(param_2[7]);
  (*(float *)((char *)&auVar11 + 0)) = fVar17 * fVar17 + fVar9 * fVar9;
  (*(float *)((char *)&auVar11 + 4)) = fVar19 * fVar19 + fVar15 * fVar15;
  (*(float *)((char *)&auVar11 + 8)) = fVar9 * fVar9 + fVar17 * fVar17;
  (*(float *)((char *)&auVar11 + 12)) = fVar15 * fVar15 + fVar19 * fVar19;
  (*(float *)((char *)&auVar30 + 0)) = (*(float *)((char *)&auVar11 + 4)) + (*(float *)((char *)&auVar11 + 0));
  (*(float *)((char *)&auVar30 + 4)) = (*(float *)((char *)&auVar11 + 0)) + (*(float *)((char *)&auVar11 + 4));
  (*(float *)((char *)&auVar30 + 8)) = (*(float *)((char *)&auVar11 + 12)) + (*(float *)((char *)&auVar11 + 8));
  (*(float *)((char *)&auVar30 + 12)) = (*(float *)((char *)&auVar11 + 8)) + (*(float *)((char *)&auVar11 + 12));
  gen_rsqrtps(&(auVar52), &(auVar11), &(auVar30));
  fVar25 = (*(float *)((char *)&auVar52 + 0));
  fVar33 = (*(float *)((char *)&auVar52 + 4));
  fVar35 = (*(float *)((char *)&auVar52 + 8));
  fVar37 = (*(float *)((char *)&auVar52 + 12));
  *this = fVar9 * (((*(float *)(gen_frame + 0x170)) - (fVar25 * (*(float *)((char *)&auVar30 + 0))) * fVar25) * ((*(float *)(gen_frame + 0x180)) * fVar25));
  param_2[5] = (undefined4)
               gen_fl2bits(fVar15 * (((*(float *)(gen_frame + 0x174)) - (fVar33 * (*(float *)((char *)&auVar30 + 4))) * fVar33) *
                                    ((*(float *)(gen_frame + 0x184)) * fVar33)));
  param_2[6] = (undefined4)
               gen_fl2bits(fVar17 * (((*(float *)(gen_frame + 0x178)) - (fVar35 * (*(float *)((char *)&auVar30 + 8))) * fVar35) *
                                    ((*(float *)(gen_frame + 0x188)) * fVar35)));
  param_2[7] = (undefined4)
               gen_fl2bits(fVar19 * (((*(float *)(gen_frame + 0x17c)) - (fVar37 * (*(float *)((char *)&auVar30 + 12))) * fVar37) *
                                    ((*(float *)(gen_frame + 0x18c)) * fVar37)));
  F_00da7350(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,this);
  (*(undefined4 *)(gen_frame + 0x30)) = *param_2;
  (*(undefined4 *)(gen_frame + 0x34)) = param_2[1];
  (*(undefined4 *)(gen_frame + 0x38)) = param_2[2];
  (*(undefined4 *)(gen_frame + 0x3c)) = param_2[3];
  F_00da7d00(((undefined1 *)(gen_frame + 0x40)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)));
  uVar6 = F_00dbd040(&(*(uint *)(gen_frame + 0x100)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x40)));
  fVar9 = *(float *)&REFG(undefined, 0x1138afc);
  fVar17 = gen_bits2f((*(uint *)(gen_frame + 0x100)) & *(uint *)&REFG(undefined, 0x10abc20));
  fVar19 = gen_bits2f((*(uint *)(gen_frame + 0x104)) & *(uint *)&REFG(undefined, 0x10abc24));
  fVar25 = gen_bits2f((*(uint *)(gen_frame + 0x108)) & *(uint *)&REFG(undefined, 0x10abc28));
  fVar33 = gen_bits2f((*(uint *)(gen_frame + 0x10c)) & *(uint *)&REFG(undefined, 0x10abc2c));
  fVar35 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x110))) & *(uint *)&REFG(undefined, 0x10abc20));
  fVar37 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x114))) & *(uint *)&REFG(undefined, 0x10abc24));
  fVar41 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x118))) & *(uint *)&REFG(undefined, 0x10abc28));
  fVar43 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x11c))) & *(uint *)&REFG(undefined, 0x10abc2c));
  fVar45 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x120))) & *(uint *)&REFG(undefined, 0x10abc20));
  fVar47 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x124))) & *(uint *)&REFG(undefined, 0x10abc24));
  fVar49 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x128))) & *(uint *)&REFG(undefined, 0x10abc28));
  fVar50 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x12c))) & *(uint *)&REFG(undefined, 0x10abc2c));
  fVar15 = (*(float *)(gen_frame + 0xcc)) * *(float *)&REFG(undefined, 0x1138afc);
  param_2[0x10] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xc4)) * fVar35 + (*(float *)(gen_frame + 0xc0)) * fVar17) + (*(float *)(gen_frame + 0xc8)) * fVar45) +
                   (*(float *)(gen_frame + 0xcc)) * (*(float *)(gen_frame + 0x130)));
  param_2[0x11] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xc4)) * fVar37 + (*(float *)(gen_frame + 0xc0)) * fVar19) + (*(float *)(gen_frame + 0xc8)) * fVar47) +
                   (*(float *)(gen_frame + 0xcc)) * (*(float *)(gen_frame + 0x134)));
  param_2[0x12] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xc4)) * fVar41 + (*(float *)(gen_frame + 0xc0)) * fVar25) + (*(float *)(gen_frame + 0xc8)) * fVar49) +
                   (*(float *)(gen_frame + 0xcc)) * (*(float *)(gen_frame + 0x138)));
  param_2[0x13] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xc4)) * fVar43 + (*(float *)(gen_frame + 0xc0)) * fVar33) + (*(float *)(gen_frame + 0xc8)) * fVar50) + fVar15);
  param_2[0x14] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xd4)) * fVar35 + (*(float *)(gen_frame + 0xd0)) * fVar17) + (*(float *)(gen_frame + 0xd8)) * fVar45) +
                   (*(float *)(gen_frame + 0xdc)) * (*(float *)(gen_frame + 0x130)));
  param_2[0x15] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xd4)) * fVar37 + (*(float *)(gen_frame + 0xd0)) * fVar19) + (*(float *)(gen_frame + 0xd8)) * fVar47) +
                   (*(float *)(gen_frame + 0xdc)) * (*(float *)(gen_frame + 0x134)));
  param_2[0x16] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xd4)) * fVar41 + (*(float *)(gen_frame + 0xd0)) * fVar25) + (*(float *)(gen_frame + 0xd8)) * fVar49) +
                   (*(float *)(gen_frame + 0xdc)) * (*(float *)(gen_frame + 0x138)));
  param_2[0x17] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xd4)) * fVar43 + (*(float *)(gen_frame + 0xd0)) * fVar33) + (*(float *)(gen_frame + 0xd8)) * fVar50) +
                   (*(float *)(gen_frame + 0xdc)) * fVar9);
  param_2[0x18] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xe4)) * fVar35 + (*(float *)(gen_frame + 0xe0)) * fVar17) + (*(float *)(gen_frame + 0xe8)) * fVar45) +
                   (*(float *)(gen_frame + 0xec)) * (*(float *)(gen_frame + 0x130)));
  param_2[0x19] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xe4)) * fVar37 + (*(float *)(gen_frame + 0xe0)) * fVar19) + (*(float *)(gen_frame + 0xe8)) * fVar47) +
                   (*(float *)(gen_frame + 0xec)) * (*(float *)(gen_frame + 0x134)));
  param_2[0x1a] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xe4)) * fVar41 + (*(float *)(gen_frame + 0xe0)) * fVar25) + (*(float *)(gen_frame + 0xe8)) * fVar49) +
                   (*(float *)(gen_frame + 0xec)) * (*(float *)(gen_frame + 0x138)));
  param_2[0x1b] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xe4)) * fVar43 + (*(float *)(gen_frame + 0xe0)) * fVar33) + (*(float *)(gen_frame + 0xe8)) * fVar50) +
                   (*(float *)(gen_frame + 0xec)) * fVar9);
  param_2[0x1c] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xf4)) * fVar35 + (*(float *)(gen_frame + 0xf0)) * fVar17) + (*(float *)(gen_frame + 0xf8)) * fVar45) +
                   (*(float *)(gen_frame + 0xfc)) * (*(float *)(gen_frame + 0x130)));
  param_2[0x1d] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xf4)) * fVar37 + (*(float *)(gen_frame + 0xf0)) * fVar19) + (*(float *)(gen_frame + 0xf8)) * fVar47) +
                   (*(float *)(gen_frame + 0xfc)) * (*(float *)(gen_frame + 0x134)));
  param_2[0x1e] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xf4)) * fVar41 + (*(float *)(gen_frame + 0xf0)) * fVar25) + (*(float *)(gen_frame + 0xf8)) * fVar49) +
                   (*(float *)(gen_frame + 0xfc)) * (*(float *)(gen_frame + 0x138)));
  param_2[0x1f] =
       (undefined4)
       gen_fl2bits((((*(float *)(gen_frame + 0xf4)) * fVar43 + (*(float *)(gen_frame + 0xf0)) * fVar33) + (*(float *)(gen_frame + 0xf8)) * fVar50) +
                   (*(float *)(gen_frame + 0xfc)) * fVar9);
  fVar19 = *(float *)&REFG(undefined, 0x113c45c);
  fVar17 = *(float *)&REFG(undefined, 0x113c458);
  fVar15 = *(float *)&REFG(undefined, 0x113c454);
  fVar9 = *(float *)&REFG(undefined, 0x113c450);
  fVar48 = *(float *)&REFG(undefined, 0x1138afc);
  fVar46 = *(float *)&REFG(undefined, 0x1138af8);
  fVar44 = *(float *)&REFG(undefined, 0x1138af4);
  fVar42 = *(float *)&REFG(undefined, 0x1138af0);
  (*(unsigned int *)((unsigned char *)(auVar4) + 4)) = (undefined4)gen_fl2bits(*(float *)&REFG(undefined, 0x113c454));
  (*(unsigned int *)((unsigned char *)(auVar4) + 0)) = (undefined4)gen_fl2bits(*(float *)&REFG(undefined, 0x113c450));
  (*(unsigned int *)((unsigned char *)(auVar4) + 8)) = (undefined4)gen_fl2bits(*(float *)&REFG(undefined, 0x113c458));
  (*(unsigned int *)((unsigned char *)(auVar4) + 12)) = (undefined4)gen_fl2bits(*(float *)&REFG(undefined, 0x113c45c));
  uVar27 = CONCAT44((uint)gen_fl2bits(*(float *)&REFG(undefined, 0x1138af0)),param_2[0x1a]);
  *(ulonglong *)(param_2 + 8) = CONCAT44(param_2[0x15],param_2[0x10]);
  *(undefined8 *)(param_2 + 10) = uVar27;
  (*(unsigned int *)((unsigned char *)(auVar12) + 4)) = -(uint)(ABS(gen_bits2f(param_2[0x15]) - *(float *)&REFG(undefined, 0x1138af4)) < fVar15);
  (*(unsigned int *)((unsigned char *)(auVar12) + 0)) = -(uint)(ABS(gen_bits2f(param_2[0x10]) - *(float *)&REFG(undefined, 0x1138af0)) < fVar9);
  (*(unsigned int *)((unsigned char *)(auVar12) + 8)) = -(uint)(ABS(gen_bits2f(param_2[0x1a]) - *(float *)&REFG(undefined, 0x1138af8)) < fVar17);
  (*(unsigned int *)((unsigned char *)(auVar12) + 12)) = -(uint)(ABS(fVar42 - *(float *)&REFG(undefined, 0x1138afc)) < fVar19);
  uVar7 = gen_movmskps(&(auVar12));
  *(bool *)(param_2 + 0xc) = ((byte)uVar7 & 7) != 7;
  memcpy(&(auVar52), &(*(gen_v16 *)(param_2 + 8)), sizeof(*(gen_v16 *)(param_2 + 8)) < sizeof(auVar52) ? sizeof(*(gen_v16 *)(param_2 + 8)) : sizeof(auVar52));
  fVar42 = fVar42 * *(float *)&REFG(undefined, 0x1138ca0);
  fVar44 = fVar44 * *(float *)&REFG(undefined, 0x1138ca4);
  fVar46 = fVar46 * *(float *)&REFG(undefined, 0x1138ca8);
  fVar48 = fVar48 * *(float *)&REFG(undefined, 0x1138cac);
  fVar9 = gen_bits2f(param_2[0x18]);
  gen_rcpps(&(auVar29), &(auVar4), &(auVar52));
  fVar10 = (*(float *)&REFG(undefined, 0x113c420) - (*(float *)((char *)&auVar29 + 0)) * (*(float *)((char *)&auVar52 + 0))) * (*(float *)((char *)&auVar29 + 0));
  fVar16 = (*(float *)&REFG(undefined, 0x113c424) - (*(float *)((char *)&auVar29 + 4)) * (*(float *)((char *)&auVar52 + 4))) * (*(float *)((char *)&auVar29 + 4));
  fVar18 = (*(float *)&REFG(undefined, 0x113c428) - (*(float *)((char *)&auVar29 + 8)) * (*(float *)((char *)&auVar52 + 8))) * (*(float *)((char *)&auVar29 + 8));
  (*(float *)(gen_frame + 0xb0)) = fVar42;
  (*(float *)(gen_frame + 0xb4)) = fVar44;
  (*(float *)(gen_frame + 0xb8)) = fVar46;
  (*(float *)(gen_frame + 0xbc)) = fVar48;
  fVar15 = gen_bits2f(param_2[0x14]);
  fVar20 = fVar10 * (float)REFG(float, 0x1138c70);
  fVar23 = fVar10 * (*(float *)((char *)&REFG(float, 0x1138c70) + 4));
  fVar24 = fVar10 * (float)REFG(undefined8, 0x1138c78);
  fVar10 = fVar10 * (*(float *)((char *)&REFG(undefined8, 0x1138c78) + 4));
  fVar26 = fVar16 * (float)REFG(float, 0x1138c80);
  fVar34 = fVar16 * (*(float *)((char *)&REFG(float, 0x1138c80) + 4));
  fVar36 = fVar16 * (float)REFG(undefined8, 0x1138c88);
  fVar16 = fVar16 * (*(float *)((char *)&REFG(undefined8, 0x1138c88) + 4));
  fVar38 = fVar18 * (float)REFG(float, 0x1138c90);
  fVar39 = fVar18 * (*(float *)((char *)&REFG(float, 0x1138c90) + 4));
  fVar40 = fVar18 * (float)REFG(undefined8, 0x1138c98);
  fVar18 = fVar18 * (*(float *)((char *)&REFG(undefined8, 0x1138c98) + 4));
  fVar17 = gen_bits2f(param_2[0x15]);
  (*(float *)(gen_frame + 0x180)) = fVar17 * fVar26;
  (*(float *)(gen_frame + 0x184)) = fVar17 * fVar34;
  (*(float *)(gen_frame + 0x188)) = fVar17 * fVar36;
  (*(float *)(gen_frame + 0x18c)) = fVar17 * fVar16;
  fVar19 = gen_bits2f(param_2[0x19]);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x1a0)) + 0)) = (undefined4)gen_fl2bits(fVar19 * fVar26);
  (*(undefined4 *)((char *)((undefined1 *)(gen_frame + 0x1a0)) + 4)) = (undefined4)gen_fl2bits(fVar19 * fVar34);
  (*(float *)(gen_frame + 0x1a8)) = fVar19 * fVar36;
  (*(float *)(gen_frame + 0x1ac)) = fVar19 * fVar16;
  fVar25 = gen_bits2f(param_2[0x1d]);
  fVar33 = gen_bits2f(param_2[0x16]);
  (*(float *)(gen_frame + 0x170)) = fVar33 * fVar38;
  (*(float *)(gen_frame + 0x174)) = fVar33 * fVar39;
  (*(float *)(gen_frame + 0x178)) = fVar33 * fVar40;
  (*(float *)(gen_frame + 0x17c)) = fVar33 * fVar18;
  fVar35 = gen_bits2f(param_2[0x1a]);
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 0)) = fVar35 * fVar38;
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b0)) + 4)) = fVar35 * fVar39;
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 0)) = fVar35 * fVar40;
  (*(float *)((char *)&(*(undefined8 *)(gen_frame + 0x1b8)) + 4)) = fVar35 * fVar18;
  fVar37 = gen_bits2f(param_2[0x1e]);
  fVar41 = gen_bits2f(param_2[0x17]);
  fVar43 = gen_bits2f(param_2[0x1c]);
  (*(float *)(gen_frame + 0x190)) = fVar41 * fVar42;
  (*(float *)(gen_frame + 0x194)) = fVar41 * fVar44;
  (*(float *)(gen_frame + 0x198)) = fVar41 * fVar46;
  (*(float *)(gen_frame + 0x19c)) = fVar41 * fVar48;
  fVar45 = gen_bits2f(param_2[0x1b]);
  fVar47 = gen_bits2f(param_2[0x1f]);
  fVar49 = gen_bits2f(param_2[0x10]);
  fVar50 = gen_bits2f(param_2[0x11]);
  fVar2 = gen_bits2f(param_2[0x12]);
  fVar3 = gen_bits2f(param_2[0x13]);
  param_2[0x24] =
       (undefined4)
       gen_fl2bits(((fVar15 * fVar20 + fVar17 * fVar26) + fVar33 * fVar38) + fVar41 * fVar42);
  param_2[0x25] =
       (undefined4)
       gen_fl2bits(((fVar15 * fVar23 + fVar17 * fVar34) + fVar33 * fVar39) + fVar41 * fVar44);
  param_2[0x26] =
       (undefined4)
       gen_fl2bits(((fVar15 * fVar24 + fVar17 * fVar36) + fVar33 * fVar40) + fVar41 * fVar46);
  param_2[0x27] =
       (undefined4)
       gen_fl2bits(((fVar15 * fVar10 + fVar17 * fVar16) + fVar33 * fVar18) + fVar41 * fVar48);
  param_2[0x28] =
       (undefined4)
       gen_fl2bits(((fVar9 * fVar20 + fVar19 * fVar26) + fVar35 * fVar38) + fVar45 * fVar42);
  param_2[0x29] =
       (undefined4)
       gen_fl2bits(((fVar9 * fVar23 + fVar19 * fVar34) + fVar35 * fVar39) + fVar45 * fVar44);
  param_2[0x2a] =
       (undefined4)
       gen_fl2bits(((fVar9 * fVar24 + fVar19 * fVar36) + fVar35 * fVar40) + fVar45 * fVar46);
  param_2[0x2b] =
       (undefined4)
       gen_fl2bits(((fVar9 * fVar10 + fVar19 * fVar16) + fVar35 * fVar18) + fVar45 * fVar48);
  param_2[0x2c] =
       (undefined4)
       gen_fl2bits(((fVar43 * fVar20 + fVar25 * fVar26) + fVar37 * fVar38) + fVar47 * fVar42);
  param_2[0x2d] =
       (undefined4)
       gen_fl2bits(((fVar43 * fVar23 + fVar25 * fVar34) + fVar37 * fVar39) + fVar47 * fVar44);
  param_2[0x2e] =
       (undefined4)
       gen_fl2bits(((fVar43 * fVar24 + fVar25 * fVar36) + fVar37 * fVar40) + fVar47 * fVar46);
  param_2[0x2f] =
       (undefined4)
       gen_fl2bits(((fVar43 * fVar10 + fVar25 * fVar16) + fVar37 * fVar18) + fVar47 * fVar48);
  param_2[0x20] =
       (undefined4)
       gen_fl2bits(((fVar50 * fVar26 + fVar49 * fVar20) + fVar2 * fVar38) + fVar3 * fVar42);
  param_2[0x21] =
       (undefined4)
       gen_fl2bits(((fVar50 * fVar34 + fVar49 * fVar23) + fVar2 * fVar39) + fVar3 * fVar44);
  param_2[0x22] =
       (undefined4)
       gen_fl2bits(((fVar50 * fVar36 + fVar49 * fVar24) + fVar2 * fVar40) + fVar3 * fVar46);
  param_2[0x23] =
       (undefined4)
       gen_fl2bits(((fVar50 * fVar16 + fVar49 * fVar10) + fVar2 * fVar18) + fVar3 * fVar48);
  (*(unsigned long long *)((unsigned char *)(auVar13) + 0)) = CONCAT44((uint)gen_fl2bits(gen_bits2f(param_2[0x2d]) - *(float *)&REFG(undefined, 0x1138ca4)), (uint)gen_fl2bits(gen_bits2f(param_2[0x2c]) - *(float *)&REFG(undefined, 0x1138ca0))) & 0x7fffffff7fffffff;
  (*(float *)((char *)&auVar13 + 8)) = ABS(gen_bits2f(param_2[0x2e]) - *(float *)&REFG(undefined, 0x1138ca8));
  (*(float *)((char *)&auVar13 + 12)) = ABS(gen_bits2f(param_2[0x2f]) - *(float *)&REFG(undefined, 0x1138cac));
  (*(unsigned long long *)((unsigned char *)(auVar22) + 0)) = CONCAT44((uint)gen_fl2bits(gen_bits2f(param_2[0x29]) - (*(float *)((char *)&REFG(float, 0x1138c90) + 4))), (uint)gen_fl2bits(gen_bits2f(param_2[0x28]) - (float)REFG(float, 0x1138c90))) & 0x7fffffff7fffffff;
  (*(float *)((char *)&auVar22 + 8)) = ABS(gen_bits2f(param_2[0x2a]) - (float)REFG(undefined8, 0x1138c98));
  (*(float *)((char *)&auVar22 + 12)) = ABS(gen_bits2f(param_2[0x2b]) - (*(float *)((char *)&REFG(undefined8, 0x1138c98) + 4)));
  gen_maxps(&(auVar52), &(auVar22), &(auVar13));
  (*(unsigned long long *)((unsigned char *)(auVar31) + 0)) = CONCAT44((uint)gen_fl2bits(gen_bits2f(param_2[0x21]) - (*(float *)((char *)&REFG(float, 0x1138c70) + 4))), (uint)gen_fl2bits(gen_bits2f(param_2[0x20]) - (float)REFG(float, 0x1138c70))) & 0x7fffffff7fffffff;
  (*(float *)((char *)&auVar31 + 8)) = ABS(gen_bits2f(param_2[0x22]) - (float)REFG(undefined8, 0x1138c78));
  (*(float *)((char *)&auVar31 + 12)) = ABS(gen_bits2f(param_2[0x23]) - (*(float *)((char *)&REFG(undefined8, 0x1138c78) + 4)));
  (*(unsigned long long *)((unsigned char *)(auVar14) + 0)) = CONCAT44((uint)gen_fl2bits(gen_bits2f(param_2[0x25]) - (*(float *)((char *)&REFG(float, 0x1138c80) + 4))), (uint)gen_fl2bits(gen_bits2f(param_2[0x24]) - (float)REFG(float, 0x1138c80))) & 0x7fffffff7fffffff;
  (*(float *)((char *)&auVar14 + 8)) = ABS(gen_bits2f(param_2[0x26]) - (float)REFG(undefined8, 0x1138c88));
  (*(float *)((char *)&auVar14 + 12)) = ABS(gen_bits2f(param_2[0x27]) - (*(float *)((char *)&REFG(undefined8, 0x1138c88) + 4)));
  gen_maxps(&(auVar29), &(auVar31), &(auVar14));
  gen_maxps(&(auVar52), &(auVar29), &(auVar52));
  (*(unsigned int *)((unsigned char *)(auVar32) + 4)) = -(uint)((*(float *)((char *)&auVar52 + 4)) <= *(float *)&REFG(undefined, 0x113c454));
  (*(unsigned int *)((unsigned char *)(auVar32) + 0)) = -(uint)((*(float *)((char *)&auVar52 + 0)) <= *(float *)&REFG(undefined, 0x113c450));
  (*(unsigned int *)((unsigned char *)(auVar32) + 8)) = -(uint)((*(float *)((char *)&auVar52 + 8)) <= *(float *)&REFG(undefined, 0x113c458));
  (*(unsigned int *)((unsigned char *)(auVar32) + 12)) = -(uint)((*(float *)((char *)&auVar52 + 12)) <= *(float *)&REFG(undefined, 0x113c45c));
  iVar8 = gen_movmskps(&(auVar32));
  *((bool *)GEN_TOP(((int)param_2 + 0x31))) = iVar8 != 0xf;
  return iVar8 != 0xf;
}

/* ref: Global::Decompose */
GEN_LIB GEN_FRAME byte F_00da8fe0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda8fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_00da8830(param_1,param_2);
  return bVar1;
}

/* ref: Global::SetX_00da9070 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da9070(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda9070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *in_ecx = *param_2;
  in_ecx[1] = in_ecx[1];
  in_ecx[2] = in_ecx[2];
  in_ecx[3] = in_ecx[3];
  return (uint)param_2;
}

/* ref: Global::SetY */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da9090(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda9090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *param_2;
  *in_ecx = *in_ecx;
  in_ecx[1] = uVar1;
  in_ecx[2] = in_ecx[2];
  in_ecx[3] = in_ecx[3];
  return (uint)param_2;
}

/* ref: FUN_00da90b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da90b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda90b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
  *in_ecx = *in_ecx;
  in_ecx[1] = in_ecx[1];
  in_ecx[2] = uVar1;
  in_ecx[3] = in_ecx[3];
  return param_2;
}

/* ref: Global::SetRows */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da9150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2), GEN_P(undefined4 * param_3, unsigned int gen_a3), GEN_P(undefined4 * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xda9150u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar3 = param_1[3];
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = uVar3;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *param_3;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = uVar3;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = *param_4;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x38))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = uVar3;
  return (uint)param_3;
}

/* ref: FUN_00da9190 */
GEN_LIB GEN_FRAME uint F_00da9190(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xda9190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138adc);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138ad8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138ad4);
  *param_1 = *(undefined4 *)&REFG(undefined, 0x1138ad0);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return (uint)param_1;
}

/* ref: Global::SplatM00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da91b0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda91b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *in_ecx;
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: Global::SplatM11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da91d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda91d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0x14)));
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: Global::SplatM22 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da91f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda91f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0x28)));
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: Global::AddAssign3x4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da9210(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda9210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  *in_ecx = *param_2 + *in_ecx;
  in_ecx[1] = fVar1 + in_ecx[1];
  in_ecx[2] = fVar2 + in_ecx[2];
  in_ecx[3] = fVar3 + in_ecx[3];
  fVar1 = param_2[5];
  fVar2 = param_2[6];
  fVar3 = param_2[7];
  in_ecx[4] = param_2[4] + in_ecx[4];
  in_ecx[5] = fVar1 + in_ecx[5];
  in_ecx[6] = fVar2 + in_ecx[6];
  in_ecx[7] = fVar3 + in_ecx[7];
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  in_ecx[8] = param_2[8] + in_ecx[8];
  in_ecx[9] = fVar1 + in_ecx[9];
  in_ecx[10] = fVar2 + in_ecx[10];
  in_ecx[0xb] = fVar3 + in_ecx[0xb];
  return (uint)param_2;
}

/* ref: FUN_00da9240 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da9240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3), GEN_P(float * param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xda9240u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_PIN(float * param_4 = (float *)(uintptr_t)gen_a4;)
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = param_1[1] * (*(float *)((char *)&REFG(float, 0x1138c70) + 4));
  fVar2 = param_1[2] * (float)REFG(undefined8, 0x1138c78);
  fVar3 = param_1[3] * (*(float *)((char *)&REFG(undefined8, 0x1138c78) + 4));
  *(float *)this = *param_1 * (float)REFG(float, 0x1138c70);
  *((float *)GEN_TOP(((int)this + 4))) = fVar1;
  *((float *)GEN_TOP(((int)this + 8))) = fVar2;
  *((float *)GEN_TOP(((int)this + 0xc))) = fVar3;
  fVar1 = param_2[1] * (*(float *)((char *)&REFG(float, 0x1138c80) + 4));
  fVar2 = param_2[2] * (float)REFG(undefined8, 0x1138c88);
  fVar3 = param_2[3] * (*(float *)((char *)&REFG(undefined8, 0x1138c88) + 4));
  *((float *)GEN_TOP(((int)this + 0x10))) = *param_2 * (float)REFG(float, 0x1138c80);
  *((float *)GEN_TOP(((int)this + 0x14))) = fVar1;
  *((float *)GEN_TOP(((int)this + 0x18))) = fVar2;
  *((float *)GEN_TOP(((int)this + 0x1c))) = fVar3;
  fVar1 = param_3[1] * (*(float *)((char *)&REFG(float, 0x1138c90) + 4));
  fVar2 = param_3[2] * (float)REFG(undefined8, 0x1138c98);
  fVar3 = param_3[3] * (*(float *)((char *)&REFG(undefined8, 0x1138c98) + 4));
  *((float *)GEN_TOP(((int)this + 0x20))) = *param_3 * (float)REFG(float, 0x1138c90);
  *((float *)GEN_TOP(((int)this + 0x24))) = fVar1;
  *((float *)GEN_TOP(((int)this + 0x28))) = fVar2;
  *((float *)GEN_TOP(((int)this + 0x2c))) = fVar3;
  fVar1 = param_4[1] * *(float *)&REFG(undefined, 0x1138ca4);
  fVar2 = param_4[2] * *(float *)&REFG(undefined, 0x1138ca8);
  fVar3 = param_4[3] * *(float *)&REFG(undefined, 0x1138cac);
  *((float *)GEN_TOP(((int)this + 0x30))) = *param_4 * *(float *)&REFG(undefined, 0x1138ca0);
  *((float *)GEN_TOP(((int)this + 0x34))) = fVar1;
  *((float *)GEN_TOP(((int)this + 0x38))) = fVar2;
  *((float *)GEN_TOP(((int)this + 0x3c))) = fVar3;
  return (uint)param_3;
}

/* ref: Global::NearEqual */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00da9290(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2))
{
  GEN_ENTER(0xda9290u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  int iVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  (*(unsigned long long *)((unsigned char *)(auVar2) + 0)) = CONCAT44((uint)gen_fl2bits(in_ecx[9] - param_2[9]), (uint)gen_fl2bits(in_ecx[8] - param_2[8])) & 0x7fffffff7fffffff;
  (*(float *)((char *)&auVar2 + 8)) = ABS(in_ecx[10] - param_2[10]);
  (*(float *)((char *)&auVar2 + 12)) = ABS(in_ecx[0xb] - param_2[0xb]);
  (*(undefined4 *)((char *)&auVar3 + 8)) = (undefined4)gen_fl2bits(ABS(in_ecx[0xe] - param_2[0xe]));
  (*(unsigned long long *)((unsigned char *)(auVar3) + 0)) = CONCAT44((uint)gen_fl2bits(in_ecx[0xd] - param_2[0xd]), (uint)gen_fl2bits(in_ecx[0xc] - param_2[0xc])) & 0x7fffffff7fffffff;
  (*(undefined4 *)((char *)&auVar3 + 12)) = (undefined4)gen_fl2bits(ABS(in_ecx[0xf] - param_2[0xf]));
  gen_maxps(&(auVar3), &(auVar2), &(auVar3));
  (*(unsigned long long *)((unsigned char *)(auVar4) + 0)) = CONCAT44((uint)gen_fl2bits(in_ecx[1] - param_2[1]), (uint)gen_fl2bits(*in_ecx - *param_2)) & 0x7fffffff7fffffff;
  (*(float *)((char *)&auVar4 + 8)) = ABS(in_ecx[2] - param_2[2]);
  (*(float *)((char *)&auVar4 + 12)) = ABS(in_ecx[3] - param_2[3]);
  (*(undefined4 *)((char *)&auVar5 + 8)) = (undefined4)gen_fl2bits(ABS(in_ecx[6] - param_2[6]));
  (*(unsigned long long *)((unsigned char *)(auVar5) + 0)) = CONCAT44((uint)gen_fl2bits(in_ecx[5] - param_2[5]), (uint)gen_fl2bits(in_ecx[4] - param_2[4])) & 0x7fffffff7fffffff;
  (*(undefined4 *)((char *)&auVar5 + 12)) = (undefined4)gen_fl2bits(ABS(in_ecx[7] - param_2[7]));
  gen_maxps(&(auVar5), &(auVar4), &(auVar5));
  gen_maxps(&(auVar3), &(auVar5), &(auVar3));
  (*(undefined4 *)((char *)&auVar6 + 4)) = -(uint)((*(float *)((char *)&auVar3 + 4)) <= param_3);
  (*(undefined4 *)((char *)&auVar6 + 0)) = -(uint)((*(float *)((char *)&auVar3 + 0)) <= param_3);
  (*(undefined4 *)((char *)&auVar6 + 8)) = -(uint)((*(float *)((char *)&auVar3 + 8)) <= param_3);
  (*(undefined4 *)((char *)&auVar6 + 12)) = -(uint)((*(float *)((char *)&auVar3 + 12)) <= param_3);
  iVar1 = gen_movmskps(&(auVar6));
  return iVar1 == 0xf;
}

/* ref: hkSimpleLocalFrame::vf13 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00da9560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda9560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  if (param_1 != ((undefined *)GEN_TOP(0x0))) {
    F_00d919e0(param_1 GEN_EDX_FWD);
  }
  if (*(undefined * PTR32 *)(this + 0x60) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*(undefined * PTR32 *)(this + 0x60) GEN_EDX_ARG);
  }
  *(undefined * PTR32 *)(this + 0x60) = param_1;
  return;
}

/* ref: FUN_00da95c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da95c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xda95c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x50, 0);
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0xc))))(this GEN_EDX_FWD,((undefined1 *)(gen_frame + 0x0)));
  *param_1 = (*(undefined4 *)(gen_frame + 0x30));
  param_1[1] = (*(undefined4 *)(gen_frame + 0x34));
  param_1[2] = (*(undefined4 *)(gen_frame + 0x38));
  param_1[3] = (*(undefined4 *)(gen_frame + 0x3c));
  return uVar1;
}

/* ref: hkSimpleLocalFrame::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da9600(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda9600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0x44)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0x48)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0x4c)));
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x40)));
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  return (uint)param_2;
}

/* ref: hkSimpleLocalFrame::vf10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da9620(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda9620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((uint *)GEN_TOP((in_ecx + 0x54)));
}

/* ref: hkSimpleLocalFrame::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da9630(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda9630u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x50))) + param_2 * 4)));
}

/* ref: hkSimpleLocalFrame::vf14 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00da9640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda9640u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  int * piVar2;
  int local_8;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_FWD);
  if (uVar1 != 0) {
    local_8 = 0;
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG);
    if (0 < (int)uVar1) {
      do {
        piVar2 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x2c))))(this GEN_EDX_ARG,local_8)));
        if (piVar2 != ((int *)GEN_TOP(0x0))) {
          if (param_1[1] == (param_1[2] & 0x3fffffffU)) {
            F_00d95710(param_2,param_1,4);
          }
          *((int * PTR32 *)GEN_TOP((*param_1 + param_1[1] * 4))) = piVar2;
          param_1[1] = param_1[1] + 1;
          ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x38))))(piVar2 GEN_EDX_ARG,param_1,param_2);
        }
        local_8 = local_8 + 1;
        uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x28))))(this GEN_EDX_ARG);
      } while (local_8 < (int)uVar1);
    }
  }
  return 0;
}

/* ref: hkSimpleLocalFrame::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da96e0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda96e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *((undefined4 *)GEN_TOP((in_ecx + 0x10))) = *param_2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x14))) = uVar1;
  *((undefined4 *)GEN_TOP((in_ecx + 0x18))) = uVar2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x1c))) = uVar3;
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  *((undefined4 *)GEN_TOP((in_ecx + 0x20))) = param_2[4];
  *((undefined4 *)GEN_TOP((in_ecx + 0x24))) = uVar1;
  *((undefined4 *)GEN_TOP((in_ecx + 0x28))) = uVar2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x2c))) = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  *((undefined4 *)GEN_TOP((in_ecx + 0x30))) = param_2[8];
  *((undefined4 *)GEN_TOP((in_ecx + 0x34))) = uVar1;
  *((undefined4 *)GEN_TOP((in_ecx + 0x38))) = uVar2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x3c))) = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  *((undefined4 *)GEN_TOP((in_ecx + 0x40))) = param_2[0xc];
  *((undefined4 *)GEN_TOP((in_ecx + 0x44))) = uVar1;
  *((undefined4 *)GEN_TOP((in_ecx + 0x48))) = uVar2;
  *((undefined4 *)GEN_TOP((in_ecx + 0x4c))) = uVar3;
  return (uint)param_2;
}

/* ref: hkSimpleLocalFrame::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da9710(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda9710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0x14)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0x18)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0x1c)));
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 0x10)));
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0x24)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0x28)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0x2c)));
  param_2[4] = *((undefined4 *)GEN_TOP((in_ecx + 0x20)));
  param_2[5] = uVar1;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0x34)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0x38)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0x3c)));
  param_2[8] = *((undefined4 *)GEN_TOP((in_ecx + 0x30)));
  param_2[9] = uVar1;
  param_2[10] = uVar2;
  param_2[0xb] = uVar3;
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0x44)));
  uVar2 = *((undefined4 *)GEN_TOP((in_ecx + 0x48)));
  uVar3 = *((undefined4 *)GEN_TOP((in_ecx + 0x4c)));
  param_2[0xc] = *((undefined4 *)GEN_TOP((in_ecx + 0x40)));
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar3;
  return (uint)param_2;
}

/* ref: hkSimpleLocalFrame::vf6 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00da9740(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(int * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xda9740u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(int * param_4 = (int *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x20, 0);
  int * piVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar7 [16];
  
  fVar3 = *param_2 - *((float *)GEN_TOP((param_1 + 0x40)));
  fVar4 = param_2[1] - *((float *)GEN_TOP((param_1 + 0x44)));
  fVar5 = param_2[2] - *((float *)GEN_TOP((param_1 + 0x48)));
  fVar3 = fVar3 * fVar3;
  fVar4 = fVar4 * fVar4;
  fVar5 = fVar5 * fVar5;
  fVar6 = (fVar4 + fVar3) + fVar5;
  (*(undefined4 *)((char *)&auVar7 + 4)) = (undefined4)gen_fl2bits((fVar4 + fVar3) + fVar5);
  (*(undefined4 *)((char *)&auVar7 + 0)) = (undefined4)gen_fl2bits(fVar6);
  (*(undefined4 *)((char *)&auVar7 + 8)) = (undefined4)gen_fl2bits((fVar4 + fVar3) + fVar5);
  (*(undefined4 *)((char *)&auVar7 + 12)) = (undefined4)gen_fl2bits((fVar4 + fVar3) + fVar5);
  gen_rsqrtps(&(auVar7), &(in_XMM3), &(auVar7));
  fVar3 = (*(float *)((char *)&auVar7 + 0));
  fVar3 = gen_bits2f(~-(uint)(fVar6 <= 0.0) &
                     (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x113c460) - (fVar3 * fVar6) * fVar3) *
                                       (*(float *)&REFG(undefined, 0x113c470) * fVar3)) * fVar6));
  if (fVar3 <= param_3) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_4 + 0xc))))(param_4 GEN_EDX_FWD,param_1,(undefined4)gen_fl2bits(fVar3));
  }
  if (0 < *((int *)GEN_TOP((param_1 + 0x54)))) {
    F_00d94d00(((undefined1 *)(gen_frame + 0x0)) GEN_EDX_ARG,param_1 + 0x10,param_2);
    iVar2 = 0;
    if (0 < *((int *)GEN_TOP((param_1 + 0x54)))) {
      do {
        piVar1 = *((int * PTR32 *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x50))) + iVar2 * 4)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0x18))))(piVar1 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),(undefined4)gen_fl2bits(param_3),param_4);
        iVar2 = iVar2 + 1;
      } while (iVar2 < *((int *)GEN_TOP((param_1 + 0x54))));
    }
  }
  return;
}

/* ref: FUN_00da9830 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da9830(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda9830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 0x54)));
  iVar3 = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x1139254));
  if (0 < iVar1) {
    do {
      F_00d91a80(*((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x50))) + iVar3 * 4))) GEN_EDX_FWD);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0x60))) != ((undefined *)GEN_TOP(0x0))) {
    F_00d91a80(*((undefined * PTR32 *)GEN_TOP(((int)this + 0x60))) GEN_EDX_ARG);
  }
  F_00d91510(((undefined *)GEN_TOP(((int)this + 100))) GEN_EDX_ARG);
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x58)));
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x50))),uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0x80000000;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return uVar2;
}

/* ref: FUN_00da98b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da98b0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda98b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00da98c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da98c0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda98c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: Global::Fill32 */
GEN_LIB GEN_FRAME unsigned int F_00da98f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda98f0u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: hkArray::PushBackWithAllocator */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da9920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xda9920u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: FUN_00da9960 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da9960(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda9960u, gen_a0, gen_a1, 0u, 0u);
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
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  in_ecx[4] = param_2[4];
  in_ecx[5] = uVar1;
  in_ecx[6] = uVar2;
  in_ecx[7] = uVar3;
  uVar1 = param_2[9];
  uVar2 = param_2[10];
  uVar3 = param_2[0xb];
  in_ecx[8] = param_2[8];
  in_ecx[9] = uVar1;
  in_ecx[10] = uVar2;
  in_ecx[0xb] = uVar3;
  uVar1 = param_2[0xd];
  uVar2 = param_2[0xe];
  uVar3 = param_2[0xf];
  in_ecx[0xc] = param_2[0xc];
  in_ecx[0xd] = uVar1;
  in_ecx[0xe] = uVar2;
  in_ecx[0xf] = uVar3;
  return (uint)in_ecx;
}

/* ref: hkVector4::DistanceToSquared */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da9990(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda9990u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = (*in_ecx - *param_3) * (*in_ecx - *param_3);
  fVar2 = (in_ecx[1] - param_3[1]) * (in_ecx[1] - param_3[1]);
  fVar3 = (in_ecx[2] - param_3[2]) * (in_ecx[2] - param_3[2]);
  *param_2 = (fVar2 + fVar1) + fVar3;
  param_2[1] = (fVar2 + fVar1) + fVar3;
  param_2[2] = (fVar2 + fVar1) + fVar3;
  param_2[3] = (fVar2 + fVar1) + fVar3;
  return (uint)param_2;
}

/* ref: hkVector4::DistanceTo */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00da99d0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda99d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar9 [16];
  float fVar10;
  float fVar11;
  float fVar12;
  
  fVar1 = (*in_ecx - *param_3) * (*in_ecx - *param_3);
  fVar2 = (in_ecx[1] - param_3[1]) * (in_ecx[1] - param_3[1]);
  fVar3 = (in_ecx[2] - param_3[2]) * (in_ecx[2] - param_3[2]);
  fVar4 = (fVar2 + fVar1) + fVar3;
  fVar5 = (fVar2 + fVar1) + fVar3;
  fVar6 = (fVar2 + fVar1) + fVar3;
  fVar3 = (fVar2 + fVar1) + fVar3;
  (*(undefined4 *)((char *)&auVar9 + 4)) = (undefined4)gen_fl2bits(fVar5);
  (*(undefined4 *)((char *)&auVar9 + 0)) = (undefined4)gen_fl2bits(fVar4);
  (*(undefined4 *)((char *)&auVar9 + 8)) = (undefined4)gen_fl2bits(fVar6);
  (*(undefined4 *)((char *)&auVar9 + 12)) = (undefined4)gen_fl2bits(fVar3);
  gen_rsqrtps(&(auVar9), &(in_XMM3), &(auVar9));
  fVar8 = (*(float *)((char *)&auVar9 + 0));
  fVar10 = (*(float *)((char *)&auVar9 + 4));
  fVar11 = (*(float *)((char *)&auVar9 + 8));
  fVar12 = (*(float *)((char *)&auVar9 + 12));
  fVar1 = *(float *)&REFG(undefined, 0x113c464) - (fVar10 * fVar5) * fVar10;
  fVar2 = *(float *)&REFG(undefined, 0x113c468) - (fVar11 * fVar6) * fVar11;
  fVar7 = *(float *)&REFG(undefined, 0x113c46c) - (fVar12 * fVar3) * fVar12;
  fVar10 = *(float *)&REFG(undefined, 0x113c474) * fVar10;
  fVar11 = *(float *)&REFG(undefined, 0x113c478) * fVar11;
  fVar12 = *(float *)&REFG(undefined, 0x113c47c) * fVar12;
  *param_2 = ~-(uint)(fVar4 <= 0.0) &
             (uint)gen_fl2bits(((*(float *)&REFG(undefined, 0x113c460) - (fVar8 * fVar4) * fVar8) *
                               (*(float *)&REFG(undefined, 0x113c470) * fVar8)) * fVar4);
  param_2[1] = ~-(uint)(fVar5 <= 0.0) & (uint)gen_fl2bits((fVar1 * fVar10) * fVar5);
  param_2[2] = ~-(uint)(fVar6 <= 0.0) & (uint)gen_fl2bits((fVar2 * fVar11) * fVar6);
  param_2[3] = ~-(uint)(fVar3 <= 0.0) & (uint)gen_fl2bits((fVar7 * fVar12) * fVar3);
  return 0;
}

/* ref: FUN_00da9a70 */
GEN_LIB GEN_FRAME uint F_00da9a70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda9a70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: hkMonitorStreamAnalyzer::Node::SumValues */
GEN_LIB GEN_FRAME float10 GEN_THISCALL F_00da9a80(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda9a80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  float * pfVar1;
  int iVar2;
  float fVar3;
  
  fVar3 = 0.0;
  pfVar1 = ((float *)GEN_TOP((in_ecx + 8)));
  iVar2 = 2;
  do {
    fVar3 = (((((fVar3 + pfVar1[-2]) + pfVar1[-1]) + *pfVar1) + pfVar1[1]) + pfVar1[2]) + pfVar1[3];
    pfVar1 = pfVar1 + 6;
    iVar2 = iVar2 - 1;
  } while (iVar2 != 0);
  return (float10)fVar3;
}

/* ref: FUN_00da9ad0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da9ad0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda9ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  F_00d91340(in_ecx + 8 GEN_EDX_FWD);
  return in_ecx;
}

/* ref: FUN_00da9ae0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00da9ae0(GEN_P(uint in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda9ae0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint in_ecx = (uint)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_00d91350(in_ecx + 8 GEN_EDX_FWD,param_2);
  return in_ecx;
}

/* ref: hkMonitorStreamAnalyzer::Node::AccumulateNodeValues */
GEN_LIB GEN_FRAME unsigned int F_00da9b00(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xda9b00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  short * psVar1;
  float * pfVar2;
  short * psVar3;
  float * pfVar4;
  int local_8;
  
  pfVar4 = ((float *)GEN_TOP((in_eax + 0xc)));
  psVar3 = ((short *)GEN_TOP((in_eax + 0x34)));
  pfVar2 = ((float *)GEN_TOP((param_2 + 4)));
  psVar1 = ((short *)GEN_TOP((param_2 + 0x30)));
  local_8 = 2;
  do {
    pfVar2[-1] = pfVar4[-3] + pfVar2[-1];
    *psVar1 = *psVar1 + *((short *)GEN_TOP(((in_eax - param_2) + (int)psVar1)));
    *pfVar2 = *((float *)GEN_TOP(((in_eax - param_2) + (int)pfVar2))) + *pfVar2;
    psVar1[1] = psVar1[1] + psVar3[-1];
    pfVar2[1] = pfVar4[-1] + pfVar2[1];
    psVar1[2] = psVar1[2] + *psVar3;
    pfVar2[2] = pfVar2[2] + *pfVar4;
    psVar1[3] = psVar1[3] + psVar3[1];
    pfVar2[3] = pfVar4[1] + pfVar2[3];
    psVar1[4] = psVar1[4] + psVar3[2];
    pfVar2[4] = pfVar4[2] + pfVar2[4];
    psVar1[5] = psVar1[5] + psVar3[3];
    psVar1 = psVar1 + 6;
    psVar3 = psVar3 + 6;
    pfVar2 = pfVar2 + 6;
    pfVar4 = pfVar4 + 6;
    local_8 = local_8 - 1;
  } while (local_8 != 0);
  return 0;
}

/* ref: hkMonitorStreamAnalyzer::PrintNodeLine */
GEN_LIB GEN_FRAME uint F_00da9bd0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda9bd0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_FRAME_DECL_TOP(0x104, 12, 4);
  ushort uVar1;
  uint uVar2;
  ushort * puVar3;
  int iVar4;
  short * psVar5;
  double dVar6;
  
  uVar2 = 0;
  puVar3 = ((ushort *)GEN_TOP((param_3 + 0x32)));
  iVar4 = 2;
  do {
    uVar1 = puVar3[-1];
    if ((uVar1 != 0) && (uVar2 < uVar1)) {
      uVar2 = (uint)uVar1;
    }
    uVar1 = *puVar3;
    if ((uVar1 != 0) && (uVar2 < uVar1)) {
      uVar2 = (uint)uVar1;
    }
    uVar1 = puVar3[1];
    if ((uVar1 != 0) && (uVar2 < uVar1)) {
      uVar2 = (uint)uVar1;
    }
    uVar1 = puVar3[2];
    if ((uVar1 != 0) && (uVar2 < uVar1)) {
      uVar2 = (uint)uVar1;
    }
    uVar1 = puVar3[3];
    if ((uVar1 != 0) && (uVar2 < uVar1)) {
      uVar2 = (uint)uVar1;
    }
    uVar1 = puVar3[4];
    if ((uVar1 != 0) && (uVar2 < uVar1)) {
      uVar2 = (uint)uVar1;
    }
    puVar3 = puVar3 + 6;
    iVar4 = iVar4 - 1;
  } while (iVar4 != 0);
  if (*(float *)&REFG(undefined, 0x1088114) < param_2) {
    dVar6 = ((double)GEN_TOD(((*((float *)GEN_TOP((param_3 + 4))) * REFG(float, 0x10916ec)) / param_2)));
    F_00da0ce0(((undefined1 *)(gen_frame + 0x0)),200,((char *)REFP(0x113c4a8)),*((undefined4 *)GEN_TOP((param_3 + 100))),uVar2,
                       (int)(ulonglong)gen_d2bits(dVar6),(int)((ulonglong)gen_d2bits(dVar6) >> 0x20)
                      );
  }
  else {
    F_00da0ce0(((undefined1 *)(gen_frame + 0x0)),200,((char *)REFP(0x113c4a0)),*((undefined4 *)GEN_TOP((param_3 + 100))),uVar2);
  }
  F_00da00e0(param_1,((char *)REFP(0x113c494)),((undefined1 *)(gen_frame + 0x0)),&REFG(undefined, 0x113c49c));
  iVar4 = 0;
  psVar5 = ((short *)GEN_TOP((param_3 + 0x30)));
  do {
    if (*psVar5 != 0) {
      dVar6 = (double)*((float *)GEN_TOP((param_3 + iVar4 * 4)));
      F_00da00e0(param_1,((char *)REFP(0x113c488)),(int)(ulonglong)gen_d2bits(dVar6),
                        (int)((ulonglong)gen_d2bits(dVar6) >> 0x20));
    }
    iVar4 = iVar4 + 1;
    psVar5 = psVar5 + 1;
  } while (iVar4 < 0xc);
  uVar2 = F_00da00e0(param_1,&REFG(undefined, 0x1080294));
  return uVar2;
}

/* ref: hkMonitorStreamAnalyzer::WriteTga */
GEN_LIB GEN_FRAME byte F_00da9d20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xda9d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  
  F_00da1030(((undefined1 *)(gen_frame + 0x0)),0,0x12);
  (*(undefined1 *)(gen_frame + 0x2)) = 2;
  (*(undefined2 *)(gen_frame + 0xe)) = (short)param_4;
  (*(undefined2 *)(gen_frame + 0xc)) = (short)param_3;
  (*(undefined1 *)(gen_frame + 0x10)) = 0x20;
  F_00da0140(param_2 GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x12);
  F_00da0140(param_2 GEN_EDX_ARG,param_1,param_3 * param_4 * 4);
  return 1;
}

/* ref: hkMonitorStreamAnalyzer::DrawDigit */
GEN_LIB GEN_FRAME unsigned int F_00da9d80(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int in_ecx, unsigned int gen_a1), GEN_P(int in_esi, unsigned int gen_a2))
{
  GEN_ENTER(0xda9d80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int in_ecx = (int)gen_a1;)
  GEN_PIN(int in_esi = (int)gen_a2;)
  int * piVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  undefined4 * local_8;
  
  piVar1 = ((int *)GEN_TOP((&REFG(undefined * PTR32, 0x13526b8))[(int)(in_ecx)]));
  local_8 = ((undefined4 *)GEN_TOP((in_esi + in_eax * 4)));
  iVar4 = 0;
  iVar3 = 0;
  do {
    bVar2 = (byte)iVar3;
    if ((piVar1[6] << GEN_SHC(bVar2, bVar2) & 0xf0000000U) != 0) {
      *((undefined4 *)GEN_TOP((iVar3 + in_esi))) = 0xff000000;
    }
    if ((piVar1[5] << GEN_SHC(bVar2, bVar2) & 0xf0000000U) != 0) {
      *local_8 = 0xff000000;
    }
    if ((piVar1[4] << GEN_SHC(bVar2, bVar2) & 0xf0000000U) != 0) {
      *((undefined4 *)GEN_TOP((in_esi + (iVar4 + in_eax * 2) * 4))) = 0xff000000;
    }
    if ((piVar1[3] << GEN_SHC(bVar2, bVar2) & 0xf0000000U) != 0) {
      *((undefined4 *)GEN_TOP((in_esi + (iVar4 + in_eax * 3) * 4))) = 0xff000000;
    }
    if ((piVar1[2] << GEN_SHC(bVar2, bVar2) & 0xf0000000U) != 0) {
      *((undefined4 *)GEN_TOP((in_esi + (iVar4 + in_eax * 4) * 4))) = 0xff000000;
    }
    if ((piVar1[1] << GEN_SHC(bVar2, bVar2) & 0xf0000000U) != 0) {
      *((undefined4 *)GEN_TOP((in_esi + (iVar4 + in_eax * 5) * 4))) = 0xff000000;
    }
    if ((*piVar1 << GEN_SHC(bVar2, bVar2) & 0xf0000000U) != 0) {
      *((undefined4 *)GEN_TOP((in_esi + (iVar4 + in_eax * 6) * 4))) = 0xff000000;
    }
    local_8 = local_8 + 1;
    iVar3 = iVar3 + 4;
    iVar4 = iVar4 + 1;
  } while (iVar3 < 0x20);
  return 0;
}

/* ref: hkMonitorStreamAnalyzer::DrawNumber */
GEN_LIB GEN_FRAME int F_00da9e60(GEN_P(int in_eax, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xda9e60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_eax = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  int iVar1;
  int iVar2;
  
  iVar2 = 1000;
  do {
    F_00da9d80(param_3,(param_2 / iVar2) % 10,in_eax);
    iVar1 = iVar2 * 0x66666667;
    iVar2 = iVar2 / 10;
    in_eax = in_eax + 0x1c;
  } while (0 < iVar2);
  return iVar1;
}

/* ref: FUN_00da9ef0 */
GEN_LIB GEN_FRAME uint F_00da9ef0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(int param_4, unsigned int gen_a3), GEN_P(int param_5, unsigned int gen_a4))
{
  GEN_ENTER(0xda9ef0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(int param_4 = (int)gen_a3;)
  GEN_PIN(int param_5 = (int)gen_a4;)
  return (param_1 / param_2 - param_4) / param_3 - param_5;
}

/* ref: FUN_00da9f50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00da9f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xda9f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  
  F_00d91480(this GEN_EDX_FWD,((char *)REFP(0x113c4b8)));
  uVar1 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 1;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = uVar1;
  return (uint)this;
}

/* ref: hkMonitorStreamAnalyzer::ApplyStringMap */
GEN_LIB GEN_FRAME unsigned int F_00da9f90(GEN_P(uint * param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xda9f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_FRAME_DECL_TOP(0x2c, 4, 4);
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  uint * puVar5;
  uint * puVar6;
  
  puVar5 = param_1;
  if (param_1 < param_2) {
    do {
      uVar1 = *puVar5;
      if (param_4 == '\0') {
        if (uVar1 < 0x15) goto switchD_00daa00e_caseD_46;
LAB_00da9fe7: ;
        uVar1 = F_00dbd9c0(param_3 GEN_EDX_ARG,uVar1,&(*(undefined1 * PTR32 *)(gen_frame + 0x8)));
        if (uVar1 != 0) break;
        *puVar5 = (uint)(*(undefined1 * PTR32 *)(gen_frame + 0x8));
        switch((unsigned int)(uintptr_t)(*(*(undefined1 * PTR32 *)(gen_frame + 0x8)))) {
        case 0x45: ;
        case 0x53: ;
        case 0x54: ;
        case 0x6c: ;
          puVar6 = puVar5 + 3;
          if (param_4 != '\0') {
            uVar1 = puVar5[1];
            uVar2 = (undefined1)(uVar1 >> 0x18);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 0)) = uVar2;
            uVar3 = (undefined1)(uVar1 >> 0x10);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 1)) = uVar3;
            uVar4 = (undefined1)(uVar1 >> 8);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 2)) = uVar4;
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x24)) + 3)) = (char)uVar1;
            (*(uint *)(gen_frame + 0x24)) = CONCAT13((char)uVar1,CONCAT12(uVar4,CONCAT11(uVar3,uVar2)));
            puVar5[1] = (*(uint *)(gen_frame + 0x24));
            uVar1 = puVar5[2];
            uVar2 = (undefined1)(uVar1 >> 0x18);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 0)) = uVar2;
            uVar3 = (undefined1)(uVar1 >> 0x10);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 1)) = uVar3;
            uVar4 = (undefined1)(uVar1 >> 8);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 2)) = uVar4;
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x20)) + 3)) = (char)uVar1;
            (*(uint *)(gen_frame + 0x20)) = CONCAT13((char)uVar1,CONCAT12(uVar4,CONCAT11(uVar3,uVar2)));
            puVar5[2] = (*(uint *)(gen_frame + 0x20));
          }
          break;
        case 0x46: ;
        case 0x4e: ;
        case 0x50: ;
        case 0x70: ;
          goto switchD_00daa00e_caseD_46;
        default: ;
          goto switchD_00daa00e_caseD_47;
        case 0x4c: ;
          puVar6 = puVar5 + 4;
          uVar1 = F_00dbd9c0(param_3 GEN_EDX_ARG,puVar5[3],&(*(uint *)(gen_frame + 0x0)));
          if (uVar1 == 0) {
            puVar5[3] = (*(uint *)(gen_frame + 0x0));
          }
          if (param_4 != '\0') {
            uVar1 = puVar5[1];
            uVar2 = (undefined1)(uVar1 >> 0x18);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = uVar2;
            uVar3 = (undefined1)(uVar1 >> 8);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 2)) = uVar3;
            uVar4 = (undefined1)(uVar1 >> 0x10);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 1)) = uVar4;
            (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 0)) = CONCAT11(uVar4,uVar2);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x14)) + 3)) = (char)uVar1;
            (*(uint *)(gen_frame + 0x14)) = CONCAT13((char)uVar1,CONCAT12(uVar3,(undefined2)(*(uint *)(gen_frame + 0x14))));
            puVar5[1] = (*(uint *)(gen_frame + 0x14));
            uVar1 = puVar5[2];
            uVar2 = (undefined1)(uVar1 >> 0x18);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 0)) = uVar2;
            uVar4 = (undefined1)(uVar1 >> 0x10);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 1)) = uVar4;
            uVar3 = (undefined1)(uVar1 >> 8);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 2)) = uVar3;
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x10)) + 3)) = (char)uVar1;
            (*(uint *)(gen_frame + 0x10)) = CONCAT13((char)uVar1,CONCAT12(uVar3,CONCAT11(uVar4,uVar2)));
            puVar5[2] = (*(uint *)(gen_frame + 0x10));
          }
          break;
        case 0x4d: ;
          puVar6 = puVar5 + 2;
          if (param_4 != '\0') {
            uVar1 = puVar5[1];
            uVar2 = (undefined1)(uVar1 >> 0x18);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 0)) = uVar2;
            uVar3 = (undefined1)(uVar1 >> 0x10);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 1)) = uVar3;
            uVar4 = (undefined1)(uVar1 >> 8);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 2)) = uVar4;
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0xc)) + 3)) = (char)uVar1;
            (*(uint *)(gen_frame + 0xc)) = CONCAT13((char)uVar1,CONCAT12(uVar4,CONCAT11(uVar3,uVar2)));
            puVar5[1] = (*(uint *)(gen_frame + 0xc));
          }
          break;
        case 0x4f: ;
          puVar6 = puVar5 + 4;
          uVar1 = F_00dbd9c0(param_3 GEN_EDX_ARG,puVar5[3],&(*(uint *)(gen_frame + 0x4)));
          if (uVar1 == 0) {
            puVar5[3] = (*(uint *)(gen_frame + 0x4));
          }
          if (param_4 != '\0') {
            uVar1 = puVar5[1];
            uVar2 = (undefined1)(uVar1 >> 0x18);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 0)) = uVar2;
            uVar3 = (undefined1)(uVar1 >> 8);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 2)) = uVar3;
            uVar4 = (undefined1)(uVar1 >> 0x10);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 1)) = uVar4;
            (*(undefined2 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 0)) = CONCAT11(uVar4,uVar2);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x1c)) + 3)) = (char)uVar1;
            (*(uint *)(gen_frame + 0x1c)) = CONCAT13((char)uVar1,CONCAT12(uVar3,(undefined2)(*(uint *)(gen_frame + 0x1c))));
            puVar5[1] = (*(uint *)(gen_frame + 0x1c));
            uVar1 = puVar5[2];
            uVar2 = (undefined1)(uVar1 >> 0x18);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 0)) = uVar2;
            uVar4 = (undefined1)(uVar1 >> 0x10);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 1)) = uVar4;
            uVar3 = (undefined1)(uVar1 >> 8);
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 2)) = uVar3;
            (*(undefined1 *)((char *)&(*(uint *)(gen_frame + 0x18)) + 3)) = (char)uVar1;
            (*(uint *)(gen_frame + 0x18)) = CONCAT13((char)uVar1,CONCAT12(uVar3,CONCAT11(uVar4,uVar2)));
            puVar5[2] = (*(uint *)(gen_frame + 0x18));
          }
        }
      }
      else {
        param_1 = ((uint *)GEN_TOP(CONCAT13((char)uVar1,
                                   CONCAT12((char)(uVar1 >> 8),
                                            CONCAT11((char)(uVar1 >> 0x10),(char)(uVar1 >> 0x18))))));
        if (0x14 < param_1) goto LAB_00da9fe7;
        *puVar5 = (uint)param_1;
switchD_00daa00e_caseD_46: ;
        puVar6 = puVar5 + 1;
      }
      puVar5 = puVar6;
    } while (puVar6 < param_2);
switchD_00daa00e_caseD_47: ;
  }
  return;
}

/* ref: hkMonitorStreamAnalyzer::Node::SetTimers */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00daa1f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdaa1f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  short * psVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  double dVar7;
  int iVar8;
  float10 fVar9;
  
  uVar3 = *((uint *)GEN_TOP((param_1 + 4)));
  if (uVar3 < 0xc) {
    uVar4 = *((uint *)GEN_TOP((param_3 + 4)));
    uVar5 = *((uint *)GEN_TOP((param_2 + 4)));
    if (uVar4 < uVar5) {
      iVar8 = (uVar4 - uVar5) - 1;
    }
    else {
      iVar8 = uVar4 - uVar5;
    }
    fVar9 = (float10)iVar8;
    if (iVar8 < 0) {
      fVar9 = GEN_X87(fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    *((float *)GEN_TOP(((int)this + uVar3 * 4))) =
         ((float)GEN_TOF((fVar9 * (float10)*((float *)GEN_TOP((param_1 + 0x10))) +
                (float10)*((float *)GEN_TOP(((int)this + uVar3 * 4))))));
    psVar1 = ((short *)GEN_TOP(((int)this + uVar3 * 2 + 0x30)));
    *psVar1 = *psVar1 + 1;
  }
  uVar3 = *((uint *)GEN_TOP((param_1 + 8)));
  if (uVar3 < 0xc) {
    if (*((uint *)GEN_TOP((param_3 + 4))) < *((uint *)GEN_TOP((param_2 + 4)))) {
      iVar8 = (*((int *)GEN_TOP((param_3 + 8))) - *((int *)GEN_TOP((param_2 + 8)))) - 1;
    }
    else {
      iVar8 = *((int *)GEN_TOP((param_3 + 8))) - *((int *)GEN_TOP((param_2 + 8)));
    }
    fVar9 = (float10)iVar8;
    if (iVar8 < 0) {
      fVar9 = GEN_X87(fVar9 + (float10)*(float *)&REFG(undefined, 0x1088110));
    }
    *((float *)GEN_TOP(((int)this + uVar3 * 4))) =
         ((float)GEN_TOF((fVar9 * (float10)*((float *)GEN_TOP((param_1 + 0x14))) +
                (float10)*((float *)GEN_TOP(((int)this + uVar3 * 4))))));
    psVar1 = ((short *)GEN_TOP(((int)this + uVar3 * 2 + 0x30)));
    *psVar1 = *psVar1 + 1;
  }
  if (*((int *)GEN_TOP((param_1 + 0xc))) == 0) {
    iVar6 = *((int *)GEN_TOP((param_2 + 4)));
    fVar2 = *((float *)GEN_TOP((param_1 + 0x10)));
    iVar8 = *((int *)GEN_TOP((param_2 + 4)));
  }
  else {
    if (*((int *)GEN_TOP((param_1 + 0xc))) != 1) {
      return 0;
    }
    iVar6 = *((int *)GEN_TOP((param_2 + 8)));
    fVar2 = *((float *)GEN_TOP((param_1 + 0x14)));
    iVar8 = *((int *)GEN_TOP((param_2 + 8)));
  }
  dVar7 = (double)iVar8;
  if (iVar6 < 0) {
    dVar7 = GEN_X87(dVar7 + *(double *)&REFG(double, 0x10b8de8));
  }
  *((double *)GEN_TOP(((int)this + 0x58))) = dVar7 * (double)fVar2;
  return 0;
}

/* ref: hkMonitorStreamAnalyzer::Node::FindChildIndexByName */
GEN_LIB GEN_FRAME byte F_00daa2c0(GEN_P(int in_edi, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(int * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdaa2c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_edi = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a2;)
  uint uVar1;
  int iVar2;
  
  if ((*param_3 < *((int *)GEN_TOP((in_edi + 0x4c)))) &&
     (uVar1 = F_00da0d20(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((in_edi + 0x48))) + *param_3 * 4))) + 100))),param_2),
     uVar1 == 0)) {
    return 1;
  }
  iVar2 = 0;
  if (0 < *((int *)GEN_TOP((in_edi + 0x4c)))) {
    do {
      uVar1 = F_00da0d20(*((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((in_edi + 0x48))) + iVar2 * 4))) + 100))),
                               param_2);
      if (uVar1 == 0) {
        *param_3 = iVar2;
        return 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *((int *)GEN_TOP((in_edi + 0x4c))));
  }
  return 0;
}

