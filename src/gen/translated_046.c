#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: Global::UnlinkFromGlobalListB */
GEN_OWN GEN_FRAME unsigned int F_006661a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6661a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0x28)));
  iVar2 = *((int *)GEN_TOP((param_1 + 0x2c)));
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *((int *)GEN_TOP((iVar1 + 0x2c))) = iVar2;
    iVar3 = *(int *)&REFG(undefined, 0x1487c74);
  }
  *(int *)&REFG(undefined, 0x1487c74) = iVar3;
  if (iVar2 == 0) {
    REFG(int, 0x1487c78) = iVar1;
    return 0;
  }
  *((int *)GEN_TOP((iVar2 + 0x28))) = iVar1;
  return 0;
}

/* ref: FUN_006661d0 */
GEN_OWN GEN_FRAME unsigned int F_006661d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6661d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 0x28)));
  iVar2 = *((int *)GEN_TOP((param_1 + 0x2c)));
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *((int *)GEN_TOP((iVar1 + 0x2c))) = iVar2;
    iVar3 = *(int *)&REFG(undefined, 0x1487c7c);
  }
  *(int *)&REFG(undefined, 0x1487c7c) = iVar3;
  if (iVar2 == 0) {
    REFG(int, 0x1487c80) = iVar1;
    return 0;
  }
  *((int *)GEN_TOP((iVar2 + 0x28))) = iVar1;
  return 0;
}

/* ref: Global::UnlinkFromGlobalList */
GEN_OWN GEN_FRAME unsigned int F_00666200(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x666200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *((int *)GEN_TOP((param_1 + 8)));
  iVar2 = *((int *)GEN_TOP((param_1 + 0xc)));
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *((int *)GEN_TOP((iVar1 + 0xc))) = iVar2;
    iVar3 = *(int *)&REFG(undefined, 0x1487c84);
  }
  *(int *)&REFG(undefined, 0x1487c84) = iVar3;
  if (iVar2 == 0) {
    REFG(int, 0x1487c88) = iVar1;
    return 0;
  }
  *((int *)GEN_TOP((iVar2 + 8))) = iVar1;
  return 0;
}

/* ref: Global::ContainsAddress_00666230 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00666230(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x666230u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00666260 */
GEN_OWN GEN_FRAME uint F_00666260(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x666260u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00666270 */
GEN_OWN GEN_FRAME uint F_00666270(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x666270u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00666280 */
GEN_OWN GEN_FRAME gen_r16 F_00666280(GEN_P(gen_v16 * __return_storage_ptr__, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x666280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(gen_v16 * __return_storage_ptr__ = (gen_v16 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  undefined1 gen_rv16 [16];
  undefined1 auVar1 [16];
  float fVar2;
  float fVar4;
  float fVar5;
  undefined1 in_XMM2 [16] = {0};
  undefined1 auVar3 [16];
  float fVar6;
  
  memcpy(&(auVar1), &(*__return_storage_ptr__), sizeof(*__return_storage_ptr__) < sizeof(auVar1) ? sizeof(*__return_storage_ptr__) : sizeof(auVar1));
  gen_rsqrtps(&(auVar3), &(in_XMM2), &(auVar1));
  fVar2 = (*(float *)((char *)&auVar3 + 0));
  fVar4 = (*(float *)((char *)&auVar3 + 4));
  fVar5 = (*(float *)((char *)&auVar3 + 8));
  fVar6 = (*(float *)((char *)&auVar3 + 12));
  (*(undefined4 *)((char *)&auVar3 + 4)) = (undefined4)
                 gen_fl2bits((*(float *)&REFG(undefined, 0x10ab964) - ((*(float *)((char *)&auVar1 + 4)) * fVar4) * fVar4) *
                             (*(float *)&REFG(undefined, 0x10ab974) * fVar4));
  (*(undefined4 *)((char *)&auVar3 + 0)) = (undefined4)
                 gen_fl2bits((*(float *)&REFG(undefined, 0x10ab960) - ((*(float *)((char *)&auVar1 + 0)) * fVar2) * fVar2) *
                             (*(float *)&REFG(undefined, 0x10ab970) * fVar2));
  (*(undefined4 *)((char *)&auVar3 + 8)) = (undefined4)
                 gen_fl2bits((*(float *)&REFG(undefined, 0x10ab968) - ((*(float *)((char *)&auVar1 + 8)) * fVar5) * fVar5) *
                             (*(float *)&REFG(undefined, 0x10ab978) * fVar5));
  (*(undefined4 *)((char *)&auVar3 + 12)) =
       (undefined4)
       gen_fl2bits((*(float *)&REFG(undefined, 0x10ab96c) - ((*(float *)((char *)&auVar1 + 12)) * fVar6) * fVar6) *
                   (*(float *)&REFG(undefined, 0x10ab97c) * fVar6));
  memcpy(&(gen_rv16), &(auVar3), sizeof(auVar3) < sizeof(gen_rv16) ? sizeof(auVar3) : sizeof(gen_rv16));
  return GEN_R16(gen_rv16);
}

/* ref: FUN_006662b0 */
GEN_OWN GEN_FRAME uint F_006662b0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6662b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::PairConstruct_006662c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006662c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6662c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_006662e0 */
GEN_OWN GEN_FRAME uint F_006662e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6662e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006662f0 */
GEN_OWN GEN_FRAME uint F_006662f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6662f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::PairConstruct_00666300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00666300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x666300u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined2 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2[1];
  return (uint)this;
}

/* ref: FUN_00666320 */
GEN_OWN GEN_FRAME uint F_00666320(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x666320u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::PushHeapByFloatKey */
GEN_OWN GEN_FRAME uint F_00666370(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(uint * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x666370u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(uint * param_4 = (uint *)(uintptr_t)gen_a3;)
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  while ((param_3 < iVar2 &&
         (iVar3 = (iVar2 - 1) / 2,
         (float10)*((float *)GEN_TOP((param_1 + 4 + iVar3 * 8))) < ((float10)GEN_TOD(gen_bits2f(param_4[1])))))) {
    *((undefined4 *)GEN_TOP((param_1 + iVar2 * 8))) = *((undefined4 *)GEN_TOP((param_1 + iVar3 * 8)));
    *((undefined4 *)GEN_TOP((param_1 + 4 + iVar2 * 8))) = *((undefined4 *)GEN_TOP((param_1 + 4 + iVar3 * 8)));
    iVar2 = iVar3;
  }
  uVar1 = *param_4;
  *((uint *)GEN_TOP((param_1 + iVar2 * 8))) = uVar1;
  *((uint *)GEN_TOP((param_1 + 4 + iVar2 * 8))) = param_4[1];
  return uVar1;
}

/* ref: FUN_006663e0 */
GEN_OWN GEN_FRAME uint F_006663e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6663e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_006663f0 */
GEN_OWN GEN_FRAME uint F_006663f0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6663f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00666400 */
GEN_OWN GEN_FRAME uint F_00666400(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x666400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00666410 */
GEN_OWN GEN_FRAME uint F_00666410(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x666410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::AllocateArray32_00666450 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00666450(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x666450u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 << 5,0xd8);
  return (uint)uVar1;
}

/* ref: Global::AllocateArray4 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00666480(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x666480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd3);
  return (uint)uVar1;
}

/* ref: Global::AllocateArray20 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006664c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6664c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,0xd3);
  return (uint)uVar1;
}

/* ref: FUN_00666500 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00666500(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x666500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 8,0xd3);
  return (uint)uVar1;
}

/* ref: FUN_00666550 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00666550(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x666550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x1c,0xd2);
  return (uint)uVar1;
}

/* ref: FUN_00666590 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00666590(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x666590u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd2);
  return (uint)uVar1;
}

/* ref: FUN_006665c0 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_006665c0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6665c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 << 5,param_2,0xd8);
  return uVar1;
}

/* ref: FUN_00666600 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00666600(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x666600u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,200);
  return (uint)uVar1;
}

/* ref: Global::TreeIteratorConstruct */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00666630(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x666630u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::IteratorEquals_00666640 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00666640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x666640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: Global::IteratorNotEquals_00666660 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00666660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x666660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: Global::IteratorEqualsB */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00666680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x666680u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: Global::IteratorNotEqualsB */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006666a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6666a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: Global::TreeNodeColor_006666c0 */
GEN_OWN GEN_FRAME uint F_006666c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6666c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x10;
}

/* ref: Global::TreeNodeIsNil_006666d0 */
GEN_OWN GEN_FRAME uint F_006666d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6666d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x11;
}

/* ref: Global::TreeNodeLeft_006666e0 */
GEN_OWN GEN_FRAME uint F_006666e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6666e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::TreeNodeParent_006666f0 */
GEN_OWN GEN_FRAME uint F_006666f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6666f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: Global::TreeNodeRight_00666700 */
GEN_OWN GEN_FRAME uint F_00666700(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x666700u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: Global::TreeNodeValue_00666710 */
GEN_OWN GEN_FRAME uint F_00666710(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x666710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: Global::TreeMax_00666720 */
GEN_OWN GEN_FRAME uint F_00666720(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x666720u, gen_a0, 0u, 0u, 0u);
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

/* ref: Global::TreeMin_00666740 */
GEN_OWN GEN_FRAME uint F_00666740(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x666740u, gen_a0, 0u, 0u, 0u);
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

/* ref: Global::TreeNodeColorB */
GEN_OWN GEN_FRAME uint F_00666760(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x666760u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x18;
}

/* ref: Global::TreeNodeIsNilB */
GEN_OWN GEN_FRAME uint F_00666770(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x666770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0x19;
}

/* ref: Global::TreeNodeLeftB */
GEN_OWN GEN_FRAME uint F_00666780(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x666780u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::TreeNodeParentB */
GEN_OWN GEN_FRAME uint F_00666790(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x666790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 4;
}

/* ref: Global::TreeNodeRightB */
GEN_OWN GEN_FRAME uint F_006667a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6667a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 8;
}

/* ref: Global::TreeNodeValueB_006667b0 */
GEN_OWN GEN_FRAME uint F_006667b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6667b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: Global::TreeMaxB */
GEN_OWN GEN_FRAME uint F_006667c0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6667c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*((uint *)GEN_TOP((param_1 + 8))) + 0x19)));
  uVar2 = *((uint *)GEN_TOP((param_1 + 8)));
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *((uint *)GEN_TOP((uVar3 + 8)));
    cVar1 = *((char *)GEN_TOP((uVar2 + 0x19)));
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: Global::TreeMinB */
GEN_OWN GEN_FRAME uint F_006667e0(GEN_P(int * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6667e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *((char *)GEN_TOP((*param_1 + 0x19)));
  piVar2 = ((int *)GEN_TOP(*param_1));
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = ((int *)GEN_TOP(*piVar3));
    cVar1 = *((char *)GEN_TOP(((int)piVar2 + 0x19)));
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: Global::TreeIteratorConstructB */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00666810(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x666810u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::TreeIteratorIncrement_00666840 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00666840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x666840u, gen_a0, 0u, 0u, 0u);
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

/* ref: Global::TreeIteratorConstructC */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00666890(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x666890u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::TreeIteratorIncrementB */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_006668a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6668a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*((char *)GEN_TOP((iVar2 + 0x19))) == '\0') {
    piVar3 = *((int * PTR32 *)GEN_TOP((iVar2 + 8)));
    if (*((char *)GEN_TOP(((int)piVar3 + 0x19))) == '\0') {
      cVar1 = *((char *)GEN_TOP((*piVar3 + 0x19)));
      piVar4 = ((int *)GEN_TOP(*piVar3));
      while (cVar1 == '\0') {
        cVar1 = *((char *)GEN_TOP((*piVar4 + 0x19)));
        piVar3 = piVar4;
        piVar4 = ((int *)GEN_TOP(*piVar4));
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
    cVar1 = *((char *)GEN_TOP((iVar2 + 0x19)));
    while ((cVar1 == '\0' && (*(int *)this == *((int *)GEN_TOP((iVar2 + 8)))))) {
      *(int *)this = iVar2;
      iVar2 = *((int *)GEN_TOP((iVar2 + 4)));
      cVar1 = *((char *)GEN_TOP((iVar2 + 0x19)));
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_006668f0 */
GEN_OWN GEN_FRAME uint F_006668f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6668f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 + param_1;
}

/* ref: FUN_00666910 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00666910(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x666910u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xc)));
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: Global::GetElement16 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00666960(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x666960u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 2;
}

/* ref: Global::GetElement48 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00666980(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x666980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x30 + *in_ecx;
}

/* ref: Global::GetElement48B */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006669a0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6669a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 * 0x30 + *in_ecx;
}

/* ref: Global::GetElement32 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006669d0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6669d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: Global::ExtractBits */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006669f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6669f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint uVar1;
  
  uVar1 = 0xffffffff;
  if (param_2 < 0x20) {
    uVar1 = (1 << GEN_SHC((byte)param_2, (unsigned int)(uintptr_t)param_2)) - 1;
  }
  return *(uint *)((int)(uintptr_t)this) >> GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1) & uVar1;
}

/* ref: Global::SetMaskFromBool_00666a30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00666a30(GEN_P(short * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x666a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(short * in_ecx = (short *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *in_ecx = ((ushort)param_2 - (ushort)param_2) - (ushort)(param_2 != 0);
  return (uint)in_ecx;
}

/* ref: Global::BitReferenceAssign */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00666a50(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x666a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  *((byte *)GEN_TOP(*param_1)) =
       ~('\x01' << GEN_SHC((byte)param_1[1], (byte)param_1[1])) & *((byte *)GEN_TOP(*param_1)) |
       (param_2 != '\0') << GEN_SHC((byte)param_1[1], (byte)param_1[1]);
  return (uint)param_1;
}

/* ref: FUN_00666a80 */
GEN_OWN GEN_FRAME uint F_00666a80(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x666a80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00666a90 */
GEN_OWN GEN_FRAME uint F_00666a90(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x666a90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00666aa0 */
GEN_OWN GEN_FRAME uint F_00666aa0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x666aa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00666ab0 */
GEN_OWN GEN_FRAME unsigned int GEN_STDCALL F_00666ab0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x666ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = param_2;
    puVar3 = param_1;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: FUN_00666af0 */
GEN_OWN GEN_FRAME uint F_00666af0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x666af0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00666b00 */
GEN_OWN GEN_FRAME uint F_00666b00(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x666b00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00666b10 */
GEN_OWN GEN_FRAME byte F_00666b10(void)
{
  GEN_ENTER(0x666b10u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00666b20 */
GEN_OWN GEN_FRAME byte F_00666b20(void)
{
  GEN_ENTER(0x666b20u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00666b40 */
GEN_OWN GEN_FRAME byte F_00666b40(void)
{
  GEN_ENTER(0x666b40u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00666b60 */
GEN_OWN GEN_FRAME byte F_00666b60(void)
{
  GEN_ENTER(0x666b60u, 0u, 0u, 0u, 0u);
  undefined4 unaff_ECX = 0;
  
  return (byte)((uint)unaff_ECX >> 0x18);
}

/* ref: FUN_00666b80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00666b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x666b80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  return (uint)this;
}

/* ref: FUN_00666ba0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00666ba0(GEN_P(gen_v16 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x666ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(gen_v16 * in_ecx = (gen_v16 *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  
  memcpy(&(auVar1), &(*in_ecx), sizeof(*in_ecx) < sizeof(auVar1) ? sizeof(*in_ecx) : sizeof(auVar1));
  gen_rsqrtps(&(auVar6), &(in_XMM1), &(auVar1));
  fVar5 = (*(float *)((char *)&auVar6 + 0));
  fVar2 = (*(float *)((char *)&auVar6 + 4));
  fVar3 = (*(float *)((char *)&auVar6 + 8));
  fVar4 = (*(float *)((char *)&auVar6 + 12));
  fVar7 = *(float *)&REFG(undefined, 0x10ab964) - ((*(float *)((char *)&auVar1 + 4)) * fVar2) * fVar2;
  fVar8 = *(float *)&REFG(undefined, 0x10ab968) - ((*(float *)((char *)&auVar1 + 8)) * fVar3) * fVar3;
  fVar9 = *(float *)&REFG(undefined, 0x10ab96c) - ((*(float *)((char *)&auVar1 + 12)) * fVar4) * fVar4;
  fVar2 = *(float *)&REFG(undefined, 0x10ab974) * fVar2;
  fVar3 = *(float *)&REFG(undefined, 0x10ab978) * fVar3;
  fVar4 = *(float *)&REFG(undefined, 0x10ab97c) * fVar4;
  *param_2 = (*(float *)&REFG(undefined, 0x10ab960) - ((*(float *)((char *)&auVar1 + 0)) * fVar5) * fVar5) *
             (*(float *)&REFG(undefined, 0x10ab970) * fVar5);
  param_2[1] = fVar7 * fVar2;
  param_2[2] = fVar8 * fVar3;
  param_2[3] = fVar9 * fVar4;
  return (uint)param_2;
}

/* ref: FUN_00666bd0 */
GEN_OWN GEN_FRAME uint F_00666bd0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x666bd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00666c10 */
GEN_OWN GEN_FRAME uint F_00666c10(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x666c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: FUN_00666c30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00666c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x666c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1[1];
  *((uint *)GEN_TOP(((int)this + 8))) = param_1[2] & 0xfffffff;
  return (uint)this;
}

/* ref: FUN_00666c60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00666c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x666c60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  return *((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xd4))) +
                 (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0xd8))) +
                        ((uint)(ushort)param_2 + (uint)(ushort)param_1 * 0x42) * 2))) * 4))) + 8 +
         *((int *)GEN_TOP(((int)this + 0xa8)));
}

/* ref: FUN_00666ca0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00666ca0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x666ca0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return (uint)(ushort)param_2 * 0x20 + *((int *)GEN_TOP((in_ecx + 0x100)));
}

/* ref: FUN_00666cd0 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00666cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x666cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x20, 0);
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_0065e920(((undefined1 *)(gen_frame + 0x0)),(uint)this)));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return (uint)param_1;
}

/* ref: Global::SetRotationEuler */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00666d70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x666d70u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = ((float10)GEN_TOD(fsin((float10)param_2)));
  fVar2 = ((float10)GEN_TOD(fcos((float10)param_2)));
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1087f04));
  param_1[5] = (undefined4)gen_fl2bits((float)fVar2);
  param_1[6] = (undefined4)gen_fl2bits((float)fVar1);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[9] = (undefined4)gen_fl2bits(((float)GEN_TOF(-(float10)(float)fVar1)));
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[10] = (undefined4)gen_fl2bits((float)fVar2);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  F_0065ed60(param_1 GEN_EDX_FWD,param_3);
  F_0065ee80(param_1 GEN_EDX_ARG,param_4);
  return (uint)param_1;
}

/* ref: Global::SetInverseTransform */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00666e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(uint * param_2, unsigned int gen_a2), GEN_P(float * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x666e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a2;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x30, 0);
  uint uVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  undefined4 uVar7;
  uint uVar8;
  
  uVar8 = (uint)gen_fl2bits((float)(REFG(float, 0x10920d0)));
  uVar7 = (undefined4)gen_fl2bits((float)(REFG(float, 0x1087f04)));
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x18))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *(undefined4 *)this = uVar7;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = uVar7;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = uVar7;
  *((uint *)GEN_TOP(((int)this + 0x30))) = uVar1 ^ uVar8;
  *((uint *)GEN_TOP(((int)this + 0x34))) = uVar2 ^ uVar8;
  *((uint *)GEN_TOP(((int)this + 0x38))) = uVar3 ^ uVar8;
  (*(float *)(gen_frame + 0x10)) = gen_bits2f(*param_2 ^ uVar8);
  (*(float *)(gen_frame + 0x14)) = gen_bits2f(param_2[1] ^ uVar8);
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  (*(float *)(gen_frame + 0x4)) = gen_bits2f(param_2[1] ^ uVar8);
  (*(float *)(gen_frame + 0x18)) = gen_bits2f(uVar1 ^ uVar8);
  (*(uint *)(gen_frame + 0x1c)) = uVar2;
  (*(float *)(gen_frame + 0x0)) = gen_bits2f(*param_2 ^ uVar8);
  (*(float *)(gen_frame + 0x8)) = gen_bits2f(uVar1 ^ uVar8);
  (*(uint *)(gen_frame + 0xc)) = uVar2;
  F_004efe70(this GEN_EDX_FWD,(uint)&(*(float *)(gen_frame + 0x0)));
  fVar6 = (float10)1;
  (*(float *)(gen_frame + 0x10)) = (float)(fVar6 / (float10)*param_3);
  fVar4 = param_3[1];
  (*(float *)(gen_frame + 0x14)) = (float)(fVar6 / (float10)fVar4);
  fVar5 = param_3[2];
  (*(float *)(gen_frame + 0x18)) = (float)(fVar6 / (float10)fVar5);
  (*(float *)(gen_frame + 0x0)) = (float)(fVar6 / (float10)*param_3);
  (*(float *)(gen_frame + 0x4)) = (float)(fVar6 / (float10)fVar4);
  (*(float *)(gen_frame + 0x8)) = (float)(fVar6 / (float10)fVar5);
  F_0065f020(this GEN_EDX_ARG,&(*(float *)(gen_frame + 0x0)));
  return (uint)this;
}

/* ref: FUN_00666fd0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00666fd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x666fd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  byte bVar1;
  
  bVar1 = F_006601a0(param_1 GEN_EDX_FWD,(uint)this);
  return bVar1;
}

/* ref: FUN_00666fe0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00666fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x666fe0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  
  bVar1 = F_006602f0(param_1 GEN_EDX_FWD,(uint)this,param_2);
  return bVar1;
}

/* ref: FUN_00667000 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00667000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x667000u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  byte bVar1;
  
  bVar1 = F_00660580(param_1 GEN_EDX_FWD,this,param_2);
  return bVar1;
}

/* ref: Global::IntersectsSphere_00667020 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_00667020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x667020u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_1 = (float *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  F_004f4d40(this GEN_EDX_FWD,&(*(float *)(gen_frame + 0x0)),param_1);
  fVar2 = (float10)(*(float *)(gen_frame + 0x0));
  fVar1 = *param_1;
  (*(float *)(gen_frame + 0x0)) = (float)(fVar2 - (float10)fVar1);
  fVar3 = (float10)(*(float *)(gen_frame + 0x4));
  (*(float *)(gen_frame + 0x4)) = (float)(fVar3 - (float10)param_1[1]);
  fVar4 = (float10)(*(float *)(gen_frame + 0x8));
  (*(float *)(gen_frame + 0x8)) = (float)(fVar4 - (float10)param_1[2]);
  fVar2 = GEN_X87((float10)(float)(fVar2 - (float10)fVar1));
  fVar3 = GEN_X87((float10)(float)(fVar3 - (float10)param_1[1]));
  fVar4 = GEN_X87((float10)(float)(fVar4 - (float10)param_1[2]));
  fVar1 = ((float)GEN_TOF((fVar4 * fVar4 + (fVar3 * fVar3 + fVar2 * fVar2))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  if ((float10)fVar1 <= (float10)param_1[3] * (float10)param_1[3]) {
    return 1;
  }
  return 0;
}

/* ref: Global::SetVector4At */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006670b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6670b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP((param_2 * 0x10 + in_ecx)));
  *puVar1 = *param_3;
  puVar1[1] = param_3[1];
  puVar1[2] = param_3[2];
  puVar1[3] = param_3[3];
  return (uint)puVar1;
}

/* ref: Global::FreeBits */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00667210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x667210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*(int *)this);
    *(undefined4 *)this = 0;
  }
  return uVar1;
}

/* ref: Global::ResizeBitArray */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667240(GEN_P(int * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x667240u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int * piVar1;
  uint uVar2;
  int * piVar3;
  
  if (*param_1 != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_FWD,*param_1);
    *param_1 = 0;
  }
  if (param_3 != 0) {
    uVar2 = param_3 + 0x1fU >> 5;
    piVar1 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))
                              (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,uVar2 * 4,4)));
    piVar3 = piVar1;
    if (uVar2 != 0) {
      for (; uVar2 != 0; uVar2 = uVar2 - 1) {
        *piVar3 = -(uint)(param_2 != '\0');
        piVar3 = piVar3 + 1;
      }
    }
    param_1[1] = param_3;
    *param_1 = (int)piVar1;
    return (uint)param_1;
  }
  param_1[1] = 0;
  return (uint)param_1;
}

/* ref: FUN_006672d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006672d0(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6672d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *param_2 = in_ecx;
  param_2[1] = param_3;
  return (uint)param_2;
}

/* ref: FUN_00667300 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x667300u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xc)));
  uVar3 = param_1 + 0xfU & 0xfffffff0;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *((int *)GEN_TOP(((int)this + 8)))) && (uVar2 <= *((uint *)GEN_TOP(((int)this + 0x10))))) {
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this GEN_EDX_FWD,uVar3);
  return uVar2;
}

/* ref: FUN_00667330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x667330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = param_2 + 0xfU & 0xfffffff0;
  if (((param_2 <= *((int *)GEN_TOP(((int)this + 8)))) && (uVar1 + param_1 == *((int *)GEN_TOP(((int)this + 0xc))))) &&
     (*((int *)GEN_TOP(((int)this + 0x14))) != param_1)) {
    *((int *)GEN_TOP(((int)this + 0xc))) = param_1;
    return uVar1;
  }
  uVar1 = F_00d945c0(this GEN_EDX_FWD,param_1,uVar1);
  return uVar1;
}

/* ref: Global::Vector3DotSplat */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667370(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x667370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_3 * *in_ecx;
  fVar2 = param_3[1] * in_ecx[1];
  fVar3 = param_3[2] * in_ecx[2];
  *param_2 = (fVar2 + fVar1) + fVar3;
  param_2[1] = (fVar2 + fVar1) + fVar3;
  param_2[2] = (fVar2 + fVar1) + fVar3;
  param_2[3] = (fVar2 + fVar1) + fVar3;
  return (uint)param_2;
}

/* ref: FUN_006673a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006673a0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1), GEN_P(float * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6673a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  GEN_PIN(float * param_3 = (float *)(uintptr_t)gen_a2;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_3[2] * in_ecx[2] + *param_3 * *in_ecx;
  fVar2 = param_3[3] * in_ecx[3] + param_3[1] * in_ecx[1];
  fVar3 = *param_3 * *in_ecx + param_3[2] * in_ecx[2];
  fVar4 = param_3[1] * in_ecx[1] + param_3[3] * in_ecx[3];
  *param_2 = fVar2 + fVar1;
  param_2[1] = fVar1 + fVar2;
  param_2[2] = fVar4 + fVar3;
  param_2[3] = fVar3 + fVar4;
  return (uint)param_2;
}

/* ref: Global::ReciprocalVector4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006673d0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(gen_v16 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6673d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;)
  undefined1 auVar1 [16];
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rcpps(&(auVar2), &(in_XMM1), &(auVar1));
  fVar3 = *(float *)&REFG(undefined, 0x10ab954) - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar2 + 4));
  fVar4 = *(float *)&REFG(undefined, 0x10ab958) - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar2 + 8));
  fVar5 = *(float *)&REFG(undefined, 0x10ab95c) - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar2 + 12));
  *in_ecx = (*(float *)&REFG(undefined, 0x10ab950) - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar2 + 0))) * (*(float *)((char *)&auVar2 + 0));
  in_ecx[1] = fVar3 * (*(float *)((char *)&auVar2 + 4));
  in_ecx[2] = fVar4 * (*(float *)((char *)&auVar2 + 8));
  in_ecx[3] = fVar5 * (*(float *)((char *)&auVar2 + 12));
  return (uint)param_2;
}

/* ref: Global::ReciprocalVector4b */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667400(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(gen_v16 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x667400u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(gen_v16 * param_2 = (gen_v16 *)(uintptr_t)gen_a1;)
  undefined1 auVar1 [16];
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float fVar5;
  
  memcpy(&(auVar1), &(*param_2), sizeof(*param_2) < sizeof(auVar1) ? sizeof(*param_2) : sizeof(auVar1));
  gen_rcpps(&(auVar2), &(in_XMM1), &(auVar1));
  fVar3 = *(float *)&REFG(undefined, 0x10ab954) - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar2 + 4));
  fVar4 = *(float *)&REFG(undefined, 0x10ab958) - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar2 + 8));
  fVar5 = *(float *)&REFG(undefined, 0x10ab95c) - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar2 + 12));
  *in_ecx = (*(float *)&REFG(undefined, 0x10ab950) - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar2 + 0))) * (*(float *)((char *)&auVar2 + 0));
  in_ecx[1] = fVar3 * (*(float *)((char *)&auVar2 + 4));
  in_ecx[2] = fVar4 * (*(float *)((char *)&auVar2 + 8));
  in_ecx[3] = fVar5 * (*(float *)((char *)&auVar2 + 12));
  return (uint)param_2;
}

