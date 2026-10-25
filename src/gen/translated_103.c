#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_009ed570 */
uint F_009ed570(unsigned int gen_a0)
{
  GEN_ENTER(0x9ed570u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_009e9dc0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0xd0);
  return (uint)uVar1;
}

/* ref: Apricot::ApricotListenner::vf0 */
uint F_009ed5b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed5b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009c84a0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009ed660 */
uint F_009ed660(unsigned int gen_a0)
{
  GEN_ENTER(0x9ed660u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined4, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ed690 */
uint F_009ed690(unsigned int gen_a0)
{
  GEN_ENTER(0x9ed690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined4, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ed6f0 */
uint F_009ed6f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ed6f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined4, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ed720 */
unsigned int F_009ed720(unsigned int gen_a0)
{
  GEN_ENTER(0x9ed720u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(int *)this != *(int *)((int)this + 4)) {
    *(int *)((int)this + 4) = *(int *)this;
  }
  return 0;
}

/* ref: FUN_009ed770 */
uint F_009ed770(unsigned int gen_a0)
{
  GEN_ENTER(0x9ed770u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined4, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ed7a0 */
uint F_009ed7a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ed7a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 4);
  if (*(uint *)this != uVar1) {
    uVar1 = F_009e3860(uVar1,uVar1,*(uint *)this,this);
    *(uint *)((int)this + 4) = uVar1;
  }
  return uVar1;
}

/* ref: FUN_009ed7d0 */
uint F_009ed7d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ed7d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined4, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ed830 */
unsigned int F_009ed830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  uVar2 = *(uint *)((int)this + 4);
  if ((param_1 < uVar2) && (uVar3 = *(uint *)this, uVar3 <= param_1)) {
    if (uVar2 == *(uint *)((int)this + 8)) {
      F_009ec8f0(this,1);
    }
    iVar1 = *(int *)this + ((int)(param_1 - uVar3) / 0xc) * 0xc;
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
      puVar4[1] = *(undefined4 *)(iVar1 + 4);
      puVar4[2] = *(undefined4 *)(iVar1 + 8);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
      return 0;
    }
  }
  else {
    if (uVar2 == *(uint *)((int)this + 8)) {
      F_009ec8f0(this,1);
    }
    puVar4 = *(undefined4 * PTR32 *)((int)this + 4);
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = (*(undefined * PTR32 (*)[1])REFP(0x10abaa4));
      puVar4[1] = *(undefined4 *)(param_1 + 4);
      puVar4[2] = *(undefined4 *)(param_1 + 8);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
  return 0;
}

/* ref: CVector_VShaderSceneKey_Kernel_Graphics_Client_Kernel::vf0 */
uint F_009ed8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[1])REFP(0x10e046c));
  F_009e9f10((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009ed900 */
uint F_009ed900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed900u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  bVar1 = F_009e6740(this,(param_1[1] - *param_1) / 0x14);
  if (bVar1 != 0) {
    uVar2 = F_009e8fa0(*param_1,param_1[1],*(undefined4 *)this,(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar2;
  }
  return (uint)this;
}

/* ref: FUN_009ed960 */
uint F_009ed960(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed960u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_009ec970(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009ec970(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009ed9d0 */
uint F_009ed9d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ed9d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0xa4;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0xa4;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      uVar2 = F_009eca20(this,uVar1);
      return uVar2;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    uVar1 = F_009eca20(this,uVar1);
  }
  return uVar1;
}

/* ref: FUN_009eda60 */
unsigned int F_009eda60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9eda60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x2a;
  if (-param_1 - 1U < uVar2) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar2 = uVar2 + param_1;
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x2a;
  if (uVar1 < uVar2) {
    if (-(uVar1 >> 1) - 1 < uVar1) {
      uVar1 = 0;
      if (uVar2 != 0) {
        uVar1 = uVar2;
      }
      F_009ecaf0(this,uVar1);
      return 0;
    }
    uVar1 = uVar1 + (uVar1 >> 1);
    if (uVar1 < uVar2) {
      uVar1 = uVar2;
    }
    F_009ecaf0(this,uVar1);
  }
  return 0;
}

/* ref: FUN_009edaf0 */
uint F_009edaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9edaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_009ecbd0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009ecbd0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009edb60 */
uint F_009edb60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9edb60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_009ecc80(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009ecc80(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009edbd0 */
uint F_009edbd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9edbd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_009ecd30(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009ecd30(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009edc40 */
uint F_009edc40(unsigned int gen_a0)
{
  GEN_ENTER(0x9edc40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  uint uVar4;
  
  piVar2 = *((int * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)));
  cVar1 = *(char *)((int)piVar2 + 0x29);
  while (cVar1 == '\0') {
    F_009ec8a0(this,piVar2[2]);
    piVar3 = (int *)*piVar2;
    if (piVar2 != (int *)0x0) {
      F_00406810(piVar2);
    }
    piVar2 = piVar3;
    cVar1 = *(char *)((int)piVar3 + 0x29);
  }
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  uVar4 = *(uint *)((int)this + 4);
  *(uint *)(uVar4 + 8) = uVar4;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar4;
}

/* ref: FUN_009edca0 */
uint F_009edca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9edca0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_009ecde0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009ecde0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009edd10 */
uint F_009edd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9edd10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_009ece90(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009ece90(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009edd80 */
uint F_009edd80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9edd80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_009ecf40(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009ecf40(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009eddf0 */
uint F_009eddf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9eddf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_009ed000(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009ed000(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009ede60 */
uint F_009ede60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ede60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_009ed0b0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009ed0b0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009eded0 */
uint F_009eded0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9eded0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  int iVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  if (((undefined4 *)GEN_TOP((*(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2))) < param_1) {
    puVar4 = (undefined4 *)F_004296a0((int)((int)(uintptr_t)param_1) * 4,0,0xd2);
    puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
    puVar6 = puVar4;
    for (puVar5 = *(undefined4 * PTR32 *)this; puVar5 != puVar1; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    iVar2 = *(int *)this;
    iVar3 = *(int *)((int)this + 4);
    if (iVar2 != 0) {
      F_00429760(iVar2,(*(int *)((int)this + 8) - iVar2 >> 2) * 4,0xd2);
    }
    param_1 = puVar4 + (int)param_1;
    *(undefined4 * PTR32 *)this = puVar4;
    *(undefined4 * PTR32 *)((int)this + 8) = param_1;
    *(undefined4 * PTR32 *)((int)this + 4) = puVar4 + (iVar3 - iVar2 >> 2);
  }
  return (uint)param_1;
}

/* ref: FUN_009edf80 */
uint F_009edf80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9edf80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  uVar1 = F_009e8c10(this,param_2);
  F_009ed1c0(this,param_1,uVar1,uVar2);
  return param_1;
}

/* ref: FUN_009edfb0 */
unsigned int F_009edfb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9edfb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 3;
    if (iVar1 < 0x21) {
LAB_009ee050: ;
      if (1 < iVar1) {
        F_009e90e0(param_1,param_2,param_4,param_5,0);
      }
      return 0;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (8 < (int)(param_2 - param_1 & 0xfffffff8U)) {
          F_009e7560(param_1,param_2,param_4,param_5,0,0);
        }
        F_009eb490(param_1,param_2,param_4,param_5);
        return 0;
      }
      goto LAB_009ee050;
    }
    F_009ea7d0(&(*(int *)(gen_frame + 0x4)),param_1,param_2,param_4,param_5);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x4)) - param_1 & 0xfffffff8U) < (int)(param_2 - (*(int *)(gen_frame + 0x8)) & 0xfffffff8U)) {
      F_009edfb0(param_1,(*(int *)(gen_frame + 0x4)),param_3,param_4,param_5);
      param_1 = (*(int *)(gen_frame + 0x8));
    }
    else {
      F_009edfb0((*(int *)(gen_frame + 0x8)),param_2,param_3,param_4,param_5);
      param_2 = (*(int *)(gen_frame + 0x4));
    }
    iVar1 = param_2 - param_1;
  } while( true );
}

/* ref: FUN_009ee0b0 */
unsigned int F_009ee0b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9ee0b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 3;
    if (iVar1 < 0x21) {
LAB_009ee150: ;
      if (1 < iVar1) {
        F_009e9230(param_1,param_2,param_4,param_5,0);
      }
      return 0;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (8 < (int)(param_2 - param_1 & 0xfffffff8U)) {
          F_009e7690(param_1,param_2,param_4,param_5,0,0);
        }
        F_009eb500(param_1,param_2,param_4,param_5);
        return 0;
      }
      goto LAB_009ee150;
    }
    F_009eac60(&(*(int *)(gen_frame + 0x4)),param_1,param_2,param_4,param_5);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x4)) - param_1 & 0xfffffff8U) < (int)(param_2 - (*(int *)(gen_frame + 0x8)) & 0xfffffff8U)) {
      F_009ee0b0(param_1,(*(int *)(gen_frame + 0x4)),param_3,param_4,param_5);
      param_1 = (*(int *)(gen_frame + 0x8));
    }
    else {
      F_009ee0b0((*(int *)(gen_frame + 0x8)),param_2,param_3,param_4,param_5);
      param_2 = (*(int *)(gen_frame + 0x4));
    }
    iVar1 = param_2 - param_1;
  } while( true );
}

/* ref: FUN_009ee1b0 */
uint F_009ee1b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6)
{
  GEN_ENTER(0x9ee1b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2 - param_1;
  do {
    uVar2 = iVar1 >> 4;
    if ((int)uVar2 < 0x21) {
LAB_009ee28a: ;
      if (1 < (int)uVar2) {
        uVar2 = F_009e93e0(param_1,param_2);
      }
      return uVar2;
    }
    if (param_3 < 1) {
      if (0x20 < (int)uVar2) {
        if (0x10 < (int)(param_2 - param_1 & 0xfffffff0U)) {
          F_009e77e0(param_1,param_2,param_4,param_5,param_6,param_7);
        }
        uVar2 = F_009eb570(param_1,param_2,param_4,param_5,param_6,param_7);
        return uVar2;
      }
      goto LAB_009ee28a;
    }
    F_009eb0f0(&(*(int *)(gen_frame + 0x4)),param_1,param_2,param_4,param_5,param_6,param_7);
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((*(int *)(gen_frame + 0x4)) - param_1 & 0xfffffff0U) < (int)(param_2 - (*(int *)(gen_frame + 0x8)) & 0xfffffff0U)) {
      F_009ee1b0(param_1,(*(int *)(gen_frame + 0x4)),param_3,param_4,param_5,param_6,param_7);
      param_1 = (*(int *)(gen_frame + 0x8));
    }
    else {
      F_009ee1b0((*(int *)(gen_frame + 0x8)),param_2,param_3,param_4,param_5,param_6,param_7);
      param_2 = (*(int *)(gen_frame + 0x4));
    }
    iVar1 = param_2 - param_1;
  } while( true );
}

/* ref: FUN_009ee330 */
uint F_009ee330(unsigned int gen_a0)
{
  GEN_ENTER(0x9ee330u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined4, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ee360 */
uint F_009ee360(unsigned int gen_a0)
{
  GEN_ENTER(0x9ee360u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined4, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: Apricot::Engine::Data::Communicator::Scheduler::vf3 */
uint F_009ee390(void)
{
  GEN_ENTER(0x9ee390u, 0u, 0u, 0u, 0u);
  return 0xc;
}

/* ref: Apricot::Engine::Data::Communicator::Scheduler::vf4 */
uint F_009ee3a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee3a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 0x14 + param_2 * 4;
}

/* ref: FUN_009ee3b0 */
uint F_009ee3b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee3b0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: Apricot::Engine::Data::Communicator::Scheduler::vf1 */
uint F_009ee3c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ee3c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 8) - *(int *)(in_ecx + 4) >> 2;
}

/* ref: Apricot::Engine::Data::Communicator::Scheduler::vf2 */
uint F_009ee3d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee3d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(int *)(in_ecx + 4) + param_2 * 4;
}

/* ref: FUN_009ee3e0 */
uint F_009ee3e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ee3e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined4, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ee410 */
uint F_009ee410(unsigned int gen_a0)
{
  GEN_ENTER(0x9ee410u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined4, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: Apricot::Engine::Data::Communicator::Timeline::vf1 */
uint F_009ee440(unsigned int gen_a0)
{
  GEN_ENTER(0x9ee440u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x24);
}

/* ref: Apricot::Engine::Data::Communicator::Timeline::vf2 */
uint F_009ee450(unsigned int gen_a0)
{
  GEN_ENTER(0x9ee450u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x28);
}

/* ref: Apricot::Engine::Data::Communicator::Timeline::vf4 */
uint F_009ee460(unsigned int gen_a0)
{
  GEN_ENTER(0x9ee460u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x2c);
}

/* ref: FUN_009ee470 */
uint F_009ee470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee470u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0xa4 + *in_ecx;
}

/* ref: FUN_009ee490 */
uint F_009ee490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee490u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x2a + *in_ecx;
}

/* ref: Apricot::Engine::Data::Communicator::Timeline::vf3 */
uint F_009ee4a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ee4a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (*(int *)(this + 0x18) - *(int *)(this + 0x14)) / 0x2a;
}

/* ref: Apricot::Engine::Data::Communicator::Timeline::vf5 */
uint F_009ee4c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee4c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x2a + *(int *)(in_ecx + 0x14);
}

/* ref: Apricot::Engine::Data::Communicator::Timeline::vf6 */
uint F_009ee4d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee4d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0xa4 + *(int *)(in_ecx + 4);
}

/* ref: FUN_009ee4f0 */
uint F_009ee4f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ee4f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 != 0) && (REFG(undefined4, 0x14a0a18) != (code *)0x0)) {
    uVar1 = ((code *)REFG(gen_code32, 0x14a0a18))(uVar1);
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  return uVar1;
}

/* ref: FUN_009ee560 */
uint F_009ee560(unsigned int gen_a0)
{
  GEN_ENTER(0x9ee560u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_009e9d00(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0xcf);
  return (uint)uVar1;
}

/* ref: FUN_009ee5e0 */
uint F_009ee5e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ee5e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  ulonglong uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  F_009e9dc0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),*(undefined4 * PTR32 *)((int)this + 4));
  uVar1 = F_00429760(*(undefined4 *)((int)this + 4),0x14,0xd0);
  return (uint)uVar1;
}

/* ref: FUN_009ee630 */
uint F_009ee630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  byte bVar1;
  uint uVar2;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  bVar1 = F_009e6740(this,(param_1[1] - *param_1) / 0x14);
  if (bVar1 != 0) {
    uVar2 = F_009e8fa0(*param_1,param_1[1],*(undefined4 *)this,(int)this + 0xc,param_1);
    *(uint *)((int)this + 4) = uVar2;
  }
  return (uint)this;
}

/* ref: FUN_009ee6a0 */
unsigned int F_009ee6a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee6a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009ed960(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009ed960(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_009ee720 */
uint F_009ee720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * in_EAX;
  int iVar1;
  undefined4 * puVar2;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar2) && (in_EAX = *(undefined4 * PTR32 *)this, in_EAX <= param_1)) {
    iVar1 = (int)param_1 - (int)in_EAX;
    in_EAX = (undefined4 *)(iVar1 * 0x63e7063f);
    if (puVar2 == *(undefined4 * PTR32 *)((int)this + 8)) {
      in_EAX = (undefined4 *)F_009ed9d0(this,1);
    }
    param_1 = ((undefined4 *)GEN_TOP(((iVar1 / 0xa4) * 0xa4 + *(int *)this)));
  }
  else if (puVar2 == *(undefined4 * PTR32 *)((int)this + 8)) {
    in_EAX = (undefined4 *)F_009ed9d0(this,1);
  }
  if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
    puVar2 = *(undefined4 * PTR32 *)((int)this + 4);
    for (iVar1 = 0x29; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *param_1;
      param_1 = param_1 + 1;
      puVar2 = puVar2 + 1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xa4;
  return (uint)in_EAX;
}

