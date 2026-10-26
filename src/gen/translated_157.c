#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00cbc7e0 */
uint F_00cbc7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbc7e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbc80b;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0xffffffff;
  }
LAB_00cbc80b: ;
  if ((int)uVar2 < 0) {
    uVar2 = F_00d066a0(*(undefined * PTR32 *)((int)this + 8),uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar2;
  }
  uVar2 = F_00cc3a40(uVar2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar2;
}

/* ref: FUN_00cbc850 */
uint F_00cbc850(unsigned int gen_a0)
{
  GEN_ENTER(0xcbc850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbc87b;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0xffffffff;
  }
LAB_00cbc87b: ;
  if ((int)uVar2 < 0) {
    uVar2 = F_00d06700(*(undefined * PTR32 *)((int)this + 8),uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar2;
  }
  uVar2 = F_00cc3ae0(uVar2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar2;
}

/* ref: FUN_00cbc8c0 */
unsigned int F_00cbc8c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcbc8c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *(uint *)(param_1 + 4);
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc3640(uVar2,param_2);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbc920 */
unsigned int F_00cbc920(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcbc920u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *(uint *)(param_1 + 4);
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc36c0(uVar2,param_2);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbc980 */
unsigned int F_00cbc980(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcbc980u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *(uint *)(param_1 + 4);
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc3940(uVar2,param_2);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbc9e0 */
unsigned int F_00cbc9e0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcbc9e0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *(uint *)(param_1 + 4);
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc4860(uVar2,param_2,param_3,param_4);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbca50 */
unsigned int F_00cbca50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbca50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *(uint *)((int)this + 4);
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc3c20(uVar2,param_1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbcab0 */
uint F_00cbcab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbcab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbcade;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    *param_1 = 0;
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (uint)param_1;
  }
LAB_00cbcade: ;
  if ((int)uVar2 < 0) {
    F_00d06760(*(undefined * PTR32 *)((int)this + 8),param_1,uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (uint)param_1;
  }
  F_00cc3b80(param_1,uVar2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (uint)param_1;
}

/* ref: FUN_00cbcbc0 */
uint F_00cbcbc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbcbc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbcbe4: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbcc0b;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbcbe4;
  }
  if ((int)uVar2 < 0) {
    F_00d06810(*(undefined * PTR32 *)((int)this + 8),uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc3d40(uVar2);
LAB_00cbcc0b: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbcc20 */
uint F_00cbcc20(unsigned int gen_a0)
{
  GEN_ENTER(0xcbcc20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbcc4b;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
LAB_00cbcc4b: ;
  if ((int)uVar2 < 0) {
    uVar2 = F_00d06860(*(undefined * PTR32 *)((int)this + 8),uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar2;
  }
  uVar2 = F_00cc3dc0(uVar2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar2;
}

/* ref: FUN_00cbcc90 */
uint F_00cbcc90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbcc90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbccb7: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbcce6;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbccb7;
  }
  if (-1 < (int)uVar2) {
    uVar2 = F_00cc3e60(uVar2);
    F_00cc6a70(param_1,uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return param_1;
  }
LAB_00cbcce6: ;
  F_00cc6a90(param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return param_1;
}

/* ref: FUN_00cbcd10 */
uint F_00cbcd10(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbcd10u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbcd37: ;
    uVar2 = *(uint *)(param_1 + 4);
    if (uVar2 == 0) goto LAB_00cbcd75;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbcd37;
  }
  if ((int)uVar2 < 0) {
    F_00d068c0(*(undefined4 *)(param_1 + 8),uVar2,param_2,param_3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc4040(uVar2,param_2,param_3);
LAB_00cbcd75: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbcd90 */
float F_00cbcd90(unsigned int gen_a0)
{
  GEN_ENTER(0xcbcd90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbcdbf;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (float)(float10)0;
  }
LAB_00cbcdbf: ;
  if ((int)uVar2 < 0) {
    fVar3 = F_00d06910(*(undefined4 *)((int)this + 8),uVar2);
  }
  else {
    fVar3 = F_00cc40d0(uVar2);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (float)fVar3;
}

/* ref: FUN_00cbce00 */
uint F_00cbce00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbce00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbce27: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbce5a;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbce27;
  }
  if ((int)uVar2 < 0) {
    F_00d06970(*(undefined * PTR32 *)((int)this + 8),uVar2,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc41f0(uVar2,param_1);
LAB_00cbce5a: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbce70 */
byte F_00cbce70(unsigned int gen_a0)
{
  GEN_ENTER(0xcbce70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbce97;
  }
  uVar3 = *(uint *)((int)this + 4);
LAB_00cbce97: ;
  if ((uVar3 != 0) && (-1 < (int)uVar3)) {
    bVar2 = F_00cc3fa0(uVar3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return bVar2;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbced0 */
uint F_00cbced0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbced0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbcefb;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
LAB_00cbcefb: ;
  if ((int)uVar2 < 0) {
    uVar2 = F_00d06f40(*(undefined * PTR32 *)((int)this + 8),uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar2;
  }
  uVar2 = F_00cc4d20(uVar2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar2;
}

/* ref: FUN_00cbcfb0 */
uint F_00cbcfb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbcfb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  int iVar1;
  float10 fVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbcfde;
  }
  uVar3 = *(uint *)((int)this + 4);
  if (uVar3 == 0) {
    fVar2 = (float10)0;
    *param_1 = (float)fVar2;
    param_1[1] = (float)fVar2;
    param_1[2] = (float)fVar2;
    param_1[3] = (float)(float10)1;
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (uint)param_1;
  }
LAB_00cbcfde: ;
  if ((int)uVar3 < 0) {
    F_00d06270(*(undefined * PTR32 *)((int)this + 8),param_1,uVar3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (uint)param_1;
  }
  F_00cc4400(param_1,uVar3);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (uint)param_1;
}

/* ref: FUN_00cbd050 */
float F_00cbd050(unsigned int gen_a0)
{
  GEN_ENTER(0xcbd050u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbd07f;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (float)(float10)0;
  }
LAB_00cbd07f: ;
  if ((int)uVar2 < 0) {
    fVar3 = F_00d06a00(*(undefined4 *)((int)this + 8),uVar2);
  }
  else {
    fVar3 = F_00cc44b0(uVar2);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (float)fVar3;
}

/* ref: FUN_00cbd0c0 */
float F_00cbd0c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbd0c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbd0ef;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (float)(float10)0;
  }
LAB_00cbd0ef: ;
  if ((int)uVar2 < 0) {
    fVar3 = F_00d06a60(*(undefined4 *)((int)this + 8),uVar2);
  }
  else {
    fVar3 = F_00cc4560(uVar2);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (float)fVar3;
}

/* ref: FUN_00cbd130 */
float F_00cbd130(unsigned int gen_a0)
{
  GEN_ENTER(0xcbd130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbd15f;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (float)(float10)0;
  }
LAB_00cbd15f: ;
  if ((int)uVar2 < 0) {
    fVar3 = F_00d06ac0(*(undefined4 *)((int)this + 8),uVar2);
  }
  else {
    fVar3 = F_00cc4600(uVar2);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (float)fVar3;
}

/* ref: FUN_00cbd1a0 */
uint F_00cbd1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbd1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  uint extraout_EAX_00 = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbd1c7: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbd1fa;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbd1c7;
  }
  if ((int)uVar2 < 0) {
    F_00d07b60(*(undefined * PTR32 *)((int)this + 8),uVar2,param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return extraout_EAX;
  }
  F_00cc4740(uVar2,param_1);
LAB_00cbd1fa: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX_00;
}

/* ref: FUN_00cbd210 */
uint F_00cbd210(unsigned int gen_a0)
{
  GEN_ENTER(0xcbd210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbd23b;
  }
  uVar2 = *(uint *)((int)this + 4);
  if (uVar2 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
LAB_00cbd23b: ;
  if ((int)uVar2 < 0) {
    uVar2 = F_00d07bb0(*(undefined * PTR32 *)((int)this + 8),uVar2);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar2;
  }
  uVar2 = F_00cc47c0(uVar2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar2;
}

/* ref: FUN_00cbd280 */
unsigned int F_00cbd280(unsigned int gen_a0)
{
  GEN_ENTER(0xcbd280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*(int *)((int)this + 4) != 0) {
    F_00cc2ec0(*(int *)((int)this + 4),0);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbd2b0 */
unsigned int F_00cbd2b0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcbd2b0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*(int *)(param_1 + 4) != 0) {
    F_00cc48f0(*(int *)(param_1 + 4),param_2,param_3,param_4);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbd390 */
uint F_00cbd390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbd390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = F_00cc4ac0(*(int *)((int)this + 4),param_1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar1;
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0xffffffff;
}

/* ref: FUN_00cbd3e0 */
byte F_00cbd3e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbd3e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbd40a: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbd411;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbd40a;
  }
  if (-1 < (int)uVar2) {
    uVar2 = F_00cc3f00(uVar2);
    uVar4 = F_00cbced0(this);
    if (uVar4 != 0) {
      F_00d2dd80(((undefined1 *)(gen_frame + 0x8)),uVar4);
      F_00cbe880(((undefined1 *)(gen_frame + 0x8)));
      uVar2 = F_00cbe7e0(uVar2);
      if (uVar2 != 0) {
        *param_1 = *(undefined4 *)(uVar2 + 0x30);
        *param_2 = *(undefined4 *)(uVar2 + 0x34);
        F_00cbe8b0(((undefined1 *)(gen_frame + 0x8)));
        F_00cbe3b0(((undefined1 *)(gen_frame + 0x8)));
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
        return 1;
      }
      F_00cbe8b0(((undefined1 *)(gen_frame + 0x8)));
      F_00cbe3b0(((undefined1 *)(gen_frame + 0x8)));
    }
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
  piVar3 = (int *)F_00d05480(*(undefined * PTR32 *)((int)this + 8),uVar2);
  if (piVar3 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3,param_1,param_2,((undefined1 *)(gen_frame + 0x14)),((undefined1 *)(gen_frame + 0x18)));
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (byte)uVar2;
  }
LAB_00cbd411: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbd500 */
byte F_00cbd500(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xcbd500u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)param_1 + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbd52a: ;
    uVar2 = *(uint *)((int)param_1 + 4);
    if (uVar2 == 0) goto LAB_00cbd531;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbd52a;
  }
  if (-1 < (int)uVar2) {
    uVar2 = F_00cc3f00(uVar2);
    uVar4 = F_00cbced0(param_1);
    if (uVar4 != 0) {
      F_00d2dd80(((undefined1 *)(gen_frame + 0x0)),uVar4);
      F_00cbe880(((undefined1 *)(gen_frame + 0x0)));
      uVar2 = F_00cbe7e0(uVar2);
      if (uVar2 != 0) {
        *(float *)(uVar2 + 0x30) = param_2;
        *(float *)(uVar2 + 0x34) = param_3;
        F_00cbe8b0(((undefined1 *)(gen_frame + 0x0)));
        F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)));
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
        return 1;
      }
      F_00cbe8b0(((undefined1 *)(gen_frame + 0x0)));
      F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)));
    }
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
  piVar3 = (int *)F_00d05480(*(undefined * PTR32 *)((int)param_1 + 8),uVar2);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0x50))(piVar3);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 1;
  }
LAB_00cbd531: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbd610 */
byte F_00cbd610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcbd610u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  int * piVar3;
  uint uVar4;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 == 0) || (iVar1 < 0)) {
LAB_00cbd63a: ;
    uVar2 = *(uint *)((int)this + 4);
    if (uVar2 == 0) goto LAB_00cbd641;
  }
  else {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 == 0) goto LAB_00cbd63a;
  }
  if (-1 < (int)uVar2) {
    uVar2 = F_00cc3f00(uVar2);
    uVar4 = F_00cbced0(this);
    if (uVar4 != 0) {
      F_00d2dd80(((undefined1 *)(gen_frame + 0x0)),uVar4);
      F_00cbe880(((undefined1 *)(gen_frame + 0x0)));
      uVar2 = F_00cbe7e0(uVar2);
      if (uVar2 != 0) {
        *param_1 = *(undefined4 *)(uVar2 + 0x30);
        *param_2 = *(undefined4 *)(uVar2 + 0x34);
        *param_3 = *(undefined4 *)(uVar2 + 0x58);
        *param_4 = *(undefined4 *)(uVar2 + 0x50);
        F_00cbe8b0(((undefined1 *)(gen_frame + 0x0)));
        F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)));
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
        return 1;
      }
      F_00cbe8b0(((undefined1 *)(gen_frame + 0x0)));
      F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)));
    }
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
  piVar3 = (int *)F_00d05480(*(undefined * PTR32 *)((int)this + 8),uVar2);
  if (piVar3 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3,param_1,param_2,param_3,param_4);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return (byte)uVar2;
  }
LAB_00cbd641: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbd740 */
byte F_00cbd740(unsigned int gen_a0)
{
  GEN_ENTER(0xcbd740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbd768;
  }
  uVar3 = *(uint *)((int)this + 4);
LAB_00cbd768: ;
  bVar2 = 0;
  if (uVar3 != 0) {
    if ((int)uVar3 < 0) {
      bVar2 = F_00d07150(*(undefined * PTR32 *)((int)this + 8),uVar3);
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
      return bVar2;
    }
    bVar2 = F_00cc4b60(uVar3);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar2;
}

/* ref: FUN_00cbd8e0 */
byte F_00cbd8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbd8e0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbd911;
  }
  uVar2 = *(uint *)(param_1 + 4);
LAB_00cbd911: ;
  gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_2 + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) {
      gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
      return uVar2 == uVar3;
    }
  }
  uVar3 = *(uint *)(param_2 + 4);
  gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d939c));
  return uVar2 == uVar3;
}

/* ref: FUN_00cbd970 */
byte F_00cbd970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbd970u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00cbd8e0(param_1,param_2);
  return bVar1 == 0;
}

/* ref: FUN_00cbd990 */
uint F_00cbd990(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbd990u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  byte bVar2;
  uint uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbd9bd;
  }
  uVar3 = *(uint *)((int)this + 4);
LAB_00cbd9bd: ;
  if (uVar3 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 3;
  }
  if ((int)uVar3 < 0) {
    bVar2 = F_00d05e80(*(undefined * PTR32 *)((int)this + 8),uVar3);
    if (bVar2 != 0) {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
      return 7;
    }
    if (param_1 != 0) {
      F_00d05fb0(*(undefined * PTR32 *)((int)this + 8),uVar3,param_1);
    }
    if (0 < param_2) {
      F_00d07700(*(undefined * PTR32 *)((int)this + 8),uVar3,param_2);
    }
    F_00d05e30(*(undefined * PTR32 *)((int)this + 8),uVar3,1);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
  bVar2 = F_00cbc290(this);
  if (bVar2 != 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 4;
  }
  if (param_1 != 0) {
    F_00cc2e20(uVar3,param_1);
  }
  if (0 < param_2) {
    F_00cc4ca0(uVar3,param_2);
  }
  uVar3 = F_00cc2c90(uVar3);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar3;
}

/* ref: FUN_00cbdab0 */
uint F_00cbdab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbdab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  byte bVar2;
  uint uVar3;
  undefined4 local_c;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)param_1 + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbdae0;
  }
  uVar3 = *(uint *)((int)param_1 + 4);
LAB_00cbdae0: ;
  if (uVar3 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 3;
  }
  if ((int)uVar3 < 0) {
    bVar2 = F_00d05e80(*(undefined * PTR32 *)((int)param_1 + 8),uVar3);
    if (bVar2 != 0) {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
      return 7;
    }
    local_c = (undefined4)
              (longlong)
              TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                    *(double *)&REFG(undefined, 0x10912a8));
    uVar3 = F_00d05f50(*(undefined * PTR32 *)((int)param_1 + 8),uVar3,local_c);
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar3;
  }
  bVar2 = F_00cbc290(param_1);
  if (bVar2 != 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 4;
  }
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar3 = F_00cc2d80(uVar3,local_c);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar3;
}

/* ref: FUN_00cbdbf0 */
uint F_00cbdbf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbdbf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x48)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x4c);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)((int)this + 4);
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar2 = F_00cc46a0(iVar1);
    if (uVar2 != 0) goto LAB_00cbdc2f;
  }
  uVar2 = *(uint *)((int)this + 4);
LAB_00cbdc2f: ;
  (*(ulonglong *)(gen_frame + 0x28)) = F_00427d90();
  (*(undefined4 *)(gen_frame + 0x44)) = 0;
  (*(undefined4 *)(gen_frame + 0x40)) = 0;
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  (*(undefined4 *)(gen_frame + 0x20)) = 0;
  (*(undefined4 *)(gen_frame + 0x24)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined4 *)(gen_frame + 0x34)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0x80002;
  (*(uint *)(gen_frame + 0x1c)) = uVar2;
  (*(uint *)(gen_frame + 0x38)) = param_1;
  F_00d2cf60(&(*(undefined4 *)(gen_frame + 0x18)),0x30);
  if (uVar2 != 0) {
    if ((int)uVar2 < 0) {
      F_00d057a0(*(undefined * PTR32 *)((int)this + 8),uVar2,param_1);
    }
    else if (param_1 == 0) {
      F_00cc2ec0(uVar2,0);
    }
    else {
      uVar3 = param_1;
      if (param_1 == 0xffffffff) {
        uVar3 = F_00cc3f00(uVar2);
        (*(uint *)(gen_frame + 0x14)) = uVar3;
        uVar4 = F_00cbced0(this);
        uVar3 = 0;
        if (uVar4 != 0) {
          F_00d2dd80(((undefined1 *)(gen_frame + 0x8)),uVar4);
          F_00cbe880(((undefined1 *)(gen_frame + 0x8)));
          uVar4 = F_00cbe7e0((*(uint *)(gen_frame + 0x14)));
          if (uVar4 != 0) {
            uVar3 = (uint)*(ushort *)(uVar4 + 0x76);
          }
          F_00cbe8b0(((undefined1 *)(gen_frame + 0x8)));
          F_00cbe3b0(((undefined1 *)(gen_frame + 0x8)));
        }
      }
      F_00cc4270(uVar2,1);
      F_00cc2ec0(uVar2,uVar3);
    }
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00c47745((*(uint *)(gen_frame + 0x48)) ^ (uint)(uint)(gen_frame + 0x4c));
  return extraout_EAX;
}

/* ref: FUN_00cbdd20 */
uint F_00cbdd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbdd20u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = F_00cbc120(param_1,local_c);
  return uVar1;
}

/* ref: FUN_00cbdd70 */
uint F_00cbdd70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbdd70u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = F_00cbc1a0(param_1,local_c);
  return uVar1;
}

/* ref: FUN_00cbddc0 */
uint F_00cbddc0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbddc0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_3 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = F_00cbc390(param_1,param_2,local_c);
  return uVar1;
}

/* ref: FUN_00cbde10 */
uint F_00cbde10(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcbde10u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint param_4 = (uint)gen_a3;
  int iVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_4 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *(uint *)(param_1 + 4);
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc3530(uVar2,param_2,param_3,local_c);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX;
}

/* ref: FUN_00cbdeb0 */
uint F_00cbdeb0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbdeb0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_3 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = F_00cbc680(param_1,param_2,local_c);
  return uVar1;
}

/* ref: FUN_00cbdf00 */
unsigned int F_00cbdf00(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbdf00u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_3 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 == 0) || (iVar1 < 0)) || (uVar2 = F_00cc46a0(iVar1), uVar2 == 0)) {
    uVar2 = *(uint *)(param_1 + 4);
  }
  if ((uVar2 != 0) && (-1 < (int)uVar2)) {
    F_00cc3840(uVar2,param_2,local_c);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbdf90 */
uint F_00cbdf90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbdf90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = F_00cbd990(param_1,local_c,param_3);
  return uVar1;
}

/* ref: FUN_00cbdfe0 */
uint F_00cbdfe0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, float gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcbdfe0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  memcpy(&gen_args[2], &gen_a2, sizeof gen_a2);
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  memcpy(&gen_args[4], &gen_a4, sizeof gen_a4);
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
  if ((iVar1 != 0) && (-1 < iVar1)) {
    uVar3 = F_00cc46a0(iVar1);
    if (uVar3 != 0) goto LAB_00cbe010;
  }
  uVar3 = *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 4)));
LAB_00cbe010: ;
  if (uVar3 == 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 3;
  }
  if ((int)uVar3 < 0) {
    if ((*(float *)&gen_args[4]) != 0.0) {
      F_00d05fb0(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),uVar3,(undefined4)gen_fl2bits((*(float *)&gen_args[4])));
    }
    if (0 < (*(int *)&gen_args[5])) {
      F_00d07700(*((undefined * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),uVar3,(*(int *)&gen_args[5]));
    }
    uVar3 = F_00d05ee0(*((undefined4 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8))),uVar3,(*(uint *)&gen_args[1]),(*(float *)&gen_args[2]),(*(float *)&gen_args[3]));
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return uVar3;
  }
  if ((*(float *)&gen_args[4]) != 0.0) {
    F_00cc2e20(uVar3,(undefined4)gen_fl2bits((*(float *)&gen_args[4])));
  }
  if (0 < (*(int *)&gen_args[5])) {
    F_00cc4ca0(uVar3,(*(int *)&gen_args[5]));
  }
  if ((*(uint *)&gen_args[1]) == 0) {
    dVar2 = *(double *)&REFG(undefined, 0x1097260) * 0.0;
    (*(float *)&gen_args[4]) = gen_bits2f((int)dVar2);
    F_00cbddc0((*(undefined * PTR32 *)&gen_args[0]),(*(float *)&gen_args[2]),(uint)&(*(float *)&gen_args[4]));
    (*(float *)&gen_args[2]) = gen_bits2f((int)dVar2);
  }
  else {
    uVar5 = (*(uint *)&gen_args[1]);
    if ((*(uint *)&gen_args[1]) == 0xffffffff) {
      (*(float *)&gen_args[4]) = gen_bits2f(F_00cc3f00(uVar3));
      uVar4 = F_00cbced0((*(undefined * PTR32 *)&gen_args[0]));
      uVar5 = 0;
      if (uVar4 != 0) {
        F_00d2dd80(((undefined1 *)(gen_frame + 0x0)),uVar4);
        F_00cbe880(((undefined1 *)(gen_frame + 0x0)));
        uVar4 = F_00cbe7e0((undefined4)gen_fl2bits((*(float *)&gen_args[4])));
        if (uVar4 != 0) {
          uVar5 = (uint)*(ushort *)(uVar4 + 0x74);
        }
        F_00cbe8b0(((undefined1 *)(gen_frame + 0x0)));
        F_00cbe3b0(((undefined1 *)(gen_frame + 0x0)));
      }
    }
    F_00cc4270(uVar3,1);
    F_00cbc390((*(undefined * PTR32 *)&gen_args[0]),(*(float *)&gen_args[3]),0);
    F_00cc4270(uVar3,1);
    F_00cbc390((*(undefined * PTR32 *)&gen_args[0]),(*(float *)&gen_args[2]),uVar5);
    (*(float *)&gen_args[2]) = gen_bits2f((int)(*(double *)&REFG(undefined, 0x1097260) * 0.0));
  }
  uVar3 = F_00cbdf90((*(undefined * PTR32 *)&gen_args[0]),(uint)&(*(float *)&gen_args[2]),0);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar3;
}

/* ref: FUN_00cbe1a0 */
uint F_00cbe1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe1a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = F_00cbdbf0(param_1,local_c);
  return uVar1;
}

/* ref: FUN_00cbe1f0 */
uint F_00cbe1f0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcbe1f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  undefined4 param_1 = (undefined4)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  uint param_5 = (uint)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 uVar1;
  uint uVar2;
  undefined4 local_10;
  
  local_10 = (undefined4)
             (longlong)
             TRUNC((double)(float)((float10)*(int *)param_5 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                   *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = local_10;
  local_10 = (undefined4)
             (longlong)
             TRUNC(*(double *)&REFG(undefined, 0x10912a8) *
                   (double)(float)((float10)*param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)));
  uVar2 = F_00cbdfe0(param_1,local_10,param_3,param_4,uVar1,param_6);
  return uVar2;
}

/* ref: FUN_00cbe280 */
uint F_00cbe280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe280u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return param_1;
}

/* ref: FUN_00cbe290 */
uint F_00cbe290(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe290u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00cbe2a0 */
uint F_00cbe2a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xcbe2a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0x14) = param_6;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  return (uint)this;
}

/* ref: FUN_00cbe2e0 */
uint F_00cbe2e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xcbe2e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0x14) = param_6;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = param_7;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::SoundController::vf0 */
uint F_00cbe330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129a58));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cbe360 */
uint F_00cbe360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe360u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1129aac));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cbe380 */
uint F_00cbe380(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe380u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1129aac));
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00cbe390 */
uint F_00cbe390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129aac));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00cbe3b0 */
unsigned int F_00cbe3b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe3b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1129aac));
  return 0;
}

/* ref: FUN_00cbe3c0 */
uint F_00cbe3c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe3c0u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (in_ecx != param_2) {
    *(undefined4 *)(in_ecx + 4) = *(undefined4 *)(param_2 + 4);
  }
  return in_ecx;
}

/* ref: FUN_00cbe3e0 */
uint F_00cbe3e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe3e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: FUN_00cbe3f0 */
byte F_00cbe3f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbe3f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  bVar1 = F_00cc88c0(*(undefined4 *)((int)this + 4),param_1,param_2);
  return bVar1;
}

/* ref: FUN_00cbe410 */
byte F_00cbe410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe410u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(param_1 + 4) == *(int *)(param_2 + 4);
}

/* ref: FUN_00cbe430 */
byte F_00cbe430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe430u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(param_1 + 4) != *(int *)(param_2 + 4);
}

/* ref: FUN_00cbe450 */
unsigned int F_00cbe450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar3 = param_1;
  uVar1 = F_00cc6e00(*(undefined4 *)((int)this + 4));
  F_00cc4e60(uVar1,uVar3);
  piVar2 = (int *)F_00d2cce0();
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 100))(piVar2,*(undefined4 *)((int)this + 4),param_1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbe4b0 */
unsigned int F_00cbe4b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe4b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc6e00(*(undefined4 *)((int)this + 4));
  F_00cc4ef0(uVar1);
  piVar2 = (int *)F_00d2cce0();
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 100))(piVar2,*(undefined4 *)((int)this + 4),0);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbe500 */
unsigned int F_00cbe500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar3 = param_1;
  uVar1 = F_00cc6e00(*(undefined4 *)((int)this + 4));
  F_00cc4fe0(uVar1,uVar3);
  piVar2 = (int *)F_00d2cce0();
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2,*(undefined4 *)((int)this + 4),1,param_1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbe560 */
unsigned int F_00cbe560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar3 = param_1;
  uVar1 = F_00cc6e00(*(undefined4 *)((int)this + 4));
  F_00cc5060(uVar1,uVar3);
  piVar2 = (int *)F_00d2cce0();
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2,*(undefined4 *)((int)this + 4),0,param_1);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbe5c0 */
unsigned int F_00cbe5c0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbe5c0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint uVar1;
  undefined4 local_c;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_3 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  uVar1 = F_00cc6e00(*(undefined4 *)(param_1 + 4));
  F_00cc50e0(uVar1,param_2,local_c);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbe6a0 */
