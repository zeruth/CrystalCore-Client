#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00c8b440 */
uint F_00c8b440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc8b440u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint * param_4 = (uint *)(uintptr_t)gen_a3;
  uint param_5 = (uint)gen_a4;
  uint * puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = param_5 & 3;
  uVar4 = param_3 & 3;
  if (param_5 != 0) {
    if (param_4 == (uint *)0x0) {
      return 0x80004003;
    }
    if (uVar5 != param_5) {
      return 0x80070057;
    }
  }
  if (param_3 != 0) {
    if (param_2 == (uint *)0x0) {
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
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0x54))(param_1);
  }
  if (uVar4 != 0) {
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0x50))(param_1);
  }
  return uVar3;
}

/* ref: FUN_00c8b540 */
uint F_00c8b540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8b540u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)(param_1 + 0x18);
    param_2[1] = *(undefined4 *)(param_1 + 0x1c);
  }
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = *(undefined4 *)(param_1 + 0x20);
    param_3[1] = *(undefined4 *)(param_1 + 0x24);
  }
  return 0;
}

/* ref: FUN_00c8b570 */
uint F_00c8b570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8b570u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = 0;
    param_2[1] = 0;
  }
  if (param_3 != (undefined4 *)0x0) {
    lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x34);
    gen_imp_EnterCriticalSection(lpCriticalSection);
    *param_3 = *(undefined4 *)(param_1 + 0x10);
    param_3[1] = *(undefined4 *)(param_1 + 0x14);
    gen_imp_LeaveCriticalSection(lpCriticalSection);
  }
  return 0;
}

/* ref: FUN_00c8b5c0 */
uint F_00c8b5c0(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc8b5c0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  double param_2 = (double)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  
  lpCriticalSection = (LPCRITICAL_SECTION)param_1[0xd];
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(double *)(param_1 + 10) = param_2;
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x58))(param_1);
  return uVar1;
}

/* ref: FUN_00c8b600 */
uint F_00c8b600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8b600u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == (undefined8 *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x34);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *param_2 = *(undefined8 *)(param_1 + 0x28);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c8b640 */
uint F_00c8b640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8b640u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = 0;
  param_2[1] = 0;
  return 0;
}

/* ref: FUN_00c8b670 */
uint F_00c8b670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8b670u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  double * param_2 = (double *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == (double *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x38);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *param_2 = (double)*(longlong *)(param_1 + 0x18) / *(double *)&REFG(double, 0x1087ef0);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c8b6b0 */
uint F_00c8b6b0(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc8b6b0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  double param_2 = (double)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)param_1[0xe]);
  *(longlong *)(param_1 + 8) = (longlong)(param_2 * *(double *)&REFG(double, 0x1087ef0));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)param_1[0xe]);
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x48))(param_1);
  return uVar1;
}

/* ref: FUN_00c8b6f0 */
uint F_00c8b6f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8b6f0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  double * param_2 = (double *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == (double *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x38);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *param_2 = (double)*(longlong *)(param_1 + 0x28) / *(double *)&REFG(double, 0x1087ef0);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c8b730 */
uint F_00c8b730(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc8b730u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  double param_2 = (double)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)param_1[0xe]);
  *(longlong *)(param_1 + 10) = (longlong)(param_2 * *(double *)&REFG(double, 0x1087ef0));
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)param_1[0xe]);
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x4c))(param_1);
  return uVar1;
}

/* ref: FUN_00c8b770 */
uint F_00c8b770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8b770u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)(param_2 == 0) * 2 + 0x80004001;
}

/* ref: FUN_00c8b7a0 */
uint F_00c8b7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8b7a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_2 == (undefined8 *)0x0) {
    return 0x80004003;
  }
  lpCriticalSection = *(LPCRITICAL_SECTION *)(param_1 + 0x38);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *param_2 = *(undefined8 *)(param_1 + 0x30);
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: FUN_00c8b7e0 */
uint F_00c8b7e0(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc8b7e0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  double param_2 = (double)gen_a1;
  uint uVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)param_1[0xe]);
  *(double *)(param_1 + 0xc) = param_2;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)param_1[0xe]);
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x50))(param_1);
  return uVar1;
}

/* ref: FUN_00c8b820 */
uint F_00c8b820(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8b820u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = 0xffffffff;
  return 0;
}

/* ref: FUN_00c8b840 */
uint F_00c8b840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8b840u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = 0xffffffff;
  return 0;
}

/* ref: FUN_00c8b860 */
uint F_00c8b860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8b860u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1084d28));
  if (uVar1 != 0) {
    uVar1 = F_00c83ae0(param_1 + -4,param_3);
    return uVar1;
  }
  uVar1 = F_00c83bc0(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c8b8b0 */
uint F_00c8b8b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8b8b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = 1;
  return 0;
}

/* ref: FUN_00c8b8d0 */
uint F_00c8b8d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc8b8d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c89bc0(param_1 + 0x10,&REFG(undefined, 0x1084d28),param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00c8b900 */
uint F_00c8b900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc8b900u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_00c89ca0(param_1 + 0x10,&REFG(undefined, 0x1084d28),param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00c8b930 */
uint F_00c8b930(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]),0,(*(undefined4 *)&gen_args[3]),&(*(int * PTR32 *)&gen_args[2]));
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x2c))))
                      ((*(int * PTR32 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8]));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 8))))((*(int * PTR32 *)&gen_args[2]));
  }
  return uVar1;
}

/* ref: FUN_00c8b9b0 */
uint F_00c8b9b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8b9b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1084d38));
  if (uVar1 != 0) {
    uVar1 = F_00c83ae0(param_1 + -4,param_3);
    return uVar1;
  }
  uVar1 = F_00c83bc0(param_1,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c8ba00 */
uint F_00c8ba00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8ba00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = 1;
  return 0;
}

/* ref: FUN_00c8ba20 */
uint F_00c8ba20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc8ba20u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c89bc0(param_1 + 0x10,&REFG(undefined, 0x1084d38),param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00c8ba50 */
uint F_00c8ba50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc8ba50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_00c89ca0(param_1 + 0x10,&REFG(undefined, 0x1084d38),param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00c8ba80 */
uint F_00c8ba80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]),0,(*(undefined4 *)&gen_args[3]),&(*(int * PTR32 *)&gen_args[2]));
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x2c))))
                      ((*(int * PTR32 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8]));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 8))))((*(int * PTR32 *)&gen_args[2]));
  }
  return uVar1;
}

/* ref: FUN_00c8bb00 */
uint F_00c8bb00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8bb00u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1084d48));
  if (uVar1 == 0) {
    uVar1 = F_00c80fd0(param_2,&REFG(undefined, 0x1084d58));
    if (uVar1 == 0) {
      uVar1 = F_00c83bc0(param_1,param_2,param_3);
      return uVar1;
    }
  }
  uVar1 = F_00c83ae0(param_1 + -4,param_3);
  return uVar1;
}

/* ref: FUN_00c8bb60 */
uint F_00c8bb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8bb60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = 1;
  return 0;
}

/* ref: FUN_00c8bb80 */
uint F_00c8bb80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc8bb80u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c89bc0(param_1 + 0x10,&REFG(undefined, 0x1084d48),param_2,param_3,param_4);
  return uVar1;
}

/* ref: FUN_00c8bbb0 */
uint F_00c8bbb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc8bbb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_00c89ca0(param_1 + 0x10,&REFG(undefined, 0x1084d48),param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: FUN_00c8bbe0 */
uint F_00c8bbe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
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
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x10))))((*(int * PTR32 *)&gen_args[0]),0,(*(undefined4 *)&gen_args[3]),&(*(int * PTR32 *)&gen_args[2]));
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x2c))))
                      ((*(int * PTR32 *)&gen_args[2]),(*(int * PTR32 *)&gen_args[0]),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),(*(undefined4 *)&gen_args[6]),(*(undefined4 *)&gen_args[7]),(*(undefined4 *)&gen_args[8]));
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 8))))((*(int * PTR32 *)&gen_args[2]));
  }
  return uVar1;
}

/* ref: FUN_00c8bc60 */
uint F_00c8bc60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc8bc60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  ushort uVar1;
  int * piVar2;
  int iVar3;
  uint uVar4;
  ushort * puVar5;
  undefined2 * puVar6;
  int * piVar7;
  
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(uint *)((int)this + 8) = param_1;
  if (param_1 == 0) {
    *(undefined4 *)this = 0;
  }
  else {
    uVar4 = F_004069f0(-(uint)((int)((ulonglong)param_1 * 0x10 >> 0x20) != 0) |
                         (uint)((ulonglong)param_1 * 0x10));
    *(uint *)this = uVar4;
    if (uVar4 == 0) {
      *(undefined4 *)((int)this + 8) = 0;
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 0x8007000e;
        return (uint)this;
      }
    }
    else {
      param_1 = 0;
      if (*(int *)((int)this + 8) != 0) {
        piVar7 = (int *)(param_2 + 8);
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
              uVar1 = *(ushort *)(*piVar7 + -2);
              puVar5 = (ushort *)F_004069f0((uVar1 + 1) * 2);
              if (puVar5 == (ushort *)0x0) {
                *(uint *)((int)this + 8) = param_1;
                if (param_3 != (undefined4 *)0x0) {
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
            piVar2 = (int *)*piVar7;
            *(int * PTR32 *)(puVar6 + 4) = piVar2;
            ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2);
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
        } while (param_1 < *(uint *)((int)this + 8));
        return (uint)this;
      }
    }
  }
  return (uint)this;
}

/* ref: FUN_00c8be30 */
uint F_00c8be30(unsigned int gen_a0)
{
  GEN_ENTER(0xc8be30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * psVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (*(int *)((int)this + 8) != 0) {
    iVar4 = 0;
    do {
      psVar1 = (short *)(iVar4 + *(int *)this);
      sVar2 = *psVar1;
      if (sVar2 == 8) {
        if (*(int *)(psVar1 + 4) != 0) {
          F_00406ad0(*(int *)(psVar1 + 4) + -2);
        }
      }
      else if ((sVar2 == 9) || (sVar2 == 0xd)) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(psVar1 + 4) + 8))))(*(int * PTR32 *)(psVar1 + 4));
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x10;
    } while (uVar3 < *(uint *)((int)this + 8));
  }
  uVar3 = F_00406ad0(*(undefined4 *)this);
  return uVar3;
}

/* ref: FUN_00c8be90 */
uint F_00c8be90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc8be90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
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
uint F_00c8bef0(unsigned int gen_a0)
{
  GEN_ENTER(0xc8bef0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)(param_1 + 4);
  if (piVar1 == (int *)0x0) {
    return 0x80040234;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,param_1 + -0xc);
  if (-1 < (int)uVar2) {
    *(undefined4 *)(param_1 + 4) = 0;
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: FUN_00c8bf30 */
uint F_00c8bf30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8bf30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0x80004001;
}

/* ref: FUN_00c8bf40 */
uint F_00c8bf40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8bf40u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  if (*(int *)(param_1 + 4) != 0) {
    return 0x80004004;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x40);
  return 0;
}

/* ref: FUN_00c8bf70 */
uint F_00c8bf70(unsigned int gen_a0, double gen_a1)
{
  GEN_ENTER(0xc8bf70u, gen_a0, 0u, 0u, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  memcpy(&gen_args[1], &gen_a1, sizeof gen_a1);
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  
  lVar2 = (longlong)((*(double *)&gen_args[1]) * *(double *)&REFG(double, 0x1087ef0));
  iVar1 = *(int *)((*(int *)&gen_args[0]) + 4);
  if (*(int *)(iVar1 + 0x60) != 0) {
    lVar3 = lVar2;
    if (*(int *)((*(int *)&gen_args[0]) + 0x24) != 0) {
      if (*(int *)(iVar1 + 100) == 0) goto LAB_00c8bfe7;
      lVar3 = lVar2 + *(longlong *)(iVar1 + 0x68);
    }
    iVar5 = (int)((ulonglong)lVar3 >> 0x20);
    (*(double *)&gen_args[1]) = 0.0;
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(iVar1 + 0x60) + 0xc))))(*(int * PTR32 *)(iVar1 + 0x60),&(*(double *)&gen_args[1]));
    if ((iVar5 <= (*(undefined4 *)((char *)&(*(double *)&gen_args[1]) + 4))) && ((iVar5 < (*(undefined4 *)((char *)&(*(double *)&gen_args[1]) + 4)) || ((uint)lVar3 <= (*(undefined4 *)((char *)&(*(double *)&gen_args[1]) + 0)))))) {
      return 0x80040233;
    }
  }
LAB_00c8bfe7: ;
  uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 4) + 0xc))))(*(int * PTR32 *)((*(int *)&gen_args[0]) + 4),(*(int *)&gen_args[0]) + -0xc);
  if (-1 < (int)uVar4) {
    *(longlong *)((*(int *)&gen_args[0]) + 0xc) = lVar2;
    uVar4 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 4) + 8))))(*(int * PTR32 *)((*(int *)&gen_args[0]) + 4),(*(int *)&gen_args[0]) + -0xc);
  }
  return uVar4;
}

/* ref: FUN_00c8c020 */
uint F_00c8c020(unsigned int gen_a0)
{
  GEN_ENTER(0xc8c020u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  HMODULE hModule;
  FARPROC pFVar1;
  uint uVar2;
  DWORD DVar3;
  int * piVar4;
  
  if (*(int *)((int)this + 0x10) == 0) {
    return 0x80040234;
  }
  piVar4 = (int *)0x0;
  (*(undefined4 *)(gen_frame + 0x30)) = *(undefined4 *)((int)this + 0x20);
  if (*(int *)((int)this + 0x48) == 0) {
    hModule = (HMODULE)F_00c83a90();
    if ((hModule == (HMODULE)0x0) ||
       (pFVar1 = gen_imp_GetProcAddress(hModule,"LoadRegTypeLib"), pFVar1 == (FARPROC)0x0)) {
LAB_00c8c0ce: ;
      DVar3 = gen_imp_GetLastError();
      uVar2 = DVar3 | 0x80070000;
    }
    else {
      uVar2 = ((code *)pFVar1)(&REFG(undefined, 0x1084cc8),1,0,0,&(*(int * PTR32 *)(gen_frame + 0x38)));
      if ((int)uVar2 < 0) {
        pFVar1 = gen_imp_GetProcAddress(hModule,"LoadTypeLib");
        if (pFVar1 == (FARPROC)0x0) goto LAB_00c8c0ce;
        uVar2 = ((code *)pFVar1)((*(undefined * PTR32 (*)[3])REFP(0x1128c40)),&(*(int * PTR32 *)(gen_frame + 0x38)));
        if ((int)uVar2 < 0) {
          return uVar2;
        }
      }
      uVar2 = ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x38)) + 0x18))((*(int * PTR32 *)(gen_frame + 0x38)),(*(undefined4 *)(gen_frame + 0x30)),(int)this + 0x48);
      ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x38)) + 8))((*(int * PTR32 *)(gen_frame + 0x38)));
      if (-1 < (int)uVar2) goto LAB_00c8c0c1;
    }
    if ((int)uVar2 < 0) {
      return uVar2;
    }
  }
  else {
LAB_00c8c0c1: ;
    piVar4 = *(int * PTR32 *)((int)this + 0x48);
    ((code *)*(gen_code32 *)(*piVar4 + 4))(piVar4);
  }
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x14))))
                    (*(undefined4 * PTR32 *)((int)this + 0x14),*(undefined4 *)((int)this + 0x20),&(*(int * PTR32 *)(gen_frame + 0x34)));
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar4 + 0x2c))
                      (piVar4,(*(int * PTR32 *)(gen_frame + 0x34)),*(undefined4 *)((int)this + 0x24),
                       (uint)*(ushort *)((int)this + 0x28),(int)this + 0x34,
                       *(undefined4 *)((int)this + 0x2c),((undefined1 *)(gen_frame + 0xc)),((undefined1 *)(gen_frame + 0x2c)));
    *(uint *)((int)this + 0x4c) = uVar2;
    ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x34)) + 8))((*(int * PTR32 *)(gen_frame + 0x34)));
    ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4);
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x10) + 0xc))))(*(int * PTR32 *)((int)this + 0x10),this);
    *(undefined4 *)((int)this + 0x10) = 0;
    return uVar2;
  }
  ((code *)*(gen_code32 *)(*piVar4 + 8))(piVar4);
  return uVar2;
}

/* ref: FUN_00c8c160 */
uint F_00c8c160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8c160u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c83b90((undefined *)((int)this + 4),param_1,param_2);
  *(undefined4 *)((int)this + 0x10) = 0;
  return (uint)this;
}

/* ref: FUN_00c8c190 */
undefined * F_00c8c190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc8c190u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  F_00c83b90((undefined *)((int)this + 8),param_1,param_2);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(int *)((int)this + 0x18) = param_4;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x1128cd0));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[18])REFP(0x1128c88));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[4])REFP(0x1128c74));
  if (param_4 == 0) {
    *param_3 = 0x80004003;
  }
  return this;
}

/* ref: FUN_00c8c1e0 */
uint F_00c8c1e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8c1e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x50))(param_1,param_2,0);
  if (-1 < (int)uVar1) {
    return 0;
  }
  uVar1 = F_00c8a810(param_1,((code *)REFP(0xc8ceb0)),param_2);
  return uVar1;
}

/* ref: FUN_00c8c220 */
uint F_00c8c220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8c220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c8a810(param_1,((code *)REFP(0xc8ce90)),param_2);
  return uVar1;
}

/* ref: FUN_00c8c240 */
uint F_00c8c240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8c240u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c8a810(param_1,((code *)REFP(0xc8ce80)),param_2);
  return uVar1;
}

/* ref: FUN_00c8c260 */
uint F_00c8c260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8c260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c8a810(param_1,((code *)REFP(0xc8cea0)),param_2);
  return uVar1;
}

/* ref: FUN_00c8c280 */
uint F_00c8c280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc8c280u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  int param_4 = (int)gen_a4;
  F_00c83b90((undefined *)((int)this + 8),param_1,param_2);
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x1128cd0));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[18])REFP(0x1128c88));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[4])REFP(0x1128c74));
  *(int *)((int)this + 0x18) = param_4;
  if (param_4 == 0) {
    *param_3 = 0x80004003;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[21])REFP(0x1128d80));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[18])REFP(0x1128d38));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[4])REFP(0x1128d24));
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 1;
  return (uint)this;
}

/* ref: FUN_00c8c300 */
uint F_00c8c300(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc8c300u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined8 uVar1;
  
  F_00c83b90((undefined *)((int)this + 4),param_1,param_2);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  uVar1 = REFG(double, 0x1088130);
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x38) = param_4;
  *(undefined4 *)((int)this + 0x28) = 0xffffffff;
  *(undefined4 *)((int)this + 0x2c) = 0x7fffffff;
  *(undefined8 *)((int)this + 0x30) = uVar1;
  return (uint)this;
}

/* ref: FUN_00c8c370 */
uint F_00c8c370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8c370u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c83b90((undefined *)((int)this + 4),param_1,param_2);
  *(undefined4 *)((int)this + 0x10) = 0;
  return (uint)this;
}

/* ref: FUN_00c8c3a0 */
uint F_00c8c3a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8c3a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c83b90((undefined *)((int)this + 4),param_1,param_2);
  *(undefined4 *)((int)this + 0x10) = 0;
  return (uint)this;
}

/* ref: FUN_00c8c3d0 */
uint F_00c8c3d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, double gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13)
{
  GEN_ENTER(0xc8c3d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[15];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  memcpy(&gen_args[5], &gen_a5, sizeof gen_a5);
  gen_args[7] = gen_a6;
  gen_args[8] = gen_a7;
  gen_args[9] = gen_a8;
  gen_args[10] = gen_a9;
  gen_args[11] = gen_a10;
  gen_args[12] = gen_a11;
  gen_args[13] = gen_a12;
  gen_args[14] = gen_a13;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  double dVar2;
  uint uVar3;
  HMODULE hModule;
  FARPROC pFVar4;
  DWORD DVar5;
  
  (*(int * PTR32 *)(gen_frame + 0x8)) = (*(int * PTR32 *)&gen_args[0]);
  F_00c83b90((*(int * PTR32 *)&gen_args[0]),0,(*(int * PTR32 *)&gen_args[2]));
  (*(int * PTR32 *)&gen_args[0])[4] = (int)(*(int * PTR32 *)&gen_args[1]);
  (*(int * PTR32 *)&gen_args[0])[5] = (int)(*(int * PTR32 *)&gen_args[4]);
  (*(int * PTR32 *)&gen_args[0])[8] = (*(int *)&gen_args[7]);
  (*(int * PTR32 *)&gen_args[0])[9] = (*(int *)&gen_args[8]);
  *((short *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 10))) = (short)(*(undefined4 *)&gen_args[9]);
  (*(int * PTR32 *)&gen_args[0])[0xb] = (*(int *)&gen_args[12]);
  (*(int * PTR32 *)&gen_args[0])[0xc] = (*(int *)&gen_args[14]);
  *(*(int * PTR32 *)&gen_args[0]) = (int)(*(undefined * PTR32 (*)[4])REFP(0x1128df0));
  (*(int * PTR32 *)&gen_args[0])[3] = (int)(*(undefined * PTR32 (*)[7])REFP(0x1128dd4));
  F_00c8bc60((*(int * PTR32 *)&gen_args[0]) + 0xd,(*(undefined4 *)&gen_args[10]),(*(undefined4 *)&gen_args[11]),(*(uint * PTR32 *)&gen_args[3]));
  dVar2 = (*(double *)&gen_args[5]) * *(double *)&REFG(double, 0x1087ef0);
  piVar1 = (*(int * PTR32 *)&gen_args[0]) + 0x12;
  *piVar1 = 0;
  (*(int * PTR32 *)&gen_args[0])[0x13] = -0x7fffbffc;
  *((longlong *)GEN_TOP(((*(int * PTR32 *)&gen_args[0]) + 6))) = (longlong)dVar2;
  uVar3 = (*((code *)GEN_TOP(**((undefined4 * PTR32 *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[5])))))(((undefined4 *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[5])),(*(int * PTR32 *)&gen_args[0])[8],&(*(int * PTR32 *)(gen_frame + 0x8)));
  if ((int)uVar3 < 0) goto LAB_00c8c54f;
  ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x8)) + 8))((*(int * PTR32 *)(gen_frame + 0x8)));
  (*(int * PTR32 *)&gen_args[4]) = (int *)0x0;
  if (*piVar1 == 0) {
    hModule = (HMODULE)F_00c83a90();
    if ((hModule == (HMODULE)0x0) ||
       (pFVar4 = gen_imp_GetProcAddress(hModule,"LoadRegTypeLib"), pFVar4 == (FARPROC)0x0)) {
LAB_00c8c55f: ;
      DVar5 = gen_imp_GetLastError();
      uVar3 = DVar5 | 0x80070000;
    }
    else {
      uVar3 = ((code *)pFVar4)(&REFG(undefined, 0x1084cc8),1,0,0,&(*(int * PTR32 *)&gen_args[2]));
      if ((int)uVar3 < 0) {
        pFVar4 = gen_imp_GetProcAddress(hModule,"LoadTypeLib");
        if (pFVar4 == (FARPROC)0x0) goto LAB_00c8c55f;
        uVar3 = ((code *)pFVar4)((*(undefined * PTR32 (*)[3])REFP(0x1128c40)),&(*(int * PTR32 *)&gen_args[2]));
        if ((int)uVar3 < 0) goto LAB_00c8c56e;
      }
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 0x18))))((*(int * PTR32 *)&gen_args[2]),(*(int *)&gen_args[7]),piVar1);
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[2]) + 8))))((*(int * PTR32 *)&gen_args[2]));
      if (-1 < (int)uVar3) goto LAB_00c8c50e;
    }
    if ((int)uVar3 < 0) {
LAB_00c8c56e: ;
      *(*(uint * PTR32 *)&gen_args[3]) = uVar3;
      return (uint)(*(int * PTR32 *)&gen_args[0]);
    }
  }
  else {
LAB_00c8c50e: ;
    (*(int * PTR32 *)&gen_args[4]) = (int *)*piVar1;
    ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[4]) + 4))))((*(int * PTR32 *)&gen_args[4]));
  }
  ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[4]) + 8))))((*(int * PTR32 *)&gen_args[4]));
  if ((short)(*(undefined4 *)&gen_args[9]) == 4) {
    (*(int * PTR32 *)&gen_args[0])[0x10] = 1;
    (*(int * PTR32 *)&gen_args[0])[0x11] = -3;
    (*(int * PTR32 *)&gen_args[0])[0xe] = (int)((*(int * PTR32 *)&gen_args[0]) + 0x11);
  }
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[1]) + 8))))((*(int * PTR32 *)&gen_args[1]),(*(int * PTR32 *)&gen_args[0]));
  if (-1 < (int)uVar3) {
    return (uint)(*(int * PTR32 *)&gen_args[0]);
  }
LAB_00c8c54f: ;
  *(*(uint * PTR32 *)&gen_args[3]) = uVar3;
  return (uint)(*(int * PTR32 *)&gen_args[0]);
}

/* ref: FUN_00c8c580 */
uint F_00c8c580(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8c580u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  gen_imp_InitializeCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  F_00c8d760((int)this + 0x20,0);
  F_00c8d760((int)this + 0x38,0);
  F_00c88d50((undefined *)((int)this + 0x50),1,param_1);
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  return (uint)this;
}

/* ref: FUN_00c8c5d0 */
unsigned int F_00c8c5d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc8c5d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int * piVar1;
  uint uVar2;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = *(undefined * PTR32 *)((int)this + 0x20);
  while ((*(undefined * PTR32 *)(gen_frame + 0x8)) != (undefined *)0x0) {
    uVar2 = F_00c8d7f0(&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar2 + 0xc) + 8))))(*(int *)(uVar2 + 0xc),uVar2 + 0xc);
  }
  F_00c8d780((undefined *)((int)this + 0x20));
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = *(undefined * PTR32 *)((int)this + 0x38);
  while ((*(undefined * PTR32 *)(gen_frame + 0x8)) != (undefined *)0x0) {
    uVar2 = F_00c8d7f0(&(*(undefined * PTR32 *)(gen_frame + 0x8)));
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar2 + 0xc) + 8))))(*(int *)(uVar2 + 0xc),uVar2 + 0xc);
  }
  F_00c8d780((undefined *)((int)this + 0x38));
  piVar1 = *(int * PTR32 *)((int)this + 0x60);
  if (piVar1 != (int *)0x0) {
    if (*(int *)((int)this + 0x54) != 0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,*(int *)((int)this + 0x54));
      *(undefined4 *)((int)this + 0x54) = 0;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x60) + 8))))(*(int * PTR32 *)((int)this + 0x60));
  }
  F_00c88dd0((undefined *)((int)this + 0x50));
  F_00c8df10((undefined *)((int)this + 0x38));
  F_00c8df10((undefined *)((int)this + 0x20));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return 0;
}

/* ref: FUN_00c8c690 */
uint F_00c8c690(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, double gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11)
{
  GEN_ENTER(0xc8c690u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  double param_4 = (double)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  undefined4 param_11 = (undefined4)gen_a10;
  undefined4 param_12 = (undefined4)gen_a11;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar1;
  uint uVar2;
  
  (*(uint *)(gen_frame + 0x8)) = param_1;
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 8);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  (*(uint *)(gen_frame + 0x8)) = 0;
  *param_2 = 0;
  uVar1 = F_004069f0(0x50);
  if (uVar1 != 0) {
    uVar2 = F_00c8c3d0(uVar1,param_1,0,&(*(uint *)(gen_frame + 0x8)),param_3,param_4,param_5,param_6,param_7,param_8,
                         param_9,param_10,param_11,param_12);
    uVar1 = (*(uint *)(gen_frame + 0x8));
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
unsigned int F_00c8c740(unsigned int gen_a0)
{
  GEN_ENTER(0xc8c740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)((int)this + 0x60) != 0) {
    gen_imp_ResetEvent(*(HANDLE *)((int)this + 0x50));
    (*(int *)(gen_frame + 0x8)) = 0;
    (*(uint *)(gen_frame + 0x4)) = 0;
    if (*(int *)((int)this + 0x20) != 0) {
      uVar1 = F_00c8d830(*(int *)((int)this + 0x20));
      (*(int *)(gen_frame + 0x8)) = *(int *)(uVar1 + 0x1c);
      (*(uint *)(gen_frame + 0x4)) = *(uint *)(uVar1 + 0x18);
    }
    if ((*(int *)((int)this + 100) != 0) && (*(int *)((int)this + 0x38) != 0)) {
      uVar1 = F_00c8d830(*(int *)((int)this + 0x38));
      uVar3 = *(uint *)(uVar1 + 0x18) + *(uint *)((int)this + 0x68);
      iVar2 = *(int *)(uVar1 + 0x1c) + *(int *)((int)this + 0x6c) +
              (uint)CARRY4(*(uint *)(uVar1 + 0x18),*(uint *)((int)this + 0x68));
      if (((*(uint *)(gen_frame + 0x4)) == 0 && (*(int *)(gen_frame + 0x8)) == 0) ||
         ((iVar2 <= (*(int *)(gen_frame + 0x8)) && ((iVar2 < (*(int *)(gen_frame + 0x8)) || (uVar3 < (*(uint *)(gen_frame + 0x4)))))))) {
        (*(int *)(gen_frame + 0x8)) = iVar2;
        (*(uint *)(gen_frame + 0x4)) = uVar3;
      }
    }
    if (((-1 < (*(int *)(gen_frame + 0x8))) && ((0 < (*(int *)(gen_frame + 0x8)) || ((*(uint *)(gen_frame + 0x4)) != 0)))) &&
       (((*(uint *)(gen_frame + 0x4)) != *(uint *)((int)this + 0x58) || ((*(int *)(gen_frame + 0x8)) != *(int *)((int)this + 0x5c))))) {
      if (*(int *)((int)this + 0x54) != 0) {
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x60) + 0x18))))
                  (*(int * PTR32 *)((int)this + 0x60),*(int *)((int)this + 0x54));
        gen_imp_ResetEvent(*(HANDLE *)((int)this + 0x50));
      }
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x60) + 0x10))))
                (*(int * PTR32 *)((int)this + 0x60),(*(uint *)(gen_frame + 0x4)),(*(int *)(gen_frame + 0x8)),0,0,*(undefined4 *)((int)this + 0x50),
                 (int)this + 0x54);
      *(uint *)((int)this + 0x58) = (*(uint *)(gen_frame + 0x4));
      *(int *)((int)this + 0x5c) = (*(int *)(gen_frame + 0x8));
    }
  }
  return 0;
}

/* ref: FUN_00c8c820 */
uint F_00c8c820(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8c820u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  *(undefined4 *)((int)this + 0x6c) = param_2;
  *(undefined4 *)((int)this + 0x68) = param_1;
  *(undefined4 *)((int)this + 100) = 1;
  F_00c8c740(this);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return 0;
}

/* ref: FUN_00c8c860 */
uint F_00c8c860(unsigned int gen_a0)
{
  GEN_ENTER(0xc8c860u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  *(undefined4 *)((int)this + 100) = 0;
  F_00c8c740(this);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return 0;
}

/* ref: FUN_00c8c890 */
uint F_00c8c890(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8c890u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  DWORD param_2 = (DWORD)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  DWORD DVar2;
  int iVar3;
  LPCRITICAL_SECTION lpCriticalSection;
  uint uVar4;
  
  lpCriticalSection = (LPCRITICAL_SECTION)((int)this + 8);
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x18)) = lpCriticalSection;
  do {
    gen_imp_EnterCriticalSection(lpCriticalSection);
    uVar4 = 0;
    if (*(int *)((int)this + 0x20) != 0) {
      uVar4 = F_00c8d830(*(int *)((int)this + 0x20));
    }
    if ((*(int *)((int)this + 100) != 0) && (*(int *)((int)this + 0x38) != 0)) {
      uVar1 = F_00c8d830(*(int *)((int)this + 0x38));
      if (uVar4 != 0) {
        iVar3 = *(int *)(uVar1 + 0x1c) + *(int *)((int)this + 0x6c) +
                (uint)CARRY4(*(uint *)(uVar1 + 0x18),*(uint *)((int)this + 0x68));
        if ((*(int *)(uVar4 + 0x1c) < iVar3) ||
           ((*(int *)(uVar4 + 0x1c) <= iVar3 &&
            (*(uint *)(uVar4 + 0x18) <= *(uint *)(uVar1 + 0x18) + *(uint *)((int)this + 0x68)))))
        goto LAB_00c8c8f0;
      }
      uVar4 = uVar1;
    }
LAB_00c8c8f0: ;
    if (uVar4 != 0) {
      uVar1 = *(uint *)(uVar4 + 0x18);
      iVar3 = *(int *)(uVar4 + 0x1c);
      (*(uint *)(gen_frame + 0x10)) = uVar1;
      lpCriticalSection = (*(LPCRITICAL_SECTION *)(gen_frame + 0x18));
      if (*(int *)((int)this + 0x60) != 0) {
        if (*(int *)(uVar4 + 0x30) != 0) {
          if (*(int *)((int)this + 100) == 0) goto LAB_00c8c942;
          (*(uint *)(gen_frame + 0x10)) = uVar1 + *(uint *)((int)this + 0x68);
          iVar3 = iVar3 + *(int *)((int)this + 0x6c) +
                  (uint)CARRY4(uVar1,*(uint *)((int)this + 0x68));
        }
        (*(undefined8 *)(gen_frame + 0x8)) = 0;
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x60) + 0xc))))(*(int * PTR32 *)((int)this + 0x60),&(*(undefined8 *)(gen_frame + 0x8)));
        if ((iVar3 < (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 4))) ||
           ((lpCriticalSection = (*(LPCRITICAL_SECTION *)(gen_frame + 0x18)), iVar3 <= (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 4)) && ((*(uint *)(gen_frame + 0x10)) <= (uint)(*(undefined8 *)(gen_frame + 0x8))))))
        {
          ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar4 + 0xc) + 4))))(*(int *)(uVar4 + 0xc),uVar4 + 0xc);
          *param_1 = uVar4;
          gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x18)));
          return 0;
        }
      }
    }
LAB_00c8c942: ;
    gen_imp_LeaveCriticalSection(lpCriticalSection);
    DVar2 = gen_imp_WaitForSingleObject(*(HANDLE *)((int)this + 0x50),param_2);
    if (DVar2 != 0) {
      return 0x80004004;
    }
  } while( true );
}

