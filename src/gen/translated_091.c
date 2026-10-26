#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00941060 */
unsigned int F_00941060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x941060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00941080 */
unsigned int F_00941080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x941080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_009410a0 */
unsigned int F_009410a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9410a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
  }
  return 0;
}

/* ref: FUN_009410c0 */
unsigned int F_009410c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9410c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: FUN_009410e0 */
unsigned int F_009410e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9410e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
    param_2[1] = param_3[1];
    param_2[2] = param_3[2];
    param_2[3] = param_3[3];
    param_2[4] = param_3[4];
    F_0042cbc0(param_2 + 5,param_3 + 5);
    F_0042cbc0(param_2 + 0x1a,param_3 + 0x1a);
    param_2[0x2f] = param_3[0x2f];
  }
  return 0;
}

/* ref: FUN_00941140 */
uint F_00941140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x941140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00941160 */
unsigned int F_00941160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x941160u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = param_1[3];
  uVar2 = *param_1;
  uVar3 = param_1[4];
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *param_2 = uVar2;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar1;
  param_2[4] = uVar3;
  return 0;
}

/* ref: FUN_009411c0 */
unsigned int F_009411c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9411c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  
  iVar3 = param_2;
  while( true ) {
    iVar6 = iVar3 * 2 + 2;
    if (param_3 <= iVar6) break;
    iVar1 = param_1 + iVar6 * 0x14;
    uVar5 = (*param_5)(iVar1,iVar1 + -0x14);
    if ((char)uVar5 != '\0') {
      iVar6 = iVar3 * 2 + 1;
    }
    puVar2 = (undefined4 *)(param_1 + iVar6 * 0x14);
    *(undefined4 *)(param_1 + iVar3 * 0x14) = *puVar2;
    iVar3 = param_1 + iVar3 * 0x14;
    *(undefined4 *)(iVar3 + 4) = puVar2[1];
    *(undefined4 *)(iVar3 + 8) = puVar2[2];
    *(undefined4 *)(iVar3 + 0xc) = puVar2[3];
    *(undefined4 *)(iVar3 + 0x10) = puVar2[4];
    iVar3 = iVar6;
  }
  if (iVar6 == param_3) {
    puVar4 = (undefined4 *)(param_1 + -0x14 + param_3 * 0x14);
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0x14);
    *puVar2 = *puVar4;
    puVar2[1] = puVar4[1];
    puVar2[2] = puVar4[2];
    puVar2[3] = puVar4[3];
    puVar2[4] = puVar4[4];
    iVar3 = param_3 + -1;
  }
  while (param_2 < iVar3) {
    iVar6 = (iVar3 + -1) / 2;
    puVar2 = (undefined4 *)(param_1 + iVar6 * 0x14);
    uVar5 = (*param_5)(puVar2,param_4);
    if ((char)uVar5 == '\0') break;
    puVar4 = (undefined4 *)(param_1 + iVar3 * 0x14);
    *puVar4 = *puVar2;
    puVar4[1] = puVar2[1];
    puVar4[2] = puVar2[2];
    puVar4[3] = puVar2[3];
    puVar4[4] = puVar2[4];
    iVar3 = iVar6;
  }
  puVar2 = (undefined4 *)(param_1 + iVar3 * 0x14);
  *puVar2 = *param_4;
  puVar2[1] = param_4[1];
  puVar2[2] = param_4[2];
  puVar2[3] = param_4[3];
  puVar2[4] = param_4[4];
  return 0;
}

/* ref: FUN_009412f0 */
unsigned int F_009412f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9412f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = param_1[3];
  uVar2 = *param_1;
  uVar3 = param_1[4];
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *param_2 = uVar2;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar1;
  param_2[4] = uVar3;
  return 0;
}

/* ref: FUN_00941350 */
unsigned int F_00941350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x941350u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  
  iVar3 = param_2;
  while( true ) {
    iVar6 = iVar3 * 2 + 2;
    if (param_3 <= iVar6) break;
    iVar1 = param_1 + iVar6 * 0x14;
    uVar5 = (*param_5)(iVar1,iVar1 + -0x14);
    if ((char)uVar5 != '\0') {
      iVar6 = iVar3 * 2 + 1;
    }
    puVar2 = (undefined4 *)(param_1 + iVar6 * 0x14);
    *(undefined4 *)(param_1 + iVar3 * 0x14) = *puVar2;
    iVar3 = param_1 + iVar3 * 0x14;
    *(undefined4 *)(iVar3 + 4) = puVar2[1];
    *(undefined4 *)(iVar3 + 8) = puVar2[2];
    *(undefined4 *)(iVar3 + 0xc) = puVar2[3];
    *(undefined4 *)(iVar3 + 0x10) = puVar2[4];
    iVar3 = iVar6;
  }
  if (iVar6 == param_3) {
    puVar4 = (undefined4 *)(param_1 + -0x14 + param_3 * 0x14);
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0x14);
    *puVar2 = *puVar4;
    puVar2[1] = puVar4[1];
    puVar2[2] = puVar4[2];
    puVar2[3] = puVar4[3];
    puVar2[4] = puVar4[4];
    iVar3 = param_3 + -1;
  }
  while (param_2 < iVar3) {
    iVar6 = (iVar3 + -1) / 2;
    puVar2 = (undefined4 *)(param_1 + iVar6 * 0x14);
    uVar5 = (*param_5)(puVar2,param_4);
    if ((char)uVar5 == '\0') break;
    puVar4 = (undefined4 *)(param_1 + iVar3 * 0x14);
    *puVar4 = *puVar2;
    puVar4[1] = puVar2[1];
    puVar4[2] = puVar2[2];
    puVar4[3] = puVar2[3];
    puVar4[4] = puVar2[4];
    iVar3 = iVar6;
  }
  puVar2 = (undefined4 *)(param_1 + iVar3 * 0x14);
  *puVar2 = *param_4;
  puVar2[1] = param_4[1];
  puVar2[2] = param_4[2];
  puVar2[3] = param_4[3];
  puVar2[4] = param_4[4];
  return 0;
}

/* ref: FUN_00941480 */
unsigned int F_00941480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x941480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return 0;
}

/* ref: FUN_009414b0 */
unsigned int F_009414b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9414b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = param_2;
  while( true ) {
    iVar4 = iVar1 * 2 + 2;
    if (param_3 <= iVar4) break;
    iVar2 = param_1 + iVar4 * 8;
    uVar3 = (*param_5)(iVar2,iVar2 + -8);
    if ((char)uVar3 != '\0') {
      iVar4 = iVar1 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 + iVar4 * 8);
    *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 + 4 + iVar4 * 8);
    iVar1 = iVar4;
  }
  if (iVar4 == param_3) {
    *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 + -8 + param_3 * 8);
    *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 + -4 + param_3 * 8);
    iVar1 = param_3 + -1;
  }
  while (param_2 < iVar1) {
    iVar4 = (iVar1 + -1) / 2;
    uVar3 = (*param_5)(param_1 + iVar4 * 8,param_4);
    if ((char)uVar3 == '\0') break;
    *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 + iVar4 * 8);
    *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 + 4 + iVar4 * 8);
    iVar1 = iVar4;
  }
  *(undefined4 *)(param_1 + iVar1 * 8) = *param_4;
  *(undefined4 *)(param_1 + 4 + iVar1 * 8) = param_4[1];
  return 0;
}

/* ref: FUN_00941570 */
unsigned int F_00941570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x941570u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 + -8) {
    puVar1[-2] = *(undefined4 *)(iVar2 + -8);
    puVar1[-1] = *(undefined4 *)(iVar2 + -4);
    puVar1 = puVar1 + -2;
  }
  return 0;
}

/* ref: FUN_009415a0 */
uint F_009415a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9415a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  ulonglong uVar1;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  F_0042cbc0(((undefined1 *)(gen_frame + 0xc)),param_1);
  (*(undefined4 *)(gen_frame + 0x64)) = *(undefined4 *)((int)param_1 + 0x58);
  (*(undefined4 *)(gen_frame + 0x60)) = *(undefined4 *)((int)param_1 + 0x54);
  (*(undefined4 *)(gen_frame + 0x68)) = *(undefined4 *)((int)param_1 + 0x5c);
  (*(undefined4 *)(gen_frame + 0x70)) = *(undefined4 *)((int)param_1 + 100);
  (*(undefined4 *)(gen_frame + 0x6c)) = *(undefined4 *)((int)param_1 + 0x60);
  (*(undefined4 *)(gen_frame + 0x74)) = *(undefined4 *)((int)param_1 + 0x68);
  F_0042ccf0(param_1,param_2);
  *(undefined4 *)((int)param_1 + 0x54) = *(undefined4 *)((int)param_2 + 0x54);
  *(undefined4 *)((int)param_1 + 0x58) = *(undefined4 *)((int)param_2 + 0x58);
  *(undefined4 *)((int)param_1 + 0x5c) = *(undefined4 *)((int)param_2 + 0x5c);
  *(undefined4 *)((int)param_1 + 0x60) = *(undefined4 *)((int)param_2 + 0x60);
  *(undefined4 *)((int)param_1 + 100) = *(undefined4 *)((int)param_2 + 100);
  *(undefined4 *)((int)param_1 + 0x68) = *(undefined4 *)((int)param_2 + 0x68);
  F_0042ccf0(param_2,((undefined1 *)(gen_frame + 0xc)));
  *(undefined4 *)((int)param_2 + 0x54) = (*(undefined4 *)(gen_frame + 0x60));
  *(undefined4 *)((int)param_2 + 0x58) = (*(undefined4 *)(gen_frame + 0x64));
  *(undefined4 *)((int)param_2 + 0x5c) = (*(undefined4 *)(gen_frame + 0x68));
  *(undefined4 *)((int)param_2 + 0x60) = (*(undefined4 *)(gen_frame + 0x6c));
  *(undefined4 *)((int)param_2 + 100) = (*(undefined4 *)(gen_frame + 0x70));
  *(undefined4 *)((int)param_2 + 0x68) = (*(undefined4 *)(gen_frame + 0x74));
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0xc)));
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return (uint)uVar1;
}

/* ref: FUN_00941660 */
uint F_00941660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x941660u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined * pvVar5;
  
  iVar4 = param_2;
  while( true ) {
    iVar3 = iVar4 * 2 + 2;
    if (param_3 <= iVar3) break;
    iVar1 = iVar3 * 0x6c + param_1;
    uVar2 = (*param_5)(iVar1,iVar1 + -0x6c);
    if ((char)uVar2 != '\0') {
      iVar3 = iVar4 * 2 + 1;
    }
    pvVar5 = (undefined *)(iVar4 * 0x6c + param_1);
    iVar4 = param_1 + iVar3 * 0x6c;
    F_0042ccf0(pvVar5,iVar4);
    *(undefined4 *)((int)pvVar5 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
    *(undefined4 *)((int)pvVar5 + 0x58) = *(undefined4 *)(iVar4 + 0x58);
    *(undefined4 *)((int)pvVar5 + 0x5c) = *(undefined4 *)(iVar4 + 0x5c);
    *(undefined4 *)((int)pvVar5 + 0x60) = *(undefined4 *)(iVar4 + 0x60);
    *(undefined4 *)((int)pvVar5 + 100) = *(undefined4 *)(iVar4 + 100);
    *(undefined4 *)((int)pvVar5 + 0x68) = *(undefined4 *)(iVar4 + 0x68);
    iVar4 = iVar3;
  }
  if (iVar3 == param_3) {
    iVar3 = param_3 * 0x6c + -0x6c + param_1;
    pvVar5 = (undefined *)(iVar4 * 0x6c + param_1);
    F_0042ccf0(pvVar5,iVar3);
    *(undefined4 *)((int)pvVar5 + 0x54) = *(undefined4 *)(iVar3 + 0x54);
    *(undefined4 *)((int)pvVar5 + 0x58) = *(undefined4 *)(iVar3 + 0x58);
    *(undefined4 *)((int)pvVar5 + 0x5c) = *(undefined4 *)(iVar3 + 0x5c);
    *(undefined4 *)((int)pvVar5 + 0x60) = *(undefined4 *)(iVar3 + 0x60);
    *(undefined4 *)((int)pvVar5 + 100) = *(undefined4 *)(iVar3 + 100);
    *(undefined4 *)((int)pvVar5 + 0x68) = *(undefined4 *)(iVar3 + 0x68);
    iVar4 = param_3 + -1;
  }
  uVar2 = F_0091fe00(param_1,iVar4,param_2,param_4,param_5);
  return uVar2;
}

