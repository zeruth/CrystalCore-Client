#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_005fd7e0 */
uint F_005fd7e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fd7e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_005fd870 */
uint F_005fd870(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fd870u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_005fd890 */
unsigned int F_005fd890(unsigned int gen_a0, float gen_a1, float gen_a2)
{
  GEN_ENTER(0x5fd890u, gen_a0, 0u, 0u, 0u);
  short * param_1 = (short *)(uintptr_t)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  *param_1 = (short)(int)param_2 >> ((byte)param_1[3] & 0x1f);
  param_1[1] = (short)(int)param_3 >> ((byte)param_1[3] & 0x1f);
  return 0;
}

/* ref: FUN_005fd8c0 */
unsigned int F_005fd8c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fd8c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  byte bVar2;
  
  fVar1 = param_1[2];
  bVar2 = (byte)*(undefined2 *)((int)this + 6);
  *(short *)this = (short)(int)*param_1 >> (bVar2 & 0x1f);
  *(short *)((int)this + 2) = (short)(int)fVar1 >> (bVar2 & 0x1f);
  return 0;
}

/* ref: FUN_005fd970 */
unsigned int F_005fd970(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5fd970u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  bool bVar1;
  
  bVar1 = GEN_ISNAN((float10)*(float *)(in_ecx + 0x24)) || GEN_ISNAN((float10)param_2);
  if (bVar1 == (bVar1 || (float10)*(float *)(in_ecx + 0x24) == (float10)param_2)) {
    *(float *)(in_ecx + 0x24) = param_2;
    *(undefined1 *)(in_ecx + 0x12) = 1;
  }
  return 0;
}

/* ref: FUN_005fd9a0 */
uint F_005fd9a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fd9a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined1 *)((int)this + 0x1c);
  return (int)this + 0x68;
}

/* ref: FUN_005fd9e0 */
uint F_005fd9e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5fd9e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_005fda50 */
byte F_005fda50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fda50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(byte *)((int)this + 0x56) = (byte)param_1;
  *(undefined4 *)((int)this + 0x58) = param_2;
  return (byte)param_1;
}

/* ref: FUN_005fdab0 */
uint F_005fdab0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdab0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_005fdaf0 */
uint F_005fdaf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdaf0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_005fdb10 */
uint F_005fdb10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdb10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00509330((undefined *)((int)this + 0x14c),param_1);
  return uVar1;
}

/* ref: FUN_005fdb20 */
byte F_005fdb20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdb20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = F_00507740((undefined *)((int)this + 0x14c),param_1);
  return bVar1;
}

/* ref: FUN_005fdb30 */
uint F_005fdb30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdb30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_00507260((undefined *)((int)this + 0x14c),param_1);
  return uVar1;
}

/* ref: FUN_005fdb50 */
unsigned int F_005fdb50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fdb50u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(int *)(in_ecx + 0x20) = *(int *)(in_ecx + 0x20) + 1;
  if ((char)param_2 != '\0') {
    *(int *)(in_ecx + 0x24) = *(int *)(in_ecx + 0x24) + 1;
  }
  if ((char)param_3 != '\0') {
    *(int *)(in_ecx + 0x28) = *(int *)(in_ecx + 0x28) + 1;
  }
  return 0;
}

/* ref: FUN_005fdb80 */
unsigned int F_005fdb80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fdb80u, gen_a0, gen_a1, gen_a2, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *(int *)(in_ecx + 0x20) = *(int *)(in_ecx + 0x20) + -1;
  if ((char)param_2 != '\0') {
    *(int *)(in_ecx + 0x24) = *(int *)(in_ecx + 0x24) + -1;
  }
  if ((char)param_3 != '\0') {
    *(int *)(in_ecx + 0x28) = *(int *)(in_ecx + 0x28) + -1;
  }
  return 0;
}

/* ref: FUN_005fdba0 */
unsigned int F_005fdba0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10)
{
  GEN_ENTER(0x5fdba0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  undefined4 param_5 = (undefined4)gen_a5;
  undefined4 param_6 = (undefined4)gen_a6;
  undefined4 param_7 = (undefined4)gen_a7;
  undefined4 param_8 = (undefined4)gen_a8;
  undefined4 param_9 = (undefined4)gen_a9;
  undefined4 param_10 = (undefined4)gen_a10;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined1 *)((int)this + 8) = (undefined1)param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0x14) = param_6;
  *(undefined4 *)((int)this + 0x18) = param_7;
  *(undefined1 *)((int)this + 0x1c) = (undefined1)param_8;
  *(undefined1 *)((int)this + 0x1d) = (undefined1)param_9;
  *(undefined4 *)((int)this + 0x20) = param_10;
  return 0;
}

/* ref: FUN_005fdc10 */
uint F_005fdc10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdc10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x1c) = param_2;
  return param_2;
}

/* ref: FUN_005fdc20 */
byte F_005fdc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdc20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0x20) ^ (byte)param_2) & 1;
  *(byte *)(in_ecx + 0x20) = *(byte *)(in_ecx + 0x20) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005fdcb0 */
byte F_005fdcb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdcb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0x28) ^ (byte)param_2) & 0xf;
  *(byte *)(in_ecx + 0x28) = *(byte *)(in_ecx + 0x28) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005fdd10 */
byte F_005fdd10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdd10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0x20)) & 2;
  *(byte *)(in_ecx + 0x20) = *(byte *)(in_ecx + 0x20) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005fdd40 */
byte F_005fdd40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdd40u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x04' ^ *(byte *)(in_ecx + 0x20)) & 4;
  *(byte *)(in_ecx + 0x20) = *(byte *)(in_ecx + 0x20) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005fdd70 */
uint F_005fdd70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdd70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(uint *)(in_ecx + 0x24) ^ param_2) & 3;
  *(uint *)(in_ecx + 0x24) = *(uint *)(in_ecx + 0x24) ^ uVar1;
  return uVar1;
}

/* ref: FUN_005fdd90 */
byte F_005fdd90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdd90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0x2b) ^ (byte)param_2) & 1;
  *(byte *)(in_ecx + 0x2b) = *(byte *)(in_ecx + 0x2b) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005fddc0 */
byte F_005fddc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fddc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0x2b)) & 2;
  *(byte *)(in_ecx + 0x2b) = *(byte *)(in_ecx + 0x2b) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005fddf0 */
byte F_005fddf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fddf0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x04' ^ *(byte *)(in_ecx + 0x2b)) & 4;
  *(byte *)(in_ecx + 0x2b) = *(byte *)(in_ecx + 0x2b) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005fde10 */
unsigned int F_005fde10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fde10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)REFG(double, 0x1088108);
  *param_1 = ((float)GEN_TOF((((float10)*(float *)this + (float10)*(float *)((int)this + 0xc)) * fVar1)));
  param_1[1] = ((float)GEN_TOF((((float10)*(float *)((int)this + 4) + (float10)*(float *)((int)this + 0x10))
                      * fVar1)));
  param_1[2] = ((float)GEN_TOF((((float10)*(float *)((int)this + 8) + (float10)*(float *)((int)this + 0x14))
                      * fVar1)));
  *param_2 = ((float)GEN_TOF(((float10)*(float *)((int)this + 0xc) - (float10)*param_1)));
  param_2[1] = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x10) - (float10)param_1[1])));
  param_2[2] = ((float)GEN_TOF(((float10)*(float *)((int)this + 0x14) - (float10)param_1[2])));
  return 0;
}

/* ref: FUN_005fde70 */
uint F_005fde70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fde70u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x40) = param_2;
  return param_2;
}

/* ref: FUN_005fde90 */
unsigned int F_005fde90(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x5fde90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  float param_3 = (float)gen_a2;
  float param_4 = (float)gen_a3;
  float param_5 = (float)gen_a4;
  *(float *)(in_ecx + 0x58) = param_2;
  *(float *)(in_ecx + 0x5c) = param_3;
  *(float *)(in_ecx + 0x60) = param_4;
  *(float *)(in_ecx + 100) = param_5;
  return 0;
}

/* ref: FUN_005fdef0 */
uint F_005fdef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdef0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: FUN_005fdf10 */
uint F_005fdf10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdf10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 4) = param_2;
  return param_2;
}

/* ref: FUN_005fdf50 */
unsigned int F_005fdf50(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5fdf50u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x14) = param_2;
  return 0;
}

/* ref: FUN_005fdf80 */
uint F_005fdf80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fdf80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0xa4) = param_2;
  return param_2;
}

/* ref: FUN_005fdfd0 */
uint F_005fdfd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fdfd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  int param_2 = (int)gen_a2;
  uint uVar1;
  
  uVar1 = param_1 & 0x3fffffff | param_2 << 0x1e;
  *(uint *)this = uVar1;
  return uVar1;
}

/* ref: FUN_005fdff0 */
uint F_005fdff0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x5fdff0u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0xc) = param_2;
  return in_ecx;
}

/* ref: FUN_005fe0a0 */
uint F_005fe0a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe0a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(uint *)(in_ecx + 8) = (uint)(ushort)param_2;
  return (uint)(ushort)param_2;
}

/* ref: FUN_005fe0b0 */
ushort F_005fe0b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe0b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x10) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_005fe0d0 */
byte F_005fe0d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe0d0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0x16)) & 2;
  *(byte *)(in_ecx + 0x16) = *(byte *)(in_ecx + 0x16) ^ bVar1;
  return bVar1;
}

/* ref: FUN_005fe0f0 */
uint F_005fe0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe0f0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x34) = param_2;
  return param_2;
}

/* ref: FUN_005fe130 */
uint F_005fe130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  uint uVar1;
  
  *(undefined4 *)((int)this + 0x38) = *param_1;
  *(undefined4 *)((int)this + 0x3c) = param_1[1];
  *(undefined4 *)((int)this + 0x40) = param_1[2];
  uVar1 = param_1[3];
  *(uint *)((int)this + 0x44) = uVar1;
  return uVar1;
}

/* ref: FUN_005fe170 */
uint F_005fe170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe170u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (*(uint *)(in_ecx + 0x74) ^ param_2) & 0xf;
  *(uint *)(in_ecx + 0x74) = *(uint *)(in_ecx + 0x74) ^ uVar1;
  return uVar1;
}