/* ref: FUN_00c8c9a0 */
uint F_00c8c9a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc8c9a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint * param_3 = (uint *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  (*(LPCRITICAL_SECTION *)(gen_frame + 0x18)) = (LPCRITICAL_SECTION)((int)this + 8);
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  uVar1 = 0;
  if (*(int *)((int)this + 0x38) != 0) {
    uVar1 = F_00c8d830(*(int *)((int)this + 0x38));
  }
  uVar3 = 0;
  if (*(int *)((int)this + 0x20) != 0) {
    uVar3 = F_00c8d830(*(int *)((int)this + 0x20));
    if (uVar3 != 0) {
      (*(uint *)(gen_frame + 0x10)) = *(uint *)(uVar3 + 0x18);
      (*(int *)(gen_frame + 0x14)) = *(int *)(uVar3 + 0x1c);
      if (*(int *)((int)this + 0x60) != 0) {
        (*(undefined8 *)(gen_frame + 0x8)) = 0;
        ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x60) + 0xc))))(*(int * PTR32 *)((int)this + 0x60),&(*(undefined8 *)(gen_frame + 0x8)));
        if (((*(int *)(gen_frame + 0x14)) <= (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 4))) &&
           (((*(int *)(gen_frame + 0x14)) < (*(undefined4 *)((char *)&(*(undefined8 *)(gen_frame + 0x8)) + 4)) || ((*(uint *)(gen_frame + 0x10)) <= (uint)(*(undefined8 *)(gen_frame + 0x8)))))) {
          ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar3 + 0xc) + 4))))(uVar3 + 0xc);
          *param_3 = uVar3;
          gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x18)));
          return 0;
        }
      }
    }
  }
  if ((uVar1 != 0) &&
     ((*(int *)(uVar1 + 0x1c) <= param_2 &&
      ((*(int *)(uVar1 + 0x1c) < param_2 || (*(uint *)(uVar1 + 0x18) <= param_1)))))) {
    ((code *)*((gen_code32 *)GEN_TOP((*(int *)(uVar1 + 0xc) + 4))))(*(int *)(uVar1 + 0xc),uVar1 + 0xc);
    *param_3 = uVar1;
    gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x18)));
    return 0;
  }
  if ((*(int *)((int)this + 100) != 0) && (uVar3 != 0)) {
    iVar2 = *(int *)((int)this + 0x6c) + param_2 + (uint)CARRY4(*(uint *)((int)this + 0x68),param_1)
    ;
    if ((*(int *)(uVar3 + 0x1c) <= iVar2) &&
       ((*(int *)(uVar3 + 0x1c) < iVar2 ||
        (*(uint *)(uVar3 + 0x18) <= *(uint *)((int)this + 0x68) + param_1)))) {
      *param_3 = uVar3;
      gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x18)));
      return 0;
    }
  }
  gen_imp_LeaveCriticalSection((*(LPCRITICAL_SECTION *)(gen_frame + 0x18)));
  return 0x80040216;
}

/* ref: FUN_00c8cae0 */
uint F_00c8cae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8cae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c83b90((undefined *)((int)this + 4),param_1,param_2);
  *(undefined4 *)((int)this + 0x10) = 0;
  return (uint)this;
}

/* ref: FUN_00c8cb10 */
uint F_00c8cb10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8cb10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c83b90((undefined *)((int)this + 4),param_1,param_2);
  *(undefined4 *)((int)this + 0x10) = 0;
  return (uint)this;
}

/* ref: FUN_00c8cb40 */
uint F_00c8cb40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8cb40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00c83b90((undefined *)((int)this + 4),param_1,param_2);
  *(undefined4 *)((int)this + 0x10) = 0;
  return (uint)this;
}

/* ref: FUN_00c8cb70 */
uint F_00c8cb70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8cb70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * this_00;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0xc) + 4))))(*(int *)(param_1 + 0xc),param_1 + 0xc);
  this_00 = (int *)((int)this + 0x38);
  if (*(int *)(param_1 + 0x30) == 0) {
    this_00 = (int *)((int)this + 0x20);
  }
  (*(int *)(gen_frame + 0x8)) = *this_00;
  if (*this_00 == 0) {
LAB_00c8cbed: ;
    F_00c8d8e0(this_00,param_1);
  }
  else {
    do {
      uVar1 = F_00c8d830((*(int *)(gen_frame + 0x8)));
      if ((*(int *)(param_1 + 0x1c) < *(int *)(uVar1 + 0x1c)) ||
         ((*(int *)(param_1 + 0x1c) <= *(int *)(uVar1 + 0x1c) &&
          (*(uint *)(param_1 + 0x18) < *(uint *)(uVar1 + 0x18))))) {
        if ((*(int *)(gen_frame + 0x8)) == 0) goto LAB_00c8cbed;
        F_00c8dc50(this_00,(*(int *)(gen_frame + 0x8)),param_1);
        goto LAB_00c8cc00;
      }
      F_00c8d7f0(&(*(int *)(gen_frame + 0x8)));
    } while ((*(int *)(gen_frame + 0x8)) != 0);
    F_00c8d8e0(this_00,param_1);
  }
LAB_00c8cc00: ;
  F_00c8c740(this);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return 0;
}

/* ref: FUN_00c8cc20 */
uint F_00c8cc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8cc20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  int * this_00;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  this_00 = (int *)((int)this + 0x38);
  if (*(int *)(param_1 + 0x30) == 0) {
    this_00 = (int *)((int)this + 0x20);
  }
  (*(int *)(gen_frame + 0x8)) = *this_00;
  if (*this_00 == 0) {
LAB_00c8cc83: ;
    uVar1 = 0x80040216;
  }
  else {
    do {
      uVar1 = F_00c8d830((*(int *)(gen_frame + 0x8)));
      if (uVar1 == param_1) {
        if ((*(int *)(gen_frame + 0x8)) == 0) goto LAB_00c8cc83;
        F_00c8d870(this_00,(*(int *)(gen_frame + 0x8)));
        ((code *)*((gen_code32 *)GEN_TOP((*(int *)(param_1 + 0xc) + 8))))(*(int *)(param_1 + 0xc),param_1 + 0xc);
        F_00c8c740(this);
        uVar1 = 0;
        goto LAB_00c8cca8;
      }
      F_00c8d7f0(&(*(int *)(gen_frame + 0x8)));
    } while ((*(int *)(gen_frame + 0x8)) != 0);
    uVar1 = 0x80040216;
  }
LAB_00c8cca8: ;
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return uVar1;
}

/* ref: FUN_00c8ccc0 */
uint F_00c8ccc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8ccc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  if (param_1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x60);
  if (piVar1 != (int *)0x0) {
    if (*(int *)((int)this + 0x54) != 0) {
      ((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1,*(int *)((int)this + 0x54));
      *(undefined4 *)((int)this + 0x54) = 0;
    }
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x60) + 8))))(*(int * PTR32 *)((int)this + 0x60));
  }
  *(int * PTR32 *)((int)this + 0x60) = param_1;
  F_00c8c740(this);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 8));
  return 0;
}

/* ref: FUN_00c8cd60 */
unsigned int F_00c8cd60(unsigned int gen_a0)
{
  GEN_ENTER(0xc8cd60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  F_00c83a60();
  return 0;
}

/* ref: FUN_00c8cd90 */
unsigned int F_00c8cd90(unsigned int gen_a0)
{
  GEN_ENTER(0xc8cd90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  F_00c83a60();
  return 0;
}

/* ref: FUN_00c8ce00 */
uint F_00c8ce00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8ce00u, gen_a0, gen_a1, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  F_00c8d760(in_ecx,param_2);
  return in_ecx;
}

/* ref: FUN_00c8ce30 */
uint F_00c8ce30(unsigned int gen_a0)
{
  GEN_ENTER(0xc8ce30u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c8d7f0(param_1);
  return uVar1;
}

/* ref: FUN_00c8ce40 */
uint F_00c8ce40(unsigned int gen_a0)
{
  GEN_ENTER(0xc8ce40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c8d830(param_1);
  return uVar1;
}

/* ref: FUN_00c8ce50 */
uint F_00c8ce50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8ce50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c8d870(this,param_1);
  return uVar1;
}

/* ref: FUN_00c8ce60 */
uint F_00c8ce60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8ce60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c8dc50(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00c8ce70 */
uint F_00c8ce70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8ce70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c8d8e0(this,param_1);
  return uVar1;
}

/* ref: FUN_00c8ce80 */
uint F_00c8ce80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc8ce80u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x28))
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c8ce90 */
uint F_00c8ce90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc8ce90u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x2c))
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c8cea0 */
uint F_00c8cea0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc8cea0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x4c))
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c8ceb0 */
uint F_00c8ceb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc8ceb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  undefined4 param_8 = (undefined4)gen_a7;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0x30))
                    (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c8cee0 */
uint F_00c8cee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc8cee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + 0xc))))
                    (*(undefined4 * PTR32 *)(param_1 + 0xc),param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c8cf00 */
uint F_00c8cf00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8cf00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 4))))(*(int * PTR32 *)(param_1 + 0xc));
  return uVar1;
}

/* ref: FUN_00c8cf20 */
uint F_00c8cf20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8cf20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 8))))(*(int * PTR32 *)(param_1 + 0xc));
  return uVar1;
}

/* ref: FUN_00c8cf40 */
uint F_00c8cf40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8cf40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0x80004005;
}

/* ref: FUN_00c8cf50 */
uint F_00c8cf50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8cf50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c8cf20(this,param_1 + -4);
  return uVar1;
}

/* ref: FUN_00c8cf60 */
uint F_00c8cf60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8cf60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c8cf90((undefined *)((int)this + -8),param_1);
  return uVar1;
}

/* ref: FUN_00c8cf70 */
uint F_00c8cf70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8cf70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c8cf00(this,param_1 + -4);
  return uVar1;
}

/* ref: FUN_00c8cf80 */
uint F_00c8cf80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc8cf80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00c8cee0(this,param_1 + -4,param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c8cf90 */
uint F_00c8cf90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8cf90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  F_00c83a60();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c8cfd0 */
uint F_00c8cfd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8cfd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c8d010((undefined *)((int)this + -8),param_1);
  return uVar1;
}

/* ref: FUN_00c8cfe0 */
unsigned int F_00c8cfe0(unsigned int gen_a0)
{
  GEN_ENTER(0xc8cfe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  F_00c83a60();
  return 0;
}

/* ref: FUN_00c8d010 */
uint F_00c8d010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d010u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  piVar1 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  F_00c83a60();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c8d060 */
uint F_00c8d060(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8d060u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)(param_1 + -8))))
                    (*(undefined4 * PTR32 *)(param_1 + -8),param_2,param_3);
  return uVar1;
}

/* ref: FUN_00c8d080 */
uint F_00c8d080(unsigned int gen_a0)
{
  GEN_ENTER(0xc8d080u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + -8) + 4))))(*(int * PTR32 *)(param_1 + -8));
  return uVar1;
}

/* ref: FUN_00c8d0a0 */
uint F_00c8d0a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc8d0a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + -8) + 8))))(*(int * PTR32 *)(param_1 + -8));
  return uVar1;
}

/* ref: FUN_00c8d0c0 */
unsigned int F_00c8d0c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc8d0c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x48);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  F_00c8be30((undefined *)((int)this + 0x34));
  F_00c83a60();
  return 0;
}

/* ref: FUN_00c8d0f0 */
uint F_00c8d0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x48);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
  }
  F_00c8be30((undefined *)((int)this + 0x34));
  F_00c83a60();
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: EnlargedUnsignedDivide */
ulong F_00c8d130(unsigned long long gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8d130u, 0u, gen_a1, gen_a2, 0u);
  _ULARGE_INTEGER param_1; memcpy(&param_1, &gen_a0, sizeof param_1);
  ulong param_2 = (ulong)gen_a1;
  ulong * param_3 = (ulong *)(uintptr_t)gen_a2;
  if (param_3 != (ulong *)0x0) {
    *param_3 = (ulong)((ulonglong)(*(ULONGLONG *)&param_1) % (ulonglong)param_2);
  }
  return (ulong)((ulonglong)(*(ULONGLONG *)&param_1) / (ulonglong)param_2);
}

/* ref: FUN_00c8d160 */
ulonglong F_00c8d160(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc8d160u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint param_5 = (uint)gen_a4;
  uint param_6 = (uint)gen_a5;
  uint param_7 = (uint)gen_a6;
  uint param_8 = (uint)gen_a7;
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint local_34;
  uint local_24;
  uint local_1c;
  int iStack_18;
  
  uVar8 = (int)param_2 >> 0x1f;
  uVar11 = (param_1 ^ uVar8) - uVar8;
  uVar8 = ((param_2 ^ uVar8) - uVar8) - (uint)((param_1 ^ uVar8) < uVar8);
  uVar9 = (int)param_4 >> 0x1f;
  uVar13 = (param_3 ^ uVar9) - uVar9;
  uVar2 = (ulonglong)(((param_4 ^ uVar9) - uVar9) - (uint)((param_3 ^ uVar9) < uVar9));
  uVar9 = (int)param_6 >> 0x1f;
  uVar7 = (param_5 ^ uVar9) - uVar9;
  uVar9 = ((param_6 ^ uVar9) - uVar9) - (uint)((param_5 ^ uVar9) < uVar9);
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
  bVar16 = (bool)(bVar6 ^ bVar5);
  uVar1 = (ulonglong)uVar11 * (ulonglong)uVar13;
  local_34 = (uint)uVar1;
  uVar1 = uVar2 * uVar11 + (ulonglong)uVar8 * (ulonglong)uVar13 + (uVar1 >> 0x20);
  uVar11 = (uint)uVar1;
  uVar2 = uVar2 * uVar8 + (uVar1 >> 0x20);
  if (param_7 == 0 && param_8 == 0) goto LAB_00c8d2e9;
  if (bVar16) {
    local_24 = -param_7;
    uVar8 = -(param_8 + (param_7 != 0));
    if ((-1 < (int)param_8) &&
       ((bVar14 = 0 < (int)param_8, param_8 = uVar8, bVar14 || (param_7 != 0)))) goto LAB_00c8d2cb;
LAB_00c8d25d: ;
    local_1c = 0;
    iStack_18 = 0;
    param_8 = uVar8;
  }
  else {
    local_24 = param_7;
    uVar8 = param_8;
    if ((0 < (int)param_8) || (-1 < (int)param_8)) goto LAB_00c8d25d;
LAB_00c8d2cb: ;
    iStack_18 = -1;
    local_1c = 0xffffffff;
  }
  bVar14 = CARRY4(local_34,local_24);
  local_34 = local_34 + local_24;
  bVar15 = CARRY4(param_8,uVar11);
  uVar8 = param_8 + uVar11;
  uVar11 = bVar14 + uVar8;
  uVar8 = (uint)bVar15 + (uint)CARRY4((uint)bVar14,uVar8);
  lVar3 = CONCAT44(iStack_18 + (uint)CARRY4(uVar8,local_1c),uVar8 + local_1c);
  lVar4 = uVar2 + lVar3;
  uVar2 = uVar2 + lVar3;
  if (lVar4 < 0) {
    bVar16 = !bVar16;
    uVar8 = ~local_34;
    local_34 = uVar8 + 1;
    uVar11 = ~uVar11 + (uint)(0xfffffffe < uVar8);
    uVar8 = (uint)(local_34 == 0 && uVar11 == 0);
    uVar2 = CONCAT44(~(uint)((ulonglong)lVar4 >> 0x20) + (uint)CARRY4(~(uint)lVar4,uVar8),
                     ~(uint)lVar4 + uVar8);
  }
LAB_00c8d2e9: ;
  if (((int)param_6 < 1) && ((int)param_6 < 0)) {
    bVar16 = !bVar16;
  }
  if (uVar2 < CONCAT44(uVar9,uVar7)) {
    if (uVar2 == 0) {
      uVar2 = CONCAT44(uVar11,local_34) / CONCAT44(uVar9,uVar7);
      if (bVar16) {
        return CONCAT44(-((int)(uVar2 >> 0x20) + (uint)((int)uVar2 != 0)),-(int)uVar2);
      }
    }
    else {
      if (uVar9 == 0) {
        uVar1 = CONCAT44((int)uVar2,uVar11);
        uVar2 = CONCAT44((int)(uVar1 % (ulonglong)uVar7),local_34) / (ulonglong)uVar7;
        iVar10 = (int)uVar2;
        iVar12 = (int)(uVar1 / uVar7) + (int)(uVar2 >> 0x20);
        if (bVar16) {
          bVar16 = iVar10 != 0;
          iVar10 = -iVar10;
          iVar12 = -(iVar12 + (uint)bVar16);
        }
        return CONCAT44(iVar12,iVar10);
      }
      param_2 = 0;
      param_1 = 0;
      param_6 = 0x40;
      do {
        param_2 = param_2 << 1 | param_1 >> 0x1f;
        uVar13 = (int)(uVar2 >> 0x20) << 1 | (uint)uVar2 >> 0x1f;
        param_1 = param_1 * 2;
        uVar8 = (uint)uVar2 * 2;
        if ((int)uVar11 < 0) {
          uVar8 = uVar8 + 1;
        }
        uVar11 = uVar11 << 1 | local_34 >> 0x1f;
        local_34 = local_34 * 2;
        if ((uVar9 <= uVar13) && ((uVar9 < uVar13 || (uVar7 <= uVar8)))) {
          bVar14 = uVar8 < uVar7;
          uVar8 = uVar8 - uVar7;
          uVar13 = (uVar13 - uVar9) - (uint)bVar14;
          bVar14 = 0xfffffffe < param_1;
          param_1 = param_1 + 1;
          param_2 = param_2 + bVar14;
        }
        uVar2 = CONCAT44(uVar13,uVar8);
        param_6 = param_6 + -1;
      } while (param_6 != 0);
      if (bVar16) {
        bVar16 = param_1 != 0;
        param_1 = -param_1;
        param_2 = -(param_2 + bVar16);
      }
      uVar2 = CONCAT44(param_2,param_1);
    }
    return uVar2;
  }
  if (bVar16) {
    return 0x8000000000000000;
  }
  return 0x7fffffffffffffff;
}

/* ref: FUN_00c8d420 */
uint F_00c8d420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
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
      uVar7 = -(uVar7 + ((*(uint *)&gen_args[4]) != 0));
      bVar14 = (int)(*(uint *)&gen_args[4]) < 1;
      uVar10 = -(*(uint *)&gen_args[4]);
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
uint F_00c8d620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d620u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00c8d630 */
uint F_00c8d630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d630u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00c8d650 */
uint F_00c8d650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d650u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00c8d660 */
uint F_00c8d660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d660u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00c8d6b0 */
uint F_00c8d6b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d6b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 4) < *(int *)this) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 8);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    *(uint *)((int)this + 8) = param_1;
    return param_1;
  }
  uVar1 = F_00406ad0(param_1);
  return uVar1;
}

/* ref: FUN_00c8d700 */
uint F_00c8d700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d700u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == 0) {
    return *in_ecx;
  }
  return *(uint *)(param_2 + 4);
}

/* ref: FUN_00c8d720 */
uint F_00c8d720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d720u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  if (param_2 == (uint *)0x0) {
    return *(uint *)(in_ecx + 4);
  }
  return *param_2;
}

/* ref: FUN_00c8d740 */
unsigned int F_00c8d740(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8d740u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  return 0;
}

/* ref: FUN_00c8d760 */
uint F_00c8d760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d760u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 10;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00c8d780 */
unsigned int F_00c8d780(unsigned int gen_a0)
{
  GEN_ENTER(0xc8d780u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    F_00406ad0(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)this = 0;
  return 0;
}

/* ref: FUN_00c8d7f0 */
uint F_00c8d7f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc8d7f0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return 0;
  }
  *param_1 = *(int *)(iVar1 + 4);
  return *(uint *)(iVar1 + 8);
}

/* ref: FUN_00c8d810 */
uint F_00c8d810(unsigned int gen_a0)
{
  GEN_ENTER(0xc8d810u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (param_1 == 0) {
    return 0;
  }
  return *(uint *)(param_1 + 8);
}

/* ref: FUN_00c8d830 */
uint F_00c8d830(unsigned int gen_a0)
{
  GEN_ENTER(0xc8d830u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return *(uint *)(param_1 + 8);
}

/* ref: FUN_00c8d840 */
uint F_00c8d840(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d840u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)this;
  while( true ) {
    uVar1 = uVar2;
    if (uVar1 == 0) {
      return 0;
    }
    if (*(int *)(uVar1 + 8) == param_1) break;
    uVar2 = *(uint *)this;
    if (uVar1 != 0) {
      uVar2 = *(uint *)(uVar1 + 4);
    }
  }
  return uVar1;
}

/* ref: FUN_00c8d870 */
uint F_00c8d870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 == 0) {
    *(int *)this = param_1[1];
  }
  else {
    *(int *)(*param_1 + 4) = param_1[1];
  }
  if ((int *)param_1[1] == (int *)0x0) {
    *(int *)((int)this + 4) = *param_1;
  }
  else {
    *(int *)param_1[1] = *param_1;
  }
  uVar1 = param_1[2];
  if (*(int *)((int)this + 0x10) < *(int *)((int)this + 0xc)) {
    param_1[1] = *(int *)((int)this + 0x14);
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
    *(int * PTR32 *)((int)this + 0x14) = param_1;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
    return uVar1;
  }
  F_00406ad0(param_1);
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -1;
  return uVar1;
}

/* ref: FUN_00c8d8e0 */
uint F_00c8d8e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d8e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  undefined4 * puVar2;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x14);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = puVar2[1];
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
    *(undefined4 *)((int)this + 0x14) = uVar1;
    if (puVar2 != (undefined4 *)0x0) goto LAB_00c8d90d;
  }
  puVar2 = (undefined4 *)F_004069f0(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
LAB_00c8d90d: ;
  puVar2[2] = param_1;
  puVar2[1] = 0;
  *puVar2 = *(undefined4 *)((int)this + 4);
  if (*(int *)((int)this + 4) == 0) {
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(undefined4 * PTR32 *)this = puVar2;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
    return (uint)puVar2;
  }
  *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = puVar2;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
  return (uint)puVar2;
}

/* ref: FUN_00c8d950 */
uint F_00c8d950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 uVar1;
  undefined4 * puVar2;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x14);
  if (puVar2 != (undefined4 *)0x0) {
    uVar1 = puVar2[1];
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
    *(undefined4 *)((int)this + 0x14) = uVar1;
    if (puVar2 != (undefined4 *)0x0) goto LAB_00c8d97d;
  }
  puVar2 = (undefined4 *)F_004069f0(0xc);
  if (puVar2 == (undefined4 *)0x0) {
    return 0;
  }
LAB_00c8d97d: ;
  puVar2[2] = param_1;
  *puVar2 = 0;
  puVar2[1] = *(undefined4 *)this;
  if (*(undefined4 * PTR32 *)this == (undefined4 *)0x0) {
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar2;
    *(undefined4 * PTR32 *)this = puVar2;
    return (uint)puVar2;
  }
  **(undefined4 * PTR32 *)this = puVar2;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  *(undefined4 * PTR32 *)this = puVar2;
  return (uint)puVar2;
}

/* ref: FUN_00c8d9b0 */
uint F_00c8d9b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8d9b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  
  iVar1 = *param_1;
  do {
    if (iVar1 == 0) {
      return 1;
    }
    puVar4 = *(undefined4 * PTR32 *)((int)this + 0x14);
    uVar2 = *(undefined4 *)(iVar1 + 8);
    iVar1 = *(int *)(iVar1 + 4);
    if (puVar4 == (undefined4 *)0x0) {
LAB_00c8d9db: ;
      puVar4 = (undefined4 *)F_004069f0(0xc);
      if (puVar4 == (undefined4 *)0x0) {
        return 0;
      }
    }
    else {
      uVar3 = puVar4[1];
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
      *(undefined4 *)((int)this + 0x14) = uVar3;
      if (puVar4 == (undefined4 *)0x0) goto LAB_00c8d9db;
    }
    puVar4[2] = uVar2;
    puVar4[1] = 0;
    *puVar4 = *(undefined4 *)((int)this + 4);
    if (*(int *)((int)this + 4) == 0) {
      *(undefined4 * PTR32 *)this = puVar4;
    }
    else {
      *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = puVar4;
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4;
  } while( true );
}

/* ref: FUN_00c8da30 */
uint F_00c8da30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8da30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 * puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  
  puVar1 = *(undefined4 * PTR32 *)(param_1 + 4);
  do {
    if (puVar1 == (undefined4 *)0x0) {
      return 1;
    }
    puVar4 = *(undefined4 * PTR32 *)((int)this + 0x14);
    uVar2 = puVar1[2];
    if (puVar4 == (undefined4 *)0x0) {
LAB_00c8da59: ;
      puVar4 = (undefined4 *)F_004069f0(0xc);
      if (puVar4 == (undefined4 *)0x0) {
        return 0;
      }
    }
    else {
      uVar3 = puVar4[1];
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
      *(undefined4 *)((int)this + 0x14) = uVar3;
      if (puVar4 == (undefined4 *)0x0) goto LAB_00c8da59;
    }
    puVar4[2] = uVar2;
    *puVar4 = 0;
    puVar4[1] = *(undefined4 *)this;
    if (*(undefined4 * PTR32 *)this == (undefined4 *)0x0) {
      *(undefined4 * PTR32 *)((int)this + 4) = puVar4;
    }
    else {
      **(undefined4 * PTR32 *)this = puVar4;
    }
    *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    *(undefined4 * PTR32 *)this = puVar4;
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}

/* ref: FUN_00c8dab0 */
uint F_00c8dab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8dab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint * puVar2;
  uint uVar3;
  int * piVar4;
  
  if (param_1 == 0) {
    uVar3 = F_00c8d950(this,param_2);
    return uVar3;
  }
  if (param_1 == *(int *)((int)this + 4)) {
    uVar3 = F_00c8d8e0(this,param_2);
    return uVar3;
  }
  piVar4 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar4 != (int *)0x0) {
    iVar1 = piVar4[1];
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
    *(int *)((int)this + 0x14) = iVar1;
    if (piVar4 != (int *)0x0) goto LAB_00c8db0b;
  }
  piVar4 = (int *)F_004069f0(0xc);
  if (piVar4 == (int *)0x0) {
    return 0;
  }
LAB_00c8db0b: ;
  piVar4[2] = param_2;
  puVar2 = *(uint * PTR32 *)(param_1 + 4);
  *piVar4 = param_1;
  piVar4[1] = (int)puVar2;
  *puVar2 = (uint)piVar4;
  *(int * PTR32 *)(param_1 + 4) = piVar4;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return (uint)piVar4;
}

/* ref: FUN_00c8db30 */
uint F_00c8db30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8db30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  iVar1 = *param_2;
  do {
    if (iVar1 == 0) {
      return 1;
    }
    uVar2 = *(undefined4 *)(iVar1 + 8);
    puVar5 = *(undefined4 * PTR32 *)((int)this + 0x14);
    if (param_1 == (undefined4 *)0x0) {
      if (puVar5 != (undefined4 *)0x0) {
        uVar3 = puVar5[1];
        *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
        *(undefined4 *)((int)this + 0x14) = uVar3;
        if (puVar5 == (undefined4 *)0x0) goto LAB_00c8db6e;
LAB_00c8db80: ;
        puVar5[2] = uVar2;
        *puVar5 = 0;
        puVar5[1] = *(undefined4 *)this;
        if (*(undefined4 * PTR32 *)this == (undefined4 *)0x0) {
          *(undefined4 * PTR32 *)((int)this + 4) = puVar5;
          *(undefined4 * PTR32 *)this = puVar5;
        }
        else {
          **(undefined4 * PTR32 *)this = puVar5;
          *(undefined4 * PTR32 *)this = puVar5;
        }
        goto LAB_00c8dc19;
      }
LAB_00c8db6e: ;
      puVar5 = (undefined4 *)F_004069f0(0xc);
      if (puVar5 != (undefined4 *)0x0) goto LAB_00c8db80;
    }
    else {
      if (param_1 == *(undefined4 * PTR32 *)((int)this + 4)) {
        if (puVar5 == (undefined4 *)0x0) {
LAB_00c8dbb7: ;
          puVar5 = (undefined4 *)F_004069f0(0xc);
          if (puVar5 != (undefined4 *)0x0) goto LAB_00c8dbc5;
          goto LAB_00c8dc1c;
        }
        uVar3 = puVar5[1];
        *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
        *(undefined4 *)((int)this + 0x14) = uVar3;
        if (puVar5 == (undefined4 *)0x0) goto LAB_00c8dbb7;
LAB_00c8dbc5: ;
        puVar5[2] = uVar2;
        puVar5[1] = 0;
        *puVar5 = *(undefined4 *)((int)this + 4);
        if (*(int *)((int)this + 4) == 0) {
          *(undefined4 * PTR32 *)this = puVar5;
          *(undefined4 * PTR32 *)((int)this + 4) = puVar5;
        }
        else {
          *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = puVar5;
          *(undefined4 * PTR32 *)((int)this + 4) = puVar5;
        }
      }
      else {
        if (puVar5 == (undefined4 *)0x0) {
LAB_00c8dbfb: ;
          puVar5 = (undefined4 *)F_004069f0(0xc);
          if (puVar5 == (undefined4 *)0x0) {
            return 0;
          }
        }
        else {
          uVar3 = puVar5[1];
          *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
          *(undefined4 *)((int)this + 0x14) = uVar3;
          if (puVar5 == (undefined4 *)0x0) goto LAB_00c8dbfb;
        }
        puVar5[2] = uVar2;
        puVar4 = (undefined4 *)param_1[1];
        *puVar5 = param_1;
        puVar5[1] = puVar4;
        *puVar4 = puVar5;
        param_1[1] = puVar5;
      }
LAB_00c8dc19: ;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    }
LAB_00c8dc1c: ;
    if (puVar5 == (undefined4 *)0x0) {
      return 0;
    }
    iVar1 = *(int *)(iVar1 + 4);
    param_1 = puVar5;
  } while( true );
}

/* ref: FUN_00c8dc50 */
uint F_00c8dc50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8dc50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  if (param_1 == (int *)0x0) {
    uVar2 = F_00c8d8e0(this,param_2);
    return uVar2;
  }
  if (param_1 == *(int * PTR32 *)this) {
    uVar2 = F_00c8d950(this,param_2);
    return uVar2;
  }
  piVar3 = *(int * PTR32 *)((int)this + 0x14);
  if (piVar3 != (int *)0x0) {
    iVar1 = piVar3[1];
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
    *(int *)((int)this + 0x14) = iVar1;
    if (piVar3 != (int *)0x0) goto LAB_00c8dcaa;
  }
  piVar3 = (int *)F_004069f0(0xc);
  if (piVar3 == (int *)0x0) {
    return 0;
  }
LAB_00c8dcaa: ;
  piVar3[2] = param_2;
  iVar1 = *param_1;
  piVar3[1] = (int)param_1;
  *piVar3 = iVar1;
  *param_1 = (int)piVar3;
  *(int * PTR32 *)(iVar1 + 4) = piVar3;
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
  return (uint)piVar3;
}

/* ref: FUN_00c8dcd0 */
uint F_00c8dcd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8dcd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  int * piVar4;
  
  puVar1 = *(undefined4 * PTR32 *)(param_2 + 4);
  do {
    if (puVar1 == (undefined4 *)0x0) {
      return 1;
    }
    iVar2 = puVar1[2];
    piVar4 = *(int * PTR32 *)((int)this + 0x14);
    if (param_1 == (int *)0x0) {
      if (piVar4 != (int *)0x0) {
        iVar3 = piVar4[1];
        *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
        *(int *)((int)this + 0x14) = iVar3;
        if (piVar4 == (int *)0x0) goto LAB_00c8dd0e;
LAB_00c8dd20: ;
        piVar4[2] = iVar2;
        piVar4[1] = 0;
        *piVar4 = *(int *)((int)this + 4);
        if (*(int *)((int)this + 4) == 0) {
          *(int * PTR32 *)this = piVar4;
          *(int * PTR32 *)((int)this + 4) = piVar4;
        }
        else {
          *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = piVar4;
          *(int * PTR32 *)((int)this + 4) = piVar4;
        }
        goto LAB_00c8ddb7;
      }
LAB_00c8dd0e: ;
      piVar4 = (int *)F_004069f0(0xc);
      if (piVar4 != (int *)0x0) goto LAB_00c8dd20;
    }
    else {
      if (param_1 == *(int * PTR32 *)this) {
        if (piVar4 == (int *)0x0) {
LAB_00c8dd5a: ;
          piVar4 = (int *)F_004069f0(0xc);
          if (piVar4 != (int *)0x0) goto LAB_00c8dd68;
          goto LAB_00c8ddba;
        }
        iVar3 = piVar4[1];
        *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
        *(int *)((int)this + 0x14) = iVar3;
        if (piVar4 == (int *)0x0) goto LAB_00c8dd5a;
LAB_00c8dd68: ;
        piVar4[2] = iVar2;
        *piVar4 = 0;
        piVar4[1] = *(int *)this;
        if (*(undefined4 * PTR32 *)this == (undefined4 *)0x0) {
          *(int * PTR32 *)((int)this + 4) = piVar4;
          *(int * PTR32 *)this = piVar4;
        }
        else {
          **(undefined4 * PTR32 *)this = piVar4;
          *(int * PTR32 *)this = piVar4;
        }
      }
      else {
        if (piVar4 == (int *)0x0) {
LAB_00c8dd9a: ;
          piVar4 = (int *)F_004069f0(0xc);
          if (piVar4 == (int *)0x0) {
            return 0;
          }
        }
        else {
          iVar3 = piVar4[1];
          *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
          *(int *)((int)this + 0x14) = iVar3;
          if (piVar4 == (int *)0x0) goto LAB_00c8dd9a;
        }
        piVar4[2] = iVar2;
        iVar2 = *param_1;
        *piVar4 = iVar2;
        piVar4[1] = (int)param_1;
        *param_1 = (int)piVar4;
        *(int * PTR32 *)(iVar2 + 4) = piVar4;
      }
LAB_00c8ddb7: ;
      *(int *)((int)this + 8) = *(int *)((int)this + 8) + 1;
    }
LAB_00c8ddba: ;
    if (piVar4 == (int *)0x0) {
      return 0;
    }
    puVar1 = (undefined4 *)*puVar1;
    param_1 = piVar4;
  } while( true );
}

/* ref: FUN_00c8ddf0 */
uint F_00c8ddf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8ddf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    iVar3 = 0;
    piVar2 = param_1;
    do {
      piVar2 = (int *)*piVar2;
      iVar3 = iVar3 + 1;
    } while (piVar2 != (int *)0x0);
    if (param_2[1] != 0) {
      *(undefined4 *)(param_2[1] + 4) = *(undefined4 *)this;
    }
    if (*(int * PTR32 *)this != (int *)0x0) {
      **(int * PTR32 *)this = param_2[1];
    }
    if (*param_2 == 0) {
      *param_2 = *(int *)this;
    }
    iVar1 = param_1[1];
    *(int *)this = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 4) = 0;
    }
    param_2[1] = (int)param_1;
    if (*(undefined4 * PTR32 *)this != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)this = 0;
    }
    param_1[1] = 0;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) - iVar3;
    param_2[2] = param_2[2] + iVar3;
  }
  return 1;
}

/* ref: FUN_00c8de60 */
uint F_00c8de60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8de60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  int * piVar2;
  int iVar3;
  
  if (param_1 != (int *)0x0) {
    iVar3 = 0;
    piVar2 = param_1;
    do {
      piVar2 = (int *)piVar2[1];
      iVar3 = iVar3 + 1;
    } while (piVar2 != (int *)0x0);
    if ((undefined4 *)*param_2 != (undefined4 *)0x0) {
      *(undefined4 *)*param_2 = *(undefined4 *)((int)this + 4);
    }
    if (*(int *)((int)this + 4) != 0) {
      *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *param_2;
    }
    if (param_2[1] == 0) {
      param_2[1] = *(int *)((int)this + 4);
    }
    iVar1 = *param_1;
    *(int *)((int)this + 4) = iVar1;
    if (iVar1 == 0) {
      *(undefined4 *)this = 0;
    }
    *param_2 = (int)param_1;
    if (*(int *)((int)this + 4) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 4))) = 0;
    }
    *param_1 = 0;
    *(int *)((int)this + 8) = *(int *)((int)this + 8) - iVar3;
    param_2[2] = param_2[2] + iVar3;
  }
  return 1;
}

/* ref: FUN_00c8df10 */
unsigned int F_00c8df10(unsigned int gen_a0)
{
  GEN_ENTER(0xc8df10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    F_00406ad0(iVar2);
    iVar2 = iVar1;
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)this = 0;
  iVar2 = *(int *)((int)this + 0x14);
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    F_00406ad0(iVar2);
    iVar2 = iVar1;
  }
  return 0;
}