/* ref: Client::Graphics::Render::SkeletonHelper::IPartiialSkeletonWalk::ScalarDeletingDestructor_00667470 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667470(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x667470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10ab9d4));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_006674a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006674a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6674a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10ab9d4));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_006674d0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006674d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6674d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10ab9d4));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00667500 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667500(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x667500u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10ab9d4));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00667550 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667550(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x667550u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[3])REFP(0x10ab9d4));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::SplatW */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667580(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x667580u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *((undefined4 *)GEN_TOP((in_ecx + 0xc)));
  *param_2 = uVar1;
  param_2[1] = uVar1;
  param_2[2] = uVar1;
  param_2[3] = uVar1;
  return (uint)param_2;
}

/* ref: Global::QuaternionMultiply_006675b0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_006675b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6675b0u, gen_a0, gen_a1, gen_a2, 0u);
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
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar4 = param_1[3];
  fVar5 = *param_2;
  fVar6 = param_2[1];
  fVar7 = param_2[2];
  fVar8 = param_2[3];
  *(float *)this = ((fVar7 * fVar2 - fVar6 * fVar3) + fVar4 * fVar5) + fVar8 * fVar1;
  *((float *)GEN_TOP(((int)this + 4))) = ((fVar5 * fVar3 - fVar7 * fVar1) + fVar4 * fVar6) + fVar8 * fVar2;
  *((float *)GEN_TOP(((int)this + 8))) = ((fVar6 * fVar1 - fVar5 * fVar2) + fVar4 * fVar7) + fVar8 * fVar3;
  *((float *)GEN_TOP(((int)this + 0xc))) = fVar8 * fVar4 - ((fVar6 * fVar2 + fVar5 * fVar1) + fVar7 * fVar3);
  return 0;
}

/* ref: Global::SetTranslationRotation */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x667680u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
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
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138afc);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138af8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138af4);
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *(undefined4 *)&REFG(undefined, 0x1138af0);
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = uVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = uVar2;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = uVar3;
  return (uint)param_1;
}

/* ref: Global::InvertTransform */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_006676b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6676b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined1 auVar1 [16];
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 in_XMM1 [16] = {0};
  undefined1 auVar9 [16];
  
  F_00d95160(this GEN_EDX_FWD,param_1 + 0x10,param_1);
  fVar5 = *(float *)&REFG(undefined, 0x10ab95c);
  fVar4 = *(float *)&REFG(undefined, 0x10ab958);
  fVar3 = *(float *)&REFG(undefined, 0x10ab954);
  fVar2 = *(float *)&REFG(undefined, 0x10ab950);
  uVar6 = *((uint *)GEN_TOP(((int)this + 4))) ^ *(uint *)&REFG(undefined, 0x10ab9c4);
  uVar7 = *((uint *)GEN_TOP(((int)this + 8))) ^ *(uint *)&REFG(undefined, 0x10ab9c8);
  uVar8 = *((uint *)GEN_TOP(((int)this + 0xc))) ^ *(uint *)&REFG(undefined, 0x10ab9cc);
  *(uint *)this = *(uint *)this ^ *(uint *)&REFG(undefined, 0x10ab9c0);
  *((uint *)GEN_TOP(((int)this + 4))) = uVar6;
  *((uint *)GEN_TOP(((int)this + 8))) = uVar7;
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar8;
  uVar6 = *(uint *)&REFG(undefined, 0x10ab9b4) ^ *((uint *)GEN_TOP((param_1 + 0x14)));
  uVar7 = *(uint *)&REFG(undefined, 0x10ab9b8) ^ *((uint *)GEN_TOP((param_1 + 0x18)));
  uVar8 = *(uint *)&REFG(undefined, 0x10ab9bc) ^ *((uint *)GEN_TOP((param_1 + 0x1c)));
  *((uint *)GEN_TOP(((int)this + 0x10))) = *(uint *)&REFG(undefined, 0x10ab9b0) ^ *((uint *)GEN_TOP((param_1 + 0x10)));
  *((uint *)GEN_TOP(((int)this + 0x14))) = uVar6;
  *((uint *)GEN_TOP(((int)this + 0x18))) = uVar7;
  *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar8;
  memcpy(&(auVar1), &(*((gen_v16 *)GEN_TOP((param_1 + 0x20)))), sizeof(*((gen_v16 *)GEN_TOP((param_1 + 0x20)))) < sizeof(auVar1) ? sizeof(*((gen_v16 *)GEN_TOP((param_1 + 0x20)))) : sizeof(auVar1));
  gen_rcpps(&(auVar9), &(in_XMM1), &(auVar1));
  *((float *)GEN_TOP(((int)this + 0x20))) = (fVar2 - (*(float *)((char *)&auVar1 + 0)) * (*(float *)((char *)&auVar9 + 0))) * (*(float *)((char *)&auVar9 + 0));
  *((float *)GEN_TOP(((int)this + 0x24))) = (fVar3 - (*(float *)((char *)&auVar1 + 4)) * (*(float *)((char *)&auVar9 + 4))) * (*(float *)((char *)&auVar9 + 4));
  *((float *)GEN_TOP(((int)this + 0x28))) = (fVar4 - (*(float *)((char *)&auVar1 + 8)) * (*(float *)((char *)&auVar9 + 8))) * (*(float *)((char *)&auVar9 + 8));
  *((float *)GEN_TOP(((int)this + 0x2c))) = (fVar5 - (*(float *)((char *)&auVar1 + 12)) * (*(float *)((char *)&auVar9 + 12))) * (*(float *)((char *)&auVar9 + 12));
  uVar6 = *((uint *)GEN_TOP(((int)this + 0x24))) & *(uint *)&REFG(undefined, 0x10abc24);
  uVar7 = *((uint *)GEN_TOP(((int)this + 0x28))) & *(uint *)&REFG(undefined, 0x10abc28);
  uVar8 = *((uint *)GEN_TOP(((int)this + 0x2c))) & *(uint *)&REFG(undefined, 0x10abc2c);
  *((uint *)GEN_TOP(((int)this + 0x20))) = *((uint *)GEN_TOP(((int)this + 0x20))) & *(uint *)&REFG(undefined, 0x10abc20);
  *((uint *)GEN_TOP(((int)this + 0x24))) = uVar6;
  *((uint *)GEN_TOP(((int)this + 0x28))) = uVar7;
  *((uint *)GEN_TOP(((int)this + 0x2c))) = uVar8;
  return;
}

/* ref: Global::GetBoneFlags */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667710(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x667710u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((in_ecx + 0x1c))) + param_2 * 4))) & param_3;
}

/* ref: Global::SetBoneFlags */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667730(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x667730u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint * puVar1;
  int iVar2;
  
  iVar2 = *((int *)GEN_TOP(((int)this + 0x1c)));
  puVar1 = ((uint *)GEN_TOP((iVar2 + param_1 * 4)));
  *puVar1 = *puVar1 | param_2;
  return iVar2 + param_1 * 4;
}

/* ref: Global::ClearBoneFlags */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x667750u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + param_1 * 4)));
  *puVar1 = *puVar1 & ~param_2;
  return (uint)puVar1;
}

/* ref: Global::GetBoneTransform */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x667770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  if ((*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + param_1 * 4))) & 2) == 0) {
    return param_1 * 0x30 + *((int *)GEN_TOP(((int)this + 0x10)));
  }
  uVar1 = F_00d31930(this GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: Client::Graphics::Render::TerrainRenderObject::vf6 */
GEN_OWN GEN_NOFRAME byte GEN_THISCALL F_006677b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6677b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  return *((int *)GEN_TOP((in_ecx + 0x28))) != 0;
}

/* ref: Global::InvalidateChildBones */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006677c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6677c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *(uint *)this;
  iVar1 = *((int *)GEN_TOP((uVar3 + 0x1c)));
  uVar2 = param_1;
  while (uVar2 = uVar2 + 1, (int)uVar2 < iVar1) {
    uVar3 = (uint)*((short *)GEN_TOP((*((int *)GEN_TOP((*(int *)this + 0xc))) + uVar2 * 2)));
    if (uVar3 == param_1) {
      if ((*((byte *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + uVar2 * 4))) & 2) != 0) {
        uVar3 = F_00d31930(this GEN_EDX_FWD,uVar2);
      }
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 0x1c))) + uVar2 * 4))) = 1;
      *((undefined1 *)GEN_TOP(((int)this + 0x29))) = 0;
    }
  }
  return uVar3;
}

/* ref: Global::AllocAligned16_00667820 */
GEN_OWN GEN_FRAME uint F_00667820(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x667820u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: Client::Graphics::Render::FigureRenderer::vf2 */
GEN_OWN GEN_NOFRAME unsigned int F_00667840(void)
{
  GEN_ENTER(0x667840u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: Client::Graphics::Render::ShaderManager::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667860(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x667860u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10aba94));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Render::RenderTargetManager::ScalarDeletingDestructorThunk */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00667890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x667890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_006689b0(this - 4 GEN_EDX_FWD,(undefined1)param_1);
  return uVar1;
}

/* ref: Global::AllocAligned16b */
GEN_OWN GEN_FRAME uint F_006678a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6678a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: Global::FreeAligned */
GEN_OWN GEN_FRAME uint F_006678c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6678c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_006678e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006678e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined1 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x6678e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 param_2 = (undefined1)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined1 param_4 = (undefined1)gen_a3;)
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *((undefined2 *)GEN_TOP(((int)param_1 + 0x21))) = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 5) = param_2;
  param_1[4] = 5;
  *((undefined4 *)GEN_TOP(((int)param_1 + 0x1d))) = 0x101;
  param_1[6] = param_3;
  *(undefined1 *)(param_1 + 7) = param_4;
  return (uint)param_1;
}

