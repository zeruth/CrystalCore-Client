#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00ae1380 */
unsigned int F_00ae1380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae1380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  int iVar3;
  
  piVar2 = (int *)((int)this + 0xc);
  iVar3 = 8;
  do {
    iVar1 = piVar2[-1];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xe4) == param_1)) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    iVar1 = *piVar2;
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xe4) == param_1)) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    iVar1 = piVar2[1];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xe4) == param_1)) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    iVar1 = piVar2[2];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xe4) == param_1)) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    iVar1 = piVar2[3];
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xe4) == param_1)) {
      *(byte *)(iVar1 + 0x8f) = *(byte *)(iVar1 + 0x8f) | 0x2c;
    }
    piVar2 = piVar2 + 5;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return 0;
}

/* ref: FUN_00ae1410 */
byte F_00ae1410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae1410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  uint uVar5;
  
  uVar5 = 0;
  piVar4 = (int *)((int)this + 8);
  do {
    piVar2 = (int *)*piVar4;
    if ((piVar2 != (int *)0x0) &&
       (bVar1 = *(byte *)((int)piVar2 + 0x8a), ((byte)param_1 & 1 < bVar1) != 0)) {
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x68))(piVar2);
      if ((char)uVar3 == '\0') {
        return 0;
      }
      if ((*(byte *)((int)piVar2 + 0x8e) & 0x80) != 0) {
        uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x70))(piVar2);
        if ((char)uVar3 == '\0') {
          return 0;
        }
        if ((bVar1 == 7) && ((char)piVar2[99] == '\0')) {
          return 0;
        }
      }
    }
    uVar5 = uVar5 + 1;
    piVar4 = piVar4 + 1;
    if (0x27 < uVar5) {
      return 1;
    }
  } while( true );
}

/* ref: FUN_00ae14a0 */
uint F_00ae14a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae14a0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00ae14b0 */
uint F_00ae14b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xae14b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  int param_3 = (int)gen_a3;
  uint uVar1;
  undefined * this_00;
  undefined2 uVar2;
  
  ((code *)*(gen_code32 *)(*(int *)this + 0x40))(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,(undefined4)gen_fl2bits((float)(float10)0));
  *(undefined4 *)((int)this + 0x80) = param_1;
  *(undefined1 *)((int)this + 0x8a) = 4;
  uVar2 = (undefined2)param_2;
  if (param_3 == 0) {
    uVar2 = 0xffff;
  }
  *(undefined2 *)((int)this + 0x1e8) = uVar2;
  F_00a5f430(this,param_3);
  ((code *)*(gen_code32 *)(*(int *)this + 0x80))(this);
  uVar1 = F_00ab26f0(param_1);
  this_00 = (undefined *)F_006b8c00();
  uVar1 = F_00718ff0(this_00,this,uVar1);
  return uVar1;
}

/* ref: FUN_00ae1540 */
uint F_00ae1540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae1540u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return in_ecx + 400 + param_2 * 4;
}

/* ref: FUN_00ae1560 */
uint F_00ae1560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae1560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)((int)this + 0x1d0);
  if (uVar1 < 0x10) {
    *(undefined4 *)((int)this + uVar1 * 4 + 400) = 0;
    uVar1 = *(uint *)((int)this + 0x1d0);
    *(undefined4 *)((int)this + uVar1 * 4 + 400) = param_1;
    *(int *)((int)this + 0x1d0) = *(int *)((int)this + 0x1d0) + 1;
  }
  return uVar1;
}

/* ref: FUN_00ae15a0 */
uint F_00ae15a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae15a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 in_EAX = 0;
  uint uVar1;
  
  if (*(undefined * PTR32 *)((int)this + 0xf0) != (undefined *)0x0) {
    uVar1 = F_005eb180(*(undefined * PTR32 *)((int)this + 0xf0),param_1,0);
    return uVar1;
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

/* ref: Client::Game::Object::Treasure::vf52 */
unsigned int F_00ae15d0(unsigned int gen_a0)
{
  GEN_ENTER(0xae15d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  
  this_00 = *(undefined * PTR32 *)(this + 0xf0);
  if (this[0x1d8] != (undefined1)0x0) {
    if (this_00 != (undefined *)0x0) {
      F_005eb180(this_00,2,0);
    }
    *(undefined4 *)(this + 0x180) = 2;
    return 0;
  }
  if (this_00 != (undefined *)0x0) {
    F_005eb180(this_00,3,0);
  }
  *(undefined4 *)(this + 0x180) = 0;
  return 0;
}

/* ref: Client::Game::Object::Treasure::vf43 */
uint F_00ae1620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae1620u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  F_00a5f970((undefined *)this,param_1);
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0xd4))(this);
  return uVar1;
}

/* ref: Client::Game::Object::Treasure::vf53 */
unsigned int F_00ae1640(unsigned int gen_a0)
{
  GEN_ENTER(0xae1640u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x184) = 0;
  *(undefined4 *)(in_ecx + 0x1d0) = 0;
  *(undefined4 *)(in_ecx + 0x188) = 0;
  *(undefined4 *)(in_ecx + 0x18c) = 0;
  *(undefined4 *)(in_ecx + 0x1d4) = 0;
  *(undefined1 *)(in_ecx + 0x1d8) = 0;
  *(undefined4 *)(in_ecx + 0x1dc) = 0;
  *(undefined2 *)(in_ecx + 0x1e0) = 0;
  *(undefined4 *)(in_ecx + 400) = 0;
  *(undefined4 *)(in_ecx + 0x194) = 0;
  *(undefined4 *)(in_ecx + 0x198) = 0;
  *(undefined4 *)(in_ecx + 0x19c) = 0;
  *(undefined4 *)(in_ecx + 0x1a0) = 0;
  *(undefined4 *)(in_ecx + 0x1a4) = 0;
  *(undefined4 *)(in_ecx + 0x1a8) = 0;
  *(undefined4 *)(in_ecx + 0x1ac) = 0;
  *(undefined4 *)(in_ecx + 0x1b0) = 0;
  *(undefined4 *)(in_ecx + 0x1b4) = 0;
  *(undefined4 *)(in_ecx + 0x1b8) = 0;
  *(undefined4 *)(in_ecx + 0x1bc) = 0;
  *(undefined4 *)(in_ecx + 0x1c0) = 0;
  *(undefined4 *)(in_ecx + 0x1c4) = 0;
  *(undefined4 *)(in_ecx + 0x1c8) = 0;
  *(undefined4 *)(in_ecx + 0x1cc) = 0;
  *(undefined1 *)(in_ecx + 0x1e2) = 0;
  *(undefined4 *)(in_ecx + 0x1e4) = 0;
  *(undefined4 *)(in_ecx + 0x1ec) = 0;
  *(undefined4 *)(in_ecx + 0x180) = 0;
  return 0;
}

/* ref: FUN_00ae1700 */
unsigned int F_00ae1700(unsigned int gen_a0)
{
  GEN_ENTER(0xae1700u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x1d8) == '\0') {
    *(undefined1 *)((int)this + 0x1d8) = 1;
    if (*(undefined * PTR32 *)((int)this + 0xf0) != (undefined *)0x0) {
      F_005eb180(*(undefined * PTR32 *)((int)this + 0xf0),0,0);
    }
    *(undefined4 *)((int)this + 0x180) = 1;
  }
  return 0;
}

/* ref: FUN_00ae1740 */
unsigned int F_00ae1740(unsigned int gen_a0, float gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0xae1740u, gen_a0, gen_trace_f(gen_a1), gen_a2, gen_trace_f(gen_a3));
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  float param_4 = (float)gen_a3;
  if (*(char *)(param_1 + 0x1d8) == '\0') {
    *(float *)(param_1 + 0x184) = param_2;
    *(float *)(param_1 + 0x18c) = param_4;
    *(undefined1 *)(param_1 + 0x1d8) = 1;
    if (*(undefined * PTR32 *)(param_1 + 0xf0) != (undefined *)0x0) {
      F_005eb180(*(undefined * PTR32 *)(param_1 + 0xf0),0,0);
    }
    *(undefined4 *)(param_1 + 0x180) = 1;
  }
  return 0;
}

/* ref: FUN_00ae17a0 */
uint F_00ae17a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae17a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 uVar1;
  int iVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = 0;
  *((undefined4 *)GEN_TOP(((int)this + (uint)*(byte *)(param_1 + 0x14) * 4 + 400))) =
       *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 0x1d0) = 0;
  piVar3 = (int *)((int)this + 0x194);
  while (piVar3[-1] != 0) {
    *(int *)((int)this + 0x1d0) = *(int *)((int)this + 0x1d0) + 1;
    iVar2 = *(int *)((int)this + 0x1d0);
    if (((*piVar3 == 0) || (*(int *)((int)this + 0x1d0) = iVar2 + 1, piVar3[1] == 0)) ||
       (*(int *)((int)this + 0x1d0) = iVar2 + 2, piVar3[2] == 0)) break;
    iVar4 = iVar4 + 4;
    piVar3 = piVar3 + 4;
    *(int *)((int)this + 0x1d0) = iVar2 + 3;
    if (0xf < iVar4) break;
  }
  *(undefined4 *)((int)this + 0x1d4) = 1;
  *(bool *)((int)this + 0x1e1) = *(int *)((int)this + 0x1d0) != 0;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  if (*(char *)((int)this + 0x1d8) == '\0') {
    *(undefined4 *)((int)this + 0x184) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)((int)this + 0x18c) = uVar1;
    *(undefined1 *)((int)this + 0x1d8) = 1;
    if (*(undefined * PTR32 *)((int)this + 0xf0) != (undefined *)0x0) {
      piVar3 = (int *)F_005eb180(*(undefined * PTR32 *)((int)this + 0xf0),0,0);
    }
    *(undefined4 *)((int)this + 0x180) = 1;
  }
  return (uint)piVar3;
}

/* ref: FUN_00ae18c0 */
byte F_00ae18c0(unsigned int gen_a0)
{
  GEN_ENTER(0xae18c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x1e4) != 0;
}

/* ref: FUN_00ae18d0 */
byte F_00ae18d0(unsigned int gen_a0)
{
  GEN_ENTER(0xae18d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(char *)(in_ecx + 0x1e2) != '\0';
}

/* ref: Client::Game::Object::Treasure::vf49 */
byte F_00ae18e0(void)
{
  GEN_ENTER(0xae18e0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Game::Object::Treasure::vf50 */
byte F_00ae18f0(unsigned int gen_a0)
{
  GEN_ENTER(0xae18f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x9c))(this);
  return (char)uVar1 == '\x01';
}

/* ref: FUN_00ae1910 */
unsigned int F_00ae1910(unsigned int gen_a0)
{
  GEN_ENTER(0xae1910u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)(in_ecx + 0x180) = 2;
  *(undefined1 *)(in_ecx + 0x1e0) = 1;
  return 0;
}

/* ref: FUN_00ae1930 */
uint F_00ae1930(unsigned int gen_a0)
{
  GEN_ENTER(0xae1930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  code * pcVar1;
  uint in_EAX = 0;
  
  if ((*(uint *)((int)this + 0x1ec) < 2) && (*(char *)((int)this + 0x1d8) != '\0')) {
    pcVar1 = *(gen_code32 *)(*(int *)this + 0x28);
    *(byte *)((int)this + 0x8e) = *(byte *)((int)this + 0x8e) & 0xfd;
    in_EAX = (*pcVar1)(this,0,0);
    *(undefined4 *)((int)this + 0x180) = 4;
  }
  return in_EAX;
}

/* ref: FUN_00ae1970 */
double F_00ae1970(unsigned int gen_a0)
{
  GEN_ENTER(0xae1970u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  double dVar1;
  
  if ((REFG(int, 0x1379694) != 0) && (param_1 != 0)) {
    dVar1 = F_00a600a0(REFG(int, 0x1379694),param_1);
    return dVar1;
  }
  return 0.0;
}

/* ref: FUN_00ae19a0 */
uint F_00ae19a0(unsigned int gen_a0)
{
  GEN_ENTER(0xae19a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  
  uVar3 = 0;
  while ((((0x27 < uVar3 || (piVar2 = ((int *)GEN_TOP((&REFG(undefined4, 0x14c0880))[uVar3])), piVar2 == (int *)0x0)) ||
          (piVar2[0x1d] != param_1)) || (uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2), uVar1 != 4))) {
    uVar3 = uVar3 + 1;
    if (0x27 < uVar3) {
      uVar3 = 0;
      while (((piVar2 = (int *)F_00b79f30(&REFG(undefined, 0x14c5798),uVar3), piVar2 == (int *)0x0 ||
              (piVar2[0x1d] != param_1)) || (uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 4))(piVar2), uVar1 != 4)
             )) {
        uVar3 = uVar3 + 1;
        if (0x3b < uVar3) {
          return 0;
        }
      }
      return (uint)piVar2;
    }
  }
  return (uint)piVar2;
}

/* ref: FUN_00ae1a20 */
uint F_00ae1a20(unsigned int gen_a0)
{
  GEN_ENTER(0xae1a20u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 uVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  undefined4 * puVar5;
  
  puVar2 = (undefined4 *)F_00ae19a0(*param_1);
  puVar3 = puVar2;
  if ((puVar2 != (undefined4 *)0x0) && (*(char *)(puVar2 + 0x76) == '\0')) {
    uVar4 = 0;
    if (*(char *)(param_1 + 1) != '\0') {
      puVar3 = puVar2 + 100;
      puVar5 = param_1 + 5;
      do {
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *puVar5;
        }
        uVar4 = uVar4 + 1;
        puVar5 = puVar5 + 1;
        puVar3 = puVar3 + 1;
      } while (uVar4 < *(byte *)(param_1 + 1));
    }
    puVar2[0x74] = (uint)*(byte *)(param_1 + 1);
    *(bool *)((int)puVar2 + 0x1e1) = *(char *)(param_1 + 1) != '\0';
    uVar1 = param_1[4];
    if (*(char *)(puVar2 + 0x76) == '\0') {
      puVar2[0x61] = param_1[2];
      puVar2[99] = uVar1;
      *(undefined1 *)(puVar2 + 0x76) = 1;
      if ((undefined *)puVar2[0x3c] != (undefined *)0x0) {
        puVar3 = (undefined4 *)F_005eb180((undefined *)puVar2[0x3c],0,0);
      }
      puVar2[0x60] = 1;
    }
  }
  return (uint)puVar3;
}

/* ref: FUN_00ae1ad0 */
byte F_00ae1ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xae1ad0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int iVar2;
  int * piVar3;
  
  iVar2 = 0;
  piVar3 = (int *)((int)this + 4);
  while( true ) {
    if (*piVar3 == -0x20000000) {
      return 0;
    }
    uVar1 = F_00ab24a0(piVar3[2]);
    if (uVar1 == 0) break;
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 10;
    if (0x3f < iVar2) {
      return 0;
    }
  }
  return 1;
}

/* ref: FUN_00ae1b10 */
uint F_00ae1b10(unsigned int gen_a0)
{
  GEN_ENTER(0xae1b10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0xa08);
}

/* ref: FUN_00ae1b20 */
float F_00ae1b20(unsigned int gen_a0)
{
  GEN_ENTER(0xae1b20u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * pfVar1;
  int iVar2;
  float10 fVar3;
  
  fVar3 = (float10)0.0;
  iVar2 = 0;
  pfVar1 = (float *)((int)this + 0x4c);
  do {
    if (pfVar1[-0x12] == -3.689349e+19) break;
    if (fVar3 < (float10)pfVar1[-10]) {
      fVar3 = (float10)pfVar1[-10];
    }
    if (pfVar1[-8] == -3.689349e+19) break;
    if (fVar3 < (float10)*pfVar1) {
      fVar3 = (float10)*pfVar1;
    }
    if (pfVar1[2] == -3.689349e+19) break;
    if (fVar3 < (float10)pfVar1[10]) {
      fVar3 = (float10)pfVar1[10];
    }
    if (pfVar1[0xc] == -3.689349e+19) break;
    if (fVar3 < (float10)pfVar1[0x14]) {
      fVar3 = (float10)pfVar1[0x14];
    }
    iVar2 = iVar2 + 4;
    pfVar1 = pfVar1 + 0x28;
  } while (iVar2 < 0x40);
  return (float)fVar3;
}

/* ref: FUN_00ae1be0 */
float10 F_00ae1be0(unsigned int gen_a0)
{
  GEN_ENTER(0xae1be0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * pfVar1;
  int iVar2;
  bool bVar3;
  float10 fVar4;
  
  fVar4 = (float10)REFG(float, 0x1090998);
  iVar2 = 0;
  pfVar1 = (float *)((int)this + 0x48);
  do {
    if (pfVar1[-0x11] == -3.689349e+19) break;
    if ((float10)pfVar1[-10] < fVar4) {
      fVar4 = (float10)pfVar1[-10];
    }
    if (pfVar1[-7] == -3.689349e+19) break;
    if ((float10)*pfVar1 < fVar4) {
      fVar4 = (float10)*pfVar1;
    }
    if (pfVar1[3] == -3.689349e+19) break;
    if ((float10)pfVar1[10] < fVar4) {
      fVar4 = (float10)pfVar1[10];
    }
    if (pfVar1[0xd] == -3.689349e+19) break;
    if ((float10)pfVar1[0x14] < fVar4) {
      fVar4 = (float10)pfVar1[0x14];
    }
    iVar2 = iVar2 + 4;
    pfVar1 = pfVar1 + 0x28;
  } while (iVar2 < 0x40);
  bVar3 = GEN_ISNAN(fVar4) || GEN_ISNAN((float10)REFG(double, 0x10909a0));
  if (bVar3 != (bVar3 || fVar4 == (float10)REFG(double, 0x10909a0))) {
    fVar4 = (float10)0.0;
  }
  return fVar4;
}

/* ref: FUN_00ae1d00 */
byte F_00ae1d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae1d00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  int * piVar2;
  
  if (param_1 != -0x20000000) {
    iVar1 = 0;
    piVar2 = (int *)((int)this + 4);
    do {
      if (*piVar2 == -0x20000000) {
        return 0;
      }
      if (*piVar2 == param_1) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 10;
    } while (iVar1 < 0x40);
  }
  return 0;
}

/* ref: FUN_00ae1d40 */
uint F_00ae1d40(unsigned int gen_a0)
{
  GEN_ENTER(0xae1d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  int * piVar2;
  int iVar3;
  
  uVar1 = 0;
  iVar3 = 0;
  piVar2 = (int *)((int)this + 0x2c);
  while( true ) {
    if (piVar2[-10] == -0x20000000) {
      return uVar1;
    }
    if (*piVar2 == -0x20000000) {
      return uVar1 + 1;
    }
    if (piVar2[10] == -0x20000000) {
      return uVar1 + 2;
    }
    if (piVar2[0x14] == -0x20000000) break;
    iVar3 = iVar3 + 4;
    piVar2 = piVar2 + 0x28;
    uVar1 = uVar1 + 4;
    if (0x3f < iVar3) {
      return uVar1;
    }
  }
  return uVar1 + 3;
}

/* ref: FUN_00ae1d90 */
uint F_00ae1d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae1d90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  int * piVar1;
  int iVar2;
  
  if (param_1 == -0x20000000) {
    return 0;
  }
  iVar2 = 0;
  piVar1 = (int *)((int)this + 4);
  while( true ) {
    if (*piVar1 == -0x20000000) {
      return 0;
    }
    if ((*piVar1 == param_1) && (piVar1[1] == param_2)) break;
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 10;
    if (0x3f < iVar2) {
      return 0;
    }
  }
  return (uint)piVar1;
}

/* ref: FUN_00ae1de0 */
uint F_00ae1de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae1de0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  if (0x3f < param_2) {
    return 0;
  }
  return in_ecx + 4 + param_2 * 0x28;
}

/* ref: FUN_00ae1e00 */
uint F_00ae1e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae1e00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xa14) = param_2;
  return param_2;
}