/* ref: FUN_009ee7a0 */
unsigned int F_009ee7a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee7a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)((int)this + 4);
  if ((param_1 < uVar1) && (uVar2 = *(uint *)this, uVar2 <= param_1)) {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_009eda60(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_009daf30(*(undefined * PTR32 *)((int)this + 4),((int)(param_1 - uVar2) / 0x2a) * 0x2a + *(int *)this);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x2a;
      return 0;
    }
  }
  else {
    if (uVar1 == *(uint *)((int)this + 8)) {
      F_009eda60(this,1);
    }
    if (*(undefined * PTR32 *)((int)this + 4) != (undefined *)0x0) {
      F_009daf30(*(undefined * PTR32 *)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x2a;
  return 0;
}

/* ref: FUN_009ee830 */
unsigned int F_009ee830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee830u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edaf0(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edaf0(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_009ee8a0 */
unsigned int F_009ee8a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee8a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edb60(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edb60(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_009ee910 */
unsigned int F_009ee910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee910u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edbd0(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edbd0(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_009ee980 */
unsigned int F_009ee980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edca0(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edca0(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_009ee9f0 */
unsigned int F_009ee9f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ee9f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edd10(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edd10(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_009eea60 */
unsigned int F_009eea60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9eea60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edd80(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009edd80(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_009eead0 */
unsigned int F_009eead0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9eead0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009eddf0(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009eddf0(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_009eeb40 */
unsigned int F_009eeb40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9eeb40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009ede60(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009ede60(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_009eebb0 */
uint F_009eebb0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9eebb0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int * param_3 = (int *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  piVar2 = param_2;
  if ((param_2 == ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 4)))) && (param_3 == *(int * PTR32 *)((int)this + 4))) {
    F_009edc40(this);
    *param_1 = **(undefined4 * PTR32 *)((int)this + 4);
    return (uint)param_1;
  }
  while (piVar2 != param_3) {
    param_2 = piVar2;
    if (*(char *)((int)piVar2 + 0x29) == '\0') {
      param_2 = (int *)piVar2[2];
      if (*(char *)((int)param_2 + 0x29) == '\0') {
        cVar1 = *(char *)(*param_2 + 0x29);
        piVar3 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0x29);
          param_2 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0x29);
        piVar4 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar3 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0x29);
          piVar4 = (int *)param_2[1];
          piVar3 = param_2;
        }
      }
    }
    F_009ec650(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),piVar2);
    piVar2 = param_2;
  }
  *param_1 = piVar2;
  return (uint)param_1;
}

/* ref: FUN_009eec50 */
uint F_009eec50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9eec50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(int *)((int)this + 4) - *(int *)((int)(uintptr_t)this) >> 2;
  if (-param_1 - 1U < uVar1) {
                    
    F_00c4579a("vector<T> too long");
  }
  uVar1 = uVar1 + param_1;
  uVar2 = *(int *)((int)this + 8) - *(int *)((int)(uintptr_t)this) >> 2;
  if (uVar2 < uVar1) {
    if (-(uVar2 >> 1) - 1 < uVar2) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1;
      }
      uVar1 = F_009eded0(this,uVar2);
      return uVar1;
    }
    uVar2 = uVar2 + (uVar2 >> 1);
    if (uVar2 < uVar1) {
      uVar2 = uVar1;
    }
    uVar1 = F_009eded0(this,uVar2);
  }
  return uVar1;
}

/* ref: FUN_009eecc0 */
unsigned int F_009eecc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9eecc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_009edfb0(param_1,param_2,param_2 - param_1 >> 3,param_3,param_4);
  return 0;
}

/* ref: FUN_009eecf0 */
unsigned int F_009eecf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9eecf0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  F_009ee0b0(param_1,param_2,param_2 - param_1 >> 3,param_3,param_4);
  return 0;
}

/* ref: FUN_009eed20 */
uint F_009eed20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0x9eed20u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  uint uVar1;
  
  uVar1 = F_009ee1b0(param_1,param_2,param_2 - param_1 >> 4,param_3,param_4,param_5,param_6);
  return uVar1;
}

/* ref: Apricot::Engine::Data::Communicator::Scheduler::vf0 */
uint F_009eed60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9eed60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  code * pcVar1;
  
  pcVar1 = REFG(undefined4, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10e0474));
  if ((*(int *)(this + 4) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(*(int *)(this + 4));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10dd320));
  if (((param_1 & 1) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::Timeline::vf0 */
uint F_009eedc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9eedc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  code * pcVar1;
  
  pcVar1 = REFG(undefined4, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10e048c));
  if ((*(int *)(this + 0x14) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(*(int *)(this + 0x14));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined4 *)(this + 0x1c) = 0;
  if ((*(int *)(this + 4) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(*(int *)(this + 4));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[7])REFP(0x10dd338));
  if (((param_1 & 1) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::ColorFunctionCurve::vf1 */
uint F_009eee30(void)
{
  GEN_ENTER(0x9eee30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::RgbFunctionCurve::vf0 */
uint F_009eee40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9eee40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  code * pcVar1;
  
  pcVar1 = REFG(undefined4, 0x14a0a18);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e04ac));
  if ((*(int *)(this + 4) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(*(int *)(this + 4));
    pcVar1 = REFG(undefined4, 0x14a0a18);
  }
  *(undefined4 *)(this + 4) = 0;
  *(undefined4 *)(this + 8) = 0;
  *(undefined4 *)(this + 0xc) = 0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10dd28c));
  if (((param_1 & 1) != 0) && (pcVar1 != (code *)0x0)) {
    (*pcVar1)(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::LineParticle::vf1 */
uint F_009eeea0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eeea0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::LineParticle::vf2 */
uint F_009eeeb0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eeeb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::LineParticle::vf3 */
uint F_009eeec0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eeec0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x90;
}

/* ref: Apricot::Engine::Data::Communicator::LineParticle::vf4 */
uint F_009eeed0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eeed0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x328;
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf1 */
uint F_009eeee0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eeee0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf2 */
uint F_009eeef0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eeef0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf3 */
uint F_009eef00(unsigned int gen_a0)
{
  GEN_ENTER(0x9eef00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf4 */
byte F_009eef10(unsigned int gen_a0)
{
  GEN_ENTER(0x9eef10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x20);
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf5 */
byte F_009eef20(unsigned int gen_a0)
{
  GEN_ENTER(0x9eef20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x21);
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf6 */
uint F_009eef30(unsigned int gen_a0)
{
  GEN_ENTER(0x9eef30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x28;
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf7 */
uint F_009eef40(unsigned int gen_a0)
{
  GEN_ENTER(0x9eef40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xb0;
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf8 */
uint F_009eef50(unsigned int gen_a0)
{
  GEN_ENTER(0x9eef50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x210;
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf9 */
uint F_009eef60(unsigned int gen_a0)
{
  GEN_ENTER(0x9eef60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x4a8;
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf10 */
uint F_009eef70(unsigned int gen_a0)
{
  GEN_ENTER(0x9eef70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x740;
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf11 */
uint F_009eef80(unsigned int gen_a0)
{
  GEN_ENTER(0x9eef80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x778;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf1 */
uint F_009eef90(unsigned int gen_a0)
{
  GEN_ENTER(0x9eef90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf2 */
uint F_009eefa0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eefa0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf3 */
uint F_009eefb0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eefb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf4 */
uint F_009eefc0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eefc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf5 */
uint F_009eefd0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eefd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf6 */
byte F_009eefe0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eefe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x18);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf7 */
byte F_009eeff0(unsigned int gen_a0)
{
  GEN_ENTER(0x9eeff0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x19);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf8 */
byte F_009ef000(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef000u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x1a);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf9 */
byte F_009ef010(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef010u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x1b);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf10 */
byte F_009ef020(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef020u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x1c);
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf11 */
uint F_009ef030(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef030u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf12 */
uint F_009ef040(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef040u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xa8;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf13 */
uint F_009ef050(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef050u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x130;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf14 */
uint F_009ef060(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef060u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1b8;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf15 */
uint F_009ef070(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef070u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x240;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf16 */
uint F_009ef080(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef080u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2c8;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf17 */
uint F_009ef090(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef090u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x3d8;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf18 */
uint F_009ef0a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef0a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x350;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf19 */
uint F_009ef0b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef0b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x410;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf20 */
uint F_009ef0c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef0c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x6a8;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf21 */
uint F_009ef0d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef0d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x940;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf22 */
uint F_009ef0e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef0e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xbd8;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf23 */
uint F_009ef0f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef0f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xe70;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf24 */
uint F_009ef100(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef100u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1108;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf1 */
uint F_009ef110(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef110u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf2 */
uint F_009ef120(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef120u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf3 */
uint F_009ef130(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef130u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf4 */
unsigned int F_009ef140(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef140u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf5 */
uint F_009ef150(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef150u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x18;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf6 */
uint F_009ef160(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef160u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xa0;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf7 */
uint F_009ef170(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef170u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x128;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf8 */
uint F_009ef180(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef180u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1b0;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf9 */
uint F_009ef190(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef190u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x238;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf10 */
uint F_009ef1a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef1a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2c0;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf11 */
uint F_009ef1b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef1b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x348;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf12 */
uint F_009ef1c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef1c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x3d0;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf13 */
uint F_009ef1d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef1d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x458;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf14 */
uint F_009ef1e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef1e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x4e0;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf15 */
uint F_009ef1f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef1f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x778;
}

/* ref: FUN_009ef200 */
unsigned int F_009ef200(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef200u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  pvVar1 = *(undefined * PTR32 *)this;
  if (pvVar1 != (undefined *)0x0) {
    F_009cfa70(pvVar1);
    F_00406ad0(pvVar1);
    *(undefined4 *)this = 0;
  }
  pvVar1 = *(undefined * PTR32 *)((int)this + 4);
  if (pvVar1 != (undefined *)0x0) {
    F_009cfa70(pvVar1);
    F_00406ad0(pvVar1);
    *(undefined4 *)((int)this + 4) = 0;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 8) = 0xe0000000;
  *(undefined4 *)((int)this + 0x14) = 0;
  return 0;
}

/* ref: FUN_009ef260 */
unsigned int F_009ef260(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)this;
  if (this_00 != (undefined *)0x0) {
    F_009cfa70(this_00);
    F_00406ad0(this_00);
    *(undefined4 *)this = 0;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 8) = 0xe0000000;
  return 0;
}

/* ref: Client::Graphics::Vfx::VfxData::vf0 */
uint F_009ef2a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ef2a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009cfb10(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009ef2d0 */
unsigned int F_009ef2d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ef2d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  
  puVar1 = *(undefined4 * PTR32 *)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 * PTR32 *)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009eec50(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) =
           *((undefined4 *)GEN_TOP((*(int *)this + ((int)param_1 - (int)((int)(uintptr_t)puVar2) >> 2) * 4)));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return 0;
    }
  }
  else {
    if (puVar1 == *(undefined4 * PTR32 *)((int)this + 8)) {
      F_009eec50(this,1);
    }
    if (*(undefined4 * PTR32 *)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 * PTR32 *)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return 0;
}

/* ref: FUN_009ef340 */
uint F_009ef340(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef340u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_009eebb0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  return uVar1;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf1 */
unsigned int F_009ef360(void)
{
  GEN_ENTER(0x9ef360u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf2 */
uint F_009ef370(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef370u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf3 */
uint F_009ef380(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef380u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf4 */
uint F_009ef390(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef390u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf5 */
uint F_009ef3a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef3a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf6 */
uint F_009ef3b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef3b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x25;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf7 */
uint F_009ef3c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef3c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x128);
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf8 */
uint F_009ef3d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef3d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf9 */
uint F_009ef3e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef3e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf10 */
uint F_009ef3f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef3f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf11 */
uint F_009ef400(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef400u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf12 */
uint F_009ef410(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef410u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x14c;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf13 */
uint F_009ef420(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef420u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x160;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf14 */
uint F_009ef430(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef430u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1e8;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf15 */
uint F_009ef440(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef440u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x270;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf16 */
uint F_009ef450(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef450u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2f8;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf17 */
uint F_009ef460(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef460u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x380;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf18 */
uint F_009ef470(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef470u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x618;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf19 */
uint F_009ef480(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef480u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x778;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf20 */
uint F_009ef490(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef490u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x8d8;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf21 */
uint F_009ef4a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef4a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xa38;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf22 */
uint F_009ef4b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef4b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xac0;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf23 */
uint F_009ef4c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef4c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xb48;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf24 */
uint F_009ef4d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef4d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xbd0;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf25 */
uint F_009ef4e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef4e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xc58;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf26 */
uint F_009ef4f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef4f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xce0;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf27 */
uint F_009ef500(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef500u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xd68;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf28 */
uint F_009ef510(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef510u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xd70;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf29 */
uint F_009ef520(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef520u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1130;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf30 */
uint F_009ef530(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef530u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1478;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf31 */
uint F_009ef540(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef540u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1738;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf32 */
uint F_009ef550(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef550u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1a80;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf35 */
byte F_009ef560(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef560u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x24);
}

/* ref: FUN_009ef590 */
uint F_009ef590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ef590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)this + param_1 * 0x44;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf33 */
uint F_009ef5b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (*(int *)(this + 0x130) - *(int *)(this + 300)) / 0x44;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf34 */
uint F_009ef5d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef5d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  return (*(int *)(this + 0x140) - *(int *)(this + 0x13c)) / 0x44;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf36 */
uint F_009ef5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ef5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)(this + 300) + param_1 * 0x44;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf37 */
uint F_009ef610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ef610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)(this + 0x13c) + param_1 * 0x44;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf63 */
uint F_009ef630(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef630u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf1 */
unsigned int F_009ef640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ef640u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf2 */
uint F_009ef650(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef650u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x68;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf3 */
uint F_009ef660(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef660u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x78;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf4 */
uint F_009ef670(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef670u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x100;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf5 */
uint F_009ef680(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef680u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x188;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf6 */
uint F_009ef690(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef690u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x420;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf7 */
uint F_009ef6a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef6a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x580;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf8 */
uint F_009ef6b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef6b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x6e0;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf9 */
uint F_009ef6c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef6c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x840;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf10 */
uint F_009ef6d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef6d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x8c8;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf11 */
uint F_009ef6e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef6e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x950;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf12 */
uint F_009ef6f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef6f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf13 */
uint F_009ef700(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef700u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf14 */
uint F_009ef710(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef710u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf15 */
uint F_009ef720(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef720u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf16 */
uint F_009ef730(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef730u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf17 */
uint F_009ef740(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef740u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x1c);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf18 */
unsigned int F_009ef750(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef750u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf19 */
unsigned int F_009ef760(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef760u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf20 */
unsigned int F_009ef770(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef770u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf21 */
unsigned int F_009ef780(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef780u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf22 */
byte F_009ef790(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef790u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x36);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf23 */
byte F_009ef7a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef7a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x37);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf24 */
uint F_009ef7b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef7b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 100);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf25 */
unsigned int F_009ef7c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef7c0u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf26 */
uint F_009ef7d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef7d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x28);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf27 */
byte F_009ef7e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef7e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x30);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf28 */
byte F_009ef7f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef7f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x31);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf29 */
byte F_009ef800(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef800u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x32);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf30 */
byte F_009ef810(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef810u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x33);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf31 */
byte F_009ef820(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef820u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x34);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf32 */
uint F_009ef830(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef830u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x38);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf33 */
uint F_009ef840(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef840u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x4c);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf34 */
uint F_009ef850(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef850u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x50);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf35 */
uint F_009ef860(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef860u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x54);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf36 */
uint F_009ef870(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef870u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x20);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf37 */
uint F_009ef880(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef880u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x58);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf38 */
uint F_009ef890(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef890u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x24);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf39 */
uint F_009ef8a0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef8a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x5c);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf40 */
uint F_009ef8b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef8b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x60);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf41 */
byte F_009ef8c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef8c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x35);
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf42 */
uint F_009ef8d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef8d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x9d8;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf43 */
uint F_009ef8e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef8e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xf98;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf44 */
uint F_009ef8f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef8f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xfa8;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf45 */
uint F_009ef900(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef900u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xfb0;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf46 */
uint F_009ef910(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef910u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xfb8;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf47 */
uint F_009ef920(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef920u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1048;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf48 */
uint F_009ef930(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef930u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1160;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf49 */
uint F_009ef940(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef940u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2500;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf50 */
uint F_009ef950(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef950u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2cb0;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf51 */
uint F_009ef960(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef960u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2cb8;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf52 */
uint F_009ef970(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef970u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2cc0;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf53 */
uint F_009ef980(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef980u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2d58;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf54 */
uint F_009ef990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9ef990u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x270 + 0x3768 + in_ecx;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf55 */
uint F_009ef9b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef9b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x4128;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf56 */
uint F_009ef9c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef9c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x41e0;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf57 */
uint F_009ef9d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef9d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x4210;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf58 */
uint F_009ef9e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef9e0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x4270;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf59 */
uint F_009ef9f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9ef9f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x42c8;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf60 */
uint F_009efa00(unsigned int gen_a0)
{
  GEN_ENTER(0x9efa00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x4330;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf61 */
uint F_009efa10(unsigned int gen_a0)
{
  GEN_ENTER(0x9efa10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x438c;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf62 */
uint F_009efa20(unsigned int gen_a0)
{
  GEN_ENTER(0x9efa20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x445c;
}

/* ref: Apricot::Engine::Data::Communicator::DirectionalLightEffector::vf1 */
uint F_009efa30(unsigned int gen_a0)
{
  GEN_ENTER(0x9efa30u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::DirectionalLightEffector::vf2 */
uint F_009efa40(unsigned int gen_a0)
{
  GEN_ENTER(0x9efa40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2a0;
}

/* ref: Apricot::Engine::Data::Communicator::DirectionalLightEffector::vf3 */
uint F_009efa50(unsigned int gen_a0)
{
  GEN_ENTER(0x9efa50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x538;
}

/* ref: Apricot::Engine::Data::Communicator::DirectionalLightEffector::vf4 */
uint F_009efa60(unsigned int gen_a0)
{
  GEN_ENTER(0x9efa60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x5c0;
}

/* ref: Apricot::Engine::Data::Communicator::PointLightEffector::vf1 */
uint F_009efa70(unsigned int gen_a0)
{
  GEN_ENTER(0x9efa70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 8;
}

/* ref: Apricot::Engine::Data::Communicator::PointLightEffector::vf2 */
uint F_009efa80(unsigned int gen_a0)
{
  GEN_ENTER(0x9efa80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2a0;
}

/* ref: Apricot::Engine::Data::Communicator::PointLightEffector::vf3 */
uint F_009efa90(unsigned int gen_a0)
{
  GEN_ENTER(0x9efa90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x2d8;
}

/* ref: Apricot::Engine::Data::Communicator::PointLightEffector::vf4 */
uint F_009efaa0(unsigned int gen_a0)
{
  GEN_ENTER(0x9efaa0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x438;
}

/* ref: Apricot::Engine::Data::Communicator::PointLightEffector::vf5 */
uint F_009efab0(unsigned int gen_a0)
{
  GEN_ENTER(0x9efab0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x598);
}

/* ref: Apricot::Engine::Data::Communicator::PointLightEffector::vf6 */
byte F_009efac0(unsigned int gen_a0)
{
  GEN_ENTER(0x9efac0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x59c);
}

/* ref: Apricot::Engine::Data::Communicator::PointLightEffector::vf7 */
byte F_009efad0(unsigned int gen_a0)
{
  GEN_ENTER(0x9efad0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x59d);
}

/* ref: Apricot::Engine::Data::Communicator::PointLightEffector::vf8 */
byte F_009efae0(unsigned int gen_a0)
{
  GEN_ENTER(0x9efae0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x59e);
}

/* ref: Apricot::Engine::Data::Communicator::PointLightEffector::vf9 */
byte F_009efaf0(unsigned int gen_a0)
{
  GEN_ENTER(0x9efaf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x59f);
}

/* ref: Apricot::Engine::Data::Communicator::PointLightEffector::vf10 */
unsigned int F_009efb00(unsigned int gen_a0)
{
  GEN_ENTER(0x9efb00u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::PointLightEffector::vf11 */
unsigned int F_009efb10(unsigned int gen_a0)
{
  GEN_ENTER(0x9efb10u, gen_a0, 0u, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  return 0;
}

/* ref: Apricot::Engine::Data::Communicator::ColorFunctionCurve::vf0 */
uint F_009efb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9efb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009d2ce0(this);
  if ((((param_1 & 1) != 0) && (REFG(undefined4, 0x14a0a18) != (code *)0x0)) && (this != (undefined *)0x0)
     ) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::LineParticle::vf0 */
uint F_009efb50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9efb50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009d2f70(this);
  if ((((param_1 & 1) != 0) && (REFG(undefined4, 0x14a0a18) != (code *)0x0)) && (this != (undefined *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::ModelParticle::vf0 */
uint F_009efb80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9efb80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009d2ff0(this);
  if ((((param_1 & 1) != 0) && (REFG(undefined4, 0x14a0a18) != (code *)0x0)) && (this != (undefined *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::PolyLineParticle::vf0 */
uint F_009efbb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9efbb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009d30f0(this);
  if ((((param_1 & 1) != 0) && (REFG(undefined4, 0x14a0a18) != (code *)0x0)) && (this != (undefined *)0x0))
  {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::DiscParticle::vf0 */
uint F_009efbe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9efbe0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009d33f0(this);
  if ((((param_1 & 1) != 0) && (REFG(undefined4, 0x14a0a18) != (code *)0x0)) && (this != (undefined *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: FUN_009efc10 */
uint F_009efc10(unsigned int gen_a0)
{
  GEN_ENTER(0x9efc10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_009eebb0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = F_00406810(*(int *)((int)this + 4));
  }
  return uVar1;
}

/* ref: Apricot::Engine::Data::Communicator::Effector::vf1 */
uint F_009efc40(unsigned int gen_a0)
{
  GEN_ENTER(0x9efc40u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 4);
}

/* ref: Apricot::Engine::Data::Communicator::Effector::vf2 */
uint F_009efc50(unsigned int gen_a0)
{
  GEN_ENTER(0x9efc50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 8);
}

/* ref: Apricot::Engine::Data::Communicator::Effector::vf3 */
uint F_009efc60(unsigned int gen_a0)
{
  GEN_ENTER(0x9efc60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xc);
}

/* ref: Apricot::Engine::Data::Communicator::Effector::vf4 */
byte F_009efc70(unsigned int gen_a0)
{
  GEN_ENTER(0x9efc70u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x10);
}

/* ref: Apricot::Engine::Data::Communicator::Effector::vf5 */
byte F_009efc80(unsigned int gen_a0)
{
  GEN_ENTER(0x9efc80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x11);
}

/* ref: Apricot::Engine::Data::Communicator::Effector::vf6 */
uint F_009efc90(unsigned int gen_a0)
{
  GEN_ENTER(0x9efc90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x14);
}

/* ref: Apricot::Engine::Data::Communicator::Effector::vf7 */
uint F_009efca0(unsigned int gen_a0)
{
  GEN_ENTER(0x9efca0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x18);
}

/* ref: Apricot::Engine::Data::Communicator::Effector::vf8 */
uint F_009efcb0(unsigned int gen_a0)
{
  GEN_ENTER(0x9efcb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x20;
}

/* ref: Apricot::Engine::Data::Communicator::Effector::vf9 */
uint F_009efcc0(unsigned int gen_a0)
{
  GEN_ENTER(0x9efcc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x5c8;
}

/* ref: Apricot::Engine::Data::Communicator::Effector::vf10 */
uint F_009efcd0(unsigned int gen_a0)
{
  GEN_ENTER(0x9efcd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xce8;
}

/* ref: Apricot::Engine::Data::Communicator::Effector::vf11 */
uint F_009efce0(unsigned int gen_a0)
{
  GEN_ENTER(0x9efce0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0xe10;
}

/* ref: Apricot::Engine::Data::Communicator::Effector::vf12 */
uint F_009efcf0(unsigned int gen_a0)
{
  GEN_ENTER(0x9efcf0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x1380;
}

/* ref: Apricot::Engine::Data::Communicator::Emitter::vf0 */
uint F_009efd00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9efd00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009d5500(this);
  if ((((param_1 & 1) != 0) && (REFG(undefined4, 0x14a0a18) != (code *)0x0)) && (this != (undefined *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::Particle::vf0 */
uint F_009efd30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9efd30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009d59a0(this);
  if ((((param_1 & 1) != 0) && (REFG(undefined4, 0x14a0a18) != (code *)0x0)) && (this != (undefined *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::DirectionalLightEffector::vf0 */
uint F_009efd60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9efd60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009d5ce0(this);
  if ((((param_1 & 1) != 0) && (REFG(undefined4, 0x14a0a18) != (code *)0x0)) &&
     (this != (undefined *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::PointLightEffector::vf0 */
uint F_009efd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9efd90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009d5d80(this);
  if ((((param_1 & 1) != 0) && (REFG(undefined4, 0x14a0a18) != (code *)0x0)) && (this != (undefined *)0x0)
     ) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: FUN_009efdc0 */
uint F_009efdc0(unsigned int gen_a0)
{
  GEN_ENTER(0x9efdc0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_009eebb0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = F_00406810(*(int *)((int)this + 4));
  }
  return uVar1;
}

/* ref: FUN_009efdf0 */
uint F_009efdf0(unsigned int gen_a0)
{
  GEN_ENTER(0x9efdf0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  uint uVar1;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  uVar1 = F_009eebb0(this,&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 4),
                       *(undefined4 * PTR32 *)((int)this + 4));
  if (*(int *)((int)this + 4) != 0) {
    uVar1 = F_00406810(*(int *)((int)this + 4));
  }
  return uVar1;
}

/* ref: FUN_009efe20 */
uint F_009efe20(unsigned int gen_a0)
{
  GEN_ENTER(0x9efe20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 8) = 0;
  piVar1 = (int *)F_00404230();
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,0x2c,4);
  *(uint *)((int)this + 4) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x28))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x29))) = 1;
  return (uint)this;
}

/* ref: Apricot::Engine::Data::Communicator::Effector::vf0 */
uint F_009efe60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9efe60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x10e07f4));
  F_00995890(this + 0x1380);
  F_00995690(this + 0xe10);
  F_00985ee0(this + 0xce8);
  F_009d5ce0(this + 0x5c8);
  F_009d5d80(this + 0x20);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[13])REFP(0x10dd92c));
  if (((param_1 & 1) != 0) && (REFG(undefined4, 0x14a0a18) != (code *)0x0)) {
    ((code *)REFG(gen_code32, 0x14a0a18))(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::TimelineInstance::vf8 */
uint F_009efed0(void)
{
  GEN_ENTER(0x9efed0u, 0u, 0u, 0u, 0u);
  return 3;
}

/* ref: Apricot::Engine::Instance::TimelineInstance::vf4 */
uint F_009efee0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x9efee0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d8) + 0x10))))
                    (*(int * PTR32 *)(this + 0x1d8),param_1,param_2,param_3,param_4,param_5,param_6,param_7
                     ,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::TimelineInstance::vf0 */
uint F_009efef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9efef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[31])REFP(0x10dde84));
  puVar2 = *(undefined4 * PTR32 *)(this + 0x1e0);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[0x7a];
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    puVar2 = puVar1;
  }
  if ((param_1 & 1) != 0) {
    uVar3 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar3 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar3;
  }
  return (uint)this;
}

/* ref: FUN_009eff60 */
uint F_009eff60(unsigned int gen_a0)
{
  GEN_ENTER(0x9eff60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  *(undefined4 *)((int)this + 8) = 0;
  piVar1 = (int *)F_00404230();
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))(piVar1,0x2c,4);
  *(uint *)((int)this + 4) = uVar2;
  *(uint *)uVar2 = uVar2;
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 4))) = *(int *)((int)this + 4);
  *((int *)GEN_TOP((*(int *)((int)this + 4) + 8))) = *(int *)((int)this + 4);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x28))) = 1;
  *((undefined1 *)GEN_TOP((*(int *)((int)this + 4) + 0x29))) = 1;
  return (uint)this;
}

/* ref: Apricot::ApricotDeviceListenner::vf0 */
uint F_009effa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9effa0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_009d6f50(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Apricot::Engine::Instance::SchedulerInstance::vf8 */
uint F_009effd0(void)
{
  GEN_ENTER(0x9effd0u, 0u, 0u, 0u, 0u);
  return 2;
}

/* ref: Apricot::Engine::Instance::SchedulerInstance::vf4 */
uint F_009effe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8)
{
  GEN_ENTER(0x9effe0u, gen_a0, gen_a1, gen_a2, gen_a3);
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
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1d4) + 0x10))))
                    (*(int * PTR32 *)(this + 0x1d4),param_1,param_2,param_3,param_4,param_5,param_6,param_7
                     ,param_8);
  return uVar1;
}

/* ref: Apricot::Engine::Instance::SchedulerInstance::vf0 */
uint F_009f0000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 * puVar1;
  undefined4 * puVar2;
  uint uVar3;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[31])REFP(0x10dde84));
  puVar2 = *(undefined4 * PTR32 *)(this + 0x1e0);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)puVar2[0x7a];
    ((code *)*(gen_code32 *)*puVar2)(puVar2,1);
    puVar2 = puVar1;
  }
  if ((param_1 & 1) != 0) {
    uVar3 = (uint)((int)this - REFG(int, 0x14a09f4)) >> 10;
    *(uint *)(uVar3 * 0x400 + REFG(int, 0x14a09f4)) = REFG(undefined4, 0x14a09e8);
    REFG(int, 0x14a09f0) = REFG(int, 0x14a09f0) + 1;
    REFG(undefined4, 0x14a09e8) = uVar3;
  }
  return (uint)this;
}

/* ref: FUN_009f0070 */
uint F_009f0070(unsigned int gen_a0)
{
  GEN_ENTER(0x9f0070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10e0ba4));
  if (*(int *)((int)this + 4) != 0) {
    F_0050c620(*(int *)((int)this + 4),0,0);
  }
  if (*(int *)((int)this + 0xc) != 0) {
    F_00406ad0(*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  uVar1 = F_005095f0(this);
  return uVar1;
}

/* ref: FUN_009f00b0 */
byte F_009f00b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f00b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 4) == 0;
}

/* ref: FUN_009f00c0 */
uint F_009f00c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f00c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  if (param_1 == 0) {
    *(undefined4 *)((int)this + 8) = 0;
  }
  else {
    (*(undefined2 *)(gen_frame + 0x10)) = 0x3f;
    (*(undefined2 *)(gen_frame + 0x14)) = 1;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    uVar1 = F_00bb85a0(param_1,&(*(undefined4 *)(gen_frame + 0xc)),param_2);
    *(uint *)((int)this + 8) = uVar1;
    if (uVar1 != 0) {
      F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return 0;
}

/* ref: Client::System::Text::VulgarManager::vf3 */
uint F_009f0140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0140u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  int iVar3;
  
  (*(uint *)(gen_frame + 0x18)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x1c);
  iVar1 = param_1[7];
  uVar2 = F_00406bb0(iVar1,0,0);
  *(uint *)(this + 0xc) = uVar2;
  iVar3 = iVar1;
  uVar2 = ((code *)*(gen_code32 *)(*param_1 + 0x5c))(iVar1);
  F_00c46aa0(*(undefined4 *)(this + 0xc),uVar2,iVar3);
  if (*(int *)(this + 0xc) == 0) {
    *(undefined4 *)(this + 8) = 0;
  }
  else {
    (*(undefined2 *)(gen_frame + 0x10)) = 0x3f;
    (*(undefined2 *)(gen_frame + 0x14)) = 1;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    uVar2 = F_00bb85a0(*(int *)(this + 0xc),&(*(undefined4 *)(gen_frame + 0xc)),iVar1);
    *(uint *)(this + 8) = uVar2;
    if (uVar2 != 0) goto LAB_009f01cd;
  }
  if (*(int *)(this + 0xc) != 0) {
    F_00406ad0(*(int *)(this + 0xc));
    *(undefined4 *)(this + 0xc) = 0;
  }
LAB_009f01cd: ;
  uVar2 = F_0050c620(*(undefined4 *)(this + 4),0,0);
  *(undefined4 *)(this + 4) = 0;
  F_00c47745((*(uint *)(gen_frame + 0x18)) ^ (uint)(uint)(gen_frame + 0x1c));
  return uVar2;
}

/* ref: FUN_009f0200 */
unsigned int F_009f0200(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0200u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = F_0042b790(param_1);
    uVar2 = F_0042a990(param_1);
    F_00bb8410(*(undefined4 *)((int)this + 8),uVar2,uVar1);
  }
  return 0;
}

/* ref: FUN_009f0240 */
byte F_009f0240(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0240u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = F_0042b790(param_1);
    uVar2 = F_0042a990(param_1);
    uVar1 = F_00bb80b0(*(undefined4 *)((int)this + 8),uVar2,uVar1);
    if (uVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_009f0290 */
uint F_009f0290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = F_0042b790(param_1);
    uVar2 = F_0042a990(param_1);
    uVar1 = F_00bb8130(*(undefined4 *)((int)this + 8),uVar2,uVar1);
    if (uVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_009f02e0 */
uint F_009f02e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f02e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = F_0042b790(param_1);
    uVar2 = F_0042a990(param_1);
    uVar1 = F_00bb81b0(*(undefined4 *)((int)this + 8),uVar2,uVar1);
    if (uVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_009f0330 */
uint F_009f0330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0330u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = F_0042b790(param_1);
    uVar2 = F_0042a990(param_1);
    uVar1 = F_00bb8030(*(undefined4 *)((int)this + 8),uVar2,uVar1);
    if (uVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_009f0380 */
uint F_009f0380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 8) != 0) {
    uVar1 = F_0042b790(param_1);
    uVar2 = F_0042a990(param_1);
    uVar1 = F_00bb84f0(*(undefined4 *)((int)this + 8),uVar2,uVar1);
    if (uVar1 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_009f03d0 */
uint F_009f03d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f03d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  uint uVar1;
  undefined4 * puVar2;
  char * pcVar3;
  undefined * PTR32 * ppvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  F_00509590(this);
  uVar6 = 0;
  uVar5 = 0;
  ppvVar4 = &(*(undefined * PTR32 *)(gen_frame + 0xc));
  pcVar3 = "common/VulgarWordsFilter.dic";
  puVar2 = &(*(undefined4 *)(gen_frame + 0x38));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10e0ba4));
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x18)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  (*(undefined4 *)(gen_frame + 0x1c)) = 5;
  (*(undefined4 *)(gen_frame + 0x29)) = 0x101;
  (*(undefined2 *)(gen_frame + 0x2d)) = 0;
  (*(undefined4 *)(gen_frame + 0x30)) = 0;
  (*(undefined * PTR32 *)(gen_frame + 0xc)) = this;
  (*(undefined1 *)(gen_frame + 0x20)) = 0xff;
  (*(undefined4 *)(gen_frame + 0x24)) = 5000;
  (*(undefined1 *)(gen_frame + 0x28)) = 0;
  (*(undefined4 *)(gen_frame + 0x38)) = 0x646963;
  uVar1 = F_004ff310(((undefined1 *)(gen_frame + 0x34)),0,0);
  uVar1 = F_00513d20(uVar1,puVar2,pcVar3,ppvVar4,uVar5,uVar6);
  *(uint *)((int)this + 4) = uVar1;
  return (uint)this;
}

/* ref: Client::System::Text::VulgarManager::vf0 */
uint F_009f0450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[5])REFP(0x10e0ba4));
  if (*(int *)(this + 4) != 0) {
    F_0050c620(*(int *)(this + 4),0,0);
  }
  if (*(int *)(this + 0xc) != 0) {
    F_00406ad0(*(int *)(this + 0xc));
    *(undefined4 *)(this + 0xc) = 0;
  }
  F_005095f0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_009f0500 */
unsigned int F_009f0500(void)
{
  GEN_ENTER(0x9f0500u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_009f0510 */
uint F_009f0510(unsigned int gen_a0)
{
  GEN_ENTER(0x9f0510u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return (&REFG(undefined4, 0x14a2420))[param_1];
}

/* ref: FUN_009f0520 */
uint F_009f0520(void)
{
  GEN_ENTER(0x9f0520u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x14a242c);
}

/* ref: FUN_009f0530 */
uint F_009f0530(void)
{
  GEN_ENTER(0x9f0530u, 0u, 0u, 0u, 0u);
  return REFG(undefined4, 0x14a2430);
}

/* ref: FUN_009f0540 */
unsigned int F_009f0540(unsigned int gen_a0)
{
  GEN_ENTER(0x9f0540u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int * piVar1;
  
  if ((char)param_1 != '\0') {
    piVar1 = (int *)F_00d9b8f0();
    ((code *)*(gen_code32 *)(*piVar1 + 0x34))
              (piVar1,*((undefined4 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1bc))));
    ((code *)*(gen_code32 *)(*piVar1 + 0x38))(piVar1);
    *(ushort *)&REFG(undefined, 0x14a2428) = 0x101;
    return 0;
  }
  if (REFG(char, 0x14a2429) != '\0') {
    piVar1 = (int *)F_00d9b8f0();
    ((code *)*(gen_code32 *)(*piVar1 + 0x34))
              (piVar1,*((undefined4 *)GEN_TOP((*(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4) + 0x1bc))));
    *(ushort *)&REFG(undefined, 0x14a2428) = *(ushort *)&REFG(undefined, 0x14a2428) & 0xff;
  }
  return 0;
}

/* ref: Client::Graphics::Animation::AnimationController::vf3 */
uint F_009f05e0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f05e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  undefined * pAVar3;
  
  pAVar3 = this + 0xc;
  iVar2 = 4;
  do {
    if (*(int *)pAVar3 != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)pAVar3 + 0x18))))(*(int * PTR32 *)pAVar3,this);
    }
    pAVar3 = pAVar3 + 4;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  uVar1 = F_004f4050((undefined *)this);
  return uVar1;
}

/* ref: FUN_009f0610 */
uint F_009f0610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x20) = param_1;
  uVar1 = F_00513f60(param_1,0,0);
  return uVar1;
}

/* ref: FUN_009f0650 */
uint F_009f0650(unsigned int gen_a0)
{
  GEN_ENTER(0x9f0650u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)this != 0) {
    uVar1 = F_0050c620(*(int *)this,0,0);
    *(undefined4 *)this = 0;
  }
  return uVar1;
}

/* ref: FUN_009f0670 */
uint F_009f0670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (*(int *)this != 0) {
    F_0050c620(*(int *)this,0,0);
    *(undefined4 *)this = 0;
  }
  *(int *)this = param_1;
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00513f60(param_1,0,0);
  }
  return uVar1;
}

/* ref: FUN_009f06b0 */
uint F_009f06b0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f06b0u, gen_a0, 0u, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  int * piVar1;
  
  piVar1 = *(int * PTR32 *)(param_1 + 0xb4 + param_3 * 4);
  if (piVar1 != (int *)0x0) {
    param_3 = ((code *)*(gen_code32 *)(*piVar1 + 0xc))((undefined4)gen_fl2bits(param_2));
  }
  return param_3;
}

/* ref: FUN_009f06f0 */
uint F_009f06f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f06f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0xe8) != 0) {
    F_0050c620(*(int *)((int)this + 0xe8),0,0);
    *(undefined4 *)((int)this + 0xe8) = 0;
  }
  *(int *)((int)this + 0xe8) = param_1;
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00513f60(param_1,0,0);
  }
  return uVar1;
}

/* ref: FUN_009f0740 */
uint F_009f0740(unsigned int gen_a0)
{
  GEN_ENTER(0x9f0740u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xe8);
}

/* ref: FUN_009f0750 */
uint F_009f0750(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0750u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0xec) != 0) {
    F_0050c620(*(int *)((int)this + 0xec),0,0);
    *(undefined4 *)((int)this + 0xec) = 0;
  }
  *(int *)((int)this + 0xec) = param_1;
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = F_00513f60(param_1,0,0);
  }
  return uVar1;
}

/* ref: FUN_009f07a0 */
uint F_009f07a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f07a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(uint *)((int)this + 4) =
       *(uint *)((int)this + 4) ^ (param_1 * 4 ^ *(uint *)((int)this + 4)) & 0x3c;
  return param_1;
}

/* ref: FUN_009f07d0 */
uint F_009f07d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f07d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) | 1;
  *(uint *)((int)this + 8) = param_1;
  *(undefined4 *)((int)this + 0xc) = param_2;
  return param_1;
}

/* ref: FUN_009f0800 */
uint F_009f0800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0800u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xcc) = param_2;
  return param_2;
}

/* ref: FUN_009f0890 */
uint F_009f0890(unsigned int gen_a0)
{
  GEN_ENTER(0x9f0890u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 0;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_009f08b0 */
uint F_009f08b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9f08b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined4 *)((int)this + 0x18) = param_3;
  *(uint *)((int)this + 0x10) = param_1;
  return param_1;
}

/* ref: FUN_009f08d0 */
uint F_009f08d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f08d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if ((code *)*(gen_code32 *)((int)this + 0x18) != (code *)0x0) {
    uVar1 = ((code *)*(gen_code32 *)((int)this + 0x18))(*(undefined4 *)((int)this + 0x10));
  }
  return uVar1;
}

/* ref: FUN_009f08e0 */
uint F_009f08e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f08e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_009f0900 */
uint F_009f0900(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0900u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  *(undefined1 *)(in_ecx + 0x20 + param_2 * 0x30) = 0;
  return param_2 * 6;
}

/* ref: FUN_009f0920 */
byte F_009f0920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0920u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(byte *)(in_ecx + 0x20 + param_2 * 0x30);
}

/* ref: FUN_009f0940 */
uint F_009f0940(unsigned int gen_a0)
{
  GEN_ENTER(0x9f0940u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if (((*(short *)(param_1 + 4) != -1) && (*(short *)(param_1 + 6) != -1)) &&
     (*(short *)(param_1 + 8) != -1)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009f0980 */
uint F_009f0980(unsigned int gen_a0)
{
  GEN_ENTER(0x9f0980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar2 = 0;
  if (*(int *)((int)this + 8) != 0) {
    do {
      if (*((int *)GEN_TOP((*(int *)((int)this + 0xc) + uVar2 * 4))) != 0) {
        puVar1 = *((undefined4 * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + uVar2 * 4)));
        if (puVar1 != (undefined4 *)0x0) {
          ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
        }
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + uVar2 * 4))) = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((int)this + 8));
  }
  uVar2 = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    uVar3 = F_00406b30(*(int *)((int)this + 0xc));
    uVar2 = (uint)uVar3;
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  *(undefined4 *)((int)this + 8) = 0;
  return uVar2;
}

/* ref: FUN_009f09e0 */
uint F_009f09e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f09e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined1 *)this = (undefined1)param_1;
  *(undefined1 *)((int)this + 1) = (undefined1)param_2;
  return (uint)this;
}

/* ref: FUN_009f0a00 */
byte F_009f0a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0a00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short * param_1 = (short *)(uintptr_t)gen_a1;
  return *(short *)this == *param_1;
}

/* ref: FUN_009f0a50 */
uint F_009f0a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return (uint)*(byte *)(param_1 + 1);
}

/* ref: FUN_009f0a70 */
uint F_009f0a70(unsigned int gen_a0)
{
  GEN_ENTER(0x9f0a70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x58) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x58),0,0);
    *(undefined4 *)((int)this + 0x58) = 0;
  }
  return uVar1;
}

/* ref: FUN_009f0a90 */
uint F_009f0a90(unsigned int gen_a0)
{
  GEN_ENTER(0x9f0a90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)((int)this + 0x5c) != 0) {
    uVar1 = F_0050c620(*(int *)((int)this + 0x5c),0,0);
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  return uVar1;
}

/* ref: FUN_009f0ab0 */
uint F_009f0ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0ab0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x5c) != (undefined *)0x0) {
    uVar1 = F_00503790(*(undefined * PTR32 *)((int)this + 0x5c),param_1);
    return uVar1;
  }
  return 0;
}

/* ref: FUN_009f0ad0 */
uint F_009f0ad0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f0ad0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  *in_ecx = 5;
  in_ecx[1] = 0;
  *(undefined2 *)(in_ecx + 2) = 0x100;
  return (uint)in_ecx;
}

/* ref: FUN_009f0af0 */
uint F_009f0af0(float gen_a0)
{
  GEN_ENTER(0x9f0af0u, 0u, 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a06680(param_1,1);
  return uVar1;
}

/* ref: FUN_009f0b10 */
unsigned int F_009f0b10(unsigned int gen_a0)
{
  GEN_ENTER(0x9f0b10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 8) = 0;
  return 0;
}

/* ref: FUN_009f0b80 */
uint F_009f0b80(void)
{
  GEN_ENTER(0x9f0b80u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  if (0 < *(int *)((int)REFG(undefined4, 0x15e3734) + 0x10)) {
    F_00dedd90(REFG(undefined4, 0x15e3734));
  }
  F_00dcde20();
  F_00dc8d30();
  uVar1 = F_00dc79e0();
  return uVar1;
}

/* ref: FUN_009f0ba0 */
uint F_009f0ba0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9f0ba0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  int iVar1;
  uint uVar2;
  bool bVar3;
  float10 fVar4;
  
  iVar1 = *(int *)(in_ecx + 0x1c);
  if ((*(int *)(iVar1 + 0x78) == 0) || (*(int *)(iVar1 + 0x78) == 1)) {
    *(float *)(iVar1 + 0x74) = ((float)GEN_TOF(((float10)1 - (float10)*(float *)(iVar1 + 0x74))));
  }
  if (REFG(float, 0x10905c4) < param_2) {
    fVar4 = (float10)1 / (float10)param_2;
  }
  else {
    fVar4 = (float10)REFG(double, 0x10e1668);
  }
  *(float *)(iVar1 + 0x70) = (float)fVar4;
  bVar3 = GEN_ISNAN(*(float *)(iVar1 + 0x74)) || GEN_ISNAN(REFG(float, 0x1087f04));
  uVar2 = 3;
  if (bVar3 == (bVar3 || *(float *)(iVar1 + 0x74) == REFG(float, 0x1087f04))) {
    uVar2 = 2;
  }
  *(uint *)(iVar1 + 0x78) = uVar2;
  return uVar2;
}

/* ref: FUN_009f0c00 */
unsigned int F_009f0c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float fVar1;
  int iVar2;
  ushort local_c;
  
  if (*(char *)((int)this + 0x2a) != '\0') {
    iVar2 = *(int *)((int)this + 0x1c);
    local_c = (ushort)(int)TRUNC((float10)*(float *)(iVar2 + 8) * (float10)*(double *)&REFG(undefined, 0x1088070))
    ;
    if (*(ushort *)((int)this + 0x28) <= local_c) {
      fVar1 = ((float)GEN_TOF(((float10)*(ushort *)((int)this + 0x28) / (float10)*(double *)&REFG(undefined, 0x1088070))));
      *(float *)(iVar2 + 0x7c) = fVar1;
      if ((float10)*(float *)(iVar2 + 8) < (float10)fVar1) {
        *(float *)(iVar2 + 8) = fVar1;
      }
      *(undefined1 *)((int)this + 0x2a) = 0;
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_009f0d30 */
uint F_009f0d30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0d30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *((uint *)GEN_TOP((*((int *)GEN_TOP((**(int * PTR32 *)((int)this + 0xbc) + 0x18))) + param_1 * 8))) & 0xfffffffe;
}

/* ref: FUN_009f0d50 */
uint F_009f0d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0d50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (uint)(*((ushort *)GEN_TOP((*(int *)(param_2 + 0x24) + 0xc))) <
               *((ushort *)GEN_TOP((*(int *)(param_1 + 0x24) + 0xc))));
}

/* ref: FUN_009f0d70 */
ushort F_009f0d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0d70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return *((ushort *)GEN_TOP((*((int *)GEN_TOP((**(int * PTR32 *)((int)this + 0xbc) + 0xc))) + (short)param_1 * 2)));
}

/* ref: FUN_009f0d90 */
uint F_009f0d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f0d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  if (*(int *)((int)this + 4) != 0) {
    iVar5 = 0;
    do {
      if (param_2 == 0) {
        iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4)));
        if (*(int *)(iVar1 + 0x34 + iVar5) != 0) {
          uVar3 = *(uint *)(iVar1 + 0x40 + iVar5);
LAB_009f0ddc: ;
          if (uVar3 != 0) {
            return uVar3;
          }
        }
      }
      else if (param_2 == 1) {
        iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_1 * 4)));
        iVar2 = *(int *)(iVar1 + 0x34 + iVar5);
        if (iVar2 != 0) {
          uVar3 = iVar2 * 0x60 + -0x60 + *(int *)(iVar1 + 0x40 + iVar5);
          goto LAB_009f0ddc;
        }
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x50;
    } while (uVar4 < *(uint *)((int)this + 4));
  }
  return 0;
}

/* ref: FUN_009f0e00 */
uint F_009f0e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f0e00u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x60];
  int iVar1;
  
  (*(uint *)(gen_frame + 0x4c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x50);
  iVar1 = *(int *)(in_ecx + 8);
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(iVar1 + 0x10);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(iVar1 + 0x14);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(iVar1 + 0x18);
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(iVar1 + 0x20);
  (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(iVar1 + 0x24);
  (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(iVar1 + 0x28);
  (*(undefined4 *)(gen_frame + 0x1c)) = *(undefined4 *)(iVar1 + 0x2c);
  (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)&REFG(undefined, 0x10e1590);
  (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)&REFG(undefined, 0x10e1594);
  (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)&REFG(undefined, 0x10e1598);
  (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)&REFG(undefined, 0x10e159c);
  (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)&REFG(undefined, 0x10e15a0);
  (*(undefined4 *)(gen_frame + 0x24)) = *(undefined4 *)&REFG(undefined, 0x10e15a4);
  (*(undefined4 *)(gen_frame + 0x28)) = *(undefined4 *)&REFG(undefined, 0x10e15a8);
  (*(undefined4 *)(gen_frame + 0x2c)) = *(undefined4 *)&REFG(undefined, 0x10e15ac);
  (*(undefined4 *)(gen_frame + 0x30)) = *param_3;
  (*(undefined4 *)(gen_frame + 0x34)) = param_3[1];
  (*(undefined4 *)(gen_frame + 0x38)) = param_3[2];
  (*(undefined4 *)(gen_frame + 0x3c)) = 0;
  F_00d94dc0(&(*(undefined4 *)(gen_frame + 0x30)),&(*(undefined4 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x30)));
  *param_2 = (*(undefined4 *)(gen_frame + 0x30));
  param_2[1] = (*(undefined4 *)(gen_frame + 0x34));
  param_2[2] = (*(undefined4 *)(gen_frame + 0x38));
  F_00c47745((*(uint *)(gen_frame + 0x4c)) ^ (uint)(uint)(gen_frame + 0x50));
  return (uint)param_2;
}

/* ref: FUN_009f0f50 */
uint F_009f0f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f0f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte * param_1 = (byte *)(uintptr_t)gen_a1;
  byte bVar1;
  int iVar2;
  byte * pbVar3;
  byte * pbVar4;
  uint uVar5;
  undefined4 * puVar6;
  bool bVar7;
  
  uVar5 = 0;
  if (*(uint *)this != 0) {
    puVar6 = *(undefined4 * PTR32 *)((int)this + 0xc);
    do {
      pbVar4 = (byte *)*puVar6;
      pbVar3 = param_1;
      do {
        bVar1 = *pbVar3;
        bVar7 = bVar1 < *pbVar4;
        if (bVar1 != *pbVar4) {
LAB_009f0f86: ;
          iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
          goto LAB_009f0f8b;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar3[1];
        bVar7 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_009f0f86;
        pbVar3 = pbVar3 + 2;
        pbVar4 = pbVar4 + 2;
      } while (bVar1 != 0);
      iVar2 = 0;
LAB_009f0f8b: ;
      if (iVar2 == 0) {
        return uVar5;
      }
      uVar5 = uVar5 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar5 < *(uint *)this);
  }
  return 0xffffffff;
}

/* ref: FUN_009f1010 */
uint F_009f1010(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f1010u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  uint in_EAX = 0;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 < 0) {
    uVar4 = 0;
    if (*(int *)this != 0) {
      in_EAX = *(uint *)((int)this + 4);
      do {
        uVar3 = 0;
        if (in_EAX != 0) {
          iVar2 = 0;
          do {
            puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + uVar4 * 4))) + 0x20 + iVar2)));
            *puVar1 = *param_1;
            uVar3 = uVar3 + 1;
            iVar2 = iVar2 + 0x50;
            puVar1[1] = param_1[1];
            puVar1[2] = param_1[2];
            in_EAX = *(uint *)((int)this + 4);
          } while (uVar3 < in_EAX);
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < *(uint *)this);
    }
  }
  else {
    uVar4 = 0;
    if (*(int *)((int)this + 4) != 0) {
      iVar2 = 0;
      do {
        puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_2 * 4))) + 0x20 + iVar2)));
        *puVar1 = *param_1;
        uVar4 = uVar4 + 1;
        iVar2 = iVar2 + 0x50;
        puVar1[1] = param_1[1];
        puVar1[2] = param_1[2];
      } while (uVar4 < *(uint *)((int)this + 4));
      return (uint)puVar1;
    }
  }
  return in_EAX;
}

/* ref: FUN_009f10b0 */
unsigned int F_009f10b0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f10b0u, gen_a0, 0u, gen_a2, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  uint param_3 = (uint)gen_a2;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_8;
  
  local_8 = 0;
  if ((int)param_3 < 0) {
    if (*in_ecx != 0) {
      do {
        iVar4 = 0;
        param_3 = 0;
        if (in_ecx[1] != 0) {
          do {
            iVar1 = *(int *)(in_ecx[3] + local_8 * 4) + iVar4;
            uVar2 = 0;
            *(float *)(iVar1 + 0x38) = param_2;
            if (*(int *)(iVar1 + 0x34) != 0) {
              iVar3 = 0;
              do {
                *((float *)GEN_TOP((iVar3 + 0x50 + *(int *)(iVar1 + 0x40)))) = param_2;
                uVar2 = uVar2 + 1;
                iVar3 = iVar3 + 0x60;
              } while (uVar2 < *(uint *)(iVar1 + 0x34));
            }
            param_3 = param_3 + 1;
            iVar4 = iVar4 + 0x50;
          } while (param_3 < in_ecx[1]);
        }
        local_8 = local_8 + 1;
      } while (local_8 < *in_ecx);
    }
  }
  else if (in_ecx[1] != 0) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(in_ecx[3] + param_3 * 4) + iVar4;
      uVar2 = 0;
      *(float *)(iVar1 + 0x38) = param_2;
      if (*(int *)(iVar1 + 0x34) != 0) {
        iVar3 = 0;
        do {
          *((float *)GEN_TOP((iVar3 + 0x50 + *(int *)(iVar1 + 0x40)))) = param_2;
          uVar2 = uVar2 + 1;
          iVar3 = iVar3 + 0x60;
        } while (uVar2 < *(uint *)(iVar1 + 0x34));
      }
      local_8 = local_8 + 1;
      iVar4 = iVar4 + 0x50;
    } while (local_8 < in_ecx[1]);
    return 0;
  }
  return 0;
}

/* ref: FUN_009f1180 */
uint F_009f1180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f1180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_c;
  int local_8;
  
  cVar1 = (char)param_1;
  uVar2 = 0;
  if ((int)param_2 < 0) {
    local_c = 0;
    if (*(int *)this != 0) {
      do {
        uVar2 = 0;
        param_2 = 0;
        if (*(int *)((int)this + 4) != 0) {
          param_1 = 0;
          do {
            iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + local_c * 4))) + param_1;
            if (cVar1 == '\0') {
              *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) & 0xfffffffe;
            }
            else {
              *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) | 1;
            }
            uVar2 = 0;
            if (*(int *)(iVar3 + 0x34) != 0) {
              iVar4 = 0;
              do {
                *((char *)GEN_TOP((iVar4 + 0x58 + *(int *)(iVar3 + 0x40)))) = cVar1;
                uVar2 = uVar2 + 1;
                iVar4 = iVar4 + 0x60;
              } while (uVar2 < *(uint *)(iVar3 + 0x34));
            }
            param_1 = param_1 + 0x50;
            uVar2 = param_2 + 1;
            param_2 = uVar2;
          } while (uVar2 < *(uint *)((int)this + 4));
        }
        local_c = local_c + 1;
      } while (local_c < *(uint *)this);
    }
  }
  else {
    local_c = 0;
    if (*(int *)((int)this + 4) != 0) {
      local_8 = 0;
      do {
        iVar3 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_2 * 4))) + local_8;
        if ((char)param_1 == '\0') {
          *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) & 0xfffffffe;
        }
        else {
          *(uint *)(iVar3 + 0x3c) = *(uint *)(iVar3 + 0x3c) | 1;
        }
        uVar2 = 0;
        if (*(int *)(iVar3 + 0x34) != 0) {
          iVar4 = 0;
          do {
            *((char *)GEN_TOP((iVar4 + 0x58 + *(int *)(iVar3 + 0x40)))) = (char)param_1;
            uVar2 = uVar2 + 1;
            iVar4 = iVar4 + 0x60;
          } while (uVar2 < *(uint *)(iVar3 + 0x34));
        }
        local_8 = local_8 + 0x50;
        local_c = local_c + 1;
      } while (local_c < *(uint *)((int)this + 4));
      return local_c;
    }
  }
  return uVar2;
}

/* ref: FUN_009f1270 */
uint F_009f1270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f1270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x40];
  float fVar1;
  float fVar2;
  float * pfVar3;
  int * piVar4;
  float10 fVar5;
  
  fVar1 = (*(float *)((char *)&REFG(float, 0x1375ad0) + 4));
  *param_1 = (float)REFG(float, 0x1375ad0);
  fVar2 = (float)REFG(float, 0x1375ad8);
  param_1[1] = fVar1;
  fVar1 = (*(float *)((char *)&REFG(float, 0x1375ad8) + 4));
  param_1[2] = fVar2;
  param_1[3] = fVar1;
  (*(undefined * PTR32 *)(gen_frame + 0x1c)) = this;
  (*(int *)(gen_frame + 0x28)) = 0;
  if (*(int *)((int)this + 4) != 0) {
    (*(int * PTR32 *)(gen_frame + 0x20)) = ((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_2 * 4)));
    (*(int *)(gen_frame + 0x2c)) = 0;
    (*(int *)(gen_frame + 0x24)) = *(int *)((int)this + 4);
    piVar4 = (int *)(*(*(int * PTR32 *)(gen_frame + 0x20)) + 0x34);
    do {
      pfVar3 = (float *)F_009fb8a0((undefined *)(*(*(int * PTR32 *)(gen_frame + 0x20)) + (*(int *)(gen_frame + 0x2c))),((undefined1 *)(gen_frame + 0x0)));
      (*(int *)(gen_frame + 0x2c)) = (*(int *)(gen_frame + 0x2c)) + 0x50;
      *param_1 = (float)((float10)*param_1 + (float10)*pfVar3);
      param_1[1] = (float)((float10)pfVar3[1] + (float10)param_1[1]);
      param_1[2] = (float)((float10)pfVar3[2] + (float10)param_1[2]);
      (*(int *)(gen_frame + 0x28)) = (*(int *)(gen_frame + 0x28)) + *piVar4;
      (*(int *)(gen_frame + 0x24)) = (*(int *)(gen_frame + 0x24)) + -1;
      param_1[3] = (float)((float10)pfVar3[3] + (float10)param_1[3]);
      this = (*(undefined * PTR32 *)(gen_frame + 0x1c));
      piVar4 = piVar4 + 0x14;
    } while ((*(int *)(gen_frame + 0x24)) != 0);
  }
  if ((*((uint *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_2 * 4))) + 0x3c))) >> 1 & 1) != 0) {
    fVar5 = (float10)(*(int *)(gen_frame + 0x28));
    if ((*(int *)(gen_frame + 0x28)) < 0) {
      fVar5 = fVar5 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    (*(undefined * PTR32 *)(gen_frame + 0x1c)) = ((undefined *)(uintptr_t)gen_fl2bits((float)((float)fVar5)));
    fVar5 = (float10)(float)fVar5;
    *param_1 = (float)((float10)*param_1 / fVar5);
    param_1[1] = (float)((float10)param_1[1] / fVar5);
    param_1[2] = (float)((float10)param_1[2] / fVar5);
    param_1[3] = (float)((float10)param_1[3] / fVar5);
  }
  return (uint)param_1;
}

/* ref: FUN_009f1380 */
uint F_009f1380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f1380u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *((uint *)GEN_TOP((*(int *)(in_ecx + 0xc) + param_2 * 4)));
}

/* ref: FUN_009f1390 */
unsigned int F_009f1390(unsigned int gen_a0)
{
  GEN_ENTER(0x9f1390u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  in_ecx[4] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return 0;
}

/* ref: FUN_009f13a0 */
unsigned int F_009f13a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9f13a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xc) = param_2;
  return 0;
}

/* ref: FUN_009f13c0 */
float10 F_009f13c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f13c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return (float10)*(float *)(in_ecx + 0xc);
}

/* ref: FUN_009f13d0 */
unsigned int F_009f13d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f13d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  if (0 < param_2) {
    *(int *)(in_ecx + 8) = param_2;
  }
  return 0;
}

/* ref: FUN_009f1410 */
uint F_009f1410(unsigned int gen_a0)
{
  GEN_ENTER(0x9f1410u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x6c);
}

/* ref: FUN_009f1420 */
unsigned int F_009f1420(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f1420u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int * param_2 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  
  iVar1 = *param_2;
  *param_1 = *(undefined4 *)((int)this + iVar1 * 0x10 + 0xc);
  param_1[1] = *(undefined4 *)((int)this + iVar1 * 0x10 + 0x10);
  param_1[2] = *(undefined4 *)((int)this + iVar1 * 0x10 + 0x14);
  param_1[3] = *(undefined4 *)((int)this + iVar1 * 0x10 + 0x18);
  return 0;
}

/* ref: FUN_009f1450 */
uint F_009f1450(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f1450u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0x58) != 0) {
    F_0050c620(*(int *)((int)this + 0x58),0,0);
    *(undefined4 *)((int)this + 0x58) = 0;
  }
  *(undefined4 *)((int)this + 0x58) = param_1;
  uVar1 = F_00513f60(param_1,0,0);
  return uVar1;
}

/* ref: FUN_009f1490 */
uint F_009f1490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f1490u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  if (*(int *)((int)this + 0x5c) != 0) {
    F_0050c620(*(int *)((int)this + 0x5c),0,0);
    *(undefined4 *)((int)this + 0x5c) = 0;
  }
  *(undefined4 *)((int)this + 0x5c) = param_1;
  uVar1 = F_00513f60(param_1,0,0);
  return uVar1;
}