/* ref: Global::AllocAligned16c */
GEN_OWN GEN_FRAME uint F_00667920(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x667920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: Global::FreeAlignedB */
GEN_OWN GEN_FRAME uint F_00667940(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x667940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::AllocAligned16d */
GEN_OWN GEN_FRAME uint F_00667960(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x667960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: Global::FreeAlignedC */
GEN_OWN GEN_FRAME uint F_00667980(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x667980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::FreeAlignedD */
GEN_OWN GEN_FRAME uint F_006679a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6679a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_006679e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006679e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6679e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int * piVar4;
  undefined4 * puVar5;
  
  if ((*((undefined * PTR32 *)GEN_TOP(((int)this + 0xbc))) != ((undefined *)GEN_TOP(0x0))) && (-1 < (short)param_2)) {
    piVar4 = ((int *)GEN_TOP(F_00d32a50(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xbc))) GEN_EDX_FWD)));
    puVar5 = ((undefined4 *)GEN_TOP(((short)param_2 * 0x30 + *piVar4)));
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *param_1 = *puVar5;
    param_1[1] = uVar1;
    param_1[2] = uVar2;
    param_1[3] = uVar3;
    uVar1 = puVar5[5];
    uVar2 = puVar5[6];
    uVar3 = puVar5[7];
    param_1[4] = puVar5[4];
    param_1[5] = uVar1;
    param_1[6] = uVar2;
    param_1[7] = uVar3;
    uVar1 = puVar5[9];
    uVar2 = puVar5[10];
    uVar3 = puVar5[0xb];
    param_1[8] = puVar5[8];
    param_1[9] = uVar1;
    param_1[10] = uVar2;
    param_1[0xb] = uVar3;
    return (uint)param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138cac);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138ca8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138ca4);
  param_1[4] = *(undefined4 *)&REFG(undefined, 0x1138ca0);
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138afc);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138af8);
  uVar1 = *(undefined4 *)&REFG(undefined, 0x1138af4);
  param_1[8] = *(undefined4 *)&REFG(undefined, 0x1138af0);
  param_1[9] = uVar1;
  param_1[10] = uVar2;
  param_1[0xb] = uVar3;
  return (uint)param_1;
}

/* ref: FUN_00667a50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667a50(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x667a50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  uint uVar1;
  ushort uVar2;
  int iVar3;
  undefined * this_00;
  undefined * pvVar4;
  undefined * PTR32 * ppvVar5;
  undefined4 * puVar6;
  
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
  iVar3 = *((int *)GEN_TOP(((int)this + (int)(*(undefined * PTR32 *)&gen_args[1]) * 4 + 0xb4)));
  this_00 = *((undefined * PTR32 *)GEN_TOP(((int)this + (-(uint)((*(undefined * PTR32 *)&gen_args[1]) != ((undefined *)GEN_TOP(0x0))) & 2) * 4 + 0xbc)));
  uVar1 = (int)this + (int)(*(undefined * PTR32 *)&gen_args[1]) * 0x50 + 0x10;
  F_009f9a30(this GEN_EDX_FWD);
  uVar2 = *((ushort *)GEN_TOP((uVar1 + 0x4a)));
  pvVar4 = *((undefined * PTR32 *)GEN_TOP((iVar3 + 0x14)));
  (*(undefined * PTR32 *)&gen_args[1]) = pvVar4;
  (*(undefined * PTR32 *)(gen_frame + 0x0)) = ((undefined *)GEN_TOP((uint)uVar2));
  ppvVar5 = &(*(undefined * PTR32 *)&gen_args[1]);
  if (pvVar4 <= ((undefined *)GEN_TOP((uint)uVar2))) {
    ppvVar5 = &(*(undefined * PTR32 *)(gen_frame + 0x0));
  }
  if (((undefined *)GEN_TOP(0x4f)) < *ppvVar5) {
    return 0;
  }
  puVar6 = ((undefined4 *)GEN_TOP(F_00d314f0(this_00 GEN_EDX_ARG)));
  F_00d36cf0(uVar1 GEN_EDX_ARG,iVar3,*puVar6,0,0,0xffffffff,0xffffffff);
  return uVar1;
}

/* ref: FUN_00667ad0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667ad0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x667ad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int * piVar1;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xbc))) == ((undefined *)GEN_TOP(0x0))) {
    return 0x1351770;
  }
  if (-1 < (short)param_1) {
    piVar1 = ((int *)GEN_TOP(F_00d321b0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xbc))) GEN_EDX_FWD)));
    return (short)param_1 * 0x30 + *piVar1;
  }
  return 0x1351770;
}

/* ref: Client::Graphics::Kernel::ShaderSceneKey::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667b20(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x667b20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Kernel::ShaderSubViewKey::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667b60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x667b60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Kernel::ShaderKey::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667ba0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x667ba0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10abab4));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::SetParameterValue */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00667bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x667bd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  if ((iVar1 != 0) && (*((int *)GEN_TOP(((int)this + 8))) != 0)) {
    uVar2 = 0;
    if (*((uint *)GEN_TOP((iVar1 + 0x58))) != 0) {
      piVar3 = *((int * PTR32 *)GEN_TOP((iVar1 + 0x70)));
      while (*piVar3 != *((int *)GEN_TOP((param_1 + 4)))) {
        uVar2 = uVar2 + 1;
        piVar3 = piVar3 + 1;
        if (*((uint *)GEN_TOP((iVar1 + 0x58))) <= uVar2) {
          return;
        }
      }
      *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + uVar2 * 4))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
    }
  }
  return;
}

/* ref: Global::SetParameterValueUnchecked */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_00667c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x667c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = *((uint *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x58)));
  uVar2 = 0;
  if (uVar1 != 0) {
    while (*((int *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + 0x70))) + uVar2 * 4))) != *((int *)GEN_TOP((param_1 + 4))))
    {
      uVar2 = uVar2 + 1;
      if (uVar1 <= uVar2) {
        return 0;
      }
    }
    *((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 8))) + uVar2 * 4))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  }
  return 0;
}

/* ref: Client::Graphics::Render::LightingManager::LightShape::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667c80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x667c80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int * piVar1;
  
  piVar1 = ((int *)GEN_TOP(param_1[4]));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10ababc));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_FWD);
    param_1[4] = 0;
  }
  piVar1 = ((int *)GEN_TOP(param_1[5]));
  if (piVar1 != ((int *)GEN_TOP(0x0))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG);
    param_1[5] = 0;
  }
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::AllocateFrameMemory */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x667cd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int * piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = REFG(int, 0x1370b90);
  uVar5 = param_1 + 0xfU & 0xfffffff0;
  if (0x8000 < uVar5) {
    return 0;
  }
  if (*((int *)GEN_TOP(((int)this + 0x24))) == 0) {
    piVar1 = ((int *)GEN_TOP((REFG(int, 0x1370b90) + 0xc0)));
    iVar2 = _InterlockedExchangeAdd((volatile gen_long *)(piVar1), (gen_long)(0x8000));
    if (*((uint *)GEN_TOP((iVar3 + 0xb8))) < (uint)(*((int *)GEN_TOP((iVar3 + 0xc4))) * 3 + *piVar1)) {
      _InterlockedExchangeAdd((volatile gen_long *)(piVar1), (gen_long)(-0x8000));
      return 0;
    }
    uVar4 = *((int *)GEN_TOP((iVar3 + 0xbc))) + iVar2;
    if (uVar4 != 0) {
      *((uint *)GEN_TOP(((int)this + 0x28))) = uVar5;
      *((uint *)GEN_TOP(((int)this + 0x24))) = uVar4;
      return uVar4;
    }
  }
  else {
    iVar3 = *((int *)GEN_TOP(((int)this + 0x28)));
    uVar5 = iVar3 + uVar5;
    if (uVar5 < 0x8001) {
      *((uint *)GEN_TOP(((int)this + 0x28))) = uVar5;
      return iVar3 + *((int *)GEN_TOP(((int)this + 0x24)));
    }
  }
  return 0;
}

/* ref: Global::TestFlag */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667da0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x667da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 4))) >> GEN_SHC((byte)param_2, (unsigned int)(uintptr_t)param_2) & 1;
}

/* ref: Client::Graphics::Render::GraphicsConfig::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667dc0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x667dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10abb2c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Global::AllocAligned */
GEN_OWN GEN_FRAME uint F_00667e00(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x667e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: Global::FreeMemory_00667e20 */
GEN_OWN GEN_FRAME uint F_00667e20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x667e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Render::Camera::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667e40(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x667e40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_00667e70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667e70(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x667e70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00662250(in_ecx + 0xc0 GEN_EDX_FWD,param_2);
  return uVar1;
}

/* ref: Client::Graphics::Render::Camera_CascadeShadow::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667e80(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x667e80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Render::Camera_SpecialShadow::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667eb0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x667eb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Render::Camera_OmniShadow::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667ee0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x667ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Render::Camera_OmniShadow::CameraOmniFace::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00667f10(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x667f10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Global::FreeMemory_00667f60 */
GEN_OWN GEN_FRAME uint F_00667f60(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x667f60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::AllocAligned_00667fd0 */
GEN_OWN GEN_FRAME uint F_00667fd0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x667fd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: Global::FreeMemory_00667ff0 */
GEN_OWN GEN_FRAME uint F_00667ff0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x667ff0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::FreeMemory_00668010 */
GEN_OWN GEN_FRAME uint F_00668010(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x668010u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::FreeMemory_00668030 */
GEN_OWN GEN_FRAME uint F_00668030(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x668030u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Render::OffscreenRenderingInfo::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00668050(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x668050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Global::AllocAligned_00668080 */
GEN_OWN GEN_FRAME uint F_00668080(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x668080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: Global::FreeMemory_006680a0 */
GEN_OWN GEN_FRAME uint F_006680a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6680a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Render::OffscreenRenderingManager::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006680d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6680d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x10abba4));
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10abb34));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Global::AllocAligned_00668110 */
GEN_OWN GEN_FRAME uint F_00668110(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x668110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: Global::FreeMemory_00668130 */
GEN_OWN GEN_FRAME uint F_00668130(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x668130u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::ReferencedClassBase::ScalarDeletingDestructor_00668150 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00668150(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x668150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Render::Light::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00668180(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x668180u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_006681b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006681b0(float gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x6681b0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  float in_ecx = (float)gen_a0;
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  float * pfVar1;
  
  (*(float *)(gen_frame + 0x0)) = in_ecx;
  (*(float *)(gen_frame + 0x0)) = REFG(float, 0x1094884);
  pfVar1 = &(*(float *)&gen_args[0]);
  if (!(REFG(double, 0x1094800) < (double)(*(float *)&gen_args[0]))) {
    pfVar1 = &(*(float *)(gen_frame + 0x0));
  }
  *((float *)GEN_TOP(((int)gen_fl2bits(in_ecx) + 0x54))) = *pfVar1;
  return (uint)pfVar1;
}

/* ref: FUN_006681f0 */
GEN_OWN GEN_FRAME float10 GEN_THISCALL F_006681f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x6681f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  float fVar1;
  float * pfVar2;
  
  fVar1 = *((float *)GEN_TOP((in_ecx + 0x78)));
  (*(float *)(gen_frame + 0x0)) = REFG(float, 0x10abe98);
  pfVar2 = &(*(float *)(gen_frame + 0x4));
  fVar1 = (float)((float10)fVar1 / (float10)*(double *)&REFG(undefined, 0x1090718));
  (*(float *)(gen_frame + 0x4)) = fVar1;
  if (!(*(double *)&REFG(undefined, 0x109ce00) < (double)fVar1)) {
    pfVar2 = &(*(float *)(gen_frame + 0x0));
  }
  return (float10)*pfVar2;
}

/* ref: Global::FreeMemory_00668230 */
GEN_OWN GEN_FRAME uint F_00668230(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x668230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00668280 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00668280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x668280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x24)));
  uVar2 = 0;
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    uVar2 = (*((code *)GEN_TOP(*puVar1)))(puVar1[1],puVar1 + 2,this,param_1);
  }
  return uVar2;
}

/* ref: FUN_006682b0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006682b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6682b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_FRAME_DECL_TOP(0x10, 0, 4);
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x28)));
  uVar2 = 0;
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    (*(undefined * PTR32 *)(gen_frame + 0x0)) = this;
    (*(undefined4 *)(gen_frame + 0x4)) = param_1;
    (*(undefined4 *)(gen_frame + 0x8)) = param_2;
    uVar2 = (*((code *)GEN_TOP(*puVar1)))(puVar1[1],puVar1 + 2,&(*(undefined * PTR32 *)(gen_frame + 0x0)));
  }
  return uVar2;
}

/* ref: Global::AllocAligned_006682f0 */
GEN_OWN GEN_FRAME uint F_006682f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6682f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: Global::FreeMemory_00668310 */
GEN_OWN GEN_FRAME uint F_00668310(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x668310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::ReferencedClassBase::ScalarDeletingDestructor_00668330 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00668330(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x668330u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Global::GraphicsAlloc_00668360 */
GEN_OWN GEN_FRAME uint F_00668360(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x668360u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 8))))
                    (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: Global::GraphicsFree_00668380 */
GEN_OWN GEN_FRAME uint F_00668380(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x668380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::GraphicsFree_006683a0 */
GEN_OWN GEN_FRAME uint F_006683a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6683a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::GraphicsFree_006683e0 */
GEN_OWN GEN_FRAME uint F_006683e0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6683e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Render::ModelRenderer::~ModelRenderer */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00668430(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x668430u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pMVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)(this + 100) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)(this + 0x58) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)(this + 0x4c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abeb8));
  *(undefined * PTR32 * PTR32 *)(this + 0x78) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbac));
  pMVar1 = this + 0x4c;
  iVar2 = 1;
  do {
    pMVar1 = pMVar1 - 0xc;
    iVar2 = iVar2 - 1;
    *(undefined * PTR32 * PTR32 *)pMVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  pMVar1 = this + 0x34;
  iVar2 = 1;
  do {
    pMVar1 = pMVar1 - 0xc;
    iVar2 = iVar2 - 1;
    *(undefined * PTR32 * PTR32 *)pMVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  return 0;
}

/* ref: Client::Graphics::Render::ModelRenderer::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00668490(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x668490u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00668430(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Render::BaseRenderer::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006684c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6684c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Render::BGInstancingRenderObject::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006684f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6684f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Render::BGInstancingRenderer::~BGInstancingRenderer */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00668520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x668520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pBVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abed0));
  pBVar1 = this + 0x224;
  iVar2 = 1;
  do {
    pBVar1 = pBVar1 - 0xc;
    iVar2 = iVar2 - 1;
    *(undefined * PTR32 * PTR32 *)pBVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  pBVar1 = this + 0x20c;
  iVar2 = 1;
  do {
    pBVar1 = pBVar1 - 0xc;
    iVar2 = iVar2 - 1;
    *(undefined * PTR32 * PTR32 *)pBVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  pBVar1 = this + 500;
  iVar2 = 1;
  do {
    pBVar1 = pBVar1 - 0xc;
    iVar2 = iVar2 - 1;
    *(undefined * PTR32 * PTR32 *)pBVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  pBVar1 = this + 0x1dc;
  iVar2 = 1;
  do {
    pBVar1 = pBVar1 - 0xc;
    iVar2 = iVar2 - 1;
    *(undefined * PTR32 * PTR32 *)pBVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  pBVar1 = this + 0x1c4;
  iVar2 = 1;
  do {
    pBVar1 = pBVar1 - 0xc;
    iVar2 = iVar2 - 1;
    *(undefined * PTR32 * PTR32 *)pBVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  pBVar1 = this + 0x1a0;
  iVar2 = 1;
  do {
    pBVar1 = pBVar1 - 0xc;
    iVar2 = iVar2 - 1;
    *(undefined * PTR32 * PTR32 *)pBVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)(this + 0x17c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)(this + 0x170) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)(this + 0x164) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)(this + 0x158) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)(this + 0x14) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbb4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  return 0x10abaac;
}

/* ref: Client::Graphics::Render::BGInstancingRenderer::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00668610(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x668610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00668520(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Render::TerrainRenderObject::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00668640(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x668640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Render::TerrainRenderer::~TerrainRenderer */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00668670(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x668670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined * pTVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abee8));
  *(undefined * PTR32 * PTR32 *)(this + 0x31fc) =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbbc));
  pTVar1 = this + 0x1e0;
  iVar2 = 1;
  do {
    pTVar1 = pTVar1 - 0xc;
    iVar2 = iVar2 - 1;
    *(undefined * PTR32 * PTR32 *)pTVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  pTVar1 = this + 0x1c8;
  iVar2 = 1;
  do {
    pTVar1 = pTVar1 - 0xc;
    iVar2 = iVar2 - 1;
    *(undefined * PTR32 * PTR32 *)pTVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  pTVar1 = this + 0x1b0;
  iVar2 = 1;
  do {
    pTVar1 = pTVar1 - 0xc;
    iVar2 = iVar2 - 1;
    *(undefined * PTR32 * PTR32 *)pTVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  pTVar1 = this + 0x198;
  iVar2 = 1;
  do {
    pTVar1 = pTVar1 - 0xc;
    iVar2 = iVar2 - 1;
    *(undefined * PTR32 * PTR32 *)pTVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  pTVar1 = this + 0x180;
  iVar2 = 1;
  do {
    pTVar1 = pTVar1 - 0xc;
    iVar2 = iVar2 - 1;
    *(undefined * PTR32 * PTR32 *)pTVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  pTVar1 = this + 0x168;
  iVar2 = 1;
  do {
    pTVar1 = pTVar1 - 0xc;
    iVar2 = iVar2 - 1;
    *(undefined * PTR32 * PTR32 *)pTVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *(undefined * PTR32 * PTR32 *)(this + 0x144) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)(this + 0x138) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)(this + 300) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)(this + 0x120) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)(this + 0x114) = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  return 0x10abaac;
}

/* ref: Client::Graphics::Render::TerrainRenderer::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00668770(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x668770u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00668670(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Render::WaterRenderObject::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006687a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6687a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Render::WaterRenderer::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00668810(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x668810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x10abf18));
  puVar1 = param_1 + 0x73;
  iVar2 = 1;
  do {
    puVar1 = puVar1 - 3;
    iVar2 = iVar2 - 1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  param_1[8] = (*(undefined * PTR32 (*)[1])REFP(0x10abbc4));
  param_1[5] = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Render::VerticalFogRenderObject::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00668890(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x668890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Render::LightShaftRenderObject::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006688c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6688c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Render::ShadowMaskRenderer::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00668930(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x668930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  param_1[0xe] = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  param_1[0xb] = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x10abf30));
  param_1[0x11] =
       (*(undefined * PTR32 (*)[1])REFP(0x10abbdc));
  puVar1 = param_1 + 0xb;
  iVar2 = 1;
  do {
    puVar1 = puVar1 - 3;
    iVar2 = iVar2 - 1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Render::RenderTargetManager::~RenderTargetManager */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00668990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x668990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abe4c));
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[5])REFP(0x10abe34));
  F_004d6680((undefined *)(this + 4) GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abb5c));
  return;
}

/* ref: Client::Graphics::Render::RenderTargetManager::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006689b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6689b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10abe4c));
  *(undefined * PTR32 * PTR32 *)(param_1 + 1) = (*(undefined * PTR32 (*)[5])REFP(0x10abe34));
  F_004d6680((undefined *)(param_1 + 1) GEN_EDX_FWD);
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10abb5c));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Render::ScopedShaderKey::ScopedShaderKey_00668a10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00668a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x668a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abb24));
  iVar1 = *((int *)GEN_TOP((REFG(int, 0x137127c) + 0xaba0 + param_1 * 4)));
  if (iVar1 != 0) {
    F_00b52c10(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP((iVar1 + 0x98))));
    return (uint)this;
  }
  F_00b52c10(this GEN_EDX_ARG,0);
  return (uint)this;
}

/* ref: FUN_00668ba0 */
GEN_OWN GEN_NOFRAME byte F_00668ba0(void)
{
  GEN_ENTER(0x668ba0u, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  
  this = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 8))))
                   (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,0xb8,0x10)));
  if (this != ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00623880(this GEN_EDX_ARG);
    REFG(undefined4, 0x1487c60) = uVar1;
    return uVar1 != 0;
  }
  REFG(undefined4, 0x1487c60) = 0;
  return 0;
}