/* ref: Client::Game::Object::EventObject::vf43 */
uint F_00ae1e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae1e10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00a5f970((undefined *)this,param_1);
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  this[0x18c] = (undefined1)0x0;
  return 0;
}

/* ref: Client::Game::Object::EventObject::vf44 */
uint F_00ae1e40(unsigned int gen_a0)
{
  GEN_ENTER(0xae1e40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00b5c1e0(REFG(void * PTR32, 0x14c4e84),(uint)*(ushort *)(this + 0x88));
  uVar1 = F_00a5fb90((undefined *)this);
  return uVar1;
}

/* ref: FUN_00ae1e60 */
uint F_00ae1e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xae1e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  int param_4 = (int)gen_a4;
  code * pcVar1;
  byte bVar2;
  uint uVar3;
  undefined * this_00;
  uint uVar4;
  int iVar5;
  
  *(undefined2 *)((int)this + 0x188) = (undefined2)param_2;
  pcVar1 = *(gen_code32 *)(*(int *)this + 0x40);
  *(undefined4 *)((int)this + 0x80) = param_1;
  *(undefined1 *)((int)this + 0x8a) = 7;
  (*pcVar1)(this);
  ((code *)*(gen_code32 *)(*(int *)this + 0x48))(this,(undefined4)gen_fl2bits((float)(float10)0));
  F_00a5f430(this,param_3);
  ((code *)*(gen_code32 *)(*(int *)this + 0x80))(this);
  uVar3 = F_00ab2470(param_1);
  *(uint *)((int)this + 0x180) = uVar3;
  uVar4 = 0;
  if (uVar3 != 0) {
    F_00a5f570(this,(uint)*(byte *)(uVar3 + 0x17));
    F_00a607e0(this,0,param_1,7);
    iVar5 = *(int *)((int)this + 0x180);
    *(byte *)((int)this + 0x8e) =
         *(byte *)((int)this + 0x8e) ^ (*(byte *)((int)this + 0x8e) ^ *(byte *)(iVar5 + 0x18)) & 1;
    *(byte *)((int)this + 0x8e) =
         (*(char *)(iVar5 + 0x18) * '\x02' ^ *(byte *)((int)this + 0x8e)) & 2 ^
         *(byte *)((int)this + 0x8e);
    if (param_4 == 0) {
      uVar4 = F_00ab3d20((uint)*(ushort *)(iVar5 + 0x14));
      *(uint *)((int)this + 0x184) = uVar4;
    }
    else {
      *(int *)((int)this + 0x7c) = param_4;
      if (REFG(char, 0x1379c96) == '\0') {
        bVar2 = F_005d99c0();
        if (bVar2 != 0) {
          ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this);
        }
      }
    }
    iVar5 = *(int *)((int)this + 0x180);
    if (*(char *)(iVar5 + 0x19) == '\x01') {
      *(byte *)((int)this + 0x8f) = *(byte *)((int)this + 0x8f) | 2;
    }
    this_00 = (undefined *)F_006b8c00();
    uVar4 = F_00718ff0(this_00,this,iVar5);
  }
  return uVar4;
}

/* ref: Client::Game::Object::EventObject::vf11 */
unsigned int F_00ae1f90(unsigned int gen_a0)
{
  GEN_ENTER(0xae1f90u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (((byte)this[0x8e] & 0x80) != 0) {
    return 0;
  }
  if (*(int *)(this + 0x7c) != 0) {
    F_00a608c0((undefined *)this);
    return 0;
  }
  F_00a61740(this);
  return 0;
}

/* ref: Client::Game::Object::EventObject::vf33 */
uint F_00ae1fb0(unsigned int gen_a0)
{
  GEN_ENTER(0xae1fb0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00a61430((undefined *)this);
  if (((byte)this[0x8f] & 1) == 0) {
    uVar1 = F_00a607e0(this,0,*(undefined4 *)(this + 0x80),7);
  }
  return uVar1;
}

/* ref: Client::Game::Object::EventObject::vf27 */
unsigned int F_00ae1fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xae1fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (((*(int *)(this + 0xec) == 0) && (*(int *)(this + 0xf0) == 0)) &&
     ((*(int *)(this + 0x7c) != 0 ||
      ((*(int *)(this + 0x180) == 0 || (*((short *)GEN_TOP((*(int *)(this + 0x180) + 0x14))) != 0)))))) {
    return 0;
  }
  F_00a61d10((undefined *)this);
  return 0;
}

/* ref: Client::Game::Object::EventObject::vf34 */
unsigned int F_00ae2010(unsigned int gen_a0)
{
  GEN_ENTER(0xae2010u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x18c) = 0;
  F_00a5f610(in_ecx);
  return 0;
}

/* ref: Client::Game::Object::EventObject::vf49 */
byte F_00ae2020(unsigned int gen_a0)
{
  GEN_ENTER(0xae2020u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(int *)(in_ecx + 0x184) != 0;
}

/* ref: FUN_00ae2030 */
uint F_00ae2030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae2030u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x90];
  ushort uVar1;
  undefined * this_00;
  byte bVar2;
  undefined4 in_EAX = 0;
  undefined3 extraout_var = 0;
  uint uVar3;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  uint uVar4;
  
  uVar3 = CONCAT22((short)((uint)in_EAX >> 0x10),(ushort)param_1);
  uVar1 = *(ushort *)((int)this + 0x18a);
  this_00 = *(undefined * PTR32 *)((int)this + 0xf0);
  *(ushort *)((int)this + 0x18a) = (ushort)param_1;
  if (this_00 != (undefined *)0x0) {
    bVar2 = F_005d5fe0(this_00);
    uVar3 = CONCAT31(extraout_var,bVar2);
    if (bVar2 != 0) {
      uVar3 = F_00a5f380(this,((int * PTR32 *)(gen_frame + 0xc)));
      if (uVar3 != 0) {
        uVar3 = ((code *)*((gen_code32 *)GEN_TOP((*((int * PTR32 *)(gen_frame + 0xc))[0] + 0xc4))))(((int * PTR32 *)(gen_frame + 0xc))[0],this,(uint)uVar1,param_1);
        return uVar3;
      }
      uVar4 = 0;
      do {
        bVar2 = F_005dbc90(this_00,uVar4);
        uVar3 = CONCAT31(extraout_var_00,bVar2);
        if (bVar2 != 0) {
          if (((ushort)param_1 & 1 << ((byte)uVar4 & 0x1f)) == 0) {
            uVar3 = F_005e35d0(this_00,uVar4);
            if ((char)uVar3 != '\0') {
              bVar2 = F_005e3530(this_00,uVar4);
              uVar3 = CONCAT31(extraout_var_01,bVar2);
            }
          }
          else {
            uVar3 = F_005e35d0(this_00,uVar4);
            if ((char)uVar3 == '\0') {
              uVar3 = F_005eb180(this_00,uVar4,0);
            }
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 0x10);
    }
  }
  return uVar3;
}

/* ref: FUN_00ae20f0 */
byte F_00ae20f0(unsigned int gen_a0)
{
  GEN_ENTER(0xae20f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x180) != 0) {
    return *((byte *)GEN_TOP((*(int *)(in_ecx + 0x180) + 0x16)));
  }
  return 0;
}

/* ref: FUN_00ae2110 */
uint F_00ae2110(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xae2110u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  *in_ecx = (*(undefined * PTR32 (*)[2])REFP(0x10eb824));
  in_ecx[1] = param_2;
  in_ecx[2] = (undefined4)gen_fl2bits(param_3);
  return (uint)in_ecx;
}

/* ref: Client::Game::Object::Distance2DFilter::vf1 */
uint F_00ae2130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae2130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * param_1 = (undefined *)(uintptr_t)gen_a1;
  uint uVar1;
  uint uVar2;
  float fVar3;
  
  uVar1 = F_00a5feb0(*(undefined * PTR32 *)(this + 4));
  uVar2 = F_00a5feb0(param_1);
  fVar3 = F_00aaea30(uVar2,uVar1);
  if ((float10)fVar3 <= (float10)*(float *)(this + 8)) {
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Object::BnpcFilter::vf1 */
byte F_00ae2170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae2170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 0xb8))(param_1);
  if ((char)uVar1 != '\0') {
    uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
    return uVar1 == 2;
  }
  return 0;
}

/* ref: FUN_00ae21b0 */
unsigned int F_00ae21b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae21b0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (param_2 != 0) {
    do {
      iVar1 = *(int *)(param_1 + uVar3 * 4);
      if ((iVar1 != 0) && (uVar2 = ((code *)*(gen_code32 *)(*param_3 + 4))(param_3,iVar1), (char)uVar2 == '\0'))
      {
        *(undefined4 *)(param_1 + uVar3 * 4) = 0;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
  return 0;
}

/* ref: FUN_00ae21f0 */
uint F_00ae21f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xae21f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int param_3 = (int)gen_a2;
  uint param_4 = (uint)gen_a3;
  int * piVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint local_c;
  uint local_8;
  
  uVar2 = 0;
  local_8 = 0;
  local_c = 0;
  if (param_2 != 0) {
    do {
      if (local_8 != 0) {
        return local_8;
      }
      uVar2 = *(uint *)(param_1 + local_c * 4);
      if (uVar2 != 0) {
        uVar5 = 0;
        bVar4 = 1;
        if (param_4 != 0) {
          do {
            if (bVar4 == 0) goto LAB_00ae2241;
            piVar1 = *(int * PTR32 *)(param_3 + uVar5 * 4);
            uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1,uVar2);
            uVar5 = uVar5 + 1;
            bVar4 = bVar4 & (byte)uVar3;
          } while (uVar5 < param_4);
          if (bVar4 == 0) goto LAB_00ae2241;
        }
        local_8 = uVar2;
      }
LAB_00ae2241: ;
      local_c = local_c + 1;
      uVar2 = local_8;
    } while (local_c < param_2);
  }
  return uVar2;
}

/* ref: Client::Game::Object::AreaObject::vf43 */
unsigned int F_00ae2260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae2260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  F_00a5f970((undefined *)this,param_1);
  *(undefined4 *)(this + 0x180) = 0;
  return 0;
}

/* ref: Client::Game::Object::AreaObject::vf44 */
unsigned int F_00ae2280(unsigned int gen_a0)
{
  GEN_ENTER(0xae2280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(undefined * PTR32 *)(this + 0x180) != (undefined *)0x0) {
    F_009bc530(*(undefined * PTR32 *)(this + 0x180),1);
    F_00983120(*(undefined4 *)(this + 0x180),0);
    *(undefined4 *)(this + 0x180) = 0;
  }
  return 0;
}

/* ref: FUN_00ae22b0 */
uint F_00ae22b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae22b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x70];
  float10 fVar1;
  float * pfVar2;
  uint in_ecx;
  undefined * this;
  uint uVar3;
  
  (*(uint *)(gen_frame + 0x5c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x60);
  pfVar2 = (float *)F_00a5feb0(param_1);
  (*(float *)(gen_frame + 0x0)) = *pfVar2;
  (*(float *)(gen_frame + 0x4)) = pfVar2[1];
  (*(float *)(gen_frame + 0x8)) = pfVar2[2];
  in_ecx = F_00ab44e0(param_1[0x20],&(*(float *)(gen_frame + 0x0)),(float)(float10)1,0);
  param_1[0x60] = in_ecx;
  uVar3 = 0;
  if (in_ecx != 0) {
    fVar1 = (float10)0;
    pfVar2 = ((float *)(gen_frame + 0x10));
    ((float *)(gen_frame + 0x10))[0] = param_2;
    (*(float *)(gen_frame + 0x40)) = (float)((float10)(*(float *)(gen_frame + 0x0)) + fVar1);
    ((float *)(gen_frame + 0x10))[1] = 0.0;
    ((float *)(gen_frame + 0x10))[2] = 0.0;
    (*(undefined4 *)(gen_frame + 0x20)) = 0;
    (*(float *)(gen_frame + 0x24)) = param_2;
    (*(undefined4 *)(gen_frame + 0x28)) = 0;
    (*(float *)(gen_frame + 0x44)) = (float)((float10)(*(float *)(gen_frame + 0x4)) + fVar1);
    (*(undefined4 *)(gen_frame + 0x30)) = 0;
    (*(undefined4 *)(gen_frame + 0x34)) = 0;
    (*(float *)(gen_frame + 0x38)) = param_2;
    (*(float *)(gen_frame + 0x48)) = (float)(fVar1 + (float10)(*(float *)(gen_frame + 0x8)));
    this = (undefined *)F_00983160(in_ecx);
    F_009bc130(this,pfVar2);
    uVar3 = ((code *)*(gen_code32 *)(*param_1 + 0x24))(param_1,0xb,0);
  }
  F_00c47745((*(uint *)(gen_frame + 0x5c)) ^ (uint)(uint)(gen_frame + 0x60));
  return uVar3;
}

/* ref: FUN_00ae23b0 */
uint F_00ae23b0(unsigned int gen_a0)
{
  GEN_ENTER(0xae23b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  int local_8;
  
  piVar3 = (int *)((int)this + 8);
  local_8 = 0x2c;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      ((code *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1);
      switch((unsigned int)(uintptr_t)(uVar2)) {
      case 1: ;
      case 2: ;
      case 3: ;
      case 4: ;
      case 5: ;
      case 6: ;
      case 7: ;
      case 8: ;
        ((code *)*(gen_code32 *)(*piVar1 + 0xb4))(piVar1,0);
      }
      *piVar3 = 0;
      F_00a35760(&REFG(undefined, 0x14a31e0),piVar1);
    }
    piVar3 = piVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  uVar2 = F_00406ad0(*(undefined4 *)this);
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00ae2460 */
byte F_00ae2460(unsigned int gen_a0)
{
  GEN_ENTER(0xae2460u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return 1 - (0x2b < *(ushort *)(param_1 + 0x88) - 200);
}

/* ref: Client::Game::Object::GatheringPointObject::vf28 */
uint F_00ae2480(unsigned int gen_a0)
{
  GEN_ENTER(0xae2480u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(int *)(in_ecx + 0xec) != 0) && (*((char *)GEN_TOP((*(int *)(in_ecx + 0xec) + 0x65))) == '\x03')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ae24a0 */
uint F_00ae24a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae24a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + param_1 * 4 + 8);
  uVar2 = param_1;
  if (piVar1 != (int *)0x0) {
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
    ((code *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1);
    switch((unsigned int)(uintptr_t)(uVar2)) {
    case 3: ;
    case 4: ;
    case 5: ;
    case 6: ;
    case 7: ;
      ((code *)*(gen_code32 *)(*piVar1 + 0xb4))(piVar1,0);
    }
    *(undefined4 *)((int)this + param_1 * 4 + 8) = 0;
    uVar2 = F_00a35760(&REFG(undefined, 0x14a31e0),piVar1);
  }
  return uVar2;
}

/* ref: FUN_00ae2520 */
unsigned int F_00ae2520(unsigned int gen_a0)
{
  GEN_ENTER(0xae2520u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  int local_8;
  
  piVar3 = (int *)((int)this + 8);
  local_8 = 0x28;
  do {
    piVar1 = (int *)*piVar3;
    if (piVar1 != (int *)0x0) {
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
      ((code *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1);
      switch((unsigned int)(uintptr_t)(uVar2)) {
      case 3: ;
      case 4: ;
      case 5: ;
      case 6: ;
      case 7: ;
        ((code *)*(gen_code32 *)(*piVar1 + 0xb4))(piVar1,0);
      }
      *piVar3 = 0;
      F_00a35760(&REFG(undefined, 0x14a31e0),piVar1);
    }
    piVar3 = piVar3 + 1;
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  return 0;
}

/* ref: Client::Game::Object::Treasure::vf33 */
uint F_00ae25a0(unsigned int gen_a0)
{
  GEN_ENTER(0xae25a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  
  fVar1 = *(float *)(REFG(int, 0x137104c) + 0x1198);
  fVar2 = ((float)GEN_TOF(((float10)*(float *)(this + 0x184) - (float10)fVar1)));
  *(float *)(this + 0x184) = fVar2;
  if ((float10)fVar2 < (float10)0) {
    *(undefined4 *)(this + 0x184) = 0;
  }
  iVar3 = *(int *)(this + 0x180);
  if (iVar3 == 1) {
    if ((*(undefined * PTR32 *)(this + 0xf0) != (undefined *)0x0) &&
       (uVar4 = F_005e35d0(*(undefined * PTR32 *)(this + 0xf0),0), (char)uVar4 == '\0')) {
      *(undefined4 *)(this + 0x180) = 2;
      *(undefined4 *)(this + 0x1dc) = 0;
      uVar4 = F_00a61430((undefined *)this);
      return uVar4;
    }
  }
  else if (iVar3 == 2) {
    if ((((*(int *)(this + 0x1ec) == 1) || (*(int *)(this + 0x1ec) == 0)) ||
        (this[0x1e0] != (undefined1)0x0)) &&
       (fVar1 = ((float)GEN_TOF(((float10)fVar1 + (float10)*(float *)(this + 0x1dc)))),
       *(float *)(this + 0x1dc) = fVar1, (float10)1 <= (float10)fVar1)) {
      if (*(undefined * PTR32 *)(this + 0xf0) != (undefined *)0x0) {
        F_005eb180(*(undefined * PTR32 *)(this + 0xf0),4,0);
      }
      this[0x8e] = (undefined1)((byte)this[0x8e] & 0xfd);
      *(undefined4 *)(this + 0x180) = 3;
      uVar4 = F_00a61430((undefined *)this);
      return uVar4;
    }
  }
  else if (((iVar3 == 3) && (*(undefined * PTR32 *)(this + 0xf0) != (undefined *)0x0)) &&
          ((*(int *)(this + 0x11c) == 0 &&
           (uVar4 = F_005e35d0(*(undefined * PTR32 *)(this + 0xf0),4), (char)uVar4 == '\0')))) {
    ((code *)*(gen_code32 *)(*(int *)this + 0x28))(this,0,0);
    *(undefined4 *)(this + 0x180) = 4;
    uVar4 = F_00a61430((undefined *)this);
    return uVar4;
  }
  uVar4 = F_00a61430((undefined *)this);
  return uVar4;
}

/* ref: FUN_00ae2700 */
unsigned int F_00ae2700(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae2700u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x188) = param_2;
  if ((float10)*(float *)(in_ecx + 0x184) < (float10)*(float *)(in_ecx + 0x188)) {
    *(undefined4 *)(in_ecx + 0x184) = *(undefined4 *)(in_ecx + 0x184);
    return 0;
  }
  *(undefined4 *)(in_ecx + 0x184) = *(undefined4 *)(in_ecx + 0x188);
  return 0;
}

/* ref: Client::Game::Object::Treasure::vf3 */
uint F_00ae2750(unsigned int gen_a0)
{
  GEN_ENTER(0xae2750u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  undefined * this_00;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (*(int *)(this + 0x1e4) != 0) {
    piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    if (piVar1 != (int *)0x0) {
      uVar5 = 0;
      uVar4 = 0;
      uVar3 = 0x18b;
      this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x18))(piVar1)));
      uVar2 = F_0043bd00(this_00,uVar3,uVar4,uVar5);
      return uVar2;
    }
  }
  return (uint)(this + 0x30);
}

/* ref: Client::Game::Object::Treasure::vf11 */
unsigned int F_00ae2790(unsigned int gen_a0)
{
  GEN_ENTER(0xae2790u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  
  if (((byte)this[0x8e] & 0x80) == 0) {
    puVar1 = (uint *)F_00ab26f0(0);
    F_00a5f8c0(this,(*puVar1 & 0xffffff) + (int)puVar1);
    F_00a61740(this);
    return 0;
  }
  return 0;
}

/* ref: Client::Game::Object::Treasure::vf51 */
uint F_00ae27d0(unsigned int gen_a0)
{
  GEN_ENTER(0xae27d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined4 uVar2;
  uint * puVar3;
  
  if (*(int *)(this + 0x80) == 0) {
    uVar2 = 0x63e;
  }
  else {
    uVar1 = F_00ab26f0(*(int *)(this + 0x80));
    if (uVar1 == 0) {
      return 0;
    }
    uVar2 = *(undefined4 *)(uVar1 + 0x24);
  }
  puVar3 = (uint *)F_00ab3d20(uVar2);
  if (puVar3 == (uint *)0x0) {
    return 0;
  }
  uVar1 = F_00a1d100((uint)*(ushort *)(this + 0x1e8),*(undefined4 *)(this + 0x78),&REFG(float, 0x1302df0),
                       (*puVar3 & 0xffffff) + (int)puVar3,"Client.Game.Treasure",
                       (uint)(*(int *)(this + 0x11c) == 0),(uint)*(ushort *)(this + 0x88),5,0);
  return uVar1;
}

/* ref: FUN_00ae2850 */
uint F_00ae2850(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae2850u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  bool bVar1;
  byte bVar2;
  int * piVar3;
  uint uVar4;
  undefined3 extraout_var = 0;
  int iVar5;
  undefined4 uVar6;
  
  piVar3 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar4 = 0;
  if (piVar3 != (int *)0x0) {
    uVar6 = 0x20;
    uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x48))(piVar3);
    piVar3 = (int *)F_00763050(uVar4,uVar6);
    uVar4 = 0;
    if (piVar3 != (int *)0x0) {
      *(undefined1 *)((int)this + 0xa10) = 1;
      uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x30))(piVar3);
      if ((uVar4 == 0) || (uVar4 = ((code *)*(gen_code32 *)(*piVar3 + 0x10))(piVar3), (char)uVar4 != '\x01')) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      iVar5 = param_1;
      if (param_1 == 3) {
        if (param_2 != 0) {
          *(undefined4 *)((int)this + 0xa08) = 3;
          *(uint *)((int)this + 0xa0c) = param_2;
          return param_2;
        }
        iVar5 = 1;
      }
      uVar4 = F_00ae1d40(this);
      if (((uVar4 != 0) && (iVar5 != 0)) && ((iVar5 != 1 || (bVar1)))) {
        bVar2 = F_00ae1ad0(this);
        *(uint *)((int)this + 0xa08) = (bVar2 != 1) + 1;
        return CONCAT31(extraout_var,bVar2);
      }
      *(undefined4 *)((int)this + 0xa08) = 0;
    }
  }
  return uVar4;
}

/* ref: FUN_00ae2920 */
uint F_00ae2920(unsigned int gen_a0)
{
  GEN_ENTER(0xae2920u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = F_00ae2850(this,0,0);
  return uVar1;
}

/* ref: FUN_00ae2930 */
uint F_00ae2930(unsigned int gen_a0)
{
  GEN_ENTER(0xae2930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  if (piVar1 != (int *)0x0) {
    uVar2 = F_00ae1d40(this);
    if (uVar2 != 0) {
      if (*(int *)((int)this + 0xa04) != 0) {
        piVar3 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
        ((code *)*(gen_code32 *)(*piVar3 + 0x54))(piVar3,*(undefined4 *)((int)this + 0xa04),0);
        *(undefined4 *)((int)this + 0xa04) = 0;
      }
      uVar4 = 0x20;
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
      piVar1 = (int *)F_00763050(uVar2,uVar4);
      piVar1[3] = *(int *)((int)this + 0xa14);
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 8))(piVar1);
      return uVar2;
    }
  }
  return 0;
}

/* ref: FUN_00ae29b0 */
uint F_00ae29b0(unsigned int gen_a0)
{
  GEN_ENTER(0xae29b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  int * piVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar2 = 0;
  if (piVar1 != (int *)0x0) {
    uVar4 = 0x20;
    uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x48))(piVar1);
    piVar3 = (int *)F_00763050(uVar2,uVar4);
    uVar2 = ((code *)*(gen_code32 *)(*piVar3 + 0xc))(piVar3);
    if (*(int *)((int)this + 0xa04) != 0) {
      piVar1 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
      uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 0x54))(piVar1,*(undefined4 *)((int)this + 0xa04),0);
      *(undefined4 *)((int)this + 0xa04) = 0;
    }
  }
  return uVar2;
}