/* ref: FUN_00941740 */
uint F_00941740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x941740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_0091feb0(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00941760 */
uint F_00941760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x941760u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  ulonglong uVar1;
  
  (*(uint *)(gen_frame + 0x68)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x6c);
  F_0042cbc0(((undefined1 *)(gen_frame + 0x0)),param_1);
  (*(undefined4 *)(gen_frame + 0x58)) = *(undefined4 *)((int)param_1 + 0x58);
  (*(undefined4 *)(gen_frame + 0x54)) = *(undefined4 *)((int)param_1 + 0x54);
  (*(undefined1 *)(gen_frame + 0x64)) = *(undefined1 *)((int)param_1 + 100);
  (*(undefined4 *)(gen_frame + 0x5c)) = *(undefined4 *)((int)param_1 + 0x5c);
  (*(undefined4 *)(gen_frame + 0x60)) = *(undefined4 *)((int)param_1 + 0x60);
  F_0042ccf0(param_1,param_2);
  *(undefined4 *)((int)param_1 + 0x54) = *(undefined4 *)((int)param_2 + 0x54);
  *(undefined4 *)((int)param_1 + 0x58) = *(undefined4 *)((int)param_2 + 0x58);
  *(undefined4 *)((int)param_1 + 0x5c) = *(undefined4 *)((int)param_2 + 0x5c);
  *(undefined4 *)((int)param_1 + 0x60) = *(undefined4 *)((int)param_2 + 0x60);
  *(undefined1 *)((int)param_1 + 100) = *(undefined1 *)((int)param_2 + 100);
  F_0042ccf0(param_2,((undefined1 *)(gen_frame + 0x0)));
  *(undefined4 *)((int)param_2 + 0x58) = (*(undefined4 *)(gen_frame + 0x58));
  *(undefined4 *)((int)param_2 + 0x54) = (*(undefined4 *)(gen_frame + 0x54));
  *(undefined4 *)((int)param_2 + 0x5c) = (*(undefined4 *)(gen_frame + 0x5c));
  *(undefined4 *)((int)param_2 + 0x60) = (*(undefined4 *)(gen_frame + 0x60));
  *(undefined1 *)((int)param_2 + 100) = (*(undefined1 *)(gen_frame + 0x64));
  uVar1 = F_0042c880(((undefined1 *)(gen_frame + 0x0)));
  F_00c47745((*(uint *)(gen_frame + 0x68)) ^ (uint)(uint)(gen_frame + 0x6c));
  return (uint)uVar1;
}

/* ref: FUN_00941810 */
unsigned int F_00941810(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x941810u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  uint uVar2;
  undefined * pvVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_2;
  while( true ) {
    iVar4 = iVar5 * 2 + 2;
    if (param_3 <= iVar4) break;
    iVar1 = iVar4 * 0x68 + param_1;
    uVar2 = (*param_5)(iVar1,iVar1 + -0x68);
    if ((char)uVar2 != '\0') {
      iVar4 = iVar5 * 2 + 1;
    }
    pvVar3 = (undefined *)(iVar5 * 0x68 + param_1);
    iVar5 = param_1 + iVar4 * 0x68;
    F_0042ccf0(pvVar3,iVar5);
    *(undefined4 *)((int)pvVar3 + 0x54) = *(undefined4 *)(iVar5 + 0x54);
    *(undefined4 *)((int)pvVar3 + 0x58) = *(undefined4 *)(iVar5 + 0x58);
    *(undefined4 *)((int)pvVar3 + 0x5c) = *(undefined4 *)(iVar5 + 0x5c);
    *(undefined4 *)((int)pvVar3 + 0x60) = *(undefined4 *)(iVar5 + 0x60);
    *(undefined1 *)((int)pvVar3 + 100) = *(undefined1 *)(iVar5 + 100);
    iVar5 = iVar4;
  }
  if (iVar4 == param_3) {
    iVar4 = param_3 * 0x68 + -0x68 + param_1;
    pvVar3 = (undefined *)(iVar5 * 0x68 + param_1);
    F_0042ccf0(pvVar3,iVar4);
    *(undefined4 *)((int)pvVar3 + 0x54) = *(undefined4 *)(iVar4 + 0x54);
    *(undefined4 *)((int)pvVar3 + 0x58) = *(undefined4 *)(iVar4 + 0x58);
    *(undefined4 *)((int)pvVar3 + 0x5c) = *(undefined4 *)(iVar4 + 0x5c);
    *(undefined4 *)((int)pvVar3 + 0x60) = *(undefined4 *)(iVar4 + 0x60);
    *(undefined1 *)((int)pvVar3 + 100) = *(undefined1 *)(iVar4 + 100);
    iVar5 = param_3 + -1;
  }
  F_0091ff10(param_1,iVar5,param_2,param_4,param_5);
  return 0;
}

/* ref: FUN_009418e0 */
uint F_009418e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9418e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 in_ECX = 0;
  
  uVar1 = F_0091ffb0(param_1,param_2,param_3,in_ECX);
  return uVar1;
}

/* ref: FUN_00941900 */
uint F_00941900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x941900u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00941920 */
uint F_00941920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x941920u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  while( true ) {
    iVar3 = iVar2 * 2 + 2;
    if (param_3 <= iVar3) break;
    uVar1 = (*param_5)(*(undefined4 *)(param_1 + iVar3 * 4),
                       *(undefined4 *)(param_1 + -4 + iVar3 * 4));
    if ((char)uVar1 != '\0') {
      iVar3 = iVar2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    iVar2 = iVar3;
  }
  if (iVar3 == param_3) {
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar2 = param_3 + -1;
  }
  if (param_2 < iVar2) {
    do {
      iVar3 = (iVar2 + -1) / 2;
      uVar1 = (*param_5)(*(undefined4 *)(param_1 + iVar3 * 4),*param_4);
      if ((char)uVar1 == '\0') {
        *(uint *)(param_1 + iVar2 * 4) = *param_4;
        return uVar1;
      }
      *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
      iVar2 = iVar3;
    } while (param_2 < iVar3);
    *(uint *)(param_1 + iVar3 * 4) = *param_4;
    return (uint)param_4;
  }
  uVar1 = *param_4;
  *(uint *)(param_1 + iVar2 * 4) = uVar1;
  return uVar1;
}

/* ref: FUN_009419e0 */
uint F_009419e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9419e0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2 - param_1 >> 2;
  uVar2 = param_3 + iVar1 * -4;
  F_00c46e20(uVar2,param_1,iVar1 * 4);
  return uVar2;
}

/* ref: FUN_00941a10 */
unsigned int F_00941a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x941a10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return 0;
}

/* ref: FUN_00941a40 */
unsigned int F_00941a40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x941a40u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = param_2;
  while( true ) {
    iVar4 = iVar1 * 2 + 2;
    if (param_3 <= iVar4) break;
    iVar2 = param_1 + iVar4 * 8;
    uVar3 = (*param_5)(iVar2,iVar2 + -8);
    if ((char)uVar3 != '\0') {
      iVar4 = iVar1 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 + iVar4 * 8);
    *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 + 4 + iVar4 * 8);
    iVar1 = iVar4;
  }
  if (iVar4 == param_3) {
    *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 + -8 + param_3 * 8);
    *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 + -4 + param_3 * 8);
    iVar1 = param_3 + -1;
  }
  while (param_2 < iVar1) {
    iVar4 = (iVar1 + -1) / 2;
    uVar3 = (*param_5)(param_1 + iVar4 * 8,param_4);
    if ((char)uVar3 == '\0') break;
    *(undefined4 *)(param_1 + iVar1 * 8) = *(undefined4 *)(param_1 + iVar4 * 8);
    *(undefined4 *)(param_1 + 4 + iVar1 * 8) = *(undefined4 *)(param_1 + 4 + iVar4 * 8);
    iVar1 = iVar4;
  }
  *(undefined4 *)(param_1 + iVar1 * 8) = *param_4;
  *(undefined4 *)(param_1 + 4 + iVar1 * 8) = param_4[1];
  return 0;
}

/* ref: FUN_00941b00 */
unsigned int F_00941b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x941b00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  return 0;
}

/* ref: FUN_00941b40 */
uint F_00941b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x941b40u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = param_2;
  while( true ) {
    iVar6 = iVar1 * 2 + 2;
    if (param_3 <= iVar6) break;
    iVar2 = param_1 + iVar6 * 0xc;
    uVar5 = (*param_5)(iVar2,iVar2 + -0xc);
    if ((char)uVar5 != '\0') {
      iVar6 = iVar1 * 2 + 1;
    }
    puVar3 = (undefined4 *)(param_1 + iVar6 * 0xc);
    puVar4 = (undefined4 *)(param_1 + iVar1 * 0xc);
    *puVar4 = *puVar3;
    puVar4[1] = puVar3[1];
    puVar4[2] = puVar3[2];
    iVar1 = iVar6;
  }
  if (iVar6 == param_3) {
    iVar6 = param_1 + -0xc + param_3 * 0xc;
    puVar3 = (undefined4 *)(param_1 + iVar1 * 0xc);
    *puVar3 = *(undefined4 *)(param_1 + -0xc + param_3 * 0xc);
    puVar3[1] = *(undefined4 *)(iVar6 + 4);
    puVar3[2] = *(undefined4 *)(iVar6 + 8);
    iVar1 = param_3 + -1;
  }
  while (param_2 < iVar1) {
    iVar6 = (iVar1 + -1) / 2;
    puVar3 = (undefined4 *)(param_1 + iVar6 * 0xc);
    uVar5 = (*param_5)(puVar3,param_4);
    if ((char)uVar5 == '\0') break;
    puVar4 = (undefined4 *)(param_1 + iVar1 * 0xc);
    *puVar4 = *puVar3;
    puVar4[1] = puVar3[1];
    puVar4[2] = puVar3[2];
    iVar1 = iVar6;
  }
  puVar3 = (undefined4 *)(param_1 + iVar1 * 0xc);
  *puVar3 = *param_4;
  puVar3[1] = param_4[1];
  uVar5 = param_4[2];
  puVar3[2] = uVar5;
  return uVar5;
}

/* ref: FUN_00941c40 */
unsigned int F_00941c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x941c40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = uVar2;
  *(undefined4 *)(param_2 + 4) = uVar1;
  return 0;
}