/* ref: FUN_00c8df70 */
uint F_00c8df70(unsigned int gen_a0)
{
  GEN_ENTER(0xc8df70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00c8d870(this,*(undefined4 *)this);
  return uVar1;
}

/* ref: FUN_00c8dfc0 */
uint F_00c8dfc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8dfc0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00c8dfd0 */
uint F_00c8dfd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8dfd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  int * piVar2;
  int * piVar3;
  
  uVar1 = F_00c80fd0(this,param_1);
  if ((((uVar1 == 1) && (uVar1 = F_00c80fd0((int)this + 0x10,param_1 + 0x10), uVar1 == 1)) &&
      (uVar1 = F_00c80fd0((int)this + 0x2c,param_1 + 0x2c), uVar1 == 1)) &&
     (uVar1 = *(uint *)((int)this + 0x40), uVar1 == *(uint *)(param_1 + 0x40))) {
    if (uVar1 == 0) {
      return 1;
    }
    piVar3 = *(int * PTR32 *)((int)this + 0x44);
    if ((piVar3 != (int *)0x0) && (piVar2 = *(int * PTR32 *)(param_1 + 0x44), piVar2 != (int *)0x0)) {
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
        if (*(char *)((int)piVar2 + 1) == *(char *)((int)piVar3 + 1)) {
          if (uVar1 < 3) {
            return 1;
          }
          if (*(char *)((int)piVar2 + 2) == *(char *)((int)piVar3 + 2)) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00c8e090 */
uint F_00c8e090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e090u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c8dfd0(this,param_1);
  return (uint)(uVar1 == 0);
}

/* ref: FUN_00c8e0d0 */
uint F_00c8e0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e0d0u, gen_a0, gen_a1, 0u, 0u);
  undefined8 * in_ecx = (undefined8 *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  return (uint)param_2;
}

/* ref: FUN_00c8e0f0 */
uint F_00c8e0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e0f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  *(undefined8 *)(in_ecx + 0x10) = *param_2;
  *(undefined8 *)(in_ecx + 0x18) = param_2[1];
  return (uint)param_2;
}

/* ref: FUN_00c8e130 */
uint F_00c8e130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e130u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x24) = param_2;
  return param_2;
}

/* ref: FUN_00c8e140 */
uint F_00c8e140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e140u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  *(undefined8 *)(in_ecx + 0x2c) = *param_2;
  *(undefined8 *)(in_ecx + 0x34) = param_2[1];
  return (uint)param_2;
}

/* ref: FUN_00c8e160 */
unsigned int F_00c8e160(unsigned int gen_a0)
{
  GEN_ENTER(0xc8e160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)((int)this + 0x40) != 0) {
    gen_imp_CoTaskMemFree(*(LPVOID *)((int)this + 0x44));
  }
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  return 0;
}

/* ref: FUN_00c8e180 */
uint F_00c8e180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e180u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  
  if (*(uint *)((int)this + 0x40) == param_1) {
    return *(uint *)((int)this + 0x44);
  }
  pvVar1 = gen_imp_CoTaskMemAlloc(param_1);
  if (pvVar1 == (LPVOID)0x0) {
    if (param_1 <= *(uint *)((int)this + 0x40)) {
      return *(uint *)((int)this + 0x44);
    }
    return 0;
  }
  if (*(int *)((int)this + 0x40) != 0) {
    gen_imp_CoTaskMemFree(*(LPVOID *)((int)this + 0x44));
  }
  *(LPVOID *)((int)this + 0x44) = pvVar1;
  *(uint *)((int)this + 0x40) = param_1;
  return (uint)pvVar1;
}

/* ref: FUN_00c8e1e0 */
uint F_00c8e1e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e1e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  LPVOID pvVar1;
  uint uVar2;
  
  if (*(uint *)((int)this + 0x40) == param_1) {
    return *(uint *)((int)this + 0x44);
  }
  pvVar1 = gen_imp_CoTaskMemAlloc(param_1);
  if (pvVar1 == (LPVOID)0x0) {
    if (param_1 <= *(uint *)((int)this + 0x40)) {
      return *(uint *)((int)this + 0x44);
    }
    return 0;
  }
  uVar2 = *(uint *)((int)this + 0x40);
  if (uVar2 != 0) {
    if (param_1 < uVar2) {
      uVar2 = param_1;
    }
    F_00c46aa0(pvVar1,*(undefined4 *)((int)this + 0x44),uVar2);
    gen_imp_CoTaskMemFree(*(LPVOID *)((int)this + 0x44));
  }
  *(LPVOID *)((int)this + 0x44) = pvVar1;
  *(uint *)((int)this + 0x40) = param_1;
  return (uint)pvVar1;
}

/* ref: FUN_00c8e260 */
uint F_00c8e260(unsigned int gen_a0)
{
  GEN_ENTER(0xc8e260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c48350(this,0,0x48);
  *(undefined4 *)((int)this + 0x28) = 1;
  *(undefined4 *)((int)this + 0x20) = 1;
  return 1;
}

/* ref: FUN_00c8e280 */
uint F_00c8e280(unsigned int gen_a0)
{
  GEN_ENTER(0xc8e280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
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
uint F_00c8e2c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e2c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
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
    uVar1 = *(uint *)((int)this + 0x40);
    if (uVar1 != *(uint *)(param_1 + 0x40)) {
      return 0;
    }
    if (uVar1 != 0) {
      piVar2 = *(int * PTR32 *)(param_1 + 0x44);
      piVar3 = *(int * PTR32 *)((int)this + 0x44);
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
          if (*(char *)((int)piVar2 + 1) != *(char *)((int)piVar3 + 1)) {
            return 0;
          }
          if ((2 < uVar1) && (*(char *)((int)piVar2 + 2) != *(char *)((int)piVar3 + 2))) {
            return 0;
          }
        }
      }
    }
  }
  return 1;
}

/* ref: FUN_00c8e3b0 */
uint F_00c8e3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e3b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int * piVar1;
  LPVOID pvVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  puVar4 = param_2;
  puVar5 = param_1;
  for (iVar3 = 0x12; iVar3 != 0; iVar3 = iVar3 + -1) {
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
  piVar1 = (int *)param_1[0xf];
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  }
  return 0;
}

/* ref: FUN_00c8e420 */
uint F_00c8e420(unsigned int gen_a0)
{
  GEN_ENTER(0xc8e420u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    gen_imp_CoTaskMemFree(*(LPVOID *)(param_1 + 0x44));
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  piVar1 = *(int * PTR32 *)(param_1 + 0x3c);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return uVar2;
}

/* ref: FUN_00c8e460 */
uint F_00c8e460(unsigned int gen_a0)
{
  GEN_ENTER(0xc8e460u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x40) != 0) {
    gen_imp_CoTaskMemFree(*(LPVOID *)((int)this + 0x44));
    *(undefined4 *)((int)this + 0x40) = 0;
    *(undefined4 *)((int)this + 0x44) = 0;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x3c);
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)this + 0x3c) = 0;
  }
  return uVar2;
}

/* ref: FUN_00c8e4a0 */
uint F_00c8e4a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc8e4a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00c48350(this,0,0x48);
  *(undefined4 *)((int)this + 0x28) = 1;
  *(undefined4 *)((int)this + 0x20) = 1;
  return (uint)this;
}

/* ref: FUN_00c8e4c0 */
uint F_00c8e4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e4c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;
  F_00c48350(this,0,0x48);
  *(undefined4 *)((int)this + 0x28) = 1;
  *(undefined4 *)((int)this + 0x20) = 1;
  *(undefined8 *)this = *param_1;
  *(undefined8 *)((int)this + 8) = param_1[1];
  return (uint)this;
}

/* ref: FUN_00c8e500 */
uint F_00c8e500(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8e500u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c8e3b0(this,param_1);
  if (((int)uVar1 < 0) && (param_2 != (uint *)0x0)) {
    *param_2 = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00c8e530 */
uint F_00c8e530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8e530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  
  uVar1 = F_00c8e3b0(this,param_1);
  if (((int)uVar1 < 0) && (param_2 != (uint *)0x0)) {
    *param_2 = uVar1;
  }
  return (uint)this;
}

/* ref: FUN_00c8e560 */
uint F_00c8e560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (param_1 != this) {
    if (*(int *)((int)this + 0x40) != 0) {
      gen_imp_CoTaskMemFree(*(LPVOID *)((int)this + 0x44));
      *(undefined4 *)((int)this + 0x40) = 0;
      *(undefined4 *)((int)this + 0x44) = 0;
    }
    piVar1 = *(int * PTR32 *)((int)this + 0x3c);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)this + 0x3c) = 0;
    }
    uVar2 = F_00c8e3b0(this,param_1);
    if ((int)uVar2 < 0) {
      return 0x8007000e;
    }
  }
  return 0;
}

/* ref: FUN_00c8e5c0 */
unsigned int F_00c8e5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e5c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (param_2 == 0) {
    *(undefined4 *)(in_ecx + 0x20) = 0;
    return 0;
  }
  *(undefined4 *)(in_ecx + 0x20) = 1;
  *(int *)(in_ecx + 0x28) = param_2;
  return 0;
}

/* ref: FUN_00c8e5e0 */
uint F_00c8e5e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8e5e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  LPVOID pvVar1;
  
  if (*(uint *)((int)this + 0x40) == param_2) {
    pvVar1 = *(LPVOID *)((int)this + 0x44);
  }
  else {
    pvVar1 = gen_imp_CoTaskMemAlloc(param_2);
    if (pvVar1 == (LPVOID)0x0) {
      if (*(uint *)((int)this + 0x40) < param_2) {
        return 0;
      }
      pvVar1 = *(LPVOID *)((int)this + 0x44);
    }
    else {
      if (*(int *)((int)this + 0x40) != 0) {
        gen_imp_CoTaskMemFree(*(LPVOID *)((int)this + 0x44));
      }
      *(uint *)((int)this + 0x40) = param_2;
      *(LPVOID *)((int)this + 0x44) = pvVar1;
    }
  }
  if (pvVar1 == (LPVOID)0x0) {
    return 0;
  }
  F_00c46aa0(*(undefined4 *)((int)this + 0x44),param_1,param_2);
  return 1;
}

/* ref: FUN_00c8e650 */
unsigned int F_00c8e650(unsigned int gen_a0)
{
  GEN_ENTER(0xc8e650u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  int * piVar1;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x40) != 0) {
      gen_imp_CoTaskMemFree(*(undefined4 *)(param_1 + 0x44));
      *(undefined4 *)(param_1 + 0x40) = 0;
      *(undefined4 *)(param_1 + 0x44) = 0;
    }
    piVar1 = *(int * PTR32 *)(param_1 + 0x3c);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      *(undefined4 *)(param_1 + 0x3c) = 0;
    }
    gen_imp_CoTaskMemFree(param_1);
  }
  return 0;
}

/* ref: FUN_00c8e6a0 */
uint F_00c8e6a0(unsigned int gen_a0)
{
  GEN_ENTER(0xc8e6a0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
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
uint F_00c8e6e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8e6e0u, gen_a0, gen_a1, gen_a2, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  undefined8 * param_2 = (undefined8 *)(uintptr_t)gen_a1;
  int param_3 = (int)gen_a2;
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
  *(undefined8 *)((int)param_2 + 0x2c) = REFG(undefined8, 0x1085d28);
  *(undefined8 *)((int)param_2 + 0x34) = REFG(undefined8, 0x1085d30);
  *(undefined4 *)(param_2 + 4) = 1;
  *(undefined4 *)((int)param_2 + 0x24) = 0;
  *(uint *)(param_2 + 5) = (uint)param_1[6];
  *(undefined4 *)((int)param_2 + 0x3c) = 0;
  if (param_3 != 0) {
    if (*param_1 == 1) {
      *(undefined4 *)(param_2 + 8) = 0x12;
    }
    else {
      *(uint *)(param_2 + 8) = param_1[8] + 0x12;
    }
    puVar2 = gen_imp_CoTaskMemAlloc(*(SIZE_T *)(param_2 + 8));
    *(undefined8 * PTR32 *)((int)param_2 + 0x44) = puVar2;
    if (puVar2 == (undefined8 *)0x0) {
      return 0x8007000e;
    }
    if (*param_1 == 1) {
      *puVar2 = *(undefined8 *)param_1;
      puVar2[1] = *(undefined8 *)(param_1 + 4);
      *((undefined2 *)GEN_TOP((*(int *)((int)param_2 + 0x44) + 0x10))) = 0;
      return 0;
    }
    F_00c46aa0(puVar2,param_1,*(undefined4 *)(param_2 + 8));
  }
  return 0;
}

/* ref: FUN_00c8e810 */
uint F_00c8e810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e810u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != this) {
    if (*(int *)((int)this + 0x40) != 0) {
      gen_imp_CoTaskMemFree(*(LPVOID *)((int)this + 0x44));
      *(undefined4 *)((int)this + 0x40) = 0;
      *(undefined4 *)((int)this + 0x44) = 0;
    }
    piVar1 = *(int * PTR32 *)((int)this + 0x3c);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)this + 0x3c) = 0;
    }
    F_00c8e3b0(this,param_1);
  }
  return (uint)this;
}

/* ref: FUN_00c8e870 */
uint F_00c8e870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e870u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * piVar1;
  
  if (param_1 != this) {
    if (*(int *)((int)this + 0x40) != 0) {
      gen_imp_CoTaskMemFree(*(LPVOID *)((int)this + 0x44));
      *(undefined4 *)((int)this + 0x40) = 0;
      *(undefined4 *)((int)this + 0x44) = 0;
    }
    piVar1 = *(int * PTR32 *)((int)this + 0x3c);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)this + 0x3c) = 0;
    }
    F_00c8e3b0(this,param_1);
  }
  return (uint)this;
}

/* ref: FUN_00c8e8d0 */
uint F_00c8e8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  int * piVar1;
  uint uVar2;
  
  if (param_1 != this) {
    if (*(int *)((int)this + 0x40) != 0) {
      gen_imp_CoTaskMemFree(*(LPVOID *)((int)this + 0x44));
      *(undefined4 *)((int)this + 0x40) = 0;
      *(undefined4 *)((int)this + 0x44) = 0;
    }
    piVar1 = *(int * PTR32 *)((int)this + 0x3c);
    if (piVar1 != (int *)0x0) {
      ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      *(undefined4 *)((int)this + 0x3c) = 0;
    }
    uVar2 = F_00c8e3b0(this,param_1);
    if ((int)uVar2 < 0) {
      return 0x8007000e;
    }
  }
  return 0;
}

/* ref: FUN_00c8e930 */
uint F_00c8e930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e930u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = 0x100000;
  in_ecx[2] = 0xaa000080;
  in_ecx[3] = 0x719b3800;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c8e9a0 */
uint F_00c8e9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c8e9d0 */
unsigned int F_00c8e9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8e9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return 0;
}

/* ref: FUN_00c8e9f0 */
float F_00c8e9f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc8e9f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)*(float *)((int)this + 8) *
                                      (float10)*(float *)((int)this + 8) +
                                     ((float10)*(float *)((int)(uintptr_t)this) * (float10)*(float *)this +
                                     (float10)*(float *)((int)this + 4) *
                                     (float10)*(float *)((int)this + 4))))))));
}

/* ref: FUN_00c8ea30 */
unsigned int F_00c8ea30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8ea30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  uVar1 = param_2[2];
  in_ecx[3] = 0;
  in_ecx[2] = uVar1;
  return 0;
}

/* ref: FUN_00c8ea60 */
unsigned int F_00c8ea60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8ea60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return 0;
}

/* ref: FUN_00c8eb80 */
uint F_00c8eb80(void)
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
uint F_00c8ebd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8ebd0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00c8ec10 */
unsigned int F_00c8ec10(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5, float gen_a6, float gen_a7, float gen_a8, float gen_a9, float gen_a10, float gen_a11, float gen_a12, float gen_a13, float gen_a14, float gen_a15, float gen_a16)
{
  GEN_ENTER(0xc8ec10u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float param_7 = (float)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  float param_10 = (float)gen_a9;
  float param_11 = (float)gen_a10;
  float param_12 = (float)gen_a11;
  float param_13 = (float)gen_a12;
  float param_14 = (float)gen_a13;
  float param_15 = (float)gen_a14;
  float param_16 = (float)gen_a15;
  float param_17 = (float)gen_a16;
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
unsigned int F_00c8ecc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8ecc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
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
unsigned int F_00c8ed30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8ed30u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
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
unsigned int F_00c8eed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8eed0u, gen_a0, gen_a1, gen_a2, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
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
unsigned int F_00c8f180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8f180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  param_1[3] = 0.0;
  param_1[7] = 0.0;
  param_1[0xb] = 0.0;
  param_1[0xf] = 0.0;
  *param_1 = ((float)GEN_TOF(((((double)*param_2 * (double)*(float *)this +
                      (double)param_2[1] * (double)*(float *)((int)this + 0x10)) +
                     (double)*(float *)((int)this + 0x20) * (double)param_2[2]) +
                    (double)*(float *)((int)this + 0x30) * (double)param_2[3])));
  param_1[1] = ((float)GEN_TOF(((((double)*(float *)((int)this + 0x14) * (double)param_2[1] +
                        (double)*param_2 * (double)*(float *)((int)this + 4)) +
                       (double)*(float *)((int)this + 0x24) * (double)param_2[2]) +
                      (double)param_2[3] * (double)*(float *)((int)this + 0x34))));
  param_1[2] = ((float)GEN_TOF(((((double)*(float *)((int)this + 0x18) * (double)param_2[1] +
                        (double)*(float *)((int)this + 8) * (double)*param_2) +
                       (double)param_2[2] * (double)*(float *)((int)this + 0x28)) +
                      (double)param_2[3] * (double)*(float *)((int)this + 0x38))));
  param_1[3] = ((float)GEN_TOF(((((double)*(float *)((int)this + 0x1c) * (double)param_2[1] +
                        (double)*param_2 * (double)*(float *)((int)this + 0xc)) +
                       (double)*(float *)((int)this + 0x2c) * (double)param_2[2]) +
                      (double)param_2[3] * (double)*(float *)((int)this + 0x3c))));
  param_1[4] = ((float)GEN_TOF(((((double)param_2[5] * (double)*(float *)((int)this + 0x10) +
                        (double)*(float *)((int)(uintptr_t)this) * (double)param_2[4]) +
                       (double)param_2[6] * (double)*(float *)((int)this + 0x20)) +
                      (double)*(float *)((int)this + 0x30) * (double)param_2[7])));
  param_1[5] = ((float)GEN_TOF(((((double)*(float *)((int)this + 0x14) * (double)param_2[5] +
                        (double)*(float *)((int)this + 4) * (double)param_2[4]) +
                       (double)param_2[6] * (double)*(float *)((int)this + 0x24)) +
                      (double)param_2[7] * (double)*(float *)((int)this + 0x34))));
  param_1[6] = ((float)GEN_TOF(((((double)param_2[5] * (double)*(float *)((int)this + 0x18) +
                        (double)*(float *)((int)this + 8) * (double)param_2[4]) +
                       (double)param_2[6] * (double)*(float *)((int)this + 0x28)) +
                      (double)*(float *)((int)this + 0x38) * (double)param_2[7])));
  param_1[7] = ((float)GEN_TOF(((((double)*(float *)((int)this + 0x1c) * (double)param_2[5] +
                        (double)*(float *)((int)this + 0xc) * (double)param_2[4]) +
                       (double)param_2[6] * (double)*(float *)((int)this + 0x2c)) +
                      (double)param_2[7] * (double)*(float *)((int)this + 0x3c))));
  param_1[8] = ((float)GEN_TOF(((((double)param_2[8] * (double)*(float *)this +
                        (double)param_2[9] * (double)*(float *)((int)this + 0x10)) +
                       (double)param_2[10] * (double)*(float *)((int)this + 0x20)) +
                      (double)param_2[0xb] * (double)*(float *)((int)this + 0x30))));
  param_1[9] = ((float)GEN_TOF(((((double)param_2[8] * (double)*(float *)((int)this + 4) +
                        (double)*(float *)((int)this + 0x14) * (double)param_2[9]) +
                       (double)param_2[10] * (double)*(float *)((int)this + 0x24)) +
                      (double)param_2[0xb] * (double)*(float *)((int)this + 0x34))));
  param_1[10] = ((float)GEN_TOF(((((double)param_2[9] * (double)*(float *)((int)this + 0x18) +
                         (double)*(float *)((int)this + 8) * (double)param_2[8]) +
                        (double)param_2[10] * (double)*(float *)((int)this + 0x28)) +
                       (double)param_2[0xb] * (double)*(float *)((int)this + 0x38))));
  param_1[0xb] = ((float)GEN_TOF(((((double)param_2[8] * (double)*(float *)((int)this + 0xc) +
                          (double)*(float *)((int)this + 0x1c) * (double)param_2[9]) +
                         (double)param_2[10] * (double)*(float *)((int)this + 0x2c)) +
                        (double)param_2[0xb] * (double)*(float *)((int)this + 0x3c))));
  param_1[0xc] = ((float)GEN_TOF(((((double)param_2[0xd] * (double)*(float *)((int)this + 0x10) +
                          (double)param_2[0xc] * (double)*(float *)this) +
                         (double)*(float *)((int)this + 0x20) * (double)param_2[0xe]) +
                        (double)*(float *)((int)this + 0x30) * (double)param_2[0xf])));
  param_1[0xd] = ((float)GEN_TOF(((((double)*(float *)((int)this + 0x14) * (double)param_2[0xd] +
                          (double)param_2[0xc] * (double)*(float *)((int)this + 4)) +
                         (double)*(float *)((int)this + 0x24) * (double)param_2[0xe]) +
                        (double)param_2[0xf] * (double)*(float *)((int)this + 0x34))));
  param_1[0xe] = ((float)GEN_TOF(((((double)param_2[0xc] * (double)*(float *)((int)this + 8) +
                          (double)param_2[0xd] * (double)*(float *)((int)this + 0x18)) +
                         (double)param_2[0xe] * (double)*(float *)((int)this + 0x28)) +
                        (double)param_2[0xf] * (double)*(float *)((int)this + 0x38))));
  param_1[0xf] = ((float)GEN_TOF(((((double)*(float *)((int)this + 0x1c) * (double)param_2[0xd] +
                          (double)param_2[0xc] * (double)*(float *)((int)this + 0xc)) +
                         (double)*(float *)((int)this + 0x2c) * (double)param_2[0xe]) +
                        (double)param_2[0xf] * (double)*(float *)((int)this + 0x3c))));
  return 0;
}

/* ref: FUN_00c8f7f0 */
uint F_00c8f7f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc8f7f0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
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
  uVar15 = REFG(float, 0x15d769c);
  uVar14 = REFG(float, 0x15d7698);
  uVar13 = REFG(float, 0x15d7694);
  uVar12 = REFG(float, 0x15d7690);
  if ((*(uint *)&REFG(undefined, 0x15d768c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d768c) = *(uint *)&REFG(undefined, 0x15d768c) | 1;
    REFG(float, 0x15d767c) = 0;
    REFG(float, 0x15d7680) = 0;
    REFG(float, 0x15d7684) = REFG(float, 0x1087f04);
    REFG(float, 0x15d7688) = 0;
  }
  uVar11 = REFG(float, 0x15d7688);
  uVar10 = REFG(float, 0x15d7684);
  uVar9 = REFG(float, 0x15d7680);
  uVar8 = REFG(float, 0x15d767c);
  if ((*(uint *)&REFG(undefined, 0x15d7678) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7678) = *(uint *)&REFG(undefined, 0x15d7678) | 1;
    REFG(float, 0x15d7668) = 0;
    REFG(float, 0x15d766c) = REFG(float, 0x1087f04);
    REFG(float, 0x15d7670) = 0;
    REFG(float, 0x15d7674) = 0;
  }
  uVar7 = REFG(float, 0x15d7674);
  uVar6 = REFG(float, 0x15d7670);
  uVar5 = REFG(float, 0x15d766c);
  uVar4 = REFG(float, 0x15d7668);
  if ((*(uint *)&REFG(undefined, 0x15d7664) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7664) = *(uint *)&REFG(undefined, 0x15d7664) | 1;
    REFG(float, 0x15d7654) = REFG(float, 0x1087f04);
    REFG(float, 0x15d7658) = 0;
    REFG(float, 0x15d765c) = 0;
    REFG(float, 0x15d7660) = 0;
  }
  uVar3 = REFG(float, 0x15d7660);
  uVar2 = REFG(float, 0x15d765c);
  uVar1 = REFG(float, 0x15d7654);
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
unsigned int F_00c8fa40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8fa40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
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
unsigned int F_00c8faa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8faa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
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
unsigned int F_00c8fb00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8fb00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
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
  uVar2 = REFG(float, 0x1087f04);
  in_ecx[10] = uVar1;
  in_ecx[0xc] = param_2[9];
  in_ecx[0xd] = param_2[10];
  in_ecx[0xe] = param_2[0xb];
  in_ecx[0xf] = uVar2;
  return 0;
}

/* ref: FUN_00c8fb80 */
unsigned int F_00c8fb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8fb80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
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
  uVar4 = REFG(float, 0x1087f04);
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
unsigned int F_00c8fc30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc8fc30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = *param_3;
  in_ecx[4] = param_3[1];
  in_ecx[5] = param_3[2];
  return 0;
}

/* ref: FUN_00c8fc60 */
unsigned int F_00c8fc60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8fc60u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  double dVar1;
  
  dVar1 = REFG(double, 0x1088108);
  *param_2 = ((float)GEN_TOF((((double)in_ecx[3] + (double)*in_ecx) * REFG(double, 0x1088108))));
  param_2[1] = ((float)GEN_TOF((((double)in_ecx[4] + (double)in_ecx[1]) * dVar1)));
  param_2[2] = ((float)GEN_TOF((((double)in_ecx[5] + (double)in_ecx[2]) * dVar1)));
  return 0;
}

/* ref: FUN_00c8fce0 */
unsigned int F_00c8fce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc8fce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 0x50) = *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0x40) + 4)));
  F_00c9f060((undefined *)((int)this + 0x58),param_1);
  return 0;
}

/* ref: FUN_00c8fd40 */
unsigned int F_00c8fd40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc8fd40u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  int param_3 = (int)gen_a3;
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
  
  iVar12 = *(int *)((int)this + 0xc);
  fVar1 = *(float *)(iVar12 + 0x10);
  fVar2 = *(float *)(iVar12 + 0x14);
  fVar3 = *(float *)(iVar12 + 0x18);
  dVar20 = ((double)*(float *)(iVar12 + 0x1c) - (double)fVar1) / REFG(double, 0x109cab0);
  dVar21 = ((double)*(float *)(iVar12 + 0x20) - (double)fVar2) / REFG(double, 0x109cab0);
  puVar15 = ((ushort *)GEN_TOP((iVar12 + ((uint)*(ushort *)(iVar12 + 0x2c) * 3 + 0xc) * 4)));
  iVar13 = *(int *)((int)this + 0xc);
  dVar22 = ((double)*(float *)(iVar12 + 0x24) - (double)fVar3) / REFG(double, 0x109cab0);
  uVar16 = 0;
  if (*(short *)(iVar13 + 0x28) != 0) {
    pfVar14 = (float *)(param_3 + param_1 * 0xc + 8);
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
    } while (uVar16 < *(ushort *)(iVar13 + 0x28));
  }
  return 0;
}

/* ref: FUN_00c90030 */
unsigned int F_00c90030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc90030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
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
  
  iVar6 = *(int *)((int)this + 0xc);
  fVar1 = *(float *)(iVar6 + 0x10);
  uVar4 = *(ushort *)(iVar6 + 0x2c);
  fVar2 = *(float *)(iVar6 + 0x14);
  fVar3 = *(float *)(iVar6 + 0x18);
  dVar12 = ((double)*(float *)(iVar6 + 0x1c) - (double)fVar1) / REFG(double, 0x109cab0);
  dVar13 = ((double)*(float *)(iVar6 + 0x20) - (double)fVar2) / REFG(double, 0x109cab0);
  dVar11 = ((double)*(float *)(iVar6 + 0x24) - (double)fVar3) / REFG(double, 0x109cab0);
  F_00c46aa0(param_1,iVar6 + 0x30,(uint)uVar4 * 0xc);
  iVar7 = *(int *)((int)this + 0xc);
  pfVar9 = ((float *)GEN_TOP((param_1 + 8 + (uint)*(ushort *)(iVar7 + 0x2c) * 0xc)));
  uVar10 = 0;
  if (*(short *)(iVar7 + 0x28) != 0) {
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
    } while (uVar10 < *(ushort *)(iVar7 + 0x28));
  }
  return 0;
}

/* ref: FUN_00c901b0 */
byte F_00c901b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xc901b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float param_7 = (float)gen_a6;
  byte * pbVar1;
  float * pfVar2;
  int iVar3;
  
  if (-1 < param_2) {
    iVar3 = *(int *)(param_1 + 0xc);
    pbVar1 = ((byte *)GEN_TOP((iVar3 + ((uint)*(ushort *)(iVar3 + 0x28) + param_2 + 8 +
                              (uint)*(ushort *)(iVar3 + 0x2c) * 2) * 6)));
    *param_3 = *param_6 * param_7;
    param_3[1] = param_6[1] * param_7;
    param_3[2] = param_6[2] * param_7;
    *param_3 = *param_3 + *param_5;
    param_3[1] = param_5[1] + param_3[1];
    param_3[2] = param_5[2] + param_3[2];
    iVar3 = *param_4;
    pfVar2 = (float *)(iVar3 + (uint)*pbVar1 * 0xc);
    param_3[3] = *pfVar2;
    param_3[4] = pfVar2[1];
    param_3[5] = pfVar2[2];
    pfVar2 = (float *)(iVar3 + (uint)pbVar1[1] * 0xc);
    param_3[6] = *pfVar2;
    param_3[7] = pfVar2[1];
    param_3[8] = pfVar2[2];
    pfVar2 = (float *)(iVar3 + (uint)pbVar1[2] * 0xc);
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
uint F_00c90300(unsigned int gen_a0)
{
  GEN_ENTER(0xc90300u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0xc) + 0x10;
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf3 */
uint F_00c90310(unsigned int gen_a0)
{
  GEN_ENTER(0xc90310u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0xc) + 0x1c;
}

/* ref: FUN_00c90320 */
unsigned int F_00c90320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc90320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  int iVar1;
  int * piVar2;
  byte * pbVar3;
  int * piVar4;
  uint uVar5;
  int local_8;
  
  piVar2 = param_3;
  uVar5 = 0;
  if (*(int *)((int)this + 0x28) != 0) {
    local_8 = 0;
    do {
      pbVar3 = ((byte *)GEN_TOP((*(int *)((int)this + 0x30) + local_8)));
      iVar1 = *(int *)((int)this + 0x2c);
      ((code *)*(gen_code32 *)(*param_3 + 8))
                (param_3,param_1,(uint)*pbVar3 * 0x10 + iVar1,(uint)pbVar3[1] * 0x10 + iVar1,
                 (uint)pbVar3[2] * 0x10 + iVar1,0);
      local_8 = local_8 + 6;
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)((int)this + 0x28));
  }
  piVar4 = (int *)((int)this + 0x34);
  param_3 = (int *)0x2;
  do {
    if (*piVar4 != 0) {
      ((code *)*(gen_code32 *)(*(int *)*piVar4 + 4))((int *)*piVar4,param_1,param_2,piVar2);
    }
    piVar4 = piVar4 + 1;
    param_3 = (int *)((int)param_3 + -1);
  } while (param_3 != (int *)0x0);
  return 0;
}

/* ref: FUN_00c903b0 */
uint F_00c903b0(void)
{
  GEN_ENTER(0xc903b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c903c0 */
uint F_00c903c0(void)
{
  GEN_ENTER(0xc903c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c903d0 */
unsigned int F_00c903d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc903d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00c903e0 */
uint F_00c903e0(void)
{
  GEN_ENTER(0xc903e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c903f0 */
unsigned int F_00c903f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc903f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00c90400 */
unsigned int F_00c90400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc90400u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00c90410 */
uint F_00c90410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc90410u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  int param_5 = (int)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  ushort * puVar7;
  float * pfVar8;
  uint uVar9;
  int * piVar10;
  byte * pbVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  double dVar16;
  double dVar17;
  float fVar18;
  float fVar19;
  double dVar20;
  
  uVar6 = param_3;
  (*(int *)(gen_frame + 0x40)) = param_1;
  iVar12 = *(int *)(param_1 + 0xc);
  (*(float *)(gen_frame + 0x2c)) = *(float *)(iVar12 + 0x10);
  (*(float *)(gen_frame + 0x30)) = *(float *)(iVar12 + 0x14);
  (*(float *)(gen_frame + 0x28)) = *(float *)(iVar12 + 0x24);
  (*(float *)(gen_frame + 0x48)) = *(float *)(iVar12 + 0x1c) - (*(float *)(gen_frame + 0x2c));
  (*(float *)(gen_frame + 0x44)) = *(float *)(iVar12 + 0x20) - (*(float *)(gen_frame + 0x30));
  fVar13 = (float)((double)(*(float *)(gen_frame + 0x48)) * REFG(double, 0x1088108));
  fVar18 = (float)((double)(*(float *)(gen_frame + 0x44)) * REFG(double, 0x1088108));
  (*(float *)(gen_frame + 0x34)) = *(float *)(iVar12 + 0x18);
  dVar20 = (double)fVar18;
  (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF((((double)(*(float *)(gen_frame + 0x2c)) + (double)*(float *)(param_3 + 0x30)) + (double)fVar13)));
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF((((double)*(float *)(param_3 + 0x34) + (double)(*(float *)(gen_frame + 0x30))) + (double)fVar18)));
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF((((double)*(float *)(param_3 + 0x38) + (double)*(float *)(iVar12 + 0x18)) +
                    (double)fVar13)));
  (*(float *)(gen_frame + 0x18)) = SQRT(((float)GEN_TOF(((dVar20 * dVar20 + (double)fVar13 * (double)fVar13) +
                         (double)fVar13 * (double)fVar13))));
  puVar7 = ((ushort *)GEN_TOP(((code *)*(gen_code32 *)(*param_4 + 0x1c))(param_4,param_2,&(*(float *)(gen_frame + 0xc)))));
  if ((char)puVar7 == '\0') {
    (*(int *)(gen_frame + 0x3c)) = *(int *)(param_1 + 0xc);
    if (*(int *)((*(int *)(gen_frame + 0x3c)) + 0x2c) != 0) {
      dVar20 = (double)(*(float *)(gen_frame + 0x48)) / REFG(double, 0x109cab0);
      (*(float *)(gen_frame + 0x48)) = (float)dVar20;
      dVar16 = (double)(*(float *)(gen_frame + 0x44)) / REFG(double, 0x109cab0);
      (*(float *)(gen_frame + 0x44)) = (float)dVar16;
      puVar7 = (ushort *)((*(int *)(gen_frame + 0x3c)) + 0x30);
      (*(ushort * PTR32 *)(gen_frame + 0x38)) = puVar7 + *(int *)((*(int *)(gen_frame + 0x3c)) + 0x28) * 3;
      dVar17 = (double)((*(float *)(gen_frame + 0x28)) - (*(float *)(gen_frame + 0x34))) / REFG(double, 0x109cab0);
      uVar9 = 0;
      if (*(int *)((*(int *)(gen_frame + 0x3c)) + 0x28) != 0) {
        pfVar8 = (float *)(param_5 + 8);
        do {
          fVar19 = (float)((double)puVar7[2] * (double)(float)dVar17 + (double)(*(float *)(gen_frame + 0x34)));
          fVar13 = *(float *)(param_3 + 0x34);
          fVar18 = *(float *)(param_3 + 0x38);
          fVar1 = *(float *)(param_3 + 0x24);
          fVar15 = (float)((double)puVar7[1] * (double)(float)dVar16 + (double)(*(float *)(gen_frame + 0x30)));
          fVar2 = *(float *)(param_3 + 0x28);
          fVar3 = *(float *)(param_3 + 0x14);
          fVar4 = *(float *)(param_3 + 0x18);
          fVar14 = (float)((double)(float)dVar20 * (double)*puVar7 + (double)(*(float *)(gen_frame + 0x2c)));
          (*(float *)(gen_frame + 0x1c)) = *(float *)param_3 * fVar14;
          fVar5 = *(float *)(param_3 + 4);
          (*(float *)(gen_frame + 0x24)) = *(float *)(param_3 + 8) * fVar14;
          pfVar8[-2] = ((*(float *)param_3 * fVar14 + *(float *)(param_3 + 0x10) * fVar15) +
                       *(float *)(param_3 + 0x20) * fVar19) + *(float *)(param_3 + 0x30);
          pfVar8[-1] = ((fVar5 * fVar14 + fVar3 * fVar15) + fVar1 * fVar19) + fVar13;
          *pfVar8 = (((*(float *)(gen_frame + 0x24)) + fVar4 * fVar15) + fVar19 * fVar2) + fVar18;
          uVar9 = uVar9 + 1;
          puVar7 = puVar7 + 3;
          pfVar8 = pfVar8 + 3;
        } while (uVar9 < *(uint *)((*(int *)(gen_frame + 0x3c)) + 0x28));
      }
      param_3 = 0;
      param_1 = (*(int *)(gen_frame + 0x40));
      if (*(int *)((*(int *)(gen_frame + 0x3c)) + 0x2c) != 0) {
        pbVar11 = (byte *)((int)(*(ushort * PTR32 *)(gen_frame + 0x38)) + 1);
        do {
          ((code *)*(gen_code32 *)(*param_4 + 8))
                    (param_4,param_2,param_5 + (uint)pbVar11[-1] * 0xc,
                     param_5 + (uint)*pbVar11 * 0xc,param_5 + (uint)pbVar11[1] * 0xc,0);
          puVar7 = (ushort *)(param_3 + 1);
          pbVar11 = pbVar11 + 6;
          param_1 = (*(int *)(gen_frame + 0x40));
          param_3 = (uint)puVar7;
        } while (puVar7 < *((ushort * PTR32 *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x40)) + 0xc) + 0x2c))));
      }
    }
    piVar10 = (int *)(param_1 + 0x10);
    iVar12 = 2;
    do {
      if (*piVar10 != 0) {
        puVar7 = ((ushort *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*piVar10 + 4))((int *)*piVar10,param_2,uVar6,param_4)));
      }
      piVar10 = piVar10 + 1;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
  }
  return (uint)puVar7;
}