unsigned int F_00cbe6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cc79a0(*(undefined4 *)((int)this + 4),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbe6e0 */
uint F_00cbe6e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe6e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7a10(*(undefined4 *)((int)this + 4),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe720 */
uint F_00cbe720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7a90(*(undefined4 *)((int)this + 4),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe760 */
byte F_00cbe760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cc7b10(*(undefined4 *)((int)this + 4),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbe7a0 */
uint F_00cbe7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7b90(*(undefined4 *)((int)this + 4),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe7e0 */
uint F_00cbe7e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe7e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7c10(param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe810 */
uint F_00cbe810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7c60(*(undefined4 *)((int)this + 4),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe850 */
uint F_00cbe850(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe850u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7ce0(param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe880 */
uint F_00cbe880(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7570(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe8b0 */
unsigned int F_00cbe8b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe8b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cc7600(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbe8e0 */
uint F_00cbe8e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe8e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7670(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return uVar1;
}

/* ref: FUN_00cbe910 */
unsigned int F_00cbe910(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe910u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cc7700(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbe940 */
byte F_00cbe940(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cc7d30(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbe970 */
byte F_00cbe970(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cc7db0(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbe9a0 */
unsigned int F_00cbe9a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbe9a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cc7e20(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbe9d0 */
byte F_00cbe9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbe9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc7770();
  if ((char)param_1 == '\0') {
    if (uVar1 != *(uint *)((int)this + 4)) goto LAB_00cbea15;
  }
  else if (uVar1 != 0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
    return 0;
  }
  F_00cc7e90(*(undefined4 *)((int)this + 4),param_1);
LAB_00cbea15: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbea30 */
unsigned int F_00cbea30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbea30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cc7fd0(*(undefined4 *)((int)this + 4),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbea70 */
unsigned int F_00cbea70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbea70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  F_00cc8040(*(undefined4 *)((int)this + 4),param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbeb10 */
byte F_00cbeb10(unsigned int gen_a0)
{
  GEN_ENTER(0xcbeb10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cc81d0(*(undefined4 *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbeb40 */
float F_00cbeb40(unsigned int gen_a0)
{
  GEN_ENTER(0xcbeb40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float10 fVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  fVar1 = F_00cc8430(*(uint *)((int)this + 4));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (float)fVar1;
}

/* ref: FUN_00cbeb80 */
uint F_00cbeb80(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbeb80u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  uint extraout_EAX = 0;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar1 = F_00cc6e00(*(undefined4 *)(param_1 + 4));
  F_00cc4170(uVar1,param_2,param_3);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return extraout_EAX;
}

/* ref: FUN_00cbebd0 */
byte F_00cbebd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbebd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cc8240(*(undefined4 *)((int)this + 4),param_1,param_2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbec10 */
byte F_00cbec10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbec10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  byte bVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  bVar1 = F_00cc82f0(*(undefined4 *)((int)this + 4),param_1,param_2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return bVar1;
}

/* ref: FUN_00cbec50 */
float10 F_00cbec50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbec50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  fVar1 = F_00cc83a0(*(undefined4 *)(param_1 + 4),param_2);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return (float10)fVar1;
}

/* ref: FUN_00cbec90 */
unsigned int F_00cbec90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbec90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar3 = local_c;
  uVar1 = F_00cc6e00(*(undefined4 *)(param_1 + 4));
  F_00cc4e60(uVar1,uVar3);
  piVar2 = (int *)F_00d2cce0();
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 100))(piVar2,*(undefined4 *)(param_1 + 4),local_c);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbed20 */
unsigned int F_00cbed20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbed20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar3 = local_c;
  uVar1 = F_00cc6e00(*(undefined4 *)(param_1 + 4));
  F_00cc4fe0(uVar1,uVar3);
  piVar2 = (int *)F_00d2cce0();
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2,*(undefined4 *)(param_1 + 4),1,local_c);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: FUN_00cbedb0 */
unsigned int F_00cbedb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbedb0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  int * piVar2;
  undefined4 uVar3;
  undefined4 local_c;
  
  local_c = (undefined4)
            (longlong)
            TRUNC((double)(float)((float10)*(int *)param_2 / (float10)*(double *)&REFG(undefined, 0x1097260)) *
                  *(double *)&REFG(undefined, 0x10912a8));
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  uVar3 = local_c;
  uVar1 = F_00cc6e00(*(undefined4 *)(param_1 + 4));
  F_00cc5060(uVar1,uVar3);
  piVar2 = (int *)F_00d2cce0();
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2,*(undefined4 *)(param_1 + 4),0,local_c);
  }
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::BankController::vf0 */
uint F_00cbee40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbee40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1129aac));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cbee70 */
unsigned int F_00cbee70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbee70u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00cbee90 */
unsigned int F_00cbee90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbee90u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined * pvVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + iVar2 * 4) == 0) break;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  if ((param_2 == 8) && (iVar2 < 7)) {
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c),0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
    if (pvVar1 == (undefined *)0x0) {
      REFG(undefined4, 0x15d7780) = 0;
    }
    else {
      REFG(undefined4, 0x15d7780) = F_00cce100(pvVar1);
    }
    *(uint *)(param_1 + iVar2 * 4) = REFG(undefined4, 0x15d7780);
    iVar2 = iVar2 + 1;
  }
  if ((1 < REFG(undefined4, 0x134c7e4)) && (iVar2 < 7)) {
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c),0x14,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
    if (pvVar1 == (undefined *)0x0) {
      REFG(undefined4, 0x15d7734) = 0;
    }
    else {
      REFG(undefined4, 0x15d7734) = F_00ccdf30(pvVar1,REFG(undefined4, 0x134c7e4));
    }
    *(uint *)(param_1 + iVar2 * 4) = REFG(undefined4, 0x15d7734);
    iVar2 = iVar2 + 1;
  }
  if (((char)param_3 != '\0') && (iVar2 < 7)) {
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    pvVar1 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c),0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
    if (pvVar1 == (undefined *)0x0) {
      REFG(undefined4, 0x15d7774) = 0;
    }
    else {
      REFG(undefined4, 0x15d7774) = F_00ccdd90(pvVar1);
    }
    *(uint *)(param_1 + iVar2 * 4) = REFG(undefined4, 0x15d7774);
    iVar2 = iVar2 + 1;
  }
  if (iVar2 < 8) {
    *(undefined4 *)(param_1 + iVar2 * 4) = 0;
  }
  return 0;
}

/* ref: FUN_00cbefe0 */
uint F_00cbefe0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbefe0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  undefined * this;
  int iVar2;
  undefined4 uVar3;
  
  REFG(int, 0x15d7748) = 1;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),4,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
  iVar2 = 0;
  REFG(undefined4, 0x15d777c) = uVar1;
  if (0 < REFG(int, 0x15d7748)) {
    do {
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
      }
      this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c),0x1ac,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
      if (this == (undefined *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x60);
        uVar1 = F_00cd0170(param_1,iVar2);
        uVar1 = F_00cceda0(this,iVar2,uVar1,uVar3);
      }
      *(uint *)(REFG(undefined4, 0x15d777c) + iVar2 * 4) = uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < REFG(int, 0x15d7748));
  }
  return uVar1;
}

/* ref: FUN_00cbf0c0 */
uint F_00cbf0c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbf0c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  undefined4 * puVar2;
  undefined * this;
  int iVar3;
  
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798));
  }
  if (REFG(char, 0x15d7798) == '\0') {
    REFG(undefined4, 0x15d7754) = *(uint *)(param_1 + 0x38);
  }
  else {
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798));
    }
    REFG(undefined4, 0x15d7754) = (uint)REFG(undefined1, 0x15d7799);
  }
  iVar3 = REFG(undefined4, 0x15d7754) * 4;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),iVar3,"CDev.Engine.Sd.SoundDriver",0,0,0x10)
  ;
  iVar3 = 0;
  REFG(undefined4, 0x15d7744) = uVar1;
  if (0 < (int)REFG(undefined4, 0x15d7754)) {
    do {
      puVar2 = (undefined4 *)F_00cd0110(param_1,iVar3);
      (*(undefined4 *)(gen_frame + 0x8)) = *puVar2;
      if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
        F_00ccaf80(&REFG(char, 0x15d7798));
      }
      if (REFG(char, 0x15d7798) != '\0') {
        if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
          F_00ccaf80(&REFG(char, 0x15d7798));
        }
        F_00cca420(&REFG(char, 0x15d7798),&(*(undefined4 *)(gen_frame + 0x8)),iVar3);
      }
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
      }
      this = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c),0xe8,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
      if (this == (undefined *)0x0) {
        uVar1 = 0;
      }
      else {
        uVar1 = F_00cca0a0(this,iVar3 + 1,&(*(undefined4 *)(gen_frame + 0x8)));
      }
      *(uint *)(REFG(undefined4, 0x15d7744) + iVar3 * 4) = uVar1;
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)REFG(undefined4, 0x15d7754));
  }
  return uVar1;
}

/* ref: FUN_00cbf230 */
unsigned int F_00cbf230(unsigned int gen_a0)
{
  GEN_ENTER(0xcbf230u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  int * piVar2;
  bool bVar3;
  undefined * pvVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798));
  }
  if (REFG(char, 0x15d7798) == '\0') {
    REFG(int, 0x15d7764) = *(int *)(param_1 + 0x38);
  }
  if (0 < REFG(int, 0x15d7764)) {
    iVar6 = REFG(int, 0x15d7764) * 4;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    REFG(undefined4, 0x15d7728) = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                             (REFG(int * PTR32, 0x15d778c),iVar6,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
    if (0 < REFG(int, 0x15d7764)) {
      iVar8 = 0;
      iVar6 = 1;
      do {
        if (REFG(int, 0x15d7784) == 0) {
          if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
            REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
          }
          pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                     (REFG(int * PTR32, 0x15d778c),8,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
          if (pvVar4 == (undefined *)0x0) goto LAB_00cbf377;
          uVar5 = F_00cd02e0(pvVar4,iVar6,*(undefined4 *)(param_1 + 0x60),0);
        }
        else {
          if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
            REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
          }
          pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                     (REFG(int * PTR32, 0x15d778c),8,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
          if (pvVar4 == (undefined *)0x0) {
LAB_00cbf377: ;
            uVar5 = 0;
          }
          else {
            uVar5 = F_00cd02e0(pvVar4,iVar6,*(undefined4 *)(param_1 + 0x60),REFG(int, 0x15d7784));
          }
        }
        *(uint *)(iVar8 + REFG(undefined4, 0x15d7728)) = uVar5;
        iVar8 = iVar8 + 4;
        bVar3 = iVar6 < REFG(int, 0x15d7764);
        iVar6 = iVar6 + 1;
      } while (bVar3);
    }
  }
  if (REFG(int, 0x15d7784) != 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798));
    }
    if ((REFG(char, 0x15d7798) == '\0') && (iVar8 = 0, iVar6 = REFG(int, 0x15d7784), -1 < REFG(int, 0x15d7764))) {
      do {
        if (*(int *)(iVar6 + iVar8 * 4) != 0) {
          iVar7 = 0;
          do {
            iVar1 = *(int *)(iVar6 + iVar8 * 4);
            if (*(int *)(iVar7 + iVar1) == 0) break;
            piVar2 = *(int * PTR32 *)(iVar7 + iVar1);
            ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2,0);
            iVar7 = iVar7 + 4;
            iVar6 = REFG(int, 0x15d7784);
          } while (iVar7 < 0xc);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 <= REFG(int, 0x15d7764));
    }
  }
  return 0;
}

/* ref: FUN_00cbf410 */
uint F_00cbf410(void)
{
  GEN_ENTER(0xcbf410u, 0u, 0u, 0u, 0u);
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = REFG(int, 0x15d7744);
  if (0 < REFG(int, 0x15d7754)) {
    do {
      if ((*(int *)(iVar5 + iVar4 * 4) != 0) &&
         (puVar1 = *(undefined4 * PTR32 *)(iVar5 + iVar4 * 4), puVar1 != (undefined4 *)0x0)) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        iVar5 = REFG(int, 0x15d7744);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < REFG(int, 0x15d7754));
  }
  if (iVar5 != 0) {
    F_00406810(iVar5);
  }
  if (REFG(int, 0x15d7728) != 0) {
    iVar4 = 0;
    iVar5 = REFG(int, 0x15d7728);
    if (0 < REFG(int, 0x15d7764)) {
      do {
        if ((*(int *)(iVar5 + iVar4 * 4) != 0) &&
           (puVar1 = *(undefined4 * PTR32 *)(iVar5 + iVar4 * 4), puVar1 != (undefined4 *)0x0)) {
          ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
          iVar5 = REFG(int, 0x15d7728);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < REFG(int, 0x15d7764));
    }
    if (iVar5 != 0) {
      F_00406810(iVar5);
    }
  }
  if ((REFG(int * PTR32, 0x15d7784) == (int *)0x0) || (*REFG(int * PTR32, 0x15d7784) == 0)) {
    if (REFG(undefined4 * PTR32, 0x15d7780) != (undefined4 *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d7780))))(REFG(undefined4 * PTR32, 0x15d7780),1);
    }
    if (REFG(undefined4 * PTR32, 0x15d7734) != (undefined4 *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d7734))))(REFG(undefined4 * PTR32, 0x15d7734),1);
    }
    if (REFG(undefined4 * PTR32, 0x15d7774) != (undefined4 *)0x0) {
      ((code *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d7774))))(REFG(undefined4 * PTR32, 0x15d7774),1);
    }
  }
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798));
  }
  if ((REFG(char, 0x15d7798) == '\0') && (iVar5 = 0, 0 < REFG(int, 0x15d7748))) {
    do {
      puVar1 = *(undefined4 * PTR32 *)(REFG(int, 0x15d777c) + iVar5 * 4);
      if (puVar1 != (undefined4 *)0x0) {
        ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < REFG(int, 0x15d7748));
  }
  if (REFG(int * PTR32, 0x15d7784) != (int *)0x0) {
    iVar5 = 0;
    piVar3 = REFG(int * PTR32, 0x15d7784);
    if (-1 < REFG(int, 0x15d7764)) {
      do {
        if (piVar3[iVar5] != 0) {
          iVar4 = 0;
          do {
            if (*(int *)(piVar3[iVar5] + iVar4) == 0) break;
            puVar1 = *(undefined4 * PTR32 *)(piVar3[iVar5] + iVar4);
            if (puVar1 != (undefined4 *)0x0) {
              ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
              piVar3 = REFG(int * PTR32, 0x15d7784);
            }
            iVar4 = iVar4 + 4;
          } while (iVar4 < 0xc);
          if (piVar3[iVar5] != 0) {
            F_00406810(piVar3[iVar5]);
            piVar3 = REFG(int * PTR32, 0x15d7784);
          }
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 <= REFG(int, 0x15d7764));
    }
    if (piVar3 != (int *)0x0) {
      F_00406810(piVar3);
    }
  }
  if (REFG(int, 0x15d777c) != 0) {
    F_00406810(REFG(int, 0x15d777c));
  }
  if (REFG(int, 0x15d7760) != 0) {
    F_00406810(REFG(int, 0x15d7760));
  }
  if (REFG(int, 0x15d772c) != 0) {
    F_00406810(REFG(int, 0x15d772c));
  }
  if (REFG(int, 0x15d774c) != 0) {
    F_00406810(REFG(int, 0x15d774c));
  }
  if (REFG(int, 0x15d7740) != 0) {
    F_00406810(REFG(int, 0x15d7740));
  }
  if (REFG(int, 0x15d775c) != 0) {
    F_00406810(REFG(int, 0x15d775c));
  }
  if (REFG(int, 0x15d7758) != 0) {
    F_00406810(REFG(int, 0x15d7758));
  }
  if (REFG(int, 0x15d7770) != 0) {
    F_00406810(REFG(int, 0x15d7770));
  }
  uVar2 = F_00ccb4f0();
  if (REFG(undefined4 * PTR32, 0x15d773c) != (undefined4 *)0x0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d773c))))(REFG(undefined4 * PTR32, 0x15d773c),1);
  }
  return uVar2;
}

/* ref: FUN_00cbf660 */
uint F_00cbf660(unsigned int gen_a0)
{
  GEN_ENTER(0xcbf660u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == REFG(int, 0x112a808)) {
    return REFG(undefined4, 0x15d773c);
  }
  if ((-1 < param_1) && (param_1 <= REFG(int, 0x15d7754))) {
    return *(uint *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  return 0;
}

/* ref: FUN_00cbf6a0 */
byte F_00cbf6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbf6a0u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[1];
  gen_args[0] = gen_a0;
  undefined1 * puVar1;
  byte bVar2;
  uint uVar3;
  int in_ecx;
  
  puVar1 = (*(undefined1 * PTR32 *)&gen_args[0]);
  uVar3 = (uint)(byte)(*(undefined1 * PTR32 *)&gen_args[0])[1];
  in_ecx = REFG(int, 0x15d773c);
  if (uVar3 != REFG(undefined4, 0x112a808)) {
    if (REFG(int, 0x15d7754) < (int)uVar3) {
      return 0;
    }
    in_ecx = *(int *)(REFG(int, 0x15d7744) + -4 + uVar3 * 4);
  }
  if (in_ecx == 0) {
    return 0;
  }
  bVar2 = F_00cc9340(in_ecx);
  if (bVar2 == 0) {
    return 1;
  }
  if (((*(undefined1 * PTR32 *)&gen_args[0])[3] == '\x02') || ((*(undefined1 * PTR32 *)&gen_args[0])[3] == '\x04')) {
    (*(undefined1 * PTR32 *)&gen_args[0]) = ((undefined1 *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined1 * PTR32 *)&gen_args[0]), 1, 3),1)));
  }
  else {
    (*(undefined1 * PTR32 *)&gen_args[0]) = ((undefined1 *)GEN_TOP(CONCAT31(GEN_PIECE(&(*(undefined1 * PTR32 *)&gen_args[0]), 1, 3),*(*(undefined1 * PTR32 *)&gen_args[0]))));
  }
  bVar2 = F_00cc9380((uint)(byte)puVar1[2],(*(undefined1 * PTR32 *)&gen_args[0]));
  return bVar2;
}

/* ref: FUN_00cbf720 */
uint F_00cbf720(unsigned int gen_a0)
{
  GEN_ENTER(0xcbf720u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    iVar1 = *(int *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (iVar1 == 0) {
    return 0;
  }
  if (*(int *)(iVar1 + 0xc) != 0) {
    uVar2 = F_00cc1130(*(int *)(iVar1 + 0xc));
    return uVar2;
  }
  return (int)*(short *)(iVar1 + 8);
}

/* ref: FUN_00cbf770 */
uint F_00cbf770(unsigned int gen_a0)
{
  GEN_ENTER(0xcbf770u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int in_ecx;
  uint uVar1;
  
  in_ecx = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    in_ecx = *(int *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (in_ecx == 0) {
    return 0;
  }
  uVar1 = F_00cc9360(in_ecx);
  return uVar1;
}

/* ref: FUN_00cbf7b0 */
byte F_00cbf7b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbf7b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    iVar1 = *(int *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (iVar1 == 0) {
    return 0;
  }
  return (byte)*(undefined2 *)(iVar1 + 10) & 1;
}

/* ref: FUN_00cbf7f0 */
unsigned int F_00cbf7f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbf7f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int in_ecx;
  
  in_ecx = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    in_ecx = *(int *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (in_ecx != 0) {
    F_00cc9420(in_ecx,param_2);
  }
  return 0;
}

/* ref: FUN_00cbf830 */
uint F_00cbf830(unsigned int gen_a0)
{
  GEN_ENTER(0xcbf830u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = REFG(int, 0x15d7744);
  if (0 < REFG(int, 0x15d7754)) {
    do {
      if (*(int *)(iVar4 + iVar3 * 4) != 0) {
        piVar1 = *(int * PTR32 *)(iVar4 + iVar3 * 4);
        ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,param_1);
        iVar4 = REFG(int, 0x15d7744);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < REFG(int, 0x15d7754));
  }
  iVar4 = 0;
  if (0 < REFG(int, 0x15d7748)) {
    do {
      piVar1 = *(int * PTR32 *)(REFG(int, 0x15d777c) + iVar4 * 4);
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < REFG(int, 0x15d7748));
  }
  iVar4 = 0;
  if (0 < REFG(int, 0x15d7768)) {
    do {
      piVar1 = *(int * PTR32 *)(REFG(int, 0x15d7740) + iVar4 * 4);
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < REFG(int, 0x15d7768));
  }
  iVar4 = 0;
  if (0 < REFG(int, 0x15d7750)) {
    do {
      piVar1 = *(int * PTR32 *)(REFG(int, 0x15d772c) + iVar4 * 4);
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < REFG(int, 0x15d7750));
  }
  iVar4 = 0;
  if (0 < REFG(int, 0x15d7788)) {
    do {
      piVar1 = *(int * PTR32 *)(REFG(int, 0x15d774c) + iVar4 * 4);
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < REFG(int, 0x15d7788));
  }
  iVar4 = 0;
  if (0 < REFG(int, 0x15d7778)) {
    do {
      piVar1 = *(int * PTR32 *)(REFG(int, 0x15d775c) + iVar4 * 4);
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < REFG(int, 0x15d7778));
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d773c) + 4))))(REFG(int * PTR32, 0x15d773c),param_1);
  return uVar2;
}

/* ref: FUN_00cbf940 */
uint F_00cbf940(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbf940u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = REFG(int * PTR32, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if ((int)param_1 < 0) {
      return param_1;
    }
    if (REFG(int, 0x15d7754) < (int)param_1) {
      return param_1;
    }
    piVar1 = *(int * PTR32 *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    if (piVar1[1] == REFG(undefined4, 0x112a808)) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d773c) + 0xc))))
                        (REFG(int * PTR32, 0x15d773c),(undefined4)gen_fl2bits(param_2),param_3);
      return uVar2;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,(undefined4)gen_fl2bits(param_2),param_3);
  }
  return uVar2;
}

/* ref: FUN_00cbf9b0 */
uint F_00cbf9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbf9b0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = REFG(int * PTR32, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if ((int)param_1 < 0) {
      return param_1;
    }
    if (REFG(int, 0x15d7754) < (int)param_1) {
      return param_1;
    }
    piVar1 = *(int * PTR32 *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    if (piVar1[1] == REFG(undefined4, 0x112a808)) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d773c) + 0x10))))(REFG(int * PTR32, 0x15d773c),param_2);
      return uVar2;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_2);
  }
  return uVar2;
}

/* ref: FUN_00cbfa10 */
uint F_00cbfa10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbfa10u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  
  piVar1 = REFG(int * PTR32, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if ((int)param_1 < 0) {
      return param_1;
    }
    if (REFG(int, 0x15d7754) < (int)param_1) {
      return param_1;
    }
    piVar1 = *(int * PTR32 *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    if (piVar1[1] == REFG(undefined4, 0x112a808)) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d773c) + 0x14))))(REFG(int * PTR32, 0x15d773c),param_2,param_3);
      return uVar2;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1,param_2,param_3);
  }
  return uVar2;
}

/* ref: FUN_00cbfa70 */
uint F_00cbfa70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbfa70u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = REFG(int * PTR32, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if ((int)param_1 < 0) {
      return param_1;
    }
    if (REFG(int, 0x15d7754) < (int)param_1) {
      return param_1;
    }
    piVar1 = *(int * PTR32 *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    if (piVar1[1] == REFG(undefined4, 0x112a808)) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d773c) + 0x18))))(REFG(int * PTR32, 0x15d773c),param_2);
      return uVar2;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,param_2);
  }
  return uVar2;
}

/* ref: FUN_00cbfad0 */
byte F_00cbfad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcbfad0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int iVar1;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    iVar1 = *(int *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (iVar1 == 0) {
    return 0;
  }
  return *(byte *)(iVar1 + 0xe4);
}

/* ref: FUN_00cbfb10 */
byte F_00cbfb10(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfb10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    iVar1 = *(int *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (iVar1 == 0) {
    return 0;
  }
  if ((*(char *)(iVar1 + 0xe4) != '\0') && (*(char *)(iVar1 + 0xe5) != '\0')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00cbfb60 */
uint F_00cbfb60(float gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbfb60u, gen_trace_f(gen_a0), gen_a1, 0u, 0u);
  float param_1 = (float)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d773c) + 0xc))))(REFG(int * PTR32, 0x15d773c),(undefined4)gen_fl2bits(param_1),param_2);
  return uVar1;
}

/* ref: FUN_00cbfb80 */
uint F_00cbfb80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcbfb80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  int * piVar2;
  
  piVar2 = REFG(int * PTR32, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if ((int)param_1 < 0) {
      return param_1;
    }
    if (REFG(int, 0x15d7754) < (int)param_1) {
      return param_1;
    }
    piVar2 = *(int * PTR32 *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  uVar1 = param_1;
  if (piVar2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,(undefined4)gen_fl2bits(param_2));
  }
  return uVar1;
}

/* ref: FUN_00cbfbc0 */
uint F_00cbfbc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfbc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0xffffffff;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0xffffffff;
    }
    iVar1 = *(int *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  return 0;
}

/* ref: FUN_00cbfc00 */
uint F_00cbfc00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbfc00u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if ((int)param_1 < 0) {
      return param_1;
    }
    if (REFG(int, 0x15d7754) < (int)param_1) {
      return param_1;
    }
    uVar1 = *(uint *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (uVar1 != 0) {
    *(undefined4 *)(uVar1 + 0xe0) = param_2;
  }
  return uVar1;
}

/* ref: FUN_00cbfc40 */
uint F_00cbfc40(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfc40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    iVar1 = *(int *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (iVar1 == 0) {
    return 0;
  }
  return *(uint *)(iVar1 + 0xe0);
}

/* ref: FUN_00cbfc80 */
uint F_00cbfc80(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfc80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((-1 < param_1) && (param_1 < REFG(int, 0x15d7748))) {
    return *(uint *)(REFG(int, 0x15d777c) + param_1 * 4);
  }
  return 0;
}

/* ref: FUN_00cbfcb0 */
uint F_00cbfcb0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfcb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (((REFG(int, 0x15d772c) != 0) && (-1 < param_1)) && (param_1 < REFG(int, 0x15d7750))) {
    return *(uint *)(REFG(int, 0x15d772c) + param_1 * 4);
  }
  return 0;
}

/* ref: FUN_00cbfce0 */
uint F_00cbfce0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfce0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (((REFG(int, 0x15d7740) != 0) && (-1 < param_1)) && (param_1 < REFG(int, 0x15d7768))) {
    return *(uint *)(REFG(int, 0x15d7740) + param_1 * 4);
  }
  return 0;
}

/* ref: FUN_00cbfd10 */
uint F_00cbfd10(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfd10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (((REFG(int, 0x15d774c) != 0) && (-1 < param_1)) && (param_1 < REFG(int, 0x15d7788))) {
    return *(uint *)(REFG(int, 0x15d774c) + param_1 * 4);
  }
  return 0;
}

/* ref: FUN_00cbfd40 */
uint F_00cbfd40(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfd40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (((REFG(int, 0x15d775c) != 0) && (-1 < param_1)) && (param_1 < REFG(int, 0x15d7778))) {
    return *(uint *)(REFG(int, 0x15d775c) + param_1 * 4);
  }
  return 0;
}

/* ref: FUN_00cbfd70 */
uint F_00cbfd70(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfd70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (((REFG(int, 0x15d7760) != 0) && (-1 < param_1)) && (param_1 < REFG(int, 0x15d7738))) {
    return *(uint *)(REFG(int, 0x15d7760) + param_1 * 4);
  }
  return 0;
}

/* ref: FUN_00cbfda0 */
uint F_00cbfda0(void)
{
  GEN_ENTER(0xcbfda0u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d776c);
}

/* ref: FUN_00cbfdc0 */
float F_00cbfdc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcbfdc0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (REFG(int, 0x15d7730) <= param_1) {
    return *(float *)(REFG(int, 0x15d7758) + -4 + REFG(int, 0x15d7730) * 4);
  }
  return *(float *)(REFG(int, 0x15d7758) + param_1 * 4);
}

/* ref: FUN_00cbfdf0 */
uint F_00cbfdf0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfdf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (REFG(int, 0x15d7730) <= param_1) {
    return *(uint *)(REFG(int, 0x15d7770) + -4 + REFG(int, 0x15d7730) * 4);
  }
  return *(uint *)(REFG(int, 0x15d7770) + param_1 * 4);
}

/* ref: FUN_00cbfe20 */
uint F_00cbfe20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbfe20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((((REFG(int, 0x15d7784) != 0) && (-1 < param_1)) && (param_1 <= REFG(int, 0x15d7764))) && (param_2 < 4)) {
    return *((uint *)GEN_TOP((*(int *)(REFG(int, 0x15d7784) + param_1 * 4) + param_2 * 4)));
  }
  return 0;
}

/* ref: FUN_00cbfe50 */
uint F_00cbfe50(void)
{
  GEN_ENTER(0xcbfe50u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d7780);
}

/* ref: FUN_00cbfe60 */
uint F_00cbfe60(void)
{
  GEN_ENTER(0xcbfe60u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x15d7734);
}

/* ref: FUN_00cbfe90 */
unsigned int F_00cbfe90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbfe90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  if (REFG(int * PTR32, 0x15d7774) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d7774) + 4))))(REFG(int * PTR32, 0x15d7774),(uint)((char)param_1 == '\0'));
    if (param_2 != 0) {
      F_00ccdd50(REFG(int * PTR32, 0x15d7774),param_2);
    }
  }
  return 0;
}

/* ref: FUN_00cbfef0 */
float10 F_00cbfef0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbfef0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int iVar1;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if (((int)param_1 < 0) || (REFG(int, 0x15d7754) < (int)param_1)) goto LAB_00cbff4b;
    iVar1 = *(int *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (iVar1 != 0) {
    extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x34) + 0x10))))(iVar1 + 0x34);
    extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 0x10) + 0x10))))(iVar1 + 0x10);
    return (float10)(float)(extraout_ST0_00 * (float10)(double)extraout_ST0);
  }
LAB_00cbff4b: ;
  return (float10)0;
}