/* ref: FUN_00ae2a20 */
uint F_00ae2a20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae2a20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00ae19a0(param_1);
  uVar2 = 0;
  if ((uVar1 != 0) && (uVar2 = 0, param_2 != 0)) {
    uVar2 = F_00ae2850(this,3,param_2);
  }
  return uVar2;
}

/* ref: FUN_00ae2a50 */
uint F_00ae2a50(unsigned int gen_a0)
{
  GEN_ENTER(0xae2a50u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  undefined * this;
  undefined3 extraout_var = 0;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(undefined4 *)(gen_frame + 0x8)) = 0x1b4;
  (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
  (*(undefined4 *)(gen_frame + 0x20)) = param_1;
  (*(undefined1 *)(gen_frame + 0x24)) = 0;
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this == (undefined *)0x0) {
    F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
    return 0;
  }
  bVar1 = F_00974e00(this,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return CONCAT31(extraout_var,bVar1);
}

/* ref: FUN_00ae2af0 */
uint F_00ae2af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae2af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*param_1 + 4))(param_1);
  if (uVar1 == 4) {
    uVar1 = F_00ae2a50(param_1[0x1d]);
    if (param_1[0x7b] == 1) {
      uVar1 = F_00a6e080(&REFG(undefined, 0x14a9e40),0x6e,0,0);
    }
  }
  return uVar1;
}

/* ref: FUN_00ae2b40 */
uint F_00ae2b40(unsigned int gen_a0)
{
  GEN_ENTER(0xae2b40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  byte bVar1;
  uint uVar2;
  undefined * this;
  undefined3 extraout_var = 0;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  uVar2 = param_1;
  if (param_1 != 0xe0000000) {
    (*(undefined4 *)(gen_frame + 0x8)) = 0x1b6;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x18;
    (*(uint *)(gen_frame + 0x20)) = param_1;
    this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    uVar2 = 0;
    if (this != (undefined *)0x0) {
      bVar1 = F_00974e00(this,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
      F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
      return CONCAT31(extraout_var,bVar1);
    }
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar2 & 0xffffff00;
}

/* ref: FUN_00ae2be0 */
uint F_00ae2be0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae2be0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint param_2 = (uint)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined4 * puVar1;
  byte bVar2;
  uint uVar3;
  undefined * this_00;
  undefined3 extraout_var = 0;
  
  uVar3 = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  (*(uint *)(gen_frame + 0xc2c)) = uVar3;
  if (param_2 < 0x40) {
    this_00 = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
    puVar1 = (undefined4 *)((int)this + param_2 * 0x28 + 4);
    (*(undefined4 *)(gen_frame + 0x20)) = *puVar1;
    (*(undefined4 *)(gen_frame + 0x24)) = puVar1[1];
    (*(undefined1 *)(gen_frame + 0x28)) = (undefined1)param_1;
    (*(undefined4 *)(gen_frame + 0x8)) = 0x1b5;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
    bVar2 = F_00974e00(this_00,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
    uVar3 = CONCAT31(extraout_var,bVar2);
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return uVar3;
}

/* ref: FUN_00ae2c80 */
byte F_00ae2c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae2c80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int * piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  
  if (0x3f < param_1) {
    return 0;
  }
  if ((int)param_1 < 0x40) {
    piVar1 = (int *)((int)this + param_1 * 0x28 + 0x2c);
    uVar4 = param_1;
    do {
      if ((uVar4 == 0x3f) || (*piVar1 == -0x20000000)) {
        piVar1[-10] = -0x20000000;
      }
      else {
        piVar5 = piVar1;
        piVar6 = piVar1 + -10;
        for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
          *piVar6 = *piVar5;
          piVar5 = piVar5 + 1;
          piVar6 = piVar6 + 1;
        }
      }
      uVar4 = uVar4 + 1;
      piVar1 = piVar1 + 10;
    } while ((int)uVar4 < 0x40);
  }
  uVar4 = *(uint *)((int)this + 0xa14);
  if (uVar4 <= param_1) {
    if (uVar4 == param_1) {
      uVar2 = F_00ae1d40(this);
      if (uVar2 == 0) {
        *(undefined4 *)((int)this + 0xa14) = 0;
        return 1;
      }
      if (uVar2 <= uVar4) {
        *(uint *)((int)this + 0xa14) = uVar2 - 1;
      }
    }
    return 1;
  }
  *(uint *)((int)this + 0xa14) = uVar4 - 1;
  return 1;
}

/* ref: FUN_00ae2d30 */
uint F_00ae2d30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae2d30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint uVar1;
  
  uVar1 = F_00ae1d90(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ae2d40 */
uint F_00ae2d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae2d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  uint uVar1;
  
  if (0x3f < param_2) {
    return param_2;
  }
  if ((param_1 != 4) && (param_1 != 3)) {
    switch((unsigned int)(uintptr_t)(*(undefined1 *)((int)this + param_2 * 0x28 + 0x1a))) {
    case 0: ;
    case 1: ;
    case 2: ;
    case 3: ;
      break;
    case 4: ;
      uVar1 = F_00ab9000(0x4d7);
      return uVar1;
    case 5: ;
      uVar1 = F_00ab9000(0x4d8);
      return uVar1;
    default: ;
      return param_2;
    case 7: ;
      uVar1 = F_00ab9000(0x4d9);
      return uVar1;
    case 8: ;
      uVar1 = F_00ab9000(0x4e4);
      return uVar1;
    case 9: ;
      uVar1 = F_00ab9000(0x4dc);
      return uVar1;
    case 10: ;
      uVar1 = F_00ab9000(0x4db);
      return uVar1;
    case 0xb: ;
      uVar1 = F_00ab9000(0x4da);
      return uVar1;
    case 0x10: ;
      uVar1 = F_00ab9000(0x4e3);
      return uVar1;
    }
  }
  uVar1 = F_00ae2be0(this,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00ae2e60 */
uint F_00ae2e60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xae2e60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint uVar1;
  int * piVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar1 = F_00ae1d90(this,param_1,param_2);
  uVar3 = 0;
  if (uVar1 != 0) {
    *(undefined1 *)(uVar1 + 0x18) = (undefined1)param_4;
    *(undefined1 *)(uVar1 + 0x17) = (undefined1)param_3;
    *(undefined1 *)(uVar1 + 0x16) = 0x10;
    iVar4 = 0;
    piVar2 = (int *)((int)this + 4);
    do {
      if (*piVar2 == -0x20000000) break;
      if (*(char *)((int)piVar2 + 0x16) != '\x10') {
        return (uint)piVar2;
      }
      iVar4 = iVar4 + 1;
      piVar2 = piVar2 + 10;
    } while (iVar4 < 0x40);
    piVar2 = (int *)F_00424750(REFG(undefined4, 0x137104c));
    uVar3 = 0;
    if (piVar2 != (int *)0x0) {
      uVar5 = 0x20;
      uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x48))(piVar2);
      piVar2 = (int *)F_00763050(uVar3,uVar5);
      uVar3 = 0;
      if (piVar2 != (int *)0x0) {
        *(undefined1 *)((int)this + 0xa10) = 1;
        uVar1 = ((code *)*(gen_code32 *)(*piVar2 + 0x30))(piVar2);
        uVar3 = 0;
        if (uVar1 != 0) {
          uVar3 = ((code *)*(gen_code32 *)(*piVar2 + 0x10))(piVar2);
        }
        *(undefined4 *)((int)this + 0xa08) = 0;
      }
    }
  }
  return uVar3;
}

/* ref: Client::Game::Object::EventObject::vf37 */
byte F_00ae2f00(unsigned int gen_a0)
{
  GEN_ENTER(0xae2f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = F_00a61a70((undefined *)this);
  if ((char)uVar3 != '\0') {
    if ((this[0x18c] == (undefined1)0x0) && (*(undefined * PTR32 *)(this + 0xf0) != (undefined *)0x0)) {
      bVar2 = F_005d5fe0(*(undefined * PTR32 *)(this + 0xf0));
      if (bVar2 != 0) {
        uVar1 = *(ushort *)(this + 0x18a);
        this[0x18c] = (undefined1)0x1;
        *(ushort *)(this + 0x18a) = ~uVar1;
        F_00ae2030(this,(uint)uVar1);
      }
    }
    return 1;
  }
  return 0;
}

/* ref: Client::Game::Object::EventObject::vf50 */
uint F_00ae2f50(unsigned int gen_a0)
{
  GEN_ENTER(0xae2f50u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x9c))(this);
  if (((char)uVar1 != '\x01') &&
     ((*(int *)(this + 0x180) == 0 || (*((char *)GEN_TOP((*(int *)(this + 0x180) + 0x16))) != '\x04')))) {
    return 0;
  }
  return 1;
}

/* ref: Client::Game::Object::EventObject::vf51 */
uint F_00ae2f80(unsigned int gen_a0)
{
  GEN_ENTER(0xae2f80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * puVar1;
  uint uVar2;
  undefined4 uVar3;
  
  puVar1 = *(uint * PTR32 *)(this + 0x184);
  if (puVar1 == (uint *)0x0) {
    return 0;
  }
  if (*(ushort *)(this + 0x188) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(this + 0x78);
  }
  uVar2 = F_00a1d100((uint)*(ushort *)(this + 0x188),uVar3,&REFG(float, 0x1302df0),
                       (*puVar1 & 0xffffff) + (int)puVar1,"Client.Game.EventObject",0,
                       (uint)*(ushort *)(this + 0x88),6,0);
  return uVar2;
}

/* ref: FUN_00ae2fd0 */
unsigned int F_00ae2fd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae2fd0u, gen_a0, gen_a1, gen_a2, 0u);
  int param_1 = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  int * param_3 = (int *)(uintptr_t)gen_a2;
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 != 0) {
    do {
      if (((*(int *)(param_1 + uVar2 * 8) != -0x20000000) ||
          (*(int *)(param_1 + 4 + uVar2 * 8) != 0)) &&
         ((0x157 < uVar2 ||
          (((&REFG(undefined4, 0x14a31f0))[uVar2] == 0 ||
           (uVar1 = ((code *)*(gen_code32 *)(*param_3 + 4))(param_3,(&REFG(undefined4, 0x14a31f0))[uVar2]), (char)uVar1 == '\0'
           )))))) {
        *(undefined4 *)(param_1 + uVar2 * 8) = 0xe0000000;
        *(undefined4 *)(param_1 + 4 + uVar2 * 8) = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < param_2);
  }
  return 0;
}

/* ref: FUN_00ae3030 */
byte F_00ae3030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xae3030u, gen_a0, gen_a1, gen_a2, gen_a3);
  int param_1 = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  uint param_3 = (uint)gen_a2;
  int * param_4 = (int *)(uintptr_t)gen_a3;
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined4 * puVar4;
  int iVar5;
  
  bVar1 = true;
  if (param_3 != 0) {
    iVar5 = param_1 - (int)param_2;
    uVar3 = 0;
    puVar4 = param_2;
    do {
      *puVar4 = 0xe0000000;
      puVar4[1] = 0;
      if ((((*(int *)(iVar5 + (int)puVar4) != -0x20000000) ||
           (*(int *)(iVar5 + 4 + (int)puVar4) != 0)) && (uVar3 < 0x158)) &&
         (((&REFG(undefined4, 0x14a31f0))[uVar3] != 0 &&
          (uVar2 = ((code *)*(gen_code32 *)(*param_4 + 4))(param_4,(&REFG(undefined4, 0x14a31f0))[uVar3]), (char)uVar2 != '\0')
          ))) {
        *puVar4 = *(undefined4 *)(iVar5 + (int)puVar4);
        puVar4[1] = *(undefined4 *)(iVar5 + 4 + (int)puVar4);
        bVar1 = false;
      }
      uVar3 = uVar3 + 1;
      puVar4 = puVar4 + 2;
    } while (uVar3 < param_3);
  }
  return !bVar1;
}

/* ref: Client::Game::Object::AreaObject::vf9 */
byte F_00ae30c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae30c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00a61980((undefined *)this,param_1,param_2);
  if (*(undefined * PTR32 *)(this + 0x180) != (undefined *)0x0) {
    F_009bc5d0(*(undefined * PTR32 *)(this + 0x180),(uint)(*(int *)(this + 0x11c) == 0));
  }
  return 1;
}

/* ref: Client::Game::Object::AreaObject::vf10 */
byte F_00ae3100(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae3100u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  F_00a619f0((undefined *)this,param_1,param_2);
  if (*(undefined * PTR32 *)(this + 0x180) != (undefined *)0x0) {
    F_009bc5d0(*(undefined * PTR32 *)(this + 0x180),(uint)(*(int *)(this + 0x11c) == 0));
  }
  return 1;
}

/* ref: FUN_00ae3140 */
uint F_00ae3140(unsigned int gen_a0)
{
  GEN_ENTER(0xae3140u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  uVar2 = 0;
  piVar1 = (int *)((int)this + 8);
  do {
    if (*piVar1 == 0) {
      if (uVar2 == 0xffffffff) {
        return 0xffffffff;
      }
      piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 4) * uVar2 + *(int *)this)));
      if (piVar1 == (int *)0x0) {
        piVar1 = (int *)0x0;
      }
      else {
        *piVar1 = (int)(*(undefined * PTR32 (*)[53])REFP(0x10eb834));
      }
      *(int * PTR32 *)((int)this + uVar2 * 4 + 8) = piVar1;
      ((code *)*(gen_code32 *)(*piVar1 + 0xac))(piVar1,uVar2 + 200);
      *((undefined1 *)GEN_TOP((*(int *)((int)this + uVar2 * 4 + 8) + 0x8a))) = 7;
      F_00a35730(&REFG(undefined, 0x14a31e0),*(undefined4 *)((int)this + uVar2 * 4 + 8));
      return uVar2;
    }
    uVar2 = uVar2 + 1;
    piVar1 = piVar1 + 1;
  } while ((int)uVar2 < 0x28);
  return 0xffffffff;
}