/* ref: FUN_00c908b0 */
uint F_00c908b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc908b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0xc) + 0x10;
}

/* ref: FUN_00c908c0 */
uint F_00c908c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc908c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0xc) + 0x1c;
}

/* ref: FUN_00c908d0 */
byte F_00c908d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc908d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  byte bVar9;
  char cVar12;
  float * pfVar10;
  undefined4 * puVar11;
  ushort * puVar13;
  uint uVar14;
  float * pfVar15;
  uint uVar16;
  undefined4 * puVar17;
  double dVar18;
  
  iVar7 = (int)(*(byte * PTR32 *)&gen_args[5]);
  uVar16 = (*(uint *)&gen_args[3]);
  pfVar15 = (*(float * PTR32 *)&gen_args[2]);
  iVar6 = *(int *)((*(int *)&gen_args[0]) + 0xc);
  (*(int *)(gen_frame + 0x74)) = (*(int *)&gen_args[0]);
  if (*(int *)(iVar6 + 0x2c) != 0) {
    fVar1 = *(float *)(iVar6 + 0x10);
    fVar2 = *(float *)(iVar6 + 0x14);
    fVar3 = *(float *)(iVar6 + 0x18);
    (*(float *)(gen_frame + 0x88)) = ((float)GEN_TOF((((double)*(float *)(iVar6 + 0x20) - (double)fVar2) / REFG(double, 0x109cab0))));
    puVar13 = (ushort *)(iVar6 + 0x30);
    (*(ushort * PTR32 *)(gen_frame + 0x7c)) = puVar13 + *(int *)(iVar6 + 0x28) * 3;
    dVar18 = ((double)*(float *)(iVar6 + 0x1c) - (double)fVar1) / REFG(double, 0x109cab0);
    uVar14 = 0;
    (*(float *)(gen_frame + 0x84)) = ((float)GEN_TOF((((double)*(float *)(iVar6 + 0x24) - (double)fVar3) / REFG(double, 0x109cab0))));
    (*(uint *)(gen_frame + 0x70)) = 0xffffffff;
    if (*(int *)(iVar6 + 0x28) != 0) {
      pfVar10 = ((float *)GEN_TOP(((int)(*(byte * PTR32 *)&gen_args[5]) + 8)));
      do {
        uVar4 = puVar13[1];
        uVar5 = puVar13[2];
        pfVar10[-2] = (float)((double)*puVar13 * (double)(float)dVar18 + (double)fVar1);
        pfVar10[-1] = (float)((double)uVar4 * (double)(*(float *)(gen_frame + 0x88)) + (double)fVar2);
        *pfVar10 = (float)((double)uVar5 * (double)(*(float *)(gen_frame + 0x84)) + (double)fVar3);
        uVar14 = uVar14 + 1;
        puVar13 = puVar13 + 3;
        pfVar10 = pfVar10 + 3;
      } while (uVar14 < *(uint *)(iVar6 + 0x28));
    }
    (*(float *)(gen_frame + 0x88)) = 0.0;
    if (*(int *)(iVar6 + 0x2c) != 0) {
      (*(byte * PTR32 *)&gen_args[5]) = (byte *)((int)(*(ushort * PTR32 *)(gen_frame + 0x7c)) + 1);
      do {
        bVar9 = F_00c99be0(pfVar15,uVar16,iVar7 + (uint)(*(byte * PTR32 *)&gen_args[5])[-1] * 0xc,
                             iVar7 + (uint)*(*(byte * PTR32 *)&gen_args[5]) * 0xc,iVar7 + (uint)(*(byte * PTR32 *)&gen_args[5])[1] * 0xc,&(*(uint *)&gen_args[3]),
                             &(*(float *)(gen_frame + 0x84)),&(*(float * PTR32 *)&gen_args[2]));
        if (((bVar9 != 0) && (gen_bits2f((*(uint *)&gen_args[3])) <= *(float *)(*(uint *)&gen_args[4]))) &&
           ((!GEN_ISNAN(gen_bits2f((*(uint *)&gen_args[3]))) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
            !(gen_bits2f((*(uint *)&gen_args[3])) < *(float *)&REFG(undefined, 0x1088114)))) {
          (*(uint *)(gen_frame + 0x70)) = (uint)gen_fl2bits((*(float *)(gen_frame + 0x88)));
          *(uint *)(*(uint *)&gen_args[4]) = (*(uint *)&gen_args[3]);
        }
        (*(byte * PTR32 *)&gen_args[5]) = (*(byte * PTR32 *)&gen_args[5]) + 6;
        (*(float *)(gen_frame + 0x88)) = gen_bits2f((int)gen_fl2bits((*(float *)(gen_frame + 0x88))) + 1);
      } while ((uint)gen_fl2bits((*(float *)(gen_frame + 0x88))) < *((uint *)GEN_TOP((*(int *)((*(int *)(gen_frame + 0x74)) + 0xc) + 0x2c))));
      if (-1 < (int)(*(uint *)(gen_frame + 0x70))) {
        puVar13 = (*(ushort * PTR32 *)(gen_frame + 0x7c)) + (*(uint *)(gen_frame + 0x70)) * 3;
        fVar1 = *(float *)(*(uint *)&gen_args[4]);
        *(*(float * PTR32 *)&gen_args[1]) = *(float *)uVar16 * fVar1;
        (*(float * PTR32 *)&gen_args[1])[1] = *(float *)(uVar16 + 4) * fVar1;
        (*(float * PTR32 *)&gen_args[1])[2] = *(float *)(uVar16 + 8) * fVar1;
        *(*(float * PTR32 *)&gen_args[1]) = *(*(float * PTR32 *)&gen_args[1]) + *pfVar15;
        (*(float * PTR32 *)&gen_args[1])[1] = pfVar15[1] + (*(float * PTR32 *)&gen_args[1])[1];
        (*(float * PTR32 *)&gen_args[1])[2] = pfVar15[2] + (*(float * PTR32 *)&gen_args[1])[2];
        pfVar15 = (float *)(iVar7 + (uint)(byte)*puVar13 * 0xc);
        (*(float * PTR32 *)&gen_args[1])[3] = *pfVar15;
        (*(float * PTR32 *)&gen_args[1])[4] = pfVar15[1];
        (*(float * PTR32 *)&gen_args[1])[5] = pfVar15[2];
        pfVar15 = ((float *)GEN_TOP((iVar7 + (uint)*(byte *)((int)puVar13 + 1) * 0xc)));
        (*(float * PTR32 *)&gen_args[1])[6] = *pfVar15;
        (*(float * PTR32 *)&gen_args[1])[7] = pfVar15[1];
        (*(float * PTR32 *)&gen_args[1])[8] = pfVar15[2];
        pfVar15 = (float *)(iVar7 + (uint)(byte)puVar13[1] * 0xc);
        (*(float * PTR32 *)&gen_args[1])[9] = *pfVar15;
        (*(float * PTR32 *)&gen_args[1])[10] = pfVar15[1];
        (*(float * PTR32 *)&gen_args[1])[0xb] = pfVar15[2];
        (*(float * PTR32 *)&gen_args[1])[0xf] = gen_bits2f((uint)CONCAT12(*(byte *)((int)puVar13 + 3),puVar13[2]));
        (*(float * PTR32 *)&gen_args[1])[0x10] = *(float *)(*(uint *)&gen_args[4]);
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
  uVar16 = 0;
  pfVar15 = &(*(float *)(gen_frame + 0x78));
  puVar17 = (undefined4 *)((*(int *)&gen_args[0]) + 0x10);
  do {
    puVar11 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*puVar17 + 8))((int *)*puVar17)));
    (*(undefined4 *)(gen_frame + 0x58)) = *puVar11;
    (*(undefined4 *)(gen_frame + 0x5c)) = puVar11[1];
    (*(undefined4 *)(gen_frame + 0x60)) = puVar11[2];
    puVar11 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)*puVar17 + 0xc))((int *)*puVar17)));
    (*(undefined4 *)(gen_frame + 0x64)) = *puVar11;
    (*(undefined4 *)(gen_frame + 0x68)) = puVar11[1];
    (*(undefined4 *)(gen_frame + 0x6c)) = puVar11[2];
    bVar9 = F_00c99860((*(float * PTR32 *)&gen_args[2]),(*(uint *)&gen_args[3]),&(*(undefined4 *)(gen_frame + 0x58)),pfVar15,&(*(undefined4 *)(gen_frame + 0x4c)));
    iVar6 = (int)(*(byte * PTR32 *)&gen_args[5]);
    uVar14 = (*(uint *)&gen_args[4]);
    *(byte *)((int)&(*(float *)(gen_frame + 0x88)) + uVar16) = bVar9;
    uVar8 = (uint)gen_fl2bits((*(float *)(gen_frame + 0x88)));
    uVar16 = uVar16 + 1;
    puVar17 = puVar17 + 1;
    pfVar15 = pfVar15 + 1;
  } while (uVar16 < 2);
  uVar16 = 0;
  (*(int *)(gen_frame + 0x80)) = 0;
  (*(float *)(gen_frame + 0x84)) = 1.4013e-45;
  cVar12 = (char)((uint)gen_fl2bits((*(float *)(gen_frame + 0x88))) >> 8);
  if ((char)(uint)gen_fl2bits((*(float *)(gen_frame + 0x88))) == '\0') {
    if (cVar12 == '\0') {
      (*(int *)(gen_frame + 0x80)) = -1;
    }
    else {
      (*(int *)(gen_frame + 0x80)) = 1;
      (*(float *)(gen_frame + 0x84)) = -NAN;
    }
  }
  else if (cVar12 == '\0') {
    (*(int *)(gen_frame + 0x80)) = 0;
    (*(float *)(gen_frame + 0x84)) = -NAN;
  }
  else if (((float)gen_bits2f((unsigned int)(uintptr_t)((*(ushort * PTR32 *)(gen_frame + 0x7c))))) < (*(float *)(gen_frame + 0x78))) {
    (*(int *)(gen_frame + 0x80)) = 1;
    (*(float *)(gen_frame + 0x84)) = 0.0;
  }
  (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x88)) + 3)) = 0;
  (*(float *)(gen_frame + 0x88)) = gen_bits2f(uVar8 & 0xffffff);
  do {
    iVar7 = (&(*(int *)(gen_frame + 0x80)))[uVar16];
    if (iVar7 == -1) break;
    (*(uint *)&gen_args[4]) = *(uint *)uVar14;
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
    if (((((double)GEN_TOD((&(*(float *)(gen_frame + 0x78)))[iVar7])) - REFG(double, 0x1091858) < ((double)GEN_TOD(gen_bits2f((*(uint *)&gen_args[4]))))) &&
        (bVar9 = F_00c908d0(*(undefined4 *)((*(int *)(gen_frame + 0x74)) + 0x10 + iVar7 * 4),(float *)&(*(undefined4 *)(gen_frame + 0x0)),
                              (*(float * PTR32 *)&gen_args[2]),(*(uint *)&gen_args[3]),(uint)&(*(uint *)&gen_args[4]),(byte *)iVar6), bVar9 != 0)) &&
       (gen_bits2f((*(uint *)&gen_args[4])) < *(float *)uVar14)) {
      *(uint *)uVar14 = (*(uint *)&gen_args[4]);
      F_00550bc0((*(float * PTR32 *)&gen_args[1]),&(*(undefined4 *)(gen_frame + 0x0)));
      (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x88)) + 3)) = 1;
      (*(float *)(gen_frame + 0x88)) = gen_bits2f(CONCAT13(1,GEN_PIECE(&(*(float *)(gen_frame + 0x88)), 0, 3)));
    }
    uVar16 = uVar16 + 1;
  } while (uVar16 < 2);
  return (*(undefined1 *)((char *)&(*(float *)(gen_frame + 0x88)) + 3));
}

/* ref: FUN_00c90e00 */
uint F_00c90e00(unsigned int gen_a0)
{
  GEN_ENTER(0xc90e00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xc) + 0x2c)));
}

/* ref: FUN_00c90e10 */
uint F_00c90e10(unsigned int gen_a0)
{
  GEN_ENTER(0xc90e10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xc) + 0x28)));
}

/* ref: FUN_00c90e20 */
unsigned int F_00c90e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc90e20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
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
  
  iVar12 = *(int *)((int)this + 0xc);
  if (*(int *)(iVar12 + 0x2c) != 0) {
    fVar1 = *(float *)(iVar12 + 0x10);
    fVar2 = *(float *)(iVar12 + 0x14);
    fVar3 = *(float *)(iVar12 + 0x18);
    dVar21 = ((double)GEN_TOD((*(float *)(iVar12 + 0x1c) - fVar1))) / REFG(double, 0x109cab0);
    dVar19 = ((double)GEN_TOD((*(float *)(iVar12 + 0x20) - fVar2))) / REFG(double, 0x109cab0);
    uVar15 = 0;
    dVar20 = ((double)GEN_TOD((*(float *)(iVar12 + 0x24) - fVar3))) / REFG(double, 0x109cab0);
    puVar13 = (ushort *)(iVar12 + 0x30);
    if (*(int *)(iVar12 + 0x28) != 0) {
      pfVar14 = (float *)(param_2 + 8);
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
      } while (uVar15 < *(uint *)(iVar12 + 0x28));
    }
  }
  return 0;
}

/* ref: FUN_00c91120 */
uint F_00c91120(unsigned int gen_a0)
{
  GEN_ENTER(0xc91120u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0xc) + (*((int *)GEN_TOP((*(int *)(in_ecx + 0xc) + 0x28))) * 3 + 0x18) * 2;
}

/* ref: FUN_00c91130 */
unsigned int F_00c91130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc91130u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0xc);
  *param_2 = *(undefined4 *)(iVar1 + 0x10);
  param_2[1] = *(undefined4 *)(iVar1 + 0x14);
  param_2[2] = *(undefined4 *)(iVar1 + 0x18);
  param_2[3] = *(undefined4 *)(iVar1 + 0x1c);
  param_2[4] = *(undefined4 *)(iVar1 + 0x20);
  param_2[5] = *(undefined4 *)(iVar1 + 0x24);
  return 0;
}

/* ref: FUN_00c91160 */
unsigned int F_00c91160(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc91160u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int iVar1;
  int * piVar2;
  
  ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,this);
  piVar2 = (int *)((int)this + 0x10);
  iVar1 = 2;
  do {
    if (*piVar2 != 0) {
      ((code *)*(gen_code32 *)(*(int *)*piVar2 + 0x28))((int *)*piVar2,param_1);
    }
    piVar2 = piVar2 + 1;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}

/* ref: FUN_00c911a0 */
uint F_00c911a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc911a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int * piVar1;
  uint uVar2;
  
  uVar2 = F_00c96f70(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x34) + 4))));
  *(uint *)((int)this + 0x6c) = uVar2;
  *(int *)((int)this + 0x30) = *(int *)((int)this + 0x30) + 1;
  piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0x34) + 0x20)));
  *piVar1 = *piVar1 + 1;
  return 1;
}

/* ref: FUN_00c911e0 */
uint F_00c911e0(unsigned int gen_a0)
{
  GEN_ENTER(0xc911e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x80) != 0) {
    uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this,*(int *)((int)this + 0x80));
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  return uVar1;
}

/* ref: FUN_00c91210 */
uint F_00c91210(unsigned int gen_a0)
{
  GEN_ENTER(0xc91210u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 0x30) == 0) && (*(int *)(in_ecx + 0x6c) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00c91230 */
uint F_00c91230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc91230u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x94);
  param_2[1] = *(undefined4 *)(in_ecx + 0x98);
  param_2[2] = *(undefined4 *)(in_ecx + 0x9c);
  return (uint)param_2;
}

/* ref: FUN_00c91260 */
uint F_00c91260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc91260u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0xa0);
  param_2[1] = *(undefined4 *)(in_ecx + 0xa4);
  param_2[2] = *(undefined4 *)(in_ecx + 0xa8);
  return (uint)param_2;
}

/* ref: FUN_00c91290 */
unsigned int F_00c91290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc91290u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(in_ecx + 200);
  uVar2 = *(undefined4 *)(in_ecx + 0xcc);
  *param_2 = *(undefined4 *)(in_ecx + 0xc4);
  param_2[3] = 0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  uVar1 = *(undefined4 *)(in_ecx + 0xd0);
  uVar2 = *(undefined4 *)(in_ecx + 0xd4);
  uVar3 = *(undefined4 *)(in_ecx + 0xd8);
  param_2[7] = 0;
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  param_2[6] = uVar3;
  uVar1 = *(undefined4 *)(in_ecx + 0xdc);
  uVar2 = *(undefined4 *)(in_ecx + 0xe0);
  uVar3 = *(undefined4 *)(in_ecx + 0xe4);
  param_2[0xb] = 0;
  uVar4 = REFG(float, 0x1087f04);
  param_2[8] = uVar1;
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  uVar1 = *(undefined4 *)(in_ecx + 0xec);
  uVar2 = *(undefined4 *)(in_ecx + 0xf0);
  param_2[0xc] = *(undefined4 *)(in_ecx + 0xe8);
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar4;
  return 0;
}

/* ref: FUN_00c91360 */
unsigned int F_00c91360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc91360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x50];
  
  if (*(int *)((int)this + 0x80) != 0) {
    (*(undefined4 *)(gen_frame + 0x18)) = 0;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x48)) = 0;
    ((code *)*(gen_code32 *)(*(int *)this + 0x3c))(this,((undefined1 *)(gen_frame + 0xc)));
    ((code *)*(gen_code32 *)(*param_1 + 4))(param_1,this);
    ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x80) + 4))))
              (*(int * PTR32 *)((int)this + 0x80),this,((undefined1 *)(gen_frame + 0xc)),param_1);
  }
  return 0;
}

/* ref: FUN_00c92f30 */
unsigned int F_00c92f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc92f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x80);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
    F_00ca2140(*(undefined4 *)((int)this + 0x80),&REFG(undefined, 0x1128e3b),
                 *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x34) + 4))));
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  return 0;
}

/* ref: FUN_00c92f70 */
uint F_00c92f70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc92f70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  int * piVar1;
  int * piVar2;
  code * pcVar3;
  uint uVar4;
  
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0xc))(param_1);
  if ((char)uVar4 != '\0') {
    uVar4 = F_00c97010(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + -0x34) + 4))),0,"load resource failed\n");
    return uVar4;
  }
  uVar4 = ((code *)*(gen_code32 *)(*param_1 + 0x10))(param_1);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(uVar4 + 8);
  piVar1 = (int *)((int)this + -0x68);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(uVar4 + 0xc);
  uVar4 = ((code *)*(gen_code32 *)(*piVar1 + 0x5c))(piVar1,uVar4,piVar1,param_1);
  *(uint *)((int)this + 0x18) = uVar4;
  piVar2 = ((int *)GEN_TOP((*(int *)((int)this + -0x34) + 0x20)));
  *piVar2 = *piVar2 + -1;
  *(int *)((int)this + -0x38) = *(int *)((int)this + -0x38) + -1;
  pcVar3 = *(gen_code32 *)(*piVar1 + 0x48);
  *(undefined1 *)((int)this + 0x10) = 1;
  uVar4 = (*pcVar3)(piVar1);
  *(undefined1 *)((int)this + 0x12) = 1;
  return uVar4;
}

/* ref: FUN_00c92ff0 */
uint F_00c92ff0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc92ff0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  uint in_EAX = 0;
  uint uVar1;
  
  if (*(int *)((int)this + 0x80) != 0) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x80) + 0x28))))
                      (*(int * PTR32 *)((int)this + 0x80),param_1,param_2,param_3,param_4,param_5,param_6,
                       param_7,param_8);
    return uVar1;
  }
  return in_EAX;
}

/* ref: FUN_00c93010 */
uint F_00c93010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc93010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x109cd2c));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x109cd20));
  *(undefined4 *)((int)this + 8) = param_2;
  *(undefined4 *)((int)this + 0xc) = param_1;
  return (uint)this;
}

/* ref: FUN_00c93040 */
unsigned int F_00c93040(unsigned int gen_a0)
{
  GEN_ENTER(0xc93040u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  return 0;
}

/* ref: FUN_00c93050 */
uint F_00c93050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc93050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
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
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1128e80));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x1128e78));
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  pvVar11 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + 0x34))) + 4)));
  if ((*(int *)((int)this + 0x24) != 0) && (*(int *)((int)this + 0x28) != 0)) {
    fVar1 = *(float *)((int)this + 0x18);
    fVar2 = *(float *)((int)this + 0xc);
    fVar3 = *(float *)((int)this + 0x10);
    fVar4 = *(float *)((int)this + 0x1c);
    fVar5 = *(float *)((int)this + 0x14);
    fVar6 = *(float *)((int)this + 0x20);
    uVar9 = F_00c96f50(pvVar11);
    uVar12 = 0;
    *(uint *)((int)this + 0x2c) = uVar9;
    dVar8 = REFG(double, 0x109cab0);
    uVar7 = REFG(float, 0x1087f04);
    puVar13 = (ushort *)(param_1 + 0x30);
    if (*(int *)((int)this + 0x24) != 0) {
      iVar10 = 0;
      do {
        *((float *)GEN_TOP((iVar10 + *(int *)((int)this + 0x2c)))) =
             ((float)GEN_TOF((((double)(fVar1 - fVar2) * (double)*puVar13) / dVar8 +
                    (double)*(float *)((int)this + 0xc))));
        *((float *)GEN_TOP((iVar10 + 4 + *(int *)((int)this + 0x2c)))) =
             ((float)GEN_TOF((((double)(fVar4 - fVar3) * (double)puVar13[1]) / dVar8 +
                    (double)*(float *)((int)this + 0x10))));
        *((float *)GEN_TOP((iVar10 + 8 + *(int *)((int)this + 0x2c)))) =
             ((float)GEN_TOF((((double)(fVar6 - fVar5) * (double)puVar13[2]) / dVar8 +
                    (double)*(float *)((int)this + 0x14))));
        *((undefined4 *)GEN_TOP((iVar10 + 0xc + *(int *)((int)this + 0x2c)))) = uVar7;
        uVar12 = uVar12 + 1;
        puVar13 = puVar13 + 3;
        iVar10 = iVar10 + 0x10;
      } while (uVar12 < *(uint *)((int)this + 0x24));
    }
    iVar10 = *(int *)((int)this + 0x28);
    uVar9 = F_00c96f50(pvVar11);
    *(uint *)((int)this + 0x30) = uVar9;
    F_00c46aa0(uVar9,puVar13,iVar10 * 6);
  }
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  if ((0 < *(int *)(param_1 + 8)) && (0 < *(int *)(param_1 + 0xc))) {
    this_00 = (undefined *)F_00ca2100(0x3c,&REFG(undefined, 0x1128e02),pvVar11);
    if (this_00 == (undefined *)0x0) {
      uVar9 = 0;
    }
    else {
      uVar9 = F_00c93050(this_00,*(int *)(param_1 + 8) + param_1);
    }
    *(uint *)((int)this + 0x34) = uVar9;
    pvVar11 = (undefined *)F_00ca2100(0x3c,&REFG(undefined, 0x1128e03),pvVar11);
    if (pvVar11 != (undefined *)0x0) {
      uVar9 = F_00c93050(pvVar11,*(int *)(param_1 + 0xc) + param_1);
      *(uint *)((int)this + 0x38) = uVar9;
      return (uint)this;
    }
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00c932c0 */
unsigned int F_00c932c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc932c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  undefined4 * puVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1128e80));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x1128e78));
  this_00 = *((undefined * PTR32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + 0x34))) + 4)));
  F_00c96f60(this_00);
  F_00c96f60(this_00);
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x34);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
    F_00ca2140(*(undefined4 *)((int)this + 0x34),&REFG(undefined, 0x1128e04),this_00);
    *(undefined4 *)((int)this + 0x34) = 0;
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x38);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
    F_00ca2140(*(undefined4 *)((int)this + 0x38),&REFG(undefined, 0x1128e05),this_00);
    *(undefined4 *)((int)this + 0x38) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  return 0;
}

/* ref: FUN_00c93350 */
uint F_00c93350(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc93350u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 uVar1;
  undefined * pvVar2;
  uint uVar3;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1128eb4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x1128eac));
  *(undefined1 *)((int)this + 0x18) = 0;
  *(int *)((int)this + 8) = param_2;
  *(int *)((int)this + 0xc) = param_1;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  uVar1 = *((undefined4 *)GEN_TOP((*(int *)(param_2 + 0x34) + 4)));
  if ((0 < *(int *)(param_1 + 8)) && (0 < *(int *)(param_1 + 0xc))) {
    pvVar2 = (undefined *)F_00ca2100(0x1c,&REFG(undefined, 0x1128e06),uVar1);
    if (pvVar2 == (undefined *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = F_00c93350(pvVar2,*((int *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) + param_1,param_2);
    }
    *(uint *)((int)this + 0x10) = uVar3;
    pvVar2 = (undefined *)F_00ca2100(0x1c,&REFG(undefined, 0x1128e07),uVar1);
    if (pvVar2 != (undefined *)0x0) {
      uVar3 = F_00c93350(pvVar2,*((int *)GEN_TOP((*(int *)((int)this + 0xc) + 0xc))) + param_1,param_2);
      *(uint *)((int)this + 0x14) = uVar3;
      return (uint)this;
    }
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00c93410 */
unsigned int F_00c93410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc93410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1128eb4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x1128eac));
  *(undefined1 *)((int)this + 0x18) = 1;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  return 0;
}

/* ref: FUN_00c93450 */
unsigned int F_00c93450(unsigned int gen_a0)
{
  GEN_ENTER(0xc93450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  undefined4 uVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x1128eb4));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[2])REFP(0x1128eac));
  if ((*(char *)((int)this + 0x18) == '\0') && (*(int *)((int)this + 8) != 0)) {
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x10);
    uVar2 = *((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 8) + 0x34))) + 4)));
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      F_00ca2140(*(undefined4 *)((int)this + 0x10),&REFG(undefined, 0x1128e08),uVar2);
      *(undefined4 *)((int)this + 0x10) = 0;
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x14);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,0);
      F_00ca2140(*(undefined4 *)((int)this + 0x14),&REFG(undefined, 0x1128e09),uVar2);
      *(undefined4 *)((int)this + 0x14) = 0;
    }
    *(undefined * PTR32 * PTR32 *)((int)this + 4) =
         (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
    *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
    return 0;
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 4) =
       (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  return 0;
}

/* ref: FUN_00c934f0 */
unsigned int F_00c934f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc934f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
    *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x1128eb4));
    param_1[1] = (*(undefined * PTR32 (*)[2])REFP(0x1128eac));
    *(undefined1 *)(param_1 + 6) = 1;
    param_1[2] = 0;
    param_1[3] = *(undefined4 *)((int)this + 8);
    param_1[4] = *(undefined4 *)((int)this + 0xc);
    param_1[5] = *(undefined4 *)((int)this + 0x10);
  }
  return 0;
}

/* ref: FUN_00c93530 */
uint F_00c93530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc93530u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc10];
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0xc08)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc0c);
  iVar3 = 0xff;
  puVar1 = ((undefined4 *)(gen_frame + 0x10));
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  uVar2 = F_00c90410(this,param_1,param_2,param_3,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0xc08)) ^ (uint)(uint)(gen_frame + 0xc0c));
  return uVar2;
}

/* ref: FUN_00c935a0 */
unsigned int F_00c935a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc935a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0x134);
  param_2[1] = *(undefined4 *)(in_ecx + 0x138);
  param_2[2] = *(undefined4 *)(in_ecx + 0x13c);
  param_2[3] = *(undefined4 *)(in_ecx + 0x140);
  param_2[4] = *(undefined4 *)(in_ecx + 0x144);
  param_2[5] = *(undefined4 *)(in_ecx + 0x148);
  return 0;
}