/* ref: FUN_00941c70 */
unsigned int F_00941c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x941c70u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar2 = *(undefined4 *)(param_1 + 0x10);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  uVar1 = *(undefined1 *)(param_1 + 0x14);
  uVar4 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  uVar5 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(param_2 + 0x14);
  *(undefined4 *)(param_2 + 8) = uVar5;
  *(undefined4 *)(param_2 + 4) = uVar4;
  *(undefined4 *)(param_2 + 0xc) = uVar3;
  *(undefined4 *)(param_2 + 0x10) = uVar2;
  *(undefined1 *)(param_2 + 0x14) = uVar1;
  return 0;
}

/* ref: FUN_00941cd0 */
unsigned int F_00941cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x941cd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  uVar3 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_2 + 0xc) = uVar3;
  *(undefined4 *)(param_2 + 8) = uVar2;
  *(undefined4 *)(param_2 + 4) = uVar1;
  return 0;
}

/* ref: FUN_00941d10 */
uint F_00941d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x941d10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00941d30 */
uint F_00941d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x941d30u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  while( true ) {
    iVar3 = iVar2 * 2 + 2;
    if (param_3 <= iVar3) break;
    uVar1 = (*param_5)(*(undefined4 *)(param_1 + iVar3 * 4),
                       *(undefined4 *)(param_1 + -4 + iVar3 * 4));
    if ((char)uVar1 != '\0') {
      iVar3 = iVar2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    iVar2 = iVar3;
  }
  if (iVar3 == param_3) {
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar2 = param_3 + -1;
  }
  if (param_2 < iVar2) {
    do {
      iVar3 = (iVar2 + -1) / 2;
      uVar1 = (*param_5)(*(undefined4 *)(param_1 + iVar3 * 4),*param_4);
      if ((char)uVar1 == '\0') {
        *(uint *)(param_1 + iVar2 * 4) = *param_4;
        return uVar1;
      }
      *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
      iVar2 = iVar3;
    } while (param_2 < iVar3);
    *(uint *)(param_1 + iVar3 * 4) = *param_4;
    return (uint)param_4;
  }
  uVar1 = *param_4;
  *(uint *)(param_1 + iVar2 * 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00941df0 */
uint F_00941df0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x941df0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2 - param_1 >> 2;
  uVar2 = param_3 + iVar1 * -4;
  F_00c46e20(uVar2,param_1,iVar1 * 4);
  return uVar2;
}

/* ref: FUN_00941e20 */
uint F_00941e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x941e20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00941e40 */
uint F_00941e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x941e40u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  while( true ) {
    iVar3 = iVar2 * 2 + 2;
    if (param_3 <= iVar3) break;
    uVar1 = (*param_5)(*(undefined4 *)(param_1 + iVar3 * 4),
                       *(undefined4 *)(param_1 + -4 + iVar3 * 4));
    if ((char)uVar1 != '\0') {
      iVar3 = iVar2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    iVar2 = iVar3;
  }
  if (iVar3 == param_3) {
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar2 = param_3 + -1;
  }
  if (param_2 < iVar2) {
    do {
      iVar3 = (iVar2 + -1) / 2;
      uVar1 = (*param_5)(*(undefined4 *)(param_1 + iVar3 * 4),*param_4);
      if ((char)uVar1 == '\0') {
        *(uint *)(param_1 + iVar2 * 4) = *param_4;
        return uVar1;
      }
      *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
      iVar2 = iVar3;
    } while (param_2 < iVar3);
    *(uint *)(param_1 + iVar3 * 4) = *param_4;
    return (uint)param_4;
  }
  uVar1 = *param_4;
  *(uint *)(param_1 + iVar2 * 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00941f00 */
uint F_00941f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x941f00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2 - param_1 >> 2;
  uVar2 = param_3 + iVar1 * -4;
  F_00c46e20(uVar2,param_1,iVar1 * 4);
  return uVar2;
}

/* ref: FUN_00941f30 */
uint F_00941f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x941f30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00941f50 */
uint F_00941f50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x941f50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  while( true ) {
    iVar3 = iVar2 * 2 + 2;
    if (param_3 <= iVar3) break;
    uVar1 = (*param_5)(*(undefined4 *)(param_1 + iVar3 * 4),
                       *(undefined4 *)(param_1 + -4 + iVar3 * 4));
    if ((char)uVar1 != '\0') {
      iVar3 = iVar2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    iVar2 = iVar3;
  }
  if (iVar3 == param_3) {
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar2 = param_3 + -1;
  }
  if (param_2 < iVar2) {
    do {
      iVar3 = (iVar2 + -1) / 2;
      uVar1 = (*param_5)(*(undefined4 *)(param_1 + iVar3 * 4),*param_4);
      if ((char)uVar1 == '\0') {
        *(uint *)(param_1 + iVar2 * 4) = *param_4;
        return uVar1;
      }
      *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
      iVar2 = iVar3;
    } while (param_2 < iVar3);
    *(uint *)(param_1 + iVar3 * 4) = *param_4;
    return (uint)param_4;
  }
  uVar1 = *param_4;
  *(uint *)(param_1 + iVar2 * 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00942010 */
uint F_00942010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x942010u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2 - param_1 >> 2;
  uVar2 = param_3 + iVar1 * -4;
  F_00c46e20(uVar2,param_1,iVar1 * 4);
  return uVar2;
}

/* ref: FUN_00942040 */
uint F_00942040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x942040u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00942060 */
uint F_00942060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x942060u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_2;
  while( true ) {
    iVar3 = iVar2 * 2 + 2;
    if (param_3 <= iVar3) break;
    uVar1 = (*param_5)(*(undefined4 *)(param_1 + iVar3 * 4),
                       *(undefined4 *)(param_1 + -4 + iVar3 * 4));
    if ((char)uVar1 != '\0') {
      iVar3 = iVar2 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    iVar2 = iVar3;
  }
  if (iVar3 == param_3) {
    *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar2 = param_3 + -1;
  }
  if (param_2 < iVar2) {
    do {
      iVar3 = (iVar2 + -1) / 2;
      uVar1 = (*param_5)(*(undefined4 *)(param_1 + iVar3 * 4),*param_4);
      if ((char)uVar1 == '\0') {
        *(uint *)(param_1 + iVar2 * 4) = *param_4;
        return uVar1;
      }
      *(undefined4 *)(param_1 + iVar2 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
      iVar2 = iVar3;
    } while (param_2 < iVar3);
    *(uint *)(param_1 + iVar3 * 4) = *param_4;
    return (uint)param_4;
  }
  uVar1 = *param_4;
  *(uint *)(param_1 + iVar2 * 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00942120 */
uint F_00942120(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x942120u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2 - param_1 >> 2;
  uVar2 = param_3 + iVar1 * -4;
  F_00c46e20(uVar2,param_1,iVar1 * 4);
  return uVar2;
}

/* ref: FUN_00942150 */
uint F_00942150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x942150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00942170 */
unsigned int F_00942170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x942170u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar1 = param_1[3];
  uVar2 = *param_1;
  uVar3 = param_1[4];
  uVar4 = param_1[5];
  uVar5 = param_1[1];
  uVar6 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  *param_2 = uVar2;
  param_2[1] = uVar5;
  param_2[2] = uVar6;
  param_2[3] = uVar1;
  param_2[4] = uVar3;
  param_2[5] = uVar4;
  return 0;
}

/* ref: FUN_009421e0 */
unsigned int F_009421e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9421e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  
  iVar3 = param_2;
  while( true ) {
    iVar6 = iVar3 * 2 + 2;
    if (param_3 <= iVar6) break;
    iVar1 = param_1 + iVar6 * 0x18;
    uVar5 = (*param_5)(iVar1,iVar1 + -0x18);
    if ((char)uVar5 != '\0') {
      iVar6 = iVar3 * 2 + 1;
    }
    puVar2 = (undefined4 *)(param_1 + iVar6 * 0x18);
    *(undefined4 *)(param_1 + iVar3 * 0x18) = *puVar2;
    iVar3 = param_1 + iVar3 * 0x18;
    *(undefined4 *)(iVar3 + 4) = puVar2[1];
    *(undefined4 *)(iVar3 + 8) = puVar2[2];
    *(undefined4 *)(iVar3 + 0xc) = puVar2[3];
    *(undefined4 *)(iVar3 + 0x10) = puVar2[4];
    *(undefined4 *)(iVar3 + 0x14) = puVar2[5];
    iVar3 = iVar6;
  }
  if (iVar6 == param_3) {
    puVar4 = (undefined4 *)(param_1 + -0x18 + param_3 * 0x18);
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0x18);
    *puVar2 = *puVar4;
    puVar2[1] = puVar4[1];
    puVar2[2] = puVar4[2];
    puVar2[3] = puVar4[3];
    puVar2[4] = puVar4[4];
    puVar2[5] = puVar4[5];
    iVar3 = param_3 + -1;
  }
  while (param_2 < iVar3) {
    iVar6 = (iVar3 + -1) / 2;
    puVar2 = (undefined4 *)(param_1 + iVar6 * 0x18);
    uVar5 = (*param_5)(puVar2,param_4);
    if ((char)uVar5 == '\0') break;
    puVar4 = (undefined4 *)(param_1 + iVar3 * 0x18);
    *puVar4 = *puVar2;
    puVar4[1] = puVar2[1];
    puVar4[2] = puVar2[2];
    puVar4[3] = puVar2[3];
    puVar4[4] = puVar2[4];
    puVar4[5] = puVar2[5];
    iVar3 = iVar6;
  }
  puVar2 = (undefined4 *)(param_1 + iVar3 * 0x18);
  *puVar2 = *param_4;
  puVar2[1] = param_4[1];
  puVar2[2] = param_4[2];
  puVar2[3] = param_4[3];
  puVar2[4] = param_4[4];
  puVar2[5] = param_4[5];
  return 0;
}

/* ref: FUN_00942320 */
unsigned int F_00942320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x942320u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 in_ECX = 0;
  
  F_009205c0(param_1,param_2,param_3,in_ECX);
  return 0;
}

/* ref: FUN_00942340 */
unsigned int F_00942340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x942340u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  return 0;
}

/* ref: FUN_00942380 */
uint F_00942380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x942380u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = param_2;
  while( true ) {
    iVar6 = iVar1 * 2 + 2;
    if (param_3 <= iVar6) break;
    iVar2 = param_1 + iVar6 * 0xc;
    uVar5 = (*param_5)(iVar2,iVar2 + -0xc);
    if ((char)uVar5 != '\0') {
      iVar6 = iVar1 * 2 + 1;
    }
    puVar3 = (undefined4 *)(param_1 + iVar6 * 0xc);
    puVar4 = (undefined4 *)(param_1 + iVar1 * 0xc);
    *puVar4 = *puVar3;
    puVar4[1] = puVar3[1];
    puVar4[2] = puVar3[2];
    iVar1 = iVar6;
  }
  if (iVar6 == param_3) {
    iVar6 = param_1 + -0xc + param_3 * 0xc;
    puVar3 = (undefined4 *)(param_1 + iVar1 * 0xc);
    *puVar3 = *(undefined4 *)(param_1 + -0xc + param_3 * 0xc);
    puVar3[1] = *(undefined4 *)(iVar6 + 4);
    puVar3[2] = *(undefined4 *)(iVar6 + 8);
    iVar1 = param_3 + -1;
  }
  while (param_2 < iVar1) {
    iVar6 = (iVar1 + -1) / 2;
    puVar3 = (undefined4 *)(param_1 + iVar6 * 0xc);
    uVar5 = (*param_5)(puVar3,param_4);
    if ((char)uVar5 == '\0') break;
    puVar4 = (undefined4 *)(param_1 + iVar1 * 0xc);
    *puVar4 = *puVar3;
    puVar4[1] = puVar3[1];
    puVar4[2] = puVar3[2];
    iVar1 = iVar6;
  }
  puVar3 = (undefined4 *)(param_1 + iVar1 * 0xc);
  *puVar3 = *param_4;
  puVar3[1] = param_4[1];
  uVar5 = param_4[2];
  puVar3[2] = uVar5;
  return uVar5;
}