/* ref: FUN_00ae3210 */
uint F_00ae3210(unsigned int gen_a0)
{
  GEN_ENTER(0xae3210u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  F_00ae2520(this);
  uVar1 = F_00406ad0(*(undefined4 *)this);
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00ae3230 */
uint F_00ae3230(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xae3230u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  uint uVar1;
  int * piVar2;
  int * piVar3;
  
  uVar1 = param_4;
  if (param_4 == 0xffffffff) {
    uVar1 = 0;
    piVar3 = (int *)((int)this + 8);
    while (*piVar3 != 0) {
      uVar1 = uVar1 + 1;
      piVar3 = piVar3 + 1;
      if (0x27 < (int)uVar1) {
        return 0xffffffff;
      }
    }
    if (uVar1 == 0xffffffff) {
      return 0xffffffff;
    }
  }
  piVar3 = *(int * PTR32 *)((int)this + uVar1 * 4 + 8);
  if (piVar3 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar3 + 0xb0))(piVar3);
  }
  piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 4) * uVar1 + *(int *)this)));
  piVar3 = (int *)0x0;
  if (piVar2 != (int *)0x0) {
    *piVar2 = (int)(*(undefined * PTR32 (*)[53])REFP(0x10eb90c));
    piVar2[0x61] = 0;
    piVar2[0x60] = (int)(*(undefined * PTR32 (*)[12])REFP(0x10eb7b0));
    piVar2[0x62] = 0;
    piVar2[99] = 0;
    piVar2[100] = (int)piVar2;
    piVar2[0x66] = 0;
    piVar2[0x67] = 0;
    piVar2[0x68] = 0;
    piVar2[0x69] = (int)piVar2;
    piVar2[0x65] = (int)(*(undefined * PTR32 (*)[12])REFP(0x10eb7e4));
    piVar2[0x6a] = (int)(piVar2 + 0x60);
    piVar3 = piVar2;
  }
  *(int * PTR32 *)((int)this + uVar1 * 4 + 8) = piVar3;
  ((code *)*(gen_code32 *)(*piVar3 + 0xac))(piVar3,uVar1 + 0xf4);
  piVar3[0x20] = param_1;
  *(undefined1 *)((int)piVar3 + 0x8a) = 6;
  F_00a5f430(piVar3,param_3);
  ((code *)*(gen_code32 *)(*piVar3 + 0x80))(piVar3);
  F_00a35730(&REFG(undefined, 0x14a31e0),piVar3);
  return uVar1;
}

/* ref: FUN_00ae3330 */
uint F_00ae3330(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xae3330u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  uint param_5 = (uint)gen_a5;
  uint uVar1;
  int * piVar2;
  
  uVar1 = param_5;
  if (param_5 == 0xffffffff) {
    uVar1 = 0;
    piVar2 = (int *)((int)this + 8);
    while (*piVar2 != 0) {
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
      if (0x27 < (int)uVar1) {
        return 0xffffffff;
      }
    }
    if (uVar1 == 0xffffffff) {
      return 0xffffffff;
    }
  }
  piVar2 = *(int * PTR32 *)((int)this + uVar1 * 4 + 8);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xb0))(piVar2);
  }
  piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 4) * uVar1 + *(int *)this)));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *piVar2 = (int)(*(undefined * PTR32 (*)[53])REFP(0x10eb834));
  }
  *(int * PTR32 *)((int)this + uVar1 * 4 + 8) = piVar2;
  ((code *)*(gen_code32 *)(*piVar2 + 0xac))(piVar2,uVar1 + 0xf4);
  F_00ae1e60(piVar2,param_1,param_2,param_3,param_4);
  F_00a35730(&REFG(undefined, 0x14a31e0),piVar2);
  return uVar1;
}

/* ref: FUN_00ae33e0 */
uint F_00ae33e0(unsigned int gen_a0)
{
  GEN_ENTER(0xae33e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  *(undefined4 *)((int)this + 0xa08) = 0;
  *(undefined4 *)((int)this + 0xa0c) = 0;
  *(undefined1 *)((int)this + 0xa10) = 0;
  puVar1 = (undefined4 *)((int)this + 4);
  iVar3 = 0x40;
  do {
    *puVar1 = 0xe0000000;
    puVar1 = puVar1 + 10;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0xa04) = 0;
  *(undefined4 *)((int)this + 0xa14) = 0;
  uVar2 = F_00ae2850(this,0,0);
  return uVar2;
}

/* ref: Client::Game::Object::TreasureManager::vf1 */
uint F_00ae3430(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xae3430u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  byte * param_2 = (byte *)(uintptr_t)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int iVar1;
  uint uVar2;
  
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 0;
  if ((*param_2 & 0xf) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_2 + 4);
  }
  if (iVar1 == 0) {
    (*(undefined4 *)(gen_frame + 0x4)) = 2;
    (*(undefined1 *)(gen_frame + 0x8)) = 1;
    F_00596cd0(param_1,&(*(undefined4 *)(gen_frame + 0x4)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0x4)));
    uVar2 = F_00533b90(&REFG(undefined4, 0x1375bc0));
    uVar2 = F_00ae19a0(uVar2);
    if (uVar2 != 0) {
      F_00ae2b40(*(undefined4 *)(uVar2 + 0x74));
    }
  }
  else {
    if (iVar1 != 1) {
      (*(undefined4 *)(gen_frame + 0x14)) = 2;
      (*(undefined1 *)(gen_frame + 0x18)) = 0;
      F_00596cd0(param_1,&(*(undefined4 *)(gen_frame + 0x14)));
      F_005a2670(&(*(undefined4 *)(gen_frame + 0x14)));
      return (uint)param_1;
    }
    (*(undefined4 *)(gen_frame + 0xc)) = 2;
    (*(undefined1 *)(gen_frame + 0x10)) = 1;
    F_00596cd0(param_1,&(*(undefined4 *)(gen_frame + 0xc)));
    F_005a2670(&(*(undefined4 *)(gen_frame + 0xc)));
    F_00547460(&REFG(undefined4, 0x1375bc0),0);
  }
  F_00ae2850(this,0,0);
  return (uint)param_1;
}

/* ref: FUN_00ae3500 */
uint F_00ae3500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae3500u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = F_00ae1d90(this,*param_1,(uint)*(byte *)(param_1 + 1));
  uVar1 = *(undefined4 *)&REFG(undefined, 0x10eb784);
  if (uVar2 != 0) {
    *(undefined1 *)(uVar2 + 0x19) = 1;
    *(undefined4 *)(uVar2 + 0x24) = uVar1;
  }
  uVar2 = REFG(undefined4, 0x1379694);
  if ((REFG(undefined4, 0x1379694) != 0) && (param_1[2] == *(int *)(REFG(undefined4, 0x1379694) + 0x74))) {
    uVar2 = F_0043f8b0(0xf4242);
  }
  return uVar2;
}

/* ref: FUN_00ae3550 */
byte F_00ae3550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, float gen_a7, float gen_a8, unsigned int gen_a9)
{
  GEN_ENTER(0xae3550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  int param_3 = (int)gen_a2;
  int param_4 = (int)gen_a3;
  undefined2 * param_5 = (undefined2 *)(uintptr_t)gen_a4;
  undefined4 param_6 = (undefined4)gen_a5;
  undefined4 param_7 = (undefined4)gen_a6;
  float param_8 = (float)gen_a7;
  float param_9 = (float)gen_a8;
  undefined4 param_10 = (undefined4)gen_a9;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined4 uVar1;
  byte bVar2;
  int * piVar3;
  int iVar4;
  undefined * this;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  if (param_2 == -0x20000000) {
    bVar2 = 0;
  }
  else {
    piVar3 = (int *)F_00ae1d90(param_1,param_2,param_3);
    if (piVar3 == (int *)0x0) {
      piVar3 = (int *)((int)param_1 + 4);
      iVar4 = 0;
      do {
        if (*piVar3 == -0x20000000) {
          if (-1 < iVar4) goto LAB_00ae3625;
          break;
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 10;
      } while (iVar4 < 0x40);
      if (*(char *)((int)param_1 + 0x1b) == '\0') {
        this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
        uVar1 = *(undefined4 *)((int)param_1 + 8);
        (*(undefined4 *)(gen_frame + 0x20)) = *(undefined4 *)((int)param_1 + 4);
        (*(undefined4 *)(gen_frame + 0x8)) = 0x1b5;
        (*(undefined4 *)(gen_frame + 0xc)) = 0x20;
        (*(undefined4 *)(gen_frame + 0x24)) = uVar1;
        (*(undefined1 *)(gen_frame + 0x28)) = 3;
        F_00974e00(this,&(*(undefined4 *)(gen_frame + 0x8)),0,0);
      }
      F_00ae2c80(param_1,0);
      iVar4 = 0x3f;
LAB_00ae3625: ;
      piVar3 = (int *)((int)param_1 + iVar4 * 0x28 + 4);
      *(undefined2 *)(piVar3 + 6) = 0;
      piVar3[9] = 0;
      F_00ab9000(0x4e6);
    }
    *piVar3 = param_2;
    piVar3[1] = param_3;
    piVar3[2] = param_4;
    *(undefined2 *)(piVar3 + 3) = *param_5;
    *(undefined2 *)((int)piVar3 + 0xe) = param_5[1];
    *(undefined2 *)(piVar3 + 4) = param_5[2];
    *(undefined2 *)((int)piVar3 + 0x12) = param_5[3];
    *(undefined2 *)(piVar3 + 5) = param_5[4];
    piVar3[7] = (int)gen_fl2bits(param_8);
    *(undefined1 *)(piVar3 + 6) = (undefined1)param_10;
    *(undefined1 *)((int)piVar3 + 0x16) = (undefined1)param_6;
    *(undefined1 *)((int)piVar3 + 0x17) = (undefined1)param_7;
    piVar3[8] = (int)gen_fl2bits(param_9);
    bVar2 = 1;
  }
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return bVar2;
}

/* ref: FUN_00ae36d0 */
byte F_00ae36d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae36d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  byte bVar1;
  int iVar2;
  int * piVar3;
  
  if (param_1 == -0x20000000) {
    return 0;
  }
  iVar2 = 0;
  piVar3 = (int *)((int)this + 4);
  do {
    if (*piVar3 == -0x20000000) {
      return 1;
    }
    if (*piVar3 == param_1) {
      bVar1 = F_00ae2c80(this,iVar2);
      if (bVar1 == 0) {
        return 0;
      }
      iVar2 = iVar2 + -1;
      piVar3 = piVar3 + -10;
    }
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 10;
  } while (iVar2 < 0x40);
  return 1;
}

/* ref: FUN_00ae3730 */
unsigned int F_00ae3730(unsigned int gen_a0)
{
  GEN_ENTER(0xae3730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  int in_ecx;
  byte bVar2;
  uint uVar3;
  undefined * pvVar4;
  undefined4 * puVar5;
  char * pcVar6;
  
  if (*(int *)((int)this + 0xec) == 0) {
    piVar1 = *(int * PTR32 *)((int)this + 0x1a8);
    in_ecx = piVar1[1];
    if (in_ecx != 0) {
      pcVar6 = "bgcommon/world/common/vfx_for_live/eff/b0046_sa_p_y.avfx";
      uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 0x10))(piVar1);
      switch((unsigned int)(uintptr_t)(uVar3 & 0xff)) {
      case 0: ;
        bVar2 = F_006bde60(in_ecx);
        if (bVar2 == 0) {
          pcVar6 = "bgcommon/world/common/vfx_for_live/eff/b0046_sa_p_y.avfx";
        }
        else {
          pcVar6 = "bgcommon/world/common/vfx_for_live/eff/b0131_rasp_y.avfx";
        }
        break;
      case 1: ;
        bVar2 = F_006bde60(in_ecx);
        if (bVar2 == 0) {
          pcVar6 = "bgcommon/world/common/vfx_for_live/eff/b0047_sasp_y.avfx";
        }
        else {
          pcVar6 = "bgcommon/world/common/vfx_for_live/eff/b0132_rass_y.avfx";
        }
        break;
      case 2: ;
        bVar2 = F_006bde60(in_ecx);
        if (bVar2 == 0) {
          pcVar6 = "bgcommon/world/common/vfx_for_live/eff/b0048_en_p_y.avfx";
        }
        else {
          pcVar6 = "bgcommon/world/common/vfx_for_live/eff/b0133_rabp_y.avfx";
        }
        break;
      case 3: ;
        bVar2 = F_006bde60(in_ecx);
        pcVar6 = "bgcommon/world/common/vfx_for_live/eff/b0134_rabs_y.avfx";
        if (bVar2 == 0) {
          pcVar6 = "bgcommon/world/common/vfx_for_live/eff/b0049_ensp_y.avfx";
        }
      }
      uVar3 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)((int)this + 0x1a8) + 0x28))))(*(int * PTR32 *)((int)this + 0x1a8));
      F_00a5f8c0(this,uVar3);
      *(undefined1 *)((int)this + 0x8a) = 6;
      pvVar4 = ((undefined *)GEN_TOP(((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(REFG(int, 0x1371270) + 0x14) + 8))))
                                 (*(int * PTR32 *)(REFG(int, 0x1371270) + 0x14),0x2d0,0x10)));
      if (pvVar4 == (undefined *)0x0) {
        pvVar4 = (undefined *)0x0;
      }
      else {
        pvVar4 = (undefined *)F_00698e40(pvVar4);
      }
      F_00699000(pvVar4);
      F_0068bd00(REFG(void * PTR32, 0x1371294),pvVar4);
      F_00690620(pvVar4);
      F_0068fce0(pvVar4,pcVar6);
      puVar5 = (undefined4 *)F_00a5feb0(this);
      *(undefined4 *)((int)pvVar4 + 0x30) = *puVar5;
      *(undefined4 *)((int)pvVar4 + 0x34) = puVar5[1];
      *(undefined4 *)((int)pvVar4 + 0x38) = puVar5[2];
      *(uint *)((int)pvVar4 + 0x24) = *(uint *)((int)pvVar4 + 0x24) | 2;
      F_0068ffe0(pvVar4,(float)(float10)0,(float)(float10)0,*(float *)&REFG(undefined, 0x10eae90),
                   *(float *)&REFG(undefined, 0x10ebb98));
      ((code *)*(gen_code32 *)(*(int *)this + 0x38))(this,pvVar4);
      *(byte *)((int)pvVar4 + 100) = *(byte *)((int)pvVar4 + 100) & 0xfe;
      ((code *)*(gen_code32 *)(*(int *)this + 0x2c))(this);
      return 0;
    }
  }
  return 0;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImplBase::vf3 */
unsigned int F_00ae38b0(unsigned int gen_a0)
{
  GEN_ENTER(0xae38b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  uint uVar2;
  
  if (*(int *)(this + 4) != 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 8))))(*(int * PTR32 *)(this + 4));
    if ((char)uVar2 != '\0') {
      iVar1 = *(int *)(this + 0x10);
      *(undefined4 *)(iVar1 + 0x198) = *(undefined4 *)(this + 4);
      *(undefined4 *)(iVar1 + 0x19c) = *(undefined4 *)(this + 8);
      *(undefined4 *)(iVar1 + 0x1a0) = *(undefined4 *)(this + 0xc);
      *((int *)GEN_TOP((*(int *)(this + 0x10) + 0x1a8))) = iVar1 + 0x194;
      F_00ae3730(*(undefined * PTR32 *)(this + 0x10));
      return 0;
    }
  }
  return 0;
}

/* ref: FUN_00ae3900 */
uint F_00ae3900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xae3900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint param_4 = (uint)gen_a4;
  int * piVar1;
  uint uVar2;
  
  uVar2 = param_4;
  if (param_4 == 0xffffffff) {
    uVar2 = 0;
    piVar1 = (int *)((int)this + 8);
    while (*piVar1 != 0) {
      uVar2 = uVar2 + 1;
      piVar1 = piVar1 + 1;
      if (0x27 < (int)uVar2) {
        return 0xffffffff;
      }
    }
    if (uVar2 == 0xffffffff) {
      return 0xffffffff;
    }
  }
  piVar1 = *(int * PTR32 *)((int)this + uVar2 * 4 + 8);
  if (piVar1 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar1 + 0xb0))(piVar1);
  }
  piVar1 = ((int *)GEN_TOP((*(int *)((int)this + 4) * uVar2 + *(int *)this)));
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = (int)(*(undefined * PTR32 (*)[54])REFP(0x10eb9e4));
  }
  *(int * PTR32 *)((int)this + uVar2 * 4 + 8) = piVar1;
  ((code *)*(gen_code32 *)(*piVar1 + 0xac))(piVar1,uVar2 + 0xf4);
  piVar1 = *(int * PTR32 *)((int)this + uVar2 * 4 + 8);
  ((code *)*(gen_code32 *)(*piVar1 + 0xac))(piVar1,uVar2 + 0xf4);
  F_00ae14b0(piVar1,param_1,param_2,param_3);
  F_00a35730(&REFG(undefined, 0x14a31e0),piVar1);
  return uVar2;
}

/* ref: FUN_00ae39b0 */
uint F_00ae39b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae39b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  int * piVar2;
  
  uVar1 = param_1;
  if (param_1 == 0xffffffff) {
    uVar1 = 0;
    piVar2 = (int *)((int)this + 8);
    while (*piVar2 != 0) {
      uVar1 = uVar1 + 1;
      piVar2 = piVar2 + 1;
      if (0x27 < (int)uVar1) {
        return 0xffffffff;
      }
    }
    if (uVar1 == 0xffffffff) {
      return 0xffffffff;
    }
  }
  piVar2 = *(int * PTR32 *)((int)this + uVar1 * 4 + 8);
  if (piVar2 != (int *)0x0) {
    ((code *)*(gen_code32 *)(*piVar2 + 0xb0))(piVar2);
  }
  piVar2 = ((int *)GEN_TOP((*(int *)((int)this + 4) * uVar1 + *(int *)this)));
  if (piVar2 == (int *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    *piVar2 = (int)(*(undefined * PTR32 (*)[53])REFP(0x10ebac4));
  }
  *(int * PTR32 *)((int)this + uVar1 * 4 + 8) = piVar2;
  ((code *)*(gen_code32 *)(*piVar2 + 0xac))(piVar2,uVar1 + 0xf4);
  F_00a35730(&REFG(undefined, 0x14a31e0),piVar2);
  return uVar1;
}

/* ref: FUN_00ae3a40 */
uint F_00ae3a40(unsigned int gen_a0)
{
  GEN_ENTER(0xae3a40u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  int * piVar1;
  undefined * this;
  ulonglong uVar2;
  int * PTR32 * this_00;
  
  (*(int * PTR32 *)(gen_frame + 0x4)) = (int *)0x0;
  piVar1 = (int *)F_004296a0(8,0,0x2c4);
  (*(int * PTR32 *)(gen_frame + 0x4)) = piVar1;
  if (piVar1 != (int *)0x0) {
    *piVar1 = 0;
    piVar1[1] = 0;
  }
  *piVar1 = (int)&(*(int * PTR32 *)(gen_frame + 0x4));
  (*(undefined4 *)(gen_frame + 0x8)) = 0;
  (*(undefined4 *)(gen_frame + 0xc)) = 0;
  (*(undefined4 *)(gen_frame + 0x10)) = 0;
  (*(undefined4 *)(gen_frame + 0x14)) = 0;
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  this_00 = &(*(int * PTR32 *)(gen_frame + 0x4));
  if (piVar1 == (int *)0x0) {
    F_00492c50(this_00);
    uVar2 = F_00429760((*(int * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
    return (uint)uVar2;
  }
  this = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x28))(piVar1)));
  F_0046aa70(this,param_1,this_00);
  F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x4)));
  uVar2 = F_00429760((*(int * PTR32 *)(gen_frame + 0x4)),8,0x2c4);
  return (uint)uVar2;
}

/* ref: FUN_00ae3af0 */
uint F_00ae3af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae3af0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined * this_00;
  uint uVar1;
  
  this_00 = (undefined *)F_00ae19a0(*param_1);
  if (this_00 != (undefined *)0x0) {
    F_00ae17a0(this_00,param_1);
  }
  if (*(char *)((int)param_1 + 0x17) == '\0') {
    F_00ae3a40(0x4de);
    if (*(char *)((int)param_1 + 0x17) == '\0') {
      F_00ae36d0(this,*param_1);
      goto LAB_00ae3b95;
    }
  }
  uVar1 = F_00a6e080(&REFG(undefined, 0x14a9e40),0x4d,0,0);
  if (*(char *)((int)param_1 + 0x16) != '\x06') {
    F_00ae3550(this,*param_1,(uint)*(byte *)(param_1 + 5),param_1[1],param_1 + 7,
                 (uint)*(byte *)((int)param_1 + 0x15),
                 CONCAT31((int3)(uVar1 >> 8),*(char *)((int)param_1 + 0x16)),GEN_TOF(gen_bits2f(param_1[2])),GEN_TOF(gen_bits2f(param_1[4])),(uint)*(byte *)((int)param_1 + 0x1a));
  }
  if (*(char *)((int)param_1 + 0x19) == '\x01') {
    uVar1 = F_00ae2850(this,2,0);
    return uVar1;
  }