/* ref: FUN_005fe1a0 */
uint F_005fe1a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe1a0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x60) = param_2;
  return param_2;
}

/* ref: FUN_005fe1b0 */
uint F_005fe1b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe1b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 0x40) = param_2;
  return param_2;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf60 */
float F_005fe1c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe1c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  float fVar1;
  
  fVar1 = F_00a1e160(this + 0x3c,param_1);
  return fVar1;
}

/* ref: FUN_005fe260 */
unsigned int F_005fe260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe260u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return 0;
}

/* ref: FUN_005fe280 */
unsigned int F_005fe280(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5fe280u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_1 = (float)(fVar1 + (float10)*param_2);
  param_1[1] = (float)((float10)param_2[1] + fVar1);
  param_1[2] = (float)(fVar1 + (float10)param_2[2]);
  return 0;
}

/* ref: FUN_005fe2b0 */
unsigned int F_005fe2b0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5fe2b0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_1 = (float)((float10)*param_2 - fVar1);
  param_1[1] = (float)((float10)param_2[1] - fVar1);
  param_1[2] = (float)((float10)param_2[2] - fVar1);
  return 0;
}

/* ref: FUN_005fe2e0 */
unsigned int F_005fe2e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe2e0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  float10 fVar1;
  
  fVar1 = (float10)*(float *)param_2;
  fVar1 = (float10)((float)GEN_TOF(((float10)*(float *)(param_2 + 8) * (float10)*(float *)(param_2 + 8) +
                          (fVar1 * fVar1 +
                          (float10)*(float *)(param_2 + 4) * (float10)*(float *)(param_2 + 4)))));
  if (fVar1 <= (float10)REFG(float, 0x10905c4)) {
    *param_1 = 0.0;
    param_1[1] = 0.0;
    param_1[2] = 0.0;
    return 0;
  }
  fVar1 = (float10)(float)((float10)1 / (float10)((float)GEN_TOF(SQRT(fVar1))));
  *param_1 = (float)(fVar1 * (float10)*(float *)param_2);
  param_1[1] = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 4))));
  param_1[2] = ((float)GEN_TOF((fVar1 * (float10)*(float *)(param_2 + 8))));
  return 0;
}

/* ref: FUN_005fe370 */
unsigned int F_005fe370(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fe370u, gen_a0, gen_a1, gen_a2, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float * param_3 = (float *)(uintptr_t)gen_a2;
  *param_1 = (float)((float10)*param_2 - (float10)*param_3);
  param_1[1] = (float)((float10)param_2[1] - (float10)param_3[1]);
  param_1[2] = (float)((float10)param_2[2] - (float10)param_3[2]);
  return 0;
}

/* ref: FUN_005fe3a0 */
unsigned int F_005fe3a0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5fe3a0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float10 fVar1;
  
  fVar1 = (float10)param_3;
  *param_1 = (float)(fVar1 * (float10)*param_2);
  param_1[1] = (float)((float10)param_2[1] * fVar1);
  param_1[2] = (float)(fVar1 * (float10)param_2[2]);
  return 0;
}

/* ref: FUN_005fe3d0 */
uint F_005fe3d0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5fe3d0u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar3 = (float10)param_3;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *param_1 = (float)(fVar3 + (float10)*param_2);
  param_1[1] = (float)((float10)fVar1 + fVar3);
  param_1[2] = (float)(fVar3 + (float10)fVar2);
  return (uint)param_1;
}

/* ref: FUN_005fe430 */
uint F_005fe430(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5fe430u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  float fVar1;
  float fVar2;
  float10 fVar3;
  
  fVar3 = (float10)param_3;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  *param_1 = (float)((float10)*param_2 - fVar3);
  param_1[1] = (float)((float10)fVar1 - fVar3);
  param_1[2] = (float)((float10)fVar2 - fVar3);
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf5 */
uint F_005fe490(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe490u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(uint *)(in_ecx + 8) = param_2;
  return param_2;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf8 */
uint F_005fe4a0(void)
{
  GEN_ENTER(0x5fe4a0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf10 */
byte F_005fe4b0(void)
{
  GEN_ENTER(0x5fe4b0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf11 */
byte F_005fe4c0(void)
{
  GEN_ENTER(0x5fe4c0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf12 */
byte F_005fe4d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5fe4d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf21 */
uint F_005fe4e0(unsigned int gen_a0)
{
  GEN_ENTER(0x5fe4e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)(*(int *)this + 0x60))(this);
  return (uint)(uVar1 != 0);
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf29 */
byte F_005fe4f0(void)
{
  GEN_ENTER(0x5fe4f0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf30 */
uint F_005fe500(void)
{
  GEN_ENTER(0x5fe500u, 0u, 0u, 0u, 0u);
  return 0x107fc63;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf37 */
byte F_005fe510(unsigned int gen_a0)
{
  GEN_ENTER(0x5fe510u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x2b) >> 5 & 1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf38 */
unsigned int F_005fe520(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5fe520u, gen_a0, gen_a1, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  byte bVar1;
  
  bVar1 = *(byte *)((int)param_1 + 0x2b);
  if ((bVar1 & 2) != 0) {
    *(byte *)((int)param_1 + 0x2b) =
         (((!GEN_ISNAN(param_3) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) &&
          (!(param_3 < *(float *)&REFG(undefined, 0x1088114)) && param_3 != *(float *)&REFG(undefined, 0x1088114))) << 5 ^ bVar1
         ) & 0x20 ^ bVar1;
    ((code *)*(gen_code32 *)(*param_1 + 0xd8))((undefined4)gen_fl2bits(param_3));
  }
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf39 */
unsigned int F_005fe560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fe560u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf40 */
unsigned int F_005fe570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf41 */
unsigned int F_005fe580(void)
{
  GEN_ENTER(0x5fe580u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf42 */
unsigned int F_005fe590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf43 */
unsigned int F_005fe5a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe5a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = REFG(undefined4, 0x1302e54);
  param_1[1] = REFG(undefined4, 0x1302e58);
  param_1[2] = REFG(undefined4, 0x1302e5c);
  param_1[3] = REFG(undefined4, 0x1302e60);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf44 */
unsigned int F_005fe5d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe5d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf45 */
unsigned int F_005fe5e0(void)
{
  GEN_ENTER(0x5fe5e0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf46 */
unsigned int F_005fe5f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe5f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf51 */
byte F_005fe600(unsigned int gen_a0)
{
  GEN_ENTER(0x5fe600u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x2b) >> 4 & 1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf52 */
byte F_005fe610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe610u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 << 4 ^ *(byte *)(in_ecx + 0x2b)) & 0x10;
  *(byte *)(in_ecx + 0x2b) = *(byte *)(in_ecx + 0x2b) ^ bVar1;
  return bVar1;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf53 */
unsigned int F_005fe630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::LayoutEngine::ILayoutInstance::vf55 */
byte F_005fe640(unsigned int gen_a0)
{
  GEN_ENTER(0x5fe640u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 0x2b) >> 3 & 1;
}

/* ref: FUN_005fe650 */
uint F_005fe650(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x5fe650u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm7 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = (float10)REFG(double, 0x1088108);
  *in_ecx = 0;
  fVar1 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)(float)((float10)param_6 * fVar2));
  in_ecx[1] = (undefined4)gen_fl2bits((float)fVar1);
  in_ecx[2] = 0;
  fVar2 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)(float)((float10)param_6 * fVar2));
  in_ecx[3] = (undefined4)gen_fl2bits((float)fVar2);
  return (uint)in_ecx;
}

/* ref: FUN_005fe6a0 */
uint F_005fe6a0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4, float gen_a5)
{
  GEN_ENTER(0x5fe6a0u, gen_a0, 0u, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm7 = (float)gen_a4;
  float param_6 = (float)gen_a5;
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = (float10)REFG(double, 0x1088108);
  *in_ecx = 0;
  in_ecx[1] = 0;
  fVar1 = F_00c4cde0(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)(float)((float10)param_6 * fVar2));
  in_ecx[2] = (undefined4)gen_fl2bits((float)fVar1);
  fVar2 = F_00c4ca20(in_xmm1,in_xmm2,in_xmm3,in_xmm7,(float10)(float)((float10)param_6 * fVar2));
  in_ecx[3] = (undefined4)gen_fl2bits((float)fVar2);
  return (uint)in_ecx;
}

/* ref: FUN_005fe6f0 */
uint F_005fe6f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fe6f0u, gen_a0, gen_a1, gen_a2, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint param_3 = (uint)gen_a2;
  F_004f6d80(param_1,param_2,param_3);
  return param_1;
}

/* ref: FUN_005fe710 */
unsigned int F_005fe710(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe710u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 uVar1;
  
  uVar1 = REFG(float, 0x1087f04);
  *in_ecx = GEN_FLT_TO(*in_ecx, REFG(float, 0x1087f04));
  in_ecx[1] = 0;
  in_ecx[2] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = uVar1;
  in_ecx[6] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[10] = uVar1;
  in_ecx[0xc] = *param_2;
  in_ecx[0xd] = param_2[1];
  in_ecx[0xe] = param_2[2];
  return 0;
}

/* ref: FUN_005fe770 */
uint F_005fe770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe770u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *(float *)param_2 =
       ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)param_1[2] * (float10)param_1[2] +
                                   ((float10)*param_1 * (float10)*param_1 +
                                   (float10)param_1[1] * (float10)param_1[1])))))));
  *(float *)(param_2 + 4) =
       ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)param_1[6] * (float10)param_1[6] +
                                   ((float10)param_1[4] * (float10)param_1[4] +
                                   (float10)param_1[5] * (float10)param_1[5])))))));
  *(float *)(param_2 + 8) =
       ((float)GEN_TOF(SQRT((float10)((float)GEN_TOF(((float10)param_1[10] * (float10)param_1[10] +
                                   ((float10)param_1[8] * (float10)param_1[8] +
                                   (float10)param_1[9] * (float10)param_1[9])))))));
  return param_2;
}