/* ref: FUN_00c935e0 */
byte F_00c935e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc935e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[4];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float * pfVar5;
  byte bVar6;
  float * pfVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar8 = (*(uint *)&gen_args[3]);
  if (((*(int * PTR32 *)&gen_args[0])[0x11] & (*(uint *)&gen_args[2])) != 0) {
    fVar4 = REFG(float, 0x109cc48);
    if ((*(byte *)(*(uint *)&gen_args[3]) & 1) != 0) {
      fVar4 = *((float *)GEN_TOP((*(int *)((*(uint *)&gen_args[3]) + 4) + 0xc)));
    }
    (*(int *)(gen_frame + 0x30)) = (*(int * PTR32 *)&gen_args[0])[0x49];
    (*(int *)(gen_frame + 0x34)) = (*(int * PTR32 *)&gen_args[0])[0x4a];
    (*(int *)(gen_frame + 0x38)) = (*(int * PTR32 *)&gen_args[0])[0x4b];
    (*(float *)(gen_frame + 0x3c)) = gen_bits2f((*(int * PTR32 *)&gen_args[0])[0x4c]) + fVar4;
    bVar6 = F_00c9ad50(*(undefined4 *)((*(uint *)&gen_args[3]) + 4),*(undefined4 *)((*(uint *)&gen_args[3]) + 8),&(*(int *)(gen_frame + 0x30)),
                         ((undefined1 *)(gen_frame + 0xc)));
    if ((bVar6 != 0) && ((*(int * PTR32 *)&gen_args[0])[0x20] != 0)) {
      (*(undefined4 *)(gen_frame + 0x9c)) = 0;
      (*(undefined4 *)(gen_frame + 0xac)) = 0;
      (*(undefined4 *)(gen_frame + 0xbc)) = 0;
      (*(undefined4 *)(gen_frame + 0xcc)) = 0;
      ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x3c))))((*(int * PTR32 *)&gen_args[0]),&(*(float *)(gen_frame + 0x90)));
      F_00c8fb00(&(*(float *)(gen_frame + 0x50)),(*(int * PTR32 *)&gen_args[0]) + 0x3d);
      pfVar5 = *(float * PTR32 *)(uVar8 + 4);
      fVar1 = pfVar5[1];
      fVar2 = *pfVar5;
      fVar3 = pfVar5[2];
      (*(float *)(gen_frame + 0x40)) = ((float)GEN_TOF(((((double)fVar1 * (double)(*(float *)(gen_frame + 0x60)) + (double)fVar2 * (double)(*(float *)(gen_frame + 0x50))) +
                         (double)fVar3 * (double)(*(float *)(gen_frame + 0x70))) + (double)(*(float *)(gen_frame + 0x80)))));
      (*(float *)(gen_frame + 0x44)) = ((float)GEN_TOF(((((double)fVar2 * (double)(*(float *)(gen_frame + 0x54)) + (double)fVar1 * (double)(*(float *)(gen_frame + 0x64))) +
                         (double)fVar3 * (double)(*(float *)(gen_frame + 0x74))) + (double)(*(float *)(gen_frame + 0x84)))));
      (*(float *)(gen_frame + 0x48)) = ((float)GEN_TOF(((((double)fVar2 * (double)(*(float *)(gen_frame + 0x58)) + (double)fVar1 * (double)(*(float *)(gen_frame + 0x68))) +
                         (double)fVar3 * (double)(*(float *)(gen_frame + 0x78))) + (double)(*(float *)(gen_frame + 0x88)))));
      (*(float *)(gen_frame + 0x4c)) = gen_bits2f((*(int * PTR32 *)&gen_args[0])[0x1f]) * fVar4;
      pfVar7 = (float *)F_00c8eb80();
      pfVar5 = *(float * PTR32 *)(uVar8 + 8);
      (*(float *)(gen_frame + 0xd0)) = 0.0;
      (*(float *)(gen_frame + 0xd4)) = 0.0;
      (*(float *)(gen_frame + 0xd8)) = 0.0;
      (*(float *)(gen_frame + 0xd0)) = ((float)GEN_TOF(((((double)*pfVar5 * (double)(*(float *)(gen_frame + 0x50)) + (double)(*(float *)(gen_frame + 0x60)) * (double)pfVar5[1]
                          ) + (double)(*(float *)(gen_frame + 0x70)) * (double)pfVar5[2]) + (double)*pfVar7)));
      (*(float *)(gen_frame + 0xd4)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x64)) * (double)pfVar5[1] + (double)(*(float *)(gen_frame + 0x54)) * (double)*pfVar5
                          ) + (double)(*(float *)(gen_frame + 0x74)) * (double)pfVar5[2]) + (double)pfVar7[1])));
      (*(float *)(gen_frame + 0xd8)) = ((float)GEN_TOF(((((double)(*(float *)(gen_frame + 0x68)) * (double)pfVar5[1] + (double)(*(float *)(gen_frame + 0x58)) * (double)*pfVar5
                          ) + (double)(*(float *)(gen_frame + 0x78)) * (double)pfVar5[2]) + (double)pfVar7[2])));
      F_00553ac0(&(*(float *)(gen_frame + 0xd0)));
      (*(uint *)&gen_args[3]) = REFG(float, 0x1090998);
      (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)uVar8;
      (*(float * PTR32 *)(gen_frame + 0x18)) = &(*(float *)(gen_frame + 0xd0));
      (*(float * PTR32 *)(gen_frame + 0x14)) = &(*(float *)(gen_frame + 0x40));
      (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)(uVar8 + 0x14);
      (*(uint * PTR32 *)(gen_frame + 0x1c)) = &(*(uint *)&gen_args[3]);
      (*(int *)(gen_frame + 0x28)) = (*(int * PTR32 *)&gen_args[0])[0x12];
      (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)(uVar8 + 0x10);
      (*(int *)(gen_frame + 0x2c)) = (*(int * PTR32 *)&gen_args[0])[0x13];
      (*(float * PTR32 *)&gen_args[1])[0x10] = REFG(float, 0x1128ee0);
      uVar8 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[0x20])) + 0x10))))
                        (((int *)GEN_TOP((*(int * PTR32 *)&gen_args[0])[0x20])),&(*(float *)(gen_frame + 0x90)),(*(float * PTR32 *)&gen_args[1]),&(*(undefined4 *)(gen_frame + 0x10)));
      if ((char)uVar8 != '\0') {
        fVar4 = (*(float * PTR32 *)&gen_args[1])[5];
        (*(float *)(gen_frame + 0x10c)) = (*(float *)(gen_frame + 0xb0)) * fVar4;
        (*(float *)(gen_frame + 0x110)) = (*(float *)(gen_frame + 0xb4)) * fVar4;
        (*(float *)(gen_frame + 0x114)) = (*(float *)(gen_frame + 0xb8)) * fVar4;
        fVar1 = (*(float * PTR32 *)&gen_args[1])[4];
        (*(float *)(gen_frame + 0xec)) = (*(float *)(gen_frame + 0xa0)) * fVar1;
        (*(float *)(gen_frame + 0xf0)) = (*(float *)(gen_frame + 0xa4)) * fVar1;
        (*(float *)(gen_frame + 0xf4)) = (*(float *)(gen_frame + 0xa8)) * fVar1;
        (*(float *)(gen_frame + 0xdc)) = (*(float *)(gen_frame + 0x90)) * (*(float * PTR32 *)&gen_args[1])[3];
        (*(float *)(gen_frame + 0xe0)) = (*(float *)(gen_frame + 0x94)) * (*(float * PTR32 *)&gen_args[1])[3];
        (*(float *)(gen_frame + 0xe4)) = (*(float *)(gen_frame + 0x98)) * (*(float * PTR32 *)&gen_args[1])[3];
        (*(float *)(gen_frame + 0xfc)) = (*(float *)(gen_frame + 0x90)) * (*(float * PTR32 *)&gen_args[1])[3] + (*(float *)(gen_frame + 0xa0)) * fVar1;
        (*(float *)(gen_frame + 0x100)) = (*(float *)(gen_frame + 0x94)) * (*(float * PTR32 *)&gen_args[1])[3] + (*(float *)(gen_frame + 0xa4)) * fVar1;
        (*(float *)(gen_frame + 0x104)) = (*(float *)(gen_frame + 0x98)) * (*(float * PTR32 *)&gen_args[1])[3] + (*(float *)(gen_frame + 0xa8)) * fVar1;
        (*(float *)(gen_frame + 0xec)) = (*(float *)(gen_frame + 0xfc)) + (*(float *)(gen_frame + 0xb0)) * fVar4;
        (*(float *)(gen_frame + 0xf0)) = (*(float *)(gen_frame + 0x100)) + (*(float *)(gen_frame + 0xb4)) * fVar4;
        (*(float *)(gen_frame + 0xf4)) = (*(float *)(gen_frame + 0x104)) + (*(float *)(gen_frame + 0xb8)) * fVar4;
        (*(float *)(gen_frame + 0x10c)) = (*(float *)(gen_frame + 0xc0)) + (*(float *)(gen_frame + 0xec));
        (*(float *)(gen_frame + 0x110)) = (*(float *)(gen_frame + 0xf0)) + (*(float *)(gen_frame + 0xc4));
        (*(float * PTR32 *)&gen_args[1])[3] = (*(float *)(gen_frame + 0x10c));
        (*(float * PTR32 *)&gen_args[1])[5] = (*(float *)(gen_frame + 0xf4)) + (*(float *)(gen_frame + 0xc8));
        (*(float * PTR32 *)&gen_args[1])[4] = (*(float *)(gen_frame + 0x110));
        (*(float *)(gen_frame + 0xdc)) = (*(float *)(gen_frame + 0xb0)) * (*(float * PTR32 *)&gen_args[1])[8];
        (*(float *)(gen_frame + 0xe0)) = (*(float *)(gen_frame + 0xb4)) * (*(float * PTR32 *)&gen_args[1])[8];
        (*(float *)(gen_frame + 0xe4)) = (*(float *)(gen_frame + 0xb8)) * (*(float * PTR32 *)&gen_args[1])[8];
        (*(float *)(gen_frame + 0xfc)) = (*(float *)(gen_frame + 0xa0)) * (*(float * PTR32 *)&gen_args[1])[7];
        (*(float *)(gen_frame + 0x100)) = (*(float *)(gen_frame + 0xa4)) * (*(float * PTR32 *)&gen_args[1])[7];
        (*(float *)(gen_frame + 0x104)) = (*(float *)(gen_frame + 0xa8)) * (*(float * PTR32 *)&gen_args[1])[7];
        (*(float *)(gen_frame + 0x10c)) = (*(float * PTR32 *)&gen_args[1])[6] * (*(float *)(gen_frame + 0x90));
        (*(float *)(gen_frame + 0x110)) = (*(float *)(gen_frame + 0x94)) * (*(float * PTR32 *)&gen_args[1])[6];
        (*(float *)(gen_frame + 0x114)) = (*(float *)(gen_frame + 0x98)) * (*(float * PTR32 *)&gen_args[1])[6];
        (*(float *)(gen_frame + 0xec)) = (*(float * PTR32 *)&gen_args[1])[6] * (*(float *)(gen_frame + 0x90)) + (*(float *)(gen_frame + 0xa0)) * (*(float * PTR32 *)&gen_args[1])[7];
        (*(float *)(gen_frame + 0xf0)) = (*(float *)(gen_frame + 0x94)) * (*(float * PTR32 *)&gen_args[1])[6] + (*(float *)(gen_frame + 0xa4)) * (*(float * PTR32 *)&gen_args[1])[7];
        (*(float *)(gen_frame + 0xf4)) = (*(float *)(gen_frame + 0x98)) * (*(float * PTR32 *)&gen_args[1])[6] + (*(float *)(gen_frame + 0xa8)) * (*(float * PTR32 *)&gen_args[1])[7];
        (*(float *)(gen_frame + 0x10c)) = (*(float *)(gen_frame + 0xec)) + (*(float *)(gen_frame + 0xb0)) * (*(float * PTR32 *)&gen_args[1])[8];
        (*(float *)(gen_frame + 0x110)) = (*(float *)(gen_frame + 0xf0)) + (*(float *)(gen_frame + 0xb4)) * (*(float * PTR32 *)&gen_args[1])[8];
        (*(float *)(gen_frame + 0x114)) = (*(float *)(gen_frame + 0xf4)) + (*(float *)(gen_frame + 0xb8)) * (*(float * PTR32 *)&gen_args[1])[8];
        (*(float *)(gen_frame + 0xfc)) = (*(float *)(gen_frame + 0xc0)) + (*(float *)(gen_frame + 0x10c));
        (*(float *)(gen_frame + 0x100)) = (*(float *)(gen_frame + 0x110)) + (*(float *)(gen_frame + 0xc4));
        (*(float * PTR32 *)&gen_args[1])[6] = (*(float *)(gen_frame + 0xfc));
        (*(float * PTR32 *)&gen_args[1])[8] = (*(float *)(gen_frame + 0x114)) + (*(float *)(gen_frame + 0xc8));
        (*(float * PTR32 *)&gen_args[1])[7] = (*(float *)(gen_frame + 0x100));
        (*(float *)(gen_frame + 0xdc)) = (*(float *)(gen_frame + 0xb0)) * (*(float * PTR32 *)&gen_args[1])[0xb];
        (*(float *)(gen_frame + 0xe0)) = (*(float *)(gen_frame + 0xb4)) * (*(float * PTR32 *)&gen_args[1])[0xb];
        (*(float *)(gen_frame + 0xe4)) = (*(float *)(gen_frame + 0xb8)) * (*(float * PTR32 *)&gen_args[1])[0xb];
        (*(float *)(gen_frame + 0xfc)) = (*(float *)(gen_frame + 0xa0)) * (*(float * PTR32 *)&gen_args[1])[10];
        (*(float *)(gen_frame + 0x100)) = (*(float *)(gen_frame + 0xa4)) * (*(float * PTR32 *)&gen_args[1])[10];
        (*(float *)(gen_frame + 0x104)) = (*(float *)(gen_frame + 0xa8)) * (*(float * PTR32 *)&gen_args[1])[10];
        (*(float *)(gen_frame + 0x10c)) = (*(float * PTR32 *)&gen_args[1])[9] * (*(float *)(gen_frame + 0x90));
        (*(float *)(gen_frame + 0x110)) = (*(float *)(gen_frame + 0x94)) * (*(float * PTR32 *)&gen_args[1])[9];
        (*(float *)(gen_frame + 0x114)) = (*(float *)(gen_frame + 0x98)) * (*(float * PTR32 *)&gen_args[1])[9];
        (*(float *)(gen_frame + 0xec)) = (*(float * PTR32 *)&gen_args[1])[9] * (*(float *)(gen_frame + 0x90)) + (*(float *)(gen_frame + 0xa0)) * (*(float * PTR32 *)&gen_args[1])[10];
        (*(float *)(gen_frame + 0xf0)) = (*(float *)(gen_frame + 0x94)) * (*(float * PTR32 *)&gen_args[1])[9] + (*(float *)(gen_frame + 0xa4)) * (*(float * PTR32 *)&gen_args[1])[10];
        (*(float *)(gen_frame + 0xf4)) = (*(float *)(gen_frame + 0x98)) * (*(float * PTR32 *)&gen_args[1])[9] + (*(float *)(gen_frame + 0xa8)) * (*(float * PTR32 *)&gen_args[1])[10];
        (*(float *)(gen_frame + 0x10c)) = (*(float *)(gen_frame + 0xec)) + (*(float *)(gen_frame + 0xb0)) * (*(float * PTR32 *)&gen_args[1])[0xb];
        (*(float *)(gen_frame + 0x110)) = (*(float *)(gen_frame + 0xf0)) + (*(float *)(gen_frame + 0xb4)) * (*(float * PTR32 *)&gen_args[1])[0xb];
        (*(float *)(gen_frame + 0x114)) = (*(float *)(gen_frame + 0xf4)) + (*(float *)(gen_frame + 0xb8)) * (*(float * PTR32 *)&gen_args[1])[0xb];
        (*(float *)(gen_frame + 0xfc)) = (*(float *)(gen_frame + 0xc0)) + (*(float *)(gen_frame + 0x10c));
        (*(float *)(gen_frame + 0x100)) = (*(float *)(gen_frame + 0x110)) + (*(float *)(gen_frame + 0xc4));
        (*(float * PTR32 *)&gen_args[1])[9] = (*(float *)(gen_frame + 0xfc));
        (*(float * PTR32 *)&gen_args[1])[10] = (*(float *)(gen_frame + 0x100));
        (*(float * PTR32 *)&gen_args[1])[0xb] = (*(float *)(gen_frame + 0x114)) + (*(float *)(gen_frame + 0xc8));
        fVar4 = (*(float * PTR32 *)&gen_args[1])[2];
        fVar1 = (*(float * PTR32 *)&gen_args[1])[1];
        (*(float *)(gen_frame + 0x104)) = (*(float *)(gen_frame + 0xa8)) * fVar1;
        fVar2 = *(*(float * PTR32 *)&gen_args[1]);
        (*(float *)(gen_frame + 0x10c)) = fVar2 * (*(float *)(gen_frame + 0x90));
        (*(float * PTR32 *)&gen_args[1])[2] = (((*(float *)(gen_frame + 0x98)) * fVar2 + (*(float *)(gen_frame + 0xa8)) * fVar1) + (*(float *)(gen_frame + 0xb8)) * fVar4) + (*(float *)(gen_frame + 0xc8));
        *(*(float * PTR32 *)&gen_args[1]) = (*(float *)(gen_frame + 0xc0)) + ((fVar2 * (*(float *)(gen_frame + 0x90)) + (*(float *)(gen_frame + 0xa0)) * fVar1) + (*(float *)(gen_frame + 0xb0)) * fVar4);
        (*(float * PTR32 *)&gen_args[1])[1] = (((*(float *)(gen_frame + 0x94)) * fVar2 + (*(float *)(gen_frame + 0xa4)) * fVar1) + (*(float *)(gen_frame + 0xb4)) * fVar4) + (*(float *)(gen_frame + 0xc4));
        (*(float * PTR32 *)&gen_args[1])[0x10] = gen_bits2f((*(int * PTR32 *)&gen_args[0])[0x28]) * (*(float * PTR32 *)&gen_args[1])[0x10];
        (*(float * PTR32 *)&gen_args[1])[0x11] = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(int * PTR32 *)&gen_args[0]))));
        uVar8 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x18))))((*(int * PTR32 *)&gen_args[0]));
        if (uVar8 != 0) {
          uVar8 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x18))))((*(int * PTR32 *)&gen_args[0]));
          uVar9 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x14))))((*(int * PTR32 *)&gen_args[0]));
          uVar10 = ((code *)*((gen_code32 *)GEN_TOP((*(*(int * PTR32 *)&gen_args[0]) + 0x18))))((*(int * PTR32 *)&gen_args[0]));
          (*(float * PTR32 *)&gen_args[1])[0xf] = gen_bits2f(~uVar10 & (uint)gen_fl2bits((*(float * PTR32 *)&gen_args[1])[0xf]) | uVar8 & uVar9);
        }
        return 1;
      }
    }
  }
  return 0;
}

/* ref: FUN_00c94230 */
uint F_00c94230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc94230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  undefined4 * puVar1;
  char * pcVar2;
  undefined * this_00;
  uint uVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    if (param_3 == (int *)0x0) {
      pcVar2 = "unknown";
    }
    else {
      pcVar2 = ((char *)GEN_TOP(((code *)*(gen_code32 *)(*param_3 + 4))(param_3)));
    }
    F_00c96fb0(*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x34) + 4))),
                 "warning: pcb file ver==0. furuiyo %s\n",pcVar2);
    this_00 = (undefined *)F_00ca2100(0x1c,&REFG(undefined, 0x1128e0b),
                                   *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x34) + 4))));
    if (this_00 != (undefined *)0x0) {
      uVar3 = F_00c93350(this_00,param_1 + 0x10,this);
      return uVar3;
    }
  }
  else if (*(int *)(param_1 + 4) == 1) {
    puVar1 = (undefined4 *)
             F_00ca2100(0x10,&REFG(undefined, 0x1128e3a),*((undefined4 *)GEN_TOP((*(int *)((int)this + 0x34) + 4))));
    if (puVar1 != (undefined4 *)0x0) {
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
uint F_00c942f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc942f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  uint param_4 = (uint)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  int iVar1;
  int iVar2;
  uint uVar3;
  byte * pbVar4;
  double dVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  double dVar9;
  float fVar10;
  
  iVar2 = param_4;
  iVar1 = *(int *)((int)this + 0xc);
  fVar6 = ((float)GEN_TOF((((double)GEN_TOD((*(float *)(iVar1 + 0x24) - *(float *)(iVar1 + 0x18)))) * REFG(double, 0x1088108))));
  fVar8 = ((float)GEN_TOF((((double)GEN_TOD((*(float *)(iVar1 + 0x1c) - *(float *)(iVar1 + 0x10)))) * REFG(double, 0x1088108))));
  fVar10 = ((float)GEN_TOF((((double)GEN_TOD((*(float *)(iVar1 + 0x20) - *(float *)(iVar1 + 0x14)))) * REFG(double, 0x1088108))));
  (*(float *)(gen_frame + 0xc)) = ((float)GEN_TOF((((double)*(float *)(param_2 + 0x30) + (double)*(float *)(iVar1 + 0x10)) +
                    (double)fVar8)));
  dVar5 = (double)fVar10;
  dVar9 = (double)fVar8;
  dVar7 = (double)fVar6;
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF((((double)*(float *)(param_2 + 0x34) + (double)*(float *)(iVar1 + 0x14)) +
                    (double)fVar10)));
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF((((double)*(float *)(param_2 + 0x38) + (double)*(float *)(iVar1 + 0x18)) +
                    (double)fVar6)));
  (*(float *)(gen_frame + 0x18)) = SQRT(((float)GEN_TOF(((dVar5 * dVar5 + dVar9 * dVar9) + dVar7 * dVar7))));
  uVar3 = ((code *)*(gen_code32 *)(*param_3 + 0x1c))(param_3,param_1,&(*(float *)(gen_frame + 0xc)));
  if ((char)uVar3 == '\0') {
    if (*((short *)GEN_TOP((*(int *)((int)this + 0xc) + 0x2a))) != 0) {
      ((code *)*(gen_code32 *)(*(int *)this + 0x1c))(this,param_2,param_4);
      iVar1 = *(int *)((int)this + 0xc);
      pbVar4 = ((byte *)GEN_TOP((iVar1 + (*(ushort *)(iVar1 + 0x28) + 8 + (uint)*(ushort *)(iVar1 + 0x2c) * 2
                                ) * 6)));
      param_4 = 0;
      if (*((short *)GEN_TOP((*(int *)((int)this + 0xc) + 0x2a))) != 0) {
        do {
          ((code *)*(gen_code32 *)(*param_3 + 8))
                    (param_3,param_1,iVar2 + (uint)*pbVar4 * 0xc,iVar2 + (uint)pbVar4[1] * 0xc,
                     iVar2 + (uint)pbVar4[2] * 0xc,(uint)*(ushort *)(pbVar4 + 4));
          param_4 = param_4 + 1;
          pbVar4 = pbVar4 + 6;
        } while (param_4 < *((ushort *)GEN_TOP((*(int *)((int)this + 0xc) + 0x2a))));
      }
    }
    uVar3 = *(uint *)((int)this + 0xc);
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)) = (*(undefined * PTR32 (*)[11])REFP(0x109cd2c));
    (*(undefined * PTR32 * PTR32 *)(gen_frame + 0x20)) = (*(undefined * PTR32 (*)[2])REFP(0x109cd20));
    (*(undefined4 *)(gen_frame + 0x24)) = 0;
    if (0 < *(int *)(uVar3 + 8)) {
      (*(int *)(gen_frame + 0x28)) = *(int *)(uVar3 + 8) + uVar3;
      (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)((int)this + 8);
      uVar3 = F_00c942f0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),param_1,param_2,param_3,iVar2);
    }
    iVar1 = *(int *)((int)this + 0xc);
    if (0 < *(int *)(iVar1 + 8)) {
      (*(int *)(gen_frame + 0x28)) = *(int *)(iVar1 + 0xc) + iVar1;
      (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)((int)this + 8);
      uVar3 = F_00c942f0(&(*(undefined * PTR32 * PTR32 *)(gen_frame + 0x1c)),param_1,param_2,param_3,iVar2);
    }
  }
  return uVar3;
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf1 */
uint F_00c94540(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc94540u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc10];
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0xc08)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc0c);
  iVar3 = 0xff;
  puVar1 = ((undefined4 *)(gen_frame + 0x10));
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  uVar2 = F_00c942f0(this,param_1,param_2,param_3,((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0xc08)) ^ (uint)(uint)(gen_frame + 0xc0c));
  return uVar2;
}

/* ref: FUN_00c945b0 */
unsigned int F_00c945b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc945b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    param_1[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
    *param_1 = (*(undefined * PTR32 (*)[11])REFP(0x109cd2c));
    param_1[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cd20));
    param_1[2] = 0;
  }
  return 0;
}

/* ref: FUN_00c945e0 */
uint F_00c945e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc945e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  int iVar1;
  byte * pbVar2;
  byte bVar3;
  char cVar7;
  undefined3 extraout_var = 0;
  uint uVar4;
  undefined * PTR32 * PTR32 * pppuVar5;
  int iVar8;
  uint uVar9;
  int * piVar10;
  float fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined * PTR32 * PTR32 * pppuVar6;
  
  pbVar2 = (*(byte * PTR32 *)&gen_args[3]);
  (*(float * PTR32 *)(gen_frame + 0xc4)) = *((float * PTR32 *)GEN_TOP(((*(byte * PTR32 *)&gen_args[3]) + 8)));
  iVar8 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
  (*(int *)(gen_frame + 0xb8)) = *((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[3]) + 4)));
  (*(float *)(gen_frame + 0xb4)) = 0.0;
  if (*(short *)(iVar8 + 0x2a) == 0) {
    (*(float *)(gen_frame + 0x94)) = 0.0;
    (*(float *)(gen_frame + 0x98)) = 0.0;
    (*(float *)(gen_frame + 0x9c)) = 0.0;
    (*(float *)(gen_frame + 0xa0)) = 0.0;
    (*(float *)(gen_frame + 0xa4)) = 0.0;
    (*(float *)(gen_frame + 0xa8)) = 0.0;
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x70))[0] = (*(undefined * PTR32 (*)[11])REFP(0x109cd2c));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x80))[0] = (*(undefined * PTR32 (*)[11])REFP(0x109cd2c));
    (*(float * PTR32 *)(gen_frame + 0xc8)) = ((float *)(gen_frame + 0x54));
    ((int *)(gen_frame + 0x78))[0] = 0;
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x80))[2] = (undefined * PTR32 *)0x0;
    (*(uint *)(gen_frame + 0xac)) = 0;
    (*(float *)(gen_frame + 0xb0)) = *((float *)GEN_TOP((*((int *)GEN_TOP(((*(byte * PTR32 *)&gen_args[3]) + 4))) + 0xc)));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x70))[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cd20));
    ((undefined * PTR32 * PTR32 *)(gen_frame + 0x80))[1] = (*(undefined * PTR32 (*)[2])REFP(0x109cd20));
    piVar10 = ((int *)(gen_frame + 0x78)) + 1;
    ((int *)(gen_frame + 0xbc))[1] = 8 - (int)((float *)(gen_frame + 0x54));
    do {
      fVar11 = (*(float *)(gen_frame + 0xb0));
      iVar8 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc)));
      if (0 < *(int *)(iVar8 + 8)) {
        iVar1 = *((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 8)));
        *piVar10 = *(int *)((int)(*(float * PTR32 *)(gen_frame + 0xc8)) + ((int *)(gen_frame + 0xbc))[1] + iVar8) + iVar8;
        piVar10[-1] = iVar1;
      }
      iVar8 = *piVar10;
      (*(float *)(gen_frame + 0x94)) = *(float *)(iVar8 + 0x10);
      (*(float *)(gen_frame + 0x98)) = *(float *)(iVar8 + 0x14);
      (*(float *)(gen_frame + 0x9c)) = *(float *)(iVar8 + 0x18);
      (*(float *)(gen_frame + 0xa0)) = *(float *)(iVar8 + 0x1c);
      (*(float *)(gen_frame + 0xa4)) = *(float *)(iVar8 + 0x20);
      (*(float *)(gen_frame + 0x94)) = *(float *)(iVar8 + 0x10) - fVar11;
      (*(float *)(gen_frame + 0x98)) = *(float *)(iVar8 + 0x14) - fVar11;
      (*(float *)(gen_frame + 0x9c)) = *(float *)(iVar8 + 0x18) - fVar11;
      (*(float *)(gen_frame + 0xa0)) = *(float *)(iVar8 + 0x1c) + fVar11;
      (*(float *)(gen_frame + 0xa4)) = *(float *)(iVar8 + 0x20) + fVar11;
      (*(float *)(gen_frame + 0xa8)) = *(float *)(iVar8 + 0x24) + fVar11;
      bVar3 = F_00c996f0((*(int *)(gen_frame + 0xb8)),(*(float * PTR32 *)(gen_frame + 0xc4)),&(*(float *)(gen_frame + 0x94)),(*(float * PTR32 *)(gen_frame + 0xc8)));
      (*(float * PTR32 *)(gen_frame + 0xc8)) = (*(float * PTR32 *)(gen_frame + 0xc8)) + 1;
      *((byte *)GEN_TOP(((int)&(*(byte * PTR32 *)&gen_args[3]) + (*(uint *)(gen_frame + 0xac))))) = bVar3;
      (*(uint *)(gen_frame + 0xac)) = (*(uint *)(gen_frame + 0xac)) + 1;
      piVar10 = piVar10 + 4;
    } while ((*(uint *)(gen_frame + 0xac)) < 2);
    ((int *)(gen_frame + 0xbc))[0] = 0;
    ((int *)(gen_frame + 0xbc))[1] = 1;
    cVar7 = (char)((uint)(*(byte * PTR32 *)&gen_args[3]) >> 8);
    if ((char)(*(byte * PTR32 *)&gen_args[3]) == '\0') {
      if (cVar7 == '\0') {
        ((int *)(gen_frame + 0xbc))[0] = -1;
      }
      else {
        ((int *)(gen_frame + 0xbc))[0] = 1;
        ((int *)(gen_frame + 0xbc))[1] = 0xffffffff;
      }
    }
    else if (cVar7 == '\0') {
      ((int *)(gen_frame + 0xbc))[0] = 0;
      ((int *)(gen_frame + 0xbc))[1] = 0xffffffff;
    }
    else if (((float *)(gen_frame + 0x54))[1] < ((float *)(gen_frame + 0x54))[0]) {
      ((int *)(gen_frame + 0xbc))[0] = 1;
      ((int *)(gen_frame + 0xbc))[1] = 0;
    }
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(float *)(gen_frame + 0x14)) = 0.0;
    (*(float *)(gen_frame + 0x18)) = 0.0;
    (*(float *)(gen_frame + 0x1c)) = 0.0;
    (*(float *)(gen_frame + 0x20)) = 0.0;
    (*(float *)(gen_frame + 0x24)) = 0.0;
    (*(float *)(gen_frame + 0x28)) = 0.0;
    (*(float *)(gen_frame + 0x2c)) = 0.0;
    (*(float *)(gen_frame + 0x30)) = 0.0;
    (*(float *)(gen_frame + 0x34)) = 0.0;
    (*(undefined4 *)(gen_frame + 0x38)) = 0;
    (*(undefined4 *)(gen_frame + 0x3c)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = 0;
    (*(byte * PTR32 *)&gen_args[3]) = ((byte *)GEN_TOP(((uint)(*(byte * PTR32 *)&gen_args[3]) & 0xffffff)));
    (*(float * PTR32 *)(gen_frame + 0xc8)) = ((float *)GEN_TOP(**(float * PTR32 *)(pbVar2 + 0xc)));
    uVar9 = 0;
    do {
      iVar8 = ((int *)(gen_frame + 0xbc))[uVar9];
      if (iVar8 == -1) break;
      if (((double)((float *)(gen_frame + 0x54))[iVar8] - (double)(*(float *)(gen_frame + 0xb0)) < ((double)GEN_TOD(**(float * PTR32 *)(pbVar2 + 0xc)))) &&
         (uVar4 = F_00c945e0(((undefined * PTR32 * PTR32 *)(gen_frame + 0x70)) + iVar8 * 4,(*(undefined4 *)&gen_args[1]),&(*(undefined4 *)(gen_frame + 0x8)),pbVar2,(*(uint *)&gen_args[4])),
         (char)uVar4 != '\0')) {
        fVar11 = **(float * PTR32 *)(pbVar2 + 0xc);
        if ((*pbVar2 & 1) == 0) {
          if (fVar11 < ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xc8)))))) {
LAB_00c94ded: ;
            (*(float * PTR32 *)(gen_frame + 0xc8)) = ((float *)(uintptr_t)gen_fl2bits((float)(fVar11)));
            F_00550bc0((*(undefined * PTR32 *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0x8)));
            (*(byte * PTR32 *)&gen_args[3]) = ((byte *)GEN_TOP(CONCAT13(1,GEN_PIECE(&(*(byte * PTR32 *)&gen_args[3]), 0, 3))));
          }
        }
        else if ((double)fVar11 <= (double)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xc8))))) + *(double *)&REFG(undefined, 0x109ce00)) {
          fVar16 = ((float)GEN_TOF(((double)((*(float *)(gen_frame + 0x24)) - (*(float *)(gen_frame + 0x18))) * (double)((*(float *)(gen_frame + 0x34)) - (*(float *)(gen_frame + 0x28))) -
                          (double)((*(float *)(gen_frame + 0x28)) - (*(float *)(gen_frame + 0x1c))) * (double)((*(float *)(gen_frame + 0x30)) - (*(float *)(gen_frame + 0x24))))));
          fVar15 = ((float)GEN_TOF(((double)((*(float *)(gen_frame + 0x30)) - (*(float *)(gen_frame + 0x24))) * (double)((*(float *)(gen_frame + 0x20)) - (*(float *)(gen_frame + 0x14))) -
                          (double)((*(float *)(gen_frame + 0x24)) - (*(float *)(gen_frame + 0x18))) * (double)((*(float *)(gen_frame + 0x2c)) - (*(float *)(gen_frame + 0x20))))));
          dVar12 = (double)fVar16;
          fVar17 = ((float)GEN_TOF(((double)((*(float *)(gen_frame + 0x28)) - (*(float *)(gen_frame + 0x1c))) * (double)((*(float *)(gen_frame + 0x2c)) - (*(float *)(gen_frame + 0x20))) -
                          (double)((*(float *)(gen_frame + 0x34)) - (*(float *)(gen_frame + 0x28))) * (double)((*(float *)(gen_frame + 0x20)) - (*(float *)(gen_frame + 0x14))))));
          dVar13 = (double)fVar17;
          dVar14 = (double)fVar15;
          fVar11 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                          ((double)GEN_TOD(SQRT(((float)GEN_TOF(((dVar13 * dVar13 + dVar12 * dVar12) + dVar14 * dVar14
                                              )))))))));
          if (0.0 < fVar11) {
            fVar15 = fVar15 * fVar11;
            fVar16 = fVar11 * fVar16;
            fVar17 = fVar17 * fVar11;
          }
          else {
            fVar15 = REFG(float, 0x1379708);
            fVar16 = REFG(float, 0x1379700);
            fVar17 = REFG(float, 0x1379704);
            if ((*(uint *)&REFG(undefined, 0x137970c) & 1) == 0) {
              *(uint *)&REFG(undefined, 0x137970c) = *(uint *)&REFG(undefined, 0x137970c) | 1;
              REFG(float, 0x1379700) = 0.0;
              REFG(float, 0x1379704) = REFG(float, 0x1087f04);
              REFG(float, 0x1379708) = 0.0;
              fVar15 = REFG(float, 0x1379708);
              fVar16 = REFG(float, 0x1379700);
              fVar17 = REFG(float, 0x1087f04);
            }
          }
          fVar11 = **(float * PTR32 *)(pbVar2 + 0xc);
          fVar15 = ((float)GEN_TOF((((double)(*(float * PTR32 *)(gen_frame + 0xc4))[1] * (double)fVar17 + (double)fVar16 * (double)*(*(float * PTR32 *)(gen_frame + 0xc4)))
                          + (double)(*(float * PTR32 *)(gen_frame + 0xc4))[2] * (double)fVar15)));
          if ((!((double)((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xc8))))) - (double)fVar11 < REFG(double, 0x109cdf8))) || (!((*(float *)(gen_frame + 0xb4)) <= fVar15))
             ) {
            (*(float *)(gen_frame + 0xb4)) = fVar15;
            goto LAB_00c94ded;
          }
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < 2);
    **(float * PTR32 *)(pbVar2 + 0xc) = ((float)gen_bits2f((unsigned int)(uintptr_t)((*(float * PTR32 *)(gen_frame + 0xc8)))));
    iVar8 = 1;
    pppuVar5 = ((undefined * PTR32 * PTR32 *)(gen_frame + 0x80)) + 4;
    do {
      pppuVar6 = pppuVar5 + -4;
      iVar8 = iVar8 + -1;
      pppuVar5[-3] = (*(undefined * PTR32 (*)[2])REFP(0x109cc50));
      *pppuVar6 = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
      pppuVar5 = pppuVar6;
    } while (-1 < iVar8);
    return CONCAT31((int3)((uint)((int)(uintptr_t)pppuVar6) >> 8),(*((undefined1 *)GEN_TOP(((char *)&(*(byte * PTR32 *)&gen_args[3]) + 3)))));
  }
  (*(float * PTR32 *)(gen_frame + 0xc8)) = ((float *)GEN_TOP((iVar8 + (*(ushort *)(iVar8 + 0x28) + 8 + (uint)*(ushort *)(iVar8 + 0x2c) * 2)
                              * 6)));
  uVar9 = 0xffffffff;
  (*(byte * PTR32 *)&gen_args[3]) = (byte *)(*(uint *)&gen_args[4]);
  F_00c90030((*(undefined * PTR32 *)&gen_args[0]),(*(uint *)&gen_args[4]));
  (*(uint *)&gen_args[4]) = **(uint * PTR32 *)(pbVar2 + 0xc);
  switch((unsigned int)(uintptr_t)(*(undefined4 *)pbVar2)) {
  case 0: ;
    F_00c96260(((undefined1 *)(gen_frame + 0x64)));
    (*(gen_code32 *)(gen_frame + 0x68)) = ((code *)REFP(0xc95f60));
    uVar9 = F_00c95f60(((undefined1 *)(gen_frame + 0x64)),(uint)(*(float * PTR32 *)(gen_frame + 0xc8)),
                         (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0x2a))),&(*(byte * PTR32 *)&gen_args[3]),(*(int *)(gen_frame + 0xb8)),
                         (*(float * PTR32 *)(gen_frame + 0xc4)),&(*(uint *)&gen_args[4]));
    break;
  case 1: ;
    F_00c96300(((undefined1 *)(gen_frame + 0x5c)));
    (*(gen_code32 *)(gen_frame + 0x60)) = ((code *)REFP(0xc96580));
    uVar9 = F_00c96580(((undefined1 *)(gen_frame + 0x5c)),(uint)(*(float * PTR32 *)(gen_frame + 0xc8)),
                         (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0x2a))),&(*(byte * PTR32 *)&gen_args[3]),
                         *(undefined4 *)(pbVar2 + 4),(*(float * PTR32 *)(gen_frame + 0xc4)),&(*(uint *)&gen_args[4]));
    break;
  case 2: ;
    F_00c962a0(((undefined1 *)(gen_frame + 0x64)),(*(undefined4 *)&gen_args[1]),*(float *)(pbVar2 + 0x10));
    (*(gen_code32 *)(gen_frame + 0x68)) = ((code *)REFP(0xc95f60));
    uVar9 = F_00c95f60(((undefined1 *)(gen_frame + 0x64)),(uint)(*(float * PTR32 *)(gen_frame + 0xc8)),
                         (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0x2a))),&(*(byte * PTR32 *)&gen_args[3]),
                         *(undefined4 *)(pbVar2 + 4),(*(float * PTR32 *)(gen_frame + 0xc4)),&(*(uint *)&gen_args[4]));
    break;
  case 3: ;
    F_00c96350(((undefined1 *)(gen_frame + 0x5c)),(*(undefined4 *)&gen_args[1]),*(float *)(pbVar2 + 0x10));
    (*(gen_code32 *)(gen_frame + 0x60)) = ((code *)REFP(0xc96580));
    uVar9 = F_00c96580(((undefined1 *)(gen_frame + 0x5c)),(uint)(*(float * PTR32 *)(gen_frame + 0xc8)),
                         (uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0x2a))),&(*(byte * PTR32 *)&gen_args[3]),
                         *(undefined4 *)(pbVar2 + 4),(*(float * PTR32 *)(gen_frame + 0xc4)),&(*(uint *)&gen_args[4]));
    break;
  case 4: ;
    F_00c96260(((undefined1 *)(gen_frame + 0x64)));
    uVar21 = *(undefined4 *)(pbVar2 + 0x1c);
    uVar20 = *(undefined4 *)(pbVar2 + 0x18);
    uVar19 = (*(undefined4 * PTR32 *)(pbVar2 + 0x14))[1];
    uVar18 = **(undefined4 * PTR32 *)(pbVar2 + 0x14);
    goto LAB_00c94772;
  case 5: ;
    F_00c96300(((undefined1 *)(gen_frame + 0x5c)));
    uVar21 = *(undefined4 *)(pbVar2 + 0x1c);
    uVar20 = *(undefined4 *)(pbVar2 + 0x18);
    uVar19 = (*(undefined4 * PTR32 *)(pbVar2 + 0x14))[1];
    uVar18 = **(undefined4 * PTR32 *)(pbVar2 + 0x14);
    goto LAB_00c94811;
  case 6: ;
    F_00c962a0(((undefined1 *)(gen_frame + 0x64)),(*(undefined4 *)&gen_args[1]),*(float *)(pbVar2 + 0x10));
    uVar21 = *(undefined4 *)(pbVar2 + 0x1c);
    uVar20 = *(undefined4 *)(pbVar2 + 0x18);
    uVar19 = (*(undefined4 * PTR32 *)(pbVar2 + 0x14))[1];
    uVar18 = **(undefined4 * PTR32 *)(pbVar2 + 0x14);