/* ref: FUN_00668ca0 */
GEN_OWN GEN_FRAME uint F_00668ca0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x668ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: FUN_00668d00 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00668d00(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x668d00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00668d10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00668d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x668d10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00668d60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00668d60(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x668d60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00668d70 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00668d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x668d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: Global::HeapFree4 */
GEN_OWN GEN_FRAME uint F_00668db0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x668db0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::HeapFree4_00668dd0 */
GEN_OWN GEN_FRAME uint F_00668dd0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x668dd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::HeapFree4_00668df0 */
GEN_OWN GEN_FRAME uint F_00668df0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x668df0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::HeapFree4_00668e10 */
GEN_OWN GEN_FRAME uint F_00668e10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x668e10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::HeapFree4_00668e30 */
GEN_OWN GEN_FRAME uint F_00668e30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x668e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00668e50 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00668e50(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x668e50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00668e60 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00668e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x668e60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: FUN_00668e80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00668e80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x668e80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::HeapFree4_00668e90 */
GEN_OWN GEN_FRAME uint F_00668e90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x668e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::HeapFree4_00668eb0 */
GEN_OWN GEN_FRAME uint F_00668eb0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x668eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::HeapFree4_00668ed0 */
GEN_OWN GEN_FRAME uint F_00668ed0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x668ed0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::ComputeVectorGrowth */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00668f10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x668f10u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Global::CalcGrowCapacity8 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00668f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x668f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 3;
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

/* ref: FUN_00668f80 */
GEN_OWN GEN_FRAME uint GEN_STDCALL F_00668f80(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x668f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: Global::CalcGrowCapacity4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00668fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x668fa0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Global::CalcGrowCapacity4_00668fe0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00668fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x668fe0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Global::CalcGrowCapacity4_00669010 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00669010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x669010u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00669040 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00669040(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x669040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::InitKeyValuePair */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00669050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x669050u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined2 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2[1];
  return (uint)this;
}

/* ref: FUN_00669070 */
GEN_OWN GEN_FRAME uint F_00669070(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x669070u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  return param_1 + 0xc;
}

/* ref: Global::IteratorEquals_006690a0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_006690a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6690a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: Global::BuildTransformMatrix */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006690c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6690c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = F_00666d70(param_1 GEN_EDX_FWD,GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x30)))),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x34)))),GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x38)))));
  uVar1 = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
  uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
  *((undefined4 *)GEN_TOP((param_1 + 0x30))) = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
  *((undefined4 *)GEN_TOP((param_1 + 0x34))) = uVar1;
  *((undefined4 *)GEN_TOP((param_1 + 0x38))) = uVar2;
  return uVar3;
}

/* ref: Global::GetTransform */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00669110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x669110u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_FRAME_DECL(0x30, 0);
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float10 fVar5;
  
  (*(float *)(gen_frame + 0x1c)) = *((float *)GEN_TOP(((int)this + 0x30)));
  fVar1 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP(((int)this + 0x30))) * (float10)REFG(double, 0x1088108))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  fVar5 = ((float10)GEN_TOD(fsin((float10)fVar1)));
  (*(float *)(gen_frame + 0x18)) = (float)fVar5;
  (*(float *)(gen_frame + 0x0)) = (float)fVar5;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  fVar5 = ((float10)GEN_TOD(fcos((float10)fVar1)));
  (*(float *)(gen_frame + 0x18)) = (float)fVar5;
  (*(float *)(gen_frame + 0xc)) = (float)fVar5;
  F_0054d030(&(*(float *)(gen_frame + 0x0)) GEN_EDX_FWD,GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x34)))));
  F_0054d0f0(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG,GEN_ARGF(*((float *)GEN_TOP(((int)this + 0x38)))));
  uVar2 = *((undefined4 *)GEN_TOP(((int)this + 0x28)));
  uVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x2c)));
  *param_1 = *((undefined4 *)GEN_TOP(((int)this + 0x24)));
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = 0;
  param_1[4] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0x0)));
  param_1[5] = (*(undefined4 *)(gen_frame + 0x4));
  param_1[6] = (*(undefined4 *)(gen_frame + 0x8));
  param_1[7] = (undefined4)gen_fl2bits((*(float *)(gen_frame + 0xc)));
  uVar4 = *(undefined4 *)&REFG(undefined, 0x1138afc);
  uVar3 = *(undefined4 *)&REFG(undefined, 0x1138af8);
  uVar2 = *(undefined4 *)&REFG(undefined, 0x1138af4);
  param_1[8] = *(undefined4 *)&REFG(undefined, 0x1138af0);
  param_1[9] = uVar2;
  param_1[10] = uVar3;
  param_1[0xb] = uVar4;
  return (uint)param_1;
}