/* ref: FUN_00942480 */
unsigned int F_00942480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x942480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = param_1[3];
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *param_2 = uVar2;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar1;
  return 0;
}

/* ref: FUN_009424d0 */
unsigned int F_009424d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9424d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_2;
  while( true ) {
    iVar6 = iVar5 * 2 + 2;
    if (param_3 <= iVar6) break;
    iVar1 = iVar6 * 0x10 + param_1;
    uVar2 = (*param_5)(iVar1,iVar1 + -0x10);
    if ((char)uVar2 != '\0') {
      iVar6 = iVar5 * 2 + 1;
    }
    iVar1 = iVar6 * 0x10 + param_1;
    puVar4 = (undefined4 *)(iVar5 * 0x10 + param_1);
    *puVar4 = *(undefined4 *)(iVar6 * 0x10 + param_1);
    puVar4[1] = *(undefined4 *)(iVar1 + 4);
    puVar4[2] = *(undefined4 *)(iVar1 + 8);
    puVar4[3] = *(undefined4 *)(iVar1 + 0xc);
    iVar5 = iVar6;
  }
  if (iVar6 == param_3) {
    iVar6 = param_1 + -0x10 + param_3 * 0x10;
    puVar4 = (undefined4 *)(iVar5 * 0x10 + param_1);
    *puVar4 = *(undefined4 *)(param_1 + -0x10 + param_3 * 0x10);
    puVar4[1] = *(undefined4 *)(iVar6 + 4);
    puVar4[2] = *(undefined4 *)(iVar6 + 8);
    iVar5 = param_3 + -1;
    puVar4[3] = *(undefined4 *)(iVar6 + 0xc);
  }
  while (param_2 < iVar5) {
    iVar6 = (iVar5 + -1) / 2;
    puVar4 = (undefined4 *)(iVar6 * 0x10 + param_1);
    uVar2 = (*param_5)(puVar4,param_4);
    if ((char)uVar2 == '\0') break;
    puVar3 = (undefined4 *)(iVar5 * 0x10 + param_1);
    *puVar3 = *puVar4;
    puVar3[1] = puVar4[1];
    puVar3[2] = puVar4[2];
    puVar3[3] = puVar4[3];
    iVar5 = iVar6;
  }
  puVar4 = (undefined4 *)(param_1 + iVar5 * 0x10);
  *puVar4 = *param_4;
  puVar4[1] = param_4[1];
  puVar4[2] = param_4[2];
  puVar4[3] = param_4[3];
  return 0;
}

/* ref: FUN_00942600 */
unsigned int F_00942600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x942600u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *param_2 = uVar1;
  param_2[1] = uVar2;
  param_2[2] = uVar3;
  return 0;
}

/* ref: FUN_00942640 */
uint F_00942640(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x942640u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = param_2;
  while( true ) {
    iVar6 = iVar1 * 2 + 2;
    if (param_3 <= iVar6) break;
    iVar2 = param_1 + iVar6 * 0xc;
    uVar5 = (*param_5)(iVar2,iVar2 + -0xc);
    if ((char)uVar5 != '\0') {
      iVar6 = iVar1 * 2 + 1;
    }
    puVar3 = (undefined4 *)(param_1 + iVar6 * 0xc);
    puVar4 = (undefined4 *)(param_1 + iVar1 * 0xc);
    *puVar4 = *puVar3;
    puVar4[1] = puVar3[1];
    puVar4[2] = puVar3[2];
    iVar1 = iVar6;
  }
  if (iVar6 == param_3) {
    iVar6 = param_1 + -0xc + param_3 * 0xc;
    puVar3 = (undefined4 *)(param_1 + iVar1 * 0xc);
    *puVar3 = *(undefined4 *)(param_1 + -0xc + param_3 * 0xc);
    puVar3[1] = *(undefined4 *)(iVar6 + 4);
    puVar3[2] = *(undefined4 *)(iVar6 + 8);
    iVar1 = param_3 + -1;
  }
  while (param_2 < iVar1) {
    iVar6 = (iVar1 + -1) / 2;
    puVar3 = (undefined4 *)(param_1 + iVar6 * 0xc);
    uVar5 = (*param_5)(puVar3,param_4);
    if ((char)uVar5 == '\0') break;
    puVar4 = (undefined4 *)(param_1 + iVar1 * 0xc);
    *puVar4 = *puVar3;
    puVar4[1] = puVar3[1];
    puVar4[2] = puVar3[2];
    iVar1 = iVar6;
  }
  puVar3 = (undefined4 *)(param_1 + iVar1 * 0xc);
  *puVar3 = *param_4;
  puVar3[1] = param_4[1];
  uVar5 = param_4[2];
  puVar3[2] = uVar5;
  return uVar5;
}

/* ref: FUN_00942740 */
unsigned int F_00942740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x942740u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = param_1[3];
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *param_2 = uVar2;
  param_2[1] = uVar3;
  param_2[2] = uVar4;
  param_2[3] = uVar1;
  return 0;
}

/* ref: FUN_00942790 */
unsigned int F_00942790(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x942790u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = param_2;
  while( true ) {
    iVar6 = iVar5 * 2 + 2;
    if (param_3 <= iVar6) break;
    iVar1 = iVar6 * 0x10 + param_1;
    uVar2 = (*param_5)(iVar1,iVar1 + -0x10);
    if ((char)uVar2 != '\0') {
      iVar6 = iVar5 * 2 + 1;
    }
    iVar1 = iVar6 * 0x10 + param_1;
    puVar4 = (undefined4 *)(iVar5 * 0x10 + param_1);
    *puVar4 = *(undefined4 *)(iVar6 * 0x10 + param_1);
    puVar4[1] = *(undefined4 *)(iVar1 + 4);
    puVar4[2] = *(undefined4 *)(iVar1 + 8);
    puVar4[3] = *(undefined4 *)(iVar1 + 0xc);
    iVar5 = iVar6;
  }
  if (iVar6 == param_3) {
    iVar6 = param_1 + -0x10 + param_3 * 0x10;
    puVar4 = (undefined4 *)(iVar5 * 0x10 + param_1);
    *puVar4 = *(undefined4 *)(param_1 + -0x10 + param_3 * 0x10);
    puVar4[1] = *(undefined4 *)(iVar6 + 4);
    puVar4[2] = *(undefined4 *)(iVar6 + 8);
    iVar5 = param_3 + -1;
    puVar4[3] = *(undefined4 *)(iVar6 + 0xc);
  }
  while (param_2 < iVar5) {
    iVar6 = (iVar5 + -1) / 2;
    puVar4 = (undefined4 *)(iVar6 * 0x10 + param_1);
    uVar2 = (*param_5)(puVar4,param_4);
    if ((char)uVar2 == '\0') break;
    puVar3 = (undefined4 *)(iVar5 * 0x10 + param_1);
    *puVar3 = *puVar4;
    puVar3[1] = puVar4[1];
    puVar3[2] = puVar4[2];
    puVar3[3] = puVar4[3];
    iVar5 = iVar6;
  }
  puVar4 = (undefined4 *)(param_1 + iVar5 * 0x10);
  *puVar4 = *param_4;
  puVar4[1] = param_4[1];
  puVar4[2] = param_4[2];
  puVar4[3] = param_4[3];
  return 0;
}

/* ref: FUN_009428c0 */
unsigned int F_009428c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9428c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  uVar1 = param_1[3];
  uVar2 = *param_1;
  uVar3 = param_1[4];
  uVar4 = param_1[1];
  uVar5 = param_1[2];
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *param_2 = uVar2;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar1;
  param_2[4] = uVar3;
  return 0;
}

/* ref: FUN_00942920 */
unsigned int F_00942920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x942920u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  undefined4 * puVar2;
  int iVar3;
  undefined4 * puVar4;
  uint uVar5;
  int iVar6;
  
  iVar3 = param_2;
  while( true ) {
    iVar6 = iVar3 * 2 + 2;
    if (param_3 <= iVar6) break;
    iVar1 = param_1 + iVar6 * 0x14;
    uVar5 = (*param_5)(iVar1,iVar1 + -0x14);
    if ((char)uVar5 != '\0') {
      iVar6 = iVar3 * 2 + 1;
    }
    puVar2 = (undefined4 *)(param_1 + iVar6 * 0x14);
    *(undefined4 *)(param_1 + iVar3 * 0x14) = *puVar2;
    iVar3 = param_1 + iVar3 * 0x14;
    *(undefined4 *)(iVar3 + 4) = puVar2[1];
    *(undefined4 *)(iVar3 + 8) = puVar2[2];
    *(undefined4 *)(iVar3 + 0xc) = puVar2[3];
    *(undefined4 *)(iVar3 + 0x10) = puVar2[4];
    iVar3 = iVar6;
  }
  if (iVar6 == param_3) {
    puVar4 = (undefined4 *)(param_1 + -0x14 + param_3 * 0x14);
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0x14);
    *puVar2 = *puVar4;
    puVar2[1] = puVar4[1];
    puVar2[2] = puVar4[2];
    puVar2[3] = puVar4[3];
    puVar2[4] = puVar4[4];
    iVar3 = param_3 + -1;
  }
  while (param_2 < iVar3) {
    iVar6 = (iVar3 + -1) / 2;
    puVar2 = (undefined4 *)(param_1 + iVar6 * 0x14);
    uVar5 = (*param_5)(puVar2,param_4);
    if ((char)uVar5 == '\0') break;
    puVar4 = (undefined4 *)(param_1 + iVar3 * 0x14);
    *puVar4 = *puVar2;
    puVar4[1] = puVar2[1];
    puVar4[2] = puVar2[2];
    puVar4[3] = puVar2[3];
    puVar4[4] = puVar2[4];
    iVar3 = iVar6;
  }
  puVar2 = (undefined4 *)(param_1 + iVar3 * 0x14);
  *puVar2 = *param_4;
  puVar2[1] = param_4[1];
  puVar2[2] = param_4[2];
  puVar2[3] = param_4[3];
  puVar2[4] = param_4[4];
  return 0;
}

/* ref: FUN_00942a50 */
unsigned int F_00942a50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x942a50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return 0;
}

/* ref: std::_Cons_val<std__allocator<std___Container_proxy>,std___Container_proxy,std___Container_proxy>_00942a80 */
unsigned int F_00942a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x942a80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined * param_2 = (undefined *)(uintptr_t)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  if (param_2 != (undefined *)0x0) {
    *(undefined4 *)param_2 = *(undefined4 *)param_3;
    *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_3 + 4);
  }
  return 0;
}