LAB_00ae3b95: ;
  uVar1 = F_00ae2850(this,1,0);
  return uVar1;
}

/* ref: FUN_00ae3bb0 */
uint F_00ae3bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae3bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  int * piVar1;
  int * piVar2;
  uint uVar3;
  undefined * this_00;
  ulonglong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined * pvVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  (*(uint *)(gen_frame + 0x78)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x7c);
  piVar1 = (int *)F_00424750(REFG(undefined4, 0x137104c));
  uVar3 = 0;
  if (piVar1 != (int *)0x0) {
    F_0042cc20(((undefined1 *)(gen_frame + 0x18)),"",REFG(undefined4, 0x108cc50));
    (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
    piVar2 = (int *)F_004296a0(8,0,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x0)) = piVar2;
    if (piVar2 != (int *)0x0) {
      *piVar2 = 0;
      piVar2[1] = 0;
    }
    *piVar2 = (int)&(*(int * PTR32 *)(gen_frame + 0x0));
    (*(undefined4 *)(gen_frame + 0x6c)) = 0;
    (*(undefined4 *)(gen_frame + 0x4)) = 0;
    (*(undefined4 *)(gen_frame + 0x8)) = 0;
    (*(undefined4 *)(gen_frame + 0xc)) = 0;
    (*(undefined4 *)(gen_frame + 0x10)) = 0;
    (*(undefined4 *)(gen_frame + 0x6c)) = param_1;
    (*(undefined4 * PTR32 *)(gen_frame + 0x70)) = &(*(undefined4 *)(gen_frame + 0x6c));
    (*(char *)(gen_frame + 0x74)) = '\0';
    F_00493b50(&(*(int * PTR32 *)(gen_frame + 0x0)),&(*(undefined4 *)(gen_frame + 0x6c)));
    if ((((*(undefined4 * PTR32 *)(gen_frame + 0x70)) != (undefined4 *)0x0) && ((*(char *)(gen_frame + 0x74)) != '\0')) && ((*(char *)(gen_frame + 0x74)) == '\x01')) {
      pvVar7 = (undefined *)*(*(undefined4 * PTR32 *)(gen_frame + 0x70));
      *(int *)((int)pvVar7 + 0x54) = *(int *)((int)pvVar7 + 0x54) + -1;
      if (*(int *)((int)pvVar7 + 0x54) < 1) {
        F_0042c880(pvVar7);
        F_00406ad0(pvVar7);
      }
    }
    F_00ab3200(0x18e78,&(*(int * PTR32 *)(gen_frame + 0x0)),((undefined1 *)(gen_frame + 0x18)));
    uVar18 = 0;
    uVar17 = 0;
    uVar16 = 1;
    uVar15 = 0;
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0;
    uVar11 = 4;
    uVar10 = 0;
    uVar9 = 0;
    uVar8 = 0;
    uVar6 = 0;
    uVar5 = 0;
    pvVar7 = this;
    uVar3 = F_0042a990(((undefined1 *)(gen_frame + 0x18)));
    this_00 = ((undefined *)GEN_TOP(((code *)*(gen_code32 *)(*piVar1 + 0x1c))(piVar1)));
    uVar3 = F_00866a60(this_00,uVar3,uVar5,uVar6,pvVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,
                         uVar14,uVar15,uVar16,uVar17,uVar18);
    *(uint *)((int)this + 0xa04) = uVar3;
    F_00492c50(&(*(int * PTR32 *)(gen_frame + 0x0)));
    F_00429760((*(int * PTR32 *)(gen_frame + 0x0)),8,0x2c4);
    (*(int * PTR32 *)(gen_frame + 0x0)) = (int *)0x0;
    uVar4 = F_0042c880(((undefined1 *)(gen_frame + 0x18)));
    uVar3 = (uint)uVar4;
  }
  F_00c47745((*(uint *)(gen_frame + 0x78)) ^ (uint)(uint)(gen_frame + 0x7c));
  return uVar3;
}

/* ref: FUN_00ae3d00 */
uint F_00ae3d00(unsigned int gen_a0)
{
  GEN_ENTER(0xae3d00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float fVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int * piVar5;
  int * piVar6;
  int iVar7;
  float10 fVar8;
  double dVar9;
  undefined4 uVar10;
  
  bVar2 = false;
  iVar7 = 0;
  piVar5 = (int *)((int)this + 4);
  do {
    if (*piVar5 == -0x20000000) break;
    uVar3 = F_00ae19a0(*piVar5);
    if (uVar3 == 0) {
      fVar8 = ((float10)GEN_TOD(gen_bits2f(piVar5[7]))) - (float10)*(float *)(REFG(int, 0x137104c) + 0x1198);
    }
    else {
      fVar8 = (float10)*(float *)(uVar3 + 0x184);
    }
    piVar5[7] = (int)gen_fl2bits((float)fVar8);
    if ((gen_bits2f(piVar5[7]) <= 0.0) &&
       (piVar5[7] = 0, fVar1 = *(float *)&REFG(undefined, 0x10eb784), *(char *)((int)piVar5 + 0x19) == '\0')) {
      *(undefined1 *)((int)piVar5 + 0x19) = 1;
      piVar5[9] = (int)gen_fl2bits(fVar1);
    }
    if (*(char *)((int)piVar5 + 0x19) == '\x01') {
      fVar1 = ((float)GEN_TOF((((float10)GEN_TOD(gen_bits2f(piVar5[9]))) - (float10)*(float *)(REFG(int, 0x137104c) + 0x1198))));
      piVar5[9] = (int)gen_fl2bits(fVar1);
      if ((float10)fVar1 <= (float10)0) {
        F_00ae2c80(this,iVar7);
        iVar7 = iVar7 + -1;
        bVar2 = true;
        piVar5 = piVar5 + -10;
      }
    }
    iVar7 = iVar7 + 1;
    piVar5 = piVar5 + 10;
  } while (iVar7 < 0x40);
  if (bVar2) {
    F_00ae2850(this,1,0);
  }
  if (*(int *)((int)this + 0xa08) != 3) goto LAB_00ae3e34;
  uVar3 = F_005339c0(&REFG(undefined4, 0x1375bc0));
  uVar3 = F_00ae19a0(uVar3);
  if (uVar3 != 0) {
    if (REFG(int, 0x1379694) != 0) {
      dVar9 = F_00a600a0(REFG(int, 0x1379694),uVar3);
      fVar1 = (float)dVar9;
      if ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x10eb784))) &&
          (!(fVar1 < *(float *)&REFG(undefined, 0x10eb784)) && fVar1 != *(float *)&REFG(undefined, 0x10eb784)))
      goto LAB_00ae3e29;
    }
    uVar3 = F_005339c0(&REFG(undefined4, 0x1375bc0));
    if ((uVar3 != 0xe0000000) && (REFG(char, 0x1375c51) == '\0')) goto LAB_00ae3e34;
  }
LAB_00ae3e29: ;
  F_00ae2850(this,1,0);
LAB_00ae3e34: ;
  uVar3 = *(int *)((int)this + 0xa08) - 1;
  if (uVar3 == 0) {
    iVar7 = 0;
    piVar5 = (int *)((int)this + 4);
    do {
      if (*piVar5 == -0x20000000) break;
      uVar4 = F_00ab24a0(piVar5[2]);
      uVar3 = 0;
      if (uVar4 == 0) goto LAB_00ae3e6e;
      iVar7 = iVar7 + 1;
      piVar5 = piVar5 + 10;
    } while (iVar7 < 0x40);
    uVar3 = F_00ae2850(this,2,0);
  }
LAB_00ae3e6e: ;
  if (*(char *)((int)this + 0xa10) == '\x01') {
    *(undefined1 *)((int)this + 0xa10) = 0;
    piVar5 = (int *)F_00424750(REFG(int, 0x137104c));
    if (piVar5 != (int *)0x0) {
      uVar10 = 0x20;
      uVar3 = ((code *)*(gen_code32 *)(*piVar5 + 0x48))(piVar5);
      piVar6 = (int *)F_00763050(uVar3,uVar10);
      ((code *)*(gen_code32 *)(*piVar6 + 0xc))(piVar6);
      if (*(int *)((int)this + 0xa04) != 0) {
        piVar5 = ((int *)GEN_TOP(((code *)*(gen_code32 *)(*piVar5 + 0x1c))(piVar5)));
        ((code *)*(gen_code32 *)(*piVar5 + 0x54))(piVar5,*(undefined4 *)((int)this + 0xa04),0);
        *(undefined4 *)((int)this + 0xa04) = 0;
      }
    }
    if (*(int *)((int)this + 0xa08) == 2) {
      uVar3 = F_00ae2930(this);
    }
    else {
      uVar3 = *(int *)((int)this + 0xa08) - 3;
      if (uVar3 == 0) {
        uVar3 = F_00ae3bb0(this,*(undefined4 *)((int)this + 0xa0c));
        return uVar3;
      }
    }
  }
  return uVar3;
}

/* ref: FUN_00ae3f10 */
uint F_00ae3f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae3f10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  byte * pbVar1;
  int * piVar2;
  undefined * this_00;
  uint uVar3;
  
  if (0x2b < (int)param_1) {
    return 0xffffffff;
  }
  uVar3 = param_1;
  if (param_1 == 0xffffffff) {
    uVar3 = 0;
    piVar2 = (int *)((int)this + 8);
    while (*piVar2 != 0) {
      uVar3 = uVar3 + 1;
      piVar2 = piVar2 + 1;
      if (0x27 < (int)uVar3) {
        return 0xffffffff;
      }
    }
    if (uVar3 == 0xffffffff) {
      return 0xffffffff;
    }
  }
  this_00 = ((undefined *)GEN_TOP((*(int *)((int)this + 4) * uVar3 + *(int *)this)));
  if (this_00 == (undefined *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)F_00a668f0(this_00);
  }
  *(int * PTR32 *)((int)this + uVar3 * 4 + 8) = piVar2;
  ((code *)*(gen_code32 *)(*piVar2 + 0xac))(piVar2,uVar3 + 200);
  *((undefined1 *)GEN_TOP((*(int *)((int)this + uVar3 * 4 + 8) + 0x8a))) = 3;
  if (0x27 < (int)uVar3) {
    pbVar1 = ((byte *)GEN_TOP((*(int *)((int)this + uVar3 * 4 + 8) + 0x2dd4)));
    *pbVar1 = *pbVar1 | 4;
  }
  F_00a35730(&REFG(undefined, 0x14a31e0),*(undefined4 *)((int)this + uVar3 * 4 + 8));
  return uVar3;
}

/* ref: FUN_00ae4000 */
byte F_00ae4000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4000u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1e1) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae4030 */
uint F_00ae4030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4030u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = 0;
  *in_ecx = (*(undefined * PTR32 (*)[12])REFP(0x10eb7b0));
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = param_2;
  return (uint)in_ecx;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImplBase::vf1 */
unsigned int F_00ae4060(void)
{
  GEN_ENTER(0xae4060u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImplBase::vf2 */
uint F_00ae4070(void)
{
  GEN_ENTER(0xae4070u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImplBase::vf4 */
byte F_00ae4080(void)
{
  GEN_ENTER(0xae4080u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImplBase::vf5 */
byte F_00ae4090(void)
{
  GEN_ENTER(0xae4090u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImplBase::vf6 */
byte F_00ae40a0(void)
{
  GEN_ENTER(0xae40a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImplBase::vf7 */
byte F_00ae40b0(void)
{
  GEN_ENTER(0xae40b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImplBase::vf8 */
byte F_00ae40c0(void)
{
  GEN_ENTER(0xae40c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImplBase::vf9 */
uint F_00ae40d0(void)
{
  GEN_ENTER(0xae40d0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImplBase::vf10 */
uint F_00ae40e0(void)
{
  GEN_ENTER(0xae40e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImplBase::vf11 */
byte F_00ae40f0(void)
{
  GEN_ENTER(0xae40f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: FUN_00ae4100 */
uint F_00ae4100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4100u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)((int)this + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)((int)this + 0xc);
  *((uint *)GEN_TOP((*(int *)((int)this + 0x10) + 0x1a8))) = param_1;
  return param_1;
}

/* ref: FUN_00ae4130 */
uint F_00ae4130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4130u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[3] = 0;
  in_ecx[4] = param_2;
  *in_ecx = (*(undefined * PTR32 (*)[12])REFP(0x10eb7e4));
  return (uint)in_ecx;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImpl::vf11 */
byte F_00ae4160(void)
{
  GEN_ENTER(0xae4160u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImplBase::vf0 */
uint F_00ae4170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4170u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x10eb7b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Object::GatheringPointObject::GatheringPointObjectImpl::vf0 */
uint F_00ae41a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae41a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x10eb7b0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ae4230 */
uint F_00ae4230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4230u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc) = param_2;
  return param_2;
}

/* ref: Client::Game::Object::TreasureManager::vf0 */
uint F_00ae4260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ae42a0 */
uint F_00ae42a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae42a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = 0x1b4;
  *(undefined4 *)((int)this + 4) = 0x18;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined1 *)((int)this + 0x1c) = (undefined1)param_2;
  return (uint)this;
}

/* ref: FUN_00ae42d0 */
uint F_00ae42d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xae42d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)this = 0x1b5;
  *(undefined4 *)((int)this + 4) = 0x20;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  *(undefined1 *)((int)this + 0x20) = (undefined1)param_3;
  return (uint)this;
}

/* ref: FUN_00ae4300 */
uint F_00ae4300(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4300u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = 0x1b6;
  in_ecx[1] = 0x18;
  in_ecx[6] = param_2;
  return (uint)in_ecx;
}

/* ref: Client::Game::Object::Distance2DFilter::vf0 */
uint F_00ae4320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4320u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x109c994));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Object::EventObject::vf45 */
uint F_00ae4370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4370u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[53])REFP(0x10e6c8c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Object::GatheringPointObject::vf32 */
unsigned int F_00ae43a0(void)
{
  GEN_ENTER(0xae43a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::Game::Object::GatheringPointObject::vf45 */
uint F_00ae43b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae43b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)(this + 0x194) = (*(undefined * PTR32 (*)[12])REFP(0x10eb7b0));
  *(undefined * PTR32 * PTR32 *)(this + 0x180) = (*(undefined * PTR32 (*)[12])REFP(0x10eb7b0));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[53])REFP(0x10e6c8c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Object::Treasure::vf45 */
uint F_00ae4410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[53])REFP(0x10e6c8c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::Object::AreaObject::vf45 */
uint F_00ae4460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[53])REFP(0x10e6c8c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ae44a0 */
uint F_00ae44a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae44a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return (uint)in_ecx;
}

/* ref: FUN_00ae44d0 */
uint F_00ae44d0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xae44d0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *in_ecx = param_2;
  in_ecx[1] = param_3;
  in_ecx[2] = param_4;
  in_ecx[3] = param_5;
  return (uint)in_ecx;
}

/* ref: FUN_00ae4500 */
unsigned int F_00ae4500(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0xae4500u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
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

/* ref: FUN_00ae4530 */
uint F_00ae4530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae4530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00ae4560 */
uint F_00ae4560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4560u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00c9f0c0((undefined *)((int)this + 0x58),param_1);
  return uVar1;
}

/* ref: FUN_00ae45a0 */
uint F_00ae45a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae45a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14c) = param_2;
  return param_2;
}

/* ref: FUN_00ae45b0 */
byte F_00ae45b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae45b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x150) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae45c0 */
byte F_00ae45c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae45c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x151) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae45d0 */
byte F_00ae45d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xae45d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  byte bVar1;
  
  bVar1 = F_00c9f380(this,param_1,param_2,param_3);
  return bVar1;
}

/* ref: FUN_00ae4600 */
byte F_00ae4600(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4600u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x60) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae4620 */
byte F_00ae4620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4620u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x61) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae4640 */
byte F_00ae4640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4640u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x62) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae4670 */
byte F_00ae4670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4670u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x80) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae4690 */
byte F_00ae4690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4690u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x81) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae46b0 */
byte F_00ae46b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae46b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x82) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae46d0 */
unsigned int F_00ae46d0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae46d0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x84) = param_2;
  return 0;
}

/* ref: FUN_00ae4700 */
uint F_00ae4700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4700u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x88) = param_2;
  return param_2;
}

/* ref: FUN_00ae4720 */
ushort F_00ae4720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae4720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(ushort *)this = (ushort)param_1;
  *(undefined2 *)((int)this + 2) = (undefined2)param_2;
  return (ushort)param_1;
}

/* ref: FUN_00ae4830 */
unsigned int F_00ae4830(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae4830u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xc) = param_2;
  return 0;
}

/* ref: FUN_00ae4860 */
unsigned int F_00ae4860(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae4860u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x10) = param_2;
  return 0;
}

/* ref: FUN_00ae4890 */
unsigned int F_00ae4890(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae4890u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x14) = param_2;
  return 0;
}

/* ref: FUN_00ae48c0 */
unsigned int F_00ae48c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae48c0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x18) = param_2;
  return 0;
}

/* ref: FUN_00ae48f0 */
uint F_00ae48f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae48f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1c) = param_2;
  return param_2;
}

/* ref: FUN_00ae4910 */
uint F_00ae4910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4910u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x20) = param_2;
  return param_2;
}

/* ref: FUN_00ae4930 */
byte F_00ae4930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4930u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x24) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae49a0 */
byte F_00ae49a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae49a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2a) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae49c0 */
byte F_00ae49c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae49c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2b) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae49f0 */
uint F_00ae49f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae49f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x30) = param_2;
  return param_2;
}

/* ref: FUN_00ae4a10 */
byte F_00ae4a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4a10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 4) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae4a30 */
byte F_00ae4a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4a30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 5) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae4aa0 */
byte F_00ae4aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4aa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x10) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae4ac0 */
unsigned int F_00ae4ac0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae4ac0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x14) = param_2;
  return 0;
}

/* ref: FUN_00ae4af0 */
unsigned int F_00ae4af0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae4af0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x18) = param_2;
  return 0;
}

/* ref: FUN_00ae4b10 */
byte F_00ae4b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4b10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1d) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae4b30 */
unsigned int F_00ae4b30(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae4b30u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x20) = param_2;
  return 0;
}

/* ref: FUN_00ae4b60 */
unsigned int F_00ae4b60(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae4b60u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x24) = param_2;
  return 0;
}

/* ref: FUN_00ae4b90 */
unsigned int F_00ae4b90(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae4b90u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x28) = param_2;
  return 0;
}

/* ref: FUN_00ae4bc0 */
unsigned int F_00ae4bc0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae4bc0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x2c) = param_2;
  return 0;
}

/* ref: FUN_00ae4bf0 */
unsigned int F_00ae4bf0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae4bf0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x30) = param_2;
  return 0;
}

/* ref: FUN_00ae4c20 */
uint F_00ae4c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4c20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x34) = param_2;
  return param_2;
}

/* ref: FUN_00ae4c40 */
uint F_00ae4c40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4c40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x38) = param_2;
  return param_2;
}

/* ref: FUN_00ae4c60 */
byte F_00ae4c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4c60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x3c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae4c80 */
byte F_00ae4c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4c80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x3d) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae4ca0 */
uint F_00ae4ca0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4ca0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x40) = param_2;
  return param_2;
}