/* ref: FUN_005fe810 */
uint F_005fe810(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe810u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  F_005fe2e0(param_1,param_2);
  F_005fe2e0(param_1 + 0x10,param_2 + 0x10);
  F_005fe2e0(param_1 + 0x20,param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  return param_1;
}

/* ref: FUN_005fe860 */
uint F_005fe860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe860u, gen_a0, gen_a1, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  uint param_2 = (uint)gen_a1;
  F_005fe2e0(param_1,param_2);
  F_005fe2e0(param_1 + 0x10,param_2 + 0x10);
  F_005fe2e0(param_1 + 0x20,param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_2 + 0x38);
  return param_1;
}

/* ref: FUN_005fe8b0 */
uint F_005fe8b0(unsigned int gen_a0)
{
  GEN_ENTER(0x5fe8b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0046f390(this);
  F_0046f390((undefined *)((int)this + 0x10));
  F_0046f390((undefined *)((int)this + 0x20));
  return (uint)this;
}

/* ref: FUN_005fe8d0 */
uint F_005fe8d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe8d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0x80];
  float fVar1;
  undefined4 * puVar2;
  float10 fVar3;
  float10 fVar4;
  
  (*(uint *)(gen_frame + 0x6c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x70);
  *(float *)this = param_1[0xc];
  *(float *)((int)this + 4) = param_1[0xd];
  *(float *)((int)this + 8) = param_1[0xe];
  puVar2 = (undefined4 *)F_005fe770(param_1,(uint)((undefined1 *)(gen_frame + 0x0)));
  *(undefined4 *)((int)this + 0x20) = *puVar2;
  *(undefined4 *)((int)this + 0x24) = puVar2[1];
  *(undefined4 *)((int)this + 0x28) = puVar2[2];
  fVar4 = (float10)1;
  fVar1 = ((float)GEN_TOF((fVar4 / (float10)*(float *)((int)this + 0x20))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  fVar3 = (float10)fVar1;
  (*(float *)(gen_frame + 0x20)) = (float)(fVar3 * (float10)*param_1);
  (*(float *)(gen_frame + 0x24)) = (float)((float10)param_1[1] * fVar3);
  (*(float *)(gen_frame + 0x28)) = (float)(fVar3 * (float10)param_1[2]);
  fVar1 = ((float)GEN_TOF((fVar4 / (float10)*(float *)((int)this + 0x24))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  fVar3 = (float10)fVar1;
  (*(float *)(gen_frame + 0x30)) = (float)(fVar3 * (float10)param_1[4]);
  (*(float *)(gen_frame + 0x34)) = (float)((float10)param_1[5] * fVar3);
  (*(float *)(gen_frame + 0x38)) = (float)(fVar3 * (float10)param_1[6]);
  fVar1 = ((float)GEN_TOF((fVar4 / (float10)*(float *)((int)this + 0x28))));
  (*(float *)(gen_frame + 0x1c)) = fVar1;
  fVar4 = (float10)fVar1;
  (*(float *)(gen_frame + 0x40)) = (float)(fVar4 * (float10)param_1[8]);
  (*(float *)(gen_frame + 0x44)) = (float)((float10)param_1[9] * fVar4);
  (*(float *)(gen_frame + 0x48)) = (float)(fVar4 * (float10)param_1[10]);
  F_004eeed0((int)this + 0x10,(uint)&(*(float *)(gen_frame + 0x20)));
  F_00c47745((*(uint *)(gen_frame + 0x6c)) ^ (uint)(uint)(gen_frame + 0x70));
  return (uint)this;
}

/* ref: FUN_005fe9c0 */
uint F_005fe9c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe9c0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_005fe9e0 */
uint F_005fe9e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fe9e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x20) = *param_2;
  *(undefined4 *)(in_ecx + 0x24) = param_2[1];
  *(undefined4 *)(in_ecx + 0x28) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_005fea00 */
unsigned int F_005fea00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fea00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[4] = *param_3;
  in_ecx[5] = param_3[1];
  in_ecx[6] = param_3[2];
  return 0;
}

/* ref: FUN_005fea30 */
unsigned int F_005fea30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fea30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[4] = *param_3;
  in_ecx[5] = param_3[1];
  in_ecx[6] = param_3[2];
  return 0;
}

/* ref: FUN_005fea60 */
uint F_005fea60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fea60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_005fea80 */
uint F_005fea80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fea80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x10) = *param_2;
  *(undefined4 *)(in_ecx + 0x14) = param_2[1];
  *(undefined4 *)(in_ecx + 0x18) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_005feaa0 */
unsigned int F_005feaa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5feaa0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  
  fVar1 = in_ecx[5];
  fVar2 = in_ecx[1];
  fVar3 = in_ecx[6];
  fVar4 = in_ecx[2];
  fVar5 = (float10)REFG(double, 0x1088108);
  *param_2 = ((float)GEN_TOF(((float10)(float)((float10)in_ecx[4] + (float10)*in_ecx) * fVar5)));
  param_2[1] = ((float)GEN_TOF(((float10)(float)((float10)fVar1 + (float10)fVar2) * fVar5)));
  param_2[2] = ((float)GEN_TOF((fVar5 * (float10)(float)((float10)fVar3 + (float10)fVar4))));
  return 0;
}

/* ref: FUN_005feb80 */
uint F_005feb80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5feb80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float * pfVar1;
  
  pfVar1 = (float *)F_005fe770(param_1,(uint)((undefined1 *)(gen_frame + 0x0)));
  *(float *)((int)this + 0x40) = (float)((float10)*pfVar1 * (float10)*param_2);
  *(float *)((int)this + 0x44) = (float)((float10)pfVar1[1] * (float10)param_2[1]);
  *(float *)((int)this + 0x48) = (float)((float10)pfVar1[2] * (float10)param_2[2]);
  F_005fe2e0(this,param_1);
  F_005fe2e0((int)this + 0x10,param_1 + 0x10);
  F_005fe2e0((int)this + 0x20,param_1 + 0x20);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return (uint)this;
}

/* ref: FUN_005fec10 */
uint F_005fec10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fec10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x30];
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float * pfVar8;
  float10 fVar9;
  
  uVar7 = REFG(float, 0x1087f04);
  fVar1 = *param_2;
  fVar2 = param_2[4];
  (*(float *)(gen_frame + 0x10)) = (float)((float10)fVar1 + (float10)fVar2);
  fVar3 = param_2[5];
  fVar4 = param_2[1];
  (*(float *)(gen_frame + 0x14)) = (float)((float10)fVar3 + (float10)fVar4);
  fVar5 = param_2[2];
  fVar6 = param_2[6];
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  (*(float *)(gen_frame + 0x18)) = (float)((float10)fVar5 + (float10)fVar6);
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  fVar9 = (float10)REFG(double, 0x1088108);
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)this = uVar7;
  *(undefined4 *)((int)this + 0x14) = uVar7;
  *(undefined4 *)((int)this + 0x28) = uVar7;
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)fVar1 + (float10)fVar2) * fVar9)));
  (*(float *)(gen_frame + 0x0)) = fVar1;
  *(float *)((int)this + 0x30) = fVar1;
  fVar1 = ((float)GEN_TOF(((float10)(float)((float10)fVar3 + (float10)fVar4) * fVar9)));
  (*(float *)(gen_frame + 0x4)) = fVar1;
  *(float *)((int)this + 0x34) = fVar1;
  fVar1 = ((float)GEN_TOF((fVar9 * (float10)(float)((float10)fVar5 + (float10)fVar6))));
  (*(float *)(gen_frame + 0x8)) = fVar1;
  *(float *)((int)this + 0x38) = fVar1;
  F_004ef9d0(this,param_1);
  (*(float *)(gen_frame + 0x0)) = (float)((float10)param_2[4] - (float10)*param_2);
  (*(float *)(gen_frame + 0x4)) = (float)((float10)param_2[5] - (float10)param_2[1]);
  (*(float *)(gen_frame + 0x8)) = (float)((float10)param_2[6] - (float10)param_2[2]);
  fVar9 = (float10)REFG(double, 0x1088108);
  (*(float *)(gen_frame + 0x10)) = ((float)GEN_TOF(((float10)(float)((float10)param_2[4] - (float10)*param_2) * fVar9)));
  (*(float *)(gen_frame + 0x14)) = ((float)GEN_TOF(((float10)(float)((float10)param_2[5] - (float10)param_2[1]) * fVar9)));
  (*(float *)(gen_frame + 0x18)) = ((float)GEN_TOF((fVar9 * (float10)(float)((float10)param_2[6] - (float10)param_2[2]))));
  pfVar8 = (float *)F_005fe770(this,(uint)&(*(float *)(gen_frame + 0x0)));
  *(float *)((int)this + 0x40) = (float)((float10)(*(float *)(gen_frame + 0x10)) * (float10)*pfVar8);
  *(float *)((int)this + 0x44) = (float)((float10)pfVar8[1] * (float10)(*(float *)(gen_frame + 0x14)));
  *(float *)((int)this + 0x48) = (float)((float10)pfVar8[2] * (float10)(*(float *)(gen_frame + 0x18)));
  F_0046f390(this);
  F_0046f390((undefined *)((int)this + 0x10));
  F_0046f390((undefined *)((int)this + 0x20));
  return (uint)this;
}

/* ref: FUN_005fed50 */
undefined * F_005fed50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x5fed50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  float * param_2 = (float *)(uintptr_t)gen_a2;
  __declspec(align(16)) undefined1 gen_frame[0x20];
  float * pfVar1;
  
  pfVar1 = (float *)F_005fe770(param_1,(uint)((undefined1 *)(gen_frame + 0x0)));
  *(float *)((int)this + 0x40) = (float)((float10)*pfVar1 * (float10)*param_2);
  *(float *)((int)this + 0x44) = (float)((float10)pfVar1[1] * (float10)param_2[1]);
  *(float *)((int)this + 0x48) = (float)((float10)pfVar1[2] * (float10)param_2[2]);
  F_005fe2e0(this,param_1);
  F_005fe2e0((int)this + 0x10,param_1 + 0x10);
  F_005fe2e0((int)this + 0x20,param_1 + 0x20);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  return this;
}

/* ref: FUN_005fef20 */
uint F_005fef20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fef20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x30) = *param_2;
  *(undefined4 *)(in_ecx + 0x34) = param_2[1];
  *(undefined4 *)(in_ecx + 0x38) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_005ff040 */