/* ref: FUN_00942ac0 */
unsigned int F_00942ac0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x942ac0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 + -0x14) {
    puVar1[-5] = *(undefined4 *)(iVar2 + -0x14);
    puVar1[-4] = *(undefined4 *)(iVar2 + -0x10);
    puVar1[-3] = *(undefined4 *)(iVar2 + -0xc);
    puVar1[-2] = *(undefined4 *)(iVar2 + -8);
    puVar1[-1] = *(undefined4 *)(iVar2 + -4);
    puVar1 = puVar1 + -5;
  }
  return 0;
}

/* ref: FUN_00942b00 */
unsigned int F_00942b00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x942b00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 + -0x14) {
    puVar1[-5] = *(undefined4 *)(iVar2 + -0x14);
    puVar1[-4] = *(undefined4 *)(iVar2 + -0x10);
    puVar1[-3] = *(undefined4 *)(iVar2 + -0xc);
    puVar1[-2] = *(undefined4 *)(iVar2 + -8);
    puVar1[-1] = *(undefined4 *)(iVar2 + -4);
    puVar1 = puVar1 + -5;
  }
  return 0;
}

/* ref: FUN_00942b40 */
unsigned int F_00942b40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x942b40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 + -8) {
    puVar1[-2] = *(undefined4 *)(iVar2 + -8);
    puVar1[-1] = *(undefined4 *)(iVar2 + -4);
    puVar1 = puVar1 + -2;
  }
  return 0;
}

/* ref: FUN_00942b70 */
unsigned int F_00942b70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x942b70u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 + -0xc) {
    puVar1[-3] = *(undefined4 *)(iVar2 + -0xc);
    puVar1[-2] = *(undefined4 *)(iVar2 + -8);
    puVar1[-1] = *(undefined4 *)(iVar2 + -4);
    puVar1 = puVar1 + -3;
  }
  return 0;
}

/* ref: FUN_00942ba0 */
uint F_00942ba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x942ba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = param_2;
  while (param_3 < iVar2) {
    iVar4 = (iVar2 + -1) / 2;
    iVar1 = param_1 + iVar4 * 0xc;
    uVar3 = (*param_5)(iVar1,param_4);
    if ((char)uVar3 == '\0') break;
    iVar2 = param_1 + iVar2 * 0xc;
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 8);
    iVar2 = iVar4;
  }
  uVar3 = param_1 + iVar2 * 0xc;
  *(undefined4 *)(uVar3 + 4) = *(undefined4 *)(param_4 + 4);
  *(undefined4 *)(uVar3 + 8) = *(undefined4 *)(param_4 + 8);
  return uVar3;
}

/* ref: FUN_00942c20 */
uint F_00942c20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x942c20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    uVar2 = param_3;
    puVar4 = param_2 + 2;
    do {
      uVar3 = uVar2 - 0xc;
      *(undefined4 *)(uVar2 - 8) = puVar4[-4];
      *(undefined4 *)(uVar2 - 4) = puVar4[-3];
      puVar1 = puVar4 + -5;
      uVar2 = uVar3;
      puVar4 = puVar4 + -3;
    } while (puVar1 != param_1);
    return uVar3;
  }
  return param_3;
}

/* ref: FUN_00942c60 */
unsigned int F_00942c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x942c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = param_2;
  while (param_3 < iVar2) {
    iVar4 = (iVar2 + -1) / 2;
    iVar1 = param_1 + iVar4 * 0x18;
    uVar3 = (*param_5)(iVar1,param_4);
    if ((char)uVar3 == '\0') break;
    iVar2 = param_1 + iVar2 * 0x18;
    *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar1 + 0x10);
    *(undefined1 *)(iVar2 + 0x14) = *(undefined1 *)(iVar1 + 0x14);
    iVar2 = iVar4;
  }
  iVar2 = param_1 + iVar2 * 0x18;
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_4 + 4);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_4 + 8);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_4 + 0xc);
  *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(param_4 + 0x10);
  *(undefined1 *)(iVar2 + 0x14) = *(undefined1 *)(param_4 + 0x14);
  return 0;
}

/* ref: FUN_00942d00 */
uint F_00942d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x942d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    uVar2 = param_3;
    puVar4 = param_2 + 2;
    do {
      uVar3 = uVar2 - 0x18;
      *(undefined4 *)(uVar2 - 0x14) = puVar4[-7];
      *(undefined4 *)(uVar2 - 0x10) = puVar4[-6];
      *(undefined4 *)(uVar2 - 0xc) = puVar4[-5];
      *(undefined4 *)(uVar2 - 8) = puVar4[-4];
      *(undefined1 *)(uVar2 - 4) = *(undefined1 *)(puVar4 + -3);
      puVar1 = puVar4 + -8;
      uVar2 = uVar3;
      puVar4 = puVar4 + -6;
    } while (puVar1 != param_1);
    return uVar3;
  }
  return param_3;
}

/* ref: FUN_00942d50 */
uint F_00942d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x942d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  code * param_5 = (code *)(uintptr_t)gen_a4;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_2;
  while (param_3 < iVar2) {
    iVar3 = (iVar2 + -1) / 2;
    iVar4 = iVar3 * 0x10 + param_1;
    uVar1 = (*param_5)(iVar4,param_4);
    if ((char)uVar1 == '\0') break;
    *(undefined4 *)(param_1 + 4 + iVar2 * 0x10) = *(undefined4 *)(iVar4 + 4);
    *(undefined4 *)(param_1 + 8 + iVar2 * 0x10) = *(undefined4 *)(iVar4 + 8);
    *(undefined4 *)(param_1 + 0xc + iVar2 * 0x10) = *(undefined4 *)(iVar4 + 0xc);
    iVar2 = iVar3;
  }
  iVar2 = iVar2 * 0x10 + param_1;
  *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_4 + 4);
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(param_4 + 8);
  uVar1 = *(uint *)(param_4 + 0xc);
  *(uint *)(iVar2 + 0xc) = uVar1;
  return uVar1;
}

/* ref: FUN_00942dd0 */
uint F_00942dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x942dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  if (param_1 != param_2) {
    uVar2 = param_3;
    puVar4 = param_2 + 2;
    do {
      uVar3 = uVar2 - 0x10;
      *(undefined4 *)(uVar2 - 0xc) = puVar4[-5];
      *(undefined4 *)(uVar2 - 8) = puVar4[-4];
      *(undefined4 *)(uVar2 - 4) = puVar4[-3];
      puVar1 = puVar4 + -6;
      uVar2 = uVar3;
      puVar4 = puVar4 + -4;
    } while (puVar1 != param_1);
    return uVar3;
  }
  return param_3;
}

/* ref: FUN_00942e10 */
unsigned int F_00942e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x942e10u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 + -0xc) {
    puVar1[-3] = *(undefined4 *)(iVar2 + -0xc);
    puVar1[-2] = *(undefined4 *)(iVar2 + -8);
    puVar1[-1] = *(undefined4 *)(iVar2 + -4);
    puVar1 = puVar1 + -3;
  }
  return 0;
}

/* ref: FUN_00942e40 */
unsigned int F_00942e40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x942e40u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 + -0x10) {
    puVar1[-4] = *(undefined4 *)(iVar2 + -0x10);
    puVar1[-3] = *(undefined4 *)(iVar2 + -0xc);
    puVar1[-2] = *(undefined4 *)(iVar2 + -8);
    puVar1[-1] = *(undefined4 *)(iVar2 + -4);
    puVar1 = puVar1 + -4;
  }
  return 0;
}

/* ref: FUN_00942e80 */
unsigned int F_00942e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x942e80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 + -0xc) {
    puVar1[-3] = *(undefined4 *)(iVar2 + -0xc);
    puVar1[-2] = *(undefined4 *)(iVar2 + -8);
    puVar1[-1] = *(undefined4 *)(iVar2 + -4);
    puVar1 = puVar1 + -3;
  }
  return 0;
}

/* ref: FUN_00942eb0 */
unsigned int F_00942eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x942eb0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 + -0x10) {
    puVar1[-4] = *(undefined4 *)(iVar2 + -0x10);
    puVar1[-3] = *(undefined4 *)(iVar2 + -0xc);
    puVar1[-2] = *(undefined4 *)(iVar2 + -8);
    puVar1[-1] = *(undefined4 *)(iVar2 + -4);
    puVar1 = puVar1 + -4;
  }
  return 0;
}

/* ref: FUN_00942ef0 */
unsigned int F_00942ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x942ef0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  
  puVar1 = param_3;
  for (iVar2 = param_2; param_1 != iVar2; iVar2 = iVar2 + -0x14) {
    puVar1[-5] = *(undefined4 *)(iVar2 + -0x14);
    puVar1[-4] = *(undefined4 *)(iVar2 + -0x10);
    puVar1[-3] = *(undefined4 *)(iVar2 + -0xc);
    puVar1[-2] = *(undefined4 *)(iVar2 + -8);
    puVar1[-1] = *(undefined4 *)(iVar2 + -4);
    puVar1 = puVar1 + -5;
  }
  return 0;
}

/* ref: FUN_00942f30 */
unsigned int F_00942f30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x942f30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  param_3[3] = param_1[3];
  param_3[4] = param_1[4];
  F_009411c0(param_1,0,(param_2 - (int)param_1) / 0x14,param_4,param_5);
  return 0;
}

/* ref: FUN_00942f90 */
unsigned int F_00942f90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x942f90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  param_3[3] = param_1[3];
  param_3[4] = param_1[4];
  F_00941350(param_1,0,(param_2 - (int)param_1) / 0x14,param_4,param_5);
  return 0;
}

/* ref: FUN_00942ff0 */
unsigned int F_00942ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x942ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  F_009414b0(param_1,0,param_2 - (int)((int)(uintptr_t)param_1) >> 3,param_4,param_5);
  return 0;
}

/* ref: FUN_00943030 */
uint F_00943030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x943030u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  F_0042ccf0(param_3,param_1);
  *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)param_3 + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)((int)param_3 + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((int)param_3 + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)((int)param_3 + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)((int)param_3 + 0x68) = *(undefined4 *)(param_1 + 0x68);
  uVar1 = F_00941660(param_1,0,(param_2 - param_1) / 0x6c,param_4,param_5);
  return uVar1;
}

/* ref: FUN_009430a0 */
unsigned int F_009430a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9430a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined * param_3 = (undefined *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  F_0042ccf0(param_3,param_1);
  *(undefined4 *)((int)param_3 + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)param_3 + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)((int)param_3 + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((int)param_3 + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined1 *)((int)param_3 + 100) = *(undefined1 *)(param_1 + 100);
  F_00941810(param_1,0,(param_2 - param_1) / 0x68,param_4,param_5);
  return 0;
}

/* ref: FUN_00943100 */
uint F_00943100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x943100u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  *param_3 = *param_1;
  uVar1 = F_00941920(param_1,0,param_2 - (int)((int)(uintptr_t)param_1) >> 2,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00943130 */
unsigned int F_00943130(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x943130u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  F_00941a40(param_1,0,param_2 - (int)((int)(uintptr_t)param_1) >> 3,param_4,param_5);
  return 0;
}

/* ref: FUN_00943170 */
uint F_00943170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x943170u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  uVar1 = F_00941b40(param_1,0,(param_2 - (int)param_1) / 0xc,param_4,param_5);
  return uVar1;
}

/* ref: FUN_009431c0 */
uint F_009431c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9431c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  *param_3 = *param_1;
  uVar1 = F_00941d30(param_1,0,param_2 - (int)((int)(uintptr_t)param_1) >> 2,param_4,param_5);
  return uVar1;
}