/* ref: FUN_009f14d0 */
unsigned int F_009f14d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f14d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint uVar1;
  undefined4 local_c;
  
  if (*(int *)this != param_1) {
    *(undefined1 *)((int)this + 8) = 0;
    *(int *)this = param_1;
    return 0;
  }
  if (-1 < *(char *)((int)this + 8)) {
    *(char *)((int)this + 8) = *(char *)((int)this + 8) + -1;
    *(undefined1 *)((int)this + 9) = 0;
    return 0;
  }
  uVar1 = F_00a06520(param_1);
  local_c = (undefined4)(longlong)TRUNC((float10)*(float *)(uVar1 + 4));
  uVar1 = F_00a4b780(local_c);
  *(char *)((int)this + 8) = (char)uVar1;
  *(undefined1 *)((int)this + 9) = 0;
  return 0;
}

/* ref: FUN_009f1540 */
unsigned int F_009f1540(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x9f1540u, gen_a0, gen_a1, 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  uint uVar1;
  
  if ((char)param_2 != '\0') {
    F_009f14d0(param_1,4);
    return 0;
  }
  uVar1 = F_00a06680(param_3,1);
  F_009f14d0(param_1,uVar1);
  return 0;
}

/* ref: FUN_009f1580 */
uint F_009f1580(unsigned int gen_a0)
{
  GEN_ENTER(0x9f1580u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1087f04);
  *in_ecx = 0;
  in_ecx[1] = uVar1;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_009f15b0 */
byte F_009f15b0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f15b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (((*(byte *)(in_ecx + 0x10) & 1) != 0) && (*(int *)(in_ecx + 0x14) != 0)) {
    return *(int *)(in_ecx + 0x18) != 0;
  }
  return 0;
}