/* ref: Global::TestBit_006691f0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006691f0(GEN_P(byte * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6691f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(byte * in_ecx = (byte *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  return *in_ecx >> GEN_SHC(param_2, param_2) & 1;
}

/* ref: Global::AppendElement */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00669220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x669220u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::ConstructInPlace_00669260 */
GEN_OWN GEN_FRAME uint F_00669260(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x669260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Global::ConstructInPlace_00669280 */
GEN_OWN GEN_FRAME uint F_00669280(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x669280u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_006692a0 */
GEN_OWN GEN_FRAME unsigned int F_006692a0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6692a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_006692c0 */
GEN_OWN GEN_FRAME unsigned int F_006692c0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6692c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_006692e0 */
GEN_OWN GEN_FRAME uint F_006692e0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6692e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_00669310 */
GEN_OWN GEN_FRAME uint F_00669310(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x669310u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00669330 */
GEN_OWN GEN_FRAME uint F_00669330(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x669330u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00669350 */
GEN_OWN GEN_FRAME uint F_00669350(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x669350u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00669370 */
GEN_OWN GEN_FRAME uint F_00669370(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x669370u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00669390 */
GEN_OWN GEN_FRAME uint F_00669390(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x669390u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_006693b0 */
GEN_OWN GEN_FRAME uint F_006693b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6693b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  undefined * this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *(uint *)(this + 0xc);
  uVar3 = param_1 * 4 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *(int *)(this + 8)) && (uVar2 <= *(uint *)(this + 0x10))) {
    *(uint *)(this + 0xc) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this GEN_EDX_ARG,uVar3);
  return uVar2;
}

/* ref: FUN_006693f0 */
GEN_OWN GEN_FRAME uint F_006693f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x6693f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  undefined * this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 4 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *(int *)(this + 8)) && (uVar1 + param_1 == *(int *)(this + 0xc))) &&
     (*(int *)(this + 0x14) != param_1)) {
    *(int *)(this + 0xc) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this GEN_EDX_ARG,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00669440 */
GEN_OWN GEN_FRAME uint F_00669440(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x669440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: FUN_006694a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006694a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6694a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_006694c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006694c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6694c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  byte bVar1;
  
  bVar1 = (byte)*((undefined4 *)GEN_TOP(((int)this + 4)));
  **(byte * PTR32 *)this =
       (*((byte *)GEN_TOP(*param_1)) >> GEN_SHC(*(byte *)(param_1 + 1), *(byte *)(param_1 + 1)) & 1) << GEN_SHC(bVar1, bVar1) |
       ~('\x01' << GEN_SHC(bVar1, bVar1)) & **(byte * PTR32 *)this;
  return (uint)this;
}

/* ref: FUN_00669510 */
GEN_OWN GEN_FRAME uint F_00669510(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x669510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00669530 */
GEN_OWN GEN_FRAME uint F_00669530(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x669530u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00669550 */
GEN_OWN GEN_FRAME uint F_00669550(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x669550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_00669570 */
GEN_OWN GEN_FRAME uint F_00669570(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x669570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_00669590 */
GEN_OWN GEN_FRAME uint F_00669590(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x669590u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_006695b0 */
GEN_OWN GEN_FRAME uint F_006695b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6695b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: FUN_006695d0 */
GEN_OWN GEN_FRAME uint F_006695d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6695d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: FUN_006695f0 */
GEN_OWN GEN_FRAME uint F_006695f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6695f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: Global::EngineFree_00669610 */
GEN_OWN GEN_FRAME uint F_00669610(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x669610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::EngineAllocAligned16 */
GEN_OWN GEN_FRAME uint F_00669630(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x669630u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: Global::EngineFree_00669650 */
GEN_OWN GEN_FRAME uint F_00669650(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x669650u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::EngineAllocAligned16_00669670 */
GEN_OWN GEN_FRAME uint F_00669670(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x669670u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: Global::EngineFree_00669690 */
GEN_OWN GEN_FRAME uint F_00669690(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x669690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::EngineAllocAligned16_006696b0 */
GEN_OWN GEN_FRAME uint F_006696b0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6696b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: Global::EngineFree_006696d0 */
GEN_OWN GEN_FRAME uint F_006696d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6696d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::EngineAllocAligned16_006696f0 */
GEN_OWN GEN_FRAME uint F_006696f0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6696f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: Global::EngineFree_00669710 */
GEN_OWN GEN_FRAME uint F_00669710(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x669710u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::EngineAllocAligned16_00669730 */
GEN_OWN GEN_FRAME uint F_00669730(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x669730u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: Global::EngineFree_00669750 */
GEN_OWN GEN_FRAME uint F_00669750(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x669750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::EngineFree_00669770 */
GEN_OWN GEN_FRAME uint F_00669770(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x669770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::EngineFree_00669790 */
GEN_OWN GEN_FRAME uint F_00669790(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x669790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::EngineFree_006697b0 */
GEN_OWN GEN_FRAME uint F_006697b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6697b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::EngineFree_006697d0 */
GEN_OWN GEN_FRAME uint F_006697d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6697d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::EngineFree_006697f0 */
GEN_OWN GEN_FRAME uint F_006697f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x6697f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::EngineFree_00669810 */
GEN_OWN GEN_FRAME uint F_00669810(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x669810u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::EngineFree_00669830 */
GEN_OWN GEN_FRAME uint F_00669830(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x669830u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::EngineFree_00669850 */
GEN_OWN GEN_FRAME uint F_00669850(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x669850u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::IteratorDistance8 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00669890(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x669890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  return *in_ecx - *param_2 >> 3;
}

/* ref: Global::CalcGrowCapacity4_006698c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006698c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6698c0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: Global::TreeIteratorDecrement_00669900 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00669900(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x669900u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*((char *)GEN_TOP(((int)puVar2 + 0x11))) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = ((int *)GEN_TOP(*puVar2));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x11))) == '\0') {
    iVar3 = piVar5[2];
    if (*((char *)GEN_TOP((piVar5[2] + 0x11))) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *((int *)GEN_TOP((iVar4 + 8)));
      } while (*((char *)GEN_TOP((iVar3 + 0x11))) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = ((int *)GEN_TOP(puVar2[1]));
    cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x11)));
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = ((int *)GEN_TOP(piVar5[1]));
      cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x11)));
    }
    if (*((char *)GEN_TOP((*(int *)this + 0x11))) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: Global::TreeIteratorDecrement_00669960 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_00669960(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x669960u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*((char *)GEN_TOP(((int)puVar2 + 0x19))) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = ((int *)GEN_TOP(*puVar2));
  if (*((char *)GEN_TOP(((int)piVar5 + 0x19))) == '\0') {
    iVar3 = piVar5[2];
    if (*((char *)GEN_TOP((piVar5[2] + 0x19))) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *((int *)GEN_TOP((iVar4 + 8)));
      } while (*((char *)GEN_TOP((iVar3 + 0x19))) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = ((int *)GEN_TOP(puVar2[1]));
    cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x19)));
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = ((int *)GEN_TOP(piVar5[1]));
      cVar1 = *((char *)GEN_TOP(((int)piVar5 + 0x19)));
    }
    if (*((char *)GEN_TOP((*(int *)this + 0x19))) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: Global::InitIteratorBoolPair */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006699c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x6699c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_006699e0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006699e0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x6699e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::AdvancePointerIterator */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_006699f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x6699f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  *(int *)this = *(int *)this + param_1 * 4;
  return (uint)this;
}

/* ref: Global::IteratorEquals_00669a10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_00669a10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x669a10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: Global::PairIterBool2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00669a30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x669a30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: FUN_00669a90 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00669a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x669a90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00664e20(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_00669aa0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00669aa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x669aa0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x665ba0));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: FUN_00669b00 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00669b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x669b00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00664ef0(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_00669b10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00669b10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x669b10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x665bc0));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: FUN_00669b70 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00669b70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x669b70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00664fc0(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_00669b80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00669b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x669b80u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x665be0));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: FUN_00669be0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00669be0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x669be0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00665090(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_00669bf0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00669bf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x669bf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x665c00));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: FUN_00669c50 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00669c50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x669c50u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00665160(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_00669c60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00669c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x669c60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x665c20));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: FUN_00669cc0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00669cc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x669cc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00665230(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_00669cd0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00669cd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x669cd0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x665c40));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: FUN_00669d30 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00669d30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x669d30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_00665300(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_00669d40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00669d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x669d40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x665c60));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: FUN_00669da0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00669da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x669da0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_006653d0(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_00669db0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00669db0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x669db0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x665c80));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: FUN_00669e10 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_00669e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x669e10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  F_006654a0(this GEN_EDX_FWD);
  return;
}

/* ref: FUN_00669e20 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00669e20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x669e20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_1;
  *(gen_code32 *)this = ((code *)REFP(0x665ca0));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = param_2;
  return (uint)this;
}

/* ref: Global::ReleaseArrayStorage */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00669e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x669e40u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00669e80 */
GEN_OWN GEN_FRAME uint F_00669e80(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x669e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  return param_1;
}

/* ref: Global::PairIterBool3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00669e90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x669e90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::CopyUIntRange */
GEN_OWN GEN_FRAME uint F_00669eb0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x669eb0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  
  iVar1 = (param_2 - param_1 >> 2) * 4;
  F_00c46e20(param_3,param_1,iVar1);
  return iVar1 + param_3;
}

/* ref: Global::InitUIntBytePair */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_00669ee0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined1 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x669ee0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined1 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::ConstructUIntInPlace */
GEN_OWN GEN_FRAME uint F_0066a020(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x66a020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Global::ConstructUIntInPlace2 */
GEN_OWN GEN_FRAME uint F_0066a040(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x66a040u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Global::AllocateAligned16 */
GEN_OWN GEN_FRAME uint F_0066a060(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x66a060u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: Global::AllocateAligned16_2 */
GEN_OWN GEN_FRAME uint F_0066a080(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x66a080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: Global::AllocateAligned16_3 */
GEN_OWN GEN_FRAME uint F_0066a0a0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x66a0a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: Global::AllocateAligned16_4 */
GEN_OWN GEN_FRAME uint F_0066a0c0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x66a0c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: Global::AllocateAligned16_5 */
GEN_OWN GEN_FRAME uint F_0066a0e0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x66a0e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: Global::AllocateAligned16_6 */
GEN_OWN GEN_FRAME uint F_0066a100(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x66a100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: Global::AllocateAligned16_7 */
GEN_OWN GEN_FRAME uint F_0066a120(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x66a120u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: Global::AllocateAligned16_8 */
GEN_OWN GEN_FRAME uint F_0066a140(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x66a140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: Global::CopyUShortKeyEntry */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066a160(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66a160u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  *(undefined2 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *(undefined4 *)(param_1 + 2);
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: Global::InitUIntPair */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066a180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x66a180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  *(undefined4 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *param_2;
  return (uint)this;
}

/* ref: Global::CopyUShortKeyEntry2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066a1a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined2 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66a1a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;)
  *(undefined2 *)this = *param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = *(undefined4 *)(param_1 + 2);
  *((undefined4 *)GEN_TOP(((int)this + 8))) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: Global::FreeMemory_0066a1c0 */
GEN_OWN GEN_FRAME uint F_0066a1c0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x66a1c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_0066a1e0 */
GEN_OWN GEN_FRAME unsigned int F_0066a1e0(GEN_P(undefined * param_1, unsigned int gen_a0), GEN_P(undefined * param_2, unsigned int gen_a1), GEN_P(undefined * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x66a1e0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined * param_2 = (undefined *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined * param_3 = (undefined *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined *)GEN_TOP(0x0))) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: Global::EngineFree_0066a210 */
GEN_OWN GEN_FRAME uint F_0066a210(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x66a210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::FreeDefault */
GEN_OWN GEN_FRAME uint F_0066a230(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x66a230u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::FreeDefault2 */
GEN_OWN GEN_FRAME uint F_0066a250(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x66a250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::FreeDefault3 */
GEN_OWN GEN_FRAME uint F_0066a270(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x66a270u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::FreeDefault4 */
GEN_OWN GEN_FRAME uint F_0066a290(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x66a290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::FreeDefault5 */
GEN_OWN GEN_FRAME uint F_0066a2b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x66a2b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::FreeDefault6 */
GEN_OWN GEN_FRAME uint F_0066a2d0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x66a2d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::FreeDefault7 */
GEN_OWN GEN_FRAME uint F_0066a2f0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x66a2f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::FreeDefault8 */
GEN_OWN GEN_FRAME uint F_0066a310(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x66a310u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Global::SwapPair8 */
GEN_OWN GEN_FRAME uint F_0066a360(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66a360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: Global::AdjustHeapByFloatKey */
GEN_OWN GEN_FRAME uint F_0066a390(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x66a390u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = param_2;
  while( true ) {
    iVar3 = iVar1 * 2 + 2;
    if (param_3 <= iVar3) break;
    if ((float10)*((float *)GEN_TOP((param_1 + 4 + iVar3 * 8))) < (float10)*((float *)GEN_TOP((param_1 - 4 + iVar3 * 8)))
       ) {
      iVar3 = iVar1 * 2 + 1;
    }
    *((undefined4 *)GEN_TOP((param_1 + iVar1 * 8))) = *((undefined4 *)GEN_TOP((param_1 + iVar3 * 8)));
    *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 8))) = *((undefined4 *)GEN_TOP((param_1 + 4 + iVar3 * 8)));
    iVar1 = iVar3;
  }
  if (iVar3 == param_3) {
    *((undefined4 *)GEN_TOP((param_1 + iVar1 * 8))) = *((undefined4 *)GEN_TOP((param_1 - 8 + param_3 * 8)));
    *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 8))) = *((undefined4 *)GEN_TOP((param_1 - 4 + param_3 * 8)));
    iVar1 = param_3 - 1;
  }
  while ((param_2 < iVar1 &&
         (iVar3 = (iVar1 - 1) / 2,
         (float10)*((float *)GEN_TOP((param_1 + 4 + iVar3 * 8))) < ((float10)GEN_TOD(gen_bits2f(param_4[1])))))) {
    *((undefined4 *)GEN_TOP((param_1 + iVar1 * 8))) = *((undefined4 *)GEN_TOP((param_1 + iVar3 * 8)));
    *((undefined4 *)GEN_TOP((param_1 + 4 + iVar1 * 8))) = *((undefined4 *)GEN_TOP((param_1 + 4 + iVar3 * 8)));
    iVar1 = iVar3;
  }
  *((undefined4 *)GEN_TOP((param_1 + iVar1 * 8))) = *param_4;
  uVar2 = param_4[1];
  *((uint *)GEN_TOP((param_1 + 4 + iVar1 * 8))) = uVar2;
  return uVar2;
}

/* ref: Global::ConstructCopyU32 */
GEN_OWN GEN_FRAME uint F_0066a480(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x66a480u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Global::ConstructCopyU32_2 */
GEN_OWN GEN_FRAME uint F_0066a4b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x66a4b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Global::ConstructCopyU32_3 */
GEN_OWN GEN_FRAME uint F_0066a4d0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x66a4d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Global::ConstructCopyU32_4 */
GEN_OWN GEN_FRAME uint F_0066a4f0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x66a4f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: Global::CopyConstructRangeU32 */
GEN_OWN GEN_FRAME unsigned int F_0066a520(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x66a520u, gen_a0, gen_a1, gen_a2, 0u);
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

/* ref: Global::CopyBackwardPairs8 */
GEN_OWN GEN_FRAME unsigned int F_0066a550(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x66a550u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 - 8) {
    puVar1[-2] = *((undefined4 *)GEN_TOP((iVar2 - 8)));
    puVar1[-1] = *((undefined4 *)GEN_TOP((iVar2 - 4)));
    puVar1 = puVar1 - 2;
  }
  return 0;
}

/* ref: Global::PopHeapByFloatKey */
GEN_OWN GEN_FRAME uint F_0066a580(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(undefined4 param_6, unsigned int gen_a5))
{
  GEN_ENTER(0x66a580u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a5;)
  uint uVar1;
  
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  uVar1 = F_0066a390(param_1,0,param_2 - (int)((int)(uintptr_t)param_1) >> 3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: Global::CalculateGrowth32 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066a5d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66a5d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP(((int)this + 8))) - *(int *)((int)(uintptr_t)this) >> 5;
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

/* ref: Global::SetIteratorPtr */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066a610(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x66a610u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::IteratorEquals_0066a640 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0066a640(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66a640u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this == *param_1;
}

/* ref: Global::SetIteratorPtr2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066a660(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x66a660u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: Global::TreeRotateRight_0066a690 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066a690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66a690u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x11))) == '\0') {
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

/* ref: Global::TreeRotateRight2_0066a710 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066a710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66a710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *((uint *)GEN_TOP((uVar2 + 8)));
  if (*((char *)GEN_TOP((*((int *)GEN_TOP((uVar2 + 8))) + 0x19))) == '\0') {
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

/* ref: FUN_0066a770 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0066a770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x66a770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_00666840(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: Global::SetIteratorPtr3 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066a780(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x66a780u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_0066a790 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0066a790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x66a790u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_006668a0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: Global::SplatW_0066a7a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066a7a0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66a7a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  undefined4 uVar1;
  
  uVar1 = *((undefined4 *)GEN_TOP((param_2 + 0xc)));
  *in_ecx = uVar1;
  in_ecx[1] = uVar1;
  in_ecx[2] = uVar1;
  in_ecx[3] = uVar1;
  return param_2;
}

/* ref: Global::LengthSquared4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066a7c0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66a7c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar1 = *in_ecx * *in_ecx;
  fVar3 = in_ecx[1] * in_ecx[1];
  fVar5 = in_ecx[2] * in_ecx[2];
  fVar6 = in_ecx[3] * in_ecx[3];
  fVar2 = fVar5 + fVar1;
  fVar4 = fVar6 + fVar3;
  fVar1 = fVar1 + fVar5;
  fVar3 = fVar3 + fVar6;
  *param_2 = fVar4 + fVar2;
  param_2[1] = fVar2 + fVar4;
  param_2[2] = fVar3 + fVar1;
  param_2[3] = fVar1 + fVar3;
  return (uint)param_2;
}

/* ref: Global::MakePair */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066a7f0(GEN_P(undefined4 in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x66a7f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 in_ecx = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  *param_2 = in_ecx;
  param_2[1] = param_3;
  return (uint)param_2;
}

/* ref: Global::ConstructCopy32Bytes_0066a810 */
GEN_OWN GEN_FRAME unsigned int F_0066a810(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x66a810u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: Global::ConstructCopy32Bytes2 */
GEN_OWN GEN_FRAME unsigned int F_0066a830(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x66a830u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: Global::ReciprocalLength4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066a8a0(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66a8a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = *in_ecx * *in_ecx;
  fVar4 = in_ecx[1] * in_ecx[1];
  fVar5 = in_ecx[2] * in_ecx[2];
  fVar6 = in_ecx[3] * in_ecx[3];
  (*(float *)((char *)&auVar2 + 0)) = fVar5 + fVar1;
  (*(float *)((char *)&auVar2 + 4)) = fVar6 + fVar4;
  (*(float *)((char *)&auVar2 + 8)) = fVar1 + fVar5;
  (*(float *)((char *)&auVar2 + 12)) = fVar4 + fVar6;
  (*(undefined4 *)((char *)&auVar3 + 4)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar2 + 0)) + (*(float *)((char *)&auVar2 + 4)));
  (*(undefined4 *)((char *)&auVar3 + 0)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar2 + 4)) + (*(float *)((char *)&auVar2 + 0)));
  (*(undefined4 *)((char *)&auVar3 + 8)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar2 + 12)) + (*(float *)((char *)&auVar2 + 8)));
  (*(undefined4 *)((char *)&auVar3 + 12)) = (undefined4)gen_fl2bits((*(float *)((char *)&auVar2 + 8)) + (*(float *)((char *)&auVar2 + 12)));
  gen_rsqrtps(&(auVar3), &(auVar2), &(auVar3));
  fVar1 = (*(float *)((char *)&auVar3 + 0));
  fVar4 = (*(float *)((char *)&auVar3 + 4));
  fVar5 = (*(float *)((char *)&auVar3 + 8));
  fVar6 = (*(float *)((char *)&auVar3 + 12));
  fVar7 = *(float *)&REFG(undefined, 0x10ab964) - (fVar4 * ((*(float *)((char *)&auVar2 + 0)) + (*(float *)((char *)&auVar2 + 4)))) * fVar4;
  fVar8 = *(float *)&REFG(undefined, 0x10ab968) - (fVar5 * ((*(float *)((char *)&auVar2 + 12)) + (*(float *)((char *)&auVar2 + 8)))) * fVar5;
  fVar9 = *(float *)&REFG(undefined, 0x10ab96c) - (fVar6 * ((*(float *)((char *)&auVar2 + 8)) + (*(float *)((char *)&auVar2 + 12)))) * fVar6;
  fVar4 = *(float *)&REFG(undefined, 0x10ab974) * fVar4;
  fVar5 = *(float *)&REFG(undefined, 0x10ab978) * fVar5;
  fVar6 = *(float *)&REFG(undefined, 0x10ab97c) * fVar6;
  *param_2 = (*(float *)&REFG(undefined, 0x10ab960) - (fVar1 * ((*(float *)((char *)&auVar2 + 4)) + (*(float *)((char *)&auVar2 + 0)))) * fVar1) *
             (*(float *)&REFG(undefined, 0x10ab970) * fVar1);
  param_2[1] = fVar7 * fVar4;
  param_2[2] = fVar8 * fVar5;
  param_2[3] = fVar9 * fVar6;
  return (uint)param_2;
}

/* ref: _Uninitialized_move<>_0066a8f0 */
GEN_OWN GEN_FRAME unsigned int F_0066a8f0(GEN_P(undefined4 * param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x66a8f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  puVar1 = param_1;
  puVar2 = param_3;
  while (puVar1 != param_2) {
    puVar5 = puVar1 + 8;
    puVar3 = puVar2 + 8;
    puVar6 = puVar1;
    puVar7 = puVar2;
    for (iVar4 = 8; puVar1 = puVar5, puVar2 = puVar3, iVar4 != 0; iVar4 = iVar4 - 1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
  }
  return 0;
}

/* ref: Global::AllocateAligned16_0066a940 */
GEN_OWN GEN_FRAME uint F_0066a940(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x66a940u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 8))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,param_1,0x10);
  return uVar1;
}

/* ref: Global::ConstructCopy32Bytes3 */
GEN_OWN GEN_FRAME unsigned int F_0066a960(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x66a960u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_2 != ((undefined4 *)GEN_TOP(0x0))) {
    puVar2 = param_3;
    puVar3 = param_2;
    for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 - 1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}

/* ref: Client::Graphics::Render::AmbientLight::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066a980(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66a980u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[1])REFP(0x10ab990));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Render::Material::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066a9b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66a9b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Render::ShadowCamera::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066a9e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66a9e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Global::MatrixFromTransform_0066aa10 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066aa10(GEN_P(float * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66aa10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(float * in_ecx = (float *)(uintptr_t)gen_a0;)
  GEN_PIN(float * param_2 = (float *)(uintptr_t)gen_a1;)
  float fVar1;
  
  fVar1 = param_2[8];
  in_ecx[1] = 0.0;
  *in_ecx = fVar1;
  in_ecx[2] = 0.0;
  in_ecx[4] = 0.0;
  in_ecx[5] = param_2[9];
  in_ecx[6] = 0.0;
  in_ecx[8] = 0.0;
  in_ecx[9] = 0.0;
  in_ecx[10] = param_2[10];
  in_ecx[0xc] = 0.0;
  in_ecx[0xd] = 0.0;
  in_ecx[0xe] = 0.0;
  F_004efe70(in_ecx GEN_EDX_FWD,(uint)(param_2 + 4));
  in_ecx[0xc] = (float)((float10)in_ecx[0xc] + (float10)*param_2);
  in_ecx[0xd] = (float)((float10)param_2[1] + (float10)in_ecx[0xd]);
  in_ecx[0xe] = (float)((float10)param_2[2] + (float10)in_ecx[0xe]);
  return (uint)in_ecx;
}

/* ref: Global::SetHalf2 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066aa90(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x66aa90u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  memcpy(&gen_args[1], &gen_a2, sizeof gen_a2);
  undefined2 * puVar1;
  
  puVar1 = ((undefined2 *)GEN_TOP(F_004d4590((int)&(*(float *)&gen_args[0]) + 2,(*(float *)&gen_args[0]))));
  *param_1 = *puVar1;
  puVar1 = ((undefined2 *)GEN_TOP(F_004d4590((int)&(*(float *)&gen_args[0]) + 2,(*(float *)&gen_args[1]))));
  param_1[1] = *puVar1;
  return (uint)param_1;
}

/* ref: Client::Graphics::Animation::PartialSkeleton::VectorDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066aad0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66aad0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined * pPVar1;
  int iVar2;
  undefined * this;
  
  if ((param_2 & 2) == 0) {
    F_009f95b0(param_1 GEN_EDX_FWD);
    if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,param_1);
    }
  }
  else {
    pPVar1 = param_1 - 0x10;
    iVar2 = *(int *)pPVar1;
    this = param_1 + iVar2 * 0x120;
    while (iVar2 = iVar2 - 1, -1 < iVar2) {
      this = this - 0x120;
      F_009f95b0(this GEN_EDX_ARG);
    }
    param_1 = pPVar1;
    if (((param_2 & 1) != 0) && (pPVar1 != ((undefined *)GEN_TOP(0x0)))) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,pPVar1);
      return (uint)pPVar1;
    }
  }
  return (uint)param_1;
}

/* ref: Global::ScalarDeletingDestructor_0066ab60 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066ab60(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66ab60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_009f1390(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,param_1);
  }
  return param_1;
}

/* ref: Global::ScalarDeletingDestructor_0066ab90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066ab90(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66ab90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_009f1970(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x18))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: Global::RotateVectorByQuaternion */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0066abc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x66abc0u, gen_a0, gen_a1, gen_a2, 0u);
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
  float fVar12;
  float fVar13;
  
  fVar9 = *param_2;
  fVar10 = param_2[1];
  fVar1 = param_2[2];
  fVar2 = param_2[3];
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar5 = param_1[2];
  fVar6 = param_1[3];
  fVar11 = fVar9 * fVar3;
  fVar12 = fVar10 * fVar4;
  fVar13 = fVar1 * fVar5;
  fVar7 = (((fVar12 + fVar11) + fVar13) * fVar3 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) + fVar6 * fVar6) * fVar9) +
          (fVar1 * fVar4 - fVar10 * fVar5) * fVar6;
  fVar8 = (((fVar12 + fVar11) + fVar13) * fVar4 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) + fVar6 * fVar6) * fVar10) +
          (fVar9 * fVar5 - fVar1 * fVar3) * fVar6;
  fVar9 = (((fVar12 + fVar11) + fVar13) * fVar5 +
          (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) + fVar6 * fVar6) * fVar1) +
          (fVar10 * fVar3 - fVar9 * fVar4) * fVar6;
  fVar10 = (((fVar12 + fVar11) + fVar13) * fVar6 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) + fVar6 * fVar6) * fVar2) +
           (fVar2 * fVar6 - fVar2 * fVar6) * fVar6;
  *(float *)this = fVar7 + fVar7;
  *((float *)GEN_TOP(((int)this + 4))) = fVar8 + fVar8;
  *((float *)GEN_TOP(((int)this + 8))) = fVar9 + fVar9;
  *((float *)GEN_TOP(((int)this + 0xc))) = fVar10 + fVar10;
  return 0;
}

/* ref: Global::FreeGraphicsMemory */
GEN_OWN GEN_FRAME uint F_0066ac50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x66ac50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))
                      (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1);
  }
  return uVar1;
}

/* ref: Client::Graphics::Render::BaseRenderer::ScalarDeletingDestructor_0066ac70 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066ac70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66ac70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Render::BGLocalCullingRenderObject::vf6 */
GEN_OWN GEN_NOFRAME byte F_0066acb0(void)
{
  GEN_ENTER(0x66acb0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Graphics::Render::BGLocalCullingRenderObject::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066acc0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66acc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Global::MultiplyTransform */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0066acf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x66acf0u, gen_a0, gen_a1, gen_a2, 0u);
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
  float fVar12;
  float fVar13;
  
  fVar1 = param_1[4];
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  fVar13 = param_1[7];
  fVar12 = *param_2;
  fVar4 = param_2[1];
  fVar5 = param_2[2];
  fVar6 = param_2[3];
  fVar7 = fVar1 * fVar12;
  fVar8 = fVar2 * fVar4;
  fVar9 = fVar3 * fVar5;
  fVar10 = (((fVar8 + fVar7) + fVar9) * fVar1 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) + fVar13 * fVar13) * fVar12)
           + (fVar2 * fVar5 - fVar3 * fVar4) * fVar13;
  fVar11 = (((fVar8 + fVar7) + fVar9) * fVar2 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) + fVar13 * fVar13) * fVar4)
           + (fVar3 * fVar12 - fVar1 * fVar5) * fVar13;
  fVar12 = (((fVar8 + fVar7) + fVar9) * fVar3 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) + fVar13 * fVar13) * fVar5)
           + (fVar1 * fVar4 - fVar2 * fVar12) * fVar13;
  fVar13 = (((fVar8 + fVar7) + fVar9) * fVar13 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) + fVar13 * fVar13) * fVar6)
           + (fVar13 * fVar6 - fVar13 * fVar6) * fVar13;
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = param_1[3];
  *(float *)this = (fVar10 + fVar10) + *param_1;
  *((float *)GEN_TOP(((int)this + 4))) = (fVar11 + fVar11) + fVar1;
  *((float *)GEN_TOP(((int)this + 8))) = (fVar12 + fVar12) + fVar2;
  *((float *)GEN_TOP(((int)this + 0xc))) = (fVar13 + fVar13) + fVar3;
  fVar1 = param_1[4];
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  fVar13 = param_1[7];
  fVar12 = param_2[4];
  fVar4 = param_2[5];
  fVar5 = param_2[6];
  fVar6 = param_2[7];
  *((float *)GEN_TOP(((int)this + 0x10))) = ((fVar5 * fVar2 - fVar4 * fVar3) + fVar13 * fVar12) + fVar6 * fVar1
  ;
  *((float *)GEN_TOP(((int)this + 0x14))) = ((fVar12 * fVar3 - fVar5 * fVar1) + fVar13 * fVar4) + fVar6 * fVar2
  ;
  *((float *)GEN_TOP(((int)this + 0x18))) = ((fVar4 * fVar1 - fVar12 * fVar2) + fVar13 * fVar5) + fVar6 * fVar3
  ;
  *((float *)GEN_TOP(((int)this + 0x1c))) = fVar6 * fVar13 - ((fVar4 * fVar2 + fVar12 * fVar1) + fVar5 * fVar3)
  ;
  fVar1 = param_1[9];
  fVar2 = param_1[10];
  fVar3 = param_1[0xb];
  fVar13 = param_2[9];
  fVar12 = param_2[10];
  fVar4 = param_2[0xb];
  *((float *)GEN_TOP(((int)this + 0x20))) = param_1[8] * param_2[8];
  *((float *)GEN_TOP(((int)this + 0x24))) = fVar1 * fVar13;
  *((float *)GEN_TOP(((int)this + 0x28))) = fVar2 * fVar12;
  *((float *)GEN_TOP(((int)this + 0x2c))) = fVar3 * fVar4;
  return 0;
}

/* ref: Global::MultiplyTransformScaled */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0066ae00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float * param_1, unsigned int gen_a1), GEN_P(float * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x66ae00u, gen_a0, gen_a1, gen_a2, 0u);
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
  float fVar23;
  
  fVar1 = param_1[4];
  fVar2 = param_1[5];
  fVar3 = param_1[6];
  fVar4 = param_1[7];
  fVar13 = param_1[8] * *param_2;
  fVar14 = param_1[9] * param_2[1];
  fVar15 = param_1[10] * param_2[2];
  fVar16 = param_1[0xb] * param_2[3];
  fVar17 = fVar1 * fVar13;
  fVar18 = fVar2 * fVar14;
  fVar19 = fVar3 * fVar15;
  fVar5 = param_2[4];
  fVar6 = param_2[5];
  fVar7 = param_2[6];
  fVar8 = param_2[7];
  fVar20 = (((fVar18 + fVar17) + fVar19) * fVar1 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0)) + fVar4 * fVar4) * fVar13) +
           (fVar2 * fVar15 - fVar3 * fVar14) * fVar4;
  fVar21 = (((fVar18 + fVar17) + fVar19) * fVar2 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4)) + fVar4 * fVar4) * fVar14) +
           (fVar3 * fVar13 - fVar1 * fVar15) * fVar4;
  fVar22 = (((fVar18 + fVar17) + fVar19) * fVar3 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8)) + fVar4 * fVar4) * fVar15) +
           (fVar1 * fVar14 - fVar2 * fVar13) * fVar4;
  fVar23 = (((fVar18 + fVar17) + fVar19) * fVar4 +
           (gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc)) + fVar4 * fVar4) * fVar16) +
           (fVar4 * fVar16 - fVar4 * fVar16) * fVar4;
  fVar13 = param_2[8];
  fVar14 = param_2[9];
  fVar15 = param_2[10];
  fVar16 = param_2[0xb];
  fVar17 = param_1[8];
  fVar18 = param_1[9];
  fVar19 = param_1[10];
  fVar9 = param_1[0xb];
  fVar10 = param_1[1];
  fVar11 = param_1[2];
  fVar12 = param_1[3];
  *(float *)this = (fVar20 + fVar20) + *param_1;
  *((float *)GEN_TOP(((int)this + 4))) = (fVar21 + fVar21) + fVar10;
  *((float *)GEN_TOP(((int)this + 8))) = (fVar22 + fVar22) + fVar11;
  *((float *)GEN_TOP(((int)this + 0xc))) = (fVar23 + fVar23) + fVar12;
  *((float *)GEN_TOP(((int)this + 0x10))) = ((fVar7 * fVar2 - fVar6 * fVar3) + fVar4 * fVar5) + fVar8 * fVar1;
  *((float *)GEN_TOP(((int)this + 0x14))) = ((fVar5 * fVar3 - fVar7 * fVar1) + fVar4 * fVar6) + fVar8 * fVar2;
  *((float *)GEN_TOP(((int)this + 0x18))) = ((fVar6 * fVar1 - fVar5 * fVar2) + fVar4 * fVar7) + fVar8 * fVar3;
  *((float *)GEN_TOP(((int)this + 0x1c))) = fVar8 * fVar4 - ((fVar6 * fVar2 + fVar5 * fVar1) + fVar7 * fVar3);
  *((float *)GEN_TOP(((int)this + 0x20))) = fVar13 * fVar17;
  *((float *)GEN_TOP(((int)this + 0x24))) = fVar14 * fVar18;
  *((float *)GEN_TOP(((int)this + 0x28))) = fVar15 * fVar19;
  *((float *)GEN_TOP(((int)this + 0x2c))) = fVar16 * fVar9;
  return 0;
}