/* ref: FUN_009431f0 */
uint F_009431f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9431f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  *param_3 = *param_1;
  uVar1 = F_00941e40(param_1,0,param_2 - (int)((int)(uintptr_t)param_1) >> 2,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00943220 */
uint F_00943220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x943220u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  *param_3 = *param_1;
  uVar1 = F_00941f50(param_1,0,param_2 - (int)((int)(uintptr_t)param_1) >> 2,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00943250 */
uint F_00943250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x943250u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  *param_3 = *param_1;
  uVar1 = F_00942060(param_1,0,param_2 - (int)((int)(uintptr_t)param_1) >> 2,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00943280 */
unsigned int F_00943280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x943280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  param_3[3] = param_1[3];
  param_3[4] = param_1[4];
  param_3[5] = param_1[5];
  F_009421e0(param_1,0,(param_2 - (int)param_1) / 0x18,param_4,param_5);
  return 0;
}

/* ref: FUN_009432e0 */
uint F_009432e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9432e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  uVar1 = F_00942380(param_1,0,(param_2 - (int)param_1) / 0xc,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00943330 */
unsigned int F_00943330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x943330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  param_3[3] = param_1[3];
  F_009424d0(param_1,0,param_2 - (int)((int)(uintptr_t)param_1) >> 4,param_4,param_5);
  return 0;
}

/* ref: FUN_00943370 */
uint F_00943370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x943370u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  uVar1 = F_00942640(param_1,0,(param_2 - (int)param_1) / 0xc,param_4,param_5);
  return uVar1;
}

/* ref: FUN_009433c0 */
unsigned int F_009433c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9433c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  param_3[3] = param_1[3];
  F_00942790(param_1,0,param_2 - (int)((int)(uintptr_t)param_1) >> 4,param_4,param_5);
  return 0;
}

/* ref: FUN_00943400 */
unsigned int F_00943400(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x943400u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  param_3[2] = param_1[2];
  param_3[3] = param_1[3];
  param_3[4] = param_1[4];
  F_00942920(param_1,0,(param_2 - (int)param_1) / 0x14,param_4,param_5);
  return 0;
}

/* ref: FUN_00943460 */
uint F_00943460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00561490(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == 0x10) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_009434a0 */
uint F_009434a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9434a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0055e2f0(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == 1) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: FUN_009434e0 */
uint F_009434e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9434e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_0055e2f0(this,param_1);
  if (uVar1 == 0) {
    return 0;
  }
  uVar1 = F_00559c20(uVar1);
  if (uVar1 != 0) {
    uVar2 = F_005613a0(uVar1);
    if (uVar2 == 0xf) {
      return uVar1;
    }
  }
  return 0;
}

/* ref: Client::UI2::Agent::AgentInterface::vf0 */
uint F_00943520(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943520u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00943570 */
unsigned int F_00943570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return 0;
}

/* ref: Client::UI2::ExdSheetWaiter::vf0 */
uint F_009435a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9435a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10c3f4c));
  piVar1 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8));
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0x4c))(piVar1,this);
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00943600 */
unsigned int F_00943600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943600u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined2 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined2 *)((int)this + 0x34) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10d6864));
  return 0;
}

/* ref: Client::UI2::AddonContextMenu::PopupMenuDerive::vf0 */
uint F_00943650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10c4650));
  if (*(int *)(this + 0x10) != 0) {
    F_00406b30(*(int *)(this + 0x10));
    *(undefined4 *)(this + 0x10) = 0;
  }
  if (*(int *)(this + 0xc) != 0) {
    F_00406b30(*(int *)(this + 0xc));
    *(undefined4 *)(this + 0xc) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    F_00406b30(*(int *)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009436c0 */
unsigned int F_009436c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9436c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined2 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined2 *)((int)this + 0x34) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10d687c));
  return 0;
}

/* ref: Client::UI2::AddonSelectString::PopupMenuDerive::vf0 */
uint F_00943710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943710u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10c4650));
  if (*(int *)(this + 0x10) != 0) {
    F_00406b30(*(int *)(this + 0x10));
    *(undefined4 *)(this + 0x10) = 0;
  }
  if (*(int *)(this + 0xc) != 0) {
    F_00406b30(*(int *)(this + 0xc));
    *(undefined4 *)(this + 0xc) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    F_00406b30(*(int *)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00943780 */
unsigned int F_00943780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined2 *)((int)this + 0x2e) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined2 *)((int)this + 0x34) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10d6894));
  return 0;
}

/* ref: Client::UI2::AddonSelectIconString::PopupMenuDerive::vf0 */
uint F_009437d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9437d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10c4650));
  if (*(int *)(this + 0x10) != 0) {
    F_00406b30(*(int *)(this + 0x10));
    *(undefined4 *)(this + 0x10) = 0;
  }
  if (*(int *)(this + 0xc) != 0) {
    F_00406b30(*(int *)(this + 0xc));
    *(undefined4 *)(this + 0xc) = 0;
  }
  if (*(int *)(this + 8) != 0) {
    F_00406b30(*(int *)(this + 8));
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10a0954));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00943880 */
uint F_00943880(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943880u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *(undefined * PTR32 *)((int)this + param_1 * 4), this_00 != (undefined *)0x0)) {
    uVar1 = F_005c2650(this_00,0x19,0xf);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_009438b0 */
uint F_009438b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9438b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  if ((param_1 < 8) && (this_00 = *(undefined * PTR32 *)((int)this + param_1 * 4), this_00 != (undefined *)0x0)) {
    uVar1 = F_0092a5c0(this_00,0x18,5);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_009438e0 */
uint F_009438e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9438e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int local_8;
  
  F_00921730(this);
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined1 *)((int)this + 0x94) = 1;
  *(undefined4 *)((int)this + 0x98) = 0;
  puVar1 = (undefined4 *)((int)this + 0x9c);
  local_8 = 4;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    F_0042b630(puVar1 + 4);
    puVar1 = puVar1 + 0x19;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  puVar1 = (undefined4 *)((int)this + 0x290);
  local_8 = 4;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    F_0042b630(puVar1 + 4);
    puVar1 = puVar1 + 0x19;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  puVar1 = (undefined4 *)((int)this + 0x484);
  local_8 = 3;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    F_0042b630(puVar1 + 4);
    puVar1 = puVar1 + 0x19;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  return (uint)this;
}

/* ref: FUN_009439a0 */
uint F_009439a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9439a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00953330((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_009439b0 */
uint F_009439b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9439b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00953360((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentConfigLog::vf0 */
uint F_009439c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9439c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00943a10 */
ushort F_00943a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  ushort uVar1;
  
  uVar1 = (ushort)((char)param_1 != '\0') << 4 | *(ushort *)((int)this + 0x70) & 0xffef;
  *(ushort *)((int)this + 0x70) = uVar1;
  return uVar1;
}

/* ref: Client::UI2::Agent::AgentConfigPadCustomize::vf0 */
uint F_00943a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007cd3e0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentContext::vf0 */
uint F_00943a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00921cb0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentCursor::vf0 */
uint F_00943aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentInventoryContext::vf0 */
uint F_00943af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00921d70(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentCloseMessage::vf0 */
uint F_00943b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined4 *)(this + 8) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentArmouryBoard::vf0 */
uint F_00943b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007ce9a0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentChatLog::vf0 */
uint F_00943b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007cef30(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentCutScene::vf0 */
uint F_00943bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  F_0042c880(this + 100);
  F_0042c880(this + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentEmote::vf0 */
uint F_00943c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00943c60 */
uint F_00943c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00943cb0((undefined *)((int)this + -0xc),param_1);
  return uVar1;
}

/* ref: FUN_00943c70 */
unsigned int F_00943c70(unsigned int gen_a0)
{
  GEN_ENTER(0x943c70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)((int)this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 0x1c))))(*(int * PTR32 *)((int)this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 8),0);
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  return 0;
}

/* ref: Client::UI2::Agent::AgentFishingNote::vf0 */
uint F_00943cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943cb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFishGuide::vf0 */
uint F_00943d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFishRecord::vf0 */
uint F_00943d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentGatheringNote::vf0 */
uint F_00943dd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943dd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentGearSet::vf0 */
uint F_00943e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943e30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007d2220(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentBuddy::vf0 */
uint F_00943e60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943e60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007d2c60(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00943e90 */
unsigned int F_00943e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return 0;
}

/* ref: Client::UI2::Agent::AgentHUDLayout::vf0 */
uint F_00943ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentInspect::vf0 */
uint F_00943f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  F_0042c880(this + 0x15c);
  F_0042c880(this + 0x70);
  F_0042c880(this + 0x1c);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentInventory::vf0 */
uint F_00943f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943f80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentMacro::vf0 */
uint F_00943fd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x943fd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00922080(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentMarker::vf0 */
uint F_00944000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentNpcTrade::vf0 */
uint F_00944050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00922270(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentQuestJournal::vf0 */
uint F_00944080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944080u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10b8168));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentRetainer::vf0 */
uint F_009440e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9440e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009223f0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00944110 */
unsigned int F_00944110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return 0;
}

/* ref: Client::UI2::Agent::AgentStatus::vf0 */
uint F_00944140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentTargetCircle::vf0 */
uint F_00944190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944190u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentTargetCursor::vf0 */
uint F_009441e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9441e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentTrade::vf0 */
uint F_00944230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944230u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00922560(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentHowtoList::vf0 */
uint F_00944260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007dc5a0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentCabinet::vf0 */
uint F_00944290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009225e0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentLegacyItemStorage::vf0 */
uint F_009442c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9442c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentCrossEditor::vf0 */
uint F_00944310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d46dc));
  F_0042c880(this + 0x14);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentGrandCompanyRank::vf0 */
uint F_00944370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentGrandCompanyExchange::vf0 */
uint F_009443c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9443c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentMovieSubtitle::vf0 */
uint F_00944410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentPadMouseMode::vf0 */
uint F_00944460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentColosseumRecord::vf0 */
uint F_009444b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9444b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentRecommendList::vf0 */
uint F_00944500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007ddd50(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentCatch::vf0 */
uint F_00944530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentShop::vf0 */
uint F_00944580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentSocial::vf0 */
uint F_009445d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9445d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentBlacklist::vf0 */
uint F_00944620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  F_0042c880(this + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentDetail::vf0 */
uint F_00944680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944680u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  F_0042c880(this + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFriendlist::vf0 */
uint F_009446e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9446e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  F_0042c880(this + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentItemSearch::vf0 */
uint F_00944740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007dedc0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentLetter::vf0 */
uint F_00944770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentLetterEdit::vf0 */
uint F_009447c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9447c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007dfd70(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentLetterView::vf0 */
uint F_009447f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9447f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentLinkshell::vf0 */
uint F_00944840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007e0890(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentPartyInvite::vf0 */
uint F_00944870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x10d4cec));
  F_0042c880(this + 0x14);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentPartyMember::vf0 */
uint F_009448d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9448d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4d44));
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4d34));
  F_0042c880(this + 0x18);
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10905bc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentSearch::vf0 */
uint F_00944940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4d94));
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10d4d88));
  F_0042c880(this + 0x18);
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10905bc));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFreeCompany::vf0 */
uint F_009449b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9449b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007e0f00(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyOrganizeSheet::vf0 */
uint F_009449e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9449e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4e2c));
  F_0042c880(this + 0x68);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyProfile::vf0 */