/* ref: FUN_009f15d0 */
uint F_009f15d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f15d0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  LPVOID pvVar2;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar1 = *((int *)GEN_TOP((*(int *)((int)pvVar2 + 0x2c) + 4)));
  uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*(int *)(iVar1 + 4) + 8))))(iVar1 + 4,param_1);
  return uVar3;
}

/* ref: FUN_009f1600 */
uint F_009f1600(unsigned int gen_a0)
{
  GEN_ENTER(0x9f1600u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int iVar1;
  uint uVar2;
  int * piVar3;
  
  if ((char)param_1 != '\0') {
    F_00d9be90();
    F_00d9f270();
    uVar2 = F_00d9c700();
    return uVar2;
  }
  F_00d9bb50();
  piVar3 = (int *)F_00d9b8f0();
  iVar1 = *(int *)((int)GEN_TLS_ARRAY + REFG(int, 0x15d6870) * 4);
  ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3,*(undefined4 *)(iVar1 + 0x1bc),3);
  uVar2 = 0;
  if (*(int *)(iVar1 + 0x1bc) != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),*(int *)(iVar1 + 0x1bc));
    *(undefined4 *)(iVar1 + 0x1bc) = 0;
  }
  *(undefined4 *)(iVar1 + 0x1bc) = 0;
  return uVar2;
}