LAB_00c94772: ;
    F_00c96490(((undefined1 *)(gen_frame + 0x64)),uVar18,uVar19,uVar20,uVar21);
    uVar9 = ((code *)(*(gen_code32 *)(gen_frame + 0x68)))(((undefined1 *)(gen_frame + 0x64)),(*(float * PTR32 *)(gen_frame + 0xc8)),(uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0x2a))),
                        &(*(byte * PTR32 *)&gen_args[3]),*(undefined4 *)(pbVar2 + 4),(*(float * PTR32 *)(gen_frame + 0xc4)),&(*(uint *)&gen_args[4]));
    break;
  case 7: ;
    F_00c96350(((undefined1 *)(gen_frame + 0x5c)),(*(undefined4 *)&gen_args[1]),*(float *)(pbVar2 + 0x10));
    uVar21 = *(undefined4 *)(pbVar2 + 0x1c);
    uVar20 = *(undefined4 *)(pbVar2 + 0x18);
    uVar19 = (*(undefined4 * PTR32 *)(pbVar2 + 0x14))[1];
    uVar18 = **(undefined4 * PTR32 *)(pbVar2 + 0x14);
LAB_00c94811: ;
    F_00c96a60(((undefined1 *)(gen_frame + 0x5c)),uVar18,uVar19,uVar20,uVar21);
    uVar9 = ((code *)(*(gen_code32 *)(gen_frame + 0x60)))(((undefined1 *)(gen_frame + 0x5c)),(*(float * PTR32 *)(gen_frame + 0xc8)),(uint)*((ushort *)GEN_TOP((*((int *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0x2a))),
                        &(*(byte * PTR32 *)&gen_args[3]),*(undefined4 *)(pbVar2 + 4),(*(float * PTR32 *)(gen_frame + 0xc4)),&(*(uint *)&gen_args[4]));
  }
  **(uint * PTR32 *)(pbVar2 + 0xc) = (*(uint *)&gen_args[4]);
  bVar3 = F_00c901b0((*(undefined * PTR32 *)&gen_args[0]),uVar9,(*(undefined * PTR32 *)&gen_args[2]),&(*(byte * PTR32 *)&gen_args[3]),(*(int *)(gen_frame + 0xb8)),(*(float * PTR32 *)(gen_frame + 0xc4)),GEN_TOF(gen_bits2f((*(uint *)&gen_args[4]))));
  return CONCAT31(extraout_var,bVar3);
}

/* ref: Common::Component::BGCollision::RigidBody::ResourceNodeV1::vf4 */
uint F_00c94e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc94e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0xc10];
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0xc08)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc0c);
  iVar3 = 0xff;
  puVar1 = ((undefined4 *)(gen_frame + 0x10));
  do {
    puVar1[-2] = 0;
    puVar1[-1] = 0;
    *puVar1 = 0;
    puVar1 = puVar1 + 3;
    iVar3 = iVar3 + -1;
  } while (-1 < iVar3);
  uVar2 = F_00c945e0(this,param_1,param_2,param_3,(uint)((undefined1 *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0xc08)) ^ (uint)(uint)(gen_frame + 0xc0c));
  return uVar2;
}

/* ref: FUN_00c94ed0 */
uint F_00c94ed0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc94ed0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 * puVar8;
  undefined * this_00;
  uint uVar9;
  
  F_00c96ab0(this,param_1,param_2);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x1128f90));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1128f8c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[1])REFP(0x1128f88));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x1128f84));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[2])REFP(0x1128f7c));
  *(undefined1 *)((int)this + 0x78) = 1;
  *(char *)((int)this + 0x79) = (char)param_4;
  *(undefined4 *)((int)this + 0x7c) = uVar1;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined1 *)((int)this + 0x7a) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = uVar1;
  *(undefined4 *)((int)this + 0xa4) = uVar1;
  *(undefined4 *)((int)this + 0xa8) = uVar1;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  puVar8 = (undefined4 *)F_00c8f7f0(((undefined1 *)(gen_frame + 0xc)));
  uVar1 = puVar8[1];
  uVar2 = puVar8[2];
  uVar3 = puVar8[4];
  uVar4 = puVar8[5];
  (*(undefined4 *)(gen_frame + 0x68)) = puVar8[9];
  uVar5 = puVar8[6];
  uVar6 = puVar8[8];
  (*(undefined4 *)(gen_frame + 0x6c)) = puVar8[10];
  (*(undefined4 *)(gen_frame + 0x70)) = puVar8[0xc];
  (*(undefined4 *)(gen_frame + 0x74)) = puVar8[0xd];
  uVar7 = puVar8[0xe];
  *(undefined4 *)((int)this + 0xc4) = *puVar8;
  *(undefined4 *)((int)this + 200) = uVar1;
  *(undefined4 *)((int)this + 0xcc) = uVar2;
  *(undefined4 *)((int)this + 0xd0) = uVar3;
  *(undefined4 *)((int)this + 0xd4) = uVar4;
  *(undefined4 *)((int)this + 0xd8) = uVar5;
  *(undefined4 *)((int)this + 0xe0) = (*(undefined4 *)(gen_frame + 0x68));
  *(undefined4 *)((int)this + 0xe4) = (*(undefined4 *)(gen_frame + 0x6c));
  *(undefined4 *)((int)this + 0xdc) = uVar6;
  *(undefined4 *)((int)this + 0xe8) = (*(undefined4 *)(gen_frame + 0x70));
  *(undefined4 *)((int)this + 0xec) = (*(undefined4 *)(gen_frame + 0x74));
  *(undefined4 *)((int)this + 0xf0) = uVar7;
  if ((char)param_4 != '\0') {
    *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(param_3 + 0xc);
    this_00 = (undefined *)F_00ca2100(0x3c,&REFG(undefined, 0x1128e0a),
                                   *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x34) + 4))));
    if (this_00 != (undefined *)0x0) {
      uVar9 = F_00c93050(this_00,param_3 + 0x10);
      *(uint *)((int)this + 0x80) = uVar9;
      return (uint)this;
    }
    *(undefined4 *)((int)this + 0x80) = 0;
  }
  return (uint)this;
}

/* ref: FUN_00c951e0 */
uint F_00c951e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc951e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 uVar1;
  
  F_00c96ab0(this,param_1,param_2);
  uVar1 = REFG(float, 0x1087f04);
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x1128f90));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1128f8c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[1])REFP(0x1128f88));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x1128f84));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[2])REFP(0x1128f7c));
  *(undefined2 *)((int)this + 0x78) = 1;
  *(undefined4 *)((int)this + 0x7c) = uVar1;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined1 *)((int)this + 0x7a) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  *(undefined4 *)((int)this + 0x9c) = 0;
  *(undefined4 *)((int)this + 0xa0) = uVar1;
  *(undefined4 *)((int)this + 0xa4) = uVar1;
  *(undefined4 *)((int)this + 0xa8) = uVar1;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  return (uint)this;
}

/* ref: FUN_00c953c0 */
unsigned int F_00c953c0(unsigned int gen_a0)
{
  GEN_ENTER(0xc953c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x1128f90));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1128f8c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[1])REFP(0x1128f88));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x1128f84));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[2])REFP(0x1128f7c));
  if (*(int *)((int)this + 0x6c) != 0) {
    F_00c96f90(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x34) + 4))));
    if (*(char *)((int)this + 0x7a) == '\0') {
      piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0x34) + 0x20)));
      *piVar1 = *piVar1 + -1;
    }
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  F_00c96c00(this);
  return 0;
}

/* ref: FUN_00c95430 */
uint F_00c95430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc95430u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c95440 */
unsigned int F_00c95440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc95440u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  float * param_8 = (float *)(uintptr_t)gen_a7;
  undefined4 * param_9 = (undefined4 *)(uintptr_t)gen_a8;
  if ((param_7 <= *param_8) &&
     ((!GEN_ISNAN(param_7) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_7 < *(float *)&REFG(undefined, 0x1088114)))) {
    *param_9 = param_5;
    *param_8 = param_7;
  }
  return 0;
}

/* ref: FUN_00c95480 */
unsigned int F_00c95480(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xc95480u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  float param_8 = (float)gen_a7;
  float * param_9 = (float *)(uintptr_t)gen_a8;
  undefined4 * param_10 = (undefined4 *)(uintptr_t)gen_a9;
  float fVar1;
  
  if (((double)param_8 <= (double)*param_9 + *(double *)&REFG(undefined, 0x109ce00)) &&
     ((!GEN_ISNAN(param_8) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(param_8 < *(float *)&REFG(undefined, 0x1088114)))) {
    fVar1 = ((float)GEN_TOF((((double)param_5[1] * (double)param_7[1] + (double)*param_5 * (double)*param_7)
                   + (double)param_5[2] * (double)param_7[2])));
    if ((!((double)*param_9 - (double)param_8 < REFG(double, 0x109cdf8))) ||
       (!(*(float *)(param_1 + 0x30) <= fVar1))) {
      *param_10 = param_6;
      *param_9 = param_8;
      *(float *)(param_1 + 0x30) = fVar1;
    }
  }
  return 0;
}

/* ref: FUN_00c95560 */
unsigned int F_00c95560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc95560u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  return 0;
}

/* ref: FUN_00c955d0 */
uint F_00c955d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc955d0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 4))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c955f0 */
uint F_00c955f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc955f0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 4))
                    (this,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c95620 */
uint F_00c95620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc95620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1128e68));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c95660 */
uint F_00c95660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc95660u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1128e70));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c95690 */
uint F_00c95690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc95690u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00c956a0 */
uint F_00c956a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc956a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00c956b0 */
uint F_00c956b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc956b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00c956c0 */
uint F_00c956c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc956c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00c956d0 */
byte F_00c956d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc956d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint param_5 = (uint)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  byte bVar1;
  
  bVar1 = F_00c9bf20(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return bVar1;
}

/* ref: FUN_00c956e0 */
float10 F_00c956e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc956e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
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
  
  pfVar7 = (float *)*in_ecx;
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

/* ref: FUN_00c95cc0 */
uint F_00c95cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xc95cc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xc;
}

/* ref: FUN_00c95cd0 */
uint F_00c95cd0(unsigned int gen_a0)
{
  GEN_ENTER(0xc95cd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x18;
}

/* ref: FUN_00c95ce0 */
byte F_00c95ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc95ce0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: FUN_00c95cf0 */
uint F_00c95cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc95cf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c963c0((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00c95d00 */
byte F_00c95d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc95d00u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: FUN_00c95d10 */
uint F_00c95d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc95d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c963f0((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00c95d20 */
uint F_00c95d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc95d20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1128ee4));
  in_ecx[6] = 0;
  *(ulonglong *)(in_ecx + 8) = CONCAT44(param_3,param_2);
  *(ulonglong *)(in_ecx + 10) = CONCAT44(param_5,param_4);
  return (uint)in_ecx;
}

/* ref: FUN_00c95d50 */
uint F_00c95d50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xc95d50u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  float param_8 = (float)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(param_1 + 0x20))
                    (*(int *)(param_1 + 0x24) + param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,(undefined4)gen_fl2bits(param_8),param_9,param_10);
  return uVar1;
}

/* ref: FUN_00c95d90 */
unsigned int F_00c95d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xc95d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1128ee4));
  in_ecx[6] = param_6;
  in_ecx[7] = (undefined4)gen_fl2bits(param_7);
  *(ulonglong *)(in_ecx + 8) = CONCAT44(param_3,param_2);
  *(ulonglong *)(in_ecx + 10) = CONCAT44(param_5,param_4);
  return 0;
}

/* ref: FUN_00c95de0 */
uint F_00c95de0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc95de0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1128eec));
  in_ecx[6] = 0;
  *(ulonglong *)(in_ecx + 8) = CONCAT44(param_3,param_2);
  *(ulonglong *)(in_ecx + 10) = CONCAT44(param_5,param_4);
  return (uint)in_ecx;
}

/* ref: FUN_00c95e10 */
uint F_00c95e10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7, unsigned int gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xc95e10u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  float param_8 = (float)gen_a7;
  undefined4 param_9 = (undefined4)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(param_1 + 0x20))
                    (*(int *)(param_1 + 0x24) + param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,(undefined4)gen_fl2bits(param_8),param_9,param_10);
  return uVar1;
}

/* ref: FUN_00c95e50 */
unsigned int F_00c95e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xc95e50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1128eec));
  in_ecx[6] = param_6;
  in_ecx[7] = (undefined4)gen_fl2bits(param_7);
  *(ulonglong *)(in_ecx + 8) = CONCAT44(param_3,param_2);
  *(ulonglong *)(in_ecx + 10) = CONCAT44(param_5,param_4);
  return 0;
}

/* ref: FUN_00c95ea0 */
uint F_00c95ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc95ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1128e68));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c95ed0 */
uint F_00c95ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc95ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1128e70));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c95f60 */
uint F_00c95f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc95f60u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  byte * pbVar5;
  
  (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x18)) = 0;
  uVar4 = 0xffffffff;
  if ((*(uint *)&gen_args[2]) != 0) {
    pbVar5 = (byte *)((*(uint *)&gen_args[1]) + 2);
    do {
      iVar2 = *(*(int * PTR32 *)&gen_args[3]);
      uVar4 = iVar2 + (uint)pbVar5[-2] * 0xc;
      uVar1 = iVar2 + (uint)pbVar5[-1] * 0xc;
      (*(uint *)(gen_frame + 0xc)) = iVar2 + (uint)*pbVar5 * 0xc;
      bVar3 = F_00c9bf20((*(undefined4 *)&gen_args[4]),(*(uint *)&gen_args[5]),uVar4,uVar1,(*(uint *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[1]));
      if (bVar3 != 0) {
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 4))
                  (uVar4,uVar1,(*(uint *)(gen_frame + 0xc)),(*(uint *)&gen_args[5]),(*(uint *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[6]),&(*(uint *)(gen_frame + 0x14)));
      }
      (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) + 1;
      pbVar5 = pbVar5 + 6;
      uVar4 = (*(uint *)(gen_frame + 0x14));
    } while ((*(uint *)(gen_frame + 0x18)) < (*(uint *)&gen_args[2]));
  }
  return uVar4;
}

/* ref: FUN_00c96040 */
uint F_00c96040(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc96040u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined2 * puVar5;
  
  (*(int * PTR32 *)(gen_frame + 0x18)) = (*(int * PTR32 *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x24)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x20)) = (*(int * PTR32 *)&gen_args[0])[2];
  (*(uint *)(gen_frame + 0x1c)) = (*(int * PTR32 *)&gen_args[0])[3];
  (*(uint *)(gen_frame + 0x28)) = 0;
  uVar4 = 0xffffffff;
  if ((*(uint *)&gen_args[2]) != 0) {
    puVar5 = (undefined2 *)((*(uint *)&gen_args[1]) + 4);
    do {
      if ((CONCAT12(*(undefined1 *)((int)puVar5 + -1),*puVar5) & (*(uint *)(gen_frame + 0x20))) == (*(uint *)(gen_frame + 0x1c))) {
        iVar2 = *(*(int * PTR32 *)&gen_args[3]);
        uVar4 = iVar2 + (uint)*(byte *)((int)puVar5 + -3) * 0xc;
        uVar1 = iVar2 + (uint)*(byte *)(puVar5 + -2) * 0xc;
        (*(uint *)(gen_frame + 0x14)) = iVar2 + (uint)*(byte *)(puVar5 + -1) * 0xc;
        bVar3 = F_00c9bf20((*(undefined4 *)&gen_args[4]),(*(uint *)&gen_args[5]),uVar1,uVar4,(*(uint *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
        if (bVar3 != 0) {
          ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 4))
                    (uVar1,uVar4,(*(uint *)(gen_frame + 0x14)),(*(uint *)&gen_args[5]),(*(uint *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x8)),(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[6]),&(*(uint *)(gen_frame + 0x24)));
        }
      }
      (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) + 1;
      puVar5 = puVar5 + 3;
      uVar4 = (*(uint *)(gen_frame + 0x24));
    } while ((*(uint *)(gen_frame + 0x28)) < (*(uint *)&gen_args[2]));
  }
  return uVar4;
}

/* ref: FUN_00c96140 */
uint F_00c96140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc96140u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined2 * puVar5;
  
  (*(uint *)(gen_frame + 0x18)) = (*(int * PTR32 *)&gen_args[0])[2];
  (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x14)) = (*(int * PTR32 *)&gen_args[0])[3];
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0x24)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x1c)) = (*(int * PTR32 *)&gen_args[0])[4];
  (*(uint *)(gen_frame + 0x20)) = ~(*(int * PTR32 *)&gen_args[0])[5];
  (*(uint *)(gen_frame + 0x28)) = 0;
  uVar4 = 0xffffffff;
  if ((*(uint *)&gen_args[2]) != 0) {
    puVar5 = (undefined2 *)((*(uint *)&gen_args[1]) + 4);
    do {
      if (((CONCAT12(*(undefined1 *)((int)puVar5 + -1),*puVar5) & (*(uint *)(gen_frame + 0x20)) | (*(uint *)(gen_frame + 0x1c))) & (*(uint *)(gen_frame + 0x18)))
          == (*(uint *)(gen_frame + 0x14))) {
        iVar2 = *(*(int * PTR32 *)&gen_args[3]);
        uVar4 = iVar2 + (uint)*(byte *)(puVar5 + -2) * 0xc;
        uVar1 = iVar2 + (uint)*(byte *)((int)puVar5 + -3) * 0xc;
        (*(uint *)(gen_frame + 0xc)) = iVar2 + (uint)*(byte *)(puVar5 + -1) * 0xc;
        bVar3 = F_00c9bf20((*(undefined4 *)&gen_args[4]),(*(uint *)&gen_args[5]),uVar4,uVar1,(*(uint *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[1]));
        if (bVar3 != 0) {
          ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 4))
                    (uVar4,uVar1,(*(uint *)(gen_frame + 0xc)),(*(uint *)&gen_args[5]),(*(uint *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[6]),&(*(uint *)(gen_frame + 0x24)));
        }
      }
      (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) + 1;
      puVar5 = puVar5 + 3;
      uVar4 = (*(uint *)(gen_frame + 0x24));
    } while ((*(uint *)(gen_frame + 0x28)) < (*(uint *)&gen_args[2]));
  }
  return uVar4;
}

/* ref: FUN_00c96250 */
byte F_00c96250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc96250u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  byte bVar1;
  
  bVar1 = F_00553ba0(param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return bVar1;
}

/* ref: FUN_00c96260 */
unsigned int F_00c96260(unsigned int gen_a0)
{
  GEN_ENTER(0xc96260u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[6] = 0;
  *(undefined8 *)(in_ecx + 8) = 0xc95440;
  *(undefined8 *)(in_ecx + 10) = 0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1128ef4));
  return 0;
}

/* ref: FUN_00c962a0 */
unsigned int F_00c962a0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xc962a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  in_ecx[6] = param_2;
  in_ecx[7] = (undefined4)gen_fl2bits(param_3);
  *(undefined8 *)(in_ecx + 8) = 0xc95b50;
  *(undefined8 *)(in_ecx + 10) = 0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1128ef4));
  return 0;
}

/* ref: FUN_00c96300 */
unsigned int F_00c96300(unsigned int gen_a0)
{
  GEN_ENTER(0xc96300u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[6] = 0;
  *(undefined8 *)(in_ecx + 8) = 0xc95480;
  *(undefined8 *)(in_ecx + 10) = 0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x1128efc));
  in_ecx[0xc] = 0;
  return 0;
}

/* ref: FUN_00c96350 */
unsigned int F_00c96350(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xc96350u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  in_ecx[6] = param_2;
  in_ecx[7] = (undefined4)gen_fl2bits(param_3);
  *(undefined8 *)(in_ecx + 8) = 0xc95bc0;
  *(undefined8 *)(in_ecx + 10) = 0;
  *in_ecx = (*(undefined * PTR32 (*)[4])REFP(0x1128efc));
  in_ecx[0xc] = 0;
  return 0;
}

/* ref: FUN_00c963c0 */
uint F_00c963c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc963c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c932c0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c963f0 */
uint F_00c963f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc963f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c93450(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c96490 */
uint F_00c96490(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc96490u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  if (param_4 != 0) {
    *(undefined4 *)((int)this + 0x10) = param_3;
    *(int *)((int)this + 0x14) = param_4;
    *(gen_code32 *)((int)this + 4) = ((code *)REFP(0xc96140));
    *(undefined4 *)((int)this + 0xc) = param_2;
    *(uint *)((int)this + 8) = param_1;
    return param_1;
  }
  *(gen_code32 *)((int)this + 4) = ((code *)REFP(0xc96040));
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(uint *)((int)this + 8) = param_1;
  return param_1;
}

/* ref: FUN_00c964e0 */
uint F_00c964e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc964e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1128e60));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 0x1c))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x18))) = *(undefined4 *)((int)this + 4);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c96530 */
uint F_00c96530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1128e64));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 0xc))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(undefined4 *)((int)this + 4);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c96580 */
uint F_00c96580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc96580u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  byte * pbVar5;
  
  (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0x14)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x18)) = 0;
  uVar4 = 0xffffffff;
  if ((*(uint *)&gen_args[2]) != 0) {
    pbVar5 = (byte *)((*(uint *)&gen_args[1]) + 2);
    do {
      iVar2 = *(*(int * PTR32 *)&gen_args[3]);
      uVar4 = iVar2 + (uint)pbVar5[-2] * 0xc;
      uVar1 = iVar2 + (uint)pbVar5[-1] * 0xc;
      (*(int *)(gen_frame + 0xc)) = iVar2 + (uint)*pbVar5 * 0xc;
      bVar3 = F_00553ba0((*(uint *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),uVar4,uVar1,(*(int *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[1]));
      if (bVar3 != 0) {
        ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 4))
                  (uVar4,uVar1,(*(int *)(gen_frame + 0xc)),(*(undefined4 *)&gen_args[5]),(*(uint *)(gen_frame + 0x18)),&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[6]),&(*(uint *)(gen_frame + 0x14)));
      }
      (*(uint *)(gen_frame + 0x18)) = (*(uint *)(gen_frame + 0x18)) + 1;
      pbVar5 = pbVar5 + 6;
      uVar4 = (*(uint *)(gen_frame + 0x14));
    } while ((*(uint *)(gen_frame + 0x18)) < (*(uint *)&gen_args[2]));
  }
  return uVar4;
}

/* ref: FUN_00c96660 */
uint F_00c96660(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc96660u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined2 * puVar5;
  
  (*(int * PTR32 *)(gen_frame + 0x18)) = (*(int * PTR32 *)&gen_args[0]);
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(uint *)(gen_frame + 0x24)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x20)) = (*(int * PTR32 *)&gen_args[0])[2];
  (*(uint *)(gen_frame + 0x1c)) = (*(int * PTR32 *)&gen_args[0])[3];
  (*(uint *)(gen_frame + 0x28)) = 0;
  uVar4 = 0xffffffff;
  if ((*(uint *)&gen_args[2]) != 0) {
    puVar5 = (undefined2 *)((*(uint *)&gen_args[1]) + 4);
    do {
      if ((CONCAT12(*(undefined1 *)((int)puVar5 + -1),*puVar5) & (*(uint *)(gen_frame + 0x20))) == (*(uint *)(gen_frame + 0x1c))) {
        iVar2 = *(*(int * PTR32 *)&gen_args[3]);
        uVar4 = iVar2 + (uint)*(byte *)((int)puVar5 + -3) * 0xc;
        uVar1 = iVar2 + (uint)*(byte *)(puVar5 + -2) * 0xc;
        (*(int *)(gen_frame + 0x14)) = iVar2 + (uint)*(byte *)(puVar5 + -1) * 0xc;
        bVar3 = F_00553ba0((*(uint *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),uVar1,uVar4,(*(int *)(gen_frame + 0x14)),&(*(undefined4 *)(gen_frame + 0x8)),&(*(uint *)&gen_args[1]));
        if (bVar3 != 0) {
          ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x18)) + 4))
                    (uVar1,uVar4,(*(int *)(gen_frame + 0x14)),(*(undefined4 *)&gen_args[5]),(*(uint *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x8)),(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[6]),&(*(uint *)(gen_frame + 0x24)));
        }
      }
      (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) + 1;
      puVar5 = puVar5 + 3;
      uVar4 = (*(uint *)(gen_frame + 0x24));
    } while ((*(uint *)(gen_frame + 0x28)) < (*(uint *)&gen_args[2]));
  }
  return uVar4;
}

/* ref: FUN_00c96760 */
uint F_00c96760(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc96760u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  int iVar2;
  byte bVar3;
  uint uVar4;
  undefined2 * puVar5;
  
  (*(uint *)(gen_frame + 0x18)) = (*(int * PTR32 *)&gen_args[0])[2];
  (*(int * PTR32 *)(gen_frame + 0x10)) = (*(int * PTR32 *)&gen_args[0]);
  (*(uint *)(gen_frame + 0x14)) = (*(int * PTR32 *)&gen_args[0])[3];
  (*(undefined4 *)(gen_frame + 0x0)) = 0;
  (*(undefined4 *)(gen_frame + 0x4)) = 0;
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(uint *)(gen_frame + 0x24)) = 0xffffffff;
  (*(uint *)(gen_frame + 0x1c)) = (*(int * PTR32 *)&gen_args[0])[4];
  (*(uint *)(gen_frame + 0x20)) = ~(*(int * PTR32 *)&gen_args[0])[5];
  (*(uint *)(gen_frame + 0x28)) = 0;
  uVar4 = 0xffffffff;
  if ((*(uint *)&gen_args[2]) != 0) {
    puVar5 = (undefined2 *)((*(uint *)&gen_args[1]) + 4);
    do {
      if (((CONCAT12(*(undefined1 *)((int)puVar5 + -1),*puVar5) & (*(uint *)(gen_frame + 0x20)) | (*(uint *)(gen_frame + 0x1c))) & (*(uint *)(gen_frame + 0x18)))
          == (*(uint *)(gen_frame + 0x14))) {
        iVar2 = *(*(int * PTR32 *)&gen_args[3]);
        uVar4 = iVar2 + (uint)*(byte *)(puVar5 + -2) * 0xc;
        uVar1 = iVar2 + (uint)*(byte *)((int)puVar5 + -3) * 0xc;
        (*(int *)(gen_frame + 0xc)) = iVar2 + (uint)*(byte *)(puVar5 + -1) * 0xc;
        bVar3 = F_00553ba0((*(uint *)&gen_args[4]),(*(undefined4 *)&gen_args[5]),uVar4,uVar1,(*(int *)(gen_frame + 0xc)),&(*(undefined4 *)(gen_frame + 0x0)),&(*(uint *)&gen_args[1]));
        if (bVar3 != 0) {
          ((code *)*(gen_code32 *)(*(*(int * PTR32 *)(gen_frame + 0x10)) + 4))
                    (uVar4,uVar1,(*(int *)(gen_frame + 0xc)),(*(undefined4 *)&gen_args[5]),(*(uint *)(gen_frame + 0x28)),&(*(undefined4 *)(gen_frame + 0x0)),(*(uint *)&gen_args[1]),(*(undefined4 *)&gen_args[6]),&(*(uint *)(gen_frame + 0x24)));
        }
      }
      (*(uint *)(gen_frame + 0x28)) = (*(uint *)(gen_frame + 0x28)) + 1;
      puVar5 = puVar5 + 3;
      uVar4 = (*(uint *)(gen_frame + 0x24));
    } while ((*(uint *)(gen_frame + 0x28)) < (*(uint *)&gen_args[2]));
  }
  return uVar4;
}

/* ref: FUN_00c96890 */
uint F_00c96890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96890u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c96950((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00c96900 */
uint F_00c96900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c969a0((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00c96950 */
uint F_00c96950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96950u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1128e64));
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0xc))) = *(undefined4 *)((int)this + 0xc);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c969a0 */
uint F_00c969a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc969a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1128e60));
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0x1c))) = *(undefined4 *)((int)this + 0xc);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 0x18))) = *(undefined4 *)((int)this + 8);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c969f0 */
uint F_00c969f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc969f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1128e68));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c96a20 */
uint F_00c96a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96a20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1128e70));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c96a60 */
uint F_00c96a60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc96a60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  if (param_4 != 0) {
    *(undefined4 *)((int)this + 0x10) = param_3;
    *(int *)((int)this + 0x14) = param_4;
    *(gen_code32 *)((int)this + 4) = ((code *)REFP(0xc96760));
    *(undefined4 *)((int)this + 0xc) = param_2;
    *(uint *)((int)this + 8) = param_1;
    return param_1;
  }
  *(gen_code32 *)((int)this + 4) = ((code *)REFP(0xc96660));
  *(undefined4 *)((int)this + 0xc) = param_2;
  *(uint *)((int)this + 8) = param_1;
  return param_1;
}

/* ref: FUN_00c96ab0 */
uint F_00c96ab0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc96ab0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1128e64));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x1128e60));
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[1])REFP(0x1128f10));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x1128f0c));
  *(undefined4 *)((int)this + 0x34) = param_1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x1128f20));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1128f1c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[1])REFP(0x1128f18));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x1128f14));
  *(undefined4 *)((int)this + 0x20) = 0xffffff80;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = param_2;
  *(undefined4 *)((int)this + 0x48) = 0x7000;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined2 *)((int)this + 0x54) = 1;
  F_00c9f3e0((int)this + 0x58);
  return (uint)this;
}

/* ref: FUN_00c96b40 */
unsigned int F_00c96b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00c96b50 */
unsigned int F_00c96b50(void)
{
  GEN_ENTER(0xc96b50u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00c96b60 */
byte F_00c96b60(unsigned int gen_a0)
{
  GEN_ENTER(0xc96b60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x30) == 0;
}

/* ref: FUN_00c96b70 */
uint F_00c96b70(unsigned int gen_a0)
{
  GEN_ENTER(0xc96b70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x48);
}

/* ref: FUN_00c96b80 */
uint F_00c96b80(unsigned int gen_a0)
{
  GEN_ENTER(0xc96b80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x4c);
}

/* ref: FUN_00c96b90 */
uint F_00c96b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc96b90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint * param_2 = (uint *)(uintptr_t)gen_a2;
  uint uVar1;
  
  *param_1 = *(undefined4 *)((int)this + 0x48);
  uVar1 = *(uint *)((int)this + 0x4c);
  *param_2 = uVar1;
  return uVar1;
}

/* ref: FUN_00c96bb0 */
uint F_00c96bb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc96bb0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x48) = param_1;
  *(undefined4 *)((int)this + 0x4c) = param_2;
  return param_1;
}

/* ref: FUN_00c96bd0 */
uint F_00c96bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c96c90((undefined *)((int)this + -0x10),param_1);
  return uVar1;
}

/* ref: FUN_00c96be0 */
uint F_00c96be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96be0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c96c90((undefined *)((int)this + -0x14),param_1);
  return uVar1;
}

/* ref: FUN_00c96bf0 */
uint F_00c96bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c96c90((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00c96c00 */
unsigned int F_00c96c00(unsigned int gen_a0)
{
  GEN_ENTER(0xc96c00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[23])REFP(0x1128f20));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1128f1c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[1])REFP(0x1128f18));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x1128f14));
  F_00c9f300((undefined *)((int)this + 0x58));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x1128e60));
  if (*(int *)((int)this + 0x18) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x18) + 0x1c))) = *(undefined4 *)((int)this + 0x1c);
  }
  if (*(int *)((int)this + 0x1c) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0x1c) + 0x18))) = *(undefined4 *)((int)this + 0x18);
  }
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1128e64));
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0xc))) = *(undefined4 *)((int)this + 0xc);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  return 0;
}

/* ref: FUN_00c96c90 */
uint F_00c96c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96c90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c96c00(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c96cc0 */
uint F_00c96cc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc96cc0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[3];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x48))) = (*(uint *)&gen_args[1]) & (*(uint *)&gen_args[2]);
  *((uint *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0x4c))) = (*(uint *)&gen_args[2]);
  return (*(uint *)&gen_args[2]);
}

/* ref: FUN_00c96ce0 */
unsigned int F_00c96ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96ce0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x88) = *param_2;
  *(undefined4 *)(in_ecx + 0x8c) = param_2[1];
  *(undefined4 *)(in_ecx + 0x90) = param_2[2];
  *(undefined1 *)(in_ecx + 0x78) = 1;
  return 0;
}

/* ref: FUN_00c96d10 */
uint F_00c96d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96d10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *(undefined4 *)(in_ecx + 0xe8);
  param_2[1] = *(undefined4 *)(in_ecx + 0xec);
  param_2[2] = *(undefined4 *)(in_ecx + 0xf0);
  return (uint)param_2;
}

/* ref: FUN_00c96d40 */
unsigned int F_00c96d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96d40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x94) = *param_2;
  *(undefined4 *)(in_ecx + 0x98) = param_2[1];
  *(undefined4 *)(in_ecx + 0x9c) = param_2[2];
  *(undefined1 *)(in_ecx + 0x78) = 1;
  return 0;
}

/* ref: FUN_00c96d70 */
unsigned int F_00c96d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96d70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0xa0) = *param_2;
  *(undefined4 *)(in_ecx + 0xa4) = param_2[1];
  *(undefined4 *)(in_ecx + 0xa8) = param_2[2];
  *(undefined1 *)(in_ecx + 0x78) = 1;
  return 0;
}

/* ref: FUN_00c96da0 */
unsigned int F_00c96da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96da0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(in_ecx + 0xf8);
  uVar2 = *(undefined4 *)(in_ecx + 0xfc);
  *param_2 = *(undefined4 *)(in_ecx + 0xf4);
  param_2[3] = 0;
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  uVar1 = *(undefined4 *)(in_ecx + 0x100);
  uVar2 = *(undefined4 *)(in_ecx + 0x104);
  uVar3 = *(undefined4 *)(in_ecx + 0x108);
  param_2[7] = 0;
  param_2[4] = uVar1;
  param_2[5] = uVar2;
  param_2[6] = uVar3;
  uVar1 = *(undefined4 *)(in_ecx + 0x10c);
  uVar2 = *(undefined4 *)(in_ecx + 0x110);
  uVar3 = *(undefined4 *)(in_ecx + 0x114);
  param_2[0xb] = 0;
  uVar4 = REFG(float, 0x1087f04);
  param_2[8] = uVar1;
  param_2[9] = uVar2;
  param_2[10] = uVar3;
  uVar1 = *(undefined4 *)(in_ecx + 0x11c);
  uVar2 = *(undefined4 *)(in_ecx + 0x120);
  param_2[0xc] = *(undefined4 *)(in_ecx + 0x118);
  param_2[0xd] = uVar1;
  param_2[0xe] = uVar2;
  param_2[0xf] = uVar4;
  return 0;
}