unsigned int F_005ff040(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x5ff040u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  float param_3 = (float)gen_a2;
  undefined4 uVar1;
  
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  uVar1 = param_2[2];
  in_ecx[3] = (undefined4)gen_fl2bits(param_3);
  in_ecx[2] = uVar1;
  return 0;
}

/* ref: FUN_005ff0f0 */
undefined * F_005ff0f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ff0f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  
  fVar1 = (float)((float10)*param_1 - (float10)*(float *)this);
  fVar2 = ((float)GEN_TOF(((float10)param_1[1] - (float10)*(float *)((int)this + 4))));
  fVar3 = ((float)GEN_TOF(((float10)param_1[2] - (float10)*(float *)((int)this + 8))));
  fVar6 = (float10)fVar2;
  fVar7 = (float10)fVar1;
  fVar8 = (float10)fVar3;
  fVar9 = (float10)param_1[3];
  fVar10 = (float10)((float)GEN_TOF((fVar9 - (float10)*(float *)((int)this + 0xc))));
  fVar6 = (float10)((float)GEN_TOF((fVar8 * fVar8 + (fVar7 * fVar7 + fVar6 * fVar6))));
  if (fVar6 <= fVar10 * fVar10) {
    if ((float10)*(float *)((int)this + 0xc) < fVar9) {
      *(float *)this = *param_1;
      *(float *)((int)this + 4) = param_1[1];
      *(float *)((int)this + 8) = param_1[2];
      *(float *)((int)this + 0xc) = param_1[3];
      return this;
    }
  }
  else {
    fVar4 = *(float *)((int)this + 0xc);
    fVar6 = (float10)((float)GEN_TOF(SQRT(fVar6)));
    fVar5 = ((float)GEN_TOF((((float10)param_1[3] + (fVar6 + (float10)fVar4)) * (float10)REFG(double, 0x1088108))));
    *(float *)((int)this + 0xc) = fVar5;
    if ((float10)REFG(float, 0x10905c4) < fVar6) {
      fVar6 = (float10)((float)GEN_TOF((((float10)fVar5 - (float10)fVar4) / fVar6)));
      *(float *)this = ((float)GEN_TOF(((float10)*(float *)this + (float10)(float)(fVar6 * (float10)fVar1))));
      *(float *)((int)this + 4) =
           ((float)GEN_TOF(((float10)*(float *)((int)this + 4) + (float10)(float)((float10)fVar2 * fVar6))));
      *(float *)((int)this + 8) =
           ((float)GEN_TOF(((float10)*(float *)((int)this + 8) + (float10)(float)(fVar6 * (float10)fVar3))));
      return this;
    }
  }
  return this;
}

/* ref: FUN_005ff260 */
unsigned int F_005ff260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, float gen_a3)
{
  GEN_ENTER(0x5ff260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  float param_4 = (float)gen_a3;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = (undefined4)gen_fl2bits(param_4);
  in_ecx[4] = *param_3;
  in_ecx[5] = param_3[1];
  in_ecx[6] = param_3[2];
  return 0;
}

/* ref: FUN_005ff410 */
uint F_005ff410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ff410u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  __declspec(align(16)) undefined1 gen_frame[0xa0];
  float fVar1;
  float fVar2;
  uint uVar3;
  uint3 uVar4;
  uint uVar5;
  float * pfVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  (*(uint *)(gen_frame + 0x8c)) = REFG(undefined4, 0x134ab78) ^ (uint)(uint)(gen_frame + 0x90);
  F_004f45d0(((undefined1 *)(gen_frame + 0x40)),param_1);
  F_004ee970(((float *)(gen_frame + 0x10)),this,((undefined1 *)(gen_frame + 0x40)));
  uVar3 = F_004ee9d0(((float *)(gen_frame + 0x0)),(int)this + 0x10,((undefined1 *)(gen_frame + 0x40)));
  (*(float *)(gen_frame + 0x30)) = 0.0;
  fVar7 = (float10)0.0;
  (*(float *)(gen_frame + 0x34)) = REFG(float, 0x1090998);
  fVar8 = (float10)REFG(float, 0x1090998);
  pfVar6 = (float *)(param_1 + 0x40);
  uVar5 = 0;
  do {
    (*(float *)(gen_frame + 0x3c)) = *(float *)((int)((float *)(gen_frame + 0x0)) + uVar5);
    fVar9 = (float10)*(float *)((int)((float *)(gen_frame + 0x0)) + uVar5);
    fVar1 = ((float)GEN_TOF(ABS(fVar9)));
    (*(float *)(gen_frame + 0x3c)) = fVar1;
    uVar4 = (uint3)(uVar3 >> 8);
    if ((float10)fVar1 <= (float10)REFG(float, 0x10905c4)) {
      (*(float *)(gen_frame + 0x3c)) = *(float *)((int)((float *)(gen_frame + 0x10)) + uVar5);
      (*(float *)(gen_frame + 0x38)) = *pfVar6;
      fVar9 = (float10)*(float *)((int)((float *)(gen_frame + 0x10)) + uVar5);
      fVar10 = (float10)*pfVar6;
      fVar11 = -fVar10;
      if (((!GEN_ISNAN(fVar11) && !GEN_ISNAN(fVar9)) && !(fVar11 <= fVar9)) || (fVar10 < fVar9)) {
        uVar3 = (uint)uVar4 << 8;
        goto LAB_005ff585;
      }
    }
    else {
      fVar1 = (float)((float10)1 / fVar9);
      (*(float *)(gen_frame + 0x2c)) = fVar1;
      (*(float *)(gen_frame + 0x38)) = *pfVar6;
      (*(float *)(gen_frame + 0x3c)) = *(float *)((int)((float *)(gen_frame + 0x10)) + uVar5);
      fVar9 = (float10)*pfVar6;
      fVar10 = (float10)*(float *)((int)((float *)(gen_frame + 0x10)) + uVar5);
      fVar11 = (float10)fVar1;
      fVar1 = ((float)GEN_TOF((fVar11 * (-fVar9 - fVar10))));
      (*(float *)(gen_frame + 0x38)) = fVar1;
      fVar2 = ((float)GEN_TOF((fVar11 * (fVar9 - fVar10))));
      (*(float *)(gen_frame + 0x3c)) = fVar2;
      if ((float10)fVar2 < (float10)fVar1) {
        (*(float *)(gen_frame + 0x3c)) = fVar1;
        (*(float *)(gen_frame + 0x38)) = fVar2;
      }
      if (fVar7 < (float10)(*(float *)(gen_frame + 0x38))) {
        (*(float *)(gen_frame + 0x30)) = (*(float *)(gen_frame + 0x38));
        fVar7 = (float10)(*(float *)(gen_frame + 0x38));
      }
      if ((float10)(*(float *)(gen_frame + 0x3c)) < fVar8) {
        (*(float *)(gen_frame + 0x34)) = (*(float *)(gen_frame + 0x3c));
        fVar8 = (float10)(*(float *)(gen_frame + 0x3c));
      }
      if ((!GEN_ISNAN(fVar7) && !GEN_ISNAN(fVar8)) && !(fVar7 <= fVar8)) {
        uVar3 = (uint)uVar4 << 8;
        goto LAB_005ff585;
      }
    }
    uVar5 = uVar5 + 4;
    pfVar6 = pfVar6 + 1;
    if (0xb < uVar5) {
      uVar3 = CONCAT31(uVar4,1);
LAB_005ff585: ;
      F_00c47745((*(uint *)(gen_frame + 0x8c)) ^ (uint)(uint)(gen_frame + 0x90));
      return uVar3;
    }
  } while( true );
}

/* ref: FUN_005ff5c0 */
uint F_005ff5c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ff5c0u, gen_a0, gen_a1, 0u, 0u);
  float * in_ecx = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  
  fVar2 = (float10)(float)((float10)in_ecx[1] - (float10)param_2[1]);
  fVar3 = (float10)(float)((float10)*in_ecx - (float10)*param_2);
  fVar4 = (float10)(float)((float10)in_ecx[2] - (float10)param_2[2]);
  fVar1 = ((float)GEN_TOF(((fVar2 * (float10)in_ecx[5] + fVar3 * (float10)in_ecx[4]) +
                 fVar4 * (float10)in_ecx[6])));
  fVar2 = (float10)((float)GEN_TOF(((float10)((float)GEN_TOF((fVar4 * fVar4 + (fVar3 * fVar3 + fVar2 * fVar2)))) -
                          (float10)param_2[3] * (float10)param_2[3])));
  if (((float10)0 < fVar2) &&
     ((!GEN_ISNAN(fVar1) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar1 <= *(float *)&REFG(undefined, 0x1088114)))) {
    return (uint)param_2 & 0xffffff00;
  }
  if ((float10)0 <= (float10)fVar1 * (float10)fVar1 - fVar2) {
    return 1;
  }
  return 0;
}