/* ref: FUN_00ae4cc0 */
byte F_00ae4cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4cc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x44) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae4ce0 */
byte F_00ae4ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4ce0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x45) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae4d00 */
byte F_00ae4d00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4d00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x46) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae4d20 */
byte F_00ae4d20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4d20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x47) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae4d40 */
byte F_00ae4d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4d40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x48) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae4d60 */
byte F_00ae4d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4d60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x49) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae4d80 */
byte F_00ae4d80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4d80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x4a) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae4da0 */
uint F_00ae4da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4da0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x4c) = param_2;
  return param_2;
}

/* ref: FUN_00ae4dc0 */
uint F_00ae4dc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4dc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x50) = param_2;
  return param_2;
}

/* ref: FUN_00ae4de0 */
uint F_00ae4de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4de0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00ae4e00 */
unsigned int F_00ae4e00(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae4e00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 8) = param_2;
  return 0;
}

/* ref: FUN_00ae4e30 */
uint F_00ae4e30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4e30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (param_2 + 1) * 0x10 + in_ecx;
}

/* ref: FUN_00ae4e50 */
uint F_00ae4e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4e50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xb0) = param_2;
  return param_2;
}

/* ref: FUN_00ae4e70 */
uint F_00ae4e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4e70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xb4) = param_2;
  return param_2;
}

/* ref: FUN_00ae4e90 */
uint F_00ae4e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4e90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xb8) = param_2;
  return param_2;
}

/* ref: FUN_00ae4eb0 */
uint F_00ae4eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4eb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xbc) = param_2;
  return param_2;
}

/* ref: FUN_00ae4ed0 */
unsigned int F_00ae4ed0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae4ed0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xc0) = param_2;
  return 0;
}

/* ref: FUN_00ae4f00 */
uint F_00ae4f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4f00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xc4) = param_2;
  return param_2;
}

/* ref: FUN_00ae4f30 */
byte F_00ae4f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4f30u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xe0) = (byte)param_2;
  return (byte)param_2;
}

/* ref: Client::Game::Control::MoveControl::AutoChaseTargetPointInfo::vf0 */
uint F_00ae4f40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4f40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ec468));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ae4fb0 */
uint F_00ae4fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae4fb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_00ae4fd0 */
unsigned int F_00ae4fd0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae4fd0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 8) = param_2;
  return 0;
}

/* ref: FUN_00ae5000 */
unsigned int F_00ae5000(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae5000u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xc) = param_2;
  return 0;
}

/* ref: Client::Game::Control::MoveControl::MoveOperationInputInfo::vf0 */
uint F_00ae5020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5020u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ec470));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ae50b0 */
uint F_00ae50b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae50b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ae50c0 */
uint F_00ae50c0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xae50c0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + param_2 * 4) = param_3;
  return param_2;
}

/* ref: FUN_00ae50e0 */
uint F_00ae50e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae50e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ae50f0 */
uint F_00ae50f0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xae50f0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0x14 + param_2 * 4) = param_3;
  return param_2;
}

/* ref: FUN_00ae5110 */
uint F_00ae5110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5110u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ae5120 */
uint F_00ae5120(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xae5120u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0x20 + param_2 * 4) = param_3;
  return param_2;
}

/* ref: FUN_00ae5140 */
uint F_00ae5140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5140u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ae5150 */
uint F_00ae5150(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xae5150u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0x28 + param_2 * 4) = param_3;
  return param_2;
}

/* ref: FUN_00ae5170 */
uint F_00ae5170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5170u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ae5180 */
uint F_00ae5180(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xae5180u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0x38 + param_2 * 4) = param_3;
  return param_2;
}

/* ref: FUN_00ae51a0 */
uint F_00ae51a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae51a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 in_ecx = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00ae51b0 */
uint F_00ae51b0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0xae51b0u, gen_a0, gen_a1, gen_trace_f(gen_a2), 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  float param_3 = (float)gen_a2;
  *(float *)(in_ecx + 0x44 + param_2 * 4) = param_3;
  return param_2;
}

/* ref: FUN_00ae5200 */
unsigned int F_00ae5200(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae5200u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x20) = param_2;
  return 0;
}

/* ref: FUN_00ae5260 */
unsigned int F_00ae5260(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae5260u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 4) = param_2;
  return 0;
}

/* ref: FUN_00ae5310 */
byte F_00ae5310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5310u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x270) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5330 */
uint F_00ae5330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5330u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_00ae5350 */
byte F_00ae5350(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5350u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x14) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5370 */
byte F_00ae5370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5370u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x15) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5380 */
byte F_00ae5380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5380u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x16) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae53a0 */
byte F_00ae53a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae53a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x17) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae53c0 */
byte F_00ae53c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae53c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x18) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae53e0 */
byte F_00ae53e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae53e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x19) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5400 */
byte F_00ae5400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5400u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1a) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5420 */
byte F_00ae5420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5420u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1b) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5440 */
byte F_00ae5440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5440u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5460 */
byte F_00ae5460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5460u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x22) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5480 */
unsigned int F_00ae5480(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae5480u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x24) = param_2;
  return 0;
}

/* ref: FUN_00ae54b0 */
byte F_00ae54b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae54b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x28) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae54d0 */
byte F_00ae54d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae54d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x29) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae54f0 */
byte F_00ae54f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae54f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2a) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5510 */
byte F_00ae5510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5510u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x2b) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5530 */
unsigned int F_00ae5530(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae5530u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x2c) = param_2;
  return 0;
}

/* ref: FUN_00ae5560 */
unsigned int F_00ae5560(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae5560u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x30) = param_2;
  return 0;
}

/* ref: FUN_00ae55c0 */
uint F_00ae55c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae55c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0xa0) = param_1;
  *(undefined4 *)((int)this + 0xa4) = param_2;
  return param_1;
}

/* ref: FUN_00ae55f0 */
uint F_00ae55f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae55f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0xa8) = param_1;
  *(undefined4 *)((int)this + 0xac) = param_2;
  return param_1;
}

/* ref: FUN_00ae5620 */
byte F_00ae5620(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5620u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xb0) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5650 */
unsigned int F_00ae5650(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae5650u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xd0) = param_2;
  return 0;
}

/* ref: FUN_00ae56a0 */
uint F_00ae56a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae56a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x150) = param_2;
  return param_2;
}

/* ref: FUN_00ae56c0 */
byte F_00ae56c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae56c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x154) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae56e0 */
byte F_00ae56e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae56e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x155) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5700 */
byte F_00ae5700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5700u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x156) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5720 */
uint F_00ae5720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5720u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x158) = param_2;
  return param_2;
}

/* ref: FUN_00ae5740 */
uint F_00ae5740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5740u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x15c) = param_2;
  return param_2;
}

/* ref: FUN_00ae5770 */
byte F_00ae5770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5770u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x170) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5790 */
byte F_00ae5790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5790u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x171) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae57b0 */
byte F_00ae57b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae57b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x172) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae57d0 */
byte F_00ae57d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae57d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x173) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae57f0 */
byte F_00ae57f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae57f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x174) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5810 */
byte F_00ae5810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5810u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x175) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5830 */
byte F_00ae5830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5830u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x176) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5850 */
byte F_00ae5850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5850u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x177) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5870 */
unsigned int F_00ae5870(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae5870u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x178) = param_2;
  return 0;
}

/* ref: FUN_00ae58a0 */
byte F_00ae58a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae58a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x17c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae58d0 */
byte F_00ae58d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae58d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x271) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae58f0 */
byte F_00ae58f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae58f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x272) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5910 */
byte F_00ae5910(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5910u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x273) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5930 */
byte F_00ae5930(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5930u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x274) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5950 */
byte F_00ae5950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5950u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x275) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5970 */
byte F_00ae5970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5970u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x276) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5990 */
uint F_00ae5990(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5990u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x278) = *param_1;
  *(undefined4 *)((int)this + 0x27c) = param_1[1];
  *(undefined4 *)((int)this + 0x280) = param_1[2];
  *(undefined4 *)((int)this + 0x284) = param_1[3];
  *(undefined4 *)((int)this + 0x288) = param_1[4];
  uVar1 = param_1[5];
  *(uint *)((int)this + 0x28c) = uVar1;
  return uVar1;
}

/* ref: FUN_00ae59e0 */
unsigned int F_00ae59e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae59e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x290) = param_2;
  return 0;
}

/* ref: FUN_00ae5a10 */
byte F_00ae5a10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5a10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x294) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5a30 */
uint F_00ae5a30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae5a30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x298) = param_1;
  *(undefined4 *)((int)this + 0x29c) = param_2;
  return param_1;
}

/* ref: Client::Game::Control::MoveControl::MoveControllerSubMemberForMine::ExternalRequestedMovingInfo::vf0 */
uint F_00ae5a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ec478));
  *(undefined * PTR32 * PTR32 *)(this + 0x24) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ae5a80 */
unsigned int F_00ae5a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5a80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)((int)this + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)((int)this + 0x20) = *(undefined4 *)(param_1 + 0x20);
  *(undefined1 *)((int)this + 0x24) = *(undefined1 *)(param_1 + 0x24);
  *(undefined1 *)((int)this + 0x25) = *(undefined1 *)(param_1 + 0x25);
  *(undefined1 *)((int)this + 0x26) = *(undefined1 *)(param_1 + 0x26);
  *(undefined1 *)((int)this + 0x27) = *(undefined1 *)(param_1 + 0x27);
  *(undefined1 *)((int)this + 0x28) = *(undefined1 *)(param_1 + 0x28);
  *(undefined1 *)((int)this + 0x29) = *(undefined1 *)(param_1 + 0x29);
  *(undefined1 *)((int)this + 0x2a) = *(undefined1 *)(param_1 + 0x2a);
  *(undefined1 *)((int)this + 0x2b) = *(undefined1 *)(param_1 + 0x2b);
  *(undefined1 *)((int)this + 0x2c) = *(undefined1 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  return 0;
}

/* ref: Client::Game::Control::MoveControl::MoveControllerSubMemberForMine::FreeControlRotatingInfo::vf0 */
uint F_00ae5b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5b10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ec480));
  *(undefined * PTR32 * PTR32 *)(this + 8) = (*(undefined * PTR32 (*)[1])REFP(0x10e8724));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ae5b40 */
uint F_00ae5b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5b40u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined1 *)((int)this + 4) = *(undefined1 *)(param_1 + 4);
  return (uint)this;
}

/* ref: Client::Game::Control::MoveControl::MoveControllerSubMemberForMine::vf0 */
uint F_00ae5b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5b60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ec488));
  *(undefined * PTR32 * PTR32 *)(this + 0x180) = (*(undefined * PTR32 (*)[1])REFP(0x10ec468));
  *(undefined * PTR32 * PTR32 *)(this + 0x160) = (*(undefined * PTR32 (*)[1])REFP(0x10ec470));
  *(undefined * PTR32 * PTR32 *)(this + 0x140) = (*(undefined * PTR32 (*)[1])REFP(0x10ec480));
  *(undefined * PTR32 * PTR32 *)(this + 0x148) = (*(undefined * PTR32 (*)[1])REFP(0x10e8724));
  *(undefined * PTR32 * PTR32 *)(this + 0xe0) = (*(undefined * PTR32 (*)[1])REFP(0x10ec478));
  *(undefined * PTR32 * PTR32 *)(this + 0x104) = (*(undefined * PTR32 (*)[1])REFP(0x109c96c));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ae5bd0 */
uint F_00ae5bd0(unsigned int gen_a0)
{
  GEN_ENTER(0xae5bd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  REFG(undefined4, 0x14c0a44) = param_1;
  return param_1;
}

/* ref: FUN_00ae5c00 */
byte F_00ae5c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5c00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 8) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5c20 */
byte F_00ae5c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5c20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 9) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5c40 */
unsigned int F_00ae5c40(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae5c40u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xc) = param_2;
  return 0;
}

/* ref: FUN_00ae5c70 */
unsigned int F_00ae5c70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae5c70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x10) = param_2;
  return 0;
}

/* ref: FUN_00ae5ca0 */
unsigned int F_00ae5ca0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae5ca0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x14) = param_2;
  return 0;
}

/* ref: FUN_00ae5cd0 */
uint F_00ae5cd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5cd0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x18) = param_2;
  return param_2;
}

/* ref: FUN_00ae5cf0 */
byte F_00ae5cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5cf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x1c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5d10 */
uint F_00ae5d10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae5d10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int param_2 = (int)gen_a2;
  return (uint)((param_1 * 3 + 0xb + param_2) * 0x10 + (int)this);
}

/* ref: FUN_00ae5d40 */
uint F_00ae5d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5d40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x10) = param_2;
  return param_2;
}

/* ref: FUN_00ae5d50 */
uint F_00ae5d50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5d50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (param_2 + 5) * 0x10 + in_ecx;
}

/* ref: FUN_00ae5d70 */
uint F_00ae5d70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5d70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return (param_2 + 8) * 0x10 + in_ecx;
}

/* ref: Client::Game::Control::MoveControl::HitCollisionSaveBufferForSlideMoving::vf0 */
uint F_00ae5d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10ec490));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00ae5dd0 */
unsigned int F_00ae5dd0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae5dd0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x10) = param_2;
  return 0;
}

/* ref: FUN_00ae5e00 */
byte F_00ae5e00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5e00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x14) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5e20 */
unsigned int F_00ae5e20(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae5e20u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x18) = param_2;
  return 0;
}

/* ref: FUN_00ae5e50 */
unsigned int F_00ae5e50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae5e50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x1c) = param_2;
  return 0;
}

/* ref: FUN_00ae5e80 */
unsigned int F_00ae5e80(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae5e80u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x20) = param_2;
  return 0;
}

/* ref: FUN_00ae5eb0 */
byte F_00ae5eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5eb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x24) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5ed0 */
byte F_00ae5ed0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5ed0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x25) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5ef0 */
byte F_00ae5ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5ef0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x26) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5f20 */
uint F_00ae5f20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae5f20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x40) = param_1;
  *(undefined4 *)((int)this + 0x44) = param_2;
  return param_1;
}

/* ref: FUN_00ae5f50 */
unsigned int F_00ae5f50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae5f50u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x48) = param_2;
  return 0;
}

/* ref: FUN_00ae5f80 */
byte F_00ae5f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5f80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x4c) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae5fb0 */
uint F_00ae5fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae5fb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x14) = param_2;
  return param_2;
}

/* ref: FUN_00ae5fd0 */
unsigned int F_00ae5fd0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae5fd0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x18) = param_2;
  return 0;
}

/* ref: FUN_00ae6000 */
unsigned int F_00ae6000(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae6000u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x1c) = param_2;
  return 0;
}

/* ref: FUN_00ae6030 */
unsigned int F_00ae6030(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae6030u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x20) = param_2;
  return 0;
}

/* ref: FUN_00ae6060 */
unsigned int F_00ae6060(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae6060u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x24) = param_2;
  return 0;
}

/* ref: FUN_00ae60b0 */
unsigned int F_00ae60b0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae60b0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x40) = param_2;
  return 0;
}

/* ref: FUN_00ae60e0 */
unsigned int F_00ae60e0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae60e0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x44) = param_2;
  return 0;
}

/* ref: FUN_00ae6110 */
unsigned int F_00ae6110(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae6110u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x48) = param_2;
  return 0;
}

/* ref: FUN_00ae6140 */
unsigned int F_00ae6140(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae6140u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x4c) = param_2;
  return 0;
}

/* ref: FUN_00ae6170 */
unsigned int F_00ae6170(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae6170u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x50) = param_2;
  return 0;
}

/* ref: FUN_00ae61a0 */
unsigned int F_00ae61a0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae61a0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x54) = param_2;
  return 0;
}

/* ref: FUN_00ae61d0 */
byte F_00ae61d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae61d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x58) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae61f0 */
byte F_00ae61f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae61f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x59) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae6210 */
byte F_00ae6210(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae6210u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x5a) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae6230 */
byte F_00ae6230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae6230u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x5b) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae6250 */
unsigned int F_00ae6250(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae6250u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x5c) = param_2;
  return 0;
}

/* ref: FUN_00ae6290 */
byte F_00ae6290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae6290u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x70) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae62b0 */
uint F_00ae62b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae62b0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x78) = param_1;
  *(undefined4 *)((int)this + 0x7c) = param_2;
  return param_1;
}