uint F_00944a40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944a40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007e2230(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyInvite::vf0 */
uint F_00944a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944a70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[17])REFP(0x10d4ebc));
  F_0042c880(this + 0x14);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyInputString::vf0 */
uint F_00944ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d4f04));
  F_0042c880(this + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyChest::vf0 */
uint F_00944b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007e2580(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyExchange::vf0 */
uint F_00944b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10c43c0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyProfileEdit::vf0 */
uint F_00944bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944bc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyCrestEditor::vf0 */
uint F_00944c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944c10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)(this + 0xc) = (*(undefined * PTR32 (*)[2])REFP(0x10c43c0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentFreeCompanyCrestDecal::vf0 */
uint F_00944c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007e3600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentCharaMake::vf0 */
uint F_00944ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944ca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentLicenseViewer::vf0 */
uint F_00944cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentSupportMain::vf0 */
uint F_00944d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentSupportSubList::vf0 */
uint F_00944d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  F_0042c880(this + 0x10);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentSupportSubView::vf0 */
uint F_00944df0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944df0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentSupportSubEdit::vf0 */
uint F_00944e40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944e40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00922d90(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentCreditPlayer::vf0 */
uint F_00944e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentCreditScroll::vf0 */
uint F_00944ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentCreditCast::vf0 */
uint F_00944f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::Agent::AgentCreditEnd::vf0 */
uint F_00944f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[16])REFP(0x10d3cf4));
  if (*(int *)(this + 8) != 0) {
    piVar1 = ((int *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)(this + 8),0);
    *(undefined4 *)(this + 8) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonContextMenu::vf0 */
uint F_00944fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944fb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007e9420(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonSelectString::vf0 */
uint F_00944fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x944fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007e97d0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonSelectIconString::vf0 */
uint F_00945010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_007ea350(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonStatus::vf0 */
uint F_00945040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945040u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d56dc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFreeCompanyExchange::vf0 */
uint F_00945070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[71])REFP(0x10c90bc));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonFishingNote::vf0 */
uint F_009450a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9450a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10d5924));
  *(undefined * PTR32 * PTR32 *)(this + 0x25c) = (*(undefined * PTR32 (*)[4])REFP(0x10a0b64));
  *(undefined * PTR32 * PTR32 *)(this + 0x1d8) = (*(undefined * PTR32 (*)[1])REFP(0x10cd248));
  if (*(int *)(this + 0x24c) != 0) {
    F_00406b30(*(int *)(this + 0x24c));
    *(undefined4 *)(this + 0x24c) = 0;
  }
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::UI2::AddonMateriaRepair::vf0 */
uint F_00945100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[62])REFP(0x10cc104));
  F_00590600(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00945150 */
uint F_00945150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945150u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00945160 */
uint F_00945160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945160u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945270 */
byte F_00945270(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945270u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) != *(int *)(param_1 + 8);
}

/* ref: FUN_00945290 */
uint F_00945290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945290u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009452b0 */
uint F_009452b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9452b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009452c0 */
uint F_009452c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9452c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009452e0 */
uint F_009452e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9452e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009452f0 */
uint F_009452f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9452f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945300 */
uint F_00945300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945300u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945320 */
uint F_00945320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945320u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945330 */
uint F_00945330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945330u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945350 */
uint F_00945350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945350u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945360 */
uint F_00945360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945360u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945380 */
uint F_00945380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945380u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945390 */
uint F_00945390(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945390u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009453b0 */
uint F_009453b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9453b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00910c10(this);
  return (uint)this;
}

/* ref: FUN_009453c0 */
uint F_009453c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9453c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00910c10(this);
  return (uint)param_1;
}

/* ref: FUN_009453f0 */
uint F_009453f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9453f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00945400 */
uint F_00945400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945400u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945420 */
uint F_00945420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945420u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00945430 */
uint F_00945430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945430u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945450 */
uint F_00945450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945450u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00945460 */
uint F_00945460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945460u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945480 */
uint F_00945480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00945490 */
uint F_00945490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945490u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009454b0 */
uint F_009454b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9454b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009454c0 */
uint F_009454c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9454c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945500 */
unsigned int F_00945500(unsigned int gen_a0)
{
  GEN_ENTER(0x945500u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  if (*(int *)((int)this + 0x10) != 0) {
    *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
    if (*(uint *)((int)this + 8) <= *(uint *)((int)this + 0xc)) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
    iVar1 = *(int *)((int)this + 0x10) + -1;
    *(int *)((int)this + 0x10) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 0xc) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00945680 */
uint F_00945680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945680u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00945690 */
uint F_00945690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945690u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009456d0 */
uint F_009456d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9456d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009456e0 */
uint F_009456e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9456e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009457c0 */
byte F_009457c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9457c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945850 */
uint F_00945850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945850u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945860 */
uint F_00945860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945860u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009458b0 */
uint F_009458b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9458b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009458c0 */
uint F_009458c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9458c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009458e0 */
uint F_009458e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9458e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009458f0 */
uint F_009458f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9458f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945910 */
uint F_00945910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945910u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00945920 */
uint F_00945920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945920u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945940 */
uint F_00945940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945940u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00945950 */
uint F_00945950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945950u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945970 */
uint F_00945970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945970u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00945980 */
uint F_00945980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945980u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009459a0 */
byte F_009459a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9459a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_009459d0 */
byte F_009459d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9459d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945a00 */
byte F_00945a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945a50 */
uint F_00945a50(unsigned int gen_a0)
{
  GEN_ENTER(0x945a50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00928100(this);
  return (uint)this;
}

/* ref: FUN_00945a70 */
uint F_00945a70(unsigned int gen_a0)
{
  GEN_ENTER(0x945a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00928170(this);
  return (uint)this;
}

/* ref: FUN_00945a90 */
byte F_00945a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945a90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945ab0 */
byte F_00945ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945ad0 */
byte F_00945ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) != *(int *)(param_1 + 8);
}

/* ref: FUN_00945b10 */
byte F_00945b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945b30 */
byte F_00945b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945b50 */
byte F_00945b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945b50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945b70 */
uint F_00945b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945b70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = **(undefined4 * PTR32 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945b90 */
uint F_00945b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945b90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945bc0 */
uint F_00945bc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945bc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00945be0 */
byte F_00945be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945c00 */
byte F_00945c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945c20 */
byte F_00945c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945c20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945c40 */
uint F_00945c40(unsigned int gen_a0)
{
  GEN_ENTER(0x945c40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_009283d0(this);
  return (uint)this;
}

/* ref: FUN_00945c60 */
byte F_00945c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945c60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945c80 */
byte F_00945c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945cb0 */
uint F_00945cb0(unsigned int gen_a0)
{
  GEN_ENTER(0x945cb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00914400(this);
  return (uint)this;
}

/* ref: FUN_00945cc0 */
uint F_00945cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x945cc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *param_1 = *(undefined4 *)this;
  F_00914400(this);
  return (uint)param_1;
}

/* ref: FUN_00945ce0 */
byte F_00945ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 8) != *(int *)(param_1 + 8);
}

/* ref: FUN_00945d00 */
byte F_00945d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945d20 */
byte F_00945d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945d40 */
byte F_00945d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945d40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945d60 */
byte F_00945d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945d60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945d80 */
byte F_00945d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945d80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945da0 */
byte F_00945da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945dc0 */
byte F_00945dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945dc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945e00 */
byte F_00945e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x945e00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00945ed0 */
unsigned int F_00945ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x945ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)this;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)this + 4) = *(int *)this;
  *(undefined4 *)((int)this + 4) = 0;
  if (piVar2 != *(int * PTR32 *)this) {
    do {
      piVar1 = (int *)*piVar2;
      F_00429760(piVar2,0xc,400);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)this);
  }
  return 0;
}

/* ref: FUN_00945f50 */
uint F_00945f50(unsigned int gen_a0)
{
  GEN_ENTER(0x945f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,0x137);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00945f70 */
uint F_00945f70(unsigned int gen_a0)
{
  GEN_ENTER(0x945f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_00946180 */
unsigned int F_00946180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return 0;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return 0;
}

/* ref: FUN_009461c0 */
unsigned int F_009461c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9461c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  iVar2 = *(int *)((int)this + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return 0;
}

/* ref: FUN_00946200 */
uint F_00946200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x25) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if (*(ushort *)(puVar1 + 3) < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x25) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00946240 */
uint F_00946240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar3 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar3[1] + 0x21) == '\0') {
    puVar1 = (undefined4 *)puVar3[1];
    do {
      if (*(ushort *)(puVar1 + 3) < *param_2) {
        puVar2 = (undefined4 *)puVar1[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar1;
        puVar3 = puVar1;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar2 + 0x21) == '\0');
  }
  *param_1 = (int)puVar3;
  return (uint)param_1;
}

/* ref: FUN_00946280 */
unsigned int F_00946280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946280u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x15) == '\0') {
    *(int *)(*piVar1 + 4) = param_1;
  }
  piVar1[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar1;
    *piVar1 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar1;
    return 0;
  }
  piVar2 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar1;
    return 0;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar1;
  return 0;
}

/* ref: FUN_00946300 */
uint F_00946300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946300u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00946310 */
uint F_00946310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946310u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00946320 */
uint F_00946320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946320u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946330 */
uint F_00946330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946330u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946340 */
unsigned int F_00946340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00946340(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x18,400);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return 0;
}

/* ref: FUN_009463d0 */
uint F_009463d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9463d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_009463f0 */
uint F_009463f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9463f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar2 = *(int *)((int)this + 0x10);
  iVar1 = iVar2;
  while (iVar1 != 0) {
    if (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      *(int *)((int)this + 0x10) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
    iVar1 = *(int *)((int)this + 0x10);
  }
  iVar2 = *(int *)((int)this + 8);
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))),0x10,400);
    }
  }
  uVar3 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,400);
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_009464b0 */
uint F_009464b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9464b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_009464d0 */
unsigned int F_009464d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9464d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x39);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_009464d0(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x40,400);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x39);
  }
  return 0;
}

/* ref: FUN_00946510 */
unsigned int F_00946510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int * piVar1;
  int * piVar2;
  
  piVar1 = *(int * PTR32 *)(param_1 + 8);
  *(int *)(param_1 + 8) = *piVar1;
  if (*(char *)(*piVar1 + 0x39) == '\0') {
    *(int *)(*piVar1 + 4) = param_1;
  }
  piVar1[1] = *(int *)(param_1 + 4);
  if (param_1 == *((int *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar1;
    *piVar1 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar1;
    return 0;
  }
  piVar2 = *(int * PTR32 *)(param_1 + 4);
  if (param_1 == *piVar2) {
    *piVar2 = (int)piVar1;
    *piVar1 = param_1;
    *(int * PTR32 *)(param_1 + 4) = piVar1;
    return 0;
  }
  piVar2[2] = (int)piVar1;
  *piVar1 = param_1;
  *(int * PTR32 *)(param_1 + 4) = piVar1;
  return 0;
}

/* ref: FUN_009465d0 */
uint F_009465d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9465d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_009465f0 */
uint F_009465f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9465f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  iVar2 = *(int *)((int)this + 0x10);
  iVar1 = iVar2;
  while (iVar1 != 0) {
    if (iVar2 != 0) {
      iVar2 = iVar2 + -1;
      *(int *)((int)this + 0x10) = iVar2;
      if (iVar2 == 0) {
        *(undefined4 *)((int)this + 0xc) = 0;
      }
    }
    iVar1 = *(int *)((int)this + 0x10);
  }
  iVar2 = *(int *)((int)this + 8);
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    if (*((int *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))) != 0) {
      F_00429760(*((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + iVar2 * 4))),0x20,400);
    }
  }
  uVar3 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar4 = F_00429760(*(int *)((int)this + 4),*(int *)((int)this + 8) * 4,400);
    uVar3 = (uint)uVar4;
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar3;
}