/* ref: FUN_009f1680 */
unsigned int F_009f1680(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f1680u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float fVar1;
  int iVar2;
  
  F_009fb280(*(undefined4 *)(param_1 + 0x1c),*(float *)(param_2 + 4));
  if (0 < (short)*(ushort *)(param_2 + 0xe)) {
    iVar2 = *(int *)(param_1 + 0x1c);
    fVar1 = ((float)GEN_TOF(((float10)*(ushort *)(param_2 + 0xe) / (float10)*(double *)&REFG(undefined, 0x1088070))));
    *(float *)(iVar2 + 0x7c) = fVar1;
    if ((float10)*(float *)(iVar2 + 8) < (float10)fVar1) {
      *(float *)(iVar2 + 8) = fVar1;
    }
  }
  if (0 < (short)*(ushort *)(param_2 + 0x10)) {
    F_009fd340(param_1,(uint)*(ushort *)(param_2 + 0x10));
  }
  return 0;
}

/* ref: FUN_009f16f0 */
byte F_009f16f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f16f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)(in_ecx + 0xb4 + param_2 * 4);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x14) != 0)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_009f1720 */
uint F_009f1720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f1720u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc0];
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined * this_00;
  int iVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  
  (*(uint *)(gen_frame + 0xac)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xb0);
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = param_1;
  if (*(char *)((int)this + 0x59) == '\0') {
    puVar6 = &REFG(float, 0x1302d00);
  }
  else {
    uVar4 = F_00623320(*(undefined * PTR32 *)((int)this + 0x54),
                         (uint)(ushort)(*(short *)((int)this + 0x40) << 0xc |
                                       *(ushort *)((int)this + 0x42)));
    F_004ef350(((undefined4 *)(gen_frame + 0x60)),uVar4,0x1302d00);
    iVar5 = (int)*(short *)((int)this + 0x42);
    this_00 = (undefined *)F_006232c0(*(undefined4 *)((int)this + 0x54),
                                   (uint)*(ushort *)((int)this + 0x40));
    if ((*((byte *)GEN_TOP((*(int *)((int)this_00 + 0x1c) + iVar5 * 4))) & 2) == 0) {
      puVar6 = ((undefined4 *)GEN_TOP((iVar5 * 0x30 + *(int *)((int)this_00 + 0x10))));
    }
    else {
      puVar6 = (undefined4 *)F_00d31930(this_00,iVar5);
    }
    (*(undefined4 *)(gen_frame + 0x0)) = puVar6[4];
    (*(undefined4 *)(gen_frame + 0x4)) = puVar6[5];
    (*(undefined4 *)(gen_frame + 0x8)) = puVar6[6];
    (*(undefined4 *)(gen_frame + 0xc)) = puVar6[7];
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    uVar3 = puVar6[2];
    F_004ef0c0(((undefined1 *)(gen_frame + 0x20)),(uint)&(*(undefined4 *)(gen_frame + 0x0)));
    F_004ef350(((undefined4 *)(gen_frame + 0x60)),(uint)((undefined4 *)(gen_frame + 0x60)),(uint)((undefined1 *)(gen_frame + 0x20)));
    (*(undefined4 *)(gen_frame + 0x90)) = uVar1;
    (*(undefined4 *)(gen_frame + 0x94)) = uVar2;
    (*(undefined4 *)(gen_frame + 0x98)) = uVar3;
    puVar6 = ((undefined4 *)(gen_frame + 0x60));
    param_1 = (*(undefined4 * PTR32 *)(gen_frame + 0x1c));
  }
  puVar7 = param_1;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + 1;
    puVar7 = puVar7 + 1;
  }
  (*(undefined4 * PTR32 *)(gen_frame + 0x1c)) = param_1;
  F_00c47745((*(uint *)(gen_frame + 0xac)) ^ (uint)(uint)(gen_frame + 0xb0));
  return (uint)param_1;
}

/* ref: FUN_009f1940 */
uint F_009f1940(unsigned int gen_a0)
{
  GEN_ENTER(0x9f1940u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)((int)this + 0x40) != 0) {
    iVar1 = *(int *)((int)this + 0x40) + -0x10;
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                        (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),iVar1);
    }
    *(undefined4 *)((int)this + 0x40) = 0;
  }
  return uVar2;
}

/* ref: FUN_009f1970 */
uint F_009f1970(unsigned int gen_a0)
{
  GEN_ENTER(0x9f1970u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 * puVar5;
  uint local_8;
  
  local_8 = 0;
  if (*(int *)this != 0) {
    do {
      if (*((int *)GEN_TOP((*(int *)((int)this + 0xc) + local_8 * 4))) != 0) {
        iVar1 = *((int *)GEN_TOP((*(int *)((int)this + 0xc) + local_8 * 4)));
        if (iVar1 != 0) {
          iVar4 = *(int *)(iVar1 + -0x10) + -1;
          if (-1 < iVar4) {
            puVar5 = ((undefined4 *)GEN_TOP((iVar1 + 0x40 + *(int *)(iVar1 + -0x10) * 0x50)));
            do {
              iVar2 = puVar5[-0x14];
              puVar5 = puVar5 + -0x14;
              if (iVar2 != 0) {
                F_00401530(iVar2,0x60,*(undefined4 *)(iVar2 + -0x10),((code *)REFP(0x9fb5f0)));
                if (iVar2 + -0x10 != 0) {
                  ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                            (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),iVar2 + -0x10);
                }
                *puVar5 = 0;
              }
              iVar4 = iVar4 + -1;
            } while (-1 < iVar4);
          }
          if (iVar1 + -0x10 != 0) {
            ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),iVar1 + -0x10);
          }
        }
        *((undefined4 *)GEN_TOP((*(int *)((int)this + 0xc) + local_8 * 4))) = 0;
      }
      local_8 = local_8 + 1;
    } while (local_8 < *(uint *)this);
  }
  uVar3 = 0;
  if (*(int *)((int)this + 0xc) != 0) {
    uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))
                      (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),*(int *)((int)this + 0xc));
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  return uVar3;
}

/* ref: FUN_009f1a70 */
uint F_009f1a70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f1a70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  int * piVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  
  uVar3 = 0;
  if (*(uint *)((int)this + 4) != 0) {
    piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_2 * 4))) + 0x34)));
    do {
      if ((*piVar1 != 0) &&
         (this_00 = (undefined *)(*piVar1 * 0x60 + -0x60 + piVar1[3]), this_00 != (undefined *)0x0)) {
        F_009f1720(this_00,param_1);
        return (uint)param_1;
      }
      uVar3 = uVar3 + 1;
      piVar1 = piVar1 + 0x14;
    } while (uVar3 < *(uint *)((int)this + 4));
  }
  puVar4 = &REFG(float, 0x1302d00);
  puVar5 = param_1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_009f1ae0 */
uint F_009f1ae0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f1ae0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  uint uVar1;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  uVar1 = F_009f1a70(this,((undefined1 *)(gen_frame + 0x0)),param_2);
  F_0064ce50(*(undefined * PTR32 *)((int)this + 8),((undefined1 *)(gen_frame + 0x40)),0);
  F_004ef350(param_1,uVar1,(uint)((undefined1 *)(gen_frame + 0x40)));
  F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
  return param_1;
}

/* ref: FUN_009f1b60 */
uint F_009f1b60(unsigned int gen_a0)
{
  GEN_ENTER(0x9f1b60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_00d42330(this,8,(float)(float10)1);
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x50) = 0;
  *(undefined1 *)((int)this + 0x80) = 0;
  *(undefined1 *)((int)this + 0xb0) = 0;
  return (uint)this;
}

/* ref: FUN_009f26e0 */
unsigned int F_009f26e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9f26e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined * this;
  undefined4 uVar1;
  undefined4 * puVar2;
  int * piVar3;
  int iVar4;
  
  if ((*(char *)(param_1 + 0x18) != '\0') && (param_1[0x17] != 0)) {
    F_00d31730((undefined *)param_1[0x15]);
    this = (undefined *)param_1[0x15];
    F_00d31f70(this);
    F_00d31b70(this);
    param_1[3] = 0x3f800000;
    param_1[4] = 0x3f800000;
    param_1[5] = 0x3f800000;
    param_1[6] = 0x3f800000;
    param_1[7] = 0x3f800000;
    param_1[8] = 0x3f800000;
    param_1[9] = 0x3f800000;
    param_1[10] = 0x3f800000;
    param_1[0xb] = 0x3f800000;
    param_1[0xc] = 0x3f800000;
    param_1[0xd] = 0x3f800000;
    param_1[0xe] = 0x3f800000;
    param_1[0xf] = 0x3f800000;
    param_1[0x10] = 0x3f800000;
    param_1[0x11] = 0x3f800000;
    param_1[0x12] = 0x3f800000;
    if (((int *)param_1[0x14])[5] != 0) {
      ((code *)*(gen_code32 *)(*(int *)param_1[0x14] + 0xc))((undefined4)gen_fl2bits(param_2));
      uVar1 = *(undefined4 *)((int)param_1[0x15] + 0x30);
      puVar2 = (undefined4 *)F_00d314f0((undefined *)param_1[0x15]);
      ((code *)*(gen_code32 *)(*(int *)param_1[0x14] + 0x10))((int *)param_1[0x14],*puVar2,uVar1);
      piVar3 = (int *)F_00d32a50((undefined *)param_1[0x15]);
      uVar1 = REFG(float, 0x1087f04);
      iVar4 = 4;
      puVar2 = (undefined4 *)*piVar3;
      do {
        param_1[3] = puVar2[0xc];
        param_1[4] = puVar2[0xd];
        param_1[5] = puVar2[0xe];
        param_1[6] = uVar1;
        iVar4 = iVar4 + -1;
        puVar2 = puVar2 + 0xc;
        param_1 = param_1 + 4;
      } while (iVar4 != 0);
    }
  }
  return 0;
}

/* ref: FUN_009f27e0 */
unsigned int F_009f27e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x9f27e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  undefined * this;
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int * piVar4;
  int iVar5;
  
  for (; param_1 != (undefined4 *)0x0; param_1 = (undefined4 *)param_1[2]) {
    if ((*(char *)(param_1 + 0x18) != '\0') && (param_1[0x17] != 0)) {
      F_00d31730((undefined *)param_1[0x15]);
      this = (undefined *)param_1[0x15];
      F_00d31f70(this);
      F_00d31b70(this);
      param_1[3] = 0x3f800000;
      param_1[4] = 0x3f800000;
      param_1[5] = 0x3f800000;
      param_1[6] = 0x3f800000;
      param_1[7] = 0x3f800000;
      param_1[8] = 0x3f800000;
      param_1[9] = 0x3f800000;
      param_1[10] = 0x3f800000;
      param_1[0xb] = 0x3f800000;
      param_1[0xc] = 0x3f800000;
      param_1[0xd] = 0x3f800000;
      param_1[0xe] = 0x3f800000;
      param_1[0xf] = 0x3f800000;
      param_1[0x10] = 0x3f800000;
      param_1[0x11] = 0x3f800000;
      param_1[0x12] = 0x3f800000;
      if (((int *)param_1[0x14])[5] != 0) {
        ((code *)*(gen_code32 *)(*(int *)param_1[0x14] + 0xc))((undefined4)gen_fl2bits(param_2));
        uVar1 = *(undefined4 *)((int)param_1[0x15] + 0x30);
        puVar3 = (undefined4 *)F_00d314f0((undefined *)param_1[0x15]);
        ((code *)*(gen_code32 *)(*(int *)param_1[0x14] + 0x10))((int *)param_1[0x14],*puVar3,uVar1);
        piVar4 = (int *)F_00d32a50((undefined *)param_1[0x15]);
        uVar1 = REFG(float, 0x1087f04);
        iVar5 = 4;
        puVar3 = (undefined4 *)*piVar4;
        puVar2 = param_1;
        do {
          puVar2[3] = puVar3[0xc];
          puVar2[4] = puVar3[0xd];
          puVar2[5] = puVar3[0xe];
          puVar2[6] = uVar1;
          iVar5 = iVar5 + -1;
          puVar3 = puVar3 + 0xc;
          puVar2 = puVar2 + 4;
        } while (iVar5 != 0);
      }
    }
  }
  return 0;
}

/* ref: FUN_009f28f0 */
unsigned int F_009f28f0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f28f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x14) = 0;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x20) != 0) {
      F_00406b30(*(int *)(iVar1 + 0x20));
      *(undefined4 *)(iVar1 + 0x20) = 0;
    }
    F_00406ad0(iVar1);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return 0;
}

/* ref: FUN_009f2930 */
uint F_009f2930(void)
{
  GEN_ENTER(0x9f2930u, 0u, 0u, 0u, 0u);
  undefined * pvVar1;
  uint uVar2;
  LPVOID pvVar3;
  uint uVar4;
  
  uVar4 = 0;
  do {
    uVar2 = 0;
    if (*(int *)((int)&REFG(undefined4, 0x14a2420) + uVar4) != 0) {
      uVar2 = F_00a1ac10(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x11ac),*(int *)((int)&REFG(undefined4, 0x14a2420) + uVar4));
      *(undefined4 *)((int)&REFG(undefined4, 0x14a2420) + uVar4) = 0;
    }
    uVar4 = uVar4 + 4;
  } while (uVar4 < 8);
  if (REFG(undefined4, 0x14a242c) != (int *)0x0) {
    ((code *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x14a242c) + 0x10))))(REFG(undefined4, 0x14a242c));
    uVar2 = F_00d91840(REFG(undefined4, 0x14a242c));
    REFG(undefined4, 0x14a242c) = (int *)0x0;
  }
  pvVar1 = REFG(undefined4, 0x14a2430);
  if (REFG(undefined4, 0x14a2430) != (undefined *)0x0) {
    F_00d96d40(REFG(undefined4, 0x14a2430));
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar3 + 0x2c) + 8))))
                      (*(int * PTR32 *)((int)pvVar3 + 0x2c),pvVar1,0x290);
    REFG(undefined4, 0x14a2430) = (undefined *)0x0;
  }
  return uVar2;
}

/* ref: FUN_009f29c0 */
byte F_009f29c0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f29c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0x1c) != (undefined *)0x0) {
    F_009fe970(*(undefined * PTR32 *)((int)this + 0x1c),(int)this + 8);
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  if (*(int *)((int)this + 0x20) != 0) {
    F_0050c620(*(int *)((int)this + 0x20),0,0);
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  return 1;
}

/* ref: FUN_009f2a10 */
unsigned int F_009f2a10(unsigned int gen_a0)
{
  GEN_ENTER(0x9f2a10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  if (*(int *)((int)this + 0x18) != 0) {
    puVar2 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x14)));
    while (puVar2 != *(undefined4 * PTR32 *)((int)this + 0x14)) {
      if (*(char *)((int)puVar2 + 0x11) == '\0') {
        puVar3 = (undefined4 *)puVar2[2];
        if (*(char *)((int)puVar3 + 0x11) == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0x11);
          puVar2 = puVar3;
          puVar3 = (undefined4 *)*puVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar3 + 0x11);
            puVar2 = puVar3;
            puVar3 = (undefined4 *)*puVar3;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar2[1] + 0x11);
          puVar4 = (undefined4 *)puVar2[1];
          puVar3 = puVar2;
          while ((puVar2 = puVar4, cVar1 == '\0' && (puVar3 == (undefined4 *)puVar2[2]))) {
            cVar1 = *(char *)((int)puVar2[1] + 0x11);
            puVar4 = (undefined4 *)puVar2[1];
            puVar3 = puVar2;
          }
        }
      }
    }
    return 0;
  }
  return 0;
}

/* ref: FUN_009f2ac0 */
uint F_009f2ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f2ac0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (*(uint *)((int)this + 0x18) != 0) {
    puVar2 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x14)));
    while (puVar2 != *(undefined4 * PTR32 *)((int)this + 0x14)) {
      uVar5 = uVar5 + *((int *)GEN_TOP((*(int *)(puVar2[3] + 0x1c) + 0x44)));
      if (*(char *)((int)puVar2 + 0x11) == '\0') {
        puVar3 = (undefined4 *)puVar2[2];
        if (*(char *)((int)puVar3 + 0x11) == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0x11);
          puVar2 = puVar3;
          puVar3 = (undefined4 *)*puVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar3 + 0x11);
            puVar2 = puVar3;
            puVar3 = (undefined4 *)*puVar3;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar2[1] + 0x11);
          puVar4 = (undefined4 *)puVar2[1];
          puVar3 = puVar2;
          while ((puVar2 = puVar4, cVar1 == '\0' && (puVar3 == (undefined4 *)puVar2[2]))) {
            cVar1 = *(char *)((int)puVar2[1] + 0x11);
            puVar4 = (undefined4 *)puVar2[1];
            puVar3 = puVar2;
          }
        }
      }
    }
    uVar5 = uVar5 / *(uint *)((int)this + 0x18);
  }
  return uVar5;
}