/* ref: FUN_00cbff60 */
uint F_00cbff60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbff60u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  int * piVar2;
  
  piVar2 = REFG(int * PTR32, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if ((int)param_1 < 0) {
      return param_1;
    }
    if (REFG(int, 0x15d7754) < (int)param_1) {
      return param_1;
    }
    piVar2 = *(int * PTR32 *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  uVar1 = param_1;
  if (piVar2 != (int *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2,param_2);
  }
  return uVar1;
}

/* ref: FUN_00cbffa0 */
uint F_00cbffa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcbffa0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = REFG(undefined4, 0x15d773c);
  if (param_1 != REFG(undefined4, 0x112a808)) {
    if ((int)param_1 < 0) {
      return param_1;
    }
    if (REFG(int, 0x15d7754) < (int)param_1) {
      return param_1;
    }
    uVar1 = *(uint *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (uVar1 != 0) {
    *(undefined1 *)(uVar1 + 0xe6) = (undefined1)param_2;
  }
  return uVar1;
}

/* ref: FUN_00cbffe0 */
byte F_00cbffe0(unsigned int gen_a0)
{
  GEN_ENTER(0xcbffe0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int iVar1;
  
  iVar1 = REFG(int, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    iVar1 = *(int *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (iVar1 == 0) {
    return 0;
  }
  return *(byte *)(iVar1 + 0xe6);
}

/* ref: FUN_00cc0020 */
uint F_00cc0020(unsigned int gen_a0)
{
  GEN_ENTER(0xcc0020u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = REFG(void * PTR32, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    this = *(undefined * PTR32 *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (this == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00cc9c60(this);
  return uVar1;
}

/* ref: FUN_00cc0060 */
uint F_00cc0060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc0060u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined * this;
  uint uVar1;
  
  this = REFG(void * PTR32, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    this = *(undefined * PTR32 *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (this == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00cc9d30(this,param_2);
  return uVar1;
}

/* ref: FUN_00cc00a0 */
uint F_00cc00a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc00a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined * this;
  uint uVar1;
  
  this = REFG(void * PTR32, 0x15d773c);
  if (param_1 != REFG(int, 0x112a808)) {
    if (param_1 < 0) {
      return 0;
    }
    if (REFG(int, 0x15d7754) < param_1) {
      return 0;
    }
    this = *(undefined * PTR32 *)(REFG(int, 0x15d7744) + -4 + param_1 * 4);
  }
  if (this == (undefined *)0x0) {
    return 0;
  }
  uVar1 = F_00cc9450(this);
  return uVar1;
}

/* ref: FUN_00cc00e0 */
unsigned int F_00cc00e0(void)
{
  GEN_ENTER(0xcc00e0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  uint uVar2;
  
  uVar1 = REFG(undefined4, 0x15d7754);
  uVar2 = 0;
  if (REFG(undefined4, 0x15d7754) != 0) {
    do {
      F_00cc94a0();
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return 0;
}

/* ref: FUN_00cc0130 */
uint F_00cc0130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc0130u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[2];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  byte bVar1;
  undefined4 uVar2;
  undefined * pvVar3;
  uint uVar4;
  
  (*(uint *)&gen_args[0]) = (uint)(byte)(*(uint *)&gen_args[0]);
  uVar2 = *(undefined4 *)((*(int *)&gen_args[1]) + 0x60);
  if ((REFG(int * PTR32, 0x15d7784) == (int *)0x0) || (*REFG(int * PTR32, 0x15d7784) == 0)) {
    bVar1 = *(byte *)((*(int *)&gen_args[1]) + 0x1be);
    ((undefined4 *)(gen_frame + 0xc))[0] = 0;
    F_00cbee90(((undefined4 *)(gen_frame + 0xc)),uVar2,(uint)bVar1);
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c),0x130,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
    if (pvVar3 != (undefined *)0x0) {
      uVar4 = F_00cd0de0(pvVar3,&(*(uint *)&gen_args[0]),uVar2,((undefined4 *)(gen_frame + 0xc)));
      REFG(undefined4, 0x15d773c) = uVar4;
      return uVar4;
    }
  }
  else {
    F_00cbee90(*REFG(int * PTR32, 0x15d7784),uVar2,0);
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c),0x130,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
    if (pvVar3 != (undefined *)0x0) {
      uVar4 = F_00cd0de0(pvVar3,&(*(uint *)&gen_args[0]),uVar2,*REFG(int * PTR32, 0x15d7784));
      REFG(undefined4, 0x15d773c) = uVar4;
      return uVar4;
    }
  }
  REFG(undefined4, 0x15d773c) = 0;
  return 0;
}

/* ref: FUN_00cc0260 */
uint F_00cc0260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcc0260u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return extraout_EAX;
}

/* ref: FUN_00cc0300 */
unsigned int F_00cc0300(unsigned int gen_a0)
{
  GEN_ENTER(0xcc0300u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  int * piVar4;
  int iVar5;
  int iVar6;
  
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798));
  }
  if (REFG(char, 0x15d7798) == '\0') {
    iVar6 = *(int *)(param_1 + 100);
    (*(int *)(gen_frame + 0x38)) = *(int *)(param_1 + 0x8c);
    (*(int *)(gen_frame + 0x30)) = *(int *)(param_1 + 0x90);
    if (((iVar6 != -1) || (*(int *)(param_1 + 0x8c) != -1)) || (*(int *)(param_1 + 0x90) != -1)) {
      REFG(int, 0x15d7730) = *(int *)(param_1 + 0x68);
      iVar1 = REFG(int, 0x15d7730) * 4;
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
      }
      REFG(undefined4, 0x15d7758) = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),iVar1,"CDev.Engine.Sd",0,0,0x10);
      iVar1 = REFG(int, 0x15d7730) * 4;
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
      }
      REFG(undefined4, 0x15d7770) = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),iVar1,"CDev.Engine.Sd",0,0,0x10);
      iVar1 = 0;
      if (0 < REFG(int, 0x15d7730)) {
        do {
          *(undefined4 *)(REFG(undefined4, 0x15d7758) + iVar1 * 4) = *(undefined4 *)(param_1 + 0x6c + iVar1 * 4);
          *(undefined4 *)(REFG(undefined4, 0x15d7770) + iVar1 * 4) = *(undefined4 *)(param_1 + 0x7c + iVar1 * 4);
          iVar1 = iVar1 + 1;
        } while (iVar1 < REFG(int, 0x15d7730));
      }
      F_00cc2750(iVar6);
      REFG(undefined4, 0x15d7764) = *(uint *)(param_1 + 0x38);
      iVar1 = REFG(undefined4, 0x15d7764) * 4;
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
      }
      REFG(uint * PTR32, 0x15d7784) = ((uint *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                       (REFG(int * PTR32, 0x15d778c),iVar1 + 4,"CDev.Engine.Sd.SoundDriver",0,0,0x10
                                       )));
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
      }
      REFG(undefined4, 0x15d775c) = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c),0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
      REFG(int, 0x15d7778) = 0;
      if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
        *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
        REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
      }
      REFG(undefined4, 0x15d774c) = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                               (REFG(int * PTR32, 0x15d778c),0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
      iVar1 = 0;
      REFG(int, 0x15d7788) = 0;
      if (-1 < (int)REFG(undefined4, 0x15d7764)) {
        do {
          if (((iVar1 == iVar6) || (iVar1 == -1)) || ((iVar1 == (*(int *)(gen_frame + 0x38)) || (iVar1 == (*(int *)(gen_frame + 0x30)))))) {
            if (iVar1 == 0) {
              if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
                *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
                REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
              }
              uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                (REFG(int * PTR32, 0x15d778c),0x20,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
              *REFG(uint * PTR32, 0x15d7784) = uVar2;
            }
            else {
              if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
                *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
                REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
              }
              uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                (REFG(int * PTR32, 0x15d778c),0xc,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
              REFG(uint * PTR32, 0x15d7784)[iVar1] = uVar2;
            }
            iVar5 = 0;
            if (iVar1 == iVar6) {
              if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
                *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
                REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
              }
              pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                         (REFG(int * PTR32, 0x15d778c),0x38,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
              if (pvVar3 == (undefined *)0x0) {
                uVar2 = 0;
              }
              else {
                uVar2 = F_00cd1b80(pvVar3);
              }
              *((uint *)GEN_TOP(REFG(uint * PTR32, 0x15d7784)[iVar1])) = uVar2;
              *(undefined4 *)(REFG(undefined4, 0x15d775c) + REFG(int, 0x15d7778) * 4) = *((undefined4 *)GEN_TOP(REFG(uint * PTR32, 0x15d7784)[iVar1]));
              REFG(int, 0x15d776c) = REFG(int, 0x15d7778);
              REFG(int, 0x15d7778) = REFG(int, 0x15d7778) + 1;
              iVar5 = 1;
              *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar1] + 4))) = 0;
            }
            if (iVar1 == -1) {
              if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
                *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
                REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
              }
              pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                         (REFG(int * PTR32, 0x15d778c),0xdc,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
              if (pvVar3 == (undefined *)0x0) {
                uVar2 = 0;
              }
              else {
                uVar2 = F_00cd1860(pvVar3,0);
              }
              *((uint *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[-1] + iVar5 * 4))) = uVar2;
              *(undefined4 *)(REFG(undefined4, 0x15d774c) + REFG(int, 0x15d7788) * 4) =
                   *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[-1] + iVar5 * 4)));
              REFG(int, 0x15d7788) = REFG(int, 0x15d7788) + 1;
              iVar5 = iVar5 + 1;
              *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[-1] + iVar5 * 4))) = 0;
            }
            if (iVar1 == (*(int *)(gen_frame + 0x38))) {
              *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar1] + iVar5 * 4))) = 0;
            }
            if (iVar1 == (*(int *)(gen_frame + 0x30))) {
              *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar1] + iVar5 * 4))) = 0;
            }
          }
          else {
            REFG(uint * PTR32, 0x15d7784)[iVar1] = 0;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 <= (int)REFG(undefined4, 0x15d7764));
        return 0;
      }
    }
  }
  else {
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798));
    }
    REFG(undefined4, 0x15d7764) = (uint)REFG(undefined1, 0x15d82b0);
    iVar6 = REFG(undefined4, 0x15d7764) * 4;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    REFG(uint * PTR32, 0x15d7784) = ((uint *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                     (REFG(int * PTR32, 0x15d778c),iVar6 + 4,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    REFG(undefined4, 0x15d774c) = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                             (REFG(int * PTR32, 0x15d778c),0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
    REFG(int, 0x15d7788) = 0;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    REFG(undefined4, 0x15d772c) = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                             (REFG(int * PTR32, 0x15d778c),0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
    REFG(undefined4, 0x15d7750) = 0;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    REFG(undefined4, 0x15d7740) = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                             (REFG(int * PTR32, 0x15d778c),0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
    REFG(int, 0x15d7768) = 0;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    REFG(undefined4, 0x15d7760) = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                             (REFG(int * PTR32, 0x15d778c),0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
    REFG(undefined4, 0x15d7738) = 0;
    if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
      REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
    }
    REFG(undefined4, 0x15d775c) = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                             (REFG(int * PTR32, 0x15d778c),0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
    iVar6 = 0;
    REFG(int, 0x15d7778) = 0;
    ((char *)(gen_frame + 0x8))[0] = '\0';
    ((char * PTR32 *)(gen_frame + 0xc))[0] = (char *)0x0;
    ((char * PTR32 *)(gen_frame + 0xc))[1] = (char *)0x0;
    ((char * PTR32 *)(gen_frame + 0xc))[2] = (char *)0x0;
    ((char * PTR32 *)(gen_frame + 0xc))[3] = (char *)0x0;
    if (-1 < (int)REFG(undefined4, 0x15d7764)) {
      do {
        if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
          F_00ccaf80(&REFG(char, 0x15d7798));
        }
        F_00cca550(&REFG(char, 0x15d7798),((char *)(gen_frame + 0x8)),iVar6);
        if ('\x03' < ((char *)(gen_frame + 0x8))[0]) {
          if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
            REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcc0260));
          }
          ((code *)REFG(gen_code32, 0x15d861c))("effectInfo.count <= MAX_EFFECTS_PER_BUS",
                          "[sd][driver][buscontainer] over effect count","BusContainer.cpp",0x27f,
                          "SQEX::CDev::Engine::Sd::Driver::BusContainer::InitializeEffects");
        }
        if (iVar6 == 0) {
          if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
            REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
          }
          uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                            (REFG(int * PTR32, 0x15d778c),0x20,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
          *REFG(uint * PTR32, 0x15d7784) = uVar2;
        }
        else {
          if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
            REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
          }
          uVar2 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                            (REFG(int * PTR32, 0x15d778c),0x10,"CDev.Engine.Sd.SoundDriver",0,0,0x10);
          REFG(uint * PTR32, 0x15d7784)[iVar6] = uVar2;
        }
        iVar1 = 0;
        if ('\0' < ((char *)(gen_frame + 0x8))[0]) {
          do {
            switch((unsigned int)(uintptr_t)(*((char * PTR32 *)(gen_frame + 0xc))[(int)(iVar1)])) {
            case '\0': ;
              *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4))) = 0;
              break;
            case '\x01': ;
              if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
                *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
                REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
              }
              pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                         (REFG(int * PTR32, 0x15d778c),0xdc,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
              if (pvVar3 == (undefined *)0x0) {
                uVar2 = 0;
              }
              else {
                uVar2 = F_00cd1860(pvVar3,((char * PTR32 *)(gen_frame + 0xc))[(int)(iVar1)]);
              }
              *((uint *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4))) = uVar2;
              if (3 < REFG(int, 0x15d7788)) {
                if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
                  *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
                  REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcc0260));
                }
                ((code *)REFG(gen_code32, 0x15d861c))("numCompressors_ < 4","","BusContainer.cpp",0x2e5,
                                "SQEX::CDev::Engine::Sd::Driver::BusContainer::InitializeEffects");
              }
              *(undefined4 *)(REFG(undefined4, 0x15d774c) + REFG(int, 0x15d7788) * 4) =
                   *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4)));
              REFG(int, 0x15d7788) = REFG(int, 0x15d7788) + 1;
              break;
            case '\x02': ;
            case '\x03': ;
            case '\x04': ;
              if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
                *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
                REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
              }
              pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                         (REFG(int * PTR32, 0x15d778c),0x58,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
              if (pvVar3 == (undefined *)0x0) {
                uVar2 = 0;
              }
              else {
                uVar2 = F_00cd1570(pvVar3);
              }
              *((uint *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4))) = uVar2;
              if (3 < REFG(int, 0x15d7768)) {
                if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
                  *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
                  REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcc0260));
                }
                ((code *)REFG(gen_code32, 0x15d861c))("numGranulars_ < 4",&REFG(undefined, 0x1129af3),"BusContainer.cpp",0x2f7,
                                "SQEX::CDev::Engine::Sd::Driver::BusContainer::InitializeEffects");
              }
              *(undefined4 *)(REFG(undefined4, 0x15d7740) + REFG(int, 0x15d7768) * 4) =
                   *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4)));
              REFG(int, 0x15d7768) = REFG(int, 0x15d7768) + 1;
              break;
            case '\x05': ;
              switch((unsigned int)(uintptr_t)(((char * PTR32 *)(gen_frame + 0xc))[(int)(iVar1)][0x10])) {
              case '\x01': ;
                (*(char * PTR32 *)(gen_frame + 0x2c)) = "CDev.Engine.Sd.SoundDriver";
                (*(int *)(gen_frame + 0x30)) = 0x10;
                pvVar3 = (undefined *)F_00cc0fd0(0x88,&(*(char * PTR32 *)(gen_frame + 0x2c)));
                if (pvVar3 == (undefined *)0x0) {
LAB_00cc0d36: ;
                  iVar5 = 0;
                }
                else {
                  piVar4 = (int *)F_00cc1640(pvVar3,((char * PTR32 *)(gen_frame + 0xc))[(int)(iVar1)],1);
                  if (piVar4 != (int *)0x0) break;
                  iVar5 = 0;
                }
                goto LAB_00cc0d41;
              case '\x02': ;
                (*(char * PTR32 *)(gen_frame + 0x34)) = "CDev.Engine.Sd.SoundDriver";
                (*(int *)(gen_frame + 0x38)) = 0x10;
                pvVar3 = (undefined *)F_00cc0fd0(0x88,&(*(char * PTR32 *)(gen_frame + 0x34)));
                if (pvVar3 == (undefined *)0x0) goto LAB_00cc0d36;
                piVar4 = (int *)F_00cc17d0(pvVar3,((char * PTR32 *)(gen_frame + 0xc))[(int)(iVar1)],1);
                if (piVar4 == (int *)0x0) {
                  iVar5 = 0;
                  goto LAB_00cc0d41;
                }
                break;
              case '\x03': ;
                (*(char * PTR32 *)(gen_frame + 0x24)) = "CDev.Engine.Sd.SoundDriver";
                (*(undefined4 *)(gen_frame + 0x28)) = 0x10;
                pvVar3 = (undefined *)F_00cc0fd0(0x88,&(*(char * PTR32 *)(gen_frame + 0x24)));
                if (pvVar3 == (undefined *)0x0) goto LAB_00cc0d36;
                piVar4 = (int *)F_00cc1910(pvVar3,((char * PTR32 *)(gen_frame + 0xc))[(int)(iVar1)],1);
                if (piVar4 == (int *)0x0) {
                  iVar5 = 0;
                  goto LAB_00cc0d41;
                }
                break;
              case '\x04': ;
                ((char * PTR32 *)(gen_frame + 0xc))[4] = "CDev.Engine.Sd.SoundDriver";
                (*(undefined4 *)(gen_frame + 0x20)) = 0x10;
                pvVar3 = (undefined *)F_00cc0fd0(0x88,((char * PTR32 *)(gen_frame + 0xc)) + 4);
                if ((pvVar3 == (undefined *)0x0) ||
                   (piVar4 = (int *)F_00cc1a50(pvVar3,((char * PTR32 *)(gen_frame + 0xc))[(int)(iVar1)],1), piVar4 == (int *)0x0))
                goto LAB_00cc0d36;
                break;
              default: ;
                goto switchD_00cc09e0_caseD_6;
              }
              iVar5 = *(int *)(*piVar4 + 4) + (int)piVar4;
LAB_00cc0d41: ;
              *((int *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4))) = iVar5;
              break;
            case '\a': ;
              if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
                *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
                REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
              }
              pvVar3 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                                         (REFG(int * PTR32, 0x15d778c),100,"CDev.Engine.Sd.SoundDriver",0,0,0x10)));
              if (pvVar3 == (undefined *)0x0) {
                uVar2 = 0;
              }
              else {
                uVar2 = F_00cd1280(pvVar3,((char * PTR32 *)(gen_frame + 0xc))[(int)(iVar1)]);
              }
              *((uint *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4))) = uVar2;
              if (3 < REFG(int, 0x15d7778)) {
                if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
                  *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
                  REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcc0260));
                }
                ((code *)REFG(gen_code32, 0x15d861c))("numPitchShifts_ < 4",&REFG(undefined, 0x1129b0f),"BusContainer.cpp",0x2fc,
                                "SQEX::CDev::Engine::Sd::Driver::BusContainer::InitializeEffects");
              }
              *(undefined4 *)(REFG(undefined4, 0x15d775c) + REFG(int, 0x15d7778) * 4) =
                   *((undefined4 *)GEN_TOP((REFG(uint * PTR32, 0x15d7784)[iVar6] + iVar1 * 4)));
              REFG(int, 0x15d7778) = REFG(int, 0x15d7778) + 1;
            }
switchD_00cc09e0_caseD_6: ;
            iVar1 = iVar1 + 1;
          } while (iVar1 < ((char *)(gen_frame + 0x8))[0]);
        }
        if (((char *)(gen_frame + 0x8))[0] < 4) {
          iVar1 = ((char *)(gen_frame + 0x8))[0] * 4;
          do {
            *((undefined4 *)GEN_TOP((iVar1 + REFG(uint * PTR32, 0x15d7784)[iVar6]))) = 0;
            iVar1 = iVar1 + 4;
          } while (iVar1 < 0xd);
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 <= (int)REFG(undefined4, 0x15d7764));
    }
  }
  return 0;
}

/* ref: FUN_00cc0dd0 */
uint F_00cc0dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc0dd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 uVar1;
  uint uVar2;
  
  REFG(int, 0x15d773c) = 0;
  REFG(undefined4, 0x15d7744) = 0;
  REFG(undefined4, 0x15d7728) = 0;
  REFG(undefined4, 0x15d7780) = 0;
  REFG(undefined4, 0x15d7734) = 0;
  REFG(undefined4, 0x15d7774) = 0;
  REFG(undefined4, 0x15d7754) = 0;
  REFG(undefined4, 0x15d7764) = 0;
  REFG(undefined4, 0x15d7784) = 0;
  REFG(undefined4, 0x15d777c) = 0;
  REFG(undefined4, 0x15d7748) = 0;
  REFG(int, 0x15d7760) = 0;
  REFG(undefined4, 0x15d7738) = 0;
  REFG(undefined4, 0x15d772c) = 0;
  REFG(undefined4, 0x15d7750) = 0;
  REFG(undefined4, 0x15d774c) = 0;
  REFG(undefined4, 0x15d775c) = 0;
  REFG(undefined4, 0x15d7788) = 0;
  REFG(undefined4, 0x15d7740) = 0;
  REFG(undefined4, 0x15d7768) = 0;
  REFG(undefined4, 0x15d776c) = 0xffffffff;
  REFG(undefined4, 0x15d7730) = 0;
  REFG(undefined4, 0x15d7758) = 0;
  REFG(undefined4, 0x15d7770) = 0;
  F_00cc0300(param_1);
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798));
  }
  if (REFG(char, 0x15d7798) == '\0') {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  else {
    uVar1 = REFG(undefined4, 0x15d860c);
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798));
      uVar1 = REFG(undefined4, 0x15d860c);
    }
  }
  uVar2 = F_00cc0130(uVar1,param_1);
  if (REFG(char, 0x15d8bd9) == '\0') {
    if (REFG(int, 0x15d7760) == 0) {
      F_00cbefe0(param_1);
    }
    F_00cbf0c0(param_1);
    F_00cbf230(param_1);
    *(undefined4 *)(REFG(int, 0x15d773c) + 0xe8) = REFG(undefined4, 0x15d7744);
    uVar2 = REFG(undefined4, 0x15d7754);
    *(uint *)(REFG(int, 0x15d773c) + 0xec) = REFG(undefined4, 0x15d7754);
  }
  return uVar2;
}

/* ref: FUN_00cc0f20 */
uint F_00cc0f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc0f20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cc0f30 */
uint F_00cc0f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc0f30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_2;
  *(undefined4 *)((int)this + 4) = *param_1;
  return (uint)this;
}

/* ref: FUN_00cc0f60 */
uint F_00cc0f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc0f60u, gen_a0, gen_a1, gen_a2, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 8))(param_1,param_2,*param_3,0,0,param_3[1]);
  return uVar1;
}

/* ref: FUN_00cc0f90 */
uint F_00cc0f90(unsigned int gen_a0)
{
  GEN_ENTER(0xcc0f90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(undefined4, 0x15d778c) = F_004042b0();
  }
  if (param_1 != 0) {
    REFG(undefined4, 0x15d778c) = param_1;
    return param_1;
  }
  return REFG(undefined4, 0x15d778c);
}

/* ref: FUN_00cc0fd0 */
uint F_00cc0fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc0fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),param_1,*param_2,0,0,param_2[1]);
  return uVar1;
}

/* ref: FUN_00cc1020 */
uint F_00cc1020(unsigned int gen_a0)
{
  GEN_ENTER(0xcc1020u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),param_1,"CDev.Engine.Sd",0,0,0x10);
  return uVar1;
}

/* ref: FUN_00cc1070 */
uint F_00cc1070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1070u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),param_1,*param_2,0,0,param_2[1]);
  return uVar1;
}

/* ref: FUN_00cc10c0 */
uint F_00cc10c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc10c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_00cc1130 */
uint F_00cc1130(unsigned int gen_a0)
{
  GEN_ENTER(0xcc1130u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  
  do {
    iVar1 = in_ecx;
    in_ecx = *(int *)(iVar1 + 0xc);
  } while (in_ecx != 0);
  return (int)*(short *)(iVar1 + 8);
}

/* ref: FUN_00cc1160 */
byte F_00cc1160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1160u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xe6) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00cc1190 */
uint F_00cc1190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1190u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xe0) = param_2;
  return param_2;
}

/* ref: FUN_00cc11c0 */
uint F_00cc11c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc11c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  double dVar1;
  
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x34) + 0x10))))((int)this + 0x34);
  dVar1 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))))((int)this + 0x10);
  return (uint)(ulonglong)gen_d2bits(dVar1);
}

/* ref: FUN_00cc12a0 */
uint F_00cc12a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc12a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xe8) = param_2;
  return param_2;
}

/* ref: FUN_00cc12b0 */
uint F_00cc12b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc12b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xec) = param_2;
  return param_2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IEffect::vf7 */
byte F_00cc12d0(void)
{
  GEN_ENTER(0xcc12d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IEffect::vf8 */
uint F_00cc12e0(void)
{
  GEN_ENTER(0xcc12e0u, 0u, 0u, 0u, 0u);
  return 0xffffffff;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::IEffect::vf0 */
uint F_00cc12f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc12f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cc1320 */
unsigned int F_00cc1320(unsigned int gen_a0)
{
  GEN_ENTER(0xcc1320u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(in_ecx + 0x13);
  F_00cccb40(in_ecx + 10);
  F_00cccb40(in_ecx + 1);
  *in_ecx = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::FilterBase::vf0 */
uint F_00cc1350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1350u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(this + 0x4c);
  F_00cccb40(this + 0x28);
  F_00cccb40(this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cc1390 */
uint F_00cc1390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1390u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x112a170);
    F_00ccd4d0((undefined *)((int)this + 4),0);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a12c));
  return (uint)this;
}

/* ref: FUN_00cc13e0 */
unsigned int F_00cc13e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc13e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(in_ecx + 0x50);
  F_00cccb40(in_ecx + 0x2c);
  F_00cccb40(in_ecx + 8);
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return 0;
}

/* ref: FUN_00cc1410 */
uint F_00cc1410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x112a1c0);
    F_00ccd4d0((undefined *)((int)this + 4),0);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a17c));
  return (uint)this;
}

/* ref: FUN_00cc1460 */
unsigned int F_00cc1460(unsigned int gen_a0)
{
  GEN_ENTER(0xcc1460u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(in_ecx + 0x50);
  F_00cccb40(in_ecx + 0x2c);
  F_00cccb40(in_ecx + 8);
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return 0;
}

/* ref: FUN_00cc1490 */
uint F_00cc1490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x112a210);
    F_00ccd4d0((undefined *)((int)this + 4),0);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a1cc));
  return (uint)this;
}

/* ref: FUN_00cc14e0 */
unsigned int F_00cc14e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc14e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(in_ecx + 0x50);
  F_00cccb40(in_ecx + 0x2c);
  F_00cccb40(in_ecx + 8);
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return 0;
}

/* ref: FUN_00cc1510 */
uint F_00cc1510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    *(undefined * PTR32 * PTR32 *)this = &REFG(undefined * PTR32, 0x112a260);
    F_00ccd4d0((undefined *)((int)this + 4),0);
  }
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a21c));
  return (uint)this;
}

/* ref: FUN_00cc1560 */
unsigned int F_00cc1560(unsigned int gen_a0)
{
  GEN_ENTER(0xcc1560u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40(in_ecx + 0x50);
  F_00cccb40(in_ecx + 0x2c);
  F_00cccb40(in_ecx + 8);
  *(undefined * PTR32 * PTR32 *)(in_ecx + 4) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return 0;
}

/* ref: FUN_00cc15e0 */
uint F_00cc15e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc15e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00cc15f0 */
uint F_00cc15f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc15f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x7c + param_2 * 4);
}

/* ref: FUN_00cc1640 */
uint F_00cc1640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc1640u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  if (param_2 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a2b8);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = &REFG(undefined * PTR32, 0x112a2b0);
    F_00ccd4d0((undefined *)((int)this + 0x18),0);
  }
  F_00cd07a0(this,param_1,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a12c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a26c));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) + -4 + (int)this))) = *(int *)(*(int *)this + 4) + -0x18;
  return (uint)this;
}

/* ref: FUN_00cc16b0 */
uint F_00cc16b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc16b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00cd0a60(((undefined *)GEN_TOP(((int)this + (-4 - *(int *)((int)this + -4))))),param_1,param_2);
  return uVar1;
}

/* ref: FUN_00cc16c0 */
uint F_00cc16c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc16c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc1bb0(((undefined *)GEN_TOP(((int)this - *(int *)((int)this + -4)))),param_1);
  return uVar1;
}

/* ref: FUN_00cc16e0 */
uint F_00cc16e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc16e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cd09c0(((undefined *)GEN_TOP(((int)this + (-4 - *(int *)((int)this + -4))))));
  return uVar1;
}

/* ref: FUN_00cc16f0 */
uint F_00cc16f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc16f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cd0ab0((in_ecx - *(int *)(in_ecx + -4)) + -4);
  return uVar1;
}