/* ref: Client::Graphics::Render::FigureRenderer::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066bb60(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66bb60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x10abe04));
  puVar1 = param_1 + 0xd;
  iVar2 = 1;
  do {
    puVar1 = puVar1 - 3;
    iVar2 = iVar2 - 1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  } while (-1 < iVar2);
  puVar1 = param_1 + 7;
  iVar2 = 1;
  do {
    puVar1 = puVar1 - 3;
    iVar2 = iVar2 - 1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Render::CloudRenderer::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066bbc0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66bbc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00624210(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: Global::SetBoneLocalTransform */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0066bbf0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 * param_3, unsigned int gen_a2), GEN_P(char param_4, unsigned int gen_a3))
{
  GEN_ENTER(0x66bbf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_PIN(char param_4 = (char)gen_a3;)
  GEN_FRAME_DECL(0x50, 0);
  uint * puVar1;
  float * pfVar2;
  undefined4 * puVar3;
  undefined1 auVar4 [16];
  short sVar5;
  int * piVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 * puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  undefined4 * puVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  float * pfVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar42 [16];
  
  puVar12 = ((undefined4 *)GEN_TOP((REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40))));
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar12;
  piVar6 = *((int * PTR32 *)GEN_TOP((param_1 + 0xbc)));
  if (piVar6 != ((int *)GEN_TOP(0x0))) {
    iVar19 = *((int *)GEN_TOP((*piVar6 + 0x1c)));
    puVar1 = ((uint *)GEN_TOP((piVar6[7] + (short)param_2 * 4)));
    *puVar1 = *puVar1 | 4;
    iVar13 = (short)param_2 + 1;
    if (iVar13 < iVar19) {
      iVar20 = iVar13 * 0x30;
      iVar18 = iVar13;
      do {
        sVar5 = *((short *)GEN_TOP((*((int *)GEN_TOP((*piVar6 + 0xc))) + iVar18 * 2)));
        if ((sVar5 != -1) && ((*((byte *)GEN_TOP((piVar6[7] + sVar5 * 4))) & 4) != 0)) {
          if ((*((byte *)GEN_TOP((piVar6[7] + iVar18 * 4))) & 1) != 0) {
            iVar21 = piVar6[4];
            if (sVar5 == -1) {
              puVar12 = ((undefined4 *)GEN_TOP((iVar21 + iVar20)));
              uVar9 = puVar12[1];
              uVar10 = puVar12[2];
              uVar11 = puVar12[3];
              puVar17 = ((undefined4 *)GEN_TOP((piVar6[1] + iVar20)));
              puVar3 = ((undefined4 *)GEN_TOP((iVar21 + 0x10 + iVar20)));
              *puVar17 = *puVar12;
              puVar17[1] = uVar9;
              puVar17[2] = uVar10;
              puVar17[3] = uVar11;
              uVar9 = puVar3[1];
              uVar10 = puVar3[2];
              uVar11 = puVar3[3];
              puVar17[4] = *puVar3;
              puVar17[5] = uVar9;
              puVar17[6] = uVar10;
              puVar17[7] = uVar11;
              puVar12 = ((undefined4 *)GEN_TOP((iVar21 + 0x20 + iVar20)));
              uVar9 = puVar12[1];
              uVar10 = puVar12[2];
              uVar11 = puVar12[3];
              puVar17[8] = *puVar12;
              puVar17[9] = uVar9;
              puVar17[10] = uVar10;
              puVar17[0xb] = uVar11;
            }
            else {
              iVar14 = (int)sVar5;
              if ((*((byte *)GEN_TOP((piVar6[7] + iVar14 * 4))) & 2) == 0) {
                uVar15 = iVar14 * 0x30 + iVar21;
              }
              else {
                uVar15 = F_00d31930(piVar6 GEN_EDX_FWD,iVar14);
              }
              pfVar22 = ((float *)GEN_TOP((piVar6[1] + iVar20)));
              F_00d95160(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar15 + 0x10,uVar15);
              fVar23 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x0))) ^ *(uint *)&REFG(undefined, 0x10ab9c0));
              fVar25 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x4))) ^ *(uint *)&REFG(undefined, 0x10ab9c4));
              fVar27 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x8))) ^ *(uint *)&REFG(undefined, 0x10ab9c8));
              fVar29 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xc))) ^ *(uint *)&REFG(undefined, 0x10ab9cc));
              memcpy(&(auVar4), &(*((gen_v16 *)GEN_TOP((uVar15 + 0x20)))), sizeof(*((gen_v16 *)GEN_TOP((uVar15 + 0x20)))) < sizeof(auVar4) ? sizeof(*((gen_v16 *)GEN_TOP((uVar15 + 0x20)))) : sizeof(auVar4));
              gen_rcpps(&(auVar42), &(in_XMM3), &(auVar4));
              fVar31 = gen_bits2f((uint)gen_fl2bits((*(float *)&REFG(undefined, 0x10ab950) -
                                                    (*(float *)((char *)&auVar4 + 0)) * (*(float *)((char *)&auVar42 + 0))) * (*(float *)((char *)&auVar42 + 0))
                                                   ) & *(uint *)&REFG(undefined, 0x10abc20));
              fVar33 = gen_bits2f((uint)gen_fl2bits((*(float *)&REFG(undefined, 0x10ab954) -
                                                    (*(float *)((char *)&auVar4 + 4)) * (*(float *)((char *)&auVar42 + 4))) * (*(float *)((char *)&auVar42 + 4))
                                                   ) & *(uint *)&REFG(undefined, 0x10abc24));
              fVar35 = gen_bits2f((uint)gen_fl2bits((*(float *)&REFG(undefined, 0x10ab958) -
                                                    (*(float *)((char *)&auVar4 + 8)) * (*(float *)((char *)&auVar42 + 8))) * (*(float *)((char *)&auVar42 + 8))
                                                   ) & *(uint *)&REFG(undefined, 0x10abc28));
              fVar37 = gen_bits2f((uint)gen_fl2bits((*(float *)&REFG(undefined, 0x10ab95c) -
                                                    (*(float *)((char *)&auVar4 + 12)) * (*(float *)((char *)&auVar42 + 12))) *
                                                    (*(float *)((char *)&auVar42 + 12))) & *(uint *)&REFG(undefined, 0x10abc2c));
              (*(float *)(gen_frame + 0x20)) = fVar31;
              (*(float *)(gen_frame + 0x24)) = fVar33;
              (*(float *)(gen_frame + 0x28)) = fVar35;
              (*(float *)(gen_frame + 0x2c)) = fVar37;
              (*(float *)(gen_frame + 0x0)) = fVar23;
              (*(float *)(gen_frame + 0x4)) = fVar25;
              (*(float *)(gen_frame + 0x8)) = fVar27;
              (*(float *)(gen_frame + 0xc)) = fVar29;
              fVar24 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9b0) ^ *((uint *)GEN_TOP((uVar15 + 0x10))));
              fVar26 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9b4) ^ *((uint *)GEN_TOP((uVar15 + 0x14))));
              fVar28 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9b8) ^ *((uint *)GEN_TOP((uVar15 + 0x18))));
              fVar30 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9bc) ^ *((uint *)GEN_TOP((uVar15 + 0x1c))));
              pfVar2 = ((float *)GEN_TOP((iVar21 + iVar20)));
              fVar40 = *pfVar2;
              fVar41 = pfVar2[1];
              fVar7 = pfVar2[2];
              fVar8 = pfVar2[3];
              fVar32 = fVar40 * fVar24;
              fVar34 = fVar41 * fVar26;
              fVar36 = fVar7 * fVar28;
              (*(undefined4 *)((char *)&in_XMM3 + 4)) = (undefined4)gen_fl2bits(fVar30);
              (*(undefined4 *)((char *)&in_XMM3 + 0)) = (undefined4)gen_fl2bits(fVar30);
              (*(undefined4 *)((char *)&in_XMM3 + 8)) = (undefined4)gen_fl2bits(fVar30);
              (*(undefined4 *)((char *)&in_XMM3 + 12)) = (undefined4)gen_fl2bits(fVar30);
              fVar38 = (((fVar34 + fVar32) + fVar36) * fVar24 +
                       (fVar30 * fVar30 +
                       gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) * fVar40) +
                       (fVar7 * fVar26 - fVar41 * fVar28) * fVar30;
              fVar39 = (((fVar34 + fVar32) + fVar36) * fVar26 +
                       (fVar30 * fVar30 +
                       gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) * fVar41) +
                       (fVar40 * fVar28 - fVar7 * fVar24) * fVar30;
              fVar40 = (((fVar34 + fVar32) + fVar36) * fVar28 +
                       (fVar30 * fVar30 +
                       gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) * fVar7) +
                       (fVar41 * fVar24 - fVar40 * fVar26) * fVar30;
              fVar41 = (((fVar34 + fVar32) + fVar36) * fVar30 +
                       (fVar30 * fVar30 +
                       gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) * fVar8) +
                       (fVar8 * fVar30 - fVar8 * fVar30) * fVar30;
              *pfVar22 = (fVar38 + fVar38) + fVar23;
              pfVar22[1] = (fVar39 + fVar39) + fVar25;
              pfVar22[2] = (fVar40 + fVar40) + fVar27;
              pfVar22[3] = (fVar41 + fVar41) + fVar29;
              pfVar2 = ((float *)GEN_TOP((iVar21 + 0x10 + iVar20)));
              fVar40 = *pfVar2;
              fVar41 = pfVar2[1];
              fVar7 = pfVar2[2];
              fVar8 = pfVar2[3];
              pfVar22[4] = ((fVar7 * fVar26 - fVar41 * fVar28) + fVar30 * fVar40) + fVar8 * fVar24;
              pfVar22[5] = ((fVar40 * fVar28 - fVar7 * fVar24) + fVar30 * fVar41) + fVar8 * fVar26;
              pfVar22[6] = ((fVar41 * fVar24 - fVar40 * fVar26) + fVar30 * fVar7) + fVar8 * fVar28;
              pfVar22[7] = fVar8 * fVar30 - ((fVar41 * fVar26 + fVar40 * fVar24) + fVar7 * fVar28);
              pfVar2 = ((float *)GEN_TOP((iVar21 + 0x20 + iVar20)));
              fVar40 = pfVar2[1];
              fVar41 = pfVar2[2];
              fVar7 = pfVar2[3];
              pfVar22[8] = *pfVar2 * fVar31;
              pfVar22[9] = fVar40 * fVar33;
              pfVar22[10] = fVar41 * fVar35;
              pfVar22[0xb] = fVar7 * fVar37;
            }
            puVar1 = ((uint *)GEN_TOP((piVar6[7] + iVar18 * 4)));
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          puVar1 = ((uint *)GEN_TOP((piVar6[7] + iVar18 * 4)));
          *puVar1 = *puVar1 | 4;
          *(undefined1 *)(piVar6 + 10) = 0;
        }
        iVar18 = iVar18 + 1;
        iVar20 = iVar20 + 0x30;
      } while (iVar18 < iVar19);
    }
    for (; iVar13 < iVar19; iVar13 = iVar13 + 1) {
      uVar15 = *((uint *)GEN_TOP((piVar6[7] + iVar13 * 4)));
      if ((uVar15 & 4) != 0) {
        *((uint *)GEN_TOP((piVar6[7] + iVar13 * 4))) = uVar15 & 0xfffffffb | 2;
      }
    }
    uVar9 = param_3[1];
    uVar10 = param_3[2];
    uVar11 = param_3[3];
    puVar12 = ((undefined4 *)GEN_TOP(((short)param_2 * 0x30 + piVar6[4])));
    *puVar12 = *param_3;
    puVar12[1] = uVar9;
    puVar12[2] = uVar10;
    puVar12[3] = uVar11;
    uVar9 = param_3[5];
    uVar10 = param_3[6];
    uVar11 = param_3[7];
    puVar12[4] = param_3[4];
    puVar12[5] = uVar9;
    puVar12[6] = uVar10;
    puVar12[7] = uVar11;
    uVar9 = param_3[9];
    uVar10 = param_3[10];
    uVar11 = param_3[0xb];
    puVar12[8] = param_3[8];
    puVar12[9] = uVar9;
    puVar12[10] = uVar10;
    puVar12[0xb] = uVar11;
    *((undefined4 *)GEN_TOP((piVar6[7] + (short)param_2 * 4))) = 1;
    *((undefined1 *)GEN_TOP(((int)piVar6 + 0x29))) = 0;
  }
  if ((param_4 != '\0') && (piVar6 = *((int * PTR32 *)GEN_TOP((param_1 + 0xc0))), piVar6 != ((int *)GEN_TOP(0x0)))) {
    iVar20 = (int)(short)param_2;
    iVar13 = *((int *)GEN_TOP((*piVar6 + 0x1c)));
    puVar1 = ((uint *)GEN_TOP((piVar6[7] + iVar20 * 4)));
    *puVar1 = *puVar1 | 4;
    iVar19 = iVar20 + 1;
    iVar18 = iVar20;
    if (iVar19 < iVar13) {
      iVar21 = iVar19 * 0x30;
      do {
        sVar5 = *((short *)GEN_TOP((*((int *)GEN_TOP((*piVar6 + 0xc))) + iVar19 * 2)));
        if ((sVar5 != -1) && ((*((byte *)GEN_TOP((piVar6[7] + sVar5 * 4))) & 4) != 0)) {
          if ((*((byte *)GEN_TOP((piVar6[7] + iVar19 * 4))) & 1) != 0) {
            iVar14 = piVar6[4];
            if (sVar5 == -1) {
              puVar12 = ((undefined4 *)GEN_TOP((iVar14 + iVar21)));
              uVar9 = puVar12[1];
              uVar10 = puVar12[2];
              uVar11 = puVar12[3];
              puVar17 = ((undefined4 *)GEN_TOP((piVar6[1] + iVar21)));
              puVar3 = ((undefined4 *)GEN_TOP((iVar14 + 0x10 + iVar21)));
              *puVar17 = *puVar12;
              puVar17[1] = uVar9;
              puVar17[2] = uVar10;
              puVar17[3] = uVar11;
              uVar9 = puVar3[1];
              uVar10 = puVar3[2];
              uVar11 = puVar3[3];
              puVar17[4] = *puVar3;
              puVar17[5] = uVar9;
              puVar17[6] = uVar10;
              puVar17[7] = uVar11;
              puVar12 = ((undefined4 *)GEN_TOP((iVar14 + 0x20 + iVar21)));
              uVar9 = puVar12[1];
              uVar10 = puVar12[2];
              uVar11 = puVar12[3];
              puVar17[8] = *puVar12;
              puVar17[9] = uVar9;
              puVar17[10] = uVar10;
              puVar17[0xb] = uVar11;
            }
            else {
              iVar16 = (int)sVar5;
              if ((*((byte *)GEN_TOP((piVar6[7] + iVar16 * 4))) & 2) == 0) {
                uVar15 = iVar16 * 0x30 + iVar14;
              }
              else {
                uVar15 = F_00d31930(piVar6 GEN_EDX_ARG,iVar16);
              }
              pfVar22 = ((float *)GEN_TOP((piVar6[1] + iVar21)));
              F_00d95160(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar15 + 0x10,uVar15);
              fVar23 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x0))) ^ *(uint *)&REFG(undefined, 0x10ab9c0));
              fVar25 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x4))) ^ *(uint *)&REFG(undefined, 0x10ab9c4));
              fVar27 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0x8))) ^ *(uint *)&REFG(undefined, 0x10ab9c8));
              fVar29 = gen_bits2f((uint)gen_fl2bits((*(float *)(gen_frame + 0xc))) ^ *(uint *)&REFG(undefined, 0x10ab9cc));
              memcpy(&(auVar4), &(*((gen_v16 *)GEN_TOP((uVar15 + 0x20)))), sizeof(*((gen_v16 *)GEN_TOP((uVar15 + 0x20)))) < sizeof(auVar4) ? sizeof(*((gen_v16 *)GEN_TOP((uVar15 + 0x20)))) : sizeof(auVar4));
              gen_rcpps(&(auVar42), &(in_XMM3), &(auVar4));
              fVar31 = gen_bits2f((uint)gen_fl2bits((*(float *)&REFG(undefined, 0x10ab950) -
                                                    (*(float *)((char *)&auVar4 + 0)) * (*(float *)((char *)&auVar42 + 0))) * (*(float *)((char *)&auVar42 + 0))
                                                   ) & *(uint *)&REFG(undefined, 0x10abc20));
              fVar33 = gen_bits2f((uint)gen_fl2bits((*(float *)&REFG(undefined, 0x10ab954) -
                                                    (*(float *)((char *)&auVar4 + 4)) * (*(float *)((char *)&auVar42 + 4))) * (*(float *)((char *)&auVar42 + 4))
                                                   ) & *(uint *)&REFG(undefined, 0x10abc24));
              fVar35 = gen_bits2f((uint)gen_fl2bits((*(float *)&REFG(undefined, 0x10ab958) -
                                                    (*(float *)((char *)&auVar4 + 8)) * (*(float *)((char *)&auVar42 + 8))) * (*(float *)((char *)&auVar42 + 8))
                                                   ) & *(uint *)&REFG(undefined, 0x10abc28));
              fVar37 = gen_bits2f((uint)gen_fl2bits((*(float *)&REFG(undefined, 0x10ab95c) -
                                                    (*(float *)((char *)&auVar4 + 12)) * (*(float *)((char *)&auVar42 + 12))) *
                                                    (*(float *)((char *)&auVar42 + 12))) & *(uint *)&REFG(undefined, 0x10abc2c));
              (*(float *)(gen_frame + 0x20)) = fVar31;
              (*(float *)(gen_frame + 0x24)) = fVar33;
              (*(float *)(gen_frame + 0x28)) = fVar35;
              (*(float *)(gen_frame + 0x2c)) = fVar37;
              (*(float *)(gen_frame + 0x0)) = fVar23;
              (*(float *)(gen_frame + 0x4)) = fVar25;
              (*(float *)(gen_frame + 0x8)) = fVar27;
              (*(float *)(gen_frame + 0xc)) = fVar29;
              fVar24 = gen_bits2f(*((uint *)GEN_TOP((uVar15 + 0x10))) ^ *(uint *)&REFG(undefined, 0x10ab9b0));
              fVar26 = gen_bits2f(*((uint *)GEN_TOP((uVar15 + 0x14))) ^ *(uint *)&REFG(undefined, 0x10ab9b4));
              fVar28 = gen_bits2f(*((uint *)GEN_TOP((uVar15 + 0x18))) ^ *(uint *)&REFG(undefined, 0x10ab9b8));
              fVar30 = gen_bits2f(*((uint *)GEN_TOP((uVar15 + 0x1c))) ^ *(uint *)&REFG(undefined, 0x10ab9bc));
              pfVar2 = ((float *)GEN_TOP((iVar14 + iVar21)));
              fVar40 = *pfVar2;
              fVar41 = pfVar2[1];
              fVar7 = pfVar2[2];
              fVar8 = pfVar2[3];
              fVar32 = fVar40 * fVar24;
              fVar34 = fVar41 * fVar26;
              fVar36 = fVar7 * fVar28;
              (*(undefined4 *)((char *)&in_XMM3 + 4)) = (undefined4)gen_fl2bits(fVar30);
              (*(undefined4 *)((char *)&in_XMM3 + 0)) = (undefined4)gen_fl2bits(fVar30);
              (*(undefined4 *)((char *)&in_XMM3 + 8)) = (undefined4)gen_fl2bits(fVar30);
              (*(undefined4 *)((char *)&in_XMM3 + 12)) = (undefined4)gen_fl2bits(fVar30);
              fVar38 = (((fVar34 + fVar32) + fVar36) * fVar24 +
                       (fVar30 * fVar30 +
                       gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) * fVar40) +
                       (fVar7 * fVar26 - fVar41 * fVar28) * fVar30;
              fVar39 = (((fVar34 + fVar32) + fVar36) * fVar26 +
                       (fVar30 * fVar30 +
                       gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) * fVar41) +
                       (fVar40 * fVar28 - fVar7 * fVar24) * fVar30;
              fVar40 = (((fVar34 + fVar32) + fVar36) * fVar28 +
                       (fVar30 * fVar30 +
                       gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) * fVar7) +
                       (fVar41 * fVar24 - fVar40 * fVar26) * fVar30;
              fVar41 = (((fVar34 + fVar32) + fVar36) * fVar30 +
                       (fVar30 * fVar30 +
                       gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) * fVar8) +
                       (fVar8 * fVar30 - fVar8 * fVar30) * fVar30;
              *pfVar22 = (fVar38 + fVar38) + fVar23;
              pfVar22[1] = (fVar39 + fVar39) + fVar25;
              pfVar22[2] = (fVar40 + fVar40) + fVar27;
              pfVar22[3] = (fVar41 + fVar41) + fVar29;
              pfVar2 = ((float *)GEN_TOP((iVar14 + 0x10 + iVar21)));
              fVar40 = *pfVar2;
              fVar41 = pfVar2[1];
              fVar7 = pfVar2[2];
              fVar8 = pfVar2[3];
              pfVar22[4] = ((fVar7 * fVar26 - fVar41 * fVar28) + fVar30 * fVar40) + fVar8 * fVar24;
              pfVar22[5] = ((fVar40 * fVar28 - fVar7 * fVar24) + fVar30 * fVar41) + fVar8 * fVar26;
              pfVar22[6] = ((fVar41 * fVar24 - fVar40 * fVar26) + fVar30 * fVar7) + fVar8 * fVar28;
              pfVar22[7] = fVar8 * fVar30 - ((fVar41 * fVar26 + fVar40 * fVar24) + fVar7 * fVar28);
              pfVar2 = ((float *)GEN_TOP((iVar14 + 0x20 + iVar21)));
              fVar40 = pfVar2[1];
              fVar41 = pfVar2[2];
              fVar7 = pfVar2[3];
              pfVar22[8] = *pfVar2 * fVar31;
              pfVar22[9] = fVar40 * fVar33;
              pfVar22[10] = fVar41 * fVar35;
              pfVar22[0xb] = fVar7 * fVar37;
            }
            puVar1 = ((uint *)GEN_TOP((piVar6[7] + iVar19 * 4)));
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          puVar1 = ((uint *)GEN_TOP((piVar6[7] + iVar19 * 4)));
          *puVar1 = *puVar1 | 4;
          *(undefined1 *)(piVar6 + 10) = 0;
        }
        iVar19 = iVar19 + 1;
        iVar21 = iVar21 + 0x30;
      } while (iVar19 < iVar13);
    }
    while (iVar18 = iVar18 + 1, iVar18 < iVar13) {
      uVar15 = *((uint *)GEN_TOP((piVar6[7] + iVar18 * 4)));
      if ((uVar15 & 4) != 0) {
        *((uint *)GEN_TOP((piVar6[7] + iVar18 * 4))) = uVar15 & 0xfffffffb | 2;
      }
    }
    uVar9 = param_3[1];
    uVar10 = param_3[2];
    uVar11 = param_3[3];
    puVar12 = ((undefined4 *)GEN_TOP((iVar20 * 0x30 + piVar6[4])));
    *puVar12 = *param_3;
    puVar12[1] = uVar9;
    puVar12[2] = uVar10;
    puVar12[3] = uVar11;
    uVar9 = param_3[5];
    uVar10 = param_3[6];
    uVar11 = param_3[7];
    puVar12[4] = param_3[4];
    puVar12[5] = uVar9;
    puVar12[6] = uVar10;
    puVar12[7] = uVar11;
    uVar9 = param_3[9];
    uVar10 = param_3[10];
    uVar11 = param_3[0xb];
    puVar12[8] = param_3[8];
    puVar12[9] = uVar9;
    puVar12[10] = uVar10;
    puVar12[0xb] = uVar11;
    *((undefined4 *)GEN_TOP((piVar6[7] + iVar20 * 4))) = 1;
    *((undefined1 *)GEN_TOP(((int)piVar6 + 0x29))) = 0;
  }
  return (uint)puVar12;
}