/* ref: FUN_00c96e70 */
uint F_00c96e70(void)
{
  GEN_ENTER(0xc96e70u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: FUN_00c96e80 */
byte F_00c96e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00c96e90 */
byte F_00c96e90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc96e90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: FUN_00c96ea0 */
uint F_00c96ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96ea0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c96ee0((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00c96eb0 */
uint F_00c96eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c96ee0((undefined *)((int)this + -0x68),param_1);
  return uVar1;
}

/* ref: FUN_00c96ec0 */
uint F_00c96ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c96ee0((undefined *)((int)this + -0x10),param_1);
  return uVar1;
}

/* ref: FUN_00c96ed0 */
uint F_00c96ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96ed0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c96ee0((undefined *)((int)this + -0x14),param_1);
  return uVar1;
}

/* ref: FUN_00c96ee0 */
uint F_00c96ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc96ee0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[25])REFP(0x1128f90));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1128f8c));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x10) = (*(undefined * PTR32 (*)[1])REFP(0x1128f88));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x14) = (*(undefined * PTR32 (*)[1])REFP(0x1128f84));
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[2])REFP(0x1128f7c));
  if (*(int *)((int)this + 0x6c) != 0) {
    F_00c96f90(*((undefined * PTR32 *)GEN_TOP((*(int *)((int)this + 0x34) + 4))));
    if (*(char *)((int)this + 0x7a) == '\0') {
      piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 0x34) + 0x20)));
      *piVar1 = *piVar1 + -1;
    }
  }
  *(undefined * PTR32 * PTR32 *)((int)this + 0x68) = (*(undefined * PTR32 (*)[2])REFP(0x1128e54));
  F_00c96c00(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c96f50 */
uint F_00c96f50(unsigned int gen_a0)
{
  GEN_ENTER(0xc96f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 4))))(*(int * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: FUN_00c96f60 */
unsigned int F_00c96f60(unsigned int gen_a0)
{
  GEN_ENTER(0xc96f60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 4) + 8))))(*(int * PTR32 *)((int)this + 4));
  return 0;
}

/* ref: FUN_00c96f70 */
uint F_00c96f70(unsigned int gen_a0)
{
  GEN_ENTER(0xc96f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) + 4))))(*(int *)((int)this + 4) + 4);
  return uVar1;
}

/* ref: FUN_00c96f90 */
unsigned int F_00c96f90(unsigned int gen_a0)
{
  GEN_ENTER(0xc96f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) + 8))))(*(int *)((int)this + 4) + 4);
  return 0;
}

/* ref: FUN_00c96fb0 */
uint F_00c96fb0(unsigned int gen_a0, unsigned int gen_a1, ...)
{
  GEN_ENTER(0xc96fb0u, gen_a0, gen_a1, 0u, 0u);
  unsigned int gen_args[34];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  { va_list gen_va; va_start(gen_va, gen_a1);
    for (int gen_i = 2; gen_i < 34; gen_i++) gen_args[gen_i] = va_arg(gen_va, unsigned int);
    va_end(gen_va); }
  int param_1 = (int)gen_a0;
  char * param_2 = (char *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x810];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x808)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x80c);
  F_00c475c9(((char *)(gen_frame + 0x8)),0x800,param_2,((undefined *)&gen_args[2]));
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)(param_1 + 4) + 8))) + 4))))
                    (*(int *)(param_1 + 4) + 8,((char *)(gen_frame + 0x8)));
  F_00c47745((*(uint *)(gen_frame + 0x808)) ^ (uint)(uint)(gen_frame + 0x80c));
  return uVar1;
}

/* ref: FUN_00c97010 */
uint F_00c97010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc97010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint in_EAX = 0;
  
  if ((char)param_1 == '\0') {
    in_EAX = ((code *)*((gen_code32 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) + 8))))
                       (*(int *)((int)this + 4) + 8,param_2);
  }
  return in_EAX;
}

/* ref: FUN_00c97030 */
uint F_00c97030(unsigned int gen_a0)
{
  GEN_ENTER(0xc97030u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = (*(undefined * PTR32 (*)[1])REFP(0x1128ffc));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[7] = 0;
  in_ecx[8] = GEN_FLT_TO(in_ecx[8], REFG(float, 0x10916ec));
  return (uint)in_ecx;
}

/* ref: FUN_00c97070 */
byte F_00c97070(unsigned int gen_a0)
{
  GEN_ENTER(0xc97070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 8))))(*(int * PTR32 *)((int)this + 0xc));
  return (byte)uVar1;
}

/* ref: FUN_00c97080 */
uint F_00c97080(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc97080u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0xc))))
                    (*(int * PTR32 *)((int)this + 0xc),param_1,param_2,(uint)(*(int *)((int)this + 8) == 1)
                    );
  return uVar1;
}

/* ref: FUN_00c970b0 */
uint F_00c970b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc970b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x10))))
                    (*(int * PTR32 *)((int)this + 0xc),param_1,param_2,(uint)(*(int *)((int)this + 8) == 1)
                     ,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00c970f0 */
uint F_00c970f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc970f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x14))))(*(int * PTR32 *)((int)this + 0xc));
  return uVar1;
}

/* ref: FUN_00c97100 */
uint F_00c97100(unsigned int gen_a0)
{
  GEN_ENTER(0xc97100u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x18))))(*(int * PTR32 *)((int)this + 0xc));
  return uVar1;
}

/* ref: FUN_00c97110 */
uint F_00c97110(unsigned int gen_a0)
{
  GEN_ENTER(0xc97110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x1c))))(*(int * PTR32 *)((int)this + 0xc));
  return uVar1;
}

/* ref: FUN_00c97120 */
uint F_00c97120(unsigned int gen_a0)
{
  GEN_ENTER(0xc97120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x20))))(*(int * PTR32 *)((int)this + 0xc));
  return uVar1;
}

/* ref: FUN_00c97130 */
unsigned int F_00c97130(unsigned int gen_a0)
{
  GEN_ENTER(0xc97130u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x24))))(*(int * PTR32 *)((int)this + 0xc));
  return 0;
}

/* ref: FUN_00c97140 */
uint F_00c97140(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc97140u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x2c)) = *(*(undefined4 * PTR32 *)&gen_args[2]);
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = &(*(undefined4 *)(gen_frame + 0x2c));
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0x30)) = (*(undefined4 * PTR32 *)&gen_args[2])[1];
  (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 * PTR32 *)&gen_args[2])[2];
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = &(*(undefined4 *)&gen_args[4]);
  (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x10abe98);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = &REFG(undefined, 0x15d76b4);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0x2c))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),(*(undefined4 *)&gen_args[1]),0xffffffff,&(*(undefined4 *)(gen_frame + 0xc)));
  return uVar1;
}

/* ref: FUN_00c971c0 */
byte F_00c971c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc971c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = &(*(undefined4 *)(gen_frame + 0x2c));
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[4]);
  (*(undefined4 *)(gen_frame + 0x2c)) = *(*(undefined4 * PTR32 *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0x30)) = (*(undefined4 * PTR32 *)&gen_args[3])[1];
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = &(*(undefined4 *)&gen_args[5]);
  (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 * PTR32 *)&gen_args[3])[2];
  (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x10abe98);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = &REFG(undefined, 0x15d76b4);
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0x2c))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0xc)));
  return (byte)uVar1;
}

/* ref: FUN_00c97240 */
uint F_00c97240(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc97240u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x2c)) = *(*(undefined4 * PTR32 *)&gen_args[4]);
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[5]);
  (*(undefined4 *)(gen_frame + 0x30)) = (*(undefined4 * PTR32 *)&gen_args[4])[1];
  (*(undefined4 *)(gen_frame + 0x20)) = (*(undefined4 *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 * PTR32 *)&gen_args[4])[2];
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = &(*(undefined4 *)(gen_frame + 0x2c));
  (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x10abe98);
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = &(*(undefined4 *)&gen_args[6]);
  (*(undefined4 *)(gen_frame + 0xc)) = 4;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0x2c))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0xc)));
  return uVar1;
}

/* ref: FUN_00c972c0 */
uint F_00c972c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc972c0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x2c)) = *(*(undefined4 * PTR32 *)&gen_args[5]);
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[6]);
  (*(undefined4 *)(gen_frame + 0x30)) = (*(undefined4 * PTR32 *)&gen_args[5])[1];
  (*(undefined4 *)(gen_frame + 0x20)) = (*(undefined4 *)&gen_args[4]);
  (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 * PTR32 *)&gen_args[5])[2];
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = &(*(undefined4 *)(gen_frame + 0x2c));
  (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x10abe98);
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = &(*(undefined4 *)&gen_args[7]);
  (*(undefined4 *)(gen_frame + 0xc)) = 6;
  (*(float *)(gen_frame + 0x1c)) = (*(float *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 0xc) + 0x2c))))
                    (*(int * PTR32 *)((*(int *)&gen_args[0]) + 0xc),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0xc)));
  return uVar1;
}

/* ref: FUN_00c97340 */
byte F_00c97340(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc97340u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x2c)) = *(*(undefined4 * PTR32 *)&gen_args[4]);
  (*(undefined4 *)(gen_frame + 0x30)) = (*(undefined4 * PTR32 *)&gen_args[4])[1];
  (*(undefined4 * PTR32 *)(gen_frame + 0x10)) = &(*(undefined4 *)(gen_frame + 0x2c));
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = &(*(undefined4 *)&gen_args[6]);
  (*(undefined4 *)(gen_frame + 0x34)) = (*(undefined4 * PTR32 *)&gen_args[4])[2];
  (*(undefined4 *)(gen_frame + 0x38)) = REFG(float, 0x10abe98);
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[5]);
  (*(undefined4 *)(gen_frame + 0xc)) = 2;
  (*(float *)(gen_frame + 0x1c)) = (*(float *)&gen_args[3]);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = &REFG(undefined, 0x15d76b4);
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 0xc) + 0x2c))))
                    (*(int * PTR32 *)((*(int *)&gen_args[0]) + 0xc),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0xc)));
  return (byte)uVar1;
}

/* ref: FUN_00c973c0 */
uint F_00c973c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xc973c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0xc) + 0x30))))
                    (param_2,param_3,param_4,param_5,param_6,(undefined4)gen_fl2bits(param_7));
  return uVar1;
}

/* ref: FUN_00c973f0 */
uint F_00c973f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc973f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[5];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)&gen_args[2]);
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = &(*(undefined4 *)&gen_args[4]);
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0xc)) = 1;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = &REFG(undefined, 0x15d76b4);
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0x2c))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),(*(undefined4 *)&gen_args[1]),0xffffffff,&(*(undefined4 *)(gen_frame + 0xc)));
  return uVar1;
}

/* ref: FUN_00c97440 */
byte F_00c97440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc97440u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[6];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)&gen_args[3]);
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = &(*(undefined4 *)&gen_args[5]);
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[4]);
  (*(undefined4 *)(gen_frame + 0xc)) = 1;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = &REFG(undefined, 0x15d76b4);
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0x2c))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0xc)));
  return (byte)uVar1;
}

/* ref: FUN_00c974a0 */
byte F_00c974a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc974a0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[5]);
  (*(undefined4 *)(gen_frame + 0x20)) = (*(undefined4 *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)&gen_args[4]);
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = &(*(undefined4 *)&gen_args[6]);
  (*(undefined4 *)(gen_frame + 0xc)) = 5;
  (*(undefined4 *)(gen_frame + 0x1c)) = 0;
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))) + 0x2c))))
                    (*((int * PTR32 *)GEN_TOP(((int)(*(undefined * PTR32 *)&gen_args[0]) + 0xc))),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0xc)));
  return (byte)uVar1;
}

/* ref: FUN_00c974f0 */
uint F_00c974f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc974f0u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[8];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[6]);
  (*(undefined4 *)(gen_frame + 0x20)) = (*(undefined4 *)&gen_args[4]);
  (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)&gen_args[5]);
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = &(*(undefined4 *)&gen_args[7]);
  (*(undefined4 *)(gen_frame + 0xc)) = 6;
  (*(float *)(gen_frame + 0x1c)) = (*(float *)&gen_args[3]);
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 0xc) + 0x2c))))
                    (*(int * PTR32 *)((*(int *)&gen_args[0]) + 0xc),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0xc)));
  return uVar1;
}

/* ref: FUN_00c97550 */
byte F_00c97550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc97550u, gen_a0, gen_a1, gen_a2, 0u);
  unsigned int gen_args[7];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  memcpy(&gen_args[3], &gen_a3, sizeof gen_a3);
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  uint uVar1;
  
  (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)&gen_args[4]);
  (*(undefined4 * PTR32 *)(gen_frame + 0x18)) = &(*(undefined4 *)&gen_args[6]);
  (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)&gen_args[5]);
  (*(undefined4 *)(gen_frame + 0xc)) = 3;
  (*(float *)(gen_frame + 0x1c)) = (*(float *)&gen_args[3]);
  (*(undefined * PTR32 *)(gen_frame + 0x20)) = &REFG(undefined, 0x15d76b4);
  (*(undefined4 *)(gen_frame + 0x28)) = 0;
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((*(int *)&gen_args[0]) + 0xc) + 0x2c))))
                    (*(int * PTR32 *)((*(int *)&gen_args[0]) + 0xc),(*(undefined4 *)&gen_args[1]),(*(undefined4 *)&gen_args[2]),&(*(undefined4 *)(gen_frame + 0xc)));
  return (byte)uVar1;
}

/* ref: FUN_00c975b0 */
byte F_00c975b0(unsigned int gen_a0)
{
  GEN_ENTER(0xc975b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x2c))))(*(int * PTR32 *)((int)this + 0xc));
  return (byte)uVar1;
}

/* ref: FUN_00c975c0 */
uint F_00c975c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc975c0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x38))))
                    (*(int * PTR32 *)((int)this + 0xc),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c975d0 */
byte F_00c975d0(unsigned int gen_a0)
{
  GEN_ENTER(0xc975d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x34))))(*(int * PTR32 *)((int)this + 0xc));
  return (byte)uVar1;
}

/* ref: FUN_00c975e0 */
uint F_00c975e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc975e0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x3c))))
                    (*(int * PTR32 *)((int)this + 0xc),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c975f0 */
unsigned int F_00c975f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc975f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x40))))(*(int * PTR32 *)((int)this + 0xc));
  return 0;
}

/* ref: FUN_00c97600 */
uint F_00c97600(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc97600u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x48))))
                    (*(int * PTR32 *)((int)this + 0xc),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c97610 */
uint F_00c97610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0xc97610u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0xc) + 0x44))))
                    (*(int * PTR32 *)((int)this + 0xc),param_1,param_2,param_3,param_4,param_5,param_6,
                     param_7,param_8);
  return uVar1;
}

/* ref: FUN_00c97620 */
unsigned int F_00c97620(unsigned int gen_a0)
{
  GEN_ENTER(0xc97620u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  
  for (piVar1 = *(int * PTR32 *)((int)this + 0xc); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[3]) {
    ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    ((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1);
  }
  return 0;
}

/* ref: FUN_00c97680 */
unsigned int F_00c97680(unsigned int gen_a0)
{
  GEN_ENTER(0xc97680u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1128ffc));
  iVar1 = *(int *)((int)this + 0x10);
  while (iVar1 != 0) {
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0xc);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)((int)this + 0xc) = puVar2[3];
      if (puVar2[2] != 0) {
        *(undefined4 *)(puVar2[2] + 0xc) = puVar2[3];
      }
      if (puVar2[3] != 0) {
        *(undefined4 *)(puVar2[3] + 8) = puVar2[2];
      }
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
      ((code *)*(gen_code32 *)*puVar2)(puVar2,0);
      F_00ca2140(puVar2,&REFG(undefined, 0x1128ff4),this);
    }
    iVar1 = *(int *)((int)this + 0x10);
  }
  return 0;
}

/* ref: FUN_00c976f0 */
byte F_00c976f0(unsigned int gen_a0)
{
  GEN_ENTER(0xc976f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  
  iVar1 = *(int *)((int)this + 0x10);
  while (iVar1 != 0) {
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0xc);
    if (puVar2 != (undefined4 *)0x0) {
      *(undefined4 *)((int)this + 0xc) = puVar2[3];
      if (puVar2[2] != 0) {
        *(undefined4 *)(puVar2[2] + 0xc) = puVar2[3];
      }
      if (puVar2[3] != 0) {
        *(undefined4 *)(puVar2[3] + 8) = puVar2[2];
      }
      puVar2[2] = 0;
      puVar2[3] = 0;
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
      ((code *)*(gen_code32 *)*puVar2)(puVar2,0);
      F_00ca2140(puVar2,&REFG(undefined, 0x1128ff5),this);
    }
    iVar1 = *(int *)((int)this + 0x10);
  }
  return 1;
}

/* ref: FUN_00c97760 */
uint F_00c97760(unsigned int gen_a0)
{
  GEN_ENTER(0xc97760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00ca2100(0x18,&REFG(undefined, 0x1128ff6),this);
  if (this_00 == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00c97b80(this_00,this);
  }
  *(undefined4 *)(uVar1 + 0xc) = *(undefined4 *)((int)this + 0xc);
  if (*(int *)((int)this + 0xc) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = uVar1;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  *(uint *)((int)this + 0xc) = uVar1;
  return uVar1;
}

/* ref: FUN_00c977a0 */
unsigned int F_00c977a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc977a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    if (*(undefined4 * PTR32 *)((int)this + 0xc) == param_1) {
      *(undefined4 *)((int)this + 0xc) = param_1[3];
    }
    if (param_1[2] != 0) {
      *(undefined4 *)(param_1[2] + 0xc) = param_1[3];
    }
    if (param_1[3] != 0) {
      *(undefined4 *)(param_1[3] + 8) = param_1[2];
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + -1;
    ((code *)*(gen_code32 *)*param_1)(param_1,0);
    F_00ca2140(param_1,&REFG(undefined, 0x1128ff7),this);
  }
  return 0;
}

/* ref: FUN_00c97800 */
uint F_00c97800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc97800u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined * this_00;
  uint uVar1;
  
  *(undefined4 *)((int)this + 4) = param_1;
  *(undefined4 *)((int)this + 8) = param_2;
  this_00 = (undefined *)F_00ca2100(0x18,&REFG(undefined, 0x1128ff6),this);
  if (this_00 == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = F_00c97b80(this_00,this);
  }
  *(undefined4 *)(uVar1 + 0xc) = *(undefined4 *)((int)this + 0xc);
  if (*(int *)((int)this + 0xc) != 0) {
    *((uint *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = uVar1;
  }
  *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) + 1;
  *(uint *)((int)this + 0xc) = uVar1;
  return uVar1;
}

/* ref: FUN_00c978a0 */
byte F_00c978a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc978a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00c978e0 */
uint F_00c978e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc978e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00c978f0 */
uint F_00c978f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc978f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_00c97900 */
uint F_00c97900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc97900u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00c97910 */
unsigned int F_00c97910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc97910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)this;
  if (*(int *)this != 0) {
    *(int *)(*(int *)this + 8) = param_1;
  }
  *(int *)this = param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  return 0;
}

/* ref: FUN_00c97930 */
uint F_00c97930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc97930u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  return (uint)param_2;
}

/* ref: FUN_00c97940 */
uint F_00c97940(unsigned int gen_a0)
{
  GEN_ENTER(0xc97940u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  *param_1 = 0;
  return (uint)param_1;
}

/* ref: FUN_00c97990 */
unsigned int F_00c97990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc97990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (param_1 != 0) {
    if (*(int *)this == param_1) {
      *(undefined4 *)this = *(undefined4 *)(param_1 + 0xc);
    }
    if (*(int *)(param_1 + 8) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + 0xc))) = *(undefined4 *)(param_1 + 0xc);
    }
    if (*(int *)(param_1 + 0xc) != 0) {
      *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xc) + 8))) = *(undefined4 *)(param_1 + 8);
    }
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  return 0;
}

/* ref: FUN_00c97a10 */
unsigned int F_00c97a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc97a10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  if (*(int *)this == param_1) {
    *(undefined4 *)this = *(undefined4 *)(param_1 + 0xc);
  }
  if (*(int *)(param_1 + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 8) + 0xc))) = *(undefined4 *)(param_1 + 0xc);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)(param_1 + 0xc) + 8))) = *(undefined4 *)(param_1 + 8);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  return 0;
}

/* ref: FUN_00c97a60 */
uint F_00c97a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc97a60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x1128ff8));
  if (*(int *)((int)this + 4) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 4) + 0xc))) = *(undefined4 *)((int)this + 8);
  }
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 8))) = *(undefined4 *)((int)this + 4);
  }
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c97ad0 */
uint F_00c97ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc97ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c97b20((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00c97b20 */
uint F_00c97b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc97b20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x1129004));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1129000));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1128ff8));
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0xc))) = *(undefined4 *)((int)this + 0xc);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c97b80 */
uint F_00c97b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc97b80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1128ff8));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1129048));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1129040));
  *(undefined4 *)((int)this + 0x10) = param_1;
  this_00 = (undefined *)F_00ca2100(0x28,&REFG(undefined1, 0x107fc63),param_1);
  if (this_00 != (undefined *)0x0) {
    uVar1 = F_00ca16b0(this_00,param_1);
    *(uint *)((int)this + 0x14) = uVar1;
    return (uint)this;
  }
  *(undefined4 *)((int)this + 0x14) = 0;
  return (uint)this;
}

/* ref: FUN_00c97c20 */
unsigned int F_00c97c20(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xc97c20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  F_00c9fa30(*(undefined4 *)(in_ecx + 0x14),param_2,param_3,param_4,param_5);
  return 0;
}

/* ref: FUN_00c97c60 */
byte F_00c97c60(unsigned int gen_a0)
{
  GEN_ENTER(0xc97c60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *((int *)GEN_TOP((*(int *)(in_ecx + 0x14) + 0x20))) != 0;
}

/* ref: FUN_00c97c70 */
uint F_00c97c70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc97c70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = F_00ca1200(*(undefined * PTR32 *)((int)this + 0x14),param_1,param_2,
                       (uint)(*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) == 1));
  return uVar1;
}

/* ref: FUN_00c97ca0 */
uint F_00c97ca0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0xc97ca0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a5;
  undefined4 * param_6 = (undefined4 *)(uintptr_t)gen_a6;
  uint uVar1;
  
  uVar1 = F_00ca12f0(*(undefined * PTR32 *)((int)this + 0x14),param_1,param_2,
                       (uint)(*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 8))) == 1),*param_4,param_4[1],
                       param_4[2],*param_5,param_5[1],param_5[2],*param_6,param_6[1],param_6[2]);
  return uVar1;
}

/* ref: FUN_00c97d10 */
uint F_00c97d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc97d10u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  uint uVar1;
  
  uVar1 = F_00ca13a0(*(undefined * PTR32 *)((int)this + 0x14),param_1,*param_2,param_2[1],param_2[2],*param_3,
                       param_3[1],param_3[2],*param_4,param_4[1],param_4[2]);
  return uVar1;
}

/* ref: FUN_00c97d70 */
uint F_00c97d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc97d70u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  uint uVar1;
  
  uVar1 = F_00ca1410(*(undefined * PTR32 *)((int)this + 0x14),param_1,*param_2,param_2[1],param_2[2],*param_3,
                       param_3[1],param_3[2],*param_4,param_4[1],param_4[2]);
  return uVar1;
}

/* ref: FUN_00c97dd0 */
uint F_00c97dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc97dd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  uint uVar1;
  
  uVar1 = F_00ca1480(*(undefined * PTR32 *)((int)this + 0x14),param_1,*param_2,param_2[1],param_2[2],*param_3,
                       param_3[1],param_3[2],*param_4,param_4[1],param_4[2]);
  return uVar1;
}

/* ref: FUN_00c97e30 */
uint F_00c97e30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc97e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a3;
  undefined4 * param_4 = (undefined4 *)(uintptr_t)gen_a4;
  uint uVar1;
  
  uVar1 = F_00ca14f0(*(undefined * PTR32 *)((int)this + 0x14),param_1,*param_2,param_2[1],param_2[2],*param_3,
                       param_3[1],param_3[2],*param_4,param_4[1],param_4[2]);
  return uVar1;
}

/* ref: FUN_00c97e90 */
uint F_00c97e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc97e90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c9fa90(param_2);
  return uVar1;
}

/* ref: FUN_00c97ea0 */
unsigned int F_00c97ea0(unsigned int gen_a0)
{
  GEN_ENTER(0xc97ea0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00ca1760(*(undefined * PTR32 *)((int)this + 0x14));
  return 0;
}

/* ref: FUN_00c97eb0 */
uint F_00c97eb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, float gen_a6)
{
  GEN_ENTER(0xc97eb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  uint param_5 = (uint)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  float param_7 = (float)gen_a6;
  uint uVar1;
  
  uVar1 = F_00c9fea0(*(undefined4 *)(param_1 + 0x14),param_2,param_3,param_4,param_5,param_6,
                       param_7);
  return uVar1;
}

/* ref: FUN_00c97ee0 */
byte F_00c97ee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc97ee0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  bVar1 = F_00ca0220(*(undefined * PTR32 *)((int)this + 0x14),param_1,param_2,param_3);
  return bVar1;
}

/* ref: FUN_00c97ef0 */
uint F_00c97ef0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc97ef0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00ca0980(*(undefined * PTR32 *)((int)this + 0x14),param_1,param_2);
  return (uint)(*(int *)(param_1 + 0x40) != 0);
}

/* ref: FUN_00c97f20 */
uint F_00c97f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc97f20u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00ca0ac0(*(undefined * PTR32 *)((int)this + 0x14),param_1,param_2,param_3);
  return (uint)(*(int *)(param_1 + 0x40) != 0);
}

/* ref: FUN_00c97f50 */
unsigned int F_00c97f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc97f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00ca0c00(*(undefined * PTR32 *)((int)this + 0x14),param_1);
  return 0;
}

/* ref: FUN_00c97f60 */
unsigned int F_00c97f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc97f60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  return 0;
}

/* ref: FUN_00c97f70 */
unsigned int F_00c97f70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc97f70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00ca0d90(*(undefined * PTR32 *)((int)this + 0x14),param_1,param_2);
  return 0;
}

/* ref: FUN_00c97f80 */
unsigned int F_00c97f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc97f80u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00ca0e90(*(undefined * PTR32 *)((int)this + 0x14),param_1,param_2,param_3);
  return 0;
}

/* ref: FUN_00c97f90 */
uint F_00c97f90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc97f90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c98020((undefined *)((int)this + -4),param_1);
  return uVar1;
}

/* ref: FUN_00c97fa0 */
unsigned int F_00c97fa0(unsigned int gen_a0)
{
  GEN_ENTER(0xc97fa0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[19])REFP(0x1129048));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1129040));
  ((code *)*((gen_code32 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x14))))(*(undefined4 * PTR32 *)((int)this + 0x14),0);
  F_00ca2140(*(undefined4 *)((int)this + 0x14),&REFG(undefined1, 0x107fc63),*(undefined4 *)((int)this + 0x10));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[15])REFP(0x1129004));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1129000));
  *(undefined * PTR32 * PTR32 *)((int)this + 4) = (*(undefined * PTR32 (*)[1])REFP(0x1128ff8));
  if (*(int *)((int)this + 8) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 8) + 0xc))) = *(undefined4 *)((int)this + 0xc);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + 8))) = *(undefined4 *)((int)this + 8);
  }
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x109cc38));
  return 0;
}

/* ref: FUN_00c98020 */
uint F_00c98020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc98020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c97fa0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c98050 */
uint F_00c98050(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc98050u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00c97680(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00c98080 */
uint F_00c98080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc98080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00c98090 */
unsigned int F_00c98090(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc98090u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)((int)this + 4);
  *param_1 = *param_2 + *(float *)this;
  fVar2 = *(float *)((int)this + 8);
  param_1[1] = param_2[1] + fVar1;
  param_1[2] = param_2[2] + fVar2;
  return 0;
}

/* ref: FUN_00c98100 */
unsigned int F_00c98100(unsigned int gen_a0)
{
  GEN_ENTER(0xc98100u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: FUN_00c98130 */
uint F_00c98130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc98130u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + param_2 * 4;
}

/* ref: FUN_00c98140 */
uint F_00c98140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc98140u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + param_2 * 4;
}

/* ref: FUN_00c98150 */
unsigned int F_00c98150(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xc98150u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  return 0;
}

/* ref: FUN_00c981c0 */
unsigned int F_00c981c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc981c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return 0;
}

/* ref: FUN_00c981e0 */
uint F_00c981e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc981e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x10 + in_ecx;
}

/* ref: FUN_00c981f0 */
uint F_00c981f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc981f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *param_2 = *in_ecx;
  param_2[1] = in_ecx[1];
  param_2[2] = in_ecx[2];
  return (uint)param_2;
}

/* ref: FUN_00c98210 */
unsigned int F_00c98210(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc98210u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  uint param_6 = (uint)gen_a5;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float10 fVar7;
  float fVar8;
  
  fVar1 = *(float *)param_6;
  fVar7 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar1);
  fVar2 = (float)fVar7;
  fVar3 = *(float *)(param_6 + 4);
  fVar7 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar3);
  fVar4 = (float)fVar7;
  fVar5 = *(float *)(param_6 + 8);
  fVar7 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar5);
  fVar6 = (float)fVar7;
  fVar7 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar1);
  fVar1 = (float)fVar7;
  fVar7 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar3);
  fVar3 = (float)fVar7;
  fVar7 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar5);
  fVar5 = (float)fVar7;
  fVar8 = gen_bits2f((uint)gen_fl2bits(fVar2) ^ REFG(uint, 0x10920d0));
  param_5[2] = gen_bits2f((uint)gen_fl2bits(fVar4) ^ REFG(uint, 0x10920d0));
  param_5[3] = 0.0;
  param_5[1] = fVar3 * fVar6;
  *param_5 = fVar5 * fVar3;
  param_5[7] = 0.0;
  param_5[4] = ((float)GEN_TOF(((double)fVar5 * ((double)fVar4 * (double)fVar2) -
                      (double)fVar1 * (double)fVar6)));
  param_5[5] = ((float)GEN_TOF(((double)fVar5 * (double)fVar1 +
                      (double)fVar6 * ((double)fVar4 * (double)fVar2))));
  param_5[6] = fVar3 * fVar2;
  param_5[8] = ((float)GEN_TOF(((double)fVar5 * ((double)fVar1 * (double)fVar4) -
                      (double)fVar8 * (double)fVar6)));
  param_5[9] = ((float)GEN_TOF(((double)fVar6 * ((double)fVar1 * (double)fVar4) -
                      (double)fVar5 * (double)fVar2)));
  param_5[0xb] = 0.0;
  param_5[10] = (float)((float10)fVar3 * (float10)fVar1);
  param_5[0xc] = 0.0;
  param_5[0xd] = 0.0;
  param_5[0xe] = 0.0;
  param_5[0xf] = GEN_FLT_TO(param_5[0xf], REFG(float, 0x1087f04));
  return 0;
}

/* ref: FUN_00c983f0 */
unsigned int F_00c983f0(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xc983f0u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  uint param_6 = (uint)gen_a5;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  float fVar8;
  
  fVar1 = *(float *)param_6;
  fVar6 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar1);
  fVar2 = (float)fVar6;
  fVar3 = *(float *)(param_6 + 4);
  fVar6 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar3);
  fVar4 = (float)fVar6;
  fVar8 = *(float *)(param_6 + 8);
  fVar6 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar8);
  fVar5 = (float)fVar6;
  fVar6 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar1);
  fVar1 = (float)fVar6;
  fVar6 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar3);
  fVar7 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)fVar8);
  fVar3 = (float)fVar7;
  fVar7 = (float10)(float)fVar6;
  *param_5 = (float)(fVar7 * (float10)fVar3);
  param_5[1] = (float)(fVar7 * (float10)fVar5);
  param_5[2] = ((float)GEN_TOF(-(float10)fVar4));
  param_5[3] = 0.0;
  param_5[4] = ((float)GEN_TOF(((double)fVar3 * ((double)fVar4 * (double)fVar2) -
                      (double)fVar1 * (double)fVar5)));
  param_5[7] = 0.0;
  param_5[6] = (float)(fVar7 * (float10)fVar2);
  param_5[5] = ((float)GEN_TOF(((double)fVar3 * (double)fVar1 +
                      (double)fVar5 * ((double)fVar4 * (double)fVar2))));
  fVar8 = gen_bits2f((uint)gen_fl2bits(fVar2) ^ REFG(uint, 0x10920d0));
  param_5[9] = ((float)GEN_TOF(((double)fVar5 * ((double)fVar1 * (double)fVar4) -
                      (double)fVar3 * (double)fVar2)));
  param_5[0xb] = 0.0;
  param_5[8] = ((float)GEN_TOF(((double)fVar3 * ((double)fVar1 * (double)fVar4) -
                      (double)fVar8 * (double)fVar5)));
  param_5[10] = (float)fVar6 * fVar1;
  param_5[0xc] = 0.0;
  param_5[0xd] = 0.0;
  param_5[0xe] = 0.0;
  param_5[0xf] = GEN_FLT_TO(param_5[0xf], REFG(float, 0x1087f04));
  return 0;
}

/* ref: FUN_00c985b0 */
uint F_00c985b0(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xc985b0u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  undefined4 * param_5 = (undefined4 *)(uintptr_t)gen_a4;
  float param_6 = (float)gen_a5;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float10 fVar8;
  float10 fVar9;
  uint uVar10;
  
  if ((*(uint *)&REFG(undefined, 0x15d76a0) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d76a0) = *(uint *)&REFG(undefined, 0x15d76a0) | 1;
    REFG(float, 0x15d7690) = 0;
    REFG(float, 0x15d7694) = 0;
    REFG(float, 0x15d7698) = 0;
    REFG(float, 0x15d769c) = REFG(float, 0x1087f04);
  }
  uVar7 = REFG(float, 0x15d769c);
  uVar6 = REFG(float, 0x15d7698);
  uVar5 = REFG(float, 0x15d7694);
  uVar4 = REFG(float, 0x15d7690);
  fVar8 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  uVar10 = (uint)gen_fl2bits((float)fVar8) ^ REFG(uint, 0x10920d0);
  fVar9 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  if ((*(uint *)&REFG(undefined, 0x15d7664) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7664) = *(uint *)&REFG(undefined, 0x15d7664) | 1;
    REFG(float, 0x15d7654) = REFG(float, 0x1087f04);
    REFG(float, 0x15d7658) = 0;
    REFG(float, 0x15d765c) = 0;
    REFG(float, 0x15d7660) = 0;
  }
  uVar3 = REFG(float, 0x15d7660);
  uVar2 = REFG(float, 0x15d765c);
  uVar1 = REFG(float, 0x15d7654);
  param_5[1] = GEN_FLT_TO(param_5[1], REFG(float, 0x15d7658));
  *param_5 = uVar1;
  param_5[2] = uVar2;
  param_5[3] = uVar3;
  param_5[4] = 0;
  param_5[5] = (undefined4)gen_fl2bits((float)fVar9);
  param_5[7] = 0;
  param_5[6] = (undefined4)gen_fl2bits((float)fVar8);
  param_5[8] = 0;
  param_5[0xb] = 0;
  param_5[9] = uVar10;
  param_5[10] = (undefined4)gen_fl2bits((float)fVar9);
  param_5[0xc] = uVar4;
  param_5[0xd] = uVar5;
  param_5[0xe] = uVar6;
  param_5[0xf] = uVar7;
  return (uint)param_5;
}