/* ref: FUN_00cc1700 */
uint F_00cc1700(unsigned int gen_a0)
{
  GEN_ENTER(0xcc1700u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ccd400();
  return uVar1;
}

/* ref: FUN_00cc1710 */
byte F_00cc1710(unsigned int gen_a0)
{
  GEN_ENTER(0xcc1710u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  
  bVar1 = F_00cd0980(((undefined *)GEN_TOP(((int)this + (-4 - *(int *)((int)this + -4))))));
  return bVar1;
}

/* ref: FUN_00cc1720 */
unsigned int F_00cc1720(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcc1720u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  float param_2 = (float)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00ccdb20((int)this + -4,param_1,param_2,param_3,param_4);
  return 0;
}

/* ref: FUN_00cc1730 */
unsigned int F_00cc1730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1730u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00cd0950(((undefined *)GEN_TOP(((int)this + (-4 - *(int *)((int)this + -4))))),param_1);
  return 0;
}

/* ref: FUN_00cc1740 */
uint F_00cc1740(unsigned int gen_a0)
{
  GEN_ENTER(0xcc1740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cd0920((undefined *)((int)this + 0x14));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 100);
  F_00cccb40((int)this + 0x40);
  F_00cccb40((int)this + 0x1c);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

/* ref: FUN_00cc1780 */
uint F_00cc1780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c);
  F_00cccb40((int)this + 0x28);
  F_00cccb40((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && ((int)this + -4 != 0)) {
    F_00406810((int)this + -4);
  }
  return (int)this - 4;
}

/* ref: FUN_00cc17d0 */
uint F_00cc17d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc17d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  if (param_2 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a310);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = &REFG(undefined * PTR32, 0x112a308);
    F_00ccd4d0((undefined *)((int)this + 0x18),0);
  }
  F_00cd07a0(this,param_1,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a17c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a2c4));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) + -4 + (int)this))) = *(int *)(*(int *)this + 4) + -0x18;
  return (uint)this;
}

/* ref: FUN_00cc1840 */
unsigned int F_00cc1840(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcc1840u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  float param_2 = (float)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00ccdb50((int)this + -4,param_1,param_2,param_3,param_4);
  return 0;
}

/* ref: FUN_00cc1850 */
uint F_00cc1850(unsigned int gen_a0)
{
  GEN_ENTER(0xcc1850u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ccd410();
  return uVar1;
}

/* ref: FUN_00cc1860 */
uint F_00cc1860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc1c00(((undefined *)GEN_TOP(((int)this - *(int *)((int)this + -4)))),param_1);
  return uVar1;
}

/* ref: FUN_00cc1880 */
uint F_00cc1880(unsigned int gen_a0)
{
  GEN_ENTER(0xcc1880u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cd0920((undefined *)((int)this + 0x14));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 100);
  F_00cccb40((int)this + 0x40);
  F_00cccb40((int)this + 0x1c);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

/* ref: FUN_00cc18c0 */
uint F_00cc18c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc18c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c);
  F_00cccb40((int)this + 0x28);
  F_00cccb40((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && ((int)this + -4 != 0)) {
    F_00406810((int)this + -4);
  }
  return (int)this - 4;
}

/* ref: FUN_00cc1910 */
uint F_00cc1910(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc1910u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  if (param_2 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a368);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = &REFG(undefined * PTR32, 0x112a360);
    F_00ccd4d0((undefined *)((int)this + 0x18),0);
  }
  F_00cd07a0(this,param_1,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a1cc));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a31c));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) + -4 + (int)this))) = *(int *)(*(int *)this + 4) + -0x18;
  return (uint)this;
}

/* ref: FUN_00cc1980 */
uint F_00cc1980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc1c50(((undefined *)GEN_TOP(((int)this - *(int *)((int)this + -4)))),param_1);
  return uVar1;
}

/* ref: FUN_00cc19a0 */
uint F_00cc19a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc19a0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ccd420();
  return uVar1;
}

/* ref: FUN_00cc19b0 */
uint F_00cc19b0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcc19b0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  float param_2 = (float)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00ccdb80((int)this + -4,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00cc19c0 */
uint F_00cc19c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc19c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cd0920((undefined *)((int)this + 0x14));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 100);
  F_00cccb40((int)this + 0x40);
  F_00cccb40((int)this + 0x1c);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

/* ref: FUN_00cc1a00 */
uint F_00cc1a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c);
  F_00cccb40((int)this + 0x28);
  F_00cccb40((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && ((int)this + -4 != 0)) {
    F_00406810((int)this + -4);
  }
  return (int)this - 4;
}

/* ref: FUN_00cc1a50 */
uint F_00cc1a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc1a50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  if (param_2 != 0) {
    *(undefined * PTR32 *)this = &REFG(undefined, 0x112a3c0);
    *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = &REFG(undefined * PTR32, 0x112a3b8);
    F_00ccd4d0((undefined *)((int)this + 0x18),0);
  }
  F_00cd07a0(this,param_1,0);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *((int *)GEN_TOP((*(int *)((int)this + 0x10) + 4))) + 0x10))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a21c));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + *(int *)(*(int *)this + 4)))) =
       (*(undefined * PTR32 (*)[17])REFP(0x112a374));
  *((int *)GEN_TOP((*(int *)(*(int *)this + 4) + -4 + (int)this))) = *(int *)(*(int *)this + 4) + -0x18;
  return (uint)this;
}

/* ref: FUN_00cc1ac0 */
uint F_00cc1ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc1ac0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ccd430();
  return uVar1;
}

/* ref: FUN_00cc1ad0 */
uint F_00cc1ad0(unsigned int gen_a0, float gen_a1, float gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcc1ad0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float param_1 = (float)gen_a1;
  float param_2 = (float)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = F_00ccdbb0((int)this + -4,param_1,param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00cc1ae0 */
uint F_00cc1ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc1ca0(((undefined *)GEN_TOP(((int)this - *(int *)((int)this + -4)))),param_1);
  return uVar1;
}

/* ref: FUN_00cc1b00 */
uint F_00cc1b00(unsigned int gen_a0)
{
  GEN_ENTER(0xcc1b00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cd0920((undefined *)((int)this + 0x14));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 100);
  F_00cccb40((int)this + 0x40);
  F_00cccb40((int)this + 0x1c);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x18) = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  return uVar1;
}

/* ref: FUN_00cc1b40 */
uint F_00cc1b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c);
  F_00cccb40((int)this + 0x28);
  F_00cccb40((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && ((int)this + -4 != 0)) {
    F_00406810((int)this + -4);
  }
  return (int)this - 4;
}

/* ref: FUN_00cc1b90 */
uint F_00cc1b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc1b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00cbee70(param_1,param_2);
  return (uint)this;
}

/* ref: FUN_00cc1bb0 */
uint F_00cc1bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (int)this - 0x18;
  F_00cd0920((undefined *)((int)this + -4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c);
  F_00cccb40((int)this + 0x28);
  F_00cccb40((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && (uVar1 != 0)) {
    F_00406810(uVar1);
  }
  return uVar1;
}

/* ref: FUN_00cc1c00 */
uint F_00cc1c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (int)this - 0x18;
  F_00cd0920((undefined *)((int)this + -4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c);
  F_00cccb40((int)this + 0x28);
  F_00cccb40((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && (uVar1 != 0)) {
    F_00406810(uVar1);
  }
  return uVar1;
}

/* ref: FUN_00cc1c50 */
uint F_00cc1c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1c50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (int)this - 0x18;
  F_00cd0920((undefined *)((int)this + -4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c);
  F_00cccb40((int)this + 0x28);
  F_00cccb40((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && (uVar1 != 0)) {
    F_00406810(uVar1);
  }
  return uVar1;
}

/* ref: FUN_00cc1ca0 */
uint F_00cc1ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (int)this - 0x18;
  F_00cd0920((undefined *)((int)this + -4));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x112a0e4));
  F_00cccb40((int)this + 0x4c);
  F_00cccb40((int)this + 0x28);
  F_00cccb40((int)this + 4);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[9])REFP(0x112a0bc));
  if (((param_1 & 1) != 0) && (uVar1 != 0)) {
    F_00406810(uVar1);
  }
  return uVar1;
}

/* ref: FUN_00cc1d20 */
uint F_00cc1d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcc1d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
    REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcc0260));
  }
  ((code *)REFG(gen_code32, 0x15d861c))(param_1,param_2,param_3,param_4,param_5);
  return (uint)this;
}

/* ref: FUN_00cc1d70 */
unsigned int F_00cc1d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc1d70u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00cc1d90 */
uint F_00cc1d90(void)
{
  GEN_ENTER(0xcc1d90u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  REFG(undefined4, 0x15d8624) = REFG(undefined4, 0x15d8624) + 1;
  if (0x3fffff < (int)REFG(undefined4, 0x15d8624)) {
    REFG(int, 0x15d8628) = REFG(int, 0x15d8628) + 1;
    REFG(undefined4, 0x15d8624) = 1;
  }
  if (REFG(int, 0x15d8628) != 0) {
    do {
      piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0);
      while( true ) {
        if (piVar1 == (int *)0x0) goto LAB_00cc1e11;
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xd0))(piVar1);
        if ((int)uVar2 >> 9 == REFG(undefined4, 0x15d8624)) break;
        piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar1);
      }
      REFG(undefined4, 0x15d8624) = REFG(undefined4, 0x15d8624) + 1;
      if (0x3fffff < (int)REFG(undefined4, 0x15d8624)) {
        REFG(int, 0x15d8628) = REFG(int, 0x15d8628) + 1;
        REFG(undefined4, 0x15d8624) = 1;
      }
    } while( true );
  }
LAB_00cc1e11: ;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return REFG(undefined4, 0x15d8624);
}

/* ref: FUN_00cc1e50 */
uint F_00cc1e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xcc1e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  byte * param_1 = (byte *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined1 * param_6 = (undefined1 *)(uintptr_t)gen_a5;
  int * param_7 = (int *)(uintptr_t)gen_a6;
  bool bVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  uint uVar5;
  int * piVar6;
  byte * pbVar7;
  int iVar8;
  float10 extraout_ST0;
  float10 fVar9;
  float10 extraout_ST0_00;
  longlong lVar10;
  longlong lVar11;
  float local_18;
  int local_14;
  int local_10;
  uint local_c;
  
  if (param_2 == 0) {
    return 0;
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  iVar8 = 0;
  for (piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0); piVar3 != (int *)0x0;
      piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar3)) {
    if ((((piVar3 != param_7) && (uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xdc))(piVar3), uVar4 != 8)) &&
        (uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xdc))(piVar3), uVar4 != 0x20)) &&
       (bVar2 = F_00cd4390(piVar3,param_1,param_4,param_5), bVar2 != 0)) {
      iVar8 = iVar8 + 1;
    }
  }
  local_c = 0;
  if ((iVar8 < 1) && (param_1[6] != 0)) goto LAB_00cc21ed;
  local_c = 1;
  local_10 = 0;
  if (param_1[7] == 0) {
LAB_00cc1fcb: ;
    pbVar7 = param_1 + 0x10;
  }
  else {
    pbVar7 = param_1 + 0x1c;
    do {
      local_14 = 0;
      piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0);
      if (piVar3 != (int *)0x0) {
        do {
          uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xdc))(piVar3);
          if (((uVar4 != 8) && (uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xdc))(piVar3), uVar4 != 0x20)) &&
             (bVar2 = F_00cd3290(piVar3,pbVar7,iVar8,(uint)*(byte *)(param_2 + 2),param_4,param_5,
                                   param_3), bVar2 != 0)) {
            local_14 = local_14 + 1;
          }
          piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar3);
        } while (piVar3 != (int *)0x0);
        if (local_14 != 0) {
          local_c = local_10 + 2;
        }
      }
      local_10 = local_10 + 1;
      pbVar7 = pbVar7 + 0x18;
      iVar8 = local_14;
    } while (local_10 < (int)(uint)param_1[7]);
    if (((int)local_c < 1) || (5 < (int)local_c)) goto LAB_00cc21ed;
    if (local_c == 1) goto LAB_00cc1fcb;
    pbVar7 = param_1 + local_c * 0x18 + -8;
  }
  if (pbVar7 != (byte *)0x0) {
    local_14 = 0;
    do {
      switch((unsigned int)(uintptr_t)(pbVar7[local_14 + 1])) {
      case 1: ;
        for (piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0); piVar3 != (int *)0x0;
            piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar3)) {
          if (local_c == piVar3[0x4d]) {
            ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3,0);
            if ((*(char *)(param_2 + 3) == '\x02') || (*(char *)(param_2 + 3) == '\f')) {
              *param_6 = 1;
            }
          }
        }
        break;
      case 2: ;
        for (uVar4 = F_00d2ff90(&REFG(undefined, 0x15d8634),0); uVar4 != 0;
            uVar4 = F_00d2ff90(&REFG(undefined, 0x15d8634),uVar4)) {
          if (local_c == *(uint *)(uVar4 + 0x134)) {
            iVar8 = (uint)*(byte *)(uVar4 + 0x12) + *(int *)(pbVar7 + local_14 * 4 + 8);
            if (iVar8 < 0) {
              iVar8 = 0;
            }
            else if (0xff < iVar8) {
              iVar8 = 0xff;
            }
            *(char *)(uVar4 + 0x12) = (char)iVar8;
          }
        }
        break;
      case 3: ;
        for (piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0); piVar3 != (int *)0x0;
            piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar3)) {
          if (local_c == piVar3[0x4d]) {
            ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3,*(undefined4 *)(pbVar7 + local_14 * 4 + 8));
          }
        }
        break;
      case 4: ;
        for (piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0); piVar3 != (int *)0x0;
            piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar3)) {
          if (local_c == piVar3[0x4d]) {
            extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(piVar3[0x11] + 0x10))(piVar3 + 0x11);
            ((code *)*(gen_code32 *)(*piVar3 + 0x4c))
                      (piVar3,(undefined4)
                              gen_fl2bits(((float)GEN_TOF(((float10)*(float *)(pbVar7 + local_14 * 4 + 8) *
                                                 (float10)(float)extraout_ST0)))),0);
          }
        }
        break;
      case 5: ;
        piVar3 = (int *)0x0;
        uVar4 = 0x100;
        piVar6 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0);
        if (piVar6 == (int *)0x0) {
          return 0;
        }
        do {
          if (local_c == piVar6[0x4d]) {
            uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 0xc0))(piVar6);
            if ((uVar5 & 0xff) < uVar4) {
              uVar4 = uVar5 & 0xff;
              piVar3 = piVar6;
            }
          }
          piVar6 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar6);
        } while (piVar6 != (int *)0x0);
        if (piVar3 == (int *)0x0) {
          return 0;
        }
LAB_00cc21bb: ;
        ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3,0);
        if ((*(char *)(param_2 + 3) == '\x02') || (*(char *)(param_2 + 3) == '\f')) {
          *param_6 = 1;
        }
        break;
      case 6: ;
        for (piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0); piVar3 != (int *)0x0;
            piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar3)) {
          if (local_c == piVar3[0x4d]) {
            ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)(pbVar7 + local_14 * 4 + 8),0);
          }
        }
        break;
      case 7: ;
        iVar8 = 0;
        if (*param_1 < 2) {
          fVar9 = (float10)*(float *)(pbVar7 + local_14 * 4 + 8);
        }
        else {
          iVar8 = (int)*(uint *)(pbVar7 + local_14 * 4 + 8) >> 8;
          fVar9 = ((float10)GEN_TOD((*(uint *)(pbVar7 + local_14 * 4 + 8) & 0xff))) *
                  (float10)*(double *)&REFG(undefined, 0x10928e8);
        }
        for (piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0); piVar3 != (int *)0x0;
            piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar3)) {
          if (local_c == piVar3[0x4d]) {
            ((code *)*(gen_code32 *)(*piVar3 + 0x40))(piVar3,(undefined4)gen_fl2bits((float)fVar9),iVar8);
          }
        }
        break;
      case 8: ;
        for (piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0); piVar3 != (int *)0x0;
            piVar3 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar3)) {
          uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xdc))(piVar3);
          if (((uVar4 != 8) && (uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0xdc))(piVar3), uVar4 != 0x20)) &&
             (local_c == piVar3[0x4d])) {
            ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3,0);
            if ((*(char *)(param_2 + 3) == '\x02') || (*(char *)(param_2 + 3) == '\f')) {
              *param_6 = 1;
            }
            break;
          }
        }
        break;
      case 0xc: ;
        piVar3 = (int *)0x0;
        bVar1 = true;
        piVar6 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0);
        if (piVar6 != (int *)0x0) {
          do {
            if (local_c == piVar6[0x4d]) {
              if (bVar1) {
                bVar1 = false;
              }
              else {
                lVar10 = ((gen_lcode *)*(gen_code32 *)(*piVar3 + 0x118))(piVar3);
                lVar11 = ((gen_lcode *)*(gen_code32 *)(*piVar6 + 0x118))(piVar6);
                if (lVar10 <= lVar11) goto LAB_00cc23b1;
              }
              piVar3 = piVar6;
            }
LAB_00cc23b1: ;
            piVar6 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar6);
          } while (piVar6 != (int *)0x0);
          if (piVar3 != (int *)0x0) goto LAB_00cc21bb;
        }
        break;
      case 0xd: ;
        piVar3 = (int *)0x0;
        local_18 = *(float *)&REFG(undefined, 0x112a620);
        piVar6 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0);
        if (piVar6 == (int *)0x0) {
          return 0;
        }
        do {
          if (local_c == piVar6[0x4d]) {
            extraout_ST0_00 = ((gen_fcode *)*(gen_code32 *)(*piVar6 + 0x110))(piVar6);
            if ((float10)(float)extraout_ST0_00 <= (float10)local_18) {
              piVar3 = piVar6;
              local_18 = (float)extraout_ST0_00;
            }
          }
          piVar6 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar6);
        } while (piVar6 != (int *)0x0);
        if (piVar3 == (int *)0x0) {
          return 0;
        }
        ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3,0);
        if ((*(char *)(param_2 + 3) == '\x02') || (*(char *)(param_2 + 3) == '\f')) {
          *param_6 = 1;
        }
      }
      local_14 = local_14 + 1;
    } while (local_14 < 1);
  }
LAB_00cc21ed: ;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return local_c;
}

/* ref: FUN_00cc24a0 */
uint F_00cc24a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc24a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < REFG(int, 0x15d862c)) {
    iVar2 = 0;
    do {
      bVar1 = F_00cd6590(iVar2 + REFG(int, 0x15d8630));
      if ((bVar1 != 0) &&
         (((char)param_1 != '\0' || ((*(uint *)(iVar2 + 0x24c + REFG(int, 0x15d8630)) >> 6 & 1) == 0)))) {
        return iVar3 * 0x278 + REFG(int, 0x15d8630);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x278;
    } while (iVar3 < REFG(int, 0x15d862c));
  }
  return 0;
}

/* ref: FUN_00cc2510 */
uint F_00cc2510(unsigned int gen_a0)
{
  GEN_ENTER(0xcc2510u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  if ((int)param_1 < 0) {
    return 0;
  }
  piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
  bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
  if (bVar1 != 0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
    if ((char)uVar2 != '\0') {
      return (uint)piVar3;
    }
  }
  return 0;
}

/* ref: FUN_00cc2570 */
uint F_00cc2570(void)
{
  GEN_ENTER(0xcc2570u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  ((uint *)(gen_frame + 0x4))[9] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  uVar2 = 0x398;
  ((uint *)(gen_frame + 0x4))[1] = 0x420;
  ((uint *)(gen_frame + 0x4))[3] = 0x420;
  ((uint *)(gen_frame + 0x4))[5] = 0x3a8;
  ((uint *)(gen_frame + 0x4))[6] = 0x3a8;
  ((uint *)(gen_frame + 0x4))[0] = 0x398;
  ((uint *)(gen_frame + 0x4))[2] = 0x430;
  ((uint *)(gen_frame + 0x4))[4] = 0x398;
  ((uint *)(gen_frame + 0x4))[7] = 0x398;
  ((uint *)(gen_frame + 0x4))[8] = 0;
  uVar1 = 0x398;
  iVar3 = 1;
  do {
    if ((int)uVar1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    uVar2 = ((uint *)(gen_frame + 0x4))[(int)(iVar3)];
    iVar3 = iVar3 + 1;
  } while (uVar2 != 0);
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c) ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar1;
}

/* ref: FUN_00cc2690 */
uint F_00cc2690(float gen_a0)
{
  GEN_ENTER(0xcc2690u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  int * piVar1;
  
  *(float *)&REFG(undefined, 0x134c6f4) = param_1;
  for (piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0); piVar1 != (int *)0x0;
      piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar1)) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x58))(piVar1,(undefined4)gen_fl2bits(param_1));
  }
  return 0;
}

/* ref: FUN_00cc2740 */
float F_00cc2740(void)
{
  GEN_ENTER(0xcc2740u, 0u, 0u, 0u, 0u);
  return *(float *)&REFG(undefined, 0x134c6f8);
}

/* ref: FUN_00cc2750 */
uint F_00cc2750(unsigned int gen_a0)
{
  GEN_ENTER(0xcc2750u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x134c6fc) = param_1;
  return param_1;
}

/* ref: FUN_00cc2760 */
uint F_00cc2760(void)
{
  GEN_ENTER(0xcc2760u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x134c6fc);
}

/* ref: FUN_00cc2770 */
uint F_00cc2770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc2770u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint local_8;
  
  iVar1 = 0;
  if (param_2 == 0) {
    return REFG(undefined4, 0x15d862c);
  }
  if (param_1 != 0) {
    uVar2 = 0;
    local_8 = 0;
    iVar3 = param_1;
    if (0 < (int)REFG(undefined4, 0x15d862c)) {
      do {
        if (param_2 <= uVar2) {
          return local_8;
        }
        F_00cd7180((undefined *)(iVar1 + REFG(int, 0x15d8630)),iVar3);
        local_8 = local_8 + 1;
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + 0x24;
        iVar1 = iVar1 + 0x278;
      } while ((int)uVar2 < (int)REFG(undefined4, 0x15d862c));
    }
    return local_8;
  }
  return 0;
}

/* ref: FUN_00cc27e0 */
uint F_00cc27e0(void)
{
  GEN_ENTER(0xcc27e0u, 0u, 0u, 0u, 0u);
  int iVar1;
  int iVar2;
  uint uVar3;
  uint extraout_EAX = 0;
  int in_ecx;
  
  if (REFG(int, 0x15d8630) != 0) {
    iVar2 = *(int *)(REFG(int, 0x15d8630) + -4);
    iVar1 = REFG(int, 0x15d8630) + -4;
    in_ecx = iVar2 * 0x278 + REFG(int, 0x15d8630);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      in_ecx = in_ecx + -0x278;
      F_00cd6180(in_ecx);
    }
    if (iVar1 != 0) {
      F_00406810(iVar1);
    }
  }
  REFG(char, 0x15d8698) = REFG(char, 0x15d867c);
  if (REFG(char, 0x15d867c) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
  }
  uVar3 = 0;
  if (REFG(int, 0x15d8668) != 0) {
    uVar3 = F_00406810(REFG(int, 0x15d8668));
    REFG(int, 0x15d8668) = 0;
  }
  REFG(undefined4, 0x15d866c) = 0;
  if (REFG(char, 0x15d8698) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
    uVar3 = extraout_EAX;
  }
  return uVar3;
}

/* ref: FUN_00cc2a00 */
uint F_00cc2a00(unsigned int gen_a0)
{
  GEN_ENTER(0xcc2a00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x78))(piVar3);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc2aa0 */
byte F_00cc2aa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc2aa0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined * this;
  undefined4 * puVar4;
  int iVar5;
  
  iVar2 = param_1;
  puVar4 = param_2;
  if (0 < param_1) {
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
  iVar2 = 0;
  if (0 < param_1) {
    do {
      iVar3 = 0;
      if (REFG(int, 0x15d862c) < 1) {
LAB_00cc2b0a: ;
        iVar2 = 0;
        do {
          if (param_2[iVar2] == 0) {
            return 0;
          }
          F_00cd8630(param_2[iVar2]);
          param_2[iVar2] = 0;
          iVar2 = iVar2 + 1;
        } while (iVar2 < param_1);
        return 0;
      }
      iVar5 = 0;
      while ((bVar1 = F_00cd6590(iVar5 + REFG(int, 0x15d8630)), bVar1 == 0 ||
             (((char)param_3 == '\0' && ((*(uint *)(iVar5 + 0x24c + REFG(int, 0x15d8630)) >> 6 & 1) != 0))))
            ) {
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 0x278;
        if (REFG(int, 0x15d862c) <= iVar3) goto LAB_00cc2b0a;
      }
      this = (undefined *)(iVar3 * 0x278 + REFG(int, 0x15d8630));
      if (this == (undefined *)0x0) goto LAB_00cc2b0a;
      F_00cd85d0(this);
      param_2[iVar2] = this;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1);
  }
  return 1;
}

/* ref: FUN_00cc2b60 */
byte F_00cc2b60(unsigned int gen_a0)
{
  GEN_ENTER(0xcc2b60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      if (REFG(char, 0x15d86b4) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
      }
      return 0;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x144))(piVar1,param_1);
    if (((char)uVar2 != '\0') &&
       (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x138))(piVar1), (char)uVar2 == '\0')) break;
    piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar1);
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 1;
}

/* ref: FUN_00cc2c00 */
byte F_00cc2c00(unsigned int gen_a0)
{
  GEN_ENTER(0xcc2c00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
      if ((char)uVar2 != '\0') {
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return 1;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc2c90 */
uint F_00cc2c90(unsigned int gen_a0)
{
  GEN_ENTER(0xcc2c90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
      if ((char)uVar2 != '\0') {
        if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
          F_00ccaf80(&REFG(char, 0x15d7798));
        }
        if (REFG(char, 0x15d7798) != '\0') {
          if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
            *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
            F_00ccaf80(&REFG(char, 0x15d7798));
          }
          F_00ccaea0(&REFG(char, 0x15d7798),piVar3);
        }
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 3;
}

/* ref: FUN_00cc2d80 */
uint F_00cc2d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc2d80u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 8))(piVar3,param_2);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 3;
}

/* ref: FUN_00cc2e20 */
byte F_00cc2e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc2e20u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,param_2);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc30c0 */
byte F_00cc30c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc30c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x134))(piVar3);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc3160 */
byte F_00cc3160(unsigned int gen_a0)
{
  GEN_ENTER(0xcc3160u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x13c))(piVar3);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc3200 */
uint F_00cc3200(unsigned int gen_a0)
{
  GEN_ENTER(0xcc3200u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xdc))(piVar3);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc32a0 */
unsigned int F_00cc32a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc32a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  ((code *)*(gen_code32 *)*param_1)(param_1,0);
  REFG(char, 0x15d8698) = REFG(char, 0x15d867c);
  if (REFG(char, 0x15d867c) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
  }
  *param_1 = REFG(undefined4 * PTR32, 0x15d866c);
  REFG(undefined4 * PTR32, 0x15d866c) = param_1;
  if (REFG(char, 0x15d8698) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
  }
  return 0;
}

/* ref: FUN_00cc32f0 */
uint F_00cc32f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc32f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int * piVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  uVar1 = gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d869c));
  if (REFG(int, 0x15d863c) != 0) {
    piVar2 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0);
    do {
      ((code *)*(gen_code32 *)(*piVar2 + 0x24))(piVar2,param_1);
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x138))(piVar2);
      if ((char)uVar1 == '\0') {
        piVar2 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar2);
      }
      else {
        ((code *)*(gen_code32 *)*piVar2)(piVar2,0);
        REFG(char, 0x15d8698) = REFG(char, 0x15d867c);
        if (REFG(char, 0x15d867c) != '\0') {
          gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8680));
        }
        *piVar2 = (int)REFG(int * PTR32, 0x15d866c);
        REFG(int * PTR32, 0x15d866c) = piVar2;
        if (REFG(char, 0x15d8698) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
        }
        piVar2 = (int *)F_00d2ff30(&REFG(undefined, 0x15d8634),piVar2);
      }
    } while (piVar2 != (int *)0x0);
    uVar1 = 0;
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00cc33c0 */
uint F_00cc33c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc33c0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0); piVar1 != (int *)0x0;
      piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar1)) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x14c))(piVar1);
    if ((char)uVar2 != '\0') {
      ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1);
    }
  }
  uVar2 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc3430 */
unsigned int F_00cc3430(unsigned int gen_a0)
{
  GEN_ENTER(0xcc3430u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  int iVar2;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  iVar1 = 0;
  if (0 < REFG(int, 0x15d862c)) {
    iVar2 = 0;
    do {
      F_00cd9d70((undefined *)(iVar2 + REFG(int, 0x15d8630)),param_1);
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x278;
    } while (iVar1 < REFG(int, 0x15d862c));
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc3490 */
unsigned int F_00cc3490(unsigned int gen_a0)
{
  GEN_ENTER(0xcc3490u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  F_00cc32f0(param_1);
  F_00cc3430(param_1);
  return 0;
}

/* ref: FUN_00cc3a40 */
uint F_00cc3a40(unsigned int gen_a0)
{
  GEN_ENTER(0xcc3a40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xd4))(piVar3);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0xffffffff;
}

/* ref: FUN_00cc3ae0 */
uint F_00cc3ae0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc3ae0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xd8))(piVar3);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0xffffffff;
}