/* ref: Global::SetBoneModelTransform */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0066c190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x66c190u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL(0x50, 0);
  uint * puVar1;
  float * pfVar2;
  undefined4 * puVar3;
  undefined1 auVar4 [16];
  short sVar5;
  int * this_00;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 * puVar13;
  int iVar14;
  uint uVar15;
  undefined4 * puVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  float * pfVar20;
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
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined1 in_XMM3 [16] = {0};
  undefined1 auVar40 [16];
  
  puVar13 = ((undefined4 *)GEN_TOP((REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x40))));
  (*(undefined4 * PTR32 *)(gen_frame + 0x3c)) = puVar13;
  this_00 = *((int * PTR32 *)GEN_TOP(((int)this + 0xbc)));
  if (this_00 != ((int *)GEN_TOP(0x0))) {
    iVar6 = *((int *)GEN_TOP((*this_00 + 0x1c)));
    puVar1 = ((uint *)GEN_TOP((this_00[7] + (short)param_1 * 4)));
    *puVar1 = *puVar1 | 4;
    iVar17 = (short)param_1 + 1;
    if (iVar17 < iVar6) {
      iVar19 = iVar17 * 0x30;
      iVar18 = iVar17;
      do {
        sVar5 = *((short *)GEN_TOP((*((int *)GEN_TOP((*this_00 + 0xc))) + iVar18 * 2)));
        if ((sVar5 != -1) && ((*((byte *)GEN_TOP((this_00[7] + sVar5 * 4))) & 4) != 0)) {
          if ((*((byte *)GEN_TOP((this_00[7] + iVar18 * 4))) & 1) != 0) {
            iVar7 = this_00[4];
            if (sVar5 == -1) {
              puVar13 = ((undefined4 *)GEN_TOP((iVar7 + iVar19)));
              uVar10 = puVar13[1];
              uVar11 = puVar13[2];
              uVar12 = puVar13[3];
              puVar16 = ((undefined4 *)GEN_TOP((this_00[1] + iVar19)));
              puVar3 = ((undefined4 *)GEN_TOP((iVar7 + 0x10 + iVar19)));
              *puVar16 = *puVar13;
              puVar16[1] = uVar10;
              puVar16[2] = uVar11;
              puVar16[3] = uVar12;
              uVar10 = puVar3[1];
              uVar11 = puVar3[2];
              uVar12 = puVar3[3];
              puVar16[4] = *puVar3;
              puVar16[5] = uVar10;
              puVar16[6] = uVar11;
              puVar16[7] = uVar12;
              puVar13 = ((undefined4 *)GEN_TOP((iVar7 + 0x20 + iVar19)));
              uVar10 = puVar13[1];
              uVar11 = puVar13[2];
              uVar12 = puVar13[3];
              puVar16[8] = *puVar13;
              puVar16[9] = uVar10;
              puVar16[10] = uVar11;
              puVar16[0xb] = uVar12;
            }
            else {
              iVar14 = (int)sVar5;
              if ((*((byte *)GEN_TOP((this_00[7] + iVar14 * 4))) & 2) == 0) {
                uVar15 = iVar14 * 0x30 + iVar7;
              }
              else {
                uVar15 = F_00d31930(this_00 GEN_EDX_FWD,iVar14);
              }
              pfVar20 = ((float *)GEN_TOP((this_00[1] + iVar19)));
              F_00d95160(&(*(float *)(gen_frame + 0x0)) GEN_EDX_ARG,uVar15 + 0x10,uVar15);
              memcpy(&(auVar4), &(*((gen_v16 *)GEN_TOP((uVar15 + 0x20)))), sizeof(*((gen_v16 *)GEN_TOP((uVar15 + 0x20)))) < sizeof(auVar4) ? sizeof(*((gen_v16 *)GEN_TOP((uVar15 + 0x20)))) : sizeof(auVar4));
              gen_rcpps(&(auVar40), &(in_XMM3), &(auVar4));
              fVar29 = gen_bits2f((uint)gen_fl2bits((*(float *)&REFG(undefined, 0x10ab950) -
                                                    (*(float *)((char *)&auVar4 + 0)) * (*(float *)((char *)&auVar40 + 0))) * (*(float *)((char *)&auVar40 + 0))
                                                   ) & *(uint *)&REFG(undefined, 0x10abc20));
              fVar31 = gen_bits2f((uint)gen_fl2bits((*(float *)&REFG(undefined, 0x10ab954) -
                                                    (*(float *)((char *)&auVar4 + 4)) * (*(float *)((char *)&auVar40 + 4))) * (*(float *)((char *)&auVar40 + 4))
                                                   ) & *(uint *)&REFG(undefined, 0x10abc24));
              fVar33 = gen_bits2f((uint)gen_fl2bits((*(float *)&REFG(undefined, 0x10ab958) -
                                                    (*(float *)((char *)&auVar4 + 8)) * (*(float *)((char *)&auVar40 + 8))) * (*(float *)((char *)&auVar40 + 8))
                                                   ) & *(uint *)&REFG(undefined, 0x10abc28));
              fVar35 = gen_bits2f((uint)gen_fl2bits((*(float *)&REFG(undefined, 0x10ab95c) -
                                                    (*(float *)((char *)&auVar4 + 12)) * (*(float *)((char *)&auVar40 + 12))) *
                                                    (*(float *)((char *)&auVar40 + 12))) & *(uint *)&REFG(undefined, 0x10abc2c));
              (*(float *)(gen_frame + 0x20)) = fVar29;
              (*(float *)(gen_frame + 0x24)) = fVar31;
              (*(float *)(gen_frame + 0x28)) = fVar33;
              (*(float *)(gen_frame + 0x2c)) = fVar35;
              fVar21 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9c0) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x0))));
              fVar23 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9c4) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x4))));
              fVar25 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9c8) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0x8))));
              fVar27 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9cc) ^ (uint)gen_fl2bits((*(float *)(gen_frame + 0xc))));
              (*(float *)(gen_frame + 0x0)) = fVar21;
              (*(float *)(gen_frame + 0x4)) = fVar23;
              (*(float *)(gen_frame + 0x8)) = fVar25;
              (*(float *)(gen_frame + 0xc)) = fVar27;
              fVar22 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9b0) ^ *((uint *)GEN_TOP((uVar15 + 0x10))));
              fVar24 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9b4) ^ *((uint *)GEN_TOP((uVar15 + 0x14))));
              fVar26 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9b8) ^ *((uint *)GEN_TOP((uVar15 + 0x18))));
              fVar28 = gen_bits2f(*(uint *)&REFG(undefined, 0x10ab9bc) ^ *((uint *)GEN_TOP((uVar15 + 0x1c))));
              pfVar2 = ((float *)GEN_TOP((iVar7 + iVar19)));
              fVar38 = *pfVar2;
              fVar39 = pfVar2[1];
              fVar8 = pfVar2[2];
              fVar9 = pfVar2[3];
              fVar30 = fVar38 * fVar22;
              fVar32 = fVar39 * fVar24;
              fVar34 = fVar8 * fVar26;
              (*(undefined4 *)((char *)&in_XMM3 + 4)) = (undefined4)gen_fl2bits(fVar28);
              (*(undefined4 *)((char *)&in_XMM3 + 0)) = (undefined4)gen_fl2bits(fVar28);
              (*(undefined4 *)((char *)&in_XMM3 + 8)) = (undefined4)gen_fl2bits(fVar28);
              (*(undefined4 *)((char *)&in_XMM3 + 12)) = (undefined4)gen_fl2bits(fVar28);
              fVar36 = (((fVar32 + fVar30) + fVar34) * fVar22 +
                       (fVar28 * fVar28 +
                       gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd0) ^ *(uint *)&REFG(undefined, 0x10ab9c0))) * fVar38) +
                       (fVar8 * fVar24 - fVar39 * fVar26) * fVar28;
              fVar37 = (((fVar32 + fVar30) + fVar34) * fVar24 +
                       (fVar28 * fVar28 +
                       gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd4) ^ *(uint *)&REFG(undefined, 0x10ab9c4))) * fVar39) +
                       (fVar38 * fVar26 - fVar8 * fVar22) * fVar28;
              fVar38 = (((fVar32 + fVar30) + fVar34) * fVar26 +
                       (fVar28 * fVar28 +
                       gen_bits2f(*(uint *)&REFG(undefined, 0x1138bd8) ^ *(uint *)&REFG(undefined, 0x10ab9c8))) * fVar8) +
                       (fVar39 * fVar22 - fVar38 * fVar24) * fVar28;
              fVar39 = (((fVar32 + fVar30) + fVar34) * fVar28 +
                       (fVar28 * fVar28 +
                       gen_bits2f(*(uint *)&REFG(undefined, 0x1138bdc) ^ *(uint *)&REFG(undefined, 0x10ab9cc))) * fVar9) +
                       (fVar9 * fVar28 - fVar9 * fVar28) * fVar28;
              *pfVar20 = (fVar36 + fVar36) + fVar21;
              pfVar20[1] = (fVar37 + fVar37) + fVar23;
              pfVar20[2] = (fVar38 + fVar38) + fVar25;
              pfVar20[3] = (fVar39 + fVar39) + fVar27;
              pfVar2 = ((float *)GEN_TOP((iVar7 + 0x10 + iVar19)));
              fVar38 = *pfVar2;
              fVar39 = pfVar2[1];
              fVar8 = pfVar2[2];
              fVar9 = pfVar2[3];
              pfVar20[4] = ((fVar8 * fVar24 - fVar39 * fVar26) + fVar28 * fVar38) + fVar9 * fVar22;
              pfVar20[5] = ((fVar38 * fVar26 - fVar8 * fVar22) + fVar28 * fVar39) + fVar9 * fVar24;
              pfVar20[6] = ((fVar39 * fVar22 - fVar38 * fVar24) + fVar28 * fVar8) + fVar9 * fVar26;
              pfVar20[7] = fVar9 * fVar28 - ((fVar39 * fVar24 + fVar38 * fVar22) + fVar8 * fVar26);
              pfVar2 = ((float *)GEN_TOP((iVar7 + 0x20 + iVar19)));
              fVar38 = pfVar2[1];
              fVar39 = pfVar2[2];
              fVar8 = pfVar2[3];
              pfVar20[8] = *pfVar2 * fVar29;
              pfVar20[9] = fVar38 * fVar31;
              pfVar20[10] = fVar39 * fVar33;
              pfVar20[0xb] = fVar8 * fVar35;
            }
            puVar1 = ((uint *)GEN_TOP((this_00[7] + iVar18 * 4)));
            *puVar1 = *puVar1 & 0xfffffffe;
          }
          puVar1 = ((uint *)GEN_TOP((this_00[7] + iVar18 * 4)));
          *puVar1 = *puVar1 | 4;
          *(undefined1 *)(this_00 + 10) = 0;
        }
        iVar18 = iVar18 + 1;
        iVar19 = iVar19 + 0x30;
      } while (iVar18 < iVar6);
    }
    for (; iVar17 < iVar6; iVar17 = iVar17 + 1) {
      uVar15 = *((uint *)GEN_TOP((this_00[7] + iVar17 * 4)));
      if ((uVar15 & 4) != 0) {
        *((uint *)GEN_TOP((this_00[7] + iVar17 * 4))) = uVar15 & 0xfffffffb | 2;
      }
    }
    uVar10 = param_2[1];
    uVar11 = param_2[2];
    uVar12 = param_2[3];
    puVar13 = ((undefined4 *)GEN_TOP(((short)param_1 * 0x30 + this_00[1])));
    *puVar13 = *param_2;
    puVar13[1] = uVar10;
    puVar13[2] = uVar11;
    puVar13[3] = uVar12;
    uVar10 = param_2[5];
    uVar11 = param_2[6];
    uVar12 = param_2[7];
    puVar13[4] = param_2[4];
    puVar13[5] = uVar10;
    puVar13[6] = uVar11;
    puVar13[7] = uVar12;
    uVar10 = param_2[9];
    uVar11 = param_2[10];
    uVar12 = param_2[0xb];
    puVar13[8] = param_2[8];
    puVar13[9] = uVar10;
    puVar13[10] = uVar11;
    puVar13[0xb] = uVar12;
    *((undefined4 *)GEN_TOP((this_00[7] + (short)param_1 * 4))) = 2;
    *(undefined1 *)(this_00 + 10) = 0;
  }
  return (uint)puVar13;
}