/* ref: FUN_005ff690 */
byte F_005ff690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ff690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  float * param_1 = (float *)(uintptr_t)gen_a1;
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
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  
  fVar9 = (float10)*(double *)&REFG(undefined, 0x10a2b98);
  fVar10 = (float10)*(float *)this;
  fVar11 = (float10)*(float *)((int)this + 4);
  fVar12 = (float10)*(float *)((int)this + 8);
  fVar1 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar10 + (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x10) *
                                                            fVar9)))))) - fVar10)));
  fVar2 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar11 + (float10)((float)GEN_TOF(((float10)*(float *)((int)this + 0x14) *
                                                            fVar9)))))) - fVar11)));
  fVar3 = ((float)GEN_TOF(((float10)((float)GEN_TOF((fVar12 + (float10)((float)GEN_TOF((fVar9 * (float10)*(float *)((int)this +
                                                                                        0x18))))))) -
                 fVar12)));
  fVar4 = (float)((float10)param_1[6] - (float10)param_1[2]);
  fVar9 = (float10)(float)(fVar11 - (float10)param_1[1]);
  fVar11 = (float10)(float)((float10)param_1[5] - (float10)param_1[1]);
  fVar10 = (float10)(float)(fVar10 - (float10)*param_1);
  fVar13 = (float10)(float)((float10)param_1[4] - (float10)*param_1);
  fVar12 = (float10)(float)(fVar12 - (float10)param_1[2]);
  fVar5 = ((float)GEN_TOF((fVar12 * (float10)fVar4 + (fVar11 * fVar9 + fVar13 * fVar10))));
  fVar6 = ((float)GEN_TOF(((float10)fVar4 * (float10)fVar3 +
                 (fVar13 * (float10)fVar1 + fVar11 * (float10)fVar2))));
  fVar4 = ((float)GEN_TOF(((fVar13 * fVar13 + fVar11 * fVar11) + (float10)fVar4 * (float10)fVar4)));
  fVar11 = (float10)fVar2;
  fVar2 = ((float)GEN_TOF(((float10)fVar3 * (float10)fVar3 +
                 ((float10)fVar1 * (float10)fVar1 + fVar11 * fVar11))));
  fVar1 = ((float)GEN_TOF((fVar12 * (float10)fVar3 + (fVar10 * (float10)fVar1 + fVar11 * fVar9))));
  fVar11 = (float10)fVar6;
  fVar13 = (float10)fVar4;
  fVar3 = (float)(fVar13 * (float10)fVar2 - fVar11 * fVar11);
  fVar7 = ((float)GEN_TOF(((float10)((float)GEN_TOF(((fVar10 * fVar10 + fVar9 * fVar9) + fVar12 * fVar12))) -
                 (float10)(float)((float10)param_1[3] * (float10)param_1[3]))));
  fVar9 = (float10)fVar5;
  fVar8 = (float)((float10)fVar7 * fVar13 - fVar9 * fVar9);
  if (((!(fVar5 < 0.0)) || (!(fVar11 + fVar9 < (float10)0))) &&
     ((!(fVar13 < fVar9) || (!(fVar13 < fVar11 + fVar9))))) {
    fVar10 = (float10)fVar3;
    if ((double)((float)GEN_TOF(ABS(fVar10))) < *(double *)&REFG(undefined, 0x109ce00)) {
      if (!GEN_ISNAN(fVar8) && !(0.0 <= fVar8)) {
        return 1;
      }
    }
    else {
      fVar9 = (float10)(float)((float10)fVar1 * fVar13 - fVar11 * fVar9);
      fVar10 = (float10)(float)(fVar9 * fVar9 - (float10)fVar8 * fVar10);
      if ((!GEN_ISNAN((float10)0) && !GEN_ISNAN(fVar10)) && !((float10)0 <= fVar10)) {
        return 0;
      }
      fVar3 = ((float)GEN_TOF((((float10)((float)GEN_TOF(-fVar9)) - (float10)((float)GEN_TOF(SQRT(fVar10)))) / (float10)fVar3)));
      fVar9 = (float10)fVar3;
      if ((!(fVar9 < (float10)0)) && (!(REFG(float, 0x1087f04) < fVar3))) {
        fVar10 = (float10)fVar6;
        fVar11 = (float10)fVar5;
        fVar12 = fVar11 + fVar10 * fVar9;
        fVar9 = (float10)0;
        if (fVar12 < fVar9) {
          if (((!GEN_ISNAN(fVar6) && !GEN_ISNAN(*(float *)&REFG(undefined, 0x1088114))) && !(fVar6 <= *(float *)&REFG(undefined, 0x1088114))
              ) && ((((float10)fVar1 + (float10)fVar1) +
                    (float10)(float)(-fVar11 / fVar10) * (float10)fVar2) *
                    (float10)(float)(-fVar11 / fVar10) + (float10)fVar7 <= fVar9)) {
            return 1;
          }
        }
        else {
          fVar13 = (float10)fVar4;
          if (!(fVar13 < fVar12)) {
            return 1;
          }
          if (!(fVar6 < 0.0)) {
            return 0;
          }
          fVar12 = (float10)((float)GEN_TOF(((fVar13 - fVar11) / fVar10)));
          if ((((float10)fVar7 + fVar13) - (float10)*(double *)&REFG(undefined, 0x1092098) * fVar11) +
              fVar12 * (fVar12 * (float10)fVar2 +
                       ((float10)fVar1 - fVar10) * (float10)*(double *)&REFG(undefined, 0x1092098)) <= fVar9) {
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

/* ref: FUN_005ffa50 */
unsigned int F_005ffa50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ffa50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[3] = param_2[3];
  return 0;
}

/* ref: FUN_005ffa80 */
uint F_005ffa80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ffa80u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  *param_1 = ((float)GEN_TOF(SQRT((float10)*(float *)param_2)));
  param_1[1] = ((float)GEN_TOF(SQRT((float10)*(float *)(param_2 + 4))));
  param_1[2] = ((float)GEN_TOF(SQRT((float10)*(float *)(param_2 + 8))));
  param_1[3] = *(float *)(param_2 + 0xc);
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Group::SGActionController::vf4 */
byte F_005ffb10(void)
{
  GEN_ENTER(0x5ffb10u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Group::SGActionController::vf5 */
byte F_005ffb20(void)
{
  GEN_ENTER(0x5ffb20u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Group::SGActionController::vf6 */
byte F_005ffb30(void)
{
  GEN_ENTER(0x5ffb30u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Group::SGActionController::vf7 */
byte F_005ffb40(void)
{
  GEN_ENTER(0x5ffb40u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Group::SGRotationActionController::vf3 */
uint F_005ffb50(void)
{
  GEN_ENTER(0x5ffb50u, 0u, 0u, 0u, 0u);
  return 0x80;
}

/* ref: Client::LayoutEngine::Group::SGRotationActionController::vf5 */
byte F_005ffb60(void)
{
  GEN_ENTER(0x5ffb60u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Group::SGRandomActionController::vf3 */
uint F_005ffb70(void)
{
  GEN_ENTER(0x5ffb70u, 0u, 0u, 0u, 0u);
  return 0x78;
}

/* ref: Client::LayoutEngine::Group::SGRandomActionController::vf6 */
byte F_005ffb80(void)
{
  GEN_ENTER(0x5ffb80u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Layer::EnvSpaceLayoutInstance::vf6 */
uint F_005ffb90(void)
{
  GEN_ENTER(0x5ffb90u, 0u, 0u, 0u, 0u);
  return 0x38;
}

/* ref: Client::LayoutEngine::Layer::EnvSpaceLayoutInstance::vf24 */
uint F_005ffba0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ffba0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::EnvSpaceLayoutInstance::vf23 */
uint F_005ffbb0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ffbb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::EnvLocationLayoutInstance::vf6 */
uint F_005ffbc0(void)
{
  GEN_ENTER(0x5ffbc0u, 0u, 0u, 0u, 0u);
  return 0x38;
}

/* ref: Client::LayoutEngine::Layer::EnvLocationLayoutInstance::vf24 */
uint F_005ffbd0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ffbd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::EnvLocationLayoutInstance::vf23 */
uint F_005ffbe0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ffbe0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf6 */
uint F_005ffbf0(void)
{
  GEN_ENTER(0x5ffbf0u, 0u, 0u, 0u, 0u);
  return 0x48;
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf24 */
uint F_005ffc00(unsigned int gen_a0)
{
  GEN_ENTER(0x5ffc00u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf23 */
uint F_005ffc10(unsigned int gen_a0)
{
  GEN_ENTER(0x5ffc10u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::LightLayoutInstance::vf43 */
unsigned int F_005ffc20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ffc20u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *param_1 = *(undefined4 *)(this + 0x38);
  param_1[1] = *(undefined4 *)(this + 0x3c);
  param_1[2] = *(undefined4 *)(this + 0x40);
  param_1[3] = *(undefined4 *)(this + 0x44);
  return 0;
}

/* ref: FUN_005ffc50 */
unsigned int F_005ffc50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ffc50u, gen_a0, gen_a1, 0u, 0u);
  float * param_1 = (float *)(uintptr_t)gen_a0;
  float * param_2 = (float *)(uintptr_t)gen_a1;
  *param_1 = (float)((float10)*param_2 * (float10)*param_2);
  param_1[1] = (float)((float10)param_2[1] * (float10)param_2[1]);
  param_1[2] = (float)((float10)param_2[2] * (float10)param_2[2]);
  param_1[3] = param_2[3];
  return 0;
}

/* ref: FUN_005ffc80 */
uint F_005ffc80(void)
{
  GEN_ENTER(0x5ffc80u, 0u, 0u, 0u, 0u);
  return 0x38;
}

/* ref: FUN_005ffc90 */
uint F_005ffc90(unsigned int gen_a0)
{
  GEN_ENTER(0x5ffc90u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: FUN_005ffca0 */
uint F_005ffca0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ffca0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::WeaponLayoutInstance::vf6 */
uint F_005ffcb0(void)
{
  GEN_ENTER(0x5ffcb0u, 0u, 0u, 0u, 0u);
  return 0x38;
}

/* ref: Client::LayoutEngine::Layer::WeaponLayoutInstance::vf24 */
uint F_005ffcc0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ffcc0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: Client::LayoutEngine::Layer::WeaponLayoutInstance::vf23 */
uint F_005ffcd0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ffcd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(uint *)(in_ecx + 0x30);
}

/* ref: FUN_005ffce0 */
unsigned int F_005ffce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ffce0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  puVar2 = param_1;
  puVar3 = this;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  return 0;
}

/* ref: FUN_005ffd20 */
uint F_005ffd20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ffd20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_005ffd50 */
byte F_005ffd50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ffd50u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx != param_2;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf21 */
byte F_005ffd80(void)
{
  GEN_ENTER(0x5ffd80u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf22 */
byte F_005ffd90(void)
{
  GEN_ENTER(0x5ffd90u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf24 */
uint F_005ffda0(void)
{
  GEN_ENTER(0x5ffda0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf23 */
uint F_005ffdb0(void)
{
  GEN_ENTER(0x5ffdb0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf25 */
unsigned int F_005ffdc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5ffdc0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::RangeLayoutInstance::vf63 */
uint F_005ffdd0(unsigned int gen_a0)
{
  GEN_ENTER(0x5ffdd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x30;
}

/* ref: Client::LayoutEngine::Layer::LineVfxLayoutInstance::vf6 */
uint F_005ffde0(void)
{
  GEN_ENTER(0x5ffde0u, 0u, 0u, 0u, 0u);
  return 0x90;
}

/* ref: Client::LayoutEngine::Layer::LineVfxLayoutInstance::vf15 */
uint F_005ffdf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5ffdf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xec))(this)));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = puVar1[3];
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf21 */
byte F_005ffe20(void)
{
  GEN_ENTER(0x5ffe20u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf22 */
byte F_005ffe30(void)
{
  GEN_ENTER(0x5ffe30u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf24 */
uint F_005ffe40(void)
{
  GEN_ENTER(0x5ffe40u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf23 */
uint F_005ffe50(void)
{
  GEN_ENTER(0x5ffe50u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf25 */
unsigned int F_005ffe60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x5ffe60u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf68 */
unsigned int F_005ffe70(void)
{
  GEN_ENTER(0x5ffe70u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf57 */
uint F_005ffe80(unsigned int gen_a0)
{
  GEN_ENTER(0x5ffe80u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  *(undefined4 *)&REFG(undefined, 0x1379d00) = *(undefined4 *)(in_ecx + 0x30);
  *(undefined4 *)&REFG(undefined, 0x1379d04) = *(undefined4 *)(in_ecx + 0x34);
  *(undefined4 *)&REFG(undefined, 0x1379d08) = *(undefined4 *)(in_ecx + 0x38);
  return 0x1379d00;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf59 */
uint F_005ffeb0(unsigned int gen_a0, float gen_a1, float gen_a2, float gen_a3, float gen_a4)
{
  GEN_ENTER(0x5ffeb0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float in_xmm1 = (float)gen_a1;
  float in_xmm2 = (float)gen_a2;
  float in_xmm3 = (float)gen_a3;
  float in_xmm7 = (float)gen_a4;
  F_00a1e180(in_xmm1,in_xmm2,in_xmm3,in_xmm7,0x1379d10,*(float *)(in_ecx + 0x3c));
  return 0x1379d10;
}

/* ref: Client::LayoutEngine::Layer::MarkerLayoutInstance::vf62 */
unsigned int F_005fff00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fff00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::PositionMarkerLayoutInstance::vf6 */
uint F_005fff10(void)
{
  GEN_ENTER(0x5fff10u, 0u, 0u, 0u, 0u);
  return 0x60;
}

/* ref: Client::LayoutEngine::Layer::PositionMarkerLayoutInstance::vf68 */
unsigned int F_005fff20(void)
{
  GEN_ENTER(0x5fff20u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::QuestMarkerLayoutInstance::vf6 */
uint F_005fff30(void)
{
  GEN_ENTER(0x5fff30u, 0u, 0u, 0u, 0u);
  return 0x60;
}

/* ref: Client::LayoutEngine::Layer::TargetMarkerLayoutInstance::vf6 */
uint F_005fff40(void)
{
  GEN_ENTER(0x5fff40u, 0u, 0u, 0u, 0u);
  return 0x60;
}

/* ref: Client::LayoutEngine::Layer::TargetMarkerLayoutInstance::vf68 */
unsigned int F_005fff50(void)
{
  GEN_ENTER(0x5fff50u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf6 */
uint F_005fff60(void)
{
  GEN_ENTER(0x5fff60u, 0u, 0u, 0u, 0u);
  return 0x60;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf15 */
uint F_005fff70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x5fff70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  
  puVar1 = ((undefined4 *)GEN_TOP(((code *)*(gen_code32 *)(*(int *)this + 0xec))(this)));
  *param_1 = *puVar1;
  param_1[1] = puVar1[1];
  param_1[2] = puVar1[2];
  param_1[3] = puVar1[3];
  return (uint)param_1;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf68 */
unsigned int F_005fffa0(void)
{
  GEN_ENTER(0x5fffa0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf24 */
uint F_005fffb0(void)
{
  GEN_ENTER(0x5fffb0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::ChairMarkerLayoutInstance::vf23 */
uint F_005fffc0(void)
{
  GEN_ENTER(0x5fffc0u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf68 */
byte F_005fffd0(unsigned int gen_a0)
{
  GEN_ENTER(0x5fffd0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return *(byte *)(in_ecx + 100);
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf21 */
byte F_005fffe0(void)
{
  GEN_ENTER(0x5fffe0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf22 */
byte F_005ffff0(void)
{
  GEN_ENTER(0x5ffff0u, 0u, 0u, 0u, 0u);
  return 1;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf24 */
uint F_00600000(void)
{
  GEN_ENTER(0x600000u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf23 */
uint F_00600010(void)
{
  GEN_ENTER(0x600010u, 0u, 0u, 0u, 0u);
  return 0;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf25 */
unsigned int F_00600020(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0x600020u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  return 0;
}

/* ref: Client::LayoutEngine::Layer::PathLayoutInstance::vf63 */
uint F_00600030(unsigned int gen_a0)
{
  GEN_ENTER(0x600030u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  return in_ecx + 0x30;
}

/* ref: FUN_00600090 */
unsigned int F_00600090(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600090u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  return 0;
}

/* ref: FUN_006000f0 */
byte F_006000f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6000f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00600110 */
byte F_00600110(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600110u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00600140 */
uint F_00600140(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600140u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00600150 */
uint F_00600150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600150u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00600180 */
uint F_00600180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600180u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00600190 */
uint F_00600190(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600190u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_006001c0 */
uint F_006001c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6001c0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_006001d0 */
uint F_006001d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6001d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_006001e0 */
uint F_006001e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6001e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  return (uint)this;
}

/* ref: FUN_00600250 */
unsigned int F_00600250(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x600250u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  *(float *)(in_ecx + 0x20) = param_2;
  return 0;
}

/* ref: FUN_00600280 */
unsigned int F_00600280(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600280u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *in_ecx = *param_2;
  in_ecx[1] = param_2[1];
  in_ecx[2] = param_2[2];
  in_ecx[4] = param_2[4];
  in_ecx[5] = param_2[5];
  in_ecx[6] = param_2[6];
  return 0;
}

/* ref: FUN_006002b0 */
ushort F_006002b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6002b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 10) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_006002d0 */
uint F_006002d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6002d0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_006002f0 */
uint F_006002f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6002f0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00600320 */
uint F_00600320(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600320u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00600330 */
uint F_00600330(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600330u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00600340 */
byte F_00600340(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600340u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00600360 */
byte F_00600360(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600360u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00600380 */
byte F_00600380(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600380u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006003a0 */
byte F_006003a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6003a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_006003c0 */
byte F_006003c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6003c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006003e0 */
byte F_006003e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6003e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00600410 */
uint F_00600410(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600410u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00600420 */
byte F_00600420(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600420u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00600440 */
byte F_00600440(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600440u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00600460 */
byte F_00600460(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600460u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00600480 */
byte F_00600480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600480u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_006004b0 */
uint F_006004b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6004b0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  uint uVar1;
  
  uVar1 = (param_2 & 0xff ^ *(uint *)(in_ecx + 0x30)) & 1;
  *(uint *)(in_ecx + 0x30) = *(uint *)(in_ecx + 0x30) ^ uVar1;
  return uVar1;
}

/* ref: FUN_006004d0 */
byte F_006004d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6004d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006004f0 */
byte F_006004f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6004f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00600510 */
byte F_00600510(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600510u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00600530 */
byte F_00600530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600530u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00600550 */
byte F_00600550(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600550u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00600570 */
byte F_00600570(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600570u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00600590 */
byte F_00600590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600590u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006005b0 */
byte F_006005b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6005b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_006005d0 */
byte F_006005d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6005d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006005f0 */
byte F_006005f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6005f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00600610 */
byte F_00600610(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600610u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00600630 */
byte F_00600630(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600630u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00600650 */
byte F_00600650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00600670 */
byte F_00600670(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600670u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00600690 */
byte F_00600690(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600690u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_006006b0 */
byte F_006006b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6006b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_006006d0 */
uint F_006006d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6006d0u, gen_a0, gen_a1, 0u, 0u);
  ushort * param_1 = (ushort *)(uintptr_t)gen_a0;
  ushort * param_2 = (ushort *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_006006f0 */
uint F_006006f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6006f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x20;
}

/* ref: FUN_00600700 */
uint F_00600700(unsigned int gen_a0)
{
  GEN_ENTER(0x600700u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x21;
}

/* ref: FUN_00600710 */
uint F_00600710(unsigned int gen_a0)
{
  GEN_ENTER(0x600710u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00600720 */
uint F_00600720(unsigned int gen_a0)
{
  GEN_ENTER(0x600720u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00600730 */
uint F_00600730(unsigned int gen_a0)
{
  GEN_ENTER(0x600730u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00600740 */
uint F_00600740(unsigned int gen_a0)
{
  GEN_ENTER(0x600740u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00600750 */
uint F_00600750(unsigned int gen_a0)
{
  GEN_ENTER(0x600750u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x21)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x21);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00600770 */
uint F_00600770(unsigned int gen_a0)
{
  GEN_ENTER(0x600770u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x21);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x21);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_006007b0 */
uint F_006007b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6007b0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x28,900);
  return (uint)uVar1;
}

/* ref: FUN_006007e0 */
uint F_006007e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6007e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00600810 */
uint F_00600810(unsigned int gen_a0)
{
  GEN_ENTER(0x600810u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x90;
}

/* ref: FUN_00600820 */
uint F_00600820(unsigned int gen_a0)
{
  GEN_ENTER(0x600820u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x91;
}

/* ref: FUN_00600830 */
uint F_00600830(unsigned int gen_a0)
{
  GEN_ENTER(0x600830u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00600840 */
uint F_00600840(unsigned int gen_a0)
{
  GEN_ENTER(0x600840u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00600850 */
uint F_00600850(unsigned int gen_a0)
{
  GEN_ENTER(0x600850u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00600860 */
uint F_00600860(unsigned int gen_a0)
{
  GEN_ENTER(0x600860u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00600870 */
uint F_00600870(unsigned int gen_a0)
{
  GEN_ENTER(0x600870u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x91)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x91);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_006008a0 */
uint F_006008a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6008a0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x91);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x91);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_006008e0 */
uint F_006008e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6008e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xa0,0x385);
  return (uint)uVar1;
}

/* ref: FUN_00600950 */
uint F_00600950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600950u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_006009c0 */
uint F_006009c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6009c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00600a20 */
uint F_00600a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600a20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x385);
  return uVar1;
}

/* ref: FUN_00600a50 */
uint F_00600a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600a50u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x385);
  return (uint)uVar1;
}

/* ref: FUN_00600a80 */
uint F_00600a80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600a80u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00600ac0 */
uint F_00600ac0(unsigned int gen_a0)
{
  GEN_ENTER(0x600ac0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00600ad0 */
uint F_00600ad0(unsigned int gen_a0)
{
  GEN_ENTER(0x600ad0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00600ae0 */
uint F_00600ae0(unsigned int gen_a0)
{
  GEN_ENTER(0x600ae0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00600af0 */
uint F_00600af0(unsigned int gen_a0)
{
  GEN_ENTER(0x600af0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00600b00 */
uint F_00600b00(unsigned int gen_a0)
{
  GEN_ENTER(0x600b00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00600b10 */
uint F_00600b10(unsigned int gen_a0)
{
  GEN_ENTER(0x600b10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00600b20 */
uint F_00600b20(unsigned int gen_a0)
{
  GEN_ENTER(0x600b20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00600b40 */
uint F_00600b40(unsigned int gen_a0)
{
  GEN_ENTER(0x600b40u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00600b80 */
uint F_00600b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600b80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_00600bb0 */
byte F_00600bb0(unsigned int gen_a0, unsigned int gen_a1, float gen_a2)
{
  GEN_ENTER(0x600bb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  float param_3 = (float)gen_a2;
  *(byte *)(in_ecx + 0x23) = (byte)param_2;
  *(float *)(in_ecx + 0x24) = param_3;
  return (byte)param_2;
}

/* ref: FUN_00600bd0 */
uint F_00600bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x600bd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00600be0 */
uint F_00600be0(unsigned int gen_a0)
{
  GEN_ENTER(0x600be0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00600bf0 */
uint F_00600bf0(unsigned int gen_a0)
{
  GEN_ENTER(0x600bf0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00600c00 */
uint F_00600c00(unsigned int gen_a0)
{
  GEN_ENTER(0x600c00u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00600c10 */
uint F_00600c10(unsigned int gen_a0)
{
  GEN_ENTER(0x600c10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00600c20 */
uint F_00600c20(unsigned int gen_a0)
{
  GEN_ENTER(0x600c20u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00600c30 */
uint F_00600c30(unsigned int gen_a0)
{
  GEN_ENTER(0x600c30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00600c50 */
uint F_00600c50(unsigned int gen_a0)
{
  GEN_ENTER(0x600c50u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00600c90 */
uint F_00600c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600c90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_00600cc0 */
uint F_00600cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600cc0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00600d80 */
uint F_00600d80(unsigned int gen_a0)
{
  GEN_ENTER(0x600d80u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  if (*(char *)((int)this + 0x90) == '\0') {
    F_004b6080(this);
    *(undefined1 *)((int)this + 0x90) = 1;
  }
  return (int)this + 0x14;
}

/* ref: FUN_00600da0 */
uint F_00600da0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600da0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00600dd0 */
unsigned int F_00600dd0(unsigned int gen_a0, float gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x600dd0u, gen_a0, 0u, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  if (REFG(int, 0x1375554) != 0) {
    F_004b6160(REFG(int, 0x1375554),param_1,param_2,param_3);
    REFG(undefined1, 0x1301314) = 0;
  }
  return 0;
}

/* ref: FUN_00600e40 */
uint F_00600e40(unsigned int gen_a0)
{
  GEN_ENTER(0x600e40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_00600e50 */
uint F_00600e50(unsigned int gen_a0)
{
  GEN_ENTER(0x600e50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x11;
}

/* ref: FUN_00600e60 */
uint F_00600e60(unsigned int gen_a0)
{
  GEN_ENTER(0x600e60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00600e70 */
uint F_00600e70(unsigned int gen_a0)
{
  GEN_ENTER(0x600e70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00600e80 */
uint F_00600e80(unsigned int gen_a0)
{
  GEN_ENTER(0x600e80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00600e90 */
uint F_00600e90(unsigned int gen_a0)
{
  GEN_ENTER(0x600e90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00600ea0 */
uint F_00600ea0(unsigned int gen_a0)
{
  GEN_ENTER(0x600ea0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x11)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x11);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00600ec0 */
uint F_00600ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x600ec0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x11);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x11);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00600f00 */
uint F_00600f00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600f00u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,900);
  return (uint)uVar1;
}

/* ref: FUN_00600f60 */
uint F_00600f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x600f60u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00600fc0 */
uint F_00600fc0(unsigned int gen_a0)
{
  GEN_ENTER(0x600fc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00600fd0 */
uint F_00600fd0(unsigned int gen_a0)
{
  GEN_ENTER(0x600fd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00600fe0 */
uint F_00600fe0(unsigned int gen_a0)
{
  GEN_ENTER(0x600fe0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00600ff0 */
uint F_00600ff0(unsigned int gen_a0)
{
  GEN_ENTER(0x600ff0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00601000 */
uint F_00601000(unsigned int gen_a0)
{
  GEN_ENTER(0x601000u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00601010 */
uint F_00601010(unsigned int gen_a0)
{
  GEN_ENTER(0x601010u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00601020 */
uint F_00601020(unsigned int gen_a0)
{
  GEN_ENTER(0x601020u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00601040 */
uint F_00601040(unsigned int gen_a0)
{
  GEN_ENTER(0x601040u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00601080 */
uint F_00601080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_006010c0 */
uint F_006010c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6010c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00601120 */
uint F_00601120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601120u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,0x385);
  return uVar1;
}

/* ref: FUN_00601150 */
uint F_00601150(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601150u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0x385);
  return (uint)uVar1;
}

/* ref: FUN_006011a0 */
unsigned int F_006011a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6011a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x21) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x21) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x21);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x21);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x21);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x21);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00601220 */
unsigned int F_00601220(unsigned int gen_a0)
{
  GEN_ENTER(0x601220u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_006012a0 */
unsigned int F_006012a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6012a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00601340 */
uint F_00601340(unsigned int gen_a0)
{
  GEN_ENTER(0x601340u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x20;
}

/* ref: FUN_00601350 */
uint F_00601350(unsigned int gen_a0)
{
  GEN_ENTER(0x601350u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x21;
}

/* ref: FUN_00601360 */
uint F_00601360(unsigned int gen_a0)
{
  GEN_ENTER(0x601360u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00601370 */
uint F_00601370(unsigned int gen_a0)
{
  GEN_ENTER(0x601370u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00601380 */
uint F_00601380(unsigned int gen_a0)
{
  GEN_ENTER(0x601380u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00601390 */
uint F_00601390(unsigned int gen_a0)
{
  GEN_ENTER(0x601390u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_006013a0 */
uint F_006013a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6013a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x21)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x21);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_006013c0 */
uint F_006013c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6013c0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x21);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x21);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00601400 */
uint F_00601400(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601400u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x28,0x385);
  return (uint)uVar1;
}

/* ref: FUN_00601440 */
uint F_00601440(unsigned int gen_a0)
{
  GEN_ENTER(0x601440u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00601450 */
uint F_00601450(unsigned int gen_a0)
{
  GEN_ENTER(0x601450u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00601460 */
uint F_00601460(unsigned int gen_a0)
{
  GEN_ENTER(0x601460u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00601470 */
uint F_00601470(unsigned int gen_a0)
{
  GEN_ENTER(0x601470u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00601480 */
uint F_00601480(unsigned int gen_a0)
{
  GEN_ENTER(0x601480u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00601490 */
uint F_00601490(unsigned int gen_a0)
{
  GEN_ENTER(0x601490u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_006014a0 */
uint F_006014a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6014a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x15)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x15);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_006014c0 */
uint F_006014c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6014c0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00601500 */
uint F_00601500(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601500u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0x385);
  return (uint)uVar1;
}

/* ref: FUN_00601530 */
uint F_00601530(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601530u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_006015d0 */
byte F_006015d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6015d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00601640 */
unsigned int F_00601640(unsigned int gen_a0)
{
  GEN_ENTER(0x601640u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x11) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x11) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x11);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x11);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x11);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x11);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_006016a0 */
byte F_006016a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6016a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00601700 */
uint F_00601700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601700u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  uint param_2 = (uint)gen_a1;
  return param_2;
}

/* ref: FUN_00601740 */
uint F_00601740(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601740u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(uint *)(in_ecx + 0x34 + param_2 * 4);
}

/* ref: FUN_00601790 */
unsigned int F_00601790(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601790u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  
  iVar1 = *(int *)((int)this + 0x70);
  *(undefined4 *)(iVar1 + 0x14) = *param_1;
  *(undefined4 *)(iVar1 + 0x18) = param_1[1];
  *(undefined4 *)(iVar1 + 0x1c) = param_1[2];
  *(undefined4 *)(iVar1 + 0x20) = param_1[3];
  return 0;
}

/* ref: FUN_006017c0 */
uint F_006017c0(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x6017c0u, gen_a0, 0u, 0u, 0u);
  int in_ecx = (int)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x70);
  *(float *)(uVar1 + 0x20) = param_2;
  return uVar1;
}

/* ref: FUN_006017e0 */
uint F_006017e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6017e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 0x70);
  *(undefined2 *)(uVar1 + 10) = (undefined2)param_2;
  return uVar1;
}

/* ref: FUN_00601850 */
unsigned int F_00601850(unsigned int gen_a0)
{
  GEN_ENTER(0x601850u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_006018b0 */
uint F_006018b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6018b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

/* ref: FUN_006018c0 */
uint F_006018c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6018c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x11;
}

/* ref: FUN_006018d0 */
uint F_006018d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6018d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006018e0 */
uint F_006018e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6018e0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_006018f0 */
uint F_006018f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6018f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00601900 */
uint F_00601900(unsigned int gen_a0)
{
  GEN_ENTER(0x601900u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00601910 */
uint F_00601910(unsigned int gen_a0)
{
  GEN_ENTER(0x601910u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x11)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x11);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00601930 */
uint F_00601930(unsigned int gen_a0)
{
  GEN_ENTER(0x601930u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x11);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x11);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00601950 */
uint F_00601950(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601950u, gen_a0, gen_a1, 0u, 0u);
  uint * param_1 = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  return (uint)(*param_1 < *param_2);
}

/* ref: FUN_00601970 */
uint F_00601970(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601970u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,900);
  return (uint)uVar1;
}

/* ref: FUN_006019b0 */
unsigned int F_006019b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6019b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x11) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x11) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x11);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x11);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x11);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x11);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00601a50 */
uint F_00601a50(unsigned int gen_a0)
{
  GEN_ENTER(0x601a50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x11;
}

/* ref: FUN_00601a60 */
uint F_00601a60(unsigned int gen_a0)
{
  GEN_ENTER(0x601a60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00601a70 */
uint F_00601a70(unsigned int gen_a0)
{
  GEN_ENTER(0x601a70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00601a80 */
uint F_00601a80(unsigned int gen_a0)
{
  GEN_ENTER(0x601a80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00601a90 */
uint F_00601a90(unsigned int gen_a0)
{
  GEN_ENTER(0x601a90u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x11);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x11);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00601ab0 */
uint F_00601ab0(unsigned int gen_a0)
{
  GEN_ENTER(0x601ab0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00601ad0 */
uint F_00601ad0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601ad0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,900);
  return (uint)uVar1;
}

/* ref: FUN_00601b10 */
uint F_00601b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601b10u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,900);
  return (uint)uVar1;
}

/* ref: FUN_00601b80 */
uint F_00601b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601b80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0x385);
  return (uint)uVar1;
}

/* ref: FUN_00601bb0 */
uint F_00601bb0(unsigned int gen_a0)
{
  GEN_ENTER(0x601bb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x25;
}

/* ref: FUN_00601bc0 */
uint F_00601bc0(unsigned int gen_a0)
{
  GEN_ENTER(0x601bc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00601bd0 */
uint F_00601bd0(unsigned int gen_a0)
{
  GEN_ENTER(0x601bd0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00601be0 */
uint F_00601be0(unsigned int gen_a0)
{
  GEN_ENTER(0x601be0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00601bf0 */
uint F_00601bf0(unsigned int gen_a0)
{
  GEN_ENTER(0x601bf0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00601c20 */
uint F_00601c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601c20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x28,900);
  return (uint)uVar1;
}

/* ref: FUN_00601c50 */
uint F_00601c50(unsigned int gen_a0)
{
  GEN_ENTER(0x601c50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00601c60 */
uint F_00601c60(unsigned int gen_a0)
{
  GEN_ENTER(0x601c60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00601c70 */
uint F_00601c70(unsigned int gen_a0)
{
  GEN_ENTER(0x601c70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00601c80 */
uint F_00601c80(unsigned int gen_a0)
{
  GEN_ENTER(0x601c80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00601c90 */
uint F_00601c90(unsigned int gen_a0)
{
  GEN_ENTER(0x601c90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00601ca0 */
uint F_00601ca0(unsigned int gen_a0)
{
  GEN_ENTER(0x601ca0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00601ce0 */
uint F_00601ce0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601ce0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_00601d20 */
uint F_00601d20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x601d20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00601de0 */
uint F_00601de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601de0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,900);
  return (uint)uVar1;
}

/* ref: FUN_00601e10 */
uint F_00601e10(unsigned int gen_a0)
{
  GEN_ENTER(0x601e10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00601e20 */
uint F_00601e20(unsigned int gen_a0)
{
  GEN_ENTER(0x601e20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00601e30 */
uint F_00601e30(unsigned int gen_a0)
{
  GEN_ENTER(0x601e30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00601e40 */
uint F_00601e40(unsigned int gen_a0)
{
  GEN_ENTER(0x601e40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00601e50 */
uint F_00601e50(unsigned int gen_a0)
{
  GEN_ENTER(0x601e50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00601e80 */
uint F_00601e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601e80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0x385);
  return (uint)uVar1;
}

/* ref: FUN_00601eb0 */
uint F_00601eb0(unsigned int gen_a0)
{
  GEN_ENTER(0x601eb0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_00601ec0 */
uint F_00601ec0(unsigned int gen_a0)
{
  GEN_ENTER(0x601ec0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00601ed0 */
uint F_00601ed0(unsigned int gen_a0)
{
  GEN_ENTER(0x601ed0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00601ee0 */
uint F_00601ee0(unsigned int gen_a0)
{
  GEN_ENTER(0x601ee0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00601ef0 */
uint F_00601ef0(unsigned int gen_a0)
{
  GEN_ENTER(0x601ef0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00601f20 */
uint F_00601f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601f20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_00601f50 */
uint F_00601f50(unsigned int gen_a0)
{
  GEN_ENTER(0x601f50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x19;
}

/* ref: FUN_00601f60 */
uint F_00601f60(unsigned int gen_a0)
{
  GEN_ENTER(0x601f60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00601f70 */
uint F_00601f70(unsigned int gen_a0)
{
  GEN_ENTER(0x601f70u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00601f80 */
uint F_00601f80(unsigned int gen_a0)
{
  GEN_ENTER(0x601f80u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00601f90 */
uint F_00601f90(unsigned int gen_a0)
{
  GEN_ENTER(0x601f90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00601fa0 */
uint F_00601fa0(unsigned int gen_a0)
{
  GEN_ENTER(0x601fa0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x19);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x19);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00601fe0 */
uint F_00601fe0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x601fe0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x1c,900);
  return (uint)uVar1;
}

/* ref: FUN_00602040 */
uint F_00602040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602040u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,900);
  return (uint)uVar1;
}

/* ref: FUN_00602090 */
uint F_00602090(unsigned int gen_a0)
{
  GEN_ENTER(0x602090u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x15;
}

/* ref: FUN_006020a0 */
uint F_006020a0(unsigned int gen_a0)
{
  GEN_ENTER(0x6020a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_006020b0 */
uint F_006020b0(unsigned int gen_a0)
{
  GEN_ENTER(0x6020b0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_006020c0 */
uint F_006020c0(unsigned int gen_a0)
{
  GEN_ENTER(0x6020c0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_006020d0 */
uint F_006020d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6020d0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_006020e0 */
uint F_006020e0(unsigned int gen_a0)
{
  GEN_ENTER(0x6020e0u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x15);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x15);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00602120 */
uint F_00602120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602120u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,900);
  return (uint)uVar1;
}

/* ref: FUN_00602180 */
uint F_00602180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602180u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,900);
  return (uint)uVar1;
}

/* ref: FUN_00602200 */
uint F_00602200(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x602200u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00602220 */
uint F_00602220(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x602220u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00602250 */
uint F_00602250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602250u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,0xd4);
  return (uint)uVar1;
}

/* ref: FUN_00602280 */
uint F_00602280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x602280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006022d0 */
unsigned int F_006022d0(unsigned int gen_a0)
{
  GEN_ENTER(0x6022d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x21) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x21) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x21);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x21);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x21);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x21);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_006023a0 */
uint F_006023a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6023a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,0x385);
  return (uint)uVar1;
}

/* ref: FUN_006023e0 */
uint F_006023e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6023e0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00602410 */
uint F_00602410(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x602410u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00602440 */
uint F_00602440(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x602440u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00602450 */
unsigned int F_00602450(unsigned int gen_a0)
{
  GEN_ENTER(0x602450u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x15) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x15) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x15);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x15);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x15);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_006024c0 */
uint F_006024c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6024c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006024d0 */
uint F_006024d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6024d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006024f0 */
uint F_006024f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6024f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00602510 */
uint F_00602510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x602510u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00602530 */
uint F_00602530(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x602530u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00602540 */
unsigned int F_00602540(unsigned int gen_a0)
{
  GEN_ENTER(0x602540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  int * piVar5;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x91) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x91) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x91);
      piVar4 = (int *)*piVar3;
      while (piVar5 = piVar4, cVar1 == '\0') {
        piVar4 = (int *)*piVar5;
        cVar1 = *(char *)((int)piVar4 + 0x91);
        piVar3 = piVar5;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x91);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x91);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_006025a0 */
uint F_006025a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6025a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006025d0 */
uint F_006025d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x6025d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_006025e0 */
uint F_006025e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6025e0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  uint param_2 = (uint)gen_a1;
  return in_ecx + (param_2 >> 4) * 2;
}

/* ref: FUN_006025f0 */
uint F_006025f0(unsigned int gen_a0)
{
  GEN_ENTER(0x6025f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00602610 */
uint F_00602610(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0x602610u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00602640 */
uint F_00602640(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602640u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00602660 */
uint F_00602660(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602660u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x28,param_2,900);
  return uVar1;
}

/* ref: FUN_006026a0 */
uint F_006026a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x6026a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  uint uVar1;
  uint * puVar2;
  
  if ((*(byte *)((int)this + 0x95) & 8) == 0) {
    if (param_1 == *(uint *)((int)this + 0x74)) {
      return *(uint *)((int)this + 0x78);
    }
  }
  else {
    puVar2 = *(uint * PTR32 *)((int)this + 0x78);
    for (uVar1 = *(uint *)((int)this + 0x74); uVar1 != 0; uVar1 = uVar1 >> 4) {
      if (param_1 == (uVar1 & 0xf)) {
        return *puVar2;
      }
      if (param_1 < (uVar1 & 0xf)) {
        return 0;
      }
      puVar2 = puVar2 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00602700 */
byte F_00602700(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602700u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0x95) ^ (byte)param_2) & 1;
  *(byte *)(in_ecx + 0x95) = *(byte *)(in_ecx + 0x95) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00602720 */
byte F_00602720(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0x602720u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = ((char)param_2 * '\x02' ^ *(byte *)(in_ecx + 0x95)) & 2;
  *(byte *)(in_ecx + 0x95) = *(byte *)(in_ecx + 0x95) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00602740 */
uint F_00602740(unsigned int gen_a0, float gen_a1)
{
  GEN_ENTER(0x602740u, gen_a0, 0u, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  float param_2 = (float)gen_a1;
  uint uVar1;
  
  uVar1 = F_006a3820(param_1,(int)param_2 & 0xffff);
  return uVar1;
}

/* ref: FUN_00602770 */
uint F_00602770(unsigned int gen_a0)
{
  GEN_ENTER(0x602770u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x10;
}