/* ref: FUN_00cc3b80 */
uint F_00cc3b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc3b80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_2) {
    piVar3 = ((int *)GEN_TOP(((param_2 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_2);
      if ((char)uVar2 != '\0') {
        ((code *)*(gen_code32 *)(*piVar3 + 0xe0))(piVar3,param_1);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (uint)param_1;
      }
    }
  }
  *param_1 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return (uint)param_1;
}

/* ref: FUN_00cc3ca0 */
byte F_00cc3ca0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc3ca0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x154))(piVar3);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc3dc0 */
uint F_00cc3dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc3dc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xa4))(piVar3);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc3e60 */
uint F_00cc3e60(unsigned int gen_a0)
{
  GEN_ENTER(0xcc3e60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xbc))(piVar3);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc3f00 */
uint F_00cc3f00(unsigned int gen_a0)
{
  GEN_ENTER(0xcc3f00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xe4))(piVar3);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc3fa0 */
byte F_00cc3fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc3fa0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xf0))(piVar3);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc4170 */
uint F_00cc4170(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc4170u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0); piVar1 != (int *)0x0;
      piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar1)) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x144))(piVar1,param_1);
    if ((char)uVar2 != '\0') {
      ((code *)*(gen_code32 *)(*piVar1 + 0x80))(piVar1,(undefined4)gen_fl2bits(param_2),param_3);
    }
  }
  uVar2 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc42f0 */
uint F_00cc42f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc42f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float10 fVar1;
  int * piVar2;
  uint uVar3;
  uint extraout_EAX = 0;
  float10 fVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar2 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0); piVar2 != (int *)0x0;
      piVar2 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar2)) {
    uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0xec))(piVar2);
    if (uVar3 == 0xe) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 300))(piVar2,((undefined1 *)(gen_frame + 0x8)));
      if ((char)uVar3 == '\0') {
        (*(uint *)(gen_frame + 0xc)) = 0x32000f;
      }
      (*(float *)(gen_frame + 0x4)) = ((float)GEN_TOF(((float10)(int)(*(int *)(param_1 + 4) - ((*(uint *)(gen_frame + 0xc)) & 0xffff)) /
                        (float10)(int)(((*(uint *)(gen_frame + 0xc)) >> 0x10) - ((*(uint *)(gen_frame + 0xc)) & 0xffff)))));
      fVar1 = (float10)0;
      fVar4 = (float10)(*(float *)(gen_frame + 0x4));
      if (!(fVar1 <= fVar4) == (GEN_ISNAN(fVar4) || GEN_ISNAN(fVar1))) {
        fVar1 = (float10)1;
        if (!(fVar4 <= fVar1) != (GEN_ISNAN(fVar1) || GEN_ISNAN(fVar4))) {
          (*(float *)(gen_frame + 0x4)) = (float)fVar1;
        }
      }
      else {
        (*(float *)(gen_frame + 0x4)) = (float)fVar1;
      }
      ((code *)*(gen_code32 *)(*piVar2 + 0x80))(piVar2,(undefined4)gen_fl2bits((*(float *)(gen_frame + 0x4))),0);
    }
  }
  uVar3 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar3 = extraout_EAX;
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar3;
}

/* ref: FUN_00cc4400 */
uint F_00cc4400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc4400u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float10 fVar1;
  byte bVar2;
  uint uVar3;
  int * piVar4;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_2) {
    piVar4 = ((int *)GEN_TOP(((param_2 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar2 = F_00d30050(&REFG(undefined, 0x15d8634),piVar4);
    if ((bVar2 != 0) &&
       (uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0x140))(piVar4,param_2), (char)uVar3 != '\0')) {
      ((code *)*(gen_code32 *)(*piVar4 + 0xfc))(piVar4,((undefined1 *)(gen_frame + 0x8)));
    }
  }
  fVar1 = (float10)0;
  *param_1 = (float)fVar1;
  param_1[1] = (float)fVar1;
  param_1[2] = (float)fVar1;
  param_1[3] = (float)(float10)1;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return (uint)param_1;
}

/* ref: FUN_00cc44b0 */
float10 F_00cc44b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc44b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  float fVar5;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar4 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar4);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0x140))(piVar4,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0xf8))(piVar4);
        uVar3 = ((code *)*(gen_code32 *)(*piVar4 + 0xf4))(piVar4);
        fVar5 = F_00cc83a0(uVar3,uVar2);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (float10)fVar5;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return (float10)0;
}

/* ref: FUN_00cc46a0 */
uint F_00cc46a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc46a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x114))(piVar3);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc47c0 */
uint F_00cc47c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc47c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x90))(piVar3);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc4980 */
uint F_00cc4980(unsigned int gen_a0)
{
  GEN_ENTER(0xcc4980u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x11c))(piVar3);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc4a20 */
uint F_00cc4a20(unsigned int gen_a0)
{
  GEN_ENTER(0xcc4a20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  undefined8 uVar4;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
      if ((char)uVar2 != '\0') {
        uVar4 = ((gen_lcode *)*(gen_code32 *)(*piVar3 + 0x118))(piVar3);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (uint)uVar4;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc4ac0 */
uint F_00cc4ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc4ac0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x120))(piVar3,param_2);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0xffffffff;
}

/* ref: FUN_00cc4b60 */
byte F_00cc4b60(unsigned int gen_a0)
{
  GEN_ENTER(0xcc4b60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xc0))(piVar3);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc4c00 */
byte F_00cc4c00(unsigned int gen_a0)
{
  GEN_ENTER(0xcc4c00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x15c))(piVar3);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc4d20 */
uint F_00cc4d20(unsigned int gen_a0)
{
  GEN_ENTER(0xcc4d20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xf4))(piVar3);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc4dc0 */
uint F_00cc4dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc4dc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xf8))(piVar3);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0xffffffff;
}

/* ref: FUN_00cc4e60 */
uint F_00cc4e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc4e60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0); piVar1 != (int *)0x0;
      piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar1)) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x144))(piVar1,param_1);
    if ((char)uVar2 != '\0') {
      if (param_2 != 0) {
        ((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1,1);
      }
      ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_2);
    }
  }
  uVar2 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc4ef0 */
uint F_00cc4ef0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc4ef0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  int * piVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  uVar1 = gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d869c));
  if (REFG(int, 0x15d863c) != 0) {
    piVar2 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0);
    do {
      uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x144))(piVar2,param_1);
      if ((char)uVar1 == '\0') {
LAB_00cc4fa7: ;
        piVar2 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar2);
      }
      else {
        ((code *)*(gen_code32 *)(*piVar2 + 0x30))(piVar2);
        uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x138))(piVar2);
        if ((char)uVar1 == '\0') goto LAB_00cc4fa7;
        ((code *)*(gen_code32 *)*piVar2)(piVar2,0);
        REFG(char, 0x15d8698) = REFG(char, 0x15d867c);
        if (REFG(char, 0x15d867c) != '\0') {
          gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8680));
        }
        *piVar2 = (int)REFG(int * PTR32, 0x15d866c);
        REFG(int * PTR32, 0x15d866c) = piVar2;
        if (REFG(char, 0x15d8698) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
        }
        piVar2 = (int *)F_00d2ff30(&REFG(undefined, 0x15d8634),piVar2);
      }
    } while (piVar2 != (int *)0x0);
    uVar1 = 0;
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00cc4fe0 */
uint F_00cc4fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc4fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0); piVar1 != (int *)0x0;
      piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar1)) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x144))(piVar1,param_1);
    if ((char)uVar2 != '\0') {
      ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,param_2);
    }
  }
  uVar2 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc5060 */
uint F_00cc5060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc5060u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0); piVar1 != (int *)0x0;
      piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar1)) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x144))(piVar1,param_1);
    if ((char)uVar2 != '\0') {
      ((code *)*(gen_code32 *)(*piVar1 + 0x20))(piVar1,param_2);
    }
  }
  uVar2 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc50e0 */
uint F_00cc50e0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc50e0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0); piVar1 != (int *)0x0;
      piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar1)) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x144))(piVar1,param_1);
    if ((char)uVar2 != '\0') {
      ((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1,(undefined4)gen_fl2bits(param_2),param_3);
    }
  }
  uVar2 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc5160 */
byte F_00cc5160(unsigned int gen_a0)
{
  GEN_ENTER(0xcc5160u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      if (REFG(char, 0x15d86b4) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
      }
      return 0;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x144))(piVar1,param_1);
    if (((char)uVar2 != '\0') && (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xdc))(piVar1), (uVar2 & 8) != 0))
    break;
    piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar1);
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 1;
}

/* ref: FUN_00cc5200 */
byte F_00cc5200(unsigned int gen_a0)
{
  GEN_ENTER(0xcc5200u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x150))(piVar3);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc52a0 */
uint F_00cc52a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc52a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0); piVar1 != (int *)0x0;
      piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar1)) {
    if (param_1 != 0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x34))(piVar1,1);
    }
    ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1,param_1);
  }
  uVar2 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc5320 */
byte F_00cc5320(void)
{
  GEN_ENTER(0xcc5320u, 0u, 0u, 0u, 0u);
  int * piVar1;
  uint uVar2;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      if (REFG(char, 0x15d86b4) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
      }
      return 1;
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x138))(piVar1);
    if ((char)uVar2 == '\0') break;
    piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar1);
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc53a0 */
uint F_00cc53a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc53a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  int * piVar1;
  int * piVar2;
  int * extraout_EAX = 0;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0);
  piVar2 = piVar1;
  if ((char)param_1 == '\0') {
    while (piVar2 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar2 + 0x1c))(piVar2,param_2,param_3);
      piVar2 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar2);
      piVar1 = (int *)0x0;
    }
  }
  else if (piVar1 != (int *)0x0) {
    do {
      ((code *)*(gen_code32 *)(*piVar1 + 0x14))(piVar1,param_2,param_3);
      piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar1);
    } while (piVar1 != (int *)0x0);
    piVar1 = (int *)0x0;
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    piVar1 = extraout_EAX;
  }
  return (uint)piVar1;
}

/* ref: FUN_00cc5440 */
uint F_00cc5440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc5440u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0); piVar1 != (int *)0x0;
      piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar1)) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x134))(piVar1);
    if ((char)uVar2 != '\0') {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xf4))(piVar1);
      iVar3 = 0;
      if (0 < (int)uVar4) {
        do {
          if (*(uint *)(param_1 + iVar3 * 4) == uVar2) goto LAB_00cc54a5;
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)uVar4);
      }
      *(uint *)(param_1 + uVar4 * 4) = uVar2;
      uVar4 = uVar4 + 1;
      if (param_2 <= (int)uVar4) break;
    }
LAB_00cc54a5: ;
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return uVar4;
}

/* ref: FUN_00cc54e0 */
uint F_00cc54e0(void)
{
  GEN_ENTER(0xcc54e0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  uVar1 = REFG(undefined4, 0x15d863c);
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return uVar1;
}

/* ref: FUN_00cc5520 */
uint F_00cc5520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc5520u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    REFG(char, 0x15d86b4) = '\x01';
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar1 = F_00d2ff90(&REFG(undefined, 0x15d8634),0);
    for (uVar2 = 0; (uVar1 != 0 && (uVar2 < param_2)); uVar2 = uVar2 + 1) {
      *(uint *)(param_1 + uVar2 * 4) = uVar1;
      uVar1 = F_00d2ff90(&REFG(undefined, 0x15d8634),uVar1);
    }
    if (REFG(char, 0x15d86b4) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    }
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00cc5590 */
uint F_00cc5590(unsigned int gen_a0)
{
  GEN_ENTER(0xcc5590u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x188))(piVar3);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc5630 */
byte F_00cc5630(unsigned int gen_a0)
{
  GEN_ENTER(0xcc5630u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xdc))(piVar3);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2 & 1;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc56d0 */
byte F_00cc56d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc56d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  byte bVar3;
  int * piVar4;
  
  bVar3 = 1;
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar4 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar4);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0x140))(piVar4,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0xdc))(piVar4);
        if ((uVar2 & 0x28) == 0) {
          bVar3 = 0;
        }
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return bVar3;
}

/* ref: FUN_00cc5760 */
uint F_00cc5760(unsigned int gen_a0)
{
  GEN_ENTER(0xcc5760u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 400))(piVar3);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc5800 */
uint F_00cc5800(void)
{
  GEN_ENTER(0xcc5800u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  undefined * this;
  uint extraout_EAX = 0;
  uint in_ECX = 0;
  byte bVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0);
  while (piVar1 != (int *)0x0) {
    bVar3 = 0;
    (*(uint *)(gen_frame + 0x8)) = in_ECX & 0xffffff00;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc4))(piVar1);
    if ((char)uVar2 != '\0') {
      do {
        this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0xcc))(piVar1,(*(uint *)(gen_frame + 0x8)))));
        F_00cd6e40(this);
        bVar3 = bVar3 + 1;
        (*(uint *)(gen_frame + 0x8)) = CONCAT31(GEN_PIECE(&(*(uint *)(gen_frame + 0x8)), 1, 3),bVar3);
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc4))(piVar1);
      } while (bVar3 < (byte)uVar2);
    }
    piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar1);
    in_ECX = (*(uint *)(gen_frame + 0x8));
  }
  uVar2 = 0;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc58a0 */
byte F_00cc58a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc58a0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  if (-1 < (int)param_1) {
    piVar3 = ((int *)GEN_TOP(((param_1 & 0x1ff) * REFG(int, 0x15d8674) + *(int *)&REFG(undefined, 0x15d8670))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d8634),piVar3);
    if (bVar1 != 0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x140))(piVar3,param_1);
      if ((char)uVar2 != '\0') {
        uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x194))(piVar3,param_2);
        if (REFG(char, 0x15d86b4) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
        }
        return (byte)uVar2;
      }
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  return 0;
}

/* ref: FUN_00cc5940 */
uint F_00cc5940(unsigned int gen_a0)
{
  GEN_ENTER(0xcc5940u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  char cVar1;
  int iVar2;
  byte bVar3;
  char * pcVar4;
  uint uVar5;
  int * piVar6;
  undefined4 * puVar7;
  uint uVar8;
  int iVar9;
  char * pcVar10;
  
  (*(uint *)(gen_frame + 0x118)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x11c);
  (*(int *)(gen_frame + 0x10)) = param_1;
  F_00c4720f(((char *)(gen_frame + 0x18)),"[Sound]\n");
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(param_1 + -1);
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0x18));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  (*(int *)(gen_frame + 0x14)) = 0;
  REFG(char, 0x15d86b4) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  for (piVar6 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),0); piVar6 != (int *)0x0;
      piVar6 = (int *)F_00d2ff90(&REFG(undefined, 0x15d8634),piVar6)) {
    uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 0xdc))(piVar6);
    uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 0x13c))(uVar5);
    uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 0x138))(uVar5 & 0xff);
    uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 0x150))(uVar5 & 0xff);
    uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 0xd0))(uVar5 & 0xff);
    F_00c4720f(((char *)(gen_frame + 0x18)),"Snd[%d] ID=%x Str=%d Fin=%d Pause=%d State=%d ",(*(int *)(gen_frame + 0x14)),uVar5);
    pcVar4 = ((char *)(gen_frame + 0x18));
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
    pcVar4 = (char *)((*(int *)(gen_frame + 0x10)) + -1);
    do {
      pcVar10 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar10 != '\0');
    pcVar10 = ((char *)(gen_frame + 0x18));
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar4 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar4 = pcVar4 + 1;
    }
    puVar7 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*piVar6 + 0xe0))(piVar6,&(*(int *)(gen_frame + 0xc)))));
    ((code *)*(gen_code32 *)(*piVar6 + 0x10c))(piVar6);
    uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 0xa4))(*puVar7);
    uVar5 = ((code *)*(gen_code32 *)(*piVar6 + 0xf4))(uVar5);
    F_00c4720f(((char *)(gen_frame + 0x18)),"BnkID=%x BusNo=%d Time=%d Vol=%f\n",uVar5);
    pcVar4 = ((char *)(gen_frame + 0x18));
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
    pcVar4 = (char *)((*(int *)(gen_frame + 0x10)) + -1);
    do {
      pcVar10 = pcVar4 + 1;
      pcVar4 = pcVar4 + 1;
    } while (*pcVar10 != '\0');
    (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
    pcVar10 = ((char *)(gen_frame + 0x18));
    for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
      pcVar10 = pcVar10 + 4;
      pcVar4 = pcVar4 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar4 = *pcVar10;
      pcVar10 = pcVar10 + 1;
      pcVar4 = pcVar4 + 1;
    }
  }
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"SoundContainerCount = %d\n",(*(int *)(gen_frame + 0x14)));
  iVar2 = (*(int *)(gen_frame + 0x10));
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)((*(int *)(gen_frame + 0x10)) + -1);
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0x18));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"[Track]\n");
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(iVar2 + -1);
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0x18));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  (*(int *)(gen_frame + 0x14)) = 0;
  F_00c4720f(((char *)(gen_frame + 0x18)),"UseTrack = ");
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  pcVar4 = (char *)(iVar2 + -1);
  do {
    pcVar10 = pcVar4 + 1;
    pcVar4 = pcVar4 + 1;
  } while (*pcVar10 != '\0');
  pcVar10 = ((char *)(gen_frame + 0x18));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
    pcVar10 = pcVar10 + 4;
    pcVar4 = pcVar4 + 4;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pcVar4 = *pcVar10;
    pcVar10 = pcVar10 + 1;
    pcVar4 = pcVar4 + 1;
  }
  (*(int *)(gen_frame + 0xc)) = 0;
  if (0 < REFG(int, 0x15d862c)) {
    (*(int *)(gen_frame + 0x10)) = 0;
    do {
      iVar9 = (*(int *)(gen_frame + 0xc));
      bVar3 = F_00cd6590((*(int *)(gen_frame + 0x10)) + REFG(int, 0x15d8630));
      if (bVar3 == 0) {
        F_00c4720f(((char *)(gen_frame + 0x18)),&REFG(undefined, 0x112a5c4),iVar9);
        pcVar4 = ((char *)(gen_frame + 0x18));
        do {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
        pcVar4 = (char *)(iVar2 + -1);
        do {
          pcVar10 = pcVar4 + 1;
          pcVar4 = pcVar4 + 1;
        } while (*pcVar10 != '\0');
        pcVar10 = ((char *)(gen_frame + 0x18));
        for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
          *(undefined4 *)pcVar4 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar4 = pcVar4 + 4;
        }
        (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + 1;
        for (uVar5 = uVar5 & 3; iVar9 = (*(int *)(gen_frame + 0xc)), uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar4 = *pcVar10;
          pcVar10 = pcVar10 + 1;
          pcVar4 = pcVar4 + 1;
        }
      }
      (*(int *)(gen_frame + 0x10)) = (*(int *)(gen_frame + 0x10)) + 0x278;
      (*(int *)(gen_frame + 0xc)) = iVar9 + 1;
    } while (iVar9 + 1 < REFG(int, 0x15d862c));
  }
  F_00c4720f(((char *)(gen_frame + 0x18)),"\nTrackCount = %d/%d\n",(*(int *)(gen_frame + 0x14)),REFG(int, 0x15d862c));
  pcVar4 = ((char *)(gen_frame + 0x18));
  do {
    cVar1 = *pcVar4;
    pcVar4 = pcVar4 + 1;
  } while (cVar1 != '\0');
  pcVar10 = (char *)(iVar2 + -1);
  uVar5 = (int)pcVar4 - (int)((char *)(gen_frame + 0x18));
  do {
    pcVar4 = pcVar10 + 1;
    pcVar10 = pcVar10 + 1;
  } while (*pcVar4 != '\0');
  pcVar4 = ((char *)(gen_frame + 0x18));
  for (uVar8 = uVar5 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
    *(undefined4 *)pcVar10 = *(undefined4 *)pcVar4;
    pcVar4 = pcVar4 + 4;
    pcVar10 = pcVar10 + 4;
  }
  for (uVar8 = uVar5 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
    *pcVar10 = *pcVar4;
    pcVar4 = pcVar4 + 1;
    pcVar10 = pcVar10 + 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0x118)) ^ (uint)(uint)(gen_frame + 0x11c));
  return uVar5;
}

/* ref: FUN_00cc5d00 */
uint F_00cc5d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc5d00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00cc53a0(param_1,0,param_2);
  return uVar1;
}

/* ref: FUN_00cc5d20 */
uint F_00cc5d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcc5d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return extraout_EAX;
}

/* ref: FUN_00cc5dc0 */
unsigned int F_00cc5dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc5dc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint * puVar1;
  uint * puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint * this;
  int iVar6;
  int iVar7;
  
  ((int *)(gen_frame + 0x14))[9] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x3c);
  (*(int *)(gen_frame + 0xc)) = param_1;
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798));
  }
  if (REFG(char, 0x15d7798) == '\0') {
    uVar3 = *(uint *)(param_1 + 4);
  }
  else {
    uVar3 = REFG(undefined4, 0x15d860c);
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798));
      uVar3 = REFG(undefined4, 0x15d860c);
    }
  }
  REFG(undefined4, 0x15d862c) = uVar3;
  uVar4 = -(uint)((int)((ulonglong)uVar3 * 0x278 >> 0x20) != 0) | (uint)((ulonglong)uVar3 * 0x278);
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  puVar2 = ((uint *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                             (REFG(int * PTR32, 0x15d778c),-(uint)(0xfffffffb < uVar4) | uVar4 + 4,
                              "CDev.Engine.Sd.SoundDriver",0,0,0x10)));
  if (puVar2 == (uint *)0x0) {
    REFG(uint * PTR32, 0x15d8630) = (uint *)0x0;
    iVar6 = param_1;
    puVar1 = REFG(uint * PTR32, 0x15d8630);
  }
  else {
    *puVar2 = uVar3;
    this = puVar2 + 1;
    iVar6 = (*(int *)(gen_frame + 0xc));
    while (uVar3 = uVar3 - 1, puVar1 = puVar2 + 1, (*(int *)(gen_frame + 0xc)) = iVar6, -1 < (int)uVar3) {
      F_00cd7250(this);
      this = this + 0x9e;
      iVar6 = (*(int *)(gen_frame + 0xc));
    }
  }
  REFG(uint * PTR32, 0x15d8630) = puVar1;
  uVar3 = *(uint *)(iVar6 + 0x40) & ((int)*(uint *)(iVar6 + 0x40) < 0) - 1;
  if (*(char *)(iVar6 + 0x1bf) == '\0') {
    uVar3 = 0;
  }
  else {
    (*(uint *)(gen_frame + 0x8)) = uVar3;
    puVar2 = &REFG(undefined4, 0x15d862c);
    if ((int)uVar3 <= (int)REFG(undefined4, 0x15d862c)) {
      puVar2 = &(*(uint *)(gen_frame + 0x8));
    }
    uVar3 = *puVar2;
  }
  iVar6 = 0;
  if (0 < (int)REFG(undefined4, 0x15d862c)) {
    iVar7 = 0;
    do {
      F_00cd61f0(((undefined *)GEN_TOP((iVar7 + (int)REFG(uint * PTR32, 0x15d8630)))),iVar6,*(undefined4 *)((*(int *)(gen_frame + 0xc)) + 0x10),
                   (uint)(iVar6 < (int)uVar3));
      iVar6 = iVar6 + 1;
      iVar7 = iVar7 + 0x278;
    } while (iVar6 < (int)REFG(undefined4, 0x15d862c));
  }
  F_00d2fdb0(&REFG(undefined, 0x15d8634),0x188);
  iVar6 = 0x398;
  ((int *)(gen_frame + 0x14))[1] = 0x420;
  ((int *)(gen_frame + 0x14))[3] = 0x420;
  ((int *)(gen_frame + 0x14))[5] = 0x3a8;
  ((int *)(gen_frame + 0x14))[6] = 0x3a8;
  (*(undefined4 *)(gen_frame + 0x10)) = 0x398;
  ((int *)(gen_frame + 0x14))[0] = 0x398;
  ((int *)(gen_frame + 0x14))[2] = 0x430;
  ((int *)(gen_frame + 0x14))[4] = 0x398;
  ((int *)(gen_frame + 0x14))[7] = 0x398;
  ((int *)(gen_frame + 0x14))[8] = 0;
  iVar7 = 0x398;
  iVar5 = 1;
  do {
    if (iVar7 < iVar6) {
      iVar7 = iVar6;
    }
    iVar6 = ((int *)(gen_frame + 0x14))[(int)(iVar5)];
    iVar5 = iVar5 + 1;
  } while (iVar6 != 0);
  (*(char * PTR32 *)(gen_frame + 0x4)) = "CDev.Engine.Sd.SoundDriver";
  (*(uint *)(gen_frame + 0x8)) = 0x10;
  F_00cc6930(&REFG(undefined4, 0x15d8668),iVar7,REFG(undefined4, 0x15d862c),&(*(char * PTR32 *)(gen_frame + 0x4)),0x10,1);
  F_00c47745(((int *)(gen_frame + 0x14))[9] ^ (uint)(uint)(gen_frame + 0x3c));
  return 0;
}

/* ref: FUN_00cc5fc0 */
uint F_00cc5fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcc5fc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  undefined4 uVar1;
  undefined4 * puVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  int * piVar7;
  uint uVar8;
  int iVar9;
  
  piVar7 = (int *)0x0;
  REFG(char, 0x15d8698) = REFG(char, 0x15d867c);
  if (REFG(char, 0x15d867c) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
  }
  puVar2 = REFG(undefined4 * PTR32, 0x15d866c);
  if (REFG(undefined4 * PTR32, 0x15d866c) == (undefined4 *)0x0) {
    if (REFG(char, 0x15d8698) == '\0') {
      return 0;
    }
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
    return 0;
  }
  uVar1 = *REFG(undefined4 * PTR32, 0x15d866c);
  (*(undefined4 * PTR32 *)(gen_frame + 0x98)) = REFG(undefined4 * PTR32, 0x15d866c);
  REFG(undefined4 * PTR32, 0x15d866c) = (undefined4 *)uVar1;
  if (REFG(char, 0x15d8698) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
  }
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
  uVar4 = (uint)((int)puVar2 - *(int *)&REFG(undefined, 0x15d8670)) / REFG(undefined4, 0x15d8674);
  uVar5 = F_00cc1d90();
  uVar4 = uVar5 << 9 | uVar4;
  uVar5 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if (uVar5 == 3) {
    (*(uint *)(gen_frame + 0x84)) = 0;
    (*(uint *)(gen_frame + 0x88)) = 0;
    (*(uint *)(gen_frame + 0x8c)) = 0;
    (*(uint *)(gen_frame + 0x90)) = 0;
    F_00cde2f0(&(*(undefined1 *)(gen_frame + 0x97)));
    bVar3 = F_00cc2aa0(4,&(*(uint *)(gen_frame + 0x84)),0);
    if (bVar3 == 0) {
      F_00cc6810(&REFG(undefined4, 0x15d8668),(*(undefined4 * PTR32 *)(gen_frame + 0x98)));
      return 0;
    }
    piVar7 = (int *)F_00cded50((*(undefined4 * PTR32 *)(gen_frame + 0x98)),uVar4,param_1,&(*(uint *)(gen_frame + 0x84)),4,param_3,&(*(undefined1 *)(gen_frame + 0x97)),param_4);
    goto LAB_00cc60c8;
  }
  if ((*(byte *)(param_1 + 0x12) & 8) != 0) {
    ((code *)*(gen_code32 *)(*param_1 + 0x88))(param_1);
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcc5d20));
    }
    ((code *)REFG(gen_code32, 0x15d861c))("!\"[sd][Driver][WIN][PS3][X360][VITA] streaming only can use with Stream EX!!\""
                    ,"","SoundContainer.cpp",0x161,
                    "SQEX::CDev::Engine::Sd::Driver::SoundContainer::AddSound");
    goto LAB_00cc60c8;
  }
  uVar5 = *param_2;
  (*(uint *)(gen_frame + 0x88)) = param_2[1];
  uVar8 = param_2[3];
  (*(uint *)(gen_frame + 0x8c)) = param_2[2];
  (*(uint *)(gen_frame + 0x84)) = uVar5;
  (*(uint *)(gen_frame + 0x90)) = uVar8;
  cVar6 = (char)(uVar5 >> 0x18);
  if (cVar6 == -0x80) {
LAB_00cc61ff: ;
    F_00cc6810(&REFG(undefined4, 0x15d8668),(*(undefined4 * PTR32 *)(gen_frame + 0x98)));
    return 0;
  }
  uVar8 = 1;
  if (((1 < (byte)uVar5) && (cVar6 != '\x02')) && (cVar6 != '\x05')) {
    uVar8 = uVar5 & 0xff;
  }
  (*(int *)(gen_frame + 0x4)) = 0;
  F_00c48350(((undefined1 *)(gen_frame + 0x8)),0,0x7c);
  bVar3 = F_00cc2aa0(uVar8,&(*(int *)(gen_frame + 0x4)),0);
  if (bVar3 == 0) goto LAB_00cc61ff;
  switch((unsigned int)(uintptr_t)((*(uint *)(gen_frame + 0x84)) >> 0x18)) {
  case 1: ;
  case 0xf: ;
    piVar7 = (int *)F_00cd38f0((*(undefined4 * PTR32 *)(gen_frame + 0x98)),uVar4,param_1,param_2,&(*(int *)(gen_frame + 0x4)),uVar8,1,param_3,param_4);
    break;
  case 2: ;
  case 0xc: ;
    piVar7 = (int *)F_00cdd250((*(undefined4 * PTR32 *)(gen_frame + 0x98)),uVar4,param_1,param_2,&(*(int *)(gen_frame + 0x4)),uVar8,param_3,param_4);
    break;
  case 3: ;
    piVar7 = (int *)F_00cde150((*(undefined4 * PTR32 *)(gen_frame + 0x98)),uVar4,param_1,param_2,&(*(int *)(gen_frame + 0x4)),uVar8,1,param_3,param_4);
    break;
  case 4: ;
    piVar7 = (int *)F_00cdcb70((*(undefined4 * PTR32 *)(gen_frame + 0x98)),uVar4,param_1,param_2,&(*(int *)(gen_frame + 0x4)),uVar8,param_3,param_4);
    break;
  case 5: ;
  case 0xd: ;
    piVar7 = (int *)F_00cdc690((*(undefined4 * PTR32 *)(gen_frame + 0x98)),uVar4,param_1,param_2,&(*(int *)(gen_frame + 0x4)),uVar8,param_3,param_4);
    break;
  case 6: ;
    piVar7 = (int *)F_00cdda70((*(undefined4 * PTR32 *)(gen_frame + 0x98)),uVar4,param_1,param_2,&(*(int *)(gen_frame + 0x4)),uVar8,param_3,param_4);
    break;
  case 7: ;
    piVar7 = (int *)F_00cddc70((*(undefined4 * PTR32 *)(gen_frame + 0x98)),uVar4,param_1,param_2,&(*(int *)(gen_frame + 0x4)),uVar8,param_3,param_4);
    break;
  default: ;
    goto LAB_00cc6384;
  case 0xb: ;
    piVar7 = (int *)F_00cd38f0((*(undefined4 * PTR32 *)(gen_frame + 0x98)),uVar4,param_1,param_2,&(*(int *)(gen_frame + 0x4)),uVar8,1,param_3,param_4);
    ((code *)*(gen_code32 *)(*piVar7 + 0x1a4))(piVar7);
    break;
  case 0xe: ;
    piVar7 = (int *)F_00cdc550((*(undefined4 * PTR32 *)(gen_frame + 0x98)),uVar4,param_1,param_2,&(*(int *)(gen_frame + 0x4)),uVar8,param_3,param_4);
    break;
  case 0x10: ;
LAB_00cc6384: ;
    F_00cc6810(&REFG(undefined4, 0x15d8668),(*(undefined4 * PTR32 *)(gen_frame + 0x98)));
    iVar9 = 0;
    if (uVar8 != 0) {
      do {
        if (*(int *)(((undefined1 *)(gen_frame + 0x8)) + iVar9 * 4 + -4) != 0) {
          F_00cd8630(*(int *)(((undefined1 *)(gen_frame + 0x8)) + iVar9 * 4 + -4));
          *(undefined4 *)(((undefined1 *)(gen_frame + 0x8)) + iVar9 * 4 + -4) = 0;
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 < (int)uVar8);
    }
    return 0;
  }
LAB_00cc60c8: ;
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  F_00d2fe00(&REFG(undefined, 0x15d8634),piVar7);
  if (REFG(char, 0x15d86b4) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c));
  }
  if (piVar7 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar7 + 0x1a8))(piVar7);
    if ((char)uVar4 == '\0') {
      ((code *)*(gen_code32 *)(*piVar7 + 0x10))(piVar7,0);
    }
    ((code *)*(gen_code32 *)(*piVar7 + 0x58))(piVar7,*(undefined4 *)&REFG(undefined, 0x134c6f4));
    *(undefined1 *)((int)piVar7 + 0x1c5) = (undefined1)param_5;
  }
  return (uint)piVar7;
}