/* ref: FUN_009f2ba0 */
float F_009f2ba0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f2ba0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  float10 fVar6;
  float local_8;
  
  iVar2 = *(int *)((int)this + 0x18);
  if (iVar2 != 0) {
    puVar3 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x14)));
    local_8 = 0.0;
    while (puVar3 != *(undefined4 * PTR32 *)((int)this + 0x14)) {
      local_8 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)(puVar3[3] + 0x1c) + 0x40))) + (float10)local_8)));
      if (*(char *)((int)puVar3 + 0x11) == '\0') {
        puVar4 = (undefined4 *)puVar3[2];
        if (*(char *)((int)puVar4 + 0x11) == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x11);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar4 + 0x11);
            puVar3 = puVar4;
            puVar4 = (undefined4 *)*puVar4;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar3[1] + 0x11);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
          while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
            cVar1 = *(char *)((int)puVar3[1] + 0x11);
            puVar5 = (undefined4 *)puVar3[1];
            puVar4 = puVar3;
          }
        }
      }
    }
    fVar6 = (float10)iVar2;
    if (iVar2 < 0) {
      fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    return (float)((float10)local_8 / fVar6);
  }
  return (float)(float10)0;
}

/* ref: FUN_009f2c50 */
float F_009f2c50(unsigned int gen_a0)
{
  GEN_ENTER(0x9f2c50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  float10 fVar6;
  float local_8;
  
  iVar2 = *(int *)((int)this + 0x18);
  if (iVar2 != 0) {
    puVar3 = ((undefined4 *)GEN_TOP(**(undefined4 * PTR32 *)((int)this + 0x14)));
    local_8 = 0.0;
    while (puVar3 != *(undefined4 * PTR32 *)((int)this + 0x14)) {
      local_8 = ((float)GEN_TOF(((float10)*((float *)GEN_TOP((*(int *)(puVar3[3] + 0x1c) + 8))) + (float10)local_8)));
      if (*(char *)((int)puVar3 + 0x11) == '\0') {
        puVar4 = (undefined4 *)puVar3[2];
        if (*(char *)((int)puVar4 + 0x11) == '\0') {
          cVar1 = *(char *)((int)*puVar4 + 0x11);
          puVar3 = puVar4;
          puVar4 = (undefined4 *)*puVar4;
          while (cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar4 + 0x11);
            puVar3 = puVar4;
            puVar4 = (undefined4 *)*puVar4;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar3[1] + 0x11);
          puVar5 = (undefined4 *)puVar3[1];
          puVar4 = puVar3;
          while ((puVar3 = puVar5, cVar1 == '\0' && (puVar4 == (undefined4 *)puVar3[2]))) {
            cVar1 = *(char *)((int)puVar3[1] + 0x11);
            puVar5 = (undefined4 *)puVar3[1];
            puVar4 = puVar3;
          }
        }
      }
    }
    fVar6 = (float10)iVar2;
    if (iVar2 < 0) {
      fVar6 = fVar6 + (float10)*(float *)&REFG(undefined, 0x1088110);
    }
    return (float)((float10)local_8 / fVar6);
  }
  return (float)(float10)0;
}

/* ref: FUN_009f2d00 */
unsigned int F_009f2d00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f2d00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  
  puVar2 = *(undefined4 * PTR32 *)((int)this + 0x14);
  puVar3 = (undefined4 *)*puVar2;
  while (puVar3 != puVar2) {
    iVar4 = puVar3[3];
    *(undefined2 *)(iVar4 + 0x28) = (undefined2)param_1;
    F_009fd340(iVar4,param_2);
    *(undefined1 *)(iVar4 + 0x2a) = 1;
    if (*(char *)((int)puVar3 + 0x11) == '\0') {
      puVar5 = (undefined4 *)puVar3[2];
      if (*(char *)((int)puVar5 + 0x11) == '\0') {
        cVar1 = *(char *)((int)*puVar5 + 0x11);
        puVar3 = puVar5;
        puVar5 = (undefined4 *)*puVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar5 + 0x11);
          puVar3 = puVar5;
          puVar5 = (undefined4 *)*puVar5;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar3[1] + 0x11);
        puVar6 = (undefined4 *)puVar3[1];
        puVar5 = puVar3;
        while ((puVar3 = puVar6, cVar1 == '\0' && (puVar5 == (undefined4 *)puVar3[2]))) {
          cVar1 = *(char *)((int)puVar3[1] + 0x11);
          puVar6 = (undefined4 *)puVar3[1];
          puVar5 = puVar3;
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_009f2d80 */
uint F_009f2d80(unsigned int gen_a0)
{
  GEN_ENTER(0x9f2d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  double dVar4;
  undefined4 * puVar5;
  undefined4 in_EAX = 0;
  undefined2 uVar7;
  undefined4 * puVar6;
  undefined4 * puVar8;
  undefined2 uVar9;
  float10 fVar11;
  ushort local_c;
  undefined4 * puVar10;
  
  uVar7 = (undefined2)((uint)in_EAX >> 0x10);
  if (*(int *)((int)this + 0x18) != 0) {
    puVar2 = *(undefined4 * PTR32 *)((int)this + 0x14);
    puVar8 = (undefined4 *)*puVar2;
    puVar10 = (undefined4 *)0x0;
    uVar9 = 0;
    while (puVar8 != puVar2) {
      dVar4 = (double)((float)GEN_TOF(((float10)*((float *)GEN_TOP((*((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)(puVar8[3] + 0x1c) +
                                                                   0x28))) + 0xc))) + 0xc))) *
                             (float10)*(double *)&REFG(undefined, 0x1088070))));
      fVar11 = F_00c4ed10((uint)(ulonglong)gen_d2bits(dVar4),
                            (int)((ulonglong)gen_d2bits(dVar4) >> 0x20));
      local_c = (ushort)(int)TRUNC(fVar11);
      puVar6 = (undefined4 *)((int)TRUNC(fVar11) & 0xffff);
      if ((ushort)puVar10 < local_c) {
        puVar10 = puVar6;
      }
      uVar9 = SUB42(puVar10,0);
      if (*(char *)((int)puVar8 + 0x11) == '\0') {
        puVar3 = (undefined4 *)puVar8[2];
        if (*(char *)((int)puVar3 + 0x11) == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0x11);
          puVar6 = (undefined4 *)*puVar3;
          while (puVar8 = puVar3, cVar1 == '\0') {
            cVar1 = *(char *)((int)*puVar6 + 0x11);
            puVar3 = puVar6;
            puVar6 = (undefined4 *)*puVar6;
          }
        }
        else {
          cVar1 = *(char *)((int)puVar8[1] + 0x11);
          puVar5 = (undefined4 *)puVar8[1];
          puVar3 = puVar8;
          while ((puVar6 = puVar5, puVar8 = puVar6, cVar1 == '\0' &&
                 (puVar3 == (undefined4 *)puVar6[2]))) {
            cVar1 = *(char *)((int)puVar6[1] + 0x11);
            puVar5 = (undefined4 *)puVar6[1];
            puVar3 = puVar6;
          }
        }
      }
      uVar7 = (undefined2)((uint)((int)(uintptr_t)puVar6) >> 0x10);
    }
    return CONCAT22(uVar7,uVar9);
  }
  return 0;
}

/* ref: FUN_009f2ed0 */
byte F_009f2ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f2ed0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x14)));
  if (piVar1 != *(int * PTR32 *)((int)this + 0x14)) {
    uVar2 = F_00500ae0(*(undefined4 *)(REFG(int, 0x137129c) + 0x60),
                         (uint)*((byte *)GEN_TOP((*(int *)(piVar1[3] + 0x24) + 0xe))));
    return (byte)(*(uint *)(uVar2 + 8) >> 3) & 1;
  }
  return 0;
}

/* ref: FUN_009f2f00 */
byte F_009f2f00(unsigned int gen_a0)
{
  GEN_ENTER(0x9f2f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x14)));
  if (piVar1 != *(int * PTR32 *)((int)this + 0x14)) {
    uVar2 = F_00500ae0(*(undefined4 *)(REFG(int, 0x137129c) + 0x60),
                         (uint)*((byte *)GEN_TOP((*(int *)(piVar1[3] + 0x24) + 0xe))));
    return (byte)(*(uint *)(uVar2 + 8) >> 2) & 1;
  }
  return 0;
}

/* ref: FUN_009f2f30 */
byte F_009f2f30(unsigned int gen_a0)
{
  GEN_ENTER(0x9f2f30u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = ((int *)GEN_TOP(**(int * PTR32 *)((int)this + 0x14)));
  if (piVar1 != *(int * PTR32 *)((int)this + 0x14)) {
    uVar2 = F_00500ae0(*(undefined4 *)(REFG(int, 0x137129c) + 0x60),
                         (uint)*((byte *)GEN_TOP((*(int *)(piVar1[3] + 0x24) + 0xe))));
    return (byte)(*(uint *)(uVar2 + 8) >> 6) & 1;
  }
  return 0;
}

/* ref: FUN_009f2f60 */
uint F_009f2f60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f2f60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  undefined * this_00;
  undefined4 uVar2;
  ushort uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint uVar6;
  undefined4 * puVar7;
  uint local_c;
  
  uVar2 = param_1;
  puVar4 = (undefined4 *)((int)this + 4);
  local_c = 0;
  do {
    param_1 = 0;
    puVar5 = puVar4;
    do {
      puVar1 = (undefined4 *)puVar5[1];
      for (puVar7 = (undefined4 *)*puVar5; puVar7 != puVar1; puVar7 = puVar7 + 1) {
        this_00 = (undefined *)*puVar7;
        if ((char)param_2 == '\0') {
          if (this_00 != (undefined *)0x0) {
            uVar6 = F_00505360(this_00,uVar2);
LAB_009f2fce: ;
            if (uVar6 != 0) {
              return uVar6;
            }
          }
        }
        else if (this_00 != (undefined *)0x0) {
          uVar3 = F_005036f0(this_00,uVar2);
          if (-1 < (short)uVar3) {
            uVar6 = F_00505340((undefined *)*puVar7,(uint)uVar3);
            goto LAB_009f2fce;
          }
        }
      }
      param_1 = param_1 + 1;
      puVar5 = puVar5 + 4;
    } while (param_1 < 4);
    local_c = local_c + 1;
    puVar4 = puVar4 + 0x10;
    if (1 < local_c) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_009f3020 */
ushort F_009f3020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f3020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint local_c;
  uint local_8;
  
  puVar4 = (undefined4 *)((int)this + 4);
  local_c = 0;
  do {
    local_8 = 0;
    puVar5 = puVar4;
    do {
      puVar1 = (undefined4 *)puVar5[1];
      for (puVar6 = (undefined4 *)*puVar5; puVar6 != puVar1; puVar6 = puVar6 + 1) {
        if ((undefined *)*puVar6 != (undefined *)0x0) {
          uVar2 = F_00503630((undefined *)*puVar6,param_1);
          if (-1 < (short)uVar2) {
            uVar3 = F_00503690(*puVar6,(uint)uVar2);
            return *(ushort *)(uVar3 + 0x20);
          }
        }
      }
      local_8 = local_8 + 1;
      puVar5 = puVar5 + 4;
    } while (local_8 < 4);
    local_c = local_c + 1;
    puVar4 = puVar4 + 0x10;
  } while (local_c < 2);
  return 0xffff;
}

/* ref: FUN_009f30c0 */
byte F_009f30c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f30c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  ushort uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint local_c;
  uint local_8;
  
  puVar3 = (undefined4 *)((int)this + 4);
  local_c = 0;
  do {
    local_8 = 0;
    puVar4 = puVar3;
    do {
      puVar1 = (undefined4 *)puVar4[1];
      for (puVar5 = (undefined4 *)*puVar4; puVar5 != puVar1; puVar5 = puVar5 + 1) {
        if (((undefined *)*puVar5 != (undefined *)0x0) &&
           (uVar2 = F_005036b0((undefined *)*puVar5,param_1), -1 < (short)uVar2)) {
          return 1;
        }
      }
      local_8 = local_8 + 1;
      puVar4 = puVar4 + 4;
    } while (local_8 < 4);
    local_c = local_c + 1;
    puVar3 = puVar3 + 0x10;
    if (1 < local_c) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_009f3150 */
uint F_009f3150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f3150u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  uint local_c;
  uint local_8;
  
  puVar3 = (undefined4 *)((int)this + 4);
  local_c = 0;
  do {
    local_8 = 0;
    puVar4 = puVar3;
    do {
      puVar1 = (undefined4 *)puVar4[1];
      for (puVar5 = (undefined4 *)*puVar4; puVar5 != puVar1; puVar5 = puVar5 + 1) {
        if (((undefined *)*puVar5 != (undefined *)0x0) &&
           (uVar2 = F_00503790((undefined *)*puVar5,param_1), uVar2 != 0)) {
          return uVar2;
        }
      }
      local_8 = local_8 + 1;
      puVar4 = puVar4 + 4;
    } while (local_8 < 4);
    local_c = local_c + 1;
    puVar3 = puVar3 + 0x10;
    if (1 < local_c) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_009f31d0 */
uint F_009f31d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f31d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  ushort uVar2;
  uint uVar3;
  undefined4 * puVar4;
  undefined4 * puVar5;
  undefined4 * puVar6;
  uint local_c;
  uint local_8;
  
  puVar4 = (undefined4 *)((int)this + 4);
  local_c = 0;
  do {
    local_8 = 0;
    puVar5 = puVar4;
    do {
      puVar1 = (undefined4 *)puVar5[1];
      for (puVar6 = (undefined4 *)*puVar5; puVar6 != puVar1; puVar6 = puVar6 + 1) {
        if ((undefined *)*puVar6 != (undefined *)0x0) {
          uVar2 = F_005036b0((undefined *)*puVar6,param_1);
          if (-1 < (short)uVar2) {
            uVar3 = F_005053d0(*puVar6,(uint)uVar2);
            return uVar3;
          }
        }
      }
      local_8 = local_8 + 1;
      puVar5 = puVar5 + 4;
    } while (local_8 < 4);
    local_c = local_c + 1;
    puVar4 = puVar4 + 0x10;
  } while (local_c < 2);
  return 0;
}

/* ref: FUN_009f3260 */
uint F_009f3260(unsigned int gen_a0)
{
  GEN_ENTER(0x9f3260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  int * piVar2;
  undefined4 * puVar3;
  int * piVar4;
  int * piVar5;
  int iVar6;
  int local_c;
  uint local_8;
  
  local_8 = 0;
  puVar3 = (undefined4 *)((int)this + 4);
  local_c = 2;
  do {
    iVar6 = 4;
    do {
      piVar2 = (int *)puVar3[1];
      for (piVar4 = (int *)*puVar3; piVar4 != piVar2; piVar4 = piVar4 + 1) {
        piVar5 = (int *)(*piVar4 + 0x88);
        LOCK();
        iVar1 = *piVar5;
        *piVar5 = *piVar5;
        UNLOCK();
        if (iVar1 == 2) {
          piVar5 = (int *)(*piVar4 + 0x8c);
          LOCK();
          iVar1 = *piVar5;
          *piVar5 = *piVar5;
          UNLOCK();
          if (iVar1 < 8) {
            local_8 = local_8 + 1;
          }
        }
      }
      puVar3 = puVar3 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    local_c = local_c + -1;
  } while (local_c != 0);
  return local_8;
}

/* ref: FUN_009f32e0 */
uint F_009f32e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f32e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint * puVar1;
  ushort uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  uint * puVar5;
  uint local_c;
  uint local_8;
  
  puVar3 = (undefined4 *)((int)this + 4);
  local_c = 0;
  do {
    local_8 = 0;
    puVar4 = puVar3;
    do {
      puVar1 = (uint *)puVar4[1];
      for (puVar5 = (uint *)*puVar4; puVar5 != puVar1; puVar5 = puVar5 + 1) {
        uVar2 = F_00503630((undefined *)*puVar5,param_1);
        if (-1 < (short)uVar2) {
          return *puVar5;
        }
      }
      local_8 = local_8 + 1;
      puVar4 = puVar4 + 4;
    } while (local_8 < 4);
    local_c = local_c + 1;
    puVar3 = puVar3 + 0x10;
  } while (local_c < 2);
  return 0;
}

/* ref: FUN_009f3370 */
unsigned int F_009f3370(unsigned int gen_a0)
{
  GEN_ENTER(0x9f3370u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00d32a50(*(undefined * PTR32 *)((int)this + 0xbc));
  F_00d31650(*(undefined * PTR32 *)((int)this + 0xc0),uVar1);
  if ((*(int *)((int)this + 0xb8) != 0) && (*((int *)GEN_TOP((*(int *)((int)this + 0xb8) + 0x14))) != 0)) {
    uVar1 = F_00d32a50(*(undefined * PTR32 *)((int)this + 0xc4));
    F_00d31650(*(undefined * PTR32 *)((int)this + 200),uVar1);
  }
  return 0;
}

/* ref: FUN_009f33c0 */
uint F_009f33c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f33c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  undefined4 * puVar4;
  
  uVar3 = 0;
  if (*(uint *)((int)this + 4) != 0) {
    puVar1 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_2 * 4))) + 0x40)));
    do {
      if ((puVar1[-3] != 0) && ((undefined *)*puVar1 != (undefined *)0x0)) {
        F_009f1720((undefined *)*puVar1,param_1);
        return (uint)param_1;
      }
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 0x14;
    } while (uVar3 < *(uint *)((int)this + 4));
  }
  puVar1 = &REFG(float, 0x1302d00);
  puVar4 = param_1;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  return (uint)param_1;
}

/* ref: FUN_009f34a0 */
uint F_009f34a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f34a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  undefined * this_00;
  uint uVar1;
  int iVar2;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  if (*(char *)((int)this + 0x59) == '\0') {
    *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302c90));
    param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302c94));
    param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302c98));
  }
  else {
    uVar1 = F_00623320(*(undefined * PTR32 *)((int)this + 0x54),
                         (uint)(ushort)(*(short *)((int)this + 0x40) << 0xc |
                                       *(ushort *)((int)this + 0x42)));
    F_009fe820(((undefined1 *)(gen_frame + 0x0)),uVar1);
    F_005fe770(uVar1,(uint)&(*(undefined4 *)(gen_frame + 0x40)));
    (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)(gen_frame + 0x40));
    (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)(gen_frame + 0x44));
    (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0x48));
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(undefined4 *)(gen_frame + 0x40)) = *(undefined4 *)&REFG(undefined, 0x10e15d0);
    (*(undefined4 *)(gen_frame + 0x44)) = *(undefined4 *)&REFG(undefined, 0x10e15d4);
    (*(undefined4 *)(gen_frame + 0x48)) = *(undefined4 *)&REFG(undefined, 0x10e15d8);
    (*(undefined4 *)(gen_frame + 0x4c)) = *(undefined4 *)&REFG(undefined, 0x10e15dc);
    F_00d950d0(((undefined1 *)(gen_frame + 0x30)),((undefined1 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x40)));
    iVar2 = (int)*(short *)((int)this + 0x42);
    this_00 = *(undefined * PTR32 *)((int)this + 0x30);
    if ((*((byte *)GEN_TOP((*(int *)((int)this_00 + 0x1c) + iVar2 * 4))) & 2) == 0) {
      uVar1 = iVar2 * 0x30 + *(int *)((int)this_00 + 0x10);
    }
    else {
      uVar1 = F_00d31930(this_00,iVar2);
    }
    F_00d950d0(&(*(undefined4 *)(gen_frame + 0x20)),uVar1 + 0x10,((undefined1 *)(gen_frame + 0x30)));
    *param_1 = (*(undefined4 *)(gen_frame + 0x20));
    param_1[1] = (*(undefined4 *)(gen_frame + 0x24));
    param_1[2] = (*(undefined4 *)(gen_frame + 0x28));
  }
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return (uint)param_1;
}