/* ref: FUN_0066c470 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066c470(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(float param_2, float gen_a1), GEN_P(int param_3, unsigned int gen_a2))
{
  GEN_ENTER(0x66c470u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(float param_2 = (float)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = *((int *)GEN_TOP(((int)param_1 + param_3 * 4 + 0xb4)));
  if ((iVar1 != 0) && (*((int *)GEN_TOP((iVar1 + 0x14))) != 0)) {
    uVar2 = F_00667a50(param_1 GEN_EDX_FWD,(undefined4)gen_fl2bits(param_2),param_3);
    return uVar2;
  }
  return 0;
}

/* ref: Global::GetBoneTransform_0066c4a0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066c4a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0x66c4a0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  int * piVar2;
  
  if (*((undefined * PTR32 *)GEN_TOP(((int)this + 0xbc))) == ((undefined *)GEN_TOP(0x0))) {
    uVar1 = F_00d93970(&REFG(undefined, 0x1351770) GEN_EDX_FWD,param_1);
    return uVar1;
  }
  if (-1 < (short)param_2) {
    piVar2 = ((int *)GEN_TOP(F_00d321b0(*((undefined * PTR32 *)GEN_TOP(((int)this + 0xbc))) GEN_EDX_ARG)));
    uVar1 = F_00d93970(((undefined *)GEN_TOP(((short)param_2 * 0x30 + *piVar2))) GEN_EDX_ARG,param_1);
    return uVar1;
  }
  uVar1 = F_00d93970(&REFG(undefined, 0x1351770) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: Global::PushCommandType1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066c540(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1), GEN_P(float param_3, float gen_a2), GEN_P(float param_4, float gen_a3))
{
  GEN_ENTER(0x66c540u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(float param_3 = (float)gen_a2;)
  GEN_PIN(float param_4 = (float)gen_a3;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004d4760(param_1 GEN_EDX_FWD,0x1c)));
  uVar2 = 0;
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = 1;
    puVar1[1] = *param_2;
    puVar1[2] = param_2[1];
    puVar1[3] = param_2[2];
    puVar1[4] = param_2[3];
    puVar1[5] = (undefined4)gen_fl2bits(param_3);
    puVar1[6] = (undefined4)gen_fl2bits(param_4);
    uVar2 = F_004d4810(param_1 GEN_EDX_ARG,puVar1);
  }
  return uVar2;
}

/* ref: Global::PushCommandType4 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066c5a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0x66c5a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  byte bVar1;
  undefined4 * puVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  puVar2 = ((undefined4 *)GEN_TOP(F_004d4760(this GEN_EDX_FWD,0x48)));
  uVar3 = 0;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 4;
    puVar2[1] = param_1;
    puVar2[2] = param_2;
    puVar2[3] = param_3;
    bVar1 = F_004dc830(this GEN_EDX_ARG,puVar2 + 4);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar3 = F_004d4810(this GEN_EDX_ARG,puVar2);
    }
  }
  return uVar3;
}

/* ref: Global::PushCommandType6 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066c5f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x66c5f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  byte bVar1;
  undefined4 * puVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  
  puVar2 = ((undefined4 *)GEN_TOP(F_004d4760(this GEN_EDX_FWD,0x58)));
  uVar3 = 0;
  if (puVar2 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar2 = 6;
    puVar2[2] = param_2;
    puVar2[1] = param_1;
    puVar2[5] = param_5;
    puVar2[3] = param_3;
    puVar2[4] = param_4;
    puVar2[6] = param_6;
    puVar2[7] = param_7;
    bVar1 = F_004dc830(this GEN_EDX_ARG,puVar2 + 8);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar3 = F_004d4810(this GEN_EDX_ARG,puVar2);
    }
  }
  return uVar3;
}

/* ref: Global::PushCommandType8 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066c660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 * param_7, unsigned int gen_a7))
{
  GEN_ENTER(0x66c660u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a7;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004d4760(this GEN_EDX_FWD,0x30)));
  uVar2 = 0;
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = 8;
    puVar1[2] = param_2;
    puVar1[4] = param_4;
    puVar1[1] = param_1;
    puVar1[6] = param_6;
    puVar1[3] = param_3;
    puVar1[5] = param_5;
    if (param_7 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar1[7] = puVar1 + 8;
      puVar1[8] = *param_7;
      puVar1[9] = param_7[1];
      puVar1[10] = param_7[2];
      puVar1[0xb] = param_7[3];
      uVar2 = F_004d4810(this GEN_EDX_ARG,puVar1);
      return uVar2;
    }
    puVar1[7] = 0;
    uVar2 = F_004d4810(this GEN_EDX_ARG,puVar1);
  }
  return uVar2;
}

/* ref: Global::PushCommandType9 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066c6f0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 * param_4, unsigned int gen_a3), GEN_P(undefined4 param_5, unsigned int gen_a4), GEN_P(uint param_6, unsigned int gen_a5), GEN_P(undefined4 * param_7, unsigned int gen_a6), GEN_P(byte param_8, unsigned int gen_a7))
{
  GEN_ENTER(0x66c6f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a4;)
  GEN_PIN(uint param_6 = (uint)gen_a5;)
  GEN_PIN(undefined4 * param_7 = (undefined4 *)(uintptr_t)gen_a6;)
  GEN_PIN(byte param_8 = (byte)gen_a7;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = ((undefined4 *)GEN_TOP(F_004d4760(param_1 GEN_EDX_FWD,0x3c)));
  uVar2 = 0;
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *puVar1 = 9;
    puVar1[2] = param_3;
    puVar1[1] = param_2;
    if (param_4 == ((undefined4 *)GEN_TOP(0x0))) {
      puVar1[3] = 0;
    }
    else {
      puVar1[3] = puVar1 + 7;
      puVar1[7] = *param_4;
      puVar1[8] = param_4[1];
      puVar1[9] = param_4[2];
      puVar1[10] = param_4[3];
    }
    puVar1[4] = param_5;
    puVar1[5] = (uint)param_8 << 0x1f | param_6 & 0x7fffffff;
    if (param_7 != ((undefined4 *)GEN_TOP(0x0))) {
      puVar1[6] = puVar1 + 0xb;
      puVar1[0xb] = *param_7;
      puVar1[0xc] = param_7[1];
      puVar1[0xd] = param_7[2];
      puVar1[0xe] = param_7[3];
      uVar2 = F_004d4810(param_1 GEN_EDX_ARG,puVar1);
      return uVar2;
    }
    puVar1[6] = 0;
    uVar2 = F_004d4810(param_1 GEN_EDX_ARG,puVar1);
  }
  return uVar2;
}

/* ref: FUN_0066c7b0 */
GEN_OWN GEN_FRAME unsigned int GEN_THISCALL F_0066c7b0(unsigned int gen_a0 GEN_EDX_PARAM, float gen_a1)
{
  GEN_ENTER(0x66c7b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  unsigned int gen_args[1];
  memcpy(&gen_args[0], &gen_a1, sizeof gen_a1);
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  float * pfVar1;
  
  (*(float *)(gen_frame + 0x0)) = REFG(float, 0x10ac108);
  pfVar1 = &(*(float *)&gen_args[0]);
  if (!((*(float *)&gen_args[0]) < REFG(float, 0x10ac108))) {
    pfVar1 = &(*(float *)(gen_frame + 0x0));
  }
  if (*(double *)&REFG(undefined, 0x1090b18) < (double)*pfVar1) {
    *((float *)GEN_TOP((param_1 + 0x9c))) = *pfVar1;
    return;
  }
  *((undefined4 *)GEN_TOP((param_1 + 0x9c))) = GEN_FLT_TO(*((undefined4 *)GEN_TOP((param_1 + 0x9c))), REFG(float, 0x10ac050));
  return;
}

/* ref: Client::Graphics::Render::GrassRenderer::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066c810(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66c810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_00625080(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: Global::ClearFlagBit */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066c840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66c840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *((uint *)GEN_TOP(((int)this + 4))) =
       ~(1 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1)) & *((uint *)GEN_TOP(((int)this + 4))) | 0 << GEN_SHC((byte)param_1, (unsigned int)(uintptr_t)param_1);
  return (uint)this;
}

/* ref: Global::SetFlagBit1 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066c880(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66c880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  uint uVar1;
  
  uVar1 = (uint)(param_2 != '\0') * 2 | *((uint *)GEN_TOP((param_1 + 4))) & 0xfffffffd;
  *((uint *)GEN_TOP((param_1 + 4))) = uVar1;
  return uVar1;
}

/* ref: Global::SetFlagBit0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066c8a0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66c8a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  uint uVar1;
  
  uVar1 = (uint)(param_2 != '\0') | *((uint *)GEN_TOP((param_1 + 4))) & 0xfffffffe;
  *((uint *)GEN_TOP((param_1 + 4))) = uVar1;
  return uVar1;
}

/* ref: Global::SetFlagBit1_0066c8c0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066c8c0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66c8c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  uint uVar1;
  
  uVar1 = (uint)(param_2 != '\0') * 2 | *((uint *)GEN_TOP((param_1 + 4))) & 0xfffffffd;
  *((uint *)GEN_TOP((param_1 + 4))) = uVar1;
  return uVar1;
}

/* ref: Client::Graphics::Render::Rigid::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066c930(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66c930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x10abfb8));
  puVar4 = param_1;
  if (param_1 == ((undefined4 *)GEN_TOP(0xfffffff8))) {
    puVar4 = ((undefined4 *)GEN_TOP(0x0));
  }
  iVar1 = puVar4[2];
  iVar2 = puVar4[3];
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *((int *)GEN_TOP((iVar1 + 0xc))) = iVar2;
    iVar3 = REFG(int, 0x1487c5c);
  }
  REFG(int, 0x1487c5c) = iVar3;
  if (iVar2 != 0) {
    *((int *)GEN_TOP((iVar2 + 8))) = iVar1;
    iVar1 = REFG(int, 0x1487c70);
  }
  REFG(int, 0x1487c70) = iVar1;
  *param_1 = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if ((param_2 & 1) != 0) {
    F_00406ad0(param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Render::BoneCollector::~BoneCollector */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0066c990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x66c990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10abfe4));
  F_004a05c0((undefined *)this GEN_EDX_FWD);
  if (this == ((undefined *)GEN_TOP(0xffffffd8))) {
    this = ((undefined *)GEN_TOP(0x0));
  }
  iVar1 = *(int *)(this + 0x28);
  iVar2 = *(int *)(this + 0x2c);
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *((int *)GEN_TOP((iVar1 + 0x2c))) = iVar2;
    iVar3 = *(int *)&REFG(undefined, 0x1487c74);
  }
  *(int *)&REFG(undefined, 0x1487c74) = iVar3;
  if (iVar2 == 0) {
    REFG(int, 0x1487c78) = iVar1;
    return 0;
  }
  *((int *)GEN_TOP((iVar2 + 0x28))) = iVar1;
  return 0;
}

/* ref: FUN_0066c9d0 */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0066c9d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x66c9d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10abff4));
  F_004a05c0(this GEN_EDX_FWD);
  if (this == ((undefined *)GEN_TOP(0xffffffd8))) {
    this = ((undefined *)GEN_TOP(0x0));
  }
  iVar1 = *((int *)GEN_TOP(((int)this + 0x28)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0x2c)));
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *((int *)GEN_TOP((iVar1 + 0x2c))) = iVar2;
    iVar3 = *(int *)&REFG(undefined, 0x1487c7c);
  }
  *(int *)&REFG(undefined, 0x1487c7c) = iVar3;
  if (iVar2 == 0) {
    REFG(int, 0x1487c80) = iVar1;
    return 0;
  }
  *((int *)GEN_TOP((iVar2 + 0x28))) = iVar1;
  return 0;
}

/* ref: Client::Graphics::Render::PostBoneDeformerBase::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066ca10(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66ca10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  int iVar2;
  int iVar3;
  undefined * pTVar4;
  
  *(undefined * PTR32 * PTR32 *)param_1 = (*(undefined * PTR32 (*)[5])REFP(0x10abff4));
  F_004a05c0(param_1 GEN_EDX_FWD);
  pTVar4 = param_1;
  if (param_1 == ((undefined *)GEN_TOP(0xffffffd8))) {
    pTVar4 = ((undefined *)GEN_TOP(0x0));
  }
  iVar1 = *(int *)(pTVar4 + 0x28);
  iVar2 = *(int *)(pTVar4 + 0x2c);
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *((int *)GEN_TOP((iVar1 + 0x2c))) = iVar2;
    iVar3 = *(int *)&REFG(undefined, 0x1487c7c);
  }
  *(int *)&REFG(undefined, 0x1487c7c) = iVar3;
  if (iVar2 != 0) {
    *((int *)GEN_TOP((iVar2 + 0x28))) = iVar1;
    iVar1 = REFG(int, 0x1487c80);
  }
  REFG(int, 0x1487c80) = iVar1;
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Render::AmbientLightRenderUtility::AmbientLightRenderUtility */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0066caa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x66caa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10abad4));
  *(undefined4 *)(this + 0x84) = 0;
  *(undefined4 *)(this + 0x88) = 0;
  *(undefined4 *)(this + 0x8c) = 0;
  *(undefined * PTR32 * PTR32 *)(this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x10ab990));
  *(undefined * PTR32 * PTR32 *)(this + 0xac) = (*(undefined * PTR32 (*)[1])REFP(0x10ab990));
  *(undefined4 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x18c) = 0;
  *(undefined4 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x19c) = 0;
  *(undefined * PTR32 * PTR32 *)(this + 0x17c) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)(this + 0x188) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)(this + 0x194) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined * PTR32 * PTR32 *)(this + 0x1a0) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)(this + 0x1a4) = 0;
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined * PTR32 * PTR32 *)(this + 0x1ac) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1b4) = 0;
  *(undefined * PTR32 * PTR32 *)(this + 0x1b8) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)(this + 0x1bc) = 0;
  *(undefined4 *)(this + 0x1c0) = 0;
  *(undefined * PTR32 * PTR32 *)(this + 0x1c4) = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1cc) = 0;
  *(undefined4 *)(this + 0x1f0) = 0;
  return 0;
}

/* ref: Client::Graphics::Render::Model::~Model */
GEN_OWN GEN_NOFRAME unsigned int GEN_THISCALL F_0066cb70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x66cb70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x10abf60));
  if (*(int *)(this + 0x58) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) + 0x10))))
              (*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 4))) GEN_EDX_ARG,*(int *)(this + 0x58));
    *(undefined4 *)(this + 0x58) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  if (this == ((undefined *)GEN_TOP(0xfffffff8))) {
    this = ((undefined *)GEN_TOP(0x0));
  }
  iVar1 = *(int *)(this + 8);
  iVar2 = *(int *)(this + 0xc);
  iVar3 = iVar2;
  if (iVar1 != 0) {
    *((int *)GEN_TOP((iVar1 + 0xc))) = iVar2;
    iVar3 = *(int *)&REFG(undefined, 0x1487c84);
  }
  *(int *)&REFG(undefined, 0x1487c84) = iVar3;
  if (iVar2 == 0) {
    REFG(int, 0x1487c88) = iVar1;
    return 0;
  }
  *((int *)GEN_TOP((iVar2 + 8))) = iVar1;
  return 0;
}

/* ref: Client::Graphics::Render::Model::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066cbd0(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66cbd0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  F_0066cb70(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_ARG,param_1);
  }
  return (uint)param_1;
}

/* ref: Client::Graphics::Render::VerticalFogRenderer::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066cc00(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66cc00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x10abea0));
  puVar1 = param_1 + 0x2b;
  iVar2 = 2;
  do {
    puVar1 = puVar1 - 3;
    iVar2 = iVar2 - 1;
    *puVar1 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
  } while (-1 < iVar2);
  param_1[0x1f] = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  param_1[0x1c] = (*(undefined * PTR32 (*)[1])REFP(0x10abaac));
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x10abbcc));
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: FUN_0066cca0 */
GEN_OWN GEN_NOFRAME uint F_0066cca0(void)
{
  GEN_ENTER(0x66cca0u, 0u, 0u, 0u, 0u);
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1a8)));
  uVar3 = *((uint *)GEN_TOP((iVar1 + 8)));
  iVar2 = *((int *)GEN_TOP(((uVar3 >> 0x1b) * 0x358 + ((uVar3 >> 0x17 & 0xf) + 1) * 0x34 + REFG(int, 0x137127c))));
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = *((uint *)GEN_TOP((iVar2 + 0x120)));
    *((uint *)GEN_TOP((iVar1 + 0xa8 + *((int *)GEN_TOP((REFG(int, 0x13759f8) + 0x2c))) * 4))) = uVar3;
  }
  return uVar3;
}

/* ref: FUN_0066cd00 */
GEN_OWN GEN_FRAME unsigned int F_0066cd00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66cd00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  F_0062d180(REFG(void * PTR32, 0x13759f8) GEN_EDX_ARG,param_1,param_2);
  return;
}

/* ref: FUN_0066cd20 */
GEN_OWN GEN_FRAME uint F_0066cd20(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x66cd20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = REFG(int, 0x13759f8);
  iVar1 = *((int *)GEN_TOP((*((int *)GEN_TOP(((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4))) + 0x1a8)));
  if ((*((uint *)GEN_TOP((iVar1 + 8))) & 0xf8000000) == 0xf0000000) {
    if ((char)param_1 == '\0') {
      uVar3 = *((uint *)GEN_TOP((REFG(int, 0x13759f8) + 0x60)));
    }
    else {
      uVar3 = *((uint *)GEN_TOP((REFG(int, 0x13759f8) + 100)));
    }
    *((uint *)GEN_TOP((iVar1 + 0x2ac + *((int *)GEN_TOP((REFG(int, 0x13759f8) + 0x34))) * 8))) = uVar3 & 0xfffffff;
  }
  uVar3 = F_0062cd00((char)param_1);
  *((uint *)GEN_TOP((iVar1 + 0x2a8 + *((int *)GEN_TOP((iVar2 + 0x34))) * 8))) = uVar3;
  return uVar3;
}

/* ref: FUN_0066cd90 */
GEN_OWN GEN_FRAME uint F_0066cd90(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0x66cd90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_0062d2d0(REFG(void * PTR32, 0x13759f8) GEN_EDX_ARG,param_1);
  return uVar1;
}

/* ref: Client::Graphics::Render::LightShaftRenderer::ScalarDeletingDestructor */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066cdb0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66cdb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  param_1[1] = (*(undefined * PTR32 (*)[1])REFP(0x10abbd4));
  *param_1 = (*(undefined * PTR32 (*)[5])REFP(0x10aba34));
  if ((param_2 & 1) != 0) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) + 0x10))))(*((int * PTR32 *)GEN_TOP((REFG(int, 0x1371270) + 0x10))) GEN_EDX_FWD,param_1);
  }
  return (uint)param_1;
}

/* ref: Global::SetFlagBit0_0066cde0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066cde0(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66cde0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  uint uVar1;
  
  uVar1 = (uint)(param_2 != '\0') | *((uint *)GEN_TOP((param_1 + 8))) & 0xfffffffe;
  *((uint *)GEN_TOP((param_1 + 8))) = uVar1;
  return uVar1;
}

/* ref: FUN_0066ce10 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0066ce10(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66ce10u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((in_ecx + 0x78 + param_2 * 4)));
  if ((iVar1 != 0) && ((*((byte *)GEN_TOP((iVar1 + 8))) >> 3 & 1) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0066ce40 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0066ce40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66ce40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP((in_ecx + 0x78 + param_2 * 4)));
  if ((iVar1 != 0) && ((*((byte *)GEN_TOP((iVar1 + 8))) >> 2 & 1) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_0066cea0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066cea0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66cea0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0066ceb0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066ceb0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66ceb0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_0066ced0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066ced0(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66ced0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0066cee0 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066cee0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66cee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_0066cf00 */
GEN_OWN GEN_NOFRAME uint GEN_THISCALL F_0066cf00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0x66cf00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  F_006668a0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_0066cf30 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066cf30(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66cf30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0066cf40 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066cf40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66cf40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_0066cf50 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0066cf50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66cf50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: FUN_0066cf80 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066cf80(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66cf80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_0066cf90 */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066cf90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_2, unsigned int gen_a1))
{
  GEN_ENTER(0x66cf90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;)
  *param_2 = *((undefined4 *)GEN_TOP((in_ecx + 4)));
  return (uint)param_2;
}

/* ref: FUN_0066cfa0 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0066cfa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66cfa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

/* ref: Global::AppendPointer */
GEN_OWN GEN_FRAME uint GEN_THISCALL F_0066cfc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66cfc0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_0066d000 */
GEN_OWN GEN_FRAME byte GEN_THISCALL F_0066d000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0x66d000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  return *(int *)this != *param_1;
}