/* ref: FUN_00cc6400 */
uint F_00cc6400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc6400u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  piVar1 = (int *)*param_2;
  uVar2 = ((code *)*(gen_code32 *)(*(int *)*param_1 + 0xc0))((int *)*param_1);
  uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0xc0))(piVar1);
  return (uVar2 & 0xff) - (uVar3 & 0xff);
}

/* ref: FUN_00cc6440 */
uint F_00cc6440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc6440u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint _NumOfElements;
  
  if ((param_1 != (undefined *)0x0) && (param_2 != 0)) {
    _NumOfElements = F_00cc5520(param_1,param_2);
    if (_NumOfElements == 0) {
      return 0;
    }
    F_00c4f040(param_1,_NumOfElements,4,((code *)REFP(0xcc6400)));
    return _NumOfElements;
  }
  return 0;
}

/* ref: FUN_00cc6490 */
uint F_00cc6490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc6490u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00cc64a0 */
uint F_00cc64a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc64a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),param_1,*param_2,0,0,param_2[1]);
  return uVar1;
}

/* ref: FUN_00cc64f0 */
uint F_00cc64f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc64f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00406810(param_1);
  }
  return uVar1;
}

/* ref: FUN_00cc6510 */
uint F_00cc6510(unsigned int gen_a0)
{
  GEN_ENTER(0xcc6510u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_InitializeCriticalSection(this);
  *(undefined1 *)((int)this + 0x18) = 1;
  return (uint)this;
}

/* ref: FUN_00cc6530 */
byte F_00cc6530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc6530u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x18) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00cc6560 */
uint F_00cc6560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc6560u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0xc) * param_2 + *(int *)(in_ecx + 8);
}

/* ref: FUN_00cc6580 */
uint F_00cc6580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc6580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)(param_1 - *(int *)((int)this + 8)) / *(uint *)((int)this + 0xc);
}

/* ref: FUN_00cc65d0 */
uint F_00cc65d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc65d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (4 < param_1 - 1U) {
    return 0;
  }
  if (param_1 == 1) {
    return (int)this + 0x10;
  }
  return (int)this + param_1 * 0x18 + -8;
}

/* ref: FUN_00cc6660 */
uint F_00cc6660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc6660u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(in_ecx + 0x12) + param_2;
  if ((int)uVar1 < 0) {
    *(undefined1 *)(in_ecx + 0x12) = 0;
    return 0;
  }
  if (0xff < (int)uVar1) {
    uVar1 = 0xff;
  }
  *(char *)(in_ecx + 0x12) = (char)uVar1;
  return uVar1;
}

/* ref: FUN_00cc66a0 */
byte F_00cc66a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc66a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return param_1 == *(int *)((int)this + 0x134);
}

/* ref: FUN_00cc66c0 */
byte F_00cc66c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc66c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1c5) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00cc6740 */
uint F_00cc6740(unsigned int gen_a0)
{
  GEN_ENTER(0xcc6740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 0x14) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  *(undefined1 *)((int)this + 0x30) = 1;
  return (uint)this;
}

/* ref: FUN_00cc6770 */
uint F_00cc6770(unsigned int gen_a0)
{
  GEN_ENTER(0xcc6770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint extraout_EAX = 0;
  
  *(char *)((int)this + 0x30) = *(char *)((int)this + 0x14);
  if (*(char *)((int)this + 0x14) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  }
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_00406810(*(int *)this);
    *(undefined4 *)this = 0;
  }
  *(undefined4 *)((int)this + 4) = 0;
  if (*(char *)((int)this + 0x30) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: FUN_00cc67c0 */
uint F_00cc67c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc67c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  undefined4 * puVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x18);
  *(char *)((int)this + 0x30) = *(char *)((int)this + 0x14);
  if (*(char *)((int)this + 0x14) != '\0') {
    gen_imp_EnterCriticalSection(lpCriticalSection);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if (puVar1 == (undefined4 *)0x0) {
    if (*(char *)((int)this + 0x30) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    return 0;
  }
  *(undefined4 *)((int)this + 4) = *puVar1;
  if (*(char *)((int)this + 0x30) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return (uint)puVar1;
}

/* ref: FUN_00cc6810 */
uint F_00cc6810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc6810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint in_EAX = 0;
  uint extraout_EAX = 0;
  
  if (param_1 != (uint *)0x0) {
    *(char *)((int)this + 0x30) = *(char *)((int)this + 0x14);
    if (*(char *)((int)this + 0x14) != '\0') {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
    }
    in_EAX = *(uint *)((int)this + 4);
    *param_1 = in_EAX;
    *(uint * PTR32 *)((int)this + 4) = param_1;
    if (*(char *)((int)this + 0x30) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
      in_EAX = extraout_EAX;
    }
  }
  return in_EAX;
}

/* ref: FUN_00cc6850 */
uint F_00cc6850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc6850u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  int iVar2;
  undefined * in_ecx;
  
  if ((param_1 & 2) == 0) {
    F_00cd6180(this);
    if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
      F_00406810(this);
    }
  }
  else {
    piVar1 = (int *)((int)this + -4);
    iVar2 = *piVar1;
    in_ecx = (undefined *)(iVar2 * 0x278 + (int)this);
    while (iVar2 = iVar2 + -1, -1 < iVar2) {
      in_ecx = (undefined *)((int)in_ecx + -0x278);
      F_00cd6180(in_ecx);
    }
    this = piVar1;
    if (((param_1 & 1) != 0) && (piVar1 != (int *)0x0)) {
      F_00406810(piVar1);
      return (uint)piVar1;
    }
  }
  return (uint)this;
}

/* ref: FUN_00cc68e0 */
unsigned int F_00cc68e0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc68e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x18);
  *(char *)((int)this + 0x30) = *(char *)((int)this + 0x14);
  if (*(char *)((int)this + 0x14) != '\0') {
    gen_imp_EnterCriticalSection(lpCriticalSection);
  }
  if (*(int *)this != 0) {
    F_00406810(*(int *)this);
    *(undefined4 *)this = 0;
  }
  *(undefined4 *)((int)this + 4) = 0;
  if (*(char *)((int)this + 0x30) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  gen_imp_DeleteCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00cc6930 */
uint F_00cc6930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xcc6930u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  uint param_4 = (uint)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  int iVar2;
  int * piVar3;
  LPCRITICAL_SECTION extraout_EAX = 0;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x18);
  *(char *)((int)this + 0x14) = (char)param_5;
  *(char *)((int)this + 0x30) = (char)param_5;
  if ((char)param_5 != '\0') {
    gen_imp_EnterCriticalSection(lpCriticalSection);
  }
  uVar4 = param_4;
  if (param_4 < 4) {
    uVar4 = 4;
  }
  uVar1 = param_1;
  if (param_1 < 4) {
    uVar1 = 4;
  }
  *(int *)((int)this + 0x10) = param_2;
  iVar2 = (((uVar1 - 1) + uVar4) / uVar4) * uVar4;
  *(int *)((int)this + 0xc) = iVar2;
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))
                    (REFG(int * PTR32, 0x15d778c),iVar2 * param_2 + -1 + uVar4,*param_3,0,0,param_3[1]);
  *(uint *)this = uVar1;
  if (uVar1 == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcc5d20));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x112a624),&REFG(undefined1, 0x107fc63),
                    "d:\\ffxiv\\trunk\\prog\\externals\\cdev_sd\\sd\\cdev\\engine\\sd\\driver\\../SdUnitHeap.h"
                    ,0x4d,"SQEX::CDev::Engine::Sd::SdUnitHeap::CreateUnitHeap");
  }
  iVar2 = 0;
  piVar3 = ((int *)GEN_TOP((((*(int *)this + -1 + uVar4) / uVar4) * uVar4)));
  *(int * PTR32 *)((int)this + 8) = piVar3;
  *(int * PTR32 *)((int)this + 4) = piVar3;
  if (0 < param_2) {
    do {
      if (iVar2 < param_2 + -1) {
        *piVar3 = (int)piVar3 + (*(uint *)((int)this + 0xc) & 0xfffffffc);
      }
      else {
        *piVar3 = 0;
      }
      iVar2 = iVar2 + 1;
      piVar3 = ((int *)GEN_TOP(((int)piVar3 + (*(uint *)((int)this + 0xc) & 0xfffffffc))));
    } while (iVar2 < param_2);
  }
  if (*(char *)((int)this + 0x30) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    lpCriticalSection = extraout_EAX;
  }
  return (uint)lpCriticalSection;
}

/* ref: FUN_00cc6a70 */
uint F_00cc6a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc6a70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x112a6c4));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00cc6a90 */
uint F_00cc6a90(unsigned int gen_a0)
{
  GEN_ENTER(0xcc6a90u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x112a6c4));
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00cc6aa0 */
uint F_00cc6aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc6aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x112a6c4));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00cc6ac0 */
unsigned int F_00cc6ac0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc6ac0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x112a6c4));
  return 0;
}

/* ref: FUN_00cc6ad0 */
uint F_00cc6ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc6ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4),param_1);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00cc6b10 */
unsigned int F_00cc6b10(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xcc6b10u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  if (*(int *)(param_1 + 4) != 0) {
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 4) + 0xc))))
              (*(int * PTR32 *)(param_1 + 4),(undefined4)gen_fl2bits(param_2),param_3,param_4);
  }
  return 0;
}

/* ref: FUN_00cc6b40 */
uint F_00cc6b40(unsigned int gen_a0)
{
  GEN_ENTER(0xcc6b40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: SQEX::CDev::Engine::Sd::Driver::EffectController::vf0 */
uint F_00cc6b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc6b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x112a6c4));
  if ((param_1 & 1) != 0) {
    F_00406810(this);
  }
  return (uint)this;
}

/* ref: FUN_00cc6b80 */
unsigned int F_00cc6b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc6b80u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00cc6ba0 */
uint F_00cc6ba0(void)
{
  GEN_ENTER(0xcc6ba0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  REFG(undefined4, 0x15d86c0) = REFG(undefined4, 0x15d86c0) + 1;
  if (0xfffff < (int)REFG(undefined4, 0x15d86c0)) {
    REFG(int, 0x15d86c4) = REFG(int, 0x15d86c4) + 1;
    REFG(undefined4, 0x15d86c0) = 1;
  }
  if (REFG(int, 0x15d86c4) == 0) {
    return REFG(undefined4, 0x15d86c0);
  }
  do {
    uVar1 = F_00d2ff90(&REFG(undefined, 0x15d86c8),0);
    while( true ) {
      if (uVar1 == 0) {
        return REFG(undefined4, 0x15d86c0);
      }
      if ((*(uint *)(uVar1 + 0x14) & 0xfffff) == REFG(undefined4, 0x15d86c0)) break;
      uVar1 = F_00d2ff90(&REFG(undefined, 0x15d86c8),uVar1);
    }
    REFG(undefined4, 0x15d86c0) = REFG(undefined4, 0x15d86c0) + 1;
    if (0xfffff < (int)REFG(undefined4, 0x15d86c0)) {
      REFG(int, 0x15d86c4) = REFG(int, 0x15d86c4) + 1;
      REFG(undefined4, 0x15d86c0) = 1;
    }
  } while( true );
}

/* ref: FUN_00cc6c30 */
uint F_00cc6c30(unsigned int gen_a0)
{
  GEN_ENTER(0xcc6c30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = (param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c);
  bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8),uVar2);
  if ((bVar1 != 0) && (*(uint *)(uVar2 + 0x14) == param_1)) {
    return uVar2;
  }
  return 0;
}

/* ref: FUN_00cc6c80 */
uint F_00cc6c80(unsigned int gen_a0)
{
  GEN_ENTER(0xcc6c80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = (int *)F_00d2ff90(&REFG(undefined4, 0x15d8770) + (param_1 / 1000 & 0x8000003f) * 4,0);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if ((piVar1[4] == param_1 / 1000) &&
       (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,param_1 % 1000), uVar2 != 0)) break;
    piVar1 = (int *)F_00d2ff90(&REFG(undefined4, 0x15d8770) + (param_1 / 1000 & 0x8000003f) * 4,piVar1);
  }
  return (uint)piVar1;
}

/* ref: FUN_00cc6d00 */
uint F_00cc6d00(void)
{
  GEN_ENTER(0xcc6d00u, 0u, 0u, 0u, 0u);
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  ((uint *)(gen_frame + 0x8))[4] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  uVar1 = 100;
  uVar2 = 200;
  ((uint *)(gen_frame + 0x8))[0] = 200;
  ((uint *)(gen_frame + 0x8))[1] = 0xb4;
  ((uint *)(gen_frame + 0x8))[2] = 0xfc;
  ((uint *)(gen_frame + 0x8))[3] = 0;
  iVar3 = 1;
  do {
    if ((int)uVar1 < (int)uVar2) {
      uVar1 = uVar2;
    }
    uVar2 = ((uint *)(gen_frame + 0x8))[(int)(iVar3)];
    iVar3 = iVar3 + 1;
  } while (uVar2 != 0);
  F_00c47745(REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar1;
}

/* ref: FUN_00cc6d60 */
uint F_00cc6d60(void)
{
  GEN_ENTER(0xcc6d60u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  REFG(char, 0x15d8734) = REFG(char, 0x15d8718);
  if (REFG(char, 0x15d8718) != '\0') {
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d871c));
  }
  if (REFG(int, 0x15d8704) != 0) {
    F_00406810(REFG(int, 0x15d8704));
    REFG(int, 0x15d8704) = 0;
  }
  REFG(undefined4, 0x15d8708) = 0;
  if (REFG(char, 0x15d8734) != '\0') {
    gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d871c));
  }
  REFG(char, 0x15d8ba0) = REFG(char, 0x15d8b81);
  if (REFG(char, 0x15d8b81) != '\0') {
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8b88));
  }
  uVar1 = 0;
  if (REFG(int, 0x15d8b84) != 0) {
    uVar1 = F_00406810(REFG(int, 0x15d8b84));
    REFG(int, 0x15d8b84) = 0;
  }
  if (REFG(char, 0x15d8ba0) != '\0') {
    uVar1 = gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8b88));
  }
  return uVar1;
}

/* ref: FUN_00cc6e00 */
uint F_00cc6e00(unsigned int gen_a0)
{
  GEN_ENTER(0xcc6e00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    uVar2 = (param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c);
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8),uVar2);
    if ((bVar1 != 0) && (*(uint *)(uVar2 + 0x14) == param_1)) goto LAB_00cc6e46;
  }
  uVar2 = 0;
LAB_00cc6e46: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc6e60 */
uint F_00cc6e60(unsigned int gen_a0)
{
  GEN_ENTER(0xcc6e60u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  REFG(char, 0x15d876c) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
  uVar1 = F_00cc6c80(param_1);
  if (REFG(char, 0x15d876c) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
  }
  return uVar1;
}

/* ref: FUN_00cc6ea0 */
byte F_00cc6ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc6ea0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  int * param_2 = (int *)(uintptr_t)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  int * piVar1;
  uint uVar2;
  
  REFG(char, 0x15d876c) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
  piVar1 = (int *)F_00d2ff90(&REFG(undefined4, 0x15d8770) + (param_1 / 1000 & 0x8000003f) * 4,0);
  do {
    if (piVar1 == (int *)0x0) {
      if (REFG(char, 0x15d876c) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
      }
      return 0;
    }
    if (piVar1[4] == param_1 / 1000) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x24))(piVar1,param_1);
      *param_3 = uVar2;
      if (-1 < (int)uVar2) {
        *param_2 = piVar1[5];
        if (REFG(char, 0x15d876c) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
        }
        return 1;
      }
    }
    piVar1 = (int *)F_00d2ff90(&REFG(undefined4, 0x15d8770) + (param_1 / 1000 & 0x8000003f) * 4,piVar1);
  } while( true );
}

/* ref: FUN_00cc6f60 */
uint F_00cc6f60(unsigned int gen_a0)
{
  GEN_ENTER(0xcc6f60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int * piVar1;
  uint uVar2;
  
  REFG(char, 0x15d876c) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
  piVar1 = (int *)F_00d2ff90(&REFG(undefined4, 0x15d8770) + (param_1 / 1000 & 0x8000003f) * 4,0);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      if (REFG(char, 0x15d876c) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
      }
      return 0;
    }
    if ((piVar1[4] == param_1 / 1000) &&
       (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,param_1 % 1000), uVar2 != 0)) break;
    piVar1 = (int *)F_00d2ff90(&REFG(undefined4, 0x15d8770) + (param_1 / 1000 & 0x8000003f) * 4,piVar1);
  }
  uVar2 = piVar1[5];
  if (REFG(char, 0x15d876c) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
  }
  return uVar2;
}

/* ref: FUN_00cc7020 */
uint F_00cc7020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc7020u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * this;
  uint uVar1;
  int * piVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8738));
  REFG(char, 0x15d8734) = REFG(char, 0x15d8718);
  if (REFG(char, 0x15d8718) != '\0') {
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d871c));
  }
  this = REFG(undefined4 * PTR32, 0x15d8708);
  if (REFG(undefined4 * PTR32, 0x15d8708) == (undefined4 *)0x0) {
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d871c));
    }
  }
  else {
    REFG(undefined4 * PTR32, 0x15d8708) = ((undefined4 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d8708)));
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d871c));
    }
    if (this != (undefined4 *)0x0) {
      if ((*param_1 == 0x42444553) && ((uint)param_1[2] < 4)) {
        uVar1 = F_00cc6ba0();
        uVar1 = (uint)((int)this - *(int *)&REFG(undefined, 0x15d870c)) / REFG(undefined4, 0x15d8710) << 0x14 | uVar1 & 0xfffff;
        if (param_1[1] == 0x46435353) {
          if ((char)param_2 == '\0') {
            piVar2 = (int *)F_00ce0700(this,param_1,uVar1);
          }
          else {
            piVar2 = (int *)F_00cdf400(this,param_1,uVar1);
          }
          F_00d2fe00(&REFG(undefined, 0x15d86c8),piVar2);
          ((code *)*(gen_code32 *)(*piVar2 + 8))(piVar2);
          REFG(int, 0x15d86b8) = REFG(int, 0x15d86b8) + 1;
          if (REFG(char, 0x15d8750) != '\0') {
            gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
          }
          return uVar1;
        }
      }
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
      }
      return 0;
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc7150 */
uint F_00cc7150(unsigned int gen_a0)
{
  GEN_ENTER(0xcc7150u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
  if ((uVar1 != 0) && (uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1), uVar1 != 0)) {
    for (uVar2 = F_00d2ff90(&REFG(undefined, 0x15d86c8),0); uVar2 != 0;
        uVar2 = F_00d2ff90(&REFG(undefined, 0x15d86c8),uVar2)) {
      if (((*(byte *)(uVar2 + 0x48) & 0x40) != 0) && (*(int * PTR32 *)(uVar2 + 8) == param_1)) {
        uVar1 = *(uint *)(uVar2 + 0x14);
        if (REFG(char, 0x15d8750) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
        }
        return uVar1;
      }
    }
    uVar2 = F_00cc7020(uVar1,0);
    if (uVar2 != 0) {
      uVar1 = F_00cc6e00(uVar2);
      F_00ce11d0(uVar1,param_1);
    }
  }
  ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1);
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc7220 */
uint F_00cc7220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcc7220u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 * this;
  uint uVar1;
  uint uVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8738));
  REFG(char, 0x15d8734) = REFG(char, 0x15d8718);
  if (REFG(char, 0x15d8718) != '\0') {
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d871c));
  }
  this = REFG(undefined4 * PTR32, 0x15d8708);
  if (REFG(undefined4 * PTR32, 0x15d8708) == (undefined4 *)0x0) {
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d871c));
    }
  }
  else {
    REFG(undefined4 * PTR32, 0x15d8708) = ((undefined4 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d8708)));
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection(REFG(undefined4 * PTR32, 0x15d8708),&REFG(undefined, 0x15d871c));
    }
    if (this != (undefined4 *)0x0) {
      uVar1 = F_00cc6ba0();
      uVar2 = (uint)((int)this - *(int *)&REFG(undefined, 0x15d870c)) / REFG(undefined4, 0x15d8710) << 0x14 | uVar1 & 0xfffff;
      uVar1 = F_00ce1760(this,uVar2,param_1,param_2,param_3,param_4,param_5);
      F_00d2fe00(&REFG(undefined, 0x15d86c8),uVar1);
      REFG(int, 0x15d86b8) = REFG(int, 0x15d86b8) + 1;
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8738));
      }
      return uVar2;
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc7310 */
uint F_00cc7310(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc7310u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * this;
  uint uVar1;
  uint uVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8738));
  REFG(char, 0x15d8734) = REFG(char, 0x15d8718);
  if (REFG(char, 0x15d8718) != '\0') {
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d871c));
  }
  this = REFG(undefined4 * PTR32, 0x15d8708);
  if (REFG(undefined4 * PTR32, 0x15d8708) == (undefined4 *)0x0) {
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d871c));
    }
  }
  else {
    REFG(undefined4 * PTR32, 0x15d8708) = ((undefined4 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d8708)));
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection(REFG(undefined4 * PTR32, 0x15d8708),&REFG(undefined, 0x15d871c));
    }
    if (this != (undefined4 *)0x0) {
      uVar1 = F_00cc6ba0();
      uVar2 = (uint)((int)this - *(int *)&REFG(undefined, 0x15d870c)) / REFG(undefined4, 0x15d8710) << 0x14 | uVar1 & 0xfffff;
      uVar1 = F_00ce2020(this,uVar2,param_1,param_2,param_3);
      F_00d2fe00(&REFG(undefined, 0x15d86c8),uVar1);
      REFG(int, 0x15d86b8) = REFG(int, 0x15d86b8) + 1;
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8738));
      }
      return uVar2;
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc73f0 */
uint F_00cc73f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc73f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * this;
  uint uVar1;
  uint uVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8738));
  REFG(char, 0x15d8734) = REFG(char, 0x15d8718);
  if (REFG(char, 0x15d8718) != '\0') {
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d871c));
  }
  this = REFG(undefined4 * PTR32, 0x15d8708);
  if (REFG(undefined4 * PTR32, 0x15d8708) == (undefined4 *)0x0) {
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d871c));
    }
  }
  else {
    REFG(undefined4 * PTR32, 0x15d8708) = ((undefined4 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d8708)));
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection(REFG(undefined4 * PTR32, 0x15d8708),&REFG(undefined, 0x15d871c));
    }
    if (this != (undefined4 *)0x0) {
      uVar1 = F_00cc6ba0();
      uVar2 = (uint)((int)this - *(int *)&REFG(undefined, 0x15d870c)) / REFG(undefined4, 0x15d8710) << 0x14 | uVar1 & 0xfffff;
      uVar1 = F_00cdf510(this,param_1,uVar2);
      F_00d2fe00(&REFG(undefined, 0x15d86c8),uVar1);
      REFG(int, 0x15d86b8) = REFG(int, 0x15d86b8) + 1;
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8738));
      }
      return uVar2;
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc74d0 */
byte F_00cc74d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc74d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00cc6e00(param_1);
  return uVar1 != 0;
}