/* ref: FUN_009f3740 */
uint F_009f3740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f3740u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x150];
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  int iVar5;
  float10 fVar6;
  
  (*(uint *)(gen_frame + 0x13c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x140);
  if (*(char *)((int)this + 0x59) == '\0') {
    *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
    param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
    (*(undefined4 *)(gen_frame + 0xe8)) = REFG(float, 0x1375ac8);
  }
  else {
    uVar4 = *(ushort *)((int)this + 0x42);
    (*(ushort *)(gen_frame + 0x2a)) = uVar4;
    *(undefined4 *)&(*(ushort *)(gen_frame + 0x2a)) = CONCAT22((*(undefined2 *)(gen_frame + 0x2c)),uVar4);
    F_0064ce50(*(undefined * PTR32 *)((int)this + 0x54),((undefined1 *)(gen_frame + 0x30)),
                 (uint)(ushort)((ushort)*(byte *)((int)this + 0x40) << 0xc | uVar4 & 0xfff));
    iVar5 = *(int *)((int)this + 0x54);
    fVar1 = *(float *)(iVar5 + 0x10);
    fVar6 = (float10)0;
    fVar2 = *(float *)(iVar5 + 0x14);
    fVar3 = *(float *)(iVar5 + 0x18);
    (*(undefined4 *)(gen_frame + 0x0)) = *(undefined4 *)(iVar5 + 0x20);
    (*(undefined4 *)(gen_frame + 0x4)) = *(undefined4 *)(iVar5 + 0x24);
    (*(undefined4 *)(gen_frame + 0x8)) = *(undefined4 *)(iVar5 + 0x28);
    (*(float *)(gen_frame + 0x120)) = (float)fVar6;
    (*(float *)(gen_frame + 0x124)) = (float)fVar6;
    (*(undefined4 *)(gen_frame + 0x10)) = REFG(float, 0x1302c60);
    (*(float *)(gen_frame + 0x128)) = (float)fVar6;
    (*(undefined4 *)(gen_frame + 0xf0)) = REFG(float, 0x1302c60);
    (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(iVar5 + 0x2c);
    (*(undefined4 *)(gen_frame + 0x14)) = REFG(float, 0x1302c64);
    (*(undefined4 *)(gen_frame + 0x18)) = REFG(float, 0x1302c68);
    (*(undefined4 *)(gen_frame + 0xf4)) = 0;
    (*(undefined4 *)(gen_frame + 0xf8)) = 0;
    (*(undefined4 *)(gen_frame + 0x100)) = 0;
    (*(undefined4 *)(gen_frame + 0x104)) = REFG(float, 0x1302c64);
    (*(undefined4 *)(gen_frame + 0x108)) = 0;
    (*(undefined4 *)(gen_frame + 0x110)) = 0;
    (*(undefined4 *)(gen_frame + 0x114)) = 0;
    (*(undefined4 *)(gen_frame + 0x118)) = REFG(float, 0x1302c68);
    F_004efe70(&(*(undefined4 *)(gen_frame + 0xf0)),(uint)&(*(undefined4 *)(gen_frame + 0x0)));
    (*(float *)(gen_frame + 0x120)) = (float)((float10)(*(float *)(gen_frame + 0x120)) + (float10)fVar1);
    (*(float *)(gen_frame + 0x124)) = (float)((float10)(*(float *)(gen_frame + 0x124)) + (float10)fVar2);
    (*(float *)(gen_frame + 0x128)) = (float)((float10)(*(float *)(gen_frame + 0x128)) + (float10)fVar3);
    F_004f45d0(((undefined1 *)(gen_frame + 0x70)),&(*(undefined4 *)(gen_frame + 0xf0)));
    F_004ef5a0((uint)((undefined1 *)(gen_frame + 0xb0)),(uint)((undefined1 *)(gen_frame + 0x30)),(uint)((undefined1 *)(gen_frame + 0x70)));
    *param_1 = (*(undefined4 *)(gen_frame + 0xe0));
    param_1[1] = (*(undefined4 *)(gen_frame + 0xe4));
  }
  param_1[2] = (*(undefined4 *)(gen_frame + 0xe8));
  F_00c47745((*(uint *)(gen_frame + 0x13c)) ^ (uint)(uint)(gen_frame + 0x140));
  return (uint)param_1;
}

/* ref: FUN_009f3920 */
uint F_009f3920(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f3920u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xd0];
  undefined * this_00;
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  (*(uint *)(gen_frame + 0xbc)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc0);
  if (*(char *)((int)this + 0x59) == '\0') {
    *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302c90));
    param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302c94));
    param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302c98));
  }
  else {
    uVar1 = F_00623320(*(undefined * PTR32 *)((int)this + 0x54),
                         (uint)(ushort)(*(short *)((int)this + 0x40) << 0xc |
                                       *(ushort *)((int)this + 0x42)));
    F_009fe820(&(*(float *)(gen_frame + 0x0)),uVar1);
    F_005fe770(uVar1,(uint)&(*(undefined4 *)(gen_frame + 0xa0)));
    (*(undefined4 *)(gen_frame + 0x10)) = (*(undefined4 *)(gen_frame + 0xa0));
    (*(undefined4 *)(gen_frame + 0x14)) = (*(undefined4 *)(gen_frame + 0xa4));
    (*(undefined4 *)(gen_frame + 0x18)) = (*(undefined4 *)(gen_frame + 0xa8));
    (*(undefined4 *)(gen_frame + 0x1c)) = 0;
    (*(float *)(gen_frame + 0x90)) = (*(float *)(gen_frame + 0x0));
    (*(float *)(gen_frame + 0x94)) = (*(float *)(gen_frame + 0x4));
    (*(float *)(gen_frame + 0x98)) = (*(float *)(gen_frame + 0x8));
    (*(float *)(gen_frame + 0x9c)) = (*(float *)(gen_frame + 0xc));
    if ((*(uint *)((int)this + 0x3c) >> 1 & 1) != 0) {
      (*(undefined4 *)(gen_frame + 0xa0)) = *(undefined4 *)((int)this + 0x10);
      (*(undefined4 *)(gen_frame + 0xa4)) = *(undefined4 *)((int)this + 0x14);
      (*(undefined4 *)(gen_frame + 0xa8)) = *(undefined4 *)((int)this + 0x18);
      (*(undefined4 *)(gen_frame + 0xac)) = 0;
      F_00d950d0(&(*(undefined4 *)(gen_frame + 0x30)),&(*(float *)(gen_frame + 0x90)),&(*(undefined4 *)(gen_frame + 0xa0)));
      (*(undefined4 *)(gen_frame + 0xa0)) = (*(undefined4 *)(gen_frame + 0x34));
      (*(undefined4 *)(gen_frame + 0xa4)) = (*(undefined4 *)(gen_frame + 0x34));
      (*(undefined4 *)(gen_frame + 0xa8)) = (*(undefined4 *)(gen_frame + 0x34));
      (*(undefined4 *)(gen_frame + 0xac)) = (*(undefined4 *)(gen_frame + 0x34));
      (*(undefined4 *)(gen_frame + 0x50)) = (*(undefined4 *)(gen_frame + 0x30));
      (*(undefined4 *)(gen_frame + 0x54)) = (*(undefined4 *)(gen_frame + 0x30));
      (*(undefined4 *)(gen_frame + 0x58)) = (*(undefined4 *)(gen_frame + 0x30));
      (*(undefined4 *)(gen_frame + 0x5c)) = (*(undefined4 *)(gen_frame + 0x30));
      (*(undefined4 *)(gen_frame + 0x80)) = (*(undefined4 *)(gen_frame + 0x38));
      (*(undefined4 *)(gen_frame + 0x84)) = (*(undefined4 *)(gen_frame + 0x38));
      (*(undefined4 *)(gen_frame + 0x88)) = (*(undefined4 *)(gen_frame + 0x38));
      (*(undefined4 *)(gen_frame + 0x8c)) = (*(undefined4 *)(gen_frame + 0x38));
      F_00d98cf0(&(*(float *)(gen_frame + 0x70)),&(*(undefined4 *)(gen_frame + 0x80)),&(*(undefined4 *)(gen_frame + 0x50)),&(*(undefined4 *)(gen_frame + 0xa0)));
      fVar7 = (*(float *)(gen_frame + 0x78)) * (*(float *)(gen_frame + 0x90));
      fVar8 = (*(float *)(gen_frame + 0x70)) * (*(float *)(gen_frame + 0x94));
      fVar3 = (*(float *)(gen_frame + 0x74)) * (*(float *)(gen_frame + 0x90));
      fVar4 = (*(float *)(gen_frame + 0x70)) * (*(float *)(gen_frame + 0x90));
      fVar5 = (*(float *)(gen_frame + 0x74)) * (*(float *)(gen_frame + 0x94));
      fVar6 = (*(float *)(gen_frame + 0x78)) * (*(float *)(gen_frame + 0x98));
      (*(float *)(gen_frame + 0x90)) = (((*(float *)(gen_frame + 0x78)) * (*(float *)(gen_frame + 0x94)) - (*(float *)(gen_frame + 0x74)) * (*(float *)(gen_frame + 0x98))) + (*(float *)(gen_frame + 0x9c)) * (*(float *)(gen_frame + 0x70))) +
                 (*(float *)(gen_frame + 0x7c)) * (*(float *)(gen_frame + 0x90));
      (*(float *)(gen_frame + 0x94)) = (((*(float *)(gen_frame + 0x70)) * (*(float *)(gen_frame + 0x98)) - fVar7) + (*(float *)(gen_frame + 0x9c)) * (*(float *)(gen_frame + 0x74))) + (*(float *)(gen_frame + 0x7c)) * (*(float *)(gen_frame + 0x94));
      (*(float *)(gen_frame + 0x98)) = ((fVar3 - fVar8) + (*(float *)(gen_frame + 0x9c)) * (*(float *)(gen_frame + 0x78))) + (*(float *)(gen_frame + 0x7c)) * (*(float *)(gen_frame + 0x98));
      (*(float *)(gen_frame + 0x9c)) = (*(float *)(gen_frame + 0x7c)) * (*(float *)(gen_frame + 0x9c)) - ((fVar5 + fVar4) + fVar6);
    }
    (*(undefined4 *)(gen_frame + 0x60)) = *(undefined4 *)&REFG(undefined, 0x10e15d0);
    (*(undefined4 *)(gen_frame + 0x64)) = *(undefined4 *)&REFG(undefined, 0x10e15d4);
    (*(undefined4 *)(gen_frame + 0x68)) = *(undefined4 *)&REFG(undefined, 0x10e15d8);
    (*(undefined4 *)(gen_frame + 0x6c)) = *(undefined4 *)&REFG(undefined, 0x10e15dc);
    F_00d950d0(((undefined1 *)(gen_frame + 0x40)),&(*(float *)(gen_frame + 0x90)),&(*(undefined4 *)(gen_frame + 0x60)));
    iVar2 = (int)*(short *)((int)this + 0x42);
    this_00 = *(undefined * PTR32 *)((int)this + 0x30);
    if ((*((byte *)GEN_TOP((*(int *)((int)this_00 + 0x1c) + iVar2 * 4))) & 2) == 0) {
      uVar1 = iVar2 * 0x30 + *(int *)((int)this_00 + 0x10);
    }
    else {
      uVar1 = F_00d31930(this_00,iVar2);
    }
    F_00d950d0(&(*(undefined4 *)(gen_frame + 0x20)),uVar1 + 0x10,((undefined1 *)(gen_frame + 0x40)));
    *param_1 = (*(undefined4 *)(gen_frame + 0x20));
    param_1[1] = (*(undefined4 *)(gen_frame + 0x24));
    param_1[2] = (*(undefined4 *)(gen_frame + 0x28));
  }
  F_00c47745((*(uint *)(gen_frame + 0xbc)) ^ (uint)(uint)(gen_frame + 0xc0));
  return (uint)param_1;
}

/* ref: FUN_009f3c60 */
uint F_009f3c60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0x9f3c60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  int param_3 = (int)gen_a3;
  uint * param_4 = (uint *)(uintptr_t)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  undefined4 * puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint * puVar6;
  int iVar7;
  uint * puVar8;
  uint * puVar9;
  uint uVar10;
  byte * pbVar11;
  undefined * this_00;
  byte * pbVar12;
  bool bVar13;
  
  (*(uint * PTR32 *)(gen_frame + 0x68)) = this;
  if (*(int *)((int)this + 0x40) != 0) {
    iVar7 = *(int *)((int)this + 0x40) + -0x10;
    if (iVar7 != 0) {
      ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 0x10))))(*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),iVar7);
    }
    (*(uint * PTR32 *)(gen_frame + 0x68))[0x10] = 0;
  }
  (*(uint * PTR32 *)(gen_frame + 0x68))[0xf] = (*(uint * PTR32 *)(gen_frame + 0x68))[0xf] & 0xfffffffe;
  (*(uint * PTR32 *)(gen_frame + 0x68))[0xd] = 0;
  *(*(uint * PTR32 *)(gen_frame + 0x68)) = 0;
  (*(uint * PTR32 *)(gen_frame + 0x68))[1] = 0;
  (*(uint * PTR32 *)(gen_frame + 0x68))[2] = 0;
  (*(uint * PTR32 *)(gen_frame + 0x68))[3] = 0;
  (*(uint * PTR32 *)(gen_frame + 0x68))[4] = 0;
  (*(uint * PTR32 *)(gen_frame + 0x68))[5] = 0;
  (*(uint * PTR32 *)(gen_frame + 0x68))[6] = 0;
  (*(uint * PTR32 *)(gen_frame + 0x68))[7] = 0;
  puVar9 = param_4;
  puVar6 = (*(uint * PTR32 *)(gen_frame + 0x68));
  for (iVar7 = 8; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar6 = *puVar9;
    puVar9 = puVar9 + 1;
    puVar6 = puVar6 + 1;
  }
  pbVar12 = &REFG(undefined1, 0x10e12f8);
  puVar9 = (*(uint * PTR32 *)(gen_frame + 0x68));
  do {
    bVar2 = (byte)*puVar9;
    bVar13 = bVar2 < *pbVar12;
    if (bVar2 != *pbVar12) {
LAB_009f3d01: ;
      iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
      goto LAB_009f3d06;
    }
    if (bVar2 == 0) break;
    bVar2 = *(byte *)((int)puVar9 + 1);
    bVar13 = bVar2 < pbVar12[1];
    if (bVar2 != pbVar12[1]) goto LAB_009f3d01;
    puVar9 = (uint *)((int)puVar9 + 2);
    pbVar12 = pbVar12 + 2;
  } while (bVar2 != 0);
  iVar7 = 0;
LAB_009f3d06: ;
  if (iVar7 != 0) {
    pbVar12 = &REFG(undefined1, 0x10e1300);
    puVar9 = (*(uint * PTR32 *)(gen_frame + 0x68));
    do {
      bVar2 = (byte)*puVar9;
      bVar13 = bVar2 < *pbVar12;
      if (bVar2 != *pbVar12) {
LAB_009f3d31: ;
        iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
        goto LAB_009f3d36;
      }
      if (bVar2 == 0) break;
      bVar2 = *(byte *)((int)puVar9 + 1);
      bVar13 = bVar2 < pbVar12[1];
      if (bVar2 != pbVar12[1]) goto LAB_009f3d31;
      puVar9 = (uint *)((int)puVar9 + 2);
      pbVar12 = pbVar12 + 2;
    } while (bVar2 != 0);
    iVar7 = 0;
LAB_009f3d36: ;
    if (iVar7 != 0) goto LAB_009f3d3e;
  }
  (*(uint * PTR32 *)(gen_frame + 0x68))[0xf] = (*(uint * PTR32 *)(gen_frame + 0x68))[0xf] | 2;