/* ref: FUN_00ae62f0 */
byte F_00ae62f0(unsigned int gen_a0)
{
  GEN_ENTER(0xae62f0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  REFG(undefined1, 0x14c0a40) = (byte)param_1;
  return (byte)param_1;
}

/* ref: FUN_00ae6300 */
byte F_00ae6300(unsigned int gen_a0)
{
  GEN_ENTER(0xae6300u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((param_1 != 3) && (param_1 != 0x22)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ae6320 */
byte F_00ae6320(unsigned int gen_a0)
{
  GEN_ENTER(0xae6320u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((param_1 != 0xd) && (param_1 != 0x29)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ae6340 */
byte F_00ae6340(unsigned int gen_a0)
{
  GEN_ENTER(0xae6340u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x11: ;
  case 0x12: ;
  case 0x13: ;
  case 0x2d: ;
  case 0x2e: ;
  case 0x2f: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_00ae6390 */
byte F_00ae6390(unsigned int gen_a0)
{
  GEN_ENTER(0xae6390u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x14: ;
  case 0x15: ;
  case 0x30: ;
  case 0x31: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_00ae63e0 */
byte F_00ae63e0(unsigned int gen_a0)
{
  GEN_ENTER(0xae63e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x16: ;
  case 0x1e: ;
  case 0x32: ;
  case 0x3a: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_00ae6440 */
byte F_00ae6440(unsigned int gen_a0)
{
  GEN_ENTER(0xae6440u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x19: ;
  case 0x1a: ;
  case 0x1b: ;
  case 0x2e: ;
  case 0x35: ;
  case 0x37: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_00ae6490 */
byte F_00ae6490(unsigned int gen_a0)
{
  GEN_ENTER(0xae6490u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x1c: ;
  case 0x1d: ;
  case 0x38: ;
  case 0x39: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_00ae64e0 */
byte F_00ae64e0(unsigned int gen_a0)
{
  GEN_ENTER(0xae64e0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0xe: ;
  case 0xf: ;
  case 0x17: ;
  case 0x18: ;
  case 0x2a: ;
  case 0x2b: ;
  case 0x33: ;
  case 0x34: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_00ae6540 */
byte F_00ae6540(unsigned int gen_a0)
{
  GEN_ENTER(0xae6540u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((param_1 != 0x10) && (param_1 != 0x2c)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ae6560 */
byte F_00ae6560(unsigned int gen_a0)
{
  GEN_ENTER(0xae6560u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 7: ;
  case 8: ;
  case 9: ;
  case 10: ;
  case 0xb: ;
  case 0xc: ;
  case 0x23: ;
  case 0x24: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_00ae65b0 */
byte F_00ae65b0(unsigned int gen_a0)
{
  GEN_ENTER(0xae65b0u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 7: ;
  case 8: ;
  case 0x23: ;
  case 0x24: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_00ae6600 */
byte F_00ae6600(unsigned int gen_a0)
{
  GEN_ENTER(0xae6600u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((param_1 != 0x1f) && (param_1 != 0x3b)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ae6620 */
byte F_00ae6620(unsigned int gen_a0)
{
  GEN_ENTER(0xae6620u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((param_1 != 0x20) && (param_1 != 0x3c)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ae6640 */
byte F_00ae6640(unsigned int gen_a0)
{
  GEN_ENTER(0xae6640u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((param_1 != 0x21) && (param_1 != 0x3d)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ae6660 */
byte F_00ae6660(unsigned int gen_a0)
{
  GEN_ENTER(0xae6660u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((param_1 != 0x1e) && (param_1 != 0x3a)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ae6680 */
byte F_00ae6680(unsigned int gen_a0)
{
  GEN_ENTER(0xae6680u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  switch((unsigned int)(uintptr_t)(param_1)) {
  case 0x40: ;
  case 0x41: ;
  case 0x46: ;
  case 0x47: ;
    return 1;
  default: ;
    return 0;
  }
}

/* ref: FUN_00ae66c0 */
byte F_00ae66c0(unsigned int gen_a0)
{
  GEN_ENTER(0xae66c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  if ((param_1 != 0x41) && (param_1 != 0x47)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ae66f0 */
unsigned int F_00ae66f0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae66f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x36c) = param_2;
  return 0;
}

/* ref: FUN_00ae6760 */
unsigned int F_00ae6760(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae6760u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x80) = param_2;
  return 0;
}

/* ref: FUN_00ae67b0 */
byte F_00ae67b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae67b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x420) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae67d0 */
uint F_00ae67d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae67d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x360) = param_2;
  return param_2;
}

/* ref: FUN_00ae67f0 */
unsigned int F_00ae67f0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae67f0u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x440) = param_2;
  return 0;
}

/* ref: FUN_00ae6820 */
unsigned int F_00ae6820(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae6820u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x444) = param_2;
  return 0;
}

/* ref: FUN_00ae6850 */
unsigned int F_00ae6850(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae6850u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x448) = param_2;
  return 0;
}

/* ref: FUN_00ae6880 */
unsigned int F_00ae6880(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae6880u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x44c) = param_2;
  return 0;
}

/* ref: FUN_00ae68c0 */
uint F_00ae68c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae68c0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(float *)(in_ecx + 0x450) = (float)(byte)param_2;
  return (uint)(byte)param_2;
}

/* ref: FUN_00ae68f0 */
unsigned int F_00ae68f0(float gen_a0)
{
  GEN_ENTER(0xae68f0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  return 0;
}

/* ref: FUN_00ae6910 */
unsigned int F_00ae6910(void)
{
  GEN_ENTER(0xae6910u, 0u, 0u, 0u, 0u);
  REFG(undefined4, 0x14c0a44) = 0;
  return 0;
}

/* ref: FUN_00ae6930 */
byte F_00ae6930(unsigned int gen_a0)
{
  GEN_ENTER(0xae6930u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  uint uVar2;
  
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  if (piVar1 == (int *)0x0) {
    return 0;
  }
  uVar2 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1);
  return 1 - (uVar2 != 1);
}

/* ref: FUN_00ae6960 */
byte F_00ae6960(void)
{
  GEN_ENTER(0xae6960u, 0u, 0u, 0u, 0u);
  return REFG(undefined1, 0x14c0a67);
}

/* ref: FUN_00ae6970 */
byte F_00ae6970(unsigned int gen_a0)
{
  GEN_ENTER(0xae6970u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (((*(int *)(in_ecx + 0x10) != 0) && (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 != 0)
      ) && (REFG(char, 0x14c0a64) != '\0')) {
    return 1;
  }
  return *(byte *)(in_ecx + 0x1cc);
}

/* ref: FUN_00ae69a0 */
byte F_00ae69a0(unsigned int gen_a0)
{
  GEN_ENTER(0xae69a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x249);
}

/* ref: FUN_00ae69b0 */
byte F_00ae69b0(unsigned int gen_a0)
{
  GEN_ENTER(0xae69b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x24b);
}

/* ref: FUN_00ae6a20 */
unsigned int F_00ae6a20(unsigned int gen_a0)
{
  GEN_ENTER(0xae6a20u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if (bVar1 != 0) {
      REFG(undefined4, 0x14c0a7b) = 1;
    }
  }
  return 0;
}

/* ref: FUN_00ae6a70 */
uint F_00ae6a70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae6a70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int param_1 = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = ((code *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(param_1 + 0x10) + 0x48))))((undefined4)gen_fl2bits(param_2));
  return uVar1;
}

/* ref: FUN_00ae6a90 */
byte F_00ae6a90(unsigned int gen_a0)
{
  GEN_ENTER(0xae6a90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(int *)(in_ecx + 0x10) != 0) {
    return *((byte *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0x2dd2))) >> 2 & 1;
  }
  return 0;
}

/* ref: FUN_00ae6ab0 */
uint F_00ae6ab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae6ab0u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = param_1;
  if ((char)param_2 == '\0') {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 0x22: ;
      return 3;
    case 0x23: ;
      return 7;
    case 0x24: ;
      return 8;
    case 0x29: ;
      return 0xd;
    case 0x2a: ;
      return 0xe;
    case 0x2b: ;
      return 0xf;
    case 0x2c: ;
      return 0x10;
    case 0x2d: ;
      return 0x11;
    case 0x2e: ;
      return 0x12;
    case 0x2f: ;
      return 0x13;
    case 0x30: ;
      return 0x14;
    case 0x31: ;
      return 0x15;
    case 0x32: ;
      return 0x16;
    case 0x33: ;
      return 0x17;
    case 0x34: ;
      return 0x18;
    case 0x35: ;
      return 0x19;
    case 0x36: ;
      return 0x1a;
    case 0x37: ;
      return 0x1b;
    case 0x38: ;
      return 0x1c;
    case 0x39: ;
      return 0x1d;
    case 0x3a: ;
      return 0x1e;
    case 0x3b: ;
      return 0x1f;
    case 0x3c: ;
      return 0x20;
    case 0x3d: ;
      return 0x21;
    case 0x46: ;
      return 0x40;
    case 0x47: ;
      uVar1 = 0x41;
    }
  }
  else {
    switch((unsigned int)(uintptr_t)(param_1)) {
    case 3: ;
      return 0x22;
    case 7: ;
      return 0x23;
    case 8: ;
      return 0x24;
    case 0xd: ;
      return 0x29;
    case 0xe: ;
      return 0x2a;
    case 0xf: ;
      return 0x2b;
    case 0x10: ;
      return 0x2c;
    case 0x11: ;
      return 0x2d;
    case 0x12: ;
      return 0x2e;
    case 0x13: ;
      return 0x2f;
    case 0x14: ;
      return 0x30;
    case 0x15: ;
      return 0x31;
    case 0x16: ;
      return 0x32;
    case 0x17: ;
      return 0x33;
    case 0x18: ;
      return 0x34;
    case 0x19: ;
      return 0x35;
    case 0x1a: ;
      return 0x36;
    case 0x1b: ;
      return 0x37;
    case 0x1c: ;
      return 0x38;
    case 0x1d: ;
      return 0x39;
    case 0x1e: ;
      return 0x3a;
    case 0x1f: ;
      return 0x3b;
    case 0x20: ;
      return 0x3c;
    case 0x21: ;
      return 0x3d;
    case 0x40: ;
      return 0x46;
    case 0x41: ;
      return 0x47;
    }
  }
  return uVar1;
}

/* ref: FUN_00ae6e10 */
byte F_00ae6e10(unsigned int gen_a0)
{
  GEN_ENTER(0xae6e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * piVar1;
  byte bVar2;
  uint uVar3;
  
  if ((*(int *)((int)this + 0x10) != 0) &&
     (bVar2 = F_00a9f620(*(int *)((int)this + 0x10)), bVar2 != 0)) {
    return 1;
  }
  piVar1 = *(int * PTR32 *)((int)this + 0x10);
  if ((piVar1 != (int *)0x0) && (uVar3 = ((code *)*(gen_code32 *)(*piVar1 + 4))(piVar1), uVar3 == 1)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ae6e60 */
uint F_00ae6e60(unsigned int gen_a0)
{
  GEN_ENTER(0xae6e60u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x10);
}

/* ref: FUN_00ae6e80 */
uint F_00ae6e80(unsigned int gen_a0)
{
  GEN_ENTER(0xae6e80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int in_ecx;
  uint uVar1;
  byte bVar2;
  
  in_ecx = *(int *)((int)this + 0x10);
  if ((in_ecx == 0) || (bVar2 = *(byte *)(in_ecx + 0x2dd2) >> 2 & 1, bVar2 == 0)) {
    uVar1 = F_00aa0210(in_ecx,1,0);
    if ((uVar1 == 0) ||
       ((uVar1 = F_00aa0680(*(undefined * PTR32 *)((int)this + 0x10),1,0), uVar1 == 0 ||
        (*(byte *)(uVar1 + 5) < 2)))) {
      if (*(uint *)((int)this + 0x364) == 0) {
        return 3;
      }
      return *(uint *)((int)this + 0x364);
    }
    bVar2 = 1;
  }
  if (*(uint *)((int)this + 0x368) != 0) {
    return *(uint *)((int)this + 0x368);
  }
  if (bVar2 == 0) {
    return 3;
  }
  return 0x22;
}

/* ref: FUN_00ae6ef0 */
byte F_00ae6ef0(unsigned int gen_a0)
{
  GEN_ENTER(0xae6ef0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (REFG(char, 0x14c0a40) == '\0') {
    return 0;
  }
  return *(char *)(in_ecx + 0x420) != '\0';
}

/* ref: FUN_00ae6fc0 */
float10 F_00ae6fc0(unsigned int gen_a0)
{
  GEN_ENTER(0xae6fc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float fVar1;
  byte bVar2;
  bool bVar3;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar2 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if (bVar2 != 0) {
      return (float10)*(float *)&REFG(undefined, 0x14c0a7c);
    }
  }
  if (*(char *)(in_ecx + 0x1cc) != '\0') {
    fVar1 = *(float *)(in_ecx + 0x40);
    if ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) ==
        ((GEN_ISNAN(fVar1) || GEN_ISNAN(REFG(float, 0x10ebbf0))) || fVar1 == REFG(float, 0x10ebbf0))) {
      bVar3 = GEN_ISNAN(*(float *)(in_ecx + 0x44)) || GEN_ISNAN(REFG(float, 0x10ebbf0));
      if (bVar3 != (bVar3 || *(float *)(in_ecx + 0x44) == REFG(float, 0x10ebbf0))) {
        return (float10)fVar1;
      }
    }
    else {
      bVar3 = GEN_ISNAN(*(float *)(in_ecx + 0x4c)) || GEN_ISNAN(REFG(float, 0x10ebbf0));
      if (bVar3 != (bVar3 || *(float *)(in_ecx + 0x4c) == REFG(float, 0x10ebbf0))) goto LAB_00ae7035;
    }
    return (float10)*(float *)(in_ecx + 0x1d8);
  }
LAB_00ae7035: ;
  return (float10)0;
}

/* ref: FUN_00ae7060 */
ushort F_00ae7060(unsigned int gen_a0)
{
  GEN_ENTER(0xae7060u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(ushort *)(in_ecx + 0x374);
}

/* ref: FUN_00ae7070 */
uint F_00ae7070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae7070u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(uint *)(in_ecx + 0x374) = (uint)(ushort)param_2;
  return (uint)(ushort)param_2;
}

/* ref: FUN_00ae70b0 */
uint F_00ae70b0(unsigned int gen_a0)
{
  GEN_ENTER(0xae70b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  uint in_EAX = 0;
  undefined3 extraout_var = 0;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    in_EAX = CONCAT31(extraout_var,bVar1);
    if (bVar1 != 0) {
      REFG(undefined4, 0x14c0cc3) = 1;
    }
  }
  return in_EAX;
}

/* ref: FUN_00ae70d0 */
unsigned int F_00ae70d0(unsigned int gen_a0)
{
  GEN_ENTER(0xae70d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if (bVar1 != 0) {
      REFG(undefined4, 0x14c0cc3) = 0;
    }
  }
  return 0;
}

/* ref: FUN_00ae70f0 */
byte F_00ae70f0(unsigned int gen_a0)
{
  GEN_ENTER(0xae70f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined1 *)(in_ecx + 0x420) = 0;
  REFG(undefined1, 0x14c0a40) = 0;
  return 0;
}

/* ref: FUN_00ae7100 */
float10 F_00ae7100(unsigned int gen_a0)
{
  GEN_ENTER(0xae7100u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float10 fVar1;
  
  fVar1 = (float10)(int)(param_1 + 100);
  if ((int)(param_1 + 100) < 0) {
    fVar1 = fVar1 + (float10)*(float *)&REFG(undefined, 0x1088110);
  }
  return (float10)(float)(fVar1 / (float10)*(double *)&REFG(undefined, 0x1088118));
}

/* ref: FUN_00ae7130 */
uint F_00ae7130(void)
{
  GEN_ENTER(0xae7130u, 0u, 0u, 0u, 0u);
  if (REFG(int, 0x1375bbc) != 0) {
    return 0;
  }
  return REFG(undefined4, 0x1375b90);
}

/* ref: FUN_00ae7160 */
byte F_00ae7160(void)
{
  GEN_ENTER(0xae7160u, 0u, 0u, 0u, 0u);
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
  if (bVar1 != 0) {
    uVar2 = F_00b6afa0();
    if (uVar2 != 0) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00ae7180 */
uint F_00ae7180(unsigned int gen_a0)
{
  GEN_ENTER(0xae7180u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined * this;
  undefined4 * puVar1;
  
  this = (undefined *)F_00b6afa0();
  puVar1 = (undefined4 *)F_00a5feb0(this);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return (uint)param_1;
}

/* ref: FUN_00ae7230 */
byte F_00ae7230(void)
{
  GEN_ENTER(0xae7230u, 0u, 0u, 0u, 0u);
  if ((REFG(int, 0x1375b64) != 2) && (REFG(int, 0x1375b64) != 3)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ae7250 */
uint F_00ae7250(unsigned int gen_a0)
{
  GEN_ENTER(0xae7250u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
  if (bVar1 != 0) {
    uVar2 = F_00b6afa0();
    if ((uVar2 != 0) && (*(char *)((int)this + 0xb0) != '\0')) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00ae7280 */
byte F_00ae7280(unsigned int gen_a0)
{
  GEN_ENTER(0xae7280u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  byte bVar1;
  uint uVar2;
  
  bVar1 = F_005374c0(&REFG(undefined4, 0x1375bc0));
  if (bVar1 != 0) {
    uVar2 = F_00b6afa0();
    if (((uVar2 != 0) && (*(char *)((int)this + 0xb0) != '\0')) &&
       (*(char *)((int)this + 0x14) != '\0')) {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00ae72e0 */
uint F_00ae72e0(unsigned int gen_a0)
{
  GEN_ENTER(0xae72e0u, gen_a0, 0u, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined * this;
  undefined4 * puVar1;
  
  this = (undefined *)F_00b6afa0();
  puVar1 = (undefined4 *)F_00a5feb0(this);
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  return (uint)param_1;
}

/* ref: FUN_00ae7310 */
uint F_00ae7310(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae7310u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x230) + 0x19;
  *param_1 = *(undefined4 *)((int)this + iVar1 * 0x10);
  param_1[1] = *(undefined4 *)((int)this + iVar1 * 0x10 + 4);
  param_1[2] = *(undefined4 *)((int)this + iVar1 * 0x10 + 8);
  return (uint)param_1;
}

/* ref: FUN_00ae7340 */
byte F_00ae7340(unsigned int gen_a0)
{
  GEN_ENTER(0xae7340u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(char *)(in_ecx + 0x18) != '\0') && (*(int *)(in_ecx + 0x238) == *(int *)(in_ecx + 0x234)))
  {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ae73e0 */
byte F_00ae73e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae73e0u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if ((*(char *)(in_ecx + 0x14) == '\0') && ((char)param_2 != '\0')) {
    *(undefined1 *)(in_ecx + 0x14) = 1;
  }
  if ((*(char *)(in_ecx + 0x15) == '\0') && ((char)param_3 != '\0')) {
    *(undefined1 *)(in_ecx + 0x15) = 1;
  }
  return 1;
}

/* ref: FUN_00ae7420 */
byte F_00ae7420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae7420u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  bool bVar1;
  
  *(undefined1 *)(in_ecx + 0x22) = 1;
  bVar1 = param_2 != (undefined4 *)0x0;
  if (bVar1) {
    *(undefined4 *)(in_ecx + 0x24) = *param_2;
  }
  *(bool *)(in_ecx + 0x28) = bVar1;
  return bVar1;
}

/* ref: FUN_00ae7440 */
unsigned int F_00ae7440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae7440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 0x176) = 1;
  if (param_1 != (undefined4 *)0x0) {
    *(undefined1 *)((int)this + 0x177) = 1;
    *(undefined4 *)((int)this + 0x178) = *param_1;
    return 0;
  }
  *(undefined1 *)((int)this + 0x177) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  return 0;
}

/* ref: FUN_00ae7490 */
double F_00ae7490(unsigned int gen_a0)
{
  GEN_ENTER(0xae7490u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  float local_8;
  
  local_8 = *((float *)GEN_TOP((*((int *)GEN_TOP((*(int *)((int)this + 0x10) + 0x10))) + 0xc0)));
  uVar1 = F_00b6afa0();
  if (uVar1 != 0) {
    local_8 = ((float)GEN_TOF(((float10)*(float *)(uVar1 + 0xc0) + (float10)local_8)));
  }
  return (double)local_8;
}

/* ref: FUN_00ae74d0 */
uint F_00ae74d0(float gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xae74d0u, gen_trace_f(gen_a0), gen_a1, gen_a2, gen_a3);
  float param_1 = (float)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  uint uVar3;
  float10 fVar4;
  
  F_0054ce40(&(*(float *)(gen_frame + 0x0)),param_2,param_3);
  if (!GEN_ISNAN((*(float *)(gen_frame + 0x4))) && !(0.0 <= (*(float *)(gen_frame + 0x4)))) {
    param_1 = (float)((float10)param_1 * (float10)REFG(double, 0x1094890));
  }
  fVar1 = (float)((float10)param_1 * (float10)REFG(double, 0x1088108));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  fVar4 = ((float10)GEN_TOD(fsin((float10)fVar1)));
  fVar2 = (float)fVar4;
  (*(float *)(gen_frame + 0x18)) = fVar2;
  fVar4 = (float10)fVar2;
  (*(float *)(gen_frame + 0x0)) = (float)(fVar4 * (float10)*param_4);
  (*(float *)(gen_frame + 0x4)) = (float)((float10)param_4[1] * fVar4);
  (*(float *)(gen_frame + 0x8)) = (float)(fVar4 * (float10)param_4[2]);
  fVar4 = ((float10)GEN_TOD(fcos((float10)fVar1)));
  (*(float *)(gen_frame + 0x18)) = (float)fVar4;
  (*(float *)(gen_frame + 0xc)) = (float)fVar4;
  uVar3 = F_004f41e0(param_2,&(*(float *)(gen_frame + 0x0)));
  return uVar3;
}

/* ref: FUN_00ae75d0 */
byte F_00ae75d0(unsigned int gen_a0)
{
  GEN_ENTER(0xae75d0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if (*(double *)&REFG(undefined, 0x10944e0) <= (double)*(byte *)(in_ecx + 0x156)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ae76b0 */
byte F_00ae76b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae76b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 8) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00ae7720 */
byte F_00ae7720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xae7720u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  *(byte *)(in_ecx + 4) = (byte)param_3;
  return (byte)param_3;
}

/* ref: FUN_00ae7740 */
unsigned int F_00ae7740(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xae7740u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  return 0;
}

/* ref: FUN_00ae7790 */
float10 F_00ae7790(float gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xae7790u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar2;
  
  fVar2 = ((float10)GEN_TOD(pow((float10)param_2,(float10)*(double *)&REFG(undefined, 0x1092098))));
  return (float10)((float)GEN_TOF(((float10)param_1 * (float10)param_2 +
                         ((float10)param_3 * (float10)REFG(double, 0x1088108)) * (float10)(float)fVar2)));
}

/* ref: FUN_00ae77d0 */
float10 F_00ae77d0(unsigned int gen_a0)
{
  GEN_ENTER(0xae77d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float10 fVar2;
  float local_8;
  
  local_8 = REFG(float, 0x1339b98);
  if (param_1 != 0) {
    local_8 = *(float *)param_1;
  }
  fVar2 = ((float10)GEN_TOD(pow((float10)local_8,(float10)*(double *)&REFG(undefined, 0x1092098))));
  return (float10)((float)GEN_TOF((((float10)(float)fVar2 * (float10)REFG(double, 0x1094890)) /
                         ((float10)REFG(float, 0x1339b94) + (float10)REFG(float, 0x1339b94)))));
}

/* ref: FUN_00ae7830 */
byte F_00ae7830(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae7830u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  int param_2 = (int)gen_a1;
  float * pfVar1;
  uint uVar2;
  bool bVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar2 = 0;
  if (*(uint *)(param_1 + 0x10) != 0) {
    pfVar1 = (float *)(param_1 + 0xb4);
    do {
      bVar3 = GEN_ISNAN((float10)pfVar1[-1]) || GEN_ISNAN((float10)*(float *)(param_2 + 0xc));
      if ((((((bVar3 != (bVar3 || (float10)pfVar1[-1] == (float10)*(float *)(param_2 + 0xc))) &&
             (bVar3 = GEN_ISNAN((float10)*pfVar1) || GEN_ISNAN((float10)*(float *)(param_2 + 0x10)),
             bVar3 != (bVar3 || (float10)*pfVar1 == (float10)*(float *)(param_2 + 0x10)))) &&
            (bVar3 = GEN_ISNAN((float10)pfVar1[1]) || GEN_ISNAN((float10)*(float *)(param_2 + 0x14)),
            bVar3 != (bVar3 || (float10)pfVar1[1] == (float10)*(float *)(param_2 + 0x14)))) &&
           ((bVar3 = GEN_ISNAN((float10)pfVar1[0xb]) || GEN_ISNAN((float10)*(float *)(param_2 + 0x18)),
            bVar3 != (bVar3 || (float10)pfVar1[0xb] == (float10)*(float *)(param_2 + 0x18)) &&
            (bVar3 = GEN_ISNAN((float10)pfVar1[0xc]) || GEN_ISNAN((float10)*(float *)(param_2 + 0x1c)),
            bVar3 != (bVar3 || (float10)pfVar1[0xc] == (float10)*(float *)(param_2 + 0x1c)))))) &&
          ((bVar3 = GEN_ISNAN((float10)pfVar1[0xd]) || GEN_ISNAN((float10)*(float *)(param_2 + 0x20)),
           bVar3 != (bVar3 || (float10)pfVar1[0xd] == (float10)*(float *)(param_2 + 0x20)) &&
           ((bVar3 = GEN_ISNAN((float10)pfVar1[0x17]) || GEN_ISNAN((float10)*(float *)(param_2 + 0x24)),
            bVar3 != (bVar3 || (float10)pfVar1[0x17] == (float10)*(float *)(param_2 + 0x24)) &&
            (bVar3 = GEN_ISNAN((float10)pfVar1[0x18]) || GEN_ISNAN((float10)*(float *)(param_2 + 0x28)),
            bVar3 != (bVar3 || (float10)pfVar1[0x18] == (float10)*(float *)(param_2 + 0x28))))))))
         && (bVar3 = GEN_ISNAN((float10)pfVar1[0x19]) || GEN_ISNAN((float10)*(float *)(param_2 + 0x2c)),
            bVar3 != (bVar3 || (float10)pfVar1[0x19] == (float10)*(float *)(param_2 + 0x2c)))) {
        return 1;
      }
      uVar2 = uVar2 + 1;
      pfVar1 = pfVar1 + 4;
    } while (uVar2 < *(uint *)(param_1 + 0x10));
  }
  return 0;
}

/* ref: FUN_00ae7a40 */
byte F_00ae7a40(float gen_a0, float gen_a1)
{
  GEN_ENTER(0xae7a40u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), 0u, 0u);
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(double *)&REFG(undefined, 0x1094810) < (double)(float)((float10)param_1 - (float10)param_2)) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ae7a70 */
unsigned int F_00ae7a70(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae7a70u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  undefined * param_1 = (undefined *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)((int)param_1 + 0x28) = param_2;
  if ((*(int *)((int)param_1 + 0x14) == 3) && (param_2 <= 0.0)) {
    *(undefined4 *)((int)param_1 + 0x14) = 4;
    F_00af8d90(param_1,4,3);
  }
  return 0;
}

/* ref: FUN_00ae7aa0 */
uint F_00ae7aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae7aa0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  if ((*(char *)(in_ecx + 0xa6) != '\0') &&
     (((char)param_2 == '\0' || (*(char *)(in_ecx + 0xcc) != '\0')))) {
    return in_ecx + 0xd0;
  }
  return in_ecx + 0x80;
}

/* ref: FUN_00ae7ad0 */
byte F_00ae7ad0(unsigned int gen_a0)
{
  GEN_ENTER(0xae7ad0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int in_ecx_00;
  byte bVar1;
  
  if (((*(int *)(in_ecx + 0x10) != 0) &&
      (in_ecx_00 = *((int *)GEN_TOP((*(int *)(in_ecx + 0x10) + 0x10))), in_ecx_00 != 0)) &&
     (bVar1 = F_00a9f620(in_ecx_00), bVar1 != 0)) {
    return 0;
  }
  if ((*(int *)(in_ecx + 0x14) != 0) && (*(char *)(in_ecx + 0x5b) == '\0')) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00ae7b00 */
unsigned int F_00ae7b00(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0xae7b00u, gen_a0, gen_trace_f(gen_a1), 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  if (*(char *)(in_ecx + 0x49) != '\0') {
    *(float *)(in_ecx + 0x40) = param_2;
    *(undefined1 *)(in_ecx + 0x48) = 1;
  }
  return 0;
}

/* ref: FUN_00ae7ba0 */
float10 F_00ae7ba0(float gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xae7ba0u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float in_xmm3 = (float)gen_a0;
  float in_xmm5 = (float)gen_a1;
  float in_xmm6 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  
  fVar1 = F_00c4d590(in_xmm3,in_xmm5,in_xmm6,(float10)param_4);
  return (float10)(float)fVar1;
}

/* ref: FUN_00ae7bc0 */
byte F_00ae7bc0(float gen_a0)
{
  GEN_ENTER(0xae7bc0u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  int iVar1;
  uint uVar2;
  
  iVar1 = F_00c51673((double)param_1);
  if (iVar1 != 0) {
    return 1;
  }
  uVar2 = F_00c51657((int)(ulonglong)gen_d2bits((double)param_1),
                       (int)((ulonglong)gen_d2bits((double)param_1) >> 0x20));
  return uVar2 == 0;
}

/* ref: FUN_00ae7c10 */
uint F_00ae7c10(float gen_a0)
{
  GEN_ENTER(0xae7c10u, gen_trace_f(gen_a0), 0u, 0u, 0u);
  float param_1 = (float)gen_a0;
  uint local_c;
  
  local_c = (uint)(longlong)TRUNC((double)param_1 * *(double *)&REFG(undefined, 0x10912a8));
  return local_c;
}

/* ref: FUN_00ae7c40 */
unsigned int F_00ae7c40(unsigned int gen_a0)
{
  GEN_ENTER(0xae7c40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return 0;
}

/* ref: FUN_00ae7c60 */
byte F_00ae7c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae7c60u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  if ((float10)*(float *)&REFG(undefined, 0x10ebbe8) <
      (float10)((float)GEN_TOF(((float10)*(float *)(param_1 + 8) * (float10)param_2[2] +
                      ((float10)*(float *)param_1 * (float10)*param_2 +
                      (float10)*(float *)(param_1 + 4) * (float10)param_2[1]))))) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ae8170 */
byte F_00ae8170(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5)
{
  GEN_ENTER(0xae8170u, gen_a0, gen_a1, gen_a2, gen_a3);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  float * param_4 = (float *)(uintptr_t)gen_a3;
  float * param_5 = (float *)(uintptr_t)gen_a4;
  undefined1 * param_6 = (undefined1 *)(uintptr_t)gen_a5;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  if (param_6 != (undefined1 *)0x0) {
    *param_6 = 0;
  }
  fVar6 = (float10)REFG(double, 0x1094890);
  fVar7 = (float10)((float)GEN_TOF((((float10)(float)((float10)param_3[1] * fVar6) * (float10)param_2[1] +
                           (float10)(float)((float10)*param_3 * fVar6) * (float10)*param_2) +
                          (float10)(float)(fVar6 * (float10)param_3[2]) * (float10)param_2[2])));
  fVar5 = (float10)0;
  if ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar5)) != ((GEN_ISNAN(fVar7) || GEN_ISNAN(fVar5)) || fVar7 == fVar5)) {
    return 0;
  }
  fVar6 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((((float10)(float)((float10)param_4[1] -
                                                             (float10)param_1[1]) *
                                             (float10)(float)((float10)param_3[1] * fVar6) +
                                            (float10)(float)((float10)*param_4 - (float10)*param_1)
                                            * (float10)(float)((float10)*param_3 * fVar6)) +
                                           (float10)(float)((float10)param_4[2] -
                                                           (float10)param_1[2]) *
                                           (float10)(float)(fVar6 * (float10)param_3[2])))) / fVar7)));
  if ((fVar6 < fVar5) && (param_6 != (undefined1 *)0x0)) {
    *param_6 = 1;
  }
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_1[1];
  fVar4 = param_1[2];
  *param_5 = ((float)GEN_TOF(((float10)*param_1 + (float10)(float)((float10)*param_2 * fVar6))));
  param_5[1] = ((float)GEN_TOF(((float10)fVar3 + (float10)(float)((float10)fVar1 * fVar6))));
  param_5[2] = ((float)GEN_TOF(((float10)fVar4 + (float10)(float)(fVar6 * (float10)fVar2))));
  return 1;
}

/* ref: FUN_00ae82c0 */
unsigned int F_00ae82c0(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0xae82c0u, gen_a0, gen_trace_f(gen_a1), gen_trace_f(gen_a2), 0u);
  uint param_1 = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  if ((char)param_1 != '\0') {
    return 0;
  }
  return 0;
}

/* ref: FUN_00ae8330 */
byte F_00ae8330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xae8330u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xc40];
  undefined * this;
  
  (*(uint *)(gen_frame + 0xc2c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0xc30);
  this = (undefined *)F_00424810(REFG(undefined4, 0x137104c));
  if (this != (undefined *)0x0) {
    (*(undefined4 *)(gen_frame + 0x20)) = *param_1;
    (*(undefined4 *)(gen_frame + 0x24)) = param_1[1];
    (*(undefined4 *)(gen_frame + 0x28)) = param_1[2];
    (*(undefined4 *)(gen_frame + 0x2c)) = param_1[3];
    (*(undefined4 *)(gen_frame + 0x34)) = param_1[5];
    (*(undefined4 *)(gen_frame + 0x30)) = param_1[4];
    (*(undefined4 *)(gen_frame + 0x8)) = 0x19a;
    (*(undefined4 *)(gen_frame + 0xc)) = 0x28;
    F_00974e00(this,&(*(undefined4 *)(gen_frame + 0x8)),-(uint)(param_2 != 0) & 0x19a,param_2);
  }
  REFG(undefined1, 0x14c0ce4) = 0;
  *(ulonglong *)&REFG(undefined, 0x14c0ce8) = F_00427d90();
  F_00c47745((*(uint *)(gen_frame + 0xc2c)) ^ (uint)(uint)(gen_frame + 0xc30));
  return 1;
}

/* ref: FUN_00ae8400 */
uint F_00ae8400(void)
{
  GEN_ENTER(0xae8400u, 0u, 0u, 0u, 0u);
  REFG(undefined1, 0x14c0a66) = 0;
  *(undefined4 *)&REFG(undefined, 0x14c0af8) = 0xe0000000;
  *(undefined4 *)&REFG(undefined, 0x14c0afc) = 0;
  return 0;
}

/* ref: FUN_00ae8430 */
float F_00ae8430(void)
{
  GEN_ENTER(0xae8430u, 0u, 0u, 0u, 0u);
  float fVar1;
  
  fVar1 = *(float *)(REFG(int, 0x137104c) + 0x1198);
  if ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(REFG(float, 0x10ebd20))) && !(fVar1 <= REFG(float, 0x10ebd20))) {
    return REFG(float, 0x10ebd20);
  }
  return fVar1;
}

/* ref: FUN_00ae8460 */
float10 F_00ae8460(float gen_a0, float gen_a1, float gen_a2, float gen_a3)
{
  GEN_ENTER(0xae8460u, gen_trace_f(gen_a0), gen_trace_f(gen_a1), gen_trace_f(gen_a2), gen_trace_f(gen_a3));
  float param_1 = (float)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)param_4;
  fVar2 = (float10)param_3;
  if (fVar1 <= fVar2) {
    return (float10)param_1;
  }
  fVar3 = (float10)(float)(fVar1 * (float10)*(double *)&REFG(undefined, 0x109ca50));
  if (fVar2 < fVar3) {
    return (float10)((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)*(float *)(REFG(int, 0x137104c) + 0x1198) / fVar3))) *
                           (float10)(float)((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x10c6318)))));
  }
  fVar1 = ((float10)GEN_TOD(fsin(
                        (float10)((float)GEN_TOF((((float10)((float)GEN_TOF(((fVar2 - fVar3) / (fVar1 - fVar3)))) *
                                         (float10)*(double *)&REFG(undefined, 0x1080228)) * (float10)REFG(double, 0x1088108))))
                       )));
  param_3 = (float)fVar1;
  if ((float10)1 < (float10)param_3) {
    param_3 = REFG(float, 0x1087f04);
  }
  fVar1 = (float10)(float)((float10)param_2 * (float10)*(double *)&REFG(undefined, 0x10c6318));
  param_3 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((float10)(float)((float10)param_2 - fVar1) * (float10)param_3 +
                                    fVar1))) - ((float10)param_2 - (float10)param_1))));
  if ((float10)((float)GEN_TOF(ABS((float10)param_1))) < (float10)((float)GEN_TOF(ABS((float10)param_3)))) {
    param_3 = param_1;
  }
  return (float10)param_3;
}

/* ref: FUN_00ae8560 */
byte F_00ae8560(unsigned int gen_a0)
{
  GEN_ENTER(0xae8560u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  if ((*(char *)(in_ecx + 0x1cc) == '\0') && (*(char *)(in_ecx + 0x1cd) == '\0')) {
    return 0;
  }
  return 1;
}

/* ref: FUN_00ae8580 */
byte F_00ae8580(unsigned int gen_a0)
{
  GEN_ENTER(0xae8580u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (((*(int *)(in_ecx + 0x10) != 0) && (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 != 0)
      ) && (REFG(char, 0x14c0a65) != '\0')) {
    return 1;
  }
  return *(byte *)(in_ecx + 0x1cd);
}

/* ref: FUN_00ae85b0 */
byte F_00ae85b0(unsigned int gen_a0)
{
  GEN_ENTER(0xae85b0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if ((((*(int *)(in_ecx + 0x10) == 0) ||
       (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 == 0)) || (REFG(char, 0x14c0a64) == '\0')) &&
     (*(char *)(in_ecx + 0x1cc) == '\0')) {
    return 0;
  }
  if (*(int *)(in_ecx + 0x6c) == 7) {
    return 1;
  }
  return *(byte *)(in_ecx + 0x3d);
}

/* ref: FUN_00ae85f0 */
byte F_00ae85f0(unsigned int gen_a0)
{
  GEN_ENTER(0xae85f0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  char cVar2;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if ((bVar1 != 0) && (REFG(char, 0x14c0a64) != '\0')) goto LAB_00ae8615;
  }
  if (*(char *)(in_ecx + 0x1cc) == '\0') {
    return 0;
  }
LAB_00ae8615: ;
  cVar2 = '\x01';
  if (*(int *)(in_ecx + 0x6c) != 7) {
    cVar2 = *(char *)(in_ecx + 0x3d);
  }
  return cVar2 == '\0';
}

/* ref: FUN_00ae8630 */
byte F_00ae8630(unsigned int gen_a0)
{
  GEN_ENTER(0xae8630u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (((*(int *)(in_ecx + 0x10) != 0) && (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 != 0)
      ) && (REFG(char, 0x14c0a64) != '\0')) {
    return 0;
  }
  if (*(char *)(in_ecx + 0x1cc) == '\0') {
    if (((*(int *)(in_ecx + 0x10) != 0) &&
        (bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10)), bVar1 != 0)) && (REFG(char, 0x14c0a65) != '\0')) {
      return 1;
    }
    if (*(char *)(in_ecx + 0x1cd) != '\0') {
      return 1;
    }
  }
  return 0;
}

/* ref: FUN_00ae8680 */
byte F_00ae8680(unsigned int gen_a0)
{
  GEN_ENTER(0xae8680u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if ((bVar1 != 0) && (REFG(char, 0x14c0a64) != '\0')) goto LAB_00ae86a5;
  }
  if (*(char *)(in_ecx + 0x1cc) == '\0') {
    return 0;
  }
LAB_00ae86a5: ;
  return *(int *)(in_ecx + 0x6c) - 4U < 4;
}

/* ref: FUN_00ae86c0 */
byte F_00ae86c0(unsigned int gen_a0)
{
  GEN_ENTER(0xae86c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if ((bVar1 != 0) && (REFG(char, 0x14c0a64) != '\0')) goto LAB_00ae86e5;
  }
  if (*(char *)(in_ecx + 0x1cc) == '\0') {
    return 0;
  }
LAB_00ae86e5: ;
  return *(int *)(in_ecx + 0x6c) - 5U < 2;
}

/* ref: FUN_00ae8700 */
byte F_00ae8700(unsigned int gen_a0)
{
  GEN_ENTER(0xae8700u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if ((bVar1 != 0) && (REFG(char, 0x14c0a64) != '\0')) goto LAB_00ae8725;
  }
  if (*(char *)(in_ecx + 0x1cc) == '\0') {
    return 0;
  }
LAB_00ae8725: ;
  return *(int *)(in_ecx + 0x6c) == 7;
}

/* ref: FUN_00ae8740 */
byte F_00ae8740(unsigned int gen_a0)
{
  GEN_ENTER(0xae8740u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if ((bVar1 != 0) && (REFG(char, 0x14c0a64) != '\0')) goto LAB_00ae8765;
  }
  if (*(char *)(in_ecx + 0x1cc) == '\0') {
    return 0;
  }
LAB_00ae8765: ;
  return *(byte *)(in_ecx + 0x66);
}

/* ref: FUN_00ae8770 */
byte F_00ae8770(unsigned int gen_a0)
{
  GEN_ENTER(0xae8770u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  byte bVar1;
  
  if (*(int *)(in_ecx + 0x10) != 0) {
    bVar1 = F_00a9f620(*(int *)(in_ecx + 0x10));
    if ((bVar1 != 0) && (REFG(char, 0x14c0a65) != '\0')) goto LAB_00ae8795;
  }
  if (*(char *)(in_ecx + 0x1cd) == '\0') {
    return 0;
  }
LAB_00ae8795: ;
  return *(byte *)(in_ecx + 0x67);
}

/* ref: FUN_00ae87a0 */
byte F_00ae87a0(unsigned int gen_a0)
{
  GEN_ENTER(0xae87a0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x69);
}