/* ref: FUN_00cc7570 */
uint F_00cc7570(unsigned int gen_a0)
{
  GEN_ENTER(0xcc7570u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined * this;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    this = ((undefined *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8),this);
    if ((bVar1 != 0) && (*(uint *)((int)this + 0x14) == param_1)) {
      uVar2 = F_00ce11f0(this);
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
      }
      return uVar2;
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc7600 */
uint F_00cc7600(unsigned int gen_a0)
{
  GEN_ENTER(0xcc7600u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  undefined * this;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar2 = extraout_EAX;
  if (param_1 != 0) {
    this = ((undefined *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8),this);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) && (*(uint *)((int)this + 0x14) == param_1)) {
      uVar2 = F_00ce1230(this);
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc7670 */
uint F_00cc7670(unsigned int gen_a0)
{
  GEN_ENTER(0xcc7670u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined * this;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    this = ((undefined *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8),this);
    if ((bVar1 != 0) && (*(uint *)((int)this + 0x14) == param_1)) {
      uVar2 = F_00ce1250(this);
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
      }
      return uVar2;
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc7700 */
uint F_00cc7700(unsigned int gen_a0)
{
  GEN_ENTER(0xcc7700u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  undefined * this;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar2 = extraout_EAX;
  if (param_1 != 0) {
    this = ((undefined *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8),this);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) && (*(uint *)((int)this + 0x14) == param_1)) {
      uVar2 = F_00ce1280(this);
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc7770 */
uint F_00cc7770(void)
{
  GEN_ENTER(0xcc7770u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar1 = F_00d2ff90(&REFG(undefined, 0x15d86c8),0);
  while( true ) {
    if (uVar1 == 0) {
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
      }
      return 0;
    }
    if ((*(byte *)(uVar1 + 0x48) & 1) != 0) break;
    uVar1 = F_00d2ff90(&REFG(undefined, 0x15d86c8),uVar1);
  }
  uVar1 = *(uint *)(uVar1 + 0x14);
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar1;
}

/* ref: FUN_00cc77e0 */
uint F_00cc77e0(void)
{
  GEN_ENTER(0xcc77e0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00cc7770();
  uVar1 = F_00cc6e00(uVar1);
  return uVar1;
}

/* ref: FUN_00cc77f0 */
uint F_00cc77f0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc77f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar1 = F_00d2ff90(&REFG(undefined, 0x15d86c8),0);
  while( true ) {
    if (uVar1 == 0) {
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
      }
      return 0;
    }
    if (param_1 == *(int *)(uVar1 + 0x10)) break;
    uVar1 = F_00d2ff90(&REFG(undefined, 0x15d86c8),uVar1);
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar1;
}

/* ref: FUN_00cc7870 */
uint F_00cc7870(unsigned int gen_a0)
{
  GEN_ENTER(0xcc7870u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint uVar1;
  uint extraout_EAX = 0;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if (uVar1 == 2) {
    REFG(char, 0x15d8700) = '\x01';
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d86e8));
    uVar1 = F_00d2fe00(&REFG(undefined, 0x15d86d8),param_1);
    if (REFG(char, 0x15d8700) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d86e8));
      uVar1 = extraout_EAX;
    }
  }
  return uVar1;
}

/* ref: FUN_00cc78c0 */
uint F_00cc78c0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc78c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d8700) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d86e8));
  uVar1 = F_00d2ff90(&REFG(undefined, 0x15d86d8),0);
  uVar2 = 0;
  if (uVar1 != 0) {
    do {
      if (*(int *)(uVar1 + 0x14) == param_1) {
        uVar2 = F_00d2ff30(&REFG(undefined, 0x15d86d8),uVar1);
        goto LAB_00cc790c;
      }
      uVar1 = F_00d2ff90(&REFG(undefined, 0x15d86d8),uVar1);
    } while (uVar1 != 0);
    uVar2 = 0;
  }
LAB_00cc790c: ;
  if (REFG(char, 0x15d8700) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d86e8));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc7930 */
uint F_00cc7930(unsigned int gen_a0)
{
  GEN_ENTER(0xcc7930u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8),piVar3);
    if ((bVar1 != 0) && (piVar3[5] == param_1)) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x20))(piVar3);
      goto LAB_00cc7983;
    }
  }
  uVar2 = 0;
LAB_00cc7983: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc79a0 */
uint F_00cc79a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc79a0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar2 = extraout_EAX;
  if (param_1 != 0) {
    piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8),piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) && (piVar3[5] == param_1)) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x30))(piVar3,param_2);
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc7a10 */
uint F_00cc7a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc7a10u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8),piVar3);
    if ((bVar1 != 0) && (piVar3[5] == param_1)) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x60))(piVar3,param_2);
      goto LAB_00cc7a68;
    }
  }
  uVar2 = 0xffffffff;
LAB_00cc7a68: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc7a90 */
uint F_00cc7a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc7a90u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8),piVar3);
    if ((bVar1 != 0) && (piVar3[5] == param_1)) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 100))(piVar3,param_2);
      goto LAB_00cc7ae8;
    }
  }
  uVar2 = 0xffffffff;
LAB_00cc7ae8: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc7b10 */
byte F_00cc7b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc7b10u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8),piVar3);
    if ((bVar1 != 0) && (piVar3[5] == param_1)) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x68))(piVar3,param_2);
      bVar1 = (byte)uVar2;
      goto LAB_00cc7b68;
    }
  }
  bVar1 = 0;
LAB_00cc7b68: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return bVar1;
}

/* ref: FUN_00cc7b90 */
uint F_00cc7b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc7b90u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8),piVar3);
    if ((bVar1 != 0) && (piVar3[5] == param_1)) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x18))(piVar3,param_2);
      goto LAB_00cc7be7;
    }
  }
  uVar2 = 0;
LAB_00cc7be7: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc7c10 */
uint F_00cc7c10(unsigned int gen_a0)
{
  GEN_ENTER(0xcc7c10u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  piVar1 = (int *)F_00cc6c80(param_1);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x2c))(piVar1,param_1);
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc7c60 */
uint F_00cc7c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc7c60u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8),piVar3);
    if ((bVar1 != 0) && (piVar3[5] == param_1)) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3,param_2);
      goto LAB_00cc7cb7;
    }
  }
  uVar2 = 0;
LAB_00cc7cb7: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc7ce0 */
uint F_00cc7ce0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc7ce0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  uint uVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  piVar1 = (int *)F_00cc6c80(param_1);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1,param_1);
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc7d30 */
byte F_00cc7d30(unsigned int gen_a0)
{
  GEN_ENTER(0xcc7d30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8),piVar3);
    if ((bVar1 != 0) && (piVar3[5] == param_1)) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x88))(piVar3);
      bVar1 = (byte)uVar2;
      goto LAB_00cc7d87;
    }
  }
  bVar1 = 0;
LAB_00cc7d87: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return bVar1;
}

/* ref: FUN_00cc7db0 */
byte F_00cc7db0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc7db0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  undefined * this;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    this = ((undefined *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8),this);
    if ((bVar1 != 0) && (*(uint *)((int)this + 0x14) == param_1)) {
      bVar1 = F_00ce12a0(this);
      goto LAB_00cc7e02;
    }
  }
  bVar1 = 0;
LAB_00cc7e02: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return bVar1;
}

/* ref: FUN_00cc7e20 */
uint F_00cc7e20(unsigned int gen_a0)
{
  GEN_ENTER(0xcc7e20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint extraout_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar2;
  uint extraout_EAX_00 = 0;
  int * piVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar2 = extraout_EAX;
  if (param_1 != 0) {
    piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8),piVar3);
    uVar2 = CONCAT31(extraout_var,bVar1);
    if ((bVar1 != 0) && (piVar3[5] == param_1)) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xa4))(piVar3);
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
    uVar2 = extraout_EAX_00;
  }
  return uVar2;
}

/* ref: FUN_00cc7e90 */
byte F_00cc7e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc7e90u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  int iVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    iVar2 = (param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c);
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8),iVar2);
    if ((bVar1 != 0) && (*(uint *)(iVar2 + 0x14) == param_1)) {
      *(byte *)(iVar2 + 0x48) =
           *(byte *)(iVar2 + 0x48) ^ (*(byte *)(iVar2 + 0x48) ^ (byte)param_2) & 1;
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
      }
      return 1;
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc80b0 */
byte F_00cc80b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc80b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  int iVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    iVar2 = (param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c);
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8),iVar2);
    if ((bVar1 != 0) && (*(uint *)(iVar2 + 0x14) == param_1)) {
      bVar1 = *(byte *)(iVar2 + 0x48) >> 5 & 1;
      goto LAB_00cc8102;
    }
  }
  bVar1 = 0;
LAB_00cc8102: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return bVar1;
}

/* ref: FUN_00cc81d0 */
byte F_00cc81d0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc81d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  int iVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    iVar2 = (param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c);
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8),iVar2);
    if ((bVar1 != 0) && (*(uint *)(iVar2 + 0x14) == param_1)) {
      bVar1 = *(byte *)(iVar2 + 0x48) >> 3 & 1;
      goto LAB_00cc8222;
    }
  }
  bVar1 = 0;
LAB_00cc8222: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return bVar1;
}

/* ref: FUN_00cc8240 */
byte F_00cc8240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc8240u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  byte bVar1;
  uint uVar2;
  int * this;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    this = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8),this);
    if ((bVar1 != 0) && (this[5] == param_1)) {
      F_00ce11f0(this);
      uVar2 = ((code *)*(gen_code32 *)(*this + 0x18))(this,param_2);
      if (uVar2 != 0) {
        *param_3 = *(undefined4 *)(uVar2 + 0x34);
        F_00ce1230(this);
        if (REFG(char, 0x15d8750) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
        }
        return 1;
      }
      F_00ce1230(this);
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc82f0 */
byte F_00cc82f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc82f0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint * param_3 = (uint *)(uintptr_t)gen_a2;
  byte bVar1;
  uint uVar2;
  int * this;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    this = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8),this);
    if ((bVar1 != 0) && (this[5] == param_1)) {
      F_00ce11f0(this);
      uVar2 = ((code *)*(gen_code32 *)(*this + 0xc))(this,param_2);
      if (uVar2 != 0) {
        *param_3 = (uint)*(byte *)(uVar2 + 2);
        F_00ce1230(this);
        if (REFG(char, 0x15d8750) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
        }
        return 1;
      }
      F_00ce1230(this);
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc83a0 */
float F_00cc83a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc83a0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  int * this;
  float10 extraout_ST0;
  float local_8;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  local_8 = (float)(float10)0;
  if (param_1 != 0) {
    this = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8),this);
    if ((bVar1 != 0) && (this[5] == param_1)) {
      F_00ce11f0(this);
      extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*this + 0x1c))(this,param_2);
      local_8 = (float)extraout_ST0;
      F_00ce1230(this);
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return local_8;
}

/* ref: FUN_00cc8430 */
float10 F_00cc8430(unsigned int gen_a0)
{
  GEN_ENTER(0xcc8430u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  int * piVar2;
  float10 extraout_ST0;
  float10 fVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    piVar2 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8),piVar2);
    if ((bVar1 != 0) && (piVar2[5] == param_1)) {
      extraout_ST0 = ((gen_fcode *)*(gen_code32 *)(*piVar2 + 0xa8))(piVar2);
      fVar3 = extraout_ST0;
      goto LAB_00cc8488;
    }
  }
  fVar3 = (float10)REFG(float, 0x1090708);
LAB_00cc8488: ;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return (float10)(float)fVar3;
}

/* ref: FUN_00cc84b0 */
uint F_00cc84b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc84b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  byte bVar1;
  uint uVar2;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  for (uVar2 = F_00d2ff90(&REFG(undefined, 0x15d86c8),0); uVar2 != 0; uVar2 = F_00d2ff90(&REFG(undefined, 0x15d86c8),uVar2))
  {
    bVar1 = *(byte *)(uVar2 + 0x48);
    if ((bVar1 & 8) != 0) {
      *(byte *)(uVar2 + 0x48) = ((char)param_1 << 4 ^ bVar1) & 0x10 ^ bVar1;
    }
  }
  uVar2 = 0;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
    uVar2 = extraout_EAX;
  }
  return uVar2;
}

/* ref: FUN_00cc8520 */
uint F_00cc8520(unsigned int gen_a0)
{
  GEN_ENTER(0xcc8520u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d876c) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
  uVar3 = *(uint *)(param_1 + 0x10);
  if (-1 < (int)uVar3) {
    uVar2 = uVar3 & 0x8000003f;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffffffc0) + 1;
    }
    bVar1 = F_00d30050(&REFG(undefined4, 0x15d8770) + uVar2 * 4,param_1);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1 == 0) {
      uVar3 = F_00d2fe00(&REFG(undefined4, 0x15d8770) + uVar2 * 4,param_1);
    }
  }
  if (REFG(char, 0x15d876c) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
    uVar3 = extraout_EAX;
  }
  return uVar3;
}

/* ref: FUN_00cc8590 */
uint F_00cc8590(unsigned int gen_a0)
{
  GEN_ENTER(0xcc8590u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  byte bVar1;
  uint uVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  uint extraout_EAX = 0;
  
  REFG(char, 0x15d876c) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
  uVar3 = *(uint *)(param_1 + 0x10);
  if (-1 < (int)uVar3) {
    uVar2 = uVar3 & 0x8000003f;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffffffc0) + 1;
    }
    bVar1 = F_00d30050(&REFG(undefined4, 0x15d8770) + uVar2 * 4,param_1);
    uVar3 = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      uVar3 = F_00d2ff30(&REFG(undefined4, 0x15d8770) + uVar2 * 4,param_1);
    }
  }
  if (REFG(char, 0x15d876c) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754));
    uVar3 = extraout_EAX;
  }
  return uVar3;
}

/* ref: FUN_00cc8600 */
uint F_00cc8600(unsigned int gen_a0)
{
  GEN_ENTER(0xcc8600u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  uint uVar4;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar4 = 0;
  piVar2 = (int *)F_00d2ff90(&REFG(undefined, 0x15d86c8),0);
  if (piVar2 != (int *)0x0) {
    uVar4 = 0;
    do {
      if ((((*(byte *)(piVar2 + 0x12) & 8) == 0) && (bVar1 = F_00cc2b60(piVar2), bVar1 != 0)) &&
         ((param_1 == 0 || (uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x60))(piVar2,0), param_1 == uVar3)))) {
        uVar4 = uVar4 + piVar2[7];
      }
      piVar2 = (int *)F_00d2ff90(&REFG(undefined, 0x15d86c8),piVar2);
    } while (piVar2 != (int *)0x0);
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar4;
}

/* ref: FUN_00cc8690 */
uint F_00cc8690(unsigned int gen_a0)
{
  GEN_ENTER(0xcc8690u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar3 = 0;
  piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d86c8),0);
  if (piVar1 != (int *)0x0) {
    uVar3 = 0;
    do {
      if (((*(byte *)(piVar1 + 0x12) & 8) == 0) &&
         ((param_1 == 0 || (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,0), param_1 == uVar2)))) {
        uVar3 = uVar3 + piVar1[7];
      }
      piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d86c8),piVar1);
    } while (piVar1 != (int *)0x0);
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar3;
}

/* ref: FUN_00cc8710 */
uint F_00cc8710(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc8710u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  uint param_3 = (uint)gen_a2;
  int * piVar1;
  uint uVar2;
  int iVar3;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d86c8),0);
  if (piVar1 != (int *)0x0) {
    iVar3 = 0;
    do {
      if (((*(byte *)(piVar1 + 0x12) & 8) == 0) &&
         ((param_3 == 0 || (uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x60))(piVar1,0), param_3 == uVar2)))) {
        uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 100))(piVar1,0);
        *(uint *)(param_1 + iVar3 * 4) = uVar2;
        iVar3 = iVar3 + 1;
        if (param_2 <= iVar3) break;
      }
      piVar1 = (int *)F_00d2ff90(&REFG(undefined, 0x15d86c8),piVar1);
    } while (piVar1 != (int *)0x0);
  }
  uVar2 = REFG(undefined4, 0x15d86d0);
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc87b0 */
unsigned int F_00cc87b0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc87b0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  *param_1 = REFG(undefined4, 0x15d86d0);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = 0xffffffff;
  *(undefined1 *)(param_1 + 4) = 0;
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc8800 */
byte F_00cc8800(unsigned int gen_a0)
{
  GEN_ENTER(0xcc8800u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  char cVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    return 0;
  }
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 0x20))(piVar2);
    if (*(int *)(param_1 + 0xc) < (int)uVar4) goto LAB_00cc886a;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  do {
    uVar4 = F_00d2ff90(&REFG(undefined, 0x15d86c8),*(undefined4 *)(param_1 + 8));
    *(uint *)(param_1 + 8) = uVar4;
    if (uVar4 == 0) break;
  } while ((*(byte *)(uVar4 + 0x48) & 8) != 0);
LAB_00cc886a: ;
  piVar2 = *(int * PTR32 *)(param_1 + 8);
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)(param_1 + 4) = 0xffffffff;
    *(undefined1 *)(param_1 + 0x10) = 1;
  }
  else {
    iVar3 = *(int *)(param_1 + 0xc);
    *(int *)(param_1 + 0xc) = iVar3 + 1;
    uVar4 = ((code *)*(gen_code32 *)(*piVar2 + 100))(piVar2,iVar3);
    *(uint *)(param_1 + 4) = uVar4;
  }
  cVar1 = *(char *)(param_1 + 0x10);
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return cVar1 == '\0';
}

/* ref: FUN_00cc88c0 */
byte F_00cc88c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc88c0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  byte bVar1;
  uint uVar2;
  int * in_ecx;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  if (param_1 != 0) {
    in_ecx = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
    bVar1 = F_00d30050(&REFG(undefined, 0x15d86c8),in_ecx);
    if ((bVar1 != 0) && (in_ecx[5] == param_1)) {
      uVar2 = ((code *)*(gen_code32 *)(*in_ecx + 4))(in_ecx);
      if ((uVar2 == 3) && (in_ecx[0x20] == 4)) {
        uVar2 = F_00ce1bf0(in_ecx);
        *param_2 = uVar2;
        *param_3 = in_ecx[0x27];
        if (REFG(char, 0x15d8750) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
        }
        return 1;
      }
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc8970 */
uint F_00cc8970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc8970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 * this;
  uint uVar1;
  uint uVar2;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8738));
  REFG(char, 0x15d8734) = REFG(char, 0x15d8718);
  if (REFG(char, 0x15d8718) != '\0') {
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d871c));
  }
  this = REFG(undefined4 * PTR32, 0x15d8708);
  if (REFG(undefined4 * PTR32, 0x15d8708) == (undefined4 *)0x0) {
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d871c));
    }
  }
  else {
    REFG(undefined4 * PTR32, 0x15d8708) = ((undefined4 *)GEN_TOP(*REFG(undefined4 * PTR32, 0x15d8708)));
    if (REFG(char, 0x15d8734) != '\0') {
      gen_imp_LeaveCriticalSection(REFG(undefined4 * PTR32, 0x15d8708),&REFG(undefined, 0x15d871c));
    }
    if (this != (undefined4 *)0x0) {
      uVar1 = F_00cc6ba0();
      uVar2 = (uint)((int)this - *(int *)&REFG(undefined, 0x15d870c)) / REFG(undefined4, 0x15d8710) << 0x14 | uVar1 & 0xfffff;
      uVar1 = F_00ce2110(this,uVar2,
                           (*(undefined * PTR32 (*)[3])REFP(0x112a770)),param_1,param_2,param_3);
      F_00d2fe00(&REFG(undefined, 0x15d86c8),uVar1);
      REFG(int, 0x15d86b8) = REFG(int, 0x15d86b8) + 1;
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8738));
      }
      return uVar2;
    }
  }
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8738));
  }
  return 0;
}

/* ref: FUN_00cc8a70 */
byte F_00cc8a70(unsigned int gen_a0)
{
  GEN_ENTER(0xcc8a70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  byte bVar1;
  uint uVar2;
  int * piVar3;
  code * pcVar4;
  
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d8738));
  piVar3 = ((int *)GEN_TOP(((param_1 >> 0x14) * REFG(int, 0x15d8710) + *(int *)&REFG(undefined, 0x15d870c))));
  if (piVar3[5] != param_1) {
    if (REFG(char, 0x15d8750) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
    }
    return 0;
  }
  pcVar4 = (((code *)GEN_TOP(gen_imp_LeaveCriticalSection)));
  if ((*(byte *)(piVar3 + 0x12) & 8) != 0) {
    REFG(char, 0x15d8700) = '\x01';
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d86e8));
    for (uVar2 = F_00d2ff90(&REFG(undefined, 0x15d86d8),0); uVar2 != 0;
        uVar2 = F_00d2ff90(&REFG(undefined, 0x15d86d8),uVar2)) {
      if (*(uint *)(uVar2 + 0x14) == param_1) {
        F_00d2ff30(&REFG(undefined, 0x15d86d8),uVar2);
        break;
      }
    }
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 4))(piVar3);
    if (uVar2 == 3) {
      *(byte *)(piVar3 + 0x12) = *(byte *)(piVar3 + 0x12) & 0xdf;
    }
    bVar1 = F_00ce3950(param_1);
    pcVar4 = (((code *)GEN_TOP(gen_imp_LeaveCriticalSection)));
    if (bVar1 == 0) {
      if (REFG(char, 0x15d8700) != '\0') {
        gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d86e8));
      }
      if (REFG(char, 0x15d8750) != '\0') {
        gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d8738));
      }
      return 0;
    }
    if (REFG(char, 0x15d8700) != '\0') {
      gen_imp_LeaveCriticalSection(&REFG(undefined, 0x15d86e8));
    }
  }
  F_00cc8590(piVar3);
  F_00d2ff30(&REFG(undefined, 0x15d86c8),piVar3);
  uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0x70))(piVar3);
  if (uVar2 != 0) {
    F_00ce30d0(&REFG(undefined, 0x15d8b70),uVar2);
  }
  ((code *)*(gen_code32 *)*piVar3)(piVar3,0);
  REFG(char, 0x15d8734) = REFG(char, 0x15d8718);
  if (REFG(char, 0x15d8718) != '\0') {
    gen_imp_EnterCriticalSection(&REFG(undefined, 0x15d871c));
  }
  *piVar3 = (int)REFG(int * PTR32, 0x15d8708);
  REFG(int * PTR32, 0x15d8708) = piVar3;
  if (REFG(char, 0x15d8734) != '\0') {
    (*pcVar4)(&REFG(undefined, 0x15d871c));
  }
  REFG(int, 0x15d86b8) = REFG(int, 0x15d86b8) + -1;
  if (REFG(char, 0x15d8750) != '\0') {
    (*pcVar4)(&REFG(undefined, 0x15d8738));
  }
  return 1;
}

/* ref: FUN_00cc8bf0 */
uint F_00cc8bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcc8bf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return extraout_EAX;
}

/* ref: FUN_00cc8c90 */
uint F_00cc8c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc8c90u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  uint uVar1;
  int * in_ecx;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = 0;
  REFG(char, 0x15d8750) = '\x01';
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
  if ((uVar1 != 0) && (uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1), uVar1 != 0)) {
    for (uVar2 = F_00d2ff90(&REFG(undefined, 0x15d86c8),0); uVar2 != 0;
        uVar2 = F_00d2ff90(&REFG(undefined, 0x15d86c8),uVar2)) {
      if (((*(byte *)(uVar2 + 0x48) & 0x40) != 0) && (*(int *)(uVar2 + 8) == param_2)) {
        uVar1 = *(uint *)(uVar2 + 0x14);
        if (REFG(char, 0x15d8750) != '\0') {
          gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
        }
        return uVar1;
      }
    }
    uVar2 = F_00cc7020(uVar1,0);
    if (uVar2 != 0) {
      in_ecx = (int *)F_00cc6e00(uVar2);
      F_00ce11d0(in_ecx,param_2);
      uVar4 = 1;
      uVar3 = 4;
      uVar1 = ((code *)*(gen_code32 *)(*in_ecx + 0x20))(in_ecx);
      uVar1 = F_00ce3060(&REFG(undefined, 0x15d8b70),uVar1 * 0x94,uVar3,uVar4);
      if (uVar1 != 0) {
        ((code *)*(gen_code32 *)(*in_ecx + 0x6c))(in_ecx,uVar1);
        goto LAB_00cc8d9f;
      }
      F_00cc8a70(uVar2);
    }
    ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1);
    if (REFG(char, 0x15d8750) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
    }
    return 0;
  }
LAB_00cc8d9f: ;
  ((code *)*(gen_code32 *)(*param_1 + 0x14))(param_1);
  if (REFG(char, 0x15d8750) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738));
  }
  return uVar2;
}

/* ref: FUN_00cc8dd0 */
uint F_00cc8dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc8dd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 * in_ecx;
  
  ((int *)(gen_frame + 0x18))[4] = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x2c);
  REFG(undefined4, 0x15d86b8) = 0;
  if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
    F_00ccaf80(&REFG(char, 0x15d7798));
  }
  if (REFG(char, 0x15d7798) == '\0') {
    iVar3 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar3 = REFG(int, 0x15d8610);
    if ((*(uint *)&REFG(undefined, 0x15d8618) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8618) = *(uint *)&REFG(undefined, 0x15d8618) | 1;
      F_00ccaf80(&REFG(char, 0x15d7798));
      iVar3 = REFG(int, 0x15d8610);
    }
  }
  REFG(int, 0x15d86bc) = iVar3;
  F_00d2fdb0(&REFG(undefined, 0x15d86c8),0x24);
  F_00d2fdb0(&REFG(undefined, 0x15d86d8),0x30);
  in_ecx = &REFG(undefined4, 0x15d8770);
  do {
    F_00d2fdb0(in_ecx,0x3c);
    in_ecx = in_ecx + 4;
  } while ((int)in_ecx < 0x15d8b70);
  iVar4 = 100;
  iVar1 = 200;
  (*(undefined4 *)(gen_frame + 0x14)) = 100;
  ((int *)(gen_frame + 0x18))[0] = 200;
  ((int *)(gen_frame + 0x18))[1] = 0xb4;
  ((int *)(gen_frame + 0x18))[2] = 0xfc;
  ((int *)(gen_frame + 0x18))[3] = 0;
  iVar3 = 1;
  do {
    if (iVar4 < iVar1) {
      iVar4 = iVar1;
    }
    iVar1 = ((int *)(gen_frame + 0x18))[(int)(iVar3)];
    iVar3 = iVar3 + 1;
  } while (iVar1 != 0);
  (*(char * PTR32 *)(gen_frame + 0xc)) = "CDev.Engine.Sd.SoundDriver";
  (*(undefined4 *)(gen_frame + 0x10)) = 0x10;
  F_00cc6930(&REFG(undefined4, 0x15d8704),iVar4,REFG(int, 0x15d86bc),&(*(char * PTR32 *)(gen_frame + 0xc)),0x10,1);
  (*(char * PTR32 *)(gen_frame + 0xc)) = "CDev.Engine.Sd.SoundDriver";
  (*(undefined4 *)(gen_frame + 0x10)) = 0x10;
  uVar2 = F_00cc9280(&REFG(undefined, 0x15d8b70),REFG(int, 0x15d86bc) * 0x600,&(*(char * PTR32 *)(gen_frame + 0xc)),1,1);
  F_00c47745(((int *)(gen_frame + 0x18))[4] ^ (uint)(uint)(gen_frame + 0x2c));
  return uVar2;
}

/* ref: FUN_00cc8f10 */
uint F_00cc8f10(unsigned int gen_a0)
{
  GEN_ENTER(0xcc8f10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  *(undefined1 *)((int)this + 0x30) = 1;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return (uint)this;
}

/* ref: FUN_00cc8f40 */
uint F_00cc8f40(unsigned int gen_a0)
{
  GEN_ENTER(0xcc8f40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint uVar1;
  
  uVar1 = param_1 & 0x8000003f;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xffffffc0) + 1;
  }
  return uVar1;
}

/* ref: FUN_00cc8f80 */
byte F_00cc8f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc8f80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0x48) ^ (byte)param_2) & 1;
  *(byte *)(in_ecx + 0x48) = *(byte *)(in_ecx + 0x48) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00cc8fb0 */
byte F_00cc8fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc8fb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 0x14) == param_2;
}

/* ref: FUN_00cc9010 */
byte F_00cc9010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9010u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 4 ^ *(byte *)(in_ecx + 0x48)) & 0x10;
  *(byte *)(in_ecx + 0x48) = *(byte *)(in_ecx + 0x48) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00cc9030 */
byte F_00cc9030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9030u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 5 ^ *(byte *)(in_ecx + 0x48)) & 0x20;
  *(byte *)(in_ecx + 0x48) = *(byte *)(in_ecx + 0x48) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00cc9120 */
uint F_00cc9120(unsigned int gen_a0)
{
  GEN_ENTER(0xcc9120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  uint extraout_EAX = 0;
  
  *(char *)((int)this + 0x30) = *(char *)((int)this + 0x11);
  if (*(char *)((int)this + 0x11) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
  }
  uVar1 = 0;
  if (*(int *)((int)this + 0x14) != 0) {
    uVar1 = F_00406810(*(int *)((int)this + 0x14));
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  if (*(char *)((int)this + 0x30) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x18));
    uVar1 = extraout_EAX;
  }
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::StreamReaderAdapter::vf1 */
uint F_00cc9170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  float10 fVar1;
  uint uVar2;
  float10 fVar3;
  longlong lVar4;
  
  fVar3 = (float10)(int)param_1[3] / (float10)(int)param_1[4];
  fVar1 = (float10)REFG(double, 0x1088108);
  if (fVar1 <= fVar3 && ((!GEN_ISNAN(fVar3) && !GEN_ISNAN(fVar1)) && fVar3 != fVar1)) {
    return 0;
  }
  lVar4 = ((gen_lcode *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 4))))
                    (*(int * PTR32 *)(this + 4),*param_1,param_1[2],0,param_1[1],0);
  uVar2 = (uint)lVar4;
  if (lVar4 == -1) {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::StreamReaderAdapter::vf2 */
uint F_00cc91d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xcc91d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0xc))))
                    (*(int * PTR32 *)(this + 4),param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                     param_8);
  return uVar1;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::StreamBankEx::StreamReaderAdapter::vf0 */
uint F_00cc91e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc91e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x109726c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00cc9210 */
uint F_00cc9210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9210u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x112a770));
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  return (uint)this;
}