LAB_009f3d3e: ;
  (*(uint * PTR32 *)(gen_frame + 0x68))[0xc] = param_2;
  uVar10 = (uint)(byte)param_4[8];
  puVar9 = (*(uint * PTR32 *)(gen_frame + 0x68));
  if (uVar10 != 0) {
    (*(undefined4 * PTR32 *)(gen_frame + 0x58)) = (undefined4 *)F_006232c0(param_2,param_1);
    puVar9 = (uint *)0x0;
    if ((*(undefined4 * PTR32 *)(gen_frame + 0x58)) != (undefined4 *)0x0) {
      (*(uint * PTR32 *)(gen_frame + 0x5c)) = *(uint * PTR32 *)(REFG(int, 0x1371270) + 0x18);
      (*(undefined4 *)(gen_frame + 0x60)) = *(*(undefined4 * PTR32 *)(gen_frame + 0x58));
      puVar6 = ((uint *)GEN_TOP(((code *)*(gen_code32 *)(*(*(uint * PTR32 *)(gen_frame + 0x5c)) + 8))
                                 ((*(uint * PTR32 *)(gen_frame + 0x5c)),-(uint)(0xffffffef < uVar10 * 0x60) |
                                           uVar10 * 0x60 + 0x10,0x10)));
      uVar3 = REFG(float, 0x1087f04);
      if (puVar6 == (uint *)0x0) {
        puVar9 = (uint *)0x0;
      }
      else {
        puVar9 = puVar6 + 4;
        *puVar6 = uVar10;
        uVar5 = REFG(float, 0x10e1670);
        uVar4 = REFG(float, 0x108b284);
        iVar7 = uVar10 - 1;
        (*(uint * PTR32 *)(gen_frame + 0x5c)) = puVar9;
        if (-1 < iVar7) {
          puVar6 = puVar6 + 10;
          puVar8 = puVar9;
          do {
            *puVar8 = uVar5;
            puVar6[-5] = uVar5;
            puVar6[-4] = uVar4;
            puVar6[-3] = uVar4;
            puVar6[-2] = 0;
            puVar6[-1] = 0;
            *puVar6 = 0;
            puVar6[2] = 0;
            puVar6[3] = 0;
            puVar6[4] = 0;
            puVar6[6] = 0;
            puVar6[9] = 0;
            puVar6[7] = uVar4;
            puVar6[8] = uVar3;
            *(undefined2 *)(puVar6 + 10) = 0;
            *(undefined2 *)((int)puVar6 + 0x2a) = 0;
            *(undefined2 *)(puVar6 + 0xb) = 0;
            puVar6[0xe] = 0;
            puVar6[0xf] = 0;
            *(undefined2 *)(puVar6 + 0x10) = 0;
            puVar8 = puVar8 + 0x18;
            puVar6 = puVar6 + 0x18;
            iVar7 = iVar7 + -1;
          } while (-1 < iVar7);
        }
      }
      (*(uint * PTR32 *)(gen_frame + 0x68))[0x10] = (uint)puVar9;
      if (uVar10 != 0) {
        (*(int *)(gen_frame + 0x64)) = 0;
        (*(int *)(gen_frame + 0x6c)) = 0;
        (*(uint * PTR32 *)(gen_frame + 0x5c)) = (uint *)uVar10;
        do {
          pbVar11 = &REFG(undefined1, 0x10e1308);
          pbVar12 = (byte *)(param_4[9] + 2 + (*(int *)(gen_frame + 0x6c)));
          do {
            bVar2 = *pbVar12;
            bVar13 = bVar2 < *pbVar11;
            if (bVar2 != *pbVar11) {
LAB_009f3e93: ;
              iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
              goto LAB_009f3e98;
            }
            if (bVar2 == 0) break;
            bVar2 = pbVar12[1];
            bVar13 = bVar2 < pbVar11[1];
            if (bVar2 != pbVar11[1]) goto LAB_009f3e93;
            pbVar12 = pbVar12 + 2;
            pbVar11 = pbVar11 + 2;
          } while (bVar2 != 0);
          iVar7 = 0;
LAB_009f3e98: ;
          if ((iVar7 != 0) || (puVar9 = (uint *)0x0, param_1 != 1)) {
            uVar10 = (uint)*(byte *)(param_4[9] + (*(int *)(gen_frame + 0x6c)) + 1);
            iVar7 = *(int *)(param_3 + 8);
            puVar1 = (undefined4 *)(iVar7 + uVar10 * 0x38);
            (*(undefined4 *)(gen_frame + 0x10)) = *(undefined4 *)(iVar7 + 0x10 + uVar10 * 0x38);
            (*(undefined4 *)(gen_frame + 0x14)) = *(undefined4 *)(iVar7 + 0x14 + uVar10 * 0x38);
            (*(undefined4 *)(gen_frame + 0x18)) = *(undefined4 *)(iVar7 + 0x18 + uVar10 * 0x38);
            (*(undefined4 *)(gen_frame + 0x20)) = puVar1[8];
            (*(undefined4 *)(gen_frame + 0x3c)) = puVar1[0xb];
            (*(undefined4 *)(gen_frame + 0x24)) = puVar1[9];
            (*(undefined4 *)(gen_frame + 0x28)) = puVar1[10];
            (*(undefined4 *)(gen_frame + 0x34)) = puVar1[7];
            (*(undefined4 *)(gen_frame + 0x0)) = *puVar1;
            (*(undefined4 *)(gen_frame + 0x4)) = puVar1[1];
            (*(undefined4 *)(gen_frame + 0x8)) = puVar1[2];
            (*(undefined4 *)(gen_frame + 0xc)) = *(undefined4 *)(iVar7 + 0xc + uVar10 * 0x38);
            (*(undefined2 *)(gen_frame + 0x40)) = (undefined2)param_1;
            uVar10 = F_00d32e80((*(undefined4 *)(gen_frame + 0x60)),param_4[9] + (*(int *)(gen_frame + 0x6c)) + 2,0);
            (*(short *)(gen_frame + 0x42)) = (short)uVar10;
            puVar9 = (uint *)F_00d32e80((*(undefined4 *)(gen_frame + 0x60)),param_4[9] + 0x22 + (*(int *)(gen_frame + 0x6c)),0);
            puVar6 = (*(uint * PTR32 *)(gen_frame + 0x68));
            (*(short *)(gen_frame + 0x44)) = (short)puVar9;
            (*(undefined4 * PTR32 *)(gen_frame + 0x30)) = (*(undefined4 * PTR32 *)(gen_frame + 0x58));
            (*(undefined4 *)(gen_frame + 0x38)) = puVar1[0xc];
            if (((short)uVar10 != -1) && ((short)puVar9 != -1)) {
              this_00 = (undefined *)((*(uint * PTR32 *)(gen_frame + 0x68))[0x10] + (*(int *)(gen_frame + 0x64)));
              *(uint *)((int)this_00 + 0x50) = REFG(float, 0x1087f04);
              F_009fb6f0(this_00,&(*(undefined4 *)(gen_frame + 0x0)));
              puVar9 = (uint *)0x1;
              *(uint *)((int)this_00 + 0x54) = param_2;
              *(undefined2 *)((int)this_00 + 0x58) = 0x100;
              puVar6[0xd] = puVar6[0xd] + 1;
            }
          }
          (*(int *)(gen_frame + 0x6c)) = (*(int *)(gen_frame + 0x6c)) + 0x42;
          (*(int *)(gen_frame + 0x64)) = (*(int *)(gen_frame + 0x64)) + 0x60;
          (*(uint * PTR32 *)(gen_frame + 0x5c)) = (uint *)((int)(*(uint * PTR32 *)(gen_frame + 0x5c)) - 1);
        } while ((*(uint * PTR32 *)(gen_frame + 0x5c)) != (uint *)0x0);
      }
    }
  }
  return (uint)puVar9;
}

/* ref: FUN_009f4000 */
uint F_009f4000(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f4000u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  byte bVar1;
  uint uVar2;
  uint * puVar3;
  uint * puVar4;
  uint * puVar5;
  uint uVar6;
  int iVar7;
  int local_10;
  int local_c;
  uint local_8;
  
  F_009f1970(this);
  *(int *)((int)this + 8) = param_1;
  bVar1 = *(byte *)(param_2 + 1);
  *(uint *)this = (uint)bVar1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x40);
  *(uint *)((int)this + 4) = uVar2;
  if (2 < uVar2) {
    uVar2 = 2;
  }
  *(uint *)((int)this + 4) = uVar2;
  uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                    (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),(uint)bVar1 * 4,0x10);
  *(uint *)((int)this + 0xc) = uVar2;
  uVar2 = 0;
  local_8 = 0;
  if (*(int *)this != 0) {
    local_10 = 0;
    do {
      uVar2 = *(uint *)((int)this + 4);
      uVar6 = -(uint)((int)((ulonglong)uVar2 * 0x50 >> 0x20) != 0) | (uint)((ulonglong)uVar2 * 0x50)
      ;
      puVar3 = ((uint *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x18) + 8))))
                                 (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x18),
                                  -(uint)(0xffffffef < uVar6) | uVar6 + 0x10,0x10)));
      if (puVar3 == (uint *)0x0) {
        puVar5 = (uint *)0x0;
      }
      else {
        *puVar3 = uVar2;
        iVar7 = uVar2 - 1;
        puVar5 = puVar3 + 4;
        if (-1 < iVar7) {
          puVar3 = puVar3 + 0xe;
          puVar4 = puVar5;
          do {
            puVar3[-2] = GEN_FLT_TO(puVar3[-2], REFG(float, 0x1375ac0));
            puVar3[-1] = GEN_FLT_TO(puVar3[-1], REFG(float, 0x1375ac4));
            *puVar3 = GEN_FLT_TO(*puVar3, REFG(float, 0x1375ac8));
            puVar3[2] = 0;
            puVar3[3] = 0;
            puVar3[5] = 0;
            puVar3[6] = 0;
            puVar3[4] = 0;
            *puVar4 = 0;
            puVar4[1] = 0;
            puVar4[2] = 0;
            puVar4[3] = 0;
            puVar4[4] = 0;
            puVar4[5] = 0;
            puVar4[6] = 0;
            puVar4[7] = 0;
            puVar4 = puVar4 + 0x14;
            puVar3 = puVar3 + 0x14;
            iVar7 = iVar7 + -1;
          } while (-1 < iVar7);
        }
      }
      *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 0xc) + local_8 * 4))) = puVar5;
      iVar7 = *(int *)(param_2 + 0xc);
      uVar2 = 0;
      if (*(int *)((int)this + 4) != 0) {
        local_c = 0;
        do {
          F_009f3c60(((undefined *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + local_8 * 4))) + local_c))),uVar2,
                       param_1,param_2,iVar7 + local_10);
          local_c = local_c + 0x50;
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)((int)this + 4));
      }
      local_10 = local_10 + 0x28;
      uVar2 = local_8 + 1;
      local_8 = uVar2;
    } while (uVar2 < *(uint *)this);
  }
  return uVar2;
}

/* ref: FUN_009f4180 */
uint F_009f4180(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f4180u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(uint *)((int)this + 4) != 0) {
    piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_2 * 4))) + 0x34)));
    do {
      if ((*piVar1 != 0) &&
         (this_00 = (undefined *)(*piVar1 * 0x60 + -0x60 + piVar1[3]), this_00 != (undefined *)0x0)) {
        F_009f3740(this_00,param_1);
        return (uint)param_1;
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 0x14;
    } while (uVar2 < *(uint *)((int)this + 4));
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1375ac0));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1375ac4));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1375ac8));
  return (uint)param_1;
}

/* ref: FUN_009f4200 */
uint F_009f4200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f4200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  uVar1 = F_009f4180(this,((undefined1 *)(gen_frame + 0x0)),param_2);
  F_009f0e00(this,param_1,uVar1);
  return param_1;
}

/* ref: FUN_009f4250 */
uint F_009f4250(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f4250u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int param_2 = (int)gen_a2;
  undefined * this_00;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(uint *)((int)this + 4) != 0) {
    piVar1 = ((int *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0xc) + param_2 * 4))) + 0x34)));
    do {
      if ((*piVar1 != 0) &&
         (this_00 = (undefined *)(*piVar1 * 0x60 + -0x60 + piVar1[3]), this_00 != (undefined *)0x0)) {
        F_009f3920(this_00,param_1);
        return (uint)param_1;
      }
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 0x14;
    } while (uVar2 < *(uint *)((int)this + 4));
  }
  *param_1 = GEN_FLT_TO(*param_1, REFG(float, 0x1302c90));
  param_1[1] = GEN_FLT_TO(param_1[1], REFG(float, 0x1302c94));
  param_1[2] = GEN_FLT_TO(param_1[2], REFG(float, 0x1302c98));
  return (uint)param_1;
}

/* ref: FUN_009f42d0 */
uint F_009f42d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f42d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  uint uVar1;
  
  uVar1 = F_009f4250(this,((undefined1 *)(gen_frame + 0x0)),param_2);
  F_009f0e00(this,param_1,uVar1);
  return param_1;
}

/* ref: FUN_009f4320 */
uint F_009f4320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f4320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x120];
  ushort uVar1;
  uint uVar2;
  undefined4 * puVar3;
  int iVar4;
  undefined * pvVar5;
  undefined4 * puVar6;
  char * pcVar7;
  
  (*(uint *)(gen_frame + 0x10c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x110);
  pvVar5 = (undefined *)((int)((int)(uintptr_t)param_1) * 0x30 + (int)this);
  switch((unsigned int)(uintptr_t)(param_1)) {
  case (undefined *)0x0: ;
    uVar2 = F_00623160(*(undefined * PTR32 *)((int)this + 0x10),"j_ude_a_r");
    uVar1 = (ushort)uVar2;
    pcVar7 = "j_te_r";
    break;
  case (undefined *)0x1: ;
    uVar2 = F_00623160(*(undefined * PTR32 *)((int)this + 0x10),"j_ude_a_l");
    uVar1 = (ushort)uVar2;
    pcVar7 = "j_te_l";
    break;
  case (undefined *)0x2: ;
    uVar2 = F_00623160(*(undefined * PTR32 *)((int)this + 0x10),"j_asi_a_r");
    uVar1 = (ushort)uVar2;
    pcVar7 = "j_asi_d_r";
    break;
  case (undefined *)0x3: ;
    uVar2 = F_00623160(*(undefined * PTR32 *)((int)this + 0x10),"j_asi_a_l");
    uVar1 = (ushort)uVar2;
    pcVar7 = "j_asi_d_l";
    break;
  default: ;
    goto switchD_009f4366_default;
  }
  *(ushort *)((int)pvVar5 + 0x30) = uVar1 & 0xfff;
  uVar2 = F_00623160(*(undefined * PTR32 *)((int)this + 0x10),pcVar7);
  param_1 = (undefined *)(uVar2 & 0xffff0fff);
  *(ushort *)((int)pvVar5 + 0x32) = (ushort)uVar2 & 0xfff;
switchD_009f4366_default: ;
  if ((*(short *)((int)pvVar5 + 0x30) == 0xfff) ||
     (param_1 = (undefined *)0xfff, *(short *)((int)pvVar5 + 0x32) == 0xfff)) {
    *(undefined1 *)((int)pvVar5 + 0x20) = 0;
  }
  else {
    *(undefined1 *)((int)pvVar5 + 0x20) = 1;
    uVar2 = F_0054fa20(((undefined4 *)(gen_frame + 0xc0)),*(int *)((int)this + 0x10) + 0x10);
    puVar3 = (undefined4 *)F_004f45d0(((undefined1 *)(gen_frame + 0x0)),uVar2);
    uVar1 = *(ushort *)((int)pvVar5 + 0x32);
    puVar6 = ((undefined4 *)(gen_frame + 0x80));
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    F_0064ce50(*(undefined * PTR32 *)((int)this + 0x10),((undefined1 *)(gen_frame + 0x40)),(uint)uVar1);
    puVar3 = (undefined4 *)F_004ef350(((undefined1 *)(gen_frame + 0x0)),(uint)((undefined1 *)(gen_frame + 0x40)),(uint)((undefined4 *)(gen_frame + 0x80)));
    puVar6 = ((undefined4 *)(gen_frame + 0xc0));
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar6 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar6 = puVar6 + 1;
    }
    *(undefined4 *)((int)pvVar5 + 0x40) = (*(undefined4 *)(gen_frame + 0xf0));
    *(undefined4 *)((int)pvVar5 + 0x44) = (*(undefined4 *)(gen_frame + 0xf4));
    *(undefined4 *)((int)pvVar5 + 0x48) = (*(undefined4 *)(gen_frame + 0xf8));
    *(undefined4 *)((int)pvVar5 + 0x4c) = 0;
    param_1 = pvVar5;
  }
  F_00c47745((*(uint *)(gen_frame + 0x10c)) ^ (uint)(uint)(gen_frame + 0x110));
  return (uint)param_1;
}

/* ref: FUN_009f44d0 */
unsigned int F_009f44d0(unsigned int gen_a0)
{
  GEN_ENTER(0x9f44d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x14) = 0;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x20) != 0) {
      F_00406b30(*(int *)(iVar1 + 0x20));
      *(undefined4 *)(iVar1 + 0x20) = 0;
    }
    F_00406ad0(iVar1);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  return 0;
}

/* ref: FUN_009f4510 */
uint F_009f4510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f4510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int iVar1;
  undefined4 * this_00;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 0x18);
  *(undefined4 *)((int)this + 0x14) = 0;
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x20) != 0) {
      F_00406b30(*(int *)(iVar1 + 0x20));
      *(undefined4 *)(iVar1 + 0x20) = 0;
    }
    F_00406ad0(iVar1);
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  *(int *)((int)this + 0x14) = param_1;
  *(undefined4 *)this = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0x2c);
  this_00 = (undefined4 *)F_00406b90(0x24,0,0);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    *this_00 = ((code *)REFP(0x667370));
    this_00[1] = 0x2000000;
    this_00[5] = 0;
    this_00[6] = 0;
    this_00[7] = 0;
    this_00[8] = 0;
  }
  *(undefined4 * PTR32 *)((int)this + 0x18) = this_00;
  uVar2 = F_00b4e3f0(this_00,param_2);
  *(uint *)((int)this + 0x10) = *(uint *)((int)this + 0x10) | 1;
  return uVar2;
}

/* ref: FUN_009f5260 */
uint F_009f5260(unsigned int gen_a0)
{
  GEN_ENTER(0x9f5260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int * piVar5;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10e16d4));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x10e16bc));
  piVar5 = (int *)((int)this + 0xc);
  iVar4 = 4;
  do {
    if (*piVar5 != 0) {
      ((code *)*(gen_code32 *)(*(int *)*piVar5 + 4))((int *)*piVar5,this);
    }
    piVar5 = piVar5 + 1;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  iVar4 = *(int *)((int)this + 0x1c);
  if (iVar4 != 0) {
    iVar2 = 0;
    if (0 < *(int *)(iVar4 + 0x88)) {
      piVar5 = *(int * PTR32 *)(iVar4 + 0x84);
      do {
        if (*piVar5 == (int)this + 8) goto LAB_009f52c2;
        iVar2 = iVar2 + 1;
        piVar5 = piVar5 + 1;
      } while (iVar2 < *(int *)(iVar4 + 0x88));
    }
    iVar2 = -1;
LAB_009f52c2: ;
    *(int *)(iVar4 + 0x88) = *(int *)(iVar4 + 0x88) + -1;
    if (*(int *)(iVar4 + 0x88) != iVar2) {
      *((undefined4 *)GEN_TOP((*(int *)(iVar4 + 0x84) + iVar2 * 4))) =
           *((undefined4 *)GEN_TOP((*(int *)(iVar4 + 0x84) + *(int *)(iVar4 + 0x88) * 4)));
    }
  }
  puVar1 = *(undefined4 * PTR32 *)((int)this + 0x1c);
  if (puVar1 != (undefined4 *)0x0) {
    ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
    *(undefined4 *)((int)this + 0x1c) = 0;
  }
  uVar3 = 0;
  if (*(int *)((int)this + 0x20) != 0) {
    uVar3 = F_0050c620(*(int *)((int)this + 0x20),0,0);
    *(undefined4 *)((int)this + 0x20) = 0;
  }
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[4])REFP(0x10943bc));
  *(undefined * PTR32 * PTR32 *)((int)this + 8) = (*(undefined * PTR32 (*)[5])REFP(0x10e1654));
  return uVar3;
}

/* ref: FUN_009f5320 */
uint F_009f5320(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x9f5320u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int * piVar1;
  LPVOID pvVar2;
  undefined * this_00;
  uint uVar3;
  
  pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  this_00 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)pvVar2 + 0x2c) + 4))))
                              (*(int * PTR32 *)((int)pvVar2 + 0x2c),0xa0)));
  *(undefined2 *)((int)this_00 + 4) = 0xa0;
  uVar3 = F_00d43510(this_00,param_1,param_2 & 0xff,param_3);
  *(uint *)((int)this + 0x1c) = uVar3;
  if (*(uint *)(uVar3 + 0x88) == (*(uint *)(uVar3 + 0x8c) & 0x3fffffff)) {
    F_00d95710(&REFG(undefined * PTR32, 0x13516ac),(int *)(uVar3 + 0x84),4);
  }
  piVar1 = ((int *)GEN_TOP((*(int *)(uVar3 + 0x84) + *(int *)(uVar3 + 0x88) * 4)));
  *piVar1 = (int)this + 8;
  *(int *)(uVar3 + 0x88) = *(int *)(uVar3 + 0x88) + 1;
  return (uint)piVar1;
}

/* ref: FUN_009f53b0 */
uint F_009f53b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f53b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  uVar2 = F_009f2f60(this,param_1,param_2);
  if (uVar2 == 0) {
    puVar3 = (undefined4 *)F_0050eba0(*(undefined * PTR32 *)((int)this + 0x84),param_1);
    puVar1 = (undefined4 *)puVar3[1];
    for (puVar3 = (undefined4 *)*puVar3; puVar3 != puVar1; puVar3 = puVar3 + 7) {
      puVar4 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar4 = (undefined4 *)*puVar3;
      }
      uVar2 = F_009f2f60(this,puVar4,param_2);
      if (uVar2 != 0) {
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

/* ref: FUN_009f5410 */
uint F_009f5410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x9f5410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  ushort uVar1;
  undefined * this_00;
  uint uVar2;
  
  this_00 = (undefined *)F_009f32e0(this,param_1);
  if (this_00 != (undefined *)0x0) {
    if ((char)param_2 == '\0') {
      uVar2 = F_00506ea0(this_00,param_1);
      return uVar2;
    }
    uVar1 = F_005036f0(this_00,param_1);
    if (-1 < (short)uVar1) {
      uVar2 = F_005053b0(this_00,(uint)uVar1);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_009f5460 */
ushort F_009f5460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x9f5460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 * puVar1;
  ushort uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  
  uVar2 = F_009f3020(this,param_1);
  if (uVar2 == 0xffff) {
    puVar3 = (undefined4 *)F_0050eba0(*(undefined * PTR32 *)((int)this + 0x84),param_1);
    puVar1 = (undefined4 *)puVar3[1];
    for (puVar3 = (undefined4 *)*puVar3; puVar3 != puVar1; puVar3 = puVar3 + 7) {
      puVar4 = puVar3;
      if (0xf < (uint)puVar3[5]) {
        puVar4 = (undefined4 *)*puVar3;
      }
      uVar2 = F_009f3020(this,puVar4);
      if (uVar2 != 0xffff) {
        return uVar2;
      }
    }
    uVar2 = 0xffff;
  }
  return uVar2;
}