/* ref: FUN_009466b0 */
uint F_009466b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9466b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_00429760(*(undefined4 *)this,8,400);
  *(undefined4 *)this = 0;
  return (uint)uVar1;
}

/* ref: FUN_009466d0 */
uint F_009466d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9466d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_009466e0 */
uint F_009466e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9466e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_009466f0 */
uint F_009466f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9466f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946700 */
uint F_00946700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946700u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946710 */
uint F_00946710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946710u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946720 */
uint F_00946720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946720u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946730 */
uint F_00946730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946730u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946740 */
uint F_00946740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946740u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946750 */
uint F_00946750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946750u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946760 */
uint F_00946760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946760u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946770 */
uint F_00946770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946770u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946780 */
uint F_00946780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946780u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946a80 */
uint F_00946a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946a80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946a90 */
uint F_00946a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946a90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946aa0 */
uint F_00946aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946ab0 */
uint F_00946ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946ab0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946ac0 */
uint F_00946ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946ad0 */
uint F_00946ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946ad0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946ae0 */
uint F_00946ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946af0 */
uint F_00946af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946af0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946b00 */
uint F_00946b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946b00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946b10 */
uint F_00946b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946b10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946b20 */
uint F_00946b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946b20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946b30 */
uint F_00946b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946b30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946b40 */
uint F_00946b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946b40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946b50 */
uint F_00946b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946b50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946b60 */
uint F_00946b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946b60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946b70 */
uint F_00946b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946b70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946b80 */
uint F_00946b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946b80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946b90 */
uint F_00946b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946b90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946bb0 */
uint F_00946bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x946bb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  iVar1 = *(int *)this;
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar3 = F_00429760(iVar1,(*(int *)((int)this + 8) - iVar1 >> 2) * 4,400);
    uVar2 = (uint)uVar3;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_00946bf0 */
uint F_00946bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946c00 */
uint F_00946c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946c00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946c10 */
uint F_00946c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946c10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946c20 */
uint F_00946c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946c20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946c30 */
uint F_00946c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946c30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946c40 */
uint F_00946c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946c40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946c50 */
uint F_00946c50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946c50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946c60 */
uint F_00946c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946c60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946c70 */
uint F_00946c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946c70u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946c80 */
uint F_00946c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946c80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946c90 */
uint F_00946c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00946ca0 */
uint F_00946ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946ca0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00946cb0 */
uint F_00946cb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946cb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00946cc0 */
uint F_00946cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946cc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 4;
  return (uint)param_1;
}

/* ref: FUN_00946ce0 */
uint F_00946ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00929470(this,param_2);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00946d00 */
uint F_00946d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00929420(this,param_2);
  *param_1 = uVar1;
  return (uint)param_1;
}

/* ref: FUN_00946d20 */
unsigned int F_00946d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946d20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x21);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00946d20(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x28,400);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x21);
  }
  return 0;
}

/* ref: FUN_00946d80 */
uint F_00946d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946d80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946d90 */
uint F_00946d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946d90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946da0 */
unsigned int F_00946da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946da0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00946da0(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x18,400);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return 0;
}

/* ref: FUN_00946e00 */
uint F_00946e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946e00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00946e10 */
uint F_00946e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946e10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 4);
  return (uint)param_2;
}

/* ref: FUN_00946e20 */
unsigned int F_00946e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x946e20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  char cVar1;
  int * piVar2;
  int * piVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x15);
  piVar3 = param_1;
  while (cVar1 == '\0') {
    F_00946e20(this,(int *)piVar3[2]);
    piVar2 = (int *)*piVar3;
    F_00429760(piVar3,0x18,400);
    piVar3 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  return 0;
}

/* ref: FUN_00946e80 */
uint F_00946e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00946e90 */
uint F_00946e90(unsigned int gen_a0)
{
  GEN_ENTER(0x946e90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00929740(this);
  return (uint)this;
}

/* ref: FUN_00946ea0 */
uint F_00946ea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946ea0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00946eb0 */
uint F_00946eb0(unsigned int gen_a0)
{
  GEN_ENTER(0x946eb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_009297a0(this);
  return (uint)this;
}

/* ref: FUN_00946ec0 */
unsigned int F_00946ec0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946ec0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return 0;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return 0;
}

/* ref: FUN_00946f00 */
unsigned int F_00946f00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946f00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  iVar2 = *(int *)((int)this + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return 0;
}

/* ref: FUN_00946f40 */
uint F_00946f40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946f40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00946f50 */
uint F_00946f50(unsigned int gen_a0)
{
  GEN_ENTER(0x946f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00929870(this);
  return (uint)this;
}

/* ref: FUN_00946f60 */
uint F_00946f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00946f70 */
unsigned int F_00946f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (param_2 != (undefined4 *)0x0) {
    *(undefined4 *)this = *param_2;
    *(undefined4 *)((int)this + 8) = param_1;
    return 0;
  }
  *(undefined4 *)((int)this + 8) = param_1;
  return 0;
}

/* ref: FUN_00946fb0 */
unsigned int F_00946fb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946fb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int * piVar3;
  
  piVar3 = (int *)0x0;
  if ((*(int * PTR32 *)this != (int *)0x0) &&
     (puVar1 = ((undefined4 *)GEN_TOP(**(int * PTR32 *)this)), puVar1 != (undefined4 *)0x0)) {
    piVar3 = (int *)*puVar1;
  }
  iVar2 = *(int *)((int)this + 8);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = iVar2 + param_2;
  if ((piVar3 != (int *)0x0) && ((undefined4 *)*piVar3 != (undefined4 *)0x0)) {
    *param_1 = *(undefined4 *)*piVar3;
  }
  return 0;
}

/* ref: FUN_00946ff0 */
uint F_00946ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x946ff0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00947000 */
uint F_00947000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00947010 */
uint F_00947010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00947020 */
uint F_00947020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947020u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00947030 */
uint F_00947030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00947040 */
uint F_00947040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947040u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00947050 */
uint F_00947050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00947060 */
uint F_00947060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947060u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = param_2 * 0xd4 + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_009471a0 */
uint F_009471a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9471a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009471b0 */
uint F_009471b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9471b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_009471c0 */
uint F_009471c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9471c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = param_2 * 0x54 + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_009471e0 */
uint F_009471e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9471e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = param_2 * 0xd + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_00947200 */
uint F_00947200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = param_2 * 3 + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_00947220 */
uint F_00947220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = param_2 * 0x60 + *(int *)this;
  return (uint)param_1;
}

/* ref: FUN_00947240 */
uint F_00947240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 8;
  return (uint)param_1;
}

/* ref: FUN_00947260 */
uint F_00947260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 8;
  return (uint)param_1;
}

/* ref: FUN_00947280 */
uint F_00947280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  *param_1 = *(int *)this + param_2 * 0xc;
  return (uint)param_1;
}

/* ref: FUN_009472a0 */
unsigned int F_009472a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9472a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return 0;
}

/* ref: FUN_009472d0 */
unsigned int F_009472d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9472d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return 0;
}

/* ref: FUN_00947300 */
unsigned int F_00947300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947300u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (((int *)*param_1 != (int *)0x0) &&
     (puVar1 = *(undefined4 * PTR32 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    *(undefined4 *)this = *puVar1;
  }
  *(int *)((int)this + 8) = param_1[2];
  return 0;
}

/* ref: FUN_009473c0 */
uint F_009473c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9473c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_009473f0 */
uint F_009473f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9473f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,400);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
    puVar1[4] = param_3[2];
  }
  return (uint)puVar1;
}

/* ref: FUN_00947430 */
uint F_00947430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947430u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00947460 */
uint F_00947460(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947460u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xc,0,400);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_009474a0 */
uint F_009474a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9474a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009474b0 */
uint F_009474b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9474b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_009474e0 */
uint F_009474e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9474e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xc,0,400);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_00947520 */
unsigned int F_00947520(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x947520u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *param_1 = 0;
  param_1[1] = 0;
  if (this != (undefined *)0x0) {
    *param_1 = *(undefined4 *)this;
    param_1[2] = param_4;
    return 0;
  }
  param_1[2] = param_4;
  return 0;
}

/* ref: FUN_00947550 */
undefined4 * F_00947550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x15) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x15) == '\0');
  }
  return puVar2;
}

/* ref: FUN_009475c0 */
undefined4 * F_009475c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9475c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if (*(char *)((int)puVar2[1] + 0x21) == '\0') {
    puVar1 = puVar2;
    puVar3 = (undefined4 *)puVar2[1];
    do {
      puVar2 = puVar3;
      if ((uint)puVar2[3] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
        puVar2 = puVar1;
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
      }
      puVar1 = puVar2;
    } while (*(char *)((int)puVar3 + 0x21) == '\0');
  }
  return puVar2;
}

/* ref: FUN_009475f0 */
uint F_009475f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9475f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009476a0 */
unsigned int F_009476a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9476a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *param_1 = 0;
  param_1[1] = 0;
  if (this != (undefined *)0x0) {
    *param_1 = *(undefined4 *)this;
    param_1[2] = param_4;
    return 0;
  }
  param_1[2] = param_4;
  return 0;
}

/* ref: FUN_00947740 */
unsigned int F_00947740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x947740u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  *param_1 = 0;
  param_1[1] = 0;
  if (this != (undefined *)0x0) {
    *param_1 = *(undefined4 *)this;
    param_1[2] = param_4;
    return 0;
  }
  param_1[2] = param_4;
  return 0;
}

/* ref: FUN_00947770 */
uint F_00947770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947770u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947780 */
uint F_00947780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947780u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947790 */
uint F_00947790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947790u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009477a0 */
uint F_009477a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9477a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009477b0 */
uint F_009477b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9477b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_009477c0 */
uint F_009477c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9477c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *param_1 = param_2;
  return (uint)param_1;
}

/* ref: FUN_00947820 */
uint F_00947820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947820u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00947850 */
uint F_00947850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0xc,0,400);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
  }
  return (uint)puVar1;
}

/* ref: FUN_00947890 */
uint F_00947890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_009478c0 */
uint F_009478c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9478c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x18,0,400);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
    puVar1[4] = param_3[2];
    puVar1[5] = param_3[3];
  }
  return (uint)puVar1;
}

/* ref: FUN_00947910 */
uint F_00947910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00947940 */
uint F_00947940(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x947940u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

/* ref: FUN_00947970 */
uint F_00947970(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x947970u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * puVar1;
  
  puVar1 = (undefined4 *)F_004296a0(0x14,0,400);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_3;
    puVar1[3] = param_3[1];
    puVar1[4] = param_3[2];
  }
  return (uint)puVar1;
}

/* ref: FUN_009479b0 */
uint F_009479b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9479b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (-*(int *)((int)this + 4) - 2U < param_1) {
                    
    F_00c4579a("list<T> too long");
  }
  uVar1 = *(int *)((int)this + 4) + param_1;
  *(uint *)((int)this + 4) = uVar1;
  return uVar1;
}