/* ref: FUN_00cc9230 */
unsigned int F_00cc9230(unsigned int gen_a0)
{
  GEN_ENTER(0xcc9230u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x18);
  *(char *)((int)this + 0x30) = *(char *)((int)this + 0x11);
  if (*(char *)((int)this + 0x11) != '\0') {
    gen_imp_EnterCriticalSection(lpCriticalSection);
  }
  if (*(int *)((int)this + 0x14) != 0) {
    F_00406810(*(int *)((int)this + 0x14));
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  if (*(char *)((int)this + 0x30) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  gen_imp_DeleteCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00cc9280 */
uint F_00cc9280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcc9280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  
  if ((*(uint *)&REFG(undefined, 0x15d7790) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7790) = *(uint *)&REFG(undefined, 0x15d7790) | 1;
    REFG(int * PTR32, 0x15d778c) = (int *)F_004042b0();
  }
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15d778c) + 8))))(REFG(int * PTR32, 0x15d778c),param_1,*param_2,0,0,param_2[1]);
  *(uint *)((int)this + 0x14) = uVar1;
  if (uVar1 == 0) {
    if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
      *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
      REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcc8bf0));
    }
    ((code *)REFG(gen_code32, 0x15d861c))(&REFG(undefined, 0x112a624),&REFG(undefined1, 0x107fc63),
                    "d:\\ffxiv\\trunk\\prog\\externals\\cdev_sd\\sd\\cdev\\engine\\sd\\driver\\../SdHeap.h"
                    ,0x60,"SQEX::CDev::Engine::Sd::SdHeap::CreateSdHeap");
  }
  uVar1 = F_00ce3200(this,*(undefined4 *)((int)this + 0x14),param_1,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00cc9320 */
unsigned int F_00cc9320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9320u, gen_a0, gen_a1, 0u, 0u);
  LPCSTR param_1 = (LPCSTR)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 != 1) {
    gen_imp_OutputDebugStringA(param_1);
  }
  return 0;
}

/* ref: FUN_00cc9340 */
byte F_00cc9340(unsigned int gen_a0)
{
  GEN_ENTER(0xcc9340u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(in_ecx + 0xc);
  while (iVar1 = iVar2, iVar1 != 0) {
    in_ecx = iVar1;
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  return (int)*(short *)(in_ecx + 8) <= *(int *)(in_ecx + 0xbc);
}

/* ref: FUN_00cc9360 */
uint F_00cc9360(unsigned int gen_a0)
{
  GEN_ENTER(0xcc9360u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(in_ecx + 0xc);
  while (iVar1 = iVar2, iVar1 != 0) {
    in_ecx = iVar1;
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  return *(uint *)(in_ecx + 0xbc);
}

/* ref: FUN_00cc9380 */
byte F_00cc9380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9380u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 1;
}

/* ref: FUN_00cc9390 */
byte F_00cc9390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9390u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 == *(int *)(in_ecx + 4);
}

/* ref: FUN_00cc93a0 */
uint F_00cc93a0(unsigned int gen_a0)
{
  GEN_ENTER(0xcc93a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  double dVar1;
  
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x34) + 0x10))))((int)this + 0x34);
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))))((int)this + 0x10);
  dVar1 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x58) + 0x10))))((int)this + 0x58);
  return (uint)(ulonglong)gen_d2bits(dVar1);
}

/* ref: FUN_00cc93f0 */
uint F_00cc93f0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xcc93f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint in_EAX = 0;
  
  F_00cccc10(in_ecx + 0x10,param_2);
  return in_EAX;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bus::vf7 */
unsigned int F_00cc9410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00cc9420 */
unsigned int F_00cc9420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9420u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((char)param_2 != '\0') {
    *(ushort *)(in_ecx + 10) = *(ushort *)(in_ecx + 10) | 1;
    return 0;
  }
  *(ushort *)(in_ecx + 10) = *(ushort *)(in_ecx + 10) & 0xfffe;
  return 0;
}

/* ref: FUN_00cc9450 */
uint F_00cc9450(unsigned int gen_a0)
{
  GEN_ENTER(0xcc9450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  
  uVar2 = 0;
  if (*(undefined * PTR32 *)((int)this + 0xc) != (undefined *)0x0) {
    this = *(undefined * PTR32 *)((int)this + 0xc);
  }
  for (this_00 = (undefined *)F_00d2ff90((int)this + 0xb4,0); this_00 != (undefined *)0x0;
      this_00 = (undefined *)F_00d2ff90((int)this + 0xb4,this_00)) {
    bVar1 = F_00cbbe10(this_00);
    if (bVar1 == 0) {
      uVar2 = uVar2 + 1;
    }
  }
  return uVar2;
}

/* ref: FUN_00cc94a0 */
unsigned int F_00cc94a0(void)
{
  GEN_ENTER(0xcc94a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00cc94b0 */
unsigned int F_00cc94b0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc94b0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  undefined * this;
  uint uVar2;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  
  *(int *)(param_1 + 0x7c) = *(int *)(param_1 + 0x7c) + 1;
  if (*(int *)(param_1 + 0x7c) == 1) {
    if (param_3 != 0) {
      F_00cccd90(param_1 + 0x34,param_2,param_3);
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 == 0) {
      iVar1 = param_1;
    }
    F_00cccbd0(param_1 + 0x34,param_2);
    for (this = (undefined *)F_00d2ff90(iVar1 + 0xb4,0); this != (undefined *)0x0;
        this = (undefined *)F_00d2ff90(iVar1 + 0xb4,this)) {
      uVar2 = F_00cbcc20(this);
      if (uVar2 == *(uint *)(param_1 + 4)) {
        extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x10))))(param_1 + 0x34);
        extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10))))(param_1 + 0x10);
        extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x58) + 0x10))))(param_1 + 0x58);
        F_00cbc8c0(this,((float)GEN_TOF((extraout_ST0_01 *
                                 (float10)(double)(extraout_ST0_00 * (float10)(double)extraout_ST0))))
                    );
      }
    }
  }
  return 0;
}

/* ref: FUN_00cc9590 */
uint F_00cc9590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  undefined * this_00;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  
  uVar2 = *(uint *)((int)this + 0x7c);
  if (0 < (int)uVar2) {
    uVar2 = uVar2 - 1;
    *(uint *)((int)this + 0x7c) = uVar2;
    if (uVar2 == 0) {
      if (param_1 != 0) {
        uVar2 = F_00cccd90((int)this + 0x34,(float)(float10)1,param_1);
        return uVar2;
      }
      pvVar1 = *(undefined * PTR32 *)((int)this + 0xc);
      if (pvVar1 == (undefined *)0x0) {
        pvVar1 = this;
      }
      F_00cccbd0((int)this + 0x34,(float)(float10)1);
      for (this_00 = (undefined *)F_00d2ff90((int)pvVar1 + 0xb4,0); this_00 != (undefined *)0x0;
          this_00 = (undefined *)F_00d2ff90((int)pvVar1 + 0xb4,this_00)) {
        uVar2 = F_00cbcc20(this_00);
        if (uVar2 == *(uint *)((int)this + 4)) {
          extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x34) + 0x10))))((int)this + 0x34);
          extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))))((int)this + 0x10);
          extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)((int)this + 0x58) + 0x10))))((int)this + 0x58);
          F_00cbc8c0(this_00,((float)GEN_TOF((extraout_ST0_01 *
                                      (float10)(double)(extraout_ST0_00 *
                                                       (float10)(double)extraout_ST0)))));
        }
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bus::vf2 */
unsigned int F_00cc9670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9670u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  int in_ecx;
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined * this;
  uint uVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  
  *(undefined1 *)(param_1 + 0xdc) = 1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc4));
  in_ecx = *(int *)(param_1 + 0xc);
  iVar2 = in_ecx;
  if (in_ecx == 0) {
    iVar2 = param_1;
  }
  this = (undefined *)(iVar2 + 0xb4);
  uVar1 = *(uint *)(iVar2 + 0x90);
  if (in_ecx == 0) {
    uVar4 = *(uint *)(param_1 + 0xbc);
  }
  else {
    uVar4 = F_00cc9360(in_ecx);
  }
  if (uVar1 == uVar4) {
    puVar5 = (undefined4 *)F_00d2ff90(this,0);
    do {
      bVar3 = F_00cbbe20(puVar5);
      if ((bVar3 == 0) && (bVar3 = F_00cbbe10(puVar5), bVar3 == 0)) {
        puVar6 = (undefined4 *)F_00d2ff90(this,puVar5);
      }
      else {
        F_00cbdbf0(puVar5,0);
        puVar6 = (undefined4 *)F_00d2ff30(this,puVar5);
        if (puVar5 != (undefined4 *)0x0) {
          *(char *)(iVar2 + 0xb0) = *(char *)(iVar2 + 0x94);
          if (*(char *)(iVar2 + 0x94) != '\0') {
            gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x98));
          }
          *puVar5 = *(undefined4 *)(iVar2 + 0x84);
          *(undefined4 * PTR32 *)(iVar2 + 0x84) = puVar5;
          if (*(char *)(iVar2 + 0xb0) != '\0') {
            gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(iVar2 + 0x98));
          }
        }
      }
      puVar5 = puVar6;
    } while (puVar6 != (undefined4 *)0x0);
  }
  lpCriticalSection = (LPCRITICAL_SECTION)(iVar2 + 0x98);
  *(char *)(iVar2 + 0xb0) = *(char *)(iVar2 + 0x94);
  if (*(char *)(iVar2 + 0x94) != '\0') {
    gen_imp_EnterCriticalSection(lpCriticalSection);
  }
  puVar5 = *(undefined4 * PTR32 *)(iVar2 + 0x84);
  if (puVar5 == (undefined4 *)0x0) {
    if (*(char *)(iVar2 + 0xb0) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
  }
  else {
    *(undefined4 *)(iVar2 + 0x84) = *puVar5;
    if (*(char *)(iVar2 + 0xb0) != '\0') {
      gen_imp_LeaveCriticalSection(lpCriticalSection);
    }
    if (puVar5 != (undefined4 *)0x0) {
      F_00cbbdc0(puVar5,param_2);
      F_00d2fe00(this,puVar5);
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x10))))(param_1 + 0x34);
      extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10))))(param_1 + 0x10);
      extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x58) + 0x10))))(param_1 + 0x58);
      F_00cbc8c0(puVar5,((float)GEN_TOF((extraout_ST0_01 *
                                 (float10)(double)(extraout_ST0_00 * (float10)(double)extraout_ST0))))
                  );
    }
  }
  if (*(char *)(param_1 + 0xdc) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xc4));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bus::vf1 */
unsigned int F_00cc9800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pBVar1;
  byte bVar2;
  undefined4 * this_00;
  undefined4 * puVar3;
  uint uVar4;
  undefined * this_01;
  bool bVar5;
  bool bVar6;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  
  this[0xdc] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0xc4));
  if (*(int *)(this + 0xbc) != 0) {
    this_00 = (undefined4 *)F_00d2ff90(this + 0xb4,0);
    do {
      bVar2 = F_00cbc040(this_00);
      if (bVar2 == 0) {
        puVar3 = (undefined4 *)F_00d2ff30(this + 0xb4,this_00);
        if (this_00 != (undefined4 *)0x0) {
          this[0xb0] = this[0x94];
          if (this[0x94] != (undefined1)0x0) {
            gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
          }
          *this_00 = *(undefined4 *)(this + 0x84);
          *(undefined4 * PTR32 *)(this + 0x84) = this_00;
          if (this[0xb0] != (undefined1)0x0) {
            gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0x98));
          }
        }
      }
      else {
        puVar3 = (undefined4 *)F_00d2ff90(this + 0xb4,this_00);
      }
      this_00 = puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 0xc))))(this + 0x10);
  bVar5 = (char)uVar4 != '\0';
  if (bVar5) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 8))))(this + 0x10,param_1);
  }
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x34) + 0xc))))(this + 0x34);
  bVar6 = (char)uVar4 != '\0';
  if (bVar6) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x34) + 8))))(this + 0x34,param_1);
  }
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x58) + 0xc))))(this + 0x58);
  if ((char)uVar4 == '\0') {
    if (!bVar6 && !bVar5) goto LAB_00cc998b;
  }
  else {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x58) + 8))))(this + 0x58,param_1);
  }
  pBVar1 = *(undefined * PTR32 *)(this + 0xc);
  if (pBVar1 == (undefined *)0x0) {
    pBVar1 = this;
  }
  for (this_01 = (undefined *)F_00d2ff90(pBVar1 + 0xb4,0); this_01 != (undefined *)0x0;
      this_01 = (undefined *)F_00d2ff90(pBVar1 + 0xb4,this_01)) {
    uVar4 = F_00cbcc20(this_01);
    if (uVar4 == *(uint *)(this + 4)) {
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x34) + 0x10))))(this + 0x34);
      extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x10) + 0x10))))(this + 0x10);
      extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(this + 0x58) + 0x10))))(this + 0x58);
      F_00cbc8c0(this_01,((float)GEN_TOF((extraout_ST0_01 *
                                  (float10)(double)(extraout_ST0_00 * (float10)(double)extraout_ST0)
                                  ))));
    }
  }
LAB_00cc998b: ;
  if (this[0xdc] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0xc4));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bus::vf3 */
uint F_00cc99b0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc99b0u, gen_a0, gen_trace_f(gen_a1), gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  undefined * this;
  LPCRITICAL_SECTION extraout_EAX = 0;
  LPCRITICAL_SECTION lpCriticalSection;
  float10 extraout_ST0;
  float10 extraout_ST0_00;
  float10 extraout_ST0_01;
  
  if (param_3 != 0) {
    uVar2 = F_00cccd90(param_1 + 0x10,param_2,param_3);
    return uVar2;
  }
  F_00cccbd0(param_1 + 0x10,param_2);
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0xc4);
  *(undefined1 *)(param_1 + 0xdc) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
    iVar1 = param_1;
  }
  for (this = (undefined *)F_00d2ff90(iVar1 + 0xb4,0); this != (undefined *)0x0;
      this = (undefined *)F_00d2ff90(iVar1 + 0xb4,this)) {
    uVar2 = F_00cbcc20(this);
    if (uVar2 == *(uint *)(param_1 + 4)) {
      extraout_ST0 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x34) + 0x10))))(param_1 + 0x34);
      extraout_ST0_00 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x10) + 0x10))))(param_1 + 0x10);
      extraout_ST0_01 = ((gen_fcode *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0x58) + 0x10))))(param_1 + 0x58);
      F_00cbc8c0(this,((float)GEN_TOF((extraout_ST0_01 *
                               (float10)(double)(extraout_ST0_00 * (float10)(double)extraout_ST0)))));
    }
  }
  if (*(char *)(param_1 + 0xdc) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    lpCriticalSection = extraout_EAX;
  }
  return (uint)lpCriticalSection;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bus::vf4 */
unsigned int F_00cc9aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pBVar1;
  undefined * this_00;
  uint uVar2;
  
  this[0xdc] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0xc4));
  pBVar1 = this;
  if (*(undefined * PTR32 *)(this + 0xc) != (undefined *)0x0) {
    pBVar1 = *(undefined * PTR32 *)(this + 0xc);
  }
  for (this_00 = (undefined *)F_00d2ff90(pBVar1 + 0xb4,0); this_00 != (undefined *)0x0;
      this_00 = (undefined *)F_00d2ff90(pBVar1 + 0xb4,this_00)) {
    uVar2 = F_00cbcc20(this_00);
    if (uVar2 == *(uint *)(this + 4)) {
      F_00cbdbf0(this_00,param_1);
    }
  }
  this[0xe4] = (undefined1)0x0;
  if (this[0xdc] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0xc4));
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bus::vf5 */
unsigned int F_00cc9b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcc9b30u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  undefined * pBVar1;
  undefined * this_00;
  uint uVar2;
  
  if (((*(undefined * PTR32 *)&gen_args[0])[0xe5] == (undefined1)0x0) || ((*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[2]) + 0)) != (undefined1)0x0)) {
    (*(undefined * PTR32 *)&gen_args[0])[0xdc] = (undefined1)0x1;
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((*(undefined * PTR32 *)&gen_args[0]) + 0xc4));
    pBVar1 = *((undefined * PTR32 *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
    if (pBVar1 == (undefined *)0x0) {
      pBVar1 = (*(undefined * PTR32 *)&gen_args[0]);
    }
    for (this_00 = (undefined *)F_00d2ff90(pBVar1 + 0xb4,0); this_00 != (undefined *)0x0;
        this_00 = (undefined *)F_00d2ff90(pBVar1 + 0xb4,this_00)) {
      uVar2 = F_00cbcc20(this_00);
      if (uVar2 == *((uint *)GEN_TOP(((*(undefined * PTR32 *)&gen_args[0]) + 4)))) {
        F_00cbc120(this_00,(*(undefined4 *)&gen_args[1]));
      }
    }
    (*(undefined * PTR32 *)&gen_args[0])[0xe4] = (undefined1)0x1;
    (*(undefined * PTR32 *)&gen_args[0])[0xe5] = (*(undefined1 *)((char *)&(*(undefined4 *)&gen_args[2]) + 0));
    if ((*(undefined * PTR32 *)&gen_args[0])[0xdc] != (undefined1)0x0) {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((*(undefined * PTR32 *)&gen_args[0]) + 0xc4));
    }
  }
  return 0;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bus::vf6 */
unsigned int F_00cc9bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * pBVar1;
  undefined * this_00;
  uint uVar2;
  
  this[0xdc] = (undefined1)0x1;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 0xc4));
  pBVar1 = this;
  if (*(undefined * PTR32 *)(this + 0xc) != (undefined *)0x0) {
    pBVar1 = *(undefined * PTR32 *)(this + 0xc);
  }
  for (this_00 = (undefined *)F_00d2ff90(pBVar1 + 0xb4,0); this_00 != (undefined *)0x0;
      this_00 = (undefined *)F_00d2ff90(pBVar1 + 0xb4,this_00)) {
    uVar2 = F_00cbcc20(this_00);
    if (uVar2 == *(uint *)(this + 4)) {
      F_00cbc1a0(this_00,param_1);
    }
  }
  *(undefined2 *)(this + 0xe4) = 0;
  if (this[0xdc] != (undefined1)0x0) {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 0xc4));
  }
  return 0;
}

/* ref: FUN_00cc9c60 */
uint F_00cc9c60(unsigned int gen_a0)
{
  GEN_ENTER(0xcc9c60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  byte bVar1;
  undefined * this_00;
  uint uVar2;
  uint uVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc4);
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x10)) = lpCriticalSection;
  *(undefined1 *)((int)this + 0xdc) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  if (*(int *)((int)this + 0xc) == 0) {
    (*(int *)(gen_frame + 0x18)) = (int)this + 0xb4;
  }
  else {
    (*(int *)(gen_frame + 0x18)) = *(int *)((int)this + 0xc) + 0xb4;
  }
  ((uint *)(gen_frame + 0x0))[0] = 0;
  ((uint *)(gen_frame + 0x0))[1] = 0xffffffff;
  ((uint *)(gen_frame + 0x0))[2] = 0;
  ((uint *)(gen_frame + 0x0))[3] = 0xffffffff;
  (*(int *)(gen_frame + 0x14)) = 0;
  for (this_00 = (undefined *)F_00d2ff90((*(int *)(gen_frame + 0x18)),0); this_00 != (undefined *)0x0;
      this_00 = (undefined *)F_00d2ff90((*(int *)(gen_frame + 0x18)),this_00)) {
    bVar1 = F_00cbc040(this_00);
    if (bVar1 != 0) {
      uVar2 = F_00cbbe00(this_00);
      bVar1 = F_00cbc290(this_00);
      uVar3 = (uint)bVar1;
      if (uVar2 < ((uint *)(gen_frame + 0x0))[(int)(uVar3 * 2 + 1)]) {
        ((uint *)(gen_frame + 0x0))[(int)(uVar3 * 2 + 1)] = uVar2;
        uVar2 = F_00cbbff0(this_00);
        ((uint *)(gen_frame + 0x0))[(int)(uVar3 * 2)] = uVar2;
      }
      (*(int *)(gen_frame + 0x14)) = (*(int *)(gen_frame + 0x14)) + uVar3;
      lpCriticalSection = (*(LPCRITICAL_SECTION *)(gen_frame + 0x10));
    }
  }
  uVar2 = ((uint *)(gen_frame + 0x0))[(int)((uint)((*(int *)(gen_frame + 0x14)) != 0) * 2)];
  if (*(char *)&(*(undefined * PTR32 *)(((char *)(lpCriticalSection) + (1) * 24))) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return uVar2;
}

/* ref: FUN_00cc9d30 */
uint F_00cc9d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcc9d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x820];
  LPCRITICAL_SECTION lpCriticalSection;
  byte bVar1;
  byte bVar2;
  undefined * pvVar3;
  uint uVar4;
  uint uVar5;
  undefined1 * puVar6;
  uint * puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  (*(uint *)(gen_frame + 0x818)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x81c);
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0xc4);
  *(undefined1 *)((int)this + 0xdc) = 1;
  gen_imp_EnterCriticalSection(lpCriticalSection);
  pvVar3 = *(undefined * PTR32 *)((int)this + 0xc);
  if (pvVar3 == (undefined *)0x0) {
    pvVar3 = this;
  }
  iVar8 = (int)pvVar3 + 0xb4;
  (*(byte *)(gen_frame + 0x17)) = 0xff;
  pvVar3 = (undefined *)F_00d2ff90(iVar8,0);
  bVar1 = (*(byte *)(gen_frame + 0x17));
  while (pvVar3 != (undefined *)0x0) {
    bVar2 = F_00cbbe20(pvVar3);
    (*(byte *)(gen_frame + 0x17)) = bVar1;
    if ((bVar2 == 0) && (bVar2 = F_00cbd740(pvVar3), bVar2 < bVar1)) {
      (*(byte *)(gen_frame + 0x17)) = bVar2;
    }
    pvVar3 = (undefined *)F_00d2ff90(iVar8,pvVar3);
    bVar1 = (*(byte *)(gen_frame + 0x17));
  }
  puVar6 = ((undefined1 *)(gen_frame + 0x18));
  iVar9 = 0x7f;
  do {
    F_00cbbd70(puVar6);
    puVar6 = puVar6 + 0x10;
    iVar9 = iVar9 + -1;
  } while (-1 < iVar9);
  uVar10 = 0;
  (*(uint *)(gen_frame + 0xc)) = 0;
  pvVar3 = (undefined *)F_00d2ff90(iVar8,0);
  if (pvVar3 != (undefined *)0x0) {
    puVar6 = ((undefined1 *)(gen_frame + 0x18));
    do {
      bVar2 = F_00cbbe20(pvVar3);
      if (bVar2 == 0) {
        (*(uint *)(gen_frame + 0xc)) = uVar10;
        if (0x7f < uVar10) break;
        bVar2 = F_00cbd740(pvVar3);
        if (bVar1 == bVar2) {
          F_00cbbdc0(puVar6,pvVar3);
          uVar10 = uVar10 + 1;
          puVar6 = puVar6 + 0x10;
          if ((char)param_1 == '\0') {
            uVar10 = F_00cbbff0(pvVar3);
            puVar7 = &(*(uint *)(gen_frame + 0x818));
            iVar8 = 0x7f;
            do {
              puVar7 = puVar7 + -4;
              F_00cbbdb0(puVar7);
              iVar8 = iVar8 + -1;
            } while (-1 < iVar8);
            if (*(char *)((int)this + 0xdc) != '\0') {
              gen_imp_LeaveCriticalSection(lpCriticalSection);
            }
            F_00c47745((*(uint *)(gen_frame + 0x818)) ^ (uint)(uint)(gen_frame + 0x81c));
            return uVar10;
          }
        }
      }
      pvVar3 = (undefined *)F_00d2ff90(iVar8,pvVar3);
      (*(uint *)(gen_frame + 0xc)) = uVar10;
    } while (pvVar3 != (undefined *)0x0);
  }
  uVar10 = 0;
  (*(uint *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0x10)) = 0;
  if ((*(uint *)(gen_frame + 0xc)) != 0) {
    do {
      uVar4 = F_00cbbe00(((undefined1 *)(gen_frame + 0x18)) + uVar10 * 0x10);
      uVar5 = F_00cbbff0(((undefined1 *)(gen_frame + 0x18)) + uVar10 * 0x10);
      if ((uVar10 == 0) || (uVar4 < (*(uint *)(gen_frame + 0x10)))) {
        (*(uint *)(gen_frame + 0x8)) = uVar5;
        (*(uint *)(gen_frame + 0x10)) = uVar4;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 < (*(uint *)(gen_frame + 0xc)));
  }
  puVar7 = &(*(uint *)(gen_frame + 0x818));
  iVar8 = 0x7f;
  do {
    puVar7 = puVar7 + -4;
    F_00cbbdb0(puVar7);
    iVar8 = iVar8 + -1;
  } while (-1 < iVar8);
  if (*(char *)((int)this + 0xdc) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  F_00c47745((*(uint *)(gen_frame + 0x818)) ^ (uint)(uint)(gen_frame + 0x81c));
  return (*(uint *)(gen_frame + 0x8));
}

/* ref: FUN_00cc9f30 */
uint F_00cc9f30(unsigned int gen_a0)
{
  GEN_ENTER(0xcc9f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  LPCRITICAL_SECTION lpCriticalSection;
  uint extraout_EAX = 0;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x112a8c4));
  if (*(int *)((int)this + 0xc) == 0) {
    *(char *)((int)this + 0xb0) = *(char *)((int)this + 0x94);
    if (*(char *)((int)this + 0x94) != '\0') {
      gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
    }
    if (*(int *)((int)this + 0x80) != 0) {
      F_00406810(*(int *)((int)this + 0x80));
      *(undefined4 *)((int)this + 0x80) = 0;
    }
    *(undefined4 *)((int)this + 0x84) = 0;
    if (*(char *)((int)this + 0xb0) != '\0') {
      gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
    }
  }
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc4));
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 0x98);
  *(char *)((int)this + 0xb0) = *(char *)((int)this + 0x94);
  if (*(char *)((int)this + 0x94) != '\0') {
    gen_imp_EnterCriticalSection(lpCriticalSection);
  }
  if (*(int *)((int)this + 0x80) != 0) {
    F_00406810(*(int *)((int)this + 0x80));
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  *(undefined4 *)((int)this + 0x84) = 0;
  if (*(char *)((int)this + 0xb0) != '\0') {
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  gen_imp_DeleteCriticalSection(lpCriticalSection);
  F_00cccb40((int)this + 0x58);
  F_00cccb40((int)this + 0x34);
  F_00cccb40((int)this + 0x10);
  return extraout_EAX;
}

/* ref: FUN_00cca000 */
uint F_00cca000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xcca000u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint extraout_EAX = 0;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  if (param_5 == 0) {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d): <assert> (%s) %s\n",param_3,param_4);
  }
  else {
    F_00c472ec(((undefined1 *)(gen_frame + 0x8)),0x800,0x7ff,"%s(%d):[%s] <assert> (%s) %s\n",param_3,param_4,param_5);
  }
  F_00cbee70(((undefined1 *)(gen_frame + 0x8)),6);
  *(undefined4 *)&REFG(undefined, 0x0) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return extraout_EAX;
}

/* ref: FUN_00cca0a0 */
uint F_00cca0a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xcca0a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  short * param_2 = (short *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[8])REFP(0x112a8c4));
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = *(undefined4 *)param_2;
  *(undefined4 *)((int)this + 0xc) = 0;
  F_00cccb10((int)this + 0x10,(float)(float10)1);
  F_00cccb10((int)this + 0x34,(float)(float10)1);
  F_00cccb10((int)this + 0x58,(float)(float10)1);
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined1 *)((int)this + 0x94) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x98));
  *(undefined1 *)((int)this + 0xb0) = 1;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0xc4));
  *(undefined1 *)((int)this + 0xdc) = 1;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined2 *)((int)this + 0xe4) = 0;
  *(undefined1 *)((int)this + 0xe6) = 0;
  iVar1 = (int)*param_2;
  if (iVar1 != 0) {
    if (iVar1 < 0) {
      uVar2 = F_00cbf660(-iVar1);
      *(uint *)((int)this + 0xc) = uVar2;
      if (uVar2 == 0) {
        if ((*(uint *)&REFG(undefined, 0x15d8620) & 1) == 0) {
          *(uint *)&REFG(undefined, 0x15d8620) = *(uint *)&REFG(undefined, 0x15d8620) | 1;
          REFG(undefined * PTR32, 0x15d861c) = ((code *)REFP(0xcca000));
        }
        ((code *)REFG(gen_code32, 0x15d861c))("refBus_ != NULL","Not Find Referens Bus!!","Bus.cpp",0x3d,
                        "SQEX::CDev::Engine::Sd::Driver::Bus::Bus");
        return (uint)this;
      }
    }
    else {
      (*(char * PTR32 *)(gen_frame + 0x4)) = "CDev.Engine.Sd.SoundDriver";
      (*(undefined4 *)(gen_frame + 0x8)) = 0x10;
      F_00cc6930((undefined *)((int)this + 0x80),0x1c,iVar1 * 2,&(*(char * PTR32 *)(gen_frame + 0x4)),0x10,1);
      F_00d2fdb0((int)this + 0xb4,0x10);
    }
  }
  return (uint)this;
}

/* ref: SQEX::CDev::Engine::Sd::Driver::Bus::vf0 */
uint F_00cca220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xcca220u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cc9f30(this);
  if (((param_1 & 1) != 0) && (this != (undefined *)0x0)) {
    F_00406810(this);
  }
  return (uint)this;
}