/* ref: FUN_00c98740 */
uint F_00c98740(float gen_a0, float gen_a1, float gen_a2, float gen_a3, unsigned int gen_a4, float gen_a5)
{
  GEN_ENTER(0xc98740u, 0u, 0u, 0u, 0u);
  float in_xmm1 = (float)gen_a0;
  float in_xmm2 = (float)gen_a1;
  float in_xmm3 = (float)gen_a2;
  float in_xmm7 = (float)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float param_6 = (float)gen_a5;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  float10 fVar10;
  
  if ((*(uint *)&REFG(undefined, 0x15d76a0) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d76a0) = *(uint *)&REFG(undefined, 0x15d76a0) | 1;
    REFG(float, 0x15d7690) = 0.0;
    REFG(float, 0x15d7694) = 0.0;
    REFG(float, 0x15d7698) = 0.0;
    REFG(float, 0x15d769c) = REFG(float, 0x1087f04);
  }
  fVar8 = REFG(float, 0x15d769c);
  fVar7 = REFG(float, 0x15d7698);
  fVar6 = REFG(float, 0x15d7694);
  fVar5 = REFG(float, 0x15d7690);
  fVar9 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  fVar10 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_6);
  if ((*(uint *)&REFG(undefined, 0x15d7678) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7678) = *(uint *)&REFG(undefined, 0x15d7678) | 1;
    REFG(float, 0x15d7668) = 0.0;
    REFG(float, 0x15d766c) = REFG(float, 0x1087f04);
    REFG(float, 0x15d7670) = 0.0;
    REFG(float, 0x15d7674) = 0.0;
  }
  fVar4 = REFG(float, 0x15d7674);
  fVar3 = REFG(float, 0x15d7670);
  fVar2 = REFG(float, 0x15d766c);
  fVar1 = REFG(float, 0x15d7668);
  param_5[2] = gen_bits2f((uint)gen_fl2bits((float)fVar9) ^ REFG(uint, 0x10920d0));
  *param_5 = (float)fVar10;
  param_5[1] = 0.0;
  param_5[3] = 0.0;
  param_5[4] = fVar1;
  param_5[5] = fVar2;
  param_5[6] = fVar3;
  param_5[7] = fVar4;
  param_5[8] = (float)fVar9;
  param_5[9] = 0.0;
  param_5[10] = (float)fVar10;
  param_5[0xb] = 0.0;
  param_5[0xc] = fVar5;
  param_5[0xd] = fVar6;
  param_5[0xe] = fVar7;
  param_5[0xf] = fVar8;
  return (uint)param_5;
}

/* ref: FUN_00c988c0 */
uint F_00c988c0(float gen_a0, float gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xc988c0u, 0u, 0u, gen_a2, 0u);
  float in_xmm3 = (float)gen_a0;
  float in_xmm7 = (float)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float10 fVar9;
  float10 fVar10;
  float fVar11;
  float in_xmm1;
  float in_xmm2;
  
  if ((*(uint *)&REFG(undefined, 0x15d76a0) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d76a0) = *(uint *)&REFG(undefined, 0x15d76a0) | 1;
    REFG(float, 0x15d7690) = 0.0;
    REFG(float, 0x15d7694) = 0.0;
    REFG(float, 0x15d7698) = 0.0;
    REFG(float, 0x15d769c) = REFG(float, 0x1087f04);
  }
  fVar8 = REFG(float, 0x15d769c);
  fVar7 = REFG(float, 0x15d7698);
  fVar6 = REFG(float, 0x15d7694);
  fVar5 = REFG(float, 0x15d7690);
  if ((*(uint *)&REFG(undefined, 0x15d768c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d768c) = *(uint *)&REFG(undefined, 0x15d768c) | 1;
    REFG(float, 0x15d767c) = 0.0;
    REFG(float, 0x15d7680) = 0.0;
    REFG(float, 0x15d7684) = REFG(float, 0x1087f04);
    REFG(float, 0x15d7688) = 0.0;
  }
  fVar4 = REFG(float, 0x15d7688);
  fVar3 = REFG(float, 0x15d7684);
  fVar2 = REFG(float, 0x15d7680);
  fVar1 = REFG(float, 0x15d767c);
  in_xmm1 = REFG(float, 0x1087f04);
  in_xmm2 = REFG(float, 0x15d769c);
  fVar9 = F_00c4cde0(REFG(float, 0x1087f04),REFG(float, 0x15d769c),in_xmm3,in_xmm7,(float10)param_4);
  fVar11 = gen_bits2f((uint)gen_fl2bits((float)fVar9) ^ REFG(uint, 0x10920d0));
  fVar10 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)param_4);
  *param_3 = (float)fVar10;
  param_3[1] = (float)fVar9;
  param_3[2] = 0.0;
  param_3[3] = 0.0;
  param_3[6] = 0.0;
  param_3[7] = 0.0;
  param_3[4] = fVar11;
  param_3[5] = (float)fVar10;
  param_3[8] = fVar1;
  param_3[9] = fVar2;
  param_3[10] = fVar3;
  param_3[0xb] = fVar4;
  param_3[0xc] = fVar5;
  param_3[0xd] = fVar6;
  param_3[0xe] = fVar7;
  param_3[0xf] = fVar8;
  return (uint)param_3;
}

/* ref: FUN_00c98a60 */
unsigned int F_00c98a60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc98a60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = 0;
  *param_1 = uVar1;
  param_1[2] = 0;
  param_1[3] = 0;
  uVar1 = param_2[1];
  param_1[4] = 0;
  param_1[5] = uVar1;
  param_1[6] = 0;
  param_1[7] = 0;
  uVar1 = param_2[2];
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = uVar1;
  param_1[0xb] = 0;
  if ((*(uint *)&REFG(undefined, 0x15d76a0) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d76a0) = *(uint *)&REFG(undefined, 0x15d76a0) | 1;
    REFG(float, 0x15d7690) = 0;
    REFG(float, 0x15d7694) = 0;
    REFG(float, 0x15d7698) = 0;
    REFG(float, 0x15d769c) = REFG(float, 0x1087f04);
  }
  param_1[0xc] = GEN_FLT_TO(param_1[0xc], REFG(float, 0x15d7690));
  param_1[0xd] = GEN_FLT_TO(param_1[0xd], REFG(float, 0x15d7694));
  param_1[0xe] = GEN_FLT_TO(param_1[0xe], REFG(float, 0x15d7698));
  param_1[0xf] = GEN_FLT_TO(param_1[0xf], REFG(float, 0x15d769c));
  return 0;
}

/* ref: FUN_00c98b30 */
unsigned int F_00c98b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xc98b30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = REFG(float, 0x1087f04);
  if ((*(uint *)&REFG(undefined, 0x15d7664) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7664) = *(uint *)&REFG(undefined, 0x15d7664) | 1;
    REFG(float, 0x15d7654) = REFG(float, 0x1087f04);
    REFG(float, 0x15d7658) = 0;
    REFG(float, 0x15d765c) = 0;
    REFG(float, 0x15d7660) = 0;
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x15d7654));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x15d7658));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x15d765c));
  param_1[3] = GEN_FLT_TO(param_1[3], REFG(float, 0x15d7660));
  if ((*(uint *)&REFG(undefined, 0x15d7678) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d7678) = *(uint *)&REFG(undefined, 0x15d7678) | 1;
    REFG(float, 0x15d7668) = 0;
    REFG(float, 0x15d766c) = uVar3;
    REFG(float, 0x15d7670) = 0;
    REFG(float, 0x15d7674) = 0;
  }
  param_1[4] = GEN_FLT_TO(param_1[4], REFG(float, 0x15d7668));
  param_1[5] = GEN_FLT_TO(param_1[5], REFG(float, 0x15d766c));
  param_1[6] = GEN_FLT_TO(param_1[6], REFG(float, 0x15d7670));
  param_1[7] = GEN_FLT_TO(param_1[7], REFG(float, 0x15d7674));
  if ((*(uint *)&REFG(undefined, 0x15d768c) & 1) == 0) {
    *(uint *)&REFG(undefined, 0x15d768c) = *(uint *)&REFG(undefined, 0x15d768c) | 1;
    REFG(float, 0x15d767c) = 0;
    REFG(float, 0x15d7680) = 0;
    REFG(float, 0x15d7684) = uVar3;
    REFG(float, 0x15d7688) = 0;
  }
  param_1[8] = GEN_FLT_TO(param_1[8], REFG(float, 0x15d767c));
  param_1[9] = GEN_FLT_TO(param_1[9], REFG(float, 0x15d7680));
  param_1[10] = GEN_FLT_TO(param_1[10], REFG(float, 0x15d7684));
  param_1[0xb] = GEN_FLT_TO(param_1[0xb], REFG(float, 0x15d7688));
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  param_1[0xc] = *param_2;
  param_1[0xd] = uVar1;
  param_1[0xe] = uVar2;
  param_1[0xf] = uVar3;
  return 0;
}

/* ref: FUN_00c98ca0 */
unsigned int F_00c98ca0(unsigned int gen_a0)
{
  GEN_ENTER(0xc98ca0u, gen_a0, 0u, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
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
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  
  fVar1 = in_ecx[4];
  fVar2 = in_ecx[5];
  fVar3 = in_ecx[6];
  fVar4 = in_ecx[8];
  fVar5 = in_ecx[9];
  fVar6 = in_ecx[0xc];
  fVar7 = *in_ecx;
  fVar8 = in_ecx[1];
  fVar9 = in_ecx[2];
  fVar10 = in_ecx[3];
  dVar19 = (double)in_ecx[0xf] * (double)in_ecx[10] - (double)in_ecx[0xe] * (double)in_ecx[0xb];
  dVar16 = (double)in_ecx[0xf] * (double)fVar5 - (double)in_ecx[0xd] * (double)in_ecx[0xb];
  dVar22 = (double)in_ecx[0xe] * (double)fVar5 - (double)in_ecx[0xd] * (double)in_ecx[10];
  fVar11 = ((float)GEN_TOF((((double)fVar2 * dVar19 - (double)fVar3 * dVar16) + (double)in_ecx[7] * dVar22)));
  dVar17 = (double)in_ecx[0xf] * (double)fVar4 - (double)fVar6 * (double)in_ecx[0xb];
  dVar23 = (double)in_ecx[0xe] * (double)fVar4 - (double)fVar6 * (double)in_ecx[10];
  fVar12 = ((float)GEN_TOF((((double)fVar3 * dVar17 - (double)fVar1 * dVar19) - (double)in_ecx[7] * dVar23)));
  dVar18 = (double)in_ecx[0xd] * (double)fVar4 - (double)fVar6 * (double)fVar5;
  fVar13 = ((float)GEN_TOF((((double)fVar1 * dVar16 - (double)fVar2 * dVar17) + (double)in_ecx[7] * dVar18)));
  fVar14 = ((float)GEN_TOF((((double)fVar2 * dVar23 - (double)fVar1 * dVar22) - (double)fVar3 * dVar18)));
  fVar15 = ((float)GEN_TOF((REFG(double, 0x1088130) /
                  (double)((float)GEN_TOF(((((double)fVar12 * (double)fVar8 + (double)fVar11 * (double)fVar7)
                                  + (double)fVar13 * (double)fVar9) +
                                 (double)fVar14 * (double)fVar10))))));
  *in_ecx = fVar11 * fVar15;
  in_ecx[4] = fVar12 * fVar15;
  in_ecx[8] = fVar13 * fVar15;
  in_ecx[0xc] = fVar14 * fVar15;
  in_ecx[1] = ((float)GEN_TOF(((((double)fVar9 * dVar16 - (double)fVar8 * dVar19) - (double)fVar10 * dVar22)
                     * (double)fVar15)));
  dVar20 = (double)in_ecx[0xf] * (double)fVar3 - (double)in_ecx[0xe] * (double)in_ecx[7];
  dVar24 = (double)in_ecx[0xf] * (double)fVar2 - (double)in_ecx[0xd] * (double)in_ecx[7];
  dVar26 = (double)in_ecx[0xe] * (double)fVar2 - (double)in_ecx[0xd] * (double)fVar3;
  in_ecx[2] = ((float)GEN_TOF(((((double)fVar8 * dVar20 - (double)fVar9 * dVar24) + (double)fVar10 * dVar26)
                     * (double)fVar15)));
  dVar21 = (double)in_ecx[0xb] * (double)fVar2 - (double)fVar5 * (double)in_ecx[7];
  dVar25 = (double)in_ecx[0xb] * (double)fVar3 - (double)in_ecx[10] * (double)in_ecx[7];
  dVar27 = (double)in_ecx[10] * (double)fVar2 - (double)fVar5 * (double)fVar3;
  in_ecx[3] = ((float)GEN_TOF(((((double)fVar9 * dVar21 - (double)fVar8 * dVar25) - (double)fVar10 * dVar27)
                     * (double)fVar15)));
  in_ecx[5] = ((float)GEN_TOF(((((double)fVar7 * dVar19 - (double)fVar9 * dVar17) + (double)fVar10 * dVar23)
                     * (double)fVar15)));
  dVar19 = (double)in_ecx[0xf] * (double)fVar1 - (double)fVar6 * (double)in_ecx[7];
  dVar28 = (double)in_ecx[0xe] * (double)fVar1 - (double)fVar6 * (double)fVar3;
  in_ecx[6] = ((float)GEN_TOF(((((double)fVar9 * dVar19 - (double)fVar7 * dVar20) - (double)fVar10 * dVar28)
                     * (double)fVar15)));
  dVar20 = (double)in_ecx[0xb] * (double)fVar1 - (double)fVar4 * (double)in_ecx[7];
  dVar29 = (double)in_ecx[10] * (double)fVar1 - (double)fVar4 * (double)fVar3;
  in_ecx[7] = ((float)GEN_TOF(((((double)fVar7 * dVar25 - (double)fVar9 * dVar20) + (double)fVar10 * dVar29)
                     * (double)fVar15)));
  in_ecx[9] = ((float)GEN_TOF(((((double)fVar8 * dVar17 - (double)fVar7 * dVar16) - (double)fVar10 * dVar18)
                     * (double)fVar15)));
  dVar16 = (double)in_ecx[0xd] * (double)fVar1 - (double)fVar6 * (double)fVar2;
  in_ecx[10] = ((float)GEN_TOF(((((double)fVar7 * dVar24 - (double)fVar8 * dVar19) + (double)fVar10 * dVar16)
                      * (double)fVar15)));
  dVar17 = (double)fVar5 * (double)fVar1 - (double)fVar4 * (double)fVar2;
  in_ecx[0xb] = ((float)GEN_TOF(((((double)fVar8 * dVar20 - (double)fVar7 * dVar21) - (double)fVar10 * dVar17
                        ) * (double)fVar15)));
  in_ecx[0xd] = ((float)GEN_TOF(((((double)fVar7 * dVar22 - (double)fVar8 * dVar23) + (double)fVar9 * dVar18)
                       * (double)fVar15)));
  in_ecx[0xe] = ((float)GEN_TOF(((((double)fVar8 * dVar28 - (double)fVar7 * dVar26) - (double)fVar9 * dVar16)
                       * (double)fVar15)));
  in_ecx[0xf] = ((float)GEN_TOF(((((double)fVar7 * dVar27 - (double)fVar8 * dVar29) + (double)fVar9 * dVar17)
                       * (double)fVar15)));
  return 0;
}

/* ref: FUN_00c994c0 */
byte F_00c994c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc994c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  double dVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = REFG(float, 0x11290b0);
  fVar6 = REFG(float, 0x1090998);
  *param_4 = 0.0;
  uVar4 = REFG(double, 0x11290a0);
  dVar3 = REFG(double, 0x1088130);
  fVar1 = *param_3 - *param_1;
  fVar2 = param_3[2] - *param_1;
  if (((float)GEN_TOF(gen_bits2d((ulonglong)gen_d2bits((double)*param_2) & REFG(ulonglong, 0x11290a0)))) < fVar5) {
    if (!GEN_ISNAN(fVar1) && !(fVar1 <= 0.0)) {
      return 0;
    }
    if (fVar2 < 0.0) {
      return 0;
    }
  }
  else {
    fVar5 = (float)(REFG(double, 0x1088130) / (double)*param_2);
    fVar1 = fVar5 * fVar1;
    fVar5 = fVar5 * fVar2;
    if (fVar5 < fVar1) {
      if (0.0 < fVar5) {
        *param_4 = fVar5;
      }
      if ((double)fVar1 < REFG(double, 0x10909a0)) {
        fVar6 = fVar1;
      }
    }
    else {
      if (0.0 < fVar1) {
        *param_4 = fVar1;
      }
      if ((double)fVar5 < REFG(double, 0x10909a0)) {
        fVar6 = fVar5;
      }
    }
    if ((!GEN_ISNAN(*param_4) && !GEN_ISNAN(fVar6)) && !(*param_4 <= fVar6)) {
      return 0;
    }
  }
  fVar1 = param_3[1] - param_1[2];
  fVar2 = param_3[3] - param_1[2];
  if (((float)GEN_TOF(gen_bits2d((ulonglong)gen_d2bits((double)param_2[2]) & uVar4))) < REFG(float, 0x11290b0)) {
    if ((!GEN_ISNAN(fVar1) && !(fVar1 <= 0.0)) || (fVar2 < 0.0)) {
      return 0;
    }
  }
  else {
    fVar5 = (float)(dVar3 / (double)param_2[2]);
    fVar1 = fVar5 * fVar1;
    fVar5 = fVar5 * fVar2;
    if (fVar5 < fVar1) {
      if (*param_4 < fVar5) {
        *param_4 = fVar5;
      }
      if (fVar1 < fVar6) {
        fVar6 = fVar1;
      }
    }
    else {
      if (*param_4 < fVar1) {
        *param_4 = fVar1;
      }
      if (fVar5 < fVar6) {
        fVar6 = fVar5;
      }
    }
    if ((!GEN_ISNAN(*param_4) && !GEN_ISNAN(fVar6)) && !(*param_4 <= fVar6)) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00c996f0 */
byte F_00c996f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc996f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  bool bVar3;
  double dVar4;
  ulonglong uVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  
  fVar6 = REFG(float, 0x11290b0);
  fVar11 = REFG(float, 0x1090998);
  dVar4 = REFG(double, 0x1088130);
  *param_4 = 0.0;
  uVar5 = REFG(double, 0x11290a0);
  uVar7 = 0;
  iVar8 = param_2 - (int)param_3;
  while( true ) {
    fVar10 = *(float *)(iVar8 + (int)param_3);
    fVar1 = *((float *)GEN_TOP(((int)param_3 + (param_1 - param_2) + iVar8)));
    fVar2 = *param_3 - fVar1;
    fVar1 = param_3[3] - fVar1;
    if (((float)GEN_TOF(gen_bits2d((ulonglong)gen_d2bits((double)fVar10) & uVar5))) < fVar6) {
      if (!GEN_ISNAN(fVar2) && !(fVar2 <= 0.0)) {
        return 0;
      }
      bVar9 = GEN_ISNAN(fVar1) || fVar1 == 0.0;
      bVar3 = fVar1 <= 0.0;
    }
    else {
      fVar10 = (float)(dVar4 / (double)fVar10);
      fVar2 = fVar10 * fVar2;
      fVar10 = fVar10 * fVar1;
      if (fVar10 < fVar2) {
        if (*param_4 < fVar10) {
          *param_4 = fVar10;
        }
        if (fVar2 < fVar11) {
          fVar11 = fVar2;
        }
      }
      else {
        if (*param_4 < fVar2) {
          *param_4 = fVar2;
        }
        if (fVar10 < fVar11) {
          fVar11 = fVar10;
        }
      }
      fVar10 = *param_4;
      bVar9 = (GEN_ISNAN(fVar10) || GEN_ISNAN(fVar11)) || fVar10 == fVar11;
      bVar3 = fVar11 <= fVar10;
    }
    if (bVar3 && !bVar9) break;
    uVar7 = uVar7 + 1;
    param_3 = param_3 + 1;
    if (2 < uVar7) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c99860 */
byte F_00c99860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc99860u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  float fVar1;
  float fVar2;
  bool bVar3;
  double dVar4;
  ulonglong uVar5;
  float fVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  float fVar10;
  float fVar11;
  
  fVar6 = REFG(float, 0x11290b0);
  fVar11 = REFG(float, 0x1090998);
  dVar4 = REFG(double, 0x1088130);
  uVar8 = 0;
  iVar7 = (int)param_2 - (int)param_3;
  *param_4 = 0.0;
  uVar5 = REFG(double, 0x11290a0);
  while( true ) {
    fVar10 = *(float *)(iVar7 + (int)param_3);
    fVar1 = *((float *)GEN_TOP(((int)param_1 + (int)param_3 + (iVar7 - (int)param_2))));
    fVar2 = *param_3 - fVar1;
    fVar1 = param_3[3] - fVar1;
    if (((float)GEN_TOF(gen_bits2d((ulonglong)gen_d2bits((double)fVar10) & uVar5))) < fVar6) {
      if (!GEN_ISNAN(fVar2) && !(fVar2 <= 0.0)) {
        return 0;
      }
      bVar9 = GEN_ISNAN(fVar1) || fVar1 == 0.0;
      bVar3 = fVar1 <= 0.0;
    }
    else {
      fVar10 = (float)(dVar4 / (double)fVar10);
      fVar2 = fVar10 * fVar2;
      fVar10 = fVar10 * fVar1;
      if (fVar10 < fVar2) {
        if (*param_4 < fVar10) {
          *param_4 = fVar10;
        }
        if (fVar2 < fVar11) {
          fVar11 = fVar2;
        }
      }
      else {
        if (*param_4 < fVar2) {
          *param_4 = fVar2;
        }
        if (fVar10 < fVar11) {
          fVar11 = fVar10;
        }
      }
      fVar10 = *param_4;
      bVar9 = (GEN_ISNAN(fVar10) || GEN_ISNAN(fVar11)) || fVar10 == fVar11;
      bVar3 = fVar11 <= fVar10;
    }
    if (bVar3 && !bVar9) break;
    uVar8 = uVar8 + 1;
    param_3 = param_3 + 1;
    if (2 < uVar8) {
      fVar11 = *param_4;
      *param_5 = *param_2 * fVar11;
      param_5[1] = param_2[1] * fVar11;
      param_5[2] = param_2[2] * fVar11;
      *param_5 = *param_1 + *param_5;
      param_5[1] = param_1[1] + param_5[1];
      param_5[2] = param_1[2] + param_5[2];
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c99a80 */
byte F_00c99a80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xc99a80u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float fVar1;
  float fVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = 0.0;
  uVar4 = 0;
  iVar5 = param_2 - (int)param_3;
  fVar8 = REFG(float, 0x1090998);
  while( true ) {
    fVar7 = *(float *)(iVar5 + (int)param_3);
    fVar1 = *((float *)GEN_TOP(((int)param_3 + (param_1 - param_2) + iVar5)));
    fVar2 = *param_3 - fVar1;
    fVar1 = param_3[3] - fVar1;
    if (((float)GEN_TOF(gen_bits2d((ulonglong)gen_d2bits((double)fVar7) & REFG(ulonglong, 0x11290a0)))) < REFG(float, 0x11290b0)) {
      if (!GEN_ISNAN(fVar2) && !(fVar2 <= 0.0)) {
        return 0;
      }
      bVar6 = GEN_ISNAN(fVar1) || fVar1 == 0.0;
      bVar3 = fVar1 <= 0.0;
    }
    else {
      fVar7 = (float)(REFG(double, 0x1088130) / (double)fVar7);
      fVar2 = fVar7 * fVar2;
      fVar7 = fVar7 * fVar1;
      if (fVar7 < fVar2) {
        if (fVar9 < fVar7) {
          fVar9 = fVar7;
        }
        if (fVar2 < fVar8) {
          fVar8 = fVar2;
        }
      }
      else {
        if (fVar9 < fVar2) {
          fVar9 = fVar2;
        }
        if (fVar7 < fVar8) {
          fVar8 = fVar7;
        }
      }
      bVar6 = (GEN_ISNAN(fVar9) || GEN_ISNAN(fVar8)) || fVar9 == fVar8;
      bVar3 = fVar8 <= fVar9;
    }
    if (bVar3 && !bVar6) break;
    uVar4 = uVar4 + 1;
    param_3 = param_3 + 1;
    if (2 < uVar4) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00c99be0 */
byte F_00c99be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7)
{
  GEN_ENTER(0xc99be0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  uint param_5 = (uint)gen_a4;
  float * param_6 = (float *)(uintptr_t)gen_a5;
  float * param_7 = (float *)(uintptr_t)gen_a6;
  float * param_8 = (float *)(uintptr_t)gen_a7;
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
  
  fVar8 = *(float *)param_3;
  fVar10 = *(float *)param_4 - fVar8;
  fVar2 = *(float *)(param_4 + 4) - *(float *)(param_3 + 4);
  fVar15 = *(float *)(param_4 + 8) - *(float *)(param_3 + 8);
  fVar3 = *(float *)param_5 - fVar8;
  fVar4 = *(float *)(param_5 + 4) - *(float *)(param_3 + 4);
  fVar9 = *(float *)(param_2 + 8);
  fVar5 = *(float *)(param_5 + 8) - *(float *)(param_3 + 8);
  fVar1 = *(float *)param_2;
  fVar11 = ((float)GEN_TOF(((double)fVar5 * (double)*(float *)(param_2 + 4) - (double)fVar9 * (double)fVar4)));
  fVar12 = (float)((double)fVar9 * (double)fVar3 - (double)fVar5 * (double)fVar1);
  fVar13 = ((float)GEN_TOF(((double)fVar1 * (double)fVar4 - (double)*(float *)(param_2 + 4) * (double)fVar3)));
  fVar14 = ((float)GEN_TOF((((double)fVar12 * (double)fVar2 + (double)fVar11 * (double)fVar10) +
                  (double)fVar13 * (double)fVar15)));
  if ((!GEN_ISNAN(fVar14) && !GEN_ISNAN(REFG(float, 0x11290b0))) && !(fVar14 <= REFG(float, 0x11290b0))) {
    fVar8 = *param_1 - fVar8;
    fVar6 = param_1[1] - *(float *)(param_3 + 4);
    fVar7 = param_1[2] - *(float *)(param_3 + 8);
    fVar11 = ((float)GEN_TOF((((double)fVar6 * (double)fVar12 + (double)fVar8 * (double)fVar11) +
                    (double)fVar7 * (double)fVar13)));
    if ((!(fVar11 < 0.0)) && (!(fVar14 < fVar11))) {
      fVar12 = (float)((double)fVar8 * (double)fVar2 - (double)fVar6 * (double)fVar10);
      fVar10 = (float)((double)fVar7 * (double)fVar10 - (double)fVar15 * (double)fVar8);
      fVar15 = (float)((double)fVar6 * (double)fVar15 - (double)fVar7 * (double)fVar2);
      fVar8 = ((float)GEN_TOF((((double)*(float *)(param_2 + 4) * (double)fVar10 +
                      (double)fVar1 * (double)fVar15) + (double)fVar9 * (double)fVar12)));
      if (!(fVar8 < 0.0)) {
        if (!((double)fVar14 < (double)fVar8 + (double)fVar11)) {
          fVar9 = (float)(REFG(double, 0x1088130) / (double)fVar14);
          *param_6 = ((float)GEN_TOF((((double)fVar10 * (double)fVar4 + (double)fVar15 * (double)fVar3) +
                            (double)fVar12 * (double)fVar5))) * fVar9;
          *param_7 = fVar9 * fVar11;
          *param_8 = fVar9 * fVar8;
          return 1;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_00c99fd0 */
unsigned int F_00c99fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xc99fd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  uint param_4 = (uint)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
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
  double dVar18;
  
  fVar11 = *(float *)param_2;
  fVar15 = *(float *)param_1;
  fVar3 = fVar11 - fVar15;
  fVar14 = *(float *)(param_1 + 4);
  fVar4 = *(float *)(param_2 + 4) - fVar14;
  fVar10 = *(float *)(param_1 + 8);
  fVar6 = *(float *)(param_2 + 8) - fVar10;
  fVar1 = *(float *)param_3;
  fVar5 = fVar1 - fVar15;
  fVar7 = *(float *)(param_3 + 4) - fVar14;
  fVar8 = *(float *)(param_3 + 8) - fVar10;
  fVar16 = *(float *)param_4;
  fVar17 = *(float *)(param_4 + 4);
  fVar2 = *(float *)(param_4 + 8);
  fVar13 = ((float)GEN_TOF((((double)(fVar17 - fVar14) * (double)fVar4 +
                   (double)(fVar16 - fVar15) * (double)fVar3) +
                  (double)(fVar2 - fVar10) * (double)fVar6)));
  fVar14 = ((float)GEN_TOF((((double)(fVar17 - fVar14) * (double)fVar7 +
                   (double)(fVar16 - fVar15) * (double)fVar5) +
                  (double)(fVar2 - fVar10) * (double)fVar8)));
  if ((fVar13 <= 0.0) && (fVar14 <= 0.0)) {
    *param_5 = fVar15;
    param_5[1] = *(float *)(param_1 + 4);
    param_5[2] = *(float *)(param_1 + 8);
    return 0;
  }
  fVar15 = fVar17 - *(float *)(param_2 + 4);
  fVar10 = fVar2 - *(float *)(param_2 + 8);
  fVar9 = ((float)GEN_TOF((((double)fVar15 * (double)fVar4 + (double)fVar3 * (double)(fVar16 - fVar11)) +
                 (double)fVar10 * (double)fVar6)));
  fVar15 = ((float)GEN_TOF((((double)fVar15 * (double)fVar7 + (double)fVar5 * (double)(fVar16 - fVar11)) +
                  (double)fVar10 * (double)fVar8)));
  if ((0.0 <= fVar9) && (fVar15 <= fVar9)) {
    *param_5 = fVar11;
    param_5[1] = *(float *)(param_2 + 4);
    param_5[2] = *(float *)(param_2 + 8);
    return 0;
  }
  fVar10 = (float)((double)fVar15 * (double)fVar13 - (double)fVar9 * (double)fVar14);
  if (((fVar10 <= 0.0) && (0.0 <= fVar13)) && (fVar9 <= 0.0)) {
    fVar11 = ((float)GEN_TOF(((double)fVar13 / ((double)fVar13 - (double)fVar9))));
    *param_5 = fVar3 * fVar11;
    param_5[2] = fVar6 * fVar11;
    param_5[1] = fVar4 * fVar11;
    *param_5 = fVar3 * fVar11 + *(float *)param_1;
    param_5[1] = fVar4 * fVar11 + *(float *)(param_1 + 4);
    param_5[2] = fVar6 * fVar11 + *(float *)(param_1 + 8);
    return 0;
  }
  fVar17 = fVar17 - *(float *)(param_3 + 4);
  fVar2 = fVar2 - *(float *)(param_3 + 8);
  fVar12 = ((float)GEN_TOF((((double)fVar17 * (double)fVar7 + (double)(fVar16 - fVar1) * (double)fVar5) +
                  (double)fVar2 * (double)fVar8)));
  fVar16 = ((float)GEN_TOF((((double)fVar17 * (double)fVar4 + (double)(fVar16 - fVar1) * (double)fVar3) +
                  (double)fVar2 * (double)fVar6)));
  if ((0.0 <= fVar12) && (fVar16 <= fVar12)) {
    *param_5 = fVar1;
    param_5[1] = *(float *)(param_3 + 4);
    param_5[2] = *(float *)(param_3 + 8);
    return 0;
  }
  fVar17 = (float)((double)fVar16 * (double)fVar14 - (double)fVar12 * (double)fVar13);
  if (((fVar17 <= 0.0) && (0.0 <= fVar14)) && (fVar12 <= 0.0)) {
    fVar11 = ((float)GEN_TOF(((double)fVar14 / ((double)fVar14 - (double)fVar12))));
    *param_5 = fVar5 * fVar11;
    param_5[1] = fVar7 * fVar11;
    param_5[2] = fVar8 * fVar11;
    *param_5 = *(float *)param_1 + fVar5 * fVar11;
    param_5[1] = fVar7 * fVar11 + *(float *)(param_1 + 4);
    param_5[2] = *(float *)(param_1 + 8) + fVar8 * fVar11;
    return 0;
  }
  fVar14 = (float)((double)fVar12 * (double)fVar9 - (double)fVar16 * (double)fVar15);
  if (((fVar14 <= 0.0) && (dVar18 = (double)fVar15 - (double)fVar9, 0.0 <= dVar18)) &&
     (0.0 <= (double)fVar16 - (double)fVar12)) {
    *param_5 = fVar1 - fVar11;
    param_5[1] = *(float *)(param_3 + 4) - *(float *)(param_2 + 4);
    param_5[2] = *(float *)(param_3 + 8) - *(float *)(param_2 + 8);
    fVar11 = *param_5;
    fVar10 = ((float)GEN_TOF((dVar18 / (dVar18 - ((double)fVar16 - (double)fVar12)))));
    fVar15 = param_5[1];
    *param_5 = fVar11 * fVar10;
    fVar14 = param_5[2];
    param_5[1] = fVar15 * fVar10;
    param_5[2] = fVar14 * fVar10;
    *param_5 = *(float *)param_2 + fVar11 * fVar10;
    param_5[1] = fVar15 * fVar10 + *(float *)(param_2 + 4);
    param_5[2] = *(float *)(param_2 + 8) + fVar14 * fVar10;
    return 0;
  }
  fVar11 = ((float)GEN_TOF((REFG(double, 0x1088130) / (((double)fVar14 + (double)fVar17) + (double)fVar10))));
  fVar17 = fVar11 * fVar17;
  fVar11 = fVar11 * fVar10;
  fVar15 = fVar5 * fVar11 + fVar3 * fVar17;
  *param_5 = fVar15;
  fVar14 = fVar7 * fVar11 + fVar4 * fVar17;
  fVar11 = fVar8 * fVar11 + fVar6 * fVar17;
  param_5[1] = fVar14;
  param_5[2] = fVar11;
  *param_5 = *(float *)param_1 + fVar15;
  param_5[1] = fVar14 + *(float *)(param_1 + 4);
  param_5[2] = *(float *)(param_1 + 8) + fVar11;
  return 0;
}

/* ref: FUN_00c9a8a0 */
unsigned int F_00c9a8a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xc9a8a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = *param_1;
  fVar4 = *param_2 - fVar1;
  fVar5 = param_2[1] - param_1[1];
  fVar3 = param_2[2] - param_1[2];
  fVar6 = ((float)GEN_TOF((((double)(*param_3 - fVar1) * (double)fVar4 +
                  (double)fVar5 * (double)(param_3[1] - param_1[1])) +
                 (double)(param_3[2] - param_1[2]) * (double)fVar3))) /
          ((float)GEN_TOF((((double)fVar5 * (double)fVar5 + (double)fVar4 * (double)fVar4) +
                 (double)fVar3 * (double)fVar3)));
  fVar7 = 0.0;
  if ((!GEN_ISNAN(fVar6) && (!(0.0 < fVar6) && fVar6 != 0.0)) ||
     (fVar7 = REFG(float, 0x1087f04), REFG(float, 0x1087f04) < fVar6)) {
    fVar6 = fVar7;
  }
  fVar7 = param_1[1];
  fVar2 = param_1[2];
  *param_4 = fVar1 + fVar4 * fVar6;
  param_4[1] = fVar5 * fVar6 + fVar7;
  param_4[2] = fVar2 + fVar3 * fVar6;
  return 0;
}

