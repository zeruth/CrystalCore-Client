#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554)
/* ref: FUN_00a84440 */
uint F_00a84440(unsigned int gen_a0)
{
  GEN_ENTER(0xa84440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  __declspec(align(16)) undefined1 gen_frame[0x10];
  undefined4 * puVar1;
  uint uVar2;
  int * piVar3;
  ulonglong uVar4;
  
  (*(undefined * PTR32 *)(gen_frame + 0x8)) = this;
  if (*(int *)((int)this + 0x24) != 0) {
    uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x125);
    if (uVar2 != 0) {
      piVar3 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x125);
      ((code *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3,*(undefined4 *)((int)this + 0x24));
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x24);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0x24) = 0;
    }
  }
  if (*(int *)((int)this + 0x28) != 0) {
    uVar2 = F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x127);
    if (uVar2 != 0) {
      piVar3 = (int *)F_0052fbb0(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x25d8),0x127);
      ((code *)*(gen_code32 *)(*piVar3 + 0x4c))(piVar3,*(undefined4 *)((int)this + 0x28));
    }
    puVar1 = *(undefined4 * PTR32 *)((int)this + 0x28);
    if (puVar1 != (undefined4 *)0x0) {
      ((code *)*(gen_code32 *)*puVar1)(puVar1,1);
      *(undefined4 *)((int)this + 0x28) = 0;
    }
  }
  F_00a90060((undefined *)((int)this + 0x14),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 0x18),
               *(undefined4 * PTR32 *)((int)this + 0x18));
  F_00429760(*(undefined4 *)((int)this + 0x18),0x18,0x191);
  F_00a9dfd0((undefined *)((int)this + 4),&(*(undefined * PTR32 *)(gen_frame + 0x8)),**(undefined4 * PTR32 *)((int)this + 8),
               *(undefined4 * PTR32 *)((int)this + 8));
  uVar4 = F_00429760(*(undefined4 *)((int)this + 8),0x24,0x191);
  return (uint)uVar4;
}

/* ref: FUN_00a84550 */
uint F_00a84550(unsigned int gen_a0)
{
  GEN_ENTER(0xa84550u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  short sVar1;
  uint uVar2;
  
  F_00a83380(this,(undefined *)((int)this + 0x1454));
  F_00a73d10((undefined *)((int)this + 0x1454));
  uVar2 = *(uint *)((int)this + 0x1450);
  if ((uVar2 != 0) &&
     (((sVar1 = *((short *)GEN_TOP((*(int *)(uVar2 + 0x1d4) + 2))), sVar1 == -0x7fff || (sVar1 == -0x7ffe)) ||
      (sVar1 == -0x7ff9)))) {
    uVar2 = F_00a71480(this,(uint)*(ushort *)(uVar2 + 0x310),0);
  }
  *(byte *)((int)this + 0x14c8) = *(byte *)((int)this + 0x14c8) & 0xfe;
  *(undefined4 *)((int)this + 0x1450) = 0;
  *(undefined4 *)((int)this + 0x14f0) = 0;
  *(undefined4 *)((int)this + 0x14f4) = 0;
  *(undefined4 *)((int)this + 0x151c) = 0;
  *(undefined4 *)((int)this + 0x1520) = 0;
  *(undefined4 *)((int)this + 0x14c4) = 0;
  return uVar2;
}

/* ref: FUN_00a845e0 */
uint F_00a845e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa845e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  F_00a9e680((undefined *)((int)this + 4));
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  return (uint)this;
}

/* ref: FUN_00a84610 */
uint F_00a84610(unsigned int gen_a0)
{
  GEN_ENTER(0xa84610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  
  *(undefined4 *)((int)this + 0x904) = 0;
  F_00c48350((undefined *)((int)this + 4),0,0x900);
  *(undefined4 *)((int)this + 0x908) = 0;
  *(undefined4 *)((int)this + 0x120c) = 0;
  F_00c48350((undefined *)((int)this + 0x90c),0,0x900);
  *(undefined4 *)((int)this + 0x1210) = 0;
  *(undefined4 *)((int)this + 0x1214) = 0;
  *(undefined1 *)((int)this + 0x1218) = 0;
  *(undefined4 *)((int)this + 0x121c) = 0;
  *(undefined4 *)((int)this + 0x1220) = 0;
  *(undefined1 *)((int)this + 0x1224) = 0;
  *(undefined1 *)((int)this + 0x1228) = 0;
  F_00a68080((undefined *)((int)this + 0x1230));
  *(undefined4 *)((int)this + 0x1544) = 0;
  *(undefined4 *)((int)this + 0x154c) = 0;
  *(undefined4 *)((int)this + 0x1550) = 0;
  *(undefined4 *)((int)this + 0x1554) = 0;
  *(undefined4 *)((int)this + 0x1558) = 0;
  *(undefined4 *)((int)this + 0x155c) = 0;
  *(undefined2 *)((int)this + 0x1560) = 0;
  *(undefined2 *)((int)this + 0x15ca) = 0;
  *(undefined1 *)((int)this + 0x1564) = 0;
  *(undefined4 *)((int)this + 0x1568) = 0;
  *(undefined4 *)((int)this + 0x156c) = 0;
  *(undefined1 *)((int)this + 0x1574) = 0;
  *(undefined1 *)((int)this + 0x15b4) = 0;
  *(undefined2 *)((int)this + 0x15c6) = 0;
  *(undefined1 *)((int)this + 0x15c8) = 0;
  *(undefined4 *)((int)this + 0x1570) = 0xe0000000;
  *(undefined4 *)((int)this + 0x1600) = 0;
  *(undefined4 *)((int)this + 0x1604) = 0;
  *(undefined4 *)((int)this + 0x1608) = 0;
  *(undefined4 *)((int)this + 0x160c) = 0;
  *(undefined4 *)((int)this + 0x1610) = 0;
  *(undefined4 *)((int)this + 0x1614) = 0;
  *(undefined4 *)((int)this + 0x1618) = 0;
  *(undefined4 *)((int)this + 0x161c) = 0;
  *(undefined4 *)((int)this + 0x1620) = 0;
  *(undefined4 *)((int)this + 0x1624) = 0;
  F_00c48350((undefined *)((int)this + 0x1628),0,0x100);
  *(undefined4 *)((int)this + 0x1728) = 0;
  *(undefined4 *)((int)this + 0x172c) = 0;
  *(undefined2 *)((int)this + 0x1730) = 0;
  *(undefined4 *)((int)this + 0x1734) = 0;
  *(undefined4 *)((int)this + 0x1738) = 0;
  *(undefined4 *)((int)this + 0x173c) = 0;
  *(undefined4 *)((int)this + 0x1740) = 0;
  *(undefined2 *)((int)this + 0x1744) = 0;
  *(undefined4 *)((int)this + 0x1748) = 0;
  *(undefined4 *)((int)this + 0x174c) = 0;
  *(undefined4 *)((int)this + 0x1750) = 0;
  *(undefined4 *)((int)this + 0x1754) = 0;
  *(undefined2 *)((int)this + 0x1758) = 0;
  *(undefined2 *)((int)this + 0x175a) = 0;
  *(undefined4 *)((int)this + 6000) = 0;
  *(undefined4 *)((int)this + 0x1774) = 0;
  *(undefined2 *)((int)this + 0x1778) = 0;
  *(undefined1 *)((int)this + 0x177a) = 0;
  *(undefined4 *)((int)this + 0x177c) = 0xe0000000;
  *(undefined4 *)((int)this + 0x1780) = 0;
  *(undefined4 *)((int)this + 0x1784) = 0;
  F_00b7af70((undefined *)((int)this + 0x1788),0);
  *(undefined2 *)((int)this + 0x18fc) = 0;
  *(undefined4 *)((int)this + 0x1900) = 0;
  F_00a74d40((undefined *)((int)this + 0x1904));
  F_00a74da0((undefined *)((int)this + 0x1950));
  F_00a66e30((undefined *)((int)this + 0x2448));
  F_00a73a30((undefined *)((int)this + 0x5ef8));
  F_00a73730((undefined *)((int)this + 0x6ec4));
  F_00b9fee0((undefined *)((int)this + 0x70ec));
  *(undefined4 *)((int)this + 0x735c) = 0;
  *(undefined1 *)((int)this + 0x73b5) = 0;
  *(undefined4 *)((int)this + 0x73b8) = 0;
  *(undefined1 *)((int)this + 0x7411) = 0;
  F_00a84550((undefined *)((int)this + 0x7418));
  F_00a859d0((undefined *)((int)this + 0x8948));
  *(undefined1 *)((int)this + 0x8b74) = 0;
  *(undefined2 *)((int)this + 0x8b76) = 0;
  *(undefined1 *)((int)this + 0x8b78) = 0;
  *(undefined4 *)((int)this + 0x8b84) = 0;
  *(undefined4 *)((int)this + 0x8b88) = 0;
  *(undefined4 *)((int)this + 0x8b8c) = 0;
  *(undefined4 *)((int)this + 0x8b90) = 0;
  *(undefined4 *)((int)this + 0x8b94) = 0;
  *(undefined4 *)((int)this + 0x8b98) = 0;
  *(undefined4 *)((int)this + 0x8b9c) = 0;
  *(undefined4 *)((int)this + 0x8ba0) = 0;
  *(undefined2 *)((int)this + 0x8ba4) = 0;
  F_00415250(*(undefined * PTR32 *)(REFG(int, 0x137104c) + 0x10),(int)this + 0x92e8);
  F_00bc6530((undefined *)((int)this + 0x8ba8));
  F_00b9d7c0((undefined *)((int)this + 0x92f4));
  *(undefined4 *)((int)this + 0xb030) = 0;
  *(undefined4 *)((int)this + 0xb034) = 0;
  *(undefined4 *)((int)this + 0xb038) = 0;
  *(undefined4 *)((int)this + 0xb03c) = 0;
  *(undefined1 *)((int)this + 0xb042) = 0;
  *(undefined2 *)((int)this + 0xb040) = 0;
  *(undefined4 *)((int)this + 0xb044) = 0;
  *(undefined4 *)((int)this + 0xb048) = 0;
  *(undefined4 *)((int)this + 0xb04c) = 0;
  *(undefined4 *)((int)this + 0xb050) = 0;
  *(undefined1 *)((int)this + 0xb056) = 0;
  *(undefined2 *)((int)this + 0xb054) = 0;
  *(undefined4 *)((int)this + 0xb058) = 0;
  *(undefined4 *)((int)this + 0xb05c) = 0;
  *(undefined4 *)((int)this + 0xb060) = 0;
  *(undefined4 *)((int)this + 0xb064) = 0;
  *(undefined2 *)((int)this + 0xb068) = 0;
  *(undefined1 *)((int)this + 0xb06a) = 0;
  *(undefined4 *)((int)this + 0xb06c) = 0;
  *(undefined4 *)((int)this + 0xb070) = 0;
  *(undefined4 *)((int)this + 0xb074) = 0;
  *(undefined4 *)((int)this + 0x92e4) = 0;
  *(undefined4 *)((int)this + 0xb114) = 0;
  *(undefined4 *)((int)this + 0xb07c) = 0;
  *(undefined4 *)((int)this + 0xb080) = 0;
  *(undefined4 *)((int)this + 0xb084) = 0;
  *(undefined4 *)((int)this + 0xb088) = 0;
  *(undefined4 *)((int)this + 0xb08c) = 0;
  *(undefined4 *)((int)this + 0xb090) = 0;
  *(undefined4 *)((int)this + 0xb094) = 0;
  *(undefined4 *)((int)this + 0xb098) = 0;
  *(undefined4 *)((int)this + 0xb09c) = 0;
  *(undefined4 *)((int)this + 0xb0a0) = 0;
  *(undefined4 *)((int)this + 0xb0a4) = 0;
  *(undefined4 *)((int)this + 0xb0a8) = 0;
  *(undefined4 *)((int)this + 0xb0ac) = 0;
  *(undefined4 *)((int)this + 0xb0b0) = 0;
  *(undefined4 *)((int)this + 0xb0b4) = 0;
  *(undefined4 *)((int)this + 0xb0b8) = 0;
  *(undefined4 *)((int)this + 0xb0cc) = 0;
  *(undefined4 *)((int)this + 0xb0d0) = 0;
  pvVar1 = F_00c48350((undefined *)((int)this + 0xb0d4),0,0x40);
  return (uint)pvVar1;
}

/* ref: FUN_00a84a20 */
ushort F_00a84a20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa84a20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 0x168e) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: Client::UI::Misc::RaptureHotbarModule::ClearCallback::vf0 */
uint F_00a84a50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa84a50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e7874));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a84a90 */
uint F_00a84a90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa84a90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined2 *)((int)this + 4) = (undefined2)param_2;
  return (uint)this;
}

/* ref: FUN_00a84ad0 */
uint F_00a84ad0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa84ad0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x58) = param_1;
  *(undefined4 *)((int)this + 0x5c) = param_2;
  return param_1;
}

/* ref: FUN_00a84af0 */
byte F_00a84af0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa84af0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 99) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a84b00 */
byte F_00a84b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa84b00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xde) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a84b10 */
byte F_00a84b10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa84b10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xdb) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a84b20 */
byte F_00a84b20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa84b20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0xe0) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a84b30 */
byte F_00a84b30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa84b30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(byte *)((int)this + 0xdc) = (byte)param_1;
  *(undefined1 *)((int)this + 0xdd) = (undefined1)param_2;
  return (byte)param_1;
}

/* ref: FUN_00a84b50 */
byte F_00a84b50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa84b50u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x250) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a84b60 */
uint F_00a84b60(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa84b60u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  uint * puVar1;
  
  puVar1 = ((uint *)GEN_TOP(((int)this + (param_1 >> 2) * 4 + 0x25c)));
  *puVar1 = *puVar1 | (uint)(byte)param_2 << (('\x03' - ((byte)param_1 & 3)) * '\b' & 0x1f);
  return param_1 >> 2;
}

/* ref: FUN_00a84b90 */
ushort F_00a84b90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa84b90u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(ushort *)(in_ecx + 0x272 + param_2 * 2);
}

/* ref: FUN_00a84bb0 */
ushort F_00a84bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa84bb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(ushort *)(in_ecx + 0x296 + param_2 * 2);
}

/* ref: FUN_00a84bd0 */
byte F_00a84bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa84bd0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0x2ba + (int)this))) &
         (byte)(1 << ((char)param_1 + (char)(param_1 >> 3) * -8 & 0x1fU))) != 0;
}

/* ref: FUN_00a84c00 */
byte F_00a84c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa84c00u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0x2d3 + (int)this))) &
         (byte)(1 << ((char)param_1 + (char)(param_1 >> 3) * -8 & 0x1fU))) != 0;
}

/* ref: FUN_00a84ca0 */
uint F_00a84ca0(unsigned int gen_a0)
{
  GEN_ENTER(0xa84ca0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(byte *)((int)this + 10) = *(byte *)((int)this + 10) & 0xfc;
  *(undefined4 *)this = 9999;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined2 *)((int)this + 8) = 0;
  F_0042b630((int)this + 0x10);
  *(byte *)((int)this + 0x6e) = *(byte *)((int)this + 0x6e) & 0xfe;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined2 *)((int)this + 0x6c) = 0;
  return (uint)this;
}

/* ref: FUN_00a84d00 */
uint F_00a84d00(unsigned int gen_a0)
{
  GEN_ENTER(0xa84d00u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx);
  *(undefined4 *)(in_ecx + 0x54) = 0;
  *(undefined4 *)(in_ecx + 0x58) = 0;
  *(undefined2 *)(in_ecx + 0x5c) = 0;
  return in_ecx;
}

/* ref: FUN_00a84d40 */
uint F_00a84d40(unsigned int gen_a0)
{
  GEN_ENTER(0xa84d40u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 9999;
  *(undefined2 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 9999;
  *(undefined2 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 9999;
  *(undefined2 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 9999;
  *(undefined2 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 9999;
  *(undefined2 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 9999;
  *(undefined2 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 9999;
  *(undefined2 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 9999;
  *(undefined2 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined2 *)((int)this + 0x6c) = 0;
  *(undefined2 *)((int)this + 0x70) = 0;
  *(undefined1 *)((int)this + 0x72) = 0;
  F_00c48350(this,0,0x60);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  return (uint)this;
}

/* ref: FUN_00a84e00 */
uint F_00a84e00(unsigned int gen_a0)
{
  GEN_ENTER(0xa84e00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  uVar1 = F_0042c880((undefined *)((int)this + 0x10));
  return (uint)uVar1;
}

/* ref: FUN_00a84e10 */
uint F_00a84e10(unsigned int gen_a0)
{
  GEN_ENTER(0xa84e10u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042b630(this);
  *(undefined4 *)((int)this + 0x7c) = 0;
  *(undefined2 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x80) = 0;
  return (uint)this;
}

/* ref: FUN_00a84e80 */
uint F_00a84e80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa84e80u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined * pvVar1;
  uint uVar2;
  
  pvVar1 = (undefined *)(param_1 * 0xa8 + 0x60 + (int)this);
  if (*(char *)(param_1 * 0xa8 + 0x66 + (int)this) != '\0') {
    pvVar1 = (undefined *)F_00a3a860(pvVar1);
    uVar2 = F_0046e5e0(pvVar1);
    return uVar2;
  }
  uVar2 = *(uint *)((int)pvVar1 + 8);
  if ((*(byte *)((int)pvVar1 + 0x14) & 1) != 0) {
    uVar2 = uVar2 + 1000000;
  }
  return uVar2;
}

/* ref: FUN_00a84ec0 */
uint F_00a84ec0(unsigned int gen_a0)
{
  GEN_ENTER(0xa84ec0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  uVar1 = F_0042e430((undefined *)((int)this + 4),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined1 *)((int)this + 0x68) = 0;
  return uVar1;
}

/* ref: FUN_00a84ef0 */
uint F_00a84ef0(unsigned int gen_a0)
{
  GEN_ENTER(0xa84ef0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined2 *)((int)this + 0x10) = 0;
  *(undefined2 *)((int)this + 0xf0) = 0;
  *(undefined1 *)((int)this + 0x12) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  F_0042e430((undefined *)((int)this + 0xf8),&REFG(undefined1, 0x107fc63));
  F_0042e430((undefined *)((int)this + 0x14c),&REFG(undefined1, 0x107fc63));
  uVar1 = F_0042e430((undefined *)((int)this + 0x1a0),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 500) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  return uVar1;
}

/* ref: FUN_00a84fd0 */
unsigned int F_00a84fd0(unsigned int gen_a0)
{
  GEN_ENTER(0xa84fd0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined4 *)this = 0;
  F_0042e430((undefined *)((int)this + 4),&REFG(undefined1, 0x107fc63));
  F_0042e430((undefined *)((int)this + 0x58),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
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
  *(undefined4 *)((int)this + 0xb4) = 0;
  return 0;
}

/* ref: FUN_00a850a0 */
unsigned int F_00a850a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa850a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined1 *)this = 0;
  F_0042e430((undefined *)((int)this + 4),&REFG(undefined1, 0x107fc63));
  F_0042e430((undefined *)((int)this + 0x5c),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined2 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  return 0;
}

/* ref: FUN_00a85260 */
unsigned int F_00a85260(unsigned int gen_a0)
{
  GEN_ENTER(0xa85260u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  this_00 = (undefined *)((int)this + 100);
  iVar1 = 0x18;
  do {
    *(undefined1 *)((int)this_00 + -0x5c) = 0;
    F_0042e430((undefined *)((int)this_00 + -0x58),&REFG(undefined1, 0x107fc63));
    F_0042e430(this_00,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)this_00 + -4) = 0;
    *(undefined4 *)((int)this_00 + 0x58) = 0;
    *(undefined4 *)((int)this_00 + 0x54) = 0;
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(undefined4 *)((int)this_00 + 100) = 0;
    *(undefined4 *)((int)this_00 + 0x68) = 0;
    *(undefined2 *)((int)this_00 + 0x5c) = 0;
    *(undefined4 *)((int)this_00 + 0x6c) = 0;
    *(undefined4 *)((int)this_00 + 0x70) = 0;
    *(undefined4 *)((int)this_00 + 0x74) = 0;
    *(undefined4 *)((int)this_00 + 0x78) = 0;
    *(undefined4 *)((int)this_00 + 0x7c) = 0;
    *(undefined4 *)((int)this_00 + 0x80) = 0;
    *(undefined4 *)((int)this_00 + 0x84) = 0;
    *(undefined4 *)((int)this_00 + 0x88) = 0;
    *(undefined4 *)((int)this_00 + 0x8c) = 0;
    *(undefined4 *)((int)this_00 + 0x90) = 0;
    *(undefined4 *)((int)this_00 + 0x94) = 0;
    *(undefined4 *)((int)this_00 + 0x98) = 0;
    *(undefined4 *)((int)this_00 + 0x9c) = 0;
    *(undefined4 *)((int)this_00 + 0xa0) = 0;
    *(undefined4 *)((int)this_00 + 0xa4) = 0;
    *(undefined4 *)((int)this_00 + 0xa8) = 0;
    *(undefined4 *)((int)this_00 + 0xac) = 0;
    *(undefined4 *)((int)this_00 + 0xb0) = 0;
    *(undefined4 *)((int)this_00 + 0xb4) = 0;
    *(undefined4 *)((int)this_00 + 0xb8) = 0;
    *(undefined4 *)((int)this_00 + 0xbc) = 0;
    *(undefined4 *)((int)this_00 + 0xc0) = 0;
    *(undefined4 *)((int)this_00 + 0xc4) = 0;
    *(undefined4 *)((int)this_00 + 200) = 0;
    *(undefined4 *)((int)this_00 + 0xcc) = 0;
    *(undefined4 *)((int)this_00 + 0xd0) = 0;
    *(undefined4 *)((int)this_00 + 0xd4) = 0;
    *(undefined4 *)((int)this_00 + 0xd8) = 0;
    *(undefined4 *)((int)this_00 + 0xdc) = 0;
    *(undefined4 *)((int)this_00 + 0xe0) = 0;
    *(undefined4 *)((int)this_00 + 0xe4) = 0;
    *(undefined4 *)((int)this_00 + 0xe8) = 0;
    *(undefined4 *)((int)this_00 + 0xec) = 0;
    *(undefined4 *)((int)this_00 + 0xf0) = 0;
    *(undefined4 *)((int)this_00 + 0xf4) = 0;
    *(undefined4 *)((int)this_00 + 0xf8) = 0;
    *(undefined4 *)((int)this_00 + 0xfc) = 0;
    *(undefined4 *)((int)this_00 + 0x100) = 0;
    *(undefined4 *)((int)this_00 + 0x104) = 0;
    *(undefined4 *)((int)this_00 + 0x108) = 0;
    *(undefined4 *)((int)this_00 + 0x10c) = 0;
    *(undefined4 *)((int)this_00 + 0x110) = 0;
    *(undefined4 *)((int)this_00 + 0x114) = 0;
    *(undefined4 *)((int)this_00 + 0x118) = 0;
    *(undefined4 *)((int)this_00 + 0x11c) = 0;
    *(undefined4 *)((int)this_00 + 0x120) = 0;
    *(undefined4 *)((int)this_00 + 0x124) = 0;
    *(undefined4 *)((int)this_00 + 0x128) = 0;
    *(undefined4 *)((int)this_00 + 300) = 0;
    this_00 = (undefined *)((int)this_00 + 0x18c);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}

/* ref: FUN_00a85430 */
uint F_00a85430(unsigned int gen_a0)
{
  GEN_ENTER(0xa85430u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  *(undefined2 *)this = 0;
  this_00 = (undefined *)((int)this + 4);
  iVar2 = 0x18;
  do {
    uVar1 = F_0042e430(this_00,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)this_00 + 0x54) = 0;
    this_00 = (undefined *)((int)this_00 + 0x58);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00a85470 */
uint F_00a85470(unsigned int gen_a0)
{
  GEN_ENTER(0xa85470u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x1a0));
  F_0042c880((undefined *)((int)this + 0x14c));
  F_0042c880((undefined *)((int)this + 0xf8));
  F_0042c880((undefined *)((int)this + 0x9c));
  uVar1 = F_0042c880((undefined *)((int)this + 0x38));
  return (uint)uVar1;
}

/* ref: FUN_00a854b0 */
uint F_00a854b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa854b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x5c));
  uVar1 = F_0042c880((undefined *)((int)this + 4));
  return (uint)uVar1;
}

/* ref: FUN_00a854e0 */
uint F_00a854e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa854e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  uVar1 = F_0042e430((undefined *)((int)this + 4),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  return uVar1;
}

/* ref: FUN_00a85580 */
uint F_00a85580(unsigned int gen_a0)
{
  GEN_ENTER(0xa85580u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  
  *(undefined1 *)this = 0;
  F_0042e430((undefined *)((int)this + 4),&REFG(undefined1, 0x107fc63));
  uVar1 = F_0042e430((undefined *)((int)this + 0x5c),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xdc) = 0;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  *(undefined4 *)((int)this + 0x10c) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x128) = 0;
  *(undefined4 *)((int)this + 0x13c) = 0;
  *(undefined4 *)((int)this + 0x140) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  *(undefined4 *)((int)this + 0x158) = 0;
  *(undefined4 *)((int)this + 0x16c) = 0;
  *(undefined4 *)((int)this + 0x170) = 0;
  *(undefined4 *)((int)this + 0x184) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  *(undefined4 *)((int)this + 0xec) = 0;
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xfc) = 0;
  *(undefined4 *)((int)this + 0x100) = 0;
  *(undefined4 *)((int)this + 0x104) = 0;
  *(undefined4 *)((int)this + 0x108) = 0;
  *(undefined4 *)((int)this + 0x114) = 0;
  *(undefined4 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(undefined4 *)((int)this + 300) = 0;
  *(undefined4 *)((int)this + 0x130) = 0;
  *(undefined4 *)((int)this + 0x134) = 0;
  *(undefined4 *)((int)this + 0x138) = 0;
  *(undefined4 *)((int)this + 0x144) = 0;
  *(undefined4 *)((int)this + 0x148) = 0;
  *(undefined4 *)((int)this + 0x14c) = 0;
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x15c) = 0;
  *(undefined4 *)((int)this + 0x160) = 0;
  *(undefined4 *)((int)this + 0x164) = 0;
  *(undefined4 *)((int)this + 0x168) = 0;
  *(undefined4 *)((int)this + 0x174) = 0;
  *(undefined4 *)((int)this + 0x178) = 0;
  *(undefined4 *)((int)this + 0x17c) = 0;
  *(undefined4 *)((int)this + 0x180) = 0;
  *(undefined4 *)((int)this + 0x188) = 0;
  return uVar1;
}

/* ref: FUN_00a85730 */
uint F_00a85730(unsigned int gen_a0)
{
  GEN_ENTER(0xa85730u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int iVar2;
  
  *(undefined4 *)this = 0;
  this_00 = (undefined *)((int)this + 0x60);
  iVar2 = 0x18;
  do {
    *(undefined1 *)((int)this_00 + -0x5c) = 0;
    F_0042e430((undefined *)((int)this_00 + -0x58),&REFG(undefined1, 0x107fc63));
    uVar1 = F_0042e430(this_00,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)this_00 + -4) = 0;
    *(undefined4 *)((int)this_00 + 0x58) = 0;
    *(undefined4 *)((int)this_00 + 0x54) = 0;
    *(undefined4 *)((int)this_00 + 0x60) = 0;
    *(undefined4 *)((int)this_00 + 100) = 0;
    *(undefined4 *)((int)this_00 + 0x68) = 0;
    *(undefined4 *)((int)this_00 + 0x6c) = 0;
    *(undefined4 *)((int)this_00 + 0x70) = 0;
    *(undefined4 *)((int)this_00 + 0x74) = 0;
    *(undefined4 *)((int)this_00 + 0x78) = 0;
    *(undefined4 *)((int)this_00 + 0x7c) = 0;
    *(undefined4 *)((int)this_00 + 0x80) = 0;
    *(undefined4 *)((int)this_00 + 0x84) = 0;
    *(undefined4 *)((int)this_00 + 0x88) = 0;
    *(undefined4 *)((int)this_00 + 0x8c) = 0;
    *(undefined4 *)((int)this_00 + 0x90) = 0;
    *(undefined4 *)((int)this_00 + 0x94) = 0;
    *(undefined4 *)((int)this_00 + 0x98) = 0;
    *(undefined4 *)((int)this_00 + 0x9c) = 0;
    *(undefined4 *)((int)this_00 + 0xa0) = 0;
    *(undefined4 *)((int)this_00 + 0xa4) = 0;
    *(undefined4 *)((int)this_00 + 0xa8) = 0;
    *(undefined4 *)((int)this_00 + 0xac) = 0;
    *(undefined4 *)((int)this_00 + 0xb0) = 0;
    *(undefined4 *)((int)this_00 + 0xb4) = 0;
    *(undefined4 *)((int)this_00 + 0xb8) = 0;
    *(undefined4 *)((int)this_00 + 0xbc) = 0;
    *(undefined4 *)((int)this_00 + 0xc0) = 0;
    *(undefined4 *)((int)this_00 + 0xc4) = 0;
    *(undefined4 *)((int)this_00 + 200) = 0;
    *(undefined4 *)((int)this_00 + 0xcc) = 0;
    *(undefined4 *)((int)this_00 + 0xd0) = 0;
    *(undefined4 *)((int)this_00 + 0xd4) = 0;
    *(undefined4 *)((int)this_00 + 0xd8) = 0;
    *(undefined4 *)((int)this_00 + 0xdc) = 0;
    *(undefined4 *)((int)this_00 + 0xe0) = 0;
    *(undefined4 *)((int)this_00 + 0xe4) = 0;
    *(undefined4 *)((int)this_00 + 0xe8) = 0;
    *(undefined4 *)((int)this_00 + 0xec) = 0;
    *(undefined4 *)((int)this_00 + 0xf0) = 0;
    *(undefined4 *)((int)this_00 + 0xf4) = 0;
    *(undefined4 *)((int)this_00 + 0xf8) = 0;
    *(undefined4 *)((int)this_00 + 0xfc) = 0;
    *(undefined4 *)((int)this_00 + 0x100) = 0;
    *(undefined4 *)((int)this_00 + 0x104) = 0;
    *(undefined4 *)((int)this_00 + 0x108) = 0;
    *(undefined4 *)((int)this_00 + 0x10c) = 0;
    *(undefined4 *)((int)this_00 + 0x110) = 0;
    *(undefined4 *)((int)this_00 + 0x114) = 0;
    *(undefined4 *)((int)this_00 + 0x118) = 0;
    *(undefined4 *)((int)this_00 + 0x11c) = 0;
    *(undefined4 *)((int)this_00 + 0x120) = 0;
    *(undefined4 *)((int)this_00 + 0x124) = 0;
    *(undefined4 *)((int)this_00 + 0x128) = 0;
    *(undefined4 *)((int)this_00 + 300) = 0;
    this_00 = (undefined *)((int)this_00 + 0x18c);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}

/* ref: FUN_00a858e0 */
uint F_00a858e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa858e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint uVar1;
  undefined * this_00;
  int local_8;
  
  F_0042e430(this,&REFG(undefined1, 0x107fc63));
  F_0042e430((undefined *)((int)this + 0x54),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0x25e4) = 0;
  *(undefined4 *)((int)this + 0x25e8) = 0;
  *(undefined2 *)((int)this + 0x25e0) = 0;
  *(undefined4 *)((int)this + 0x25d4) = 0;
  *(undefined4 *)((int)this + 0x25d8) = 0;
  *(undefined4 *)((int)this + 0x25dc) = 0;
  *(undefined4 *)((int)this + 0xac) = 1;
  *(undefined4 *)((int)this + 0xb0) = 0;
  this_00 = (undefined *)((int)this + 0xb4);
  local_8 = 0x18;
  do {
    uVar1 = F_00a85580(this_00);
    this_00 = (undefined *)((int)this_00 + 0x18c);
    local_8 = local_8 + -1;
  } while (local_8 != 0);
  *(undefined4 *)((int)this + 0x25ec) = 0;
  *(undefined4 *)((int)this + 0x25f0) = 0;
  *(undefined4 *)((int)this + 0x2618) = 0;
  return uVar1;
}

/* ref: FUN_00a85980 */
uint F_00a85980(unsigned int gen_a0)
{
  GEN_ENTER(0xa85980u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x5c));
  uVar1 = F_0042c880((undefined *)((int)this + 4));
  return (uint)uVar1;
}

/* ref: FUN_00a859d0 */
unsigned int F_00a859d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa859d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)((int)this + 8) = 0xe0000000;
  *(undefined4 *)((int)this + 0xc) = 0;
  puVar2 = (undefined4 *)((int)this + 8);
  puVar3 = (undefined4 *)((int)this + 0x10);
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x78) = 0xe0000000;
  *(undefined4 *)((int)this + 0x7c) = 0xe0000000;
  *(undefined4 *)((int)this + 0x80) = 0xe0000000;
  *(undefined4 *)((int)this + 0x84) = 0xe0000000;
  *(undefined4 *)((int)this + 0x88) = 0xe0000000;
  *(undefined4 *)((int)this + 0x8c) = 0xe0000000;
  *(undefined4 *)((int)this + 0x90) = 0xe0000000;
  *(undefined4 *)((int)this + 0x94) = 0xe0000000;
  *(undefined4 *)((int)this + 0x98) = 0xe0000000;
  *(undefined4 *)((int)this + 0x9c) = 0xe0000000;
  *(undefined4 *)((int)this + 0xa0) = 0xe0000000;
  *(undefined4 *)((int)this + 0xa4) = 0xe0000000;
  *(undefined4 *)((int)this + 0xa8) = 0xe0000000;
  *(undefined4 *)((int)this + 0xac) = 0xe0000000;
  *(undefined4 *)((int)this + 0xb0) = 0xe0000000;
  *(undefined4 *)((int)this + 0xb4) = 0xe0000000;
  *(undefined4 *)((int)this + 0xb8) = 0xe0000000;
  *(undefined4 *)((int)this + 0xbc) = 0xe0000000;
  *(undefined4 *)((int)this + 0xc0) = 0xe0000000;
  *(undefined4 *)((int)this + 0xc4) = 0xe0000000;
  *(undefined4 *)((int)this + 200) = 0xe0000000;
  *(undefined4 *)((int)this + 0xcc) = 0xe0000000;
  *(undefined4 *)((int)this + 0xd0) = 0xe0000000;
  *(undefined4 *)((int)this + 0xd4) = 0xe0000000;
  *(undefined4 *)((int)this + 0xd8) = 0xe0000000;
  *(undefined4 *)((int)this + 0xdc) = 0xe0000000;
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  puVar2 = (undefined4 *)((int)this + 0xe0);
  puVar3 = (undefined4 *)((int)this + 0xe8);
  for (iVar1 = 0x1a; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x150) = 0;
  *(undefined4 *)((int)this + 0x154) = 0;
  puVar2 = (undefined4 *)((int)this + 0x150);
  puVar3 = (undefined4 *)((int)this + 0x158);
  for (iVar1 = 0x32; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x220) = 0;
  *(undefined4 *)((int)this + 0x224) = 0;
  return 0;
}

/* ref: FUN_00a85af0 */
uint F_00a85af0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa85af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + param_1 * 8 + 8) = param_2;
  *(undefined4 *)((int)this + param_1 * 8 + 0xc) = param_3;
  return param_1;
}

/* ref: FUN_00a85b10 */
uint F_00a85b10(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa85b10u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  uint param_2 = (uint)gen_a2;
  *(uint *)((int)this + param_1 * 4 + 0x78) = param_2;
  return param_2;
}

/* ref: FUN_00a85b30 */
uint F_00a85b30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa85b30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)((int)this + param_1 * 8 + 0xe0);
}

/* ref: FUN_00a85b50 */
uint F_00a85b50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa85b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + param_1 * 8 + 0xe0) = param_2;
  *(undefined4 *)((int)this + param_1 * 8 + 0xe4) = param_3;
  return param_1;
}

/* ref: FUN_00a85b70 */
uint F_00a85b70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa85b70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(uint *)((int)this + param_1 * 8 + 0x150);
}

/* ref: FUN_00a85b90 */
uint F_00a85b90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa85b90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)((int)this + param_1 * 8 + 0x150) = param_2;
  *(undefined4 *)((int)this + param_1 * 8 + 0x154) = param_3;
  return param_1;
}

/* ref: FUN_00a85bc0 */
uint F_00a85bc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa85bc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(uint *)((int)this + 0x220) = param_1;
  *(undefined4 *)((int)this + 0x224) = param_2;
  return param_1;
}

/* ref: FUN_00a85c00 */
byte F_00a85c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa85c00u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 4) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a85c10 */
ushort F_00a85c10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa85c10u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(ushort *)(in_ecx + 6) = (ushort)param_2;
  return (ushort)param_2;
}

/* ref: FUN_00a85c20 */
byte F_00a85c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa85c20u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 8) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a85c80 */
byte F_00a85c80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa85c80u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  int param_2 = (int)gen_a1;
  return *(byte *)(param_2 + 4 + in_ecx);
}

/* ref: FUN_00a85c90 */
byte F_00a85c90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa85c90u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(byte *)(param_1 + 4 + (int)this) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a85cb0 */
byte F_00a85cb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa85cb0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x24) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a85cc0 */
byte F_00a85cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa85cc0u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *(byte *)(in_ecx + 0x25) = (byte)param_2;
  return (byte)param_2;
}

/* ref: FUN_00a85d60 */
byte F_00a85d60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa85d60u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  byte bVar1;
  
  bVar1 = (*(byte *)(in_ecx + 0x32) ^ (byte)param_2) & 1;
  *(byte *)(in_ecx + 0x32) = *(byte *)(in_ecx + 0x32) ^ bVar1;
  return bVar1;
}

/* ref: FUN_00a85d90 */
uint F_00a85d90(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa85d90u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  return (uint)this;
}

/* ref: FUN_00a85e70 */
uint F_00a85e70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa85e70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)((int)this + 0x1888) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a85e90 */
uint F_00a85e90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa85e90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a1;
  *(undefined2 *)((int)this + 0x188a) = *param_1;
  return (uint)param_1;
}

/* ref: FUN_00a85eb0 */
uint F_00a85eb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa85eb0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  *(undefined2 *)((int)this + 4) = *(undefined2 *)(param_1 + 4);
  *(undefined1 *)((int)this + 6) = *(undefined1 *)(param_1 + 6);
  *(undefined2 *)((int)this + 8) = *(undefined2 *)(param_1 + 8);
  *(undefined2 *)((int)this + 10) = *(undefined2 *)(param_1 + 10);
  *(undefined1 *)((int)this + 0xc) = *(undefined1 *)(param_1 + 0xc);
  return (uint)this;
}

/* ref: FUN_00a85f80 */
uint F_00a85f80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa85f80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 < 0x10) {
    *(undefined1 *)(param_1 + 0xb080 + (int)this) = (undefined1)param_2;
  }
  return param_1;
}

/* ref: FUN_00a85fa0 */
uint F_00a85fa0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa85fa0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 < 0xc) {
    *(undefined1 *)(param_1 + 0xb090 + (int)this) = (undefined1)param_2;
  }
  return param_1;
}

/* ref: FUN_00a85fc0 */
uint F_00a85fc0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa85fc0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 < 8) {
    *(undefined1 *)(param_1 + 0xb0cc + (int)this) = (undefined1)param_2;
  }
  return param_1;
}

/* ref: FUN_00a85fe0 */
uint F_00a85fe0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa85fe0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 < 0x40) {
    *(undefined1 *)(param_1 + 0xb0d4 + (int)this) = (undefined1)param_2;
  }
  return param_1;
}

/* ref: FUN_00a86000 */
byte F_00a86000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86000u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  return (*((byte *)GEN_TOP(((param_1 >> 3) + 0xb0d4 + (int)this))) & (byte)(1 << ((byte)param_1 & 7))) != 0;
}

/* ref: FUN_00a86030 */
uint F_00a86030(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa86030u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 < 0x20) {
    *(undefined1 *)(param_1 + 0xb09c + (int)this) = (undefined1)param_2;
  }
  return param_1;
}

/* ref: FUN_00a86050 */
uint F_00a86050(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa86050u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  if (param_1 < 0x10) {
    *(undefined1 *)(param_1 + 0xb0bc + (int)this) = (undefined1)param_2;
  }
  return param_1;
}

/* ref: FUN_00a860f0 */
uint F_00a860f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa860f0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0xbc));
  F_0042c880((undefined *)((int)this + 0x60));
  uVar1 = F_0042c880(this);
  return (uint)uVar1;
}

/* ref: FUN_00a86110 */
uint F_00a86110(unsigned int gen_a0)
{
  GEN_ENTER(0xa86110u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  ulonglong uVar1;
  
  F_0042c880((undefined *)((int)this + 0x58));
  uVar1 = F_0042c880((undefined *)((int)this + 4));
  return (uint)uVar1;
}

/* ref: FUN_00a86130 */
uint F_00a86130(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86130u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  return (uint)this;
}

/* ref: FUN_00a86160 */
uint F_00a86160(unsigned int gen_a0)
{
  GEN_ENTER(0xa86160u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  ulonglong uVar2;
  
  F_0042c880((undefined *)((int)this + 900));
  iVar1 = 7;
  this_00 = (undefined *)((int)this + 0x390);
  do {
    this_00 = (undefined *)((int)this_00 + -0x70);
    uVar2 = F_0042c880(this_00);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return (uint)uVar2;
}

/* ref: FUN_00a861a0 */
uint F_00a861a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa861a0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  F_0042cbc0((undefined *)((int)this + 0x10),param_1 + 4);
  *(undefined4 *)((int)this + 100) = param_1[0x19];
  *(undefined4 *)((int)this + 0x68) = param_1[0x1a];
  *(undefined1 *)((int)this + 0x6c) = *(undefined1 *)(param_1 + 0x1b);
  *(undefined1 *)((int)this + 0x6d) = *(undefined1 *)((int)param_1 + 0x6d);
  *(byte *)((int)this + 0x6e) =
       *(byte *)((int)this + 0x6e) ^
       (*(byte *)((int)param_1 + 0x6e) ^ *(byte *)((int)this + 0x6e)) & 1;
  return (uint)this;
}

/* ref: FUN_00a86260 */
uint F_00a86260(unsigned int gen_a0)
{
  GEN_ENTER(0xa86260u, gen_a0, 0u, 0u, 0u);
  uint in_ecx = (uint)gen_a0;
  F_0042b630(in_ecx + 4);
  return in_ecx;
}

/* ref: Client::Game::UI::Revive::vf0 */
uint F_00a86290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10904d0));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a863e0 */
uint F_00a863e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa863e0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x11c + *in_ecx;
}

/* ref: FUN_00a86430 */
uint F_00a86430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86430u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x11c + *in_ecx;
}

/* ref: FUN_00a86470 */
uint F_00a86470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86470u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  return param_2 * 0x2624 + *in_ecx;
}

/* ref: FUN_00a864a0 */
uint F_00a864a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa864a0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  *in_ecx = (*(undefined * PTR32 (*)[3])REFP(0x10e7894));
  in_ecx[1] = param_2;
  return (uint)in_ecx;
}

/* ref: ListenItemCallback_VQuestTodoList_UI_Game_Client_Event::vf1 */
uint F_00a864d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa864d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  int in_ecx = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  undefined4 param_4 = (undefined4)gen_a3;
  undefined4 param_5 = (undefined4)gen_a4;
  uint uVar1;
  
  uVar1 = *(uint *)(in_ecx + 4);
  *(undefined1 *)(uVar1 + 0x1dc) = 1;
  return uVar1;
}

/* ref: ListenItemCallback_VQuestTodoList_UI_Game_Client_Event::vf2 */
byte F_00a864e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa864e0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  return *(int *)((int)this + 4) == *(int *)(param_1 + 4);
}

/* ref: FUN_00a86510 */
uint F_00a86510(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa86510u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10e78a4));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VGatheringNotebook_UI_Game_Client_Game::vf1 */
uint F_00a86550(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa86550u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00a86570 */
uint F_00a86570(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa86570u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e78b0));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VJournal_UI_Game_Client_Game::vf1 */
uint F_00a865b0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa865b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00a865f0 */
uint F_00a865f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa865f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10e78bc));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VRecipeNotebook_UI_Game_Client_Game::vf1 */
uint F_00a86630(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa86630u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00a86650 */
uint F_00a86650(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa86650u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  F_00cb4700(this,param_2,param_3);
  *(undefined4 *)((int)this + 0x14) = param_2;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e78c8));
  *(undefined4 *)((int)this + 0x18) = param_1;
  return (uint)this;
}

/* ref: FUN_00a86680 */
uint F_00a86680(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa86680u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e78d4))
  ;
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VQuestTodoList_UI_Game_Client_Game::vf1 */
uint F_00a866c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa866c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00a866e0 */
uint F_00a866e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa866e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e78e0));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VQuestUI_UI_Game_Client_Game::vf1 */
uint F_00a86720(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa86720u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00a86760 */
byte F_00a86760(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86760u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00a86780 */
byte F_00a86780(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86780u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00a867a0 */
uint F_00a867a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa867a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e78ec));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VMap_UI_Game_Client_Game::vf1 */
uint F_00a867e0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa867e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00a86800 */
uint F_00a86800(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa86800u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10e78f8));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VGuildOrderReward_UI_Game_Client_Game::vf1 */
uint F_00a86840(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa86840u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00a86860 */
uint F_00a86860(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa86860u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this =
       (*(undefined * PTR32 (*)[2])REFP(0x10e7904));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VFishingNotebook_UI_Game_Client_Game::vf1 */
uint F_00a868a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa868a0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00a868c0 */
uint F_00a868c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa868c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e7910));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VFishingGuide_UI_Game_Client_Game::vf1 */
uint F_00a86900(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa86900u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: FUN_00a86920 */
uint F_00a86920(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4)
{
  GEN_ENTER(0xa86920u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  undefined4 param_4 = (undefined4)gen_a4;
  F_00cb4700(this,param_3,param_4);
  *(undefined4 *)((int)this + 0x14) = param_3;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x10e791c));
  *(undefined4 *)((int)this + 0x18) = param_1;
  *(undefined4 *)((int)this + 0x1c) = param_2;
  return (uint)this;
}

/* ref: CallbackSheetWaiter_VFishRecord_UI_Game_Client_Game::vf1 */
uint F_00a86960(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3)
{
  GEN_ENTER(0xa86960u, gen_a0, gen_a1, gen_a2, gen_a3);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  undefined4 param_3 = (undefined4)gen_a3;
  uint uVar1;
  
  uVar1 = ((code *)*(gen_code32 *)((int)this + 0x1c))(*(undefined4 *)((int)this + 0x18),param_2,param_1,param_3)
  ;
  return uVar1;
}

/* ref: ListenItemCallback_VQuestTodoList_UI_Game_Client_Event::vf0 */
uint F_00a86980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86980u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[3])REFP(0x10b8194));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: SheetWaiter_VScenarioTextReader_UI_Game_Client_Game::vf0 */
uint F_00a869b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa869b0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_00cb4870(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a86a90 */
uint F_00a86a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86a90u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a86ae0 */
uint F_00a86ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86ae0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a86b40 */
uint F_00a86b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86b40u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a86bf0 */
uint F_00a86bf0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa86bf0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a86c30 */
uint F_00a86c30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86c30u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a86c90 */
uint F_00a86c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86c90u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x14,param_2,0x191);
  return uVar1;
}

/* ref: FUN_00a86cc0 */
uint F_00a86cc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86cc0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x14,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a86cf0 */
uint F_00a86cf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86cf0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a86d40 */
uint F_00a86d40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86d40u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a86d90 */
uint F_00a86d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86d90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x11c,800);
  return (uint)uVar1;
}

/* ref: FUN_00a86dc0 */
uint F_00a86dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xa86dc0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xe0;
}

/* ref: FUN_00a86dd0 */
uint F_00a86dd0(unsigned int gen_a0)
{
  GEN_ENTER(0xa86dd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0xe1)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0xe1);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00a86e20 */
uint F_00a86e20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86e20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xe4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a86e50 */
uint F_00a86e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86e50u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a86ee0 */
uint F_00a86ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86ee0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x74,param_2,800);
  return uVar1;
}

/* ref: FUN_00a86f10 */
uint F_00a86f10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86f10u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a86f80 */
uint F_00a86f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86f80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x74,param_2,800);
  return uVar1;
}

/* ref: FUN_00a86fa0 */
uint F_00a86fa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa86fa0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a87010 */
uint F_00a87010(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87010u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x74,param_2,800);
  return uVar1;
}

/* ref: FUN_00a87040 */
uint F_00a87040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87040u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a870e0 */
uint F_00a870e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa870e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a870f0 */
uint F_00a870f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa870f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00a87120 */
uint F_00a87120(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87120u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x78,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87170 */
uint F_00a87170(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87170u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,800);
  return uVar1;
}

/* ref: FUN_00a871c0 */
uint F_00a871c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa871c0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint param_2 = (uint)gen_a1;
  if ((param_2 < in_ecx[1]) && (*in_ecx <= param_2)) {
    return 1;
  }
  return 0;
}

/* ref: FUN_00a87220 */
uint F_00a87220(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87220u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xc,param_2,400);
  return uVar1;
}

/* ref: FUN_00a87250 */
uint F_00a87250(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87250u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,400);
  return (uint)uVar1;
}

/* ref: FUN_00a872f0 */
uint F_00a872f0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa872f0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a87380 */
uint F_00a87380(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa87380u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 param_1 = (undefined4)gen_a1;
  undefined4 param_2 = (undefined4)gen_a2;
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  return (uint)this;
}

/* ref: FUN_00a873a0 */
uint F_00a873a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa873a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a873d0 */
byte F_00a873d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa873d0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this == *param_1;
}

/* ref: FUN_00a87430 */
uint F_00a87430(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87430u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 2,0);
  return (uint)uVar1;
}

/* ref: FUN_00a87480 */
uint F_00a87480(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87480u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a874f0 */
uint F_00a874f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa874f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x88,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a87540 */
uint F_00a87540(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87540u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x28,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a87590 */
uint F_00a87590(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87590u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x24,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a875e0 */
uint F_00a875e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa875e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x18,0x191);
  return (uint)uVar1;
}

/* ref: FUN_00a87650 */
uint F_00a87650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87650u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x11c,param_2,800);
  return uVar1;
}

/* ref: FUN_00a876e0 */
uint F_00a876e0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa876e0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x11c,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87730 */
uint F_00a87730(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87730u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x74,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87770 */
uint F_00a87770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87770u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x74,800);
  return (uint)uVar1;
}

/* ref: FUN_00a877a0 */
uint F_00a877a0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa877a0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,800);
  return uVar1;
}

/* ref: FUN_00a877d0 */
uint F_00a877d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa877d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87850 */
uint F_00a87850(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87850u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87890 */
uint F_00a87890(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87890u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x74,800);
  return (uint)uVar1;
}

/* ref: FUN_00a878c0 */
uint F_00a878c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa878c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,800);
  return uVar1;
}

/* ref: FUN_00a878f0 */
uint F_00a878f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa878f0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87980 */
uint F_00a87980(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87980u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x2624,800);
  return (uint)uVar1;
}

/* ref: FUN_00a879d0 */
uint F_00a879d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa879d0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x74,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87a00 */
uint F_00a87a00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87a00u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,800);
  return uVar1;
}

/* ref: FUN_00a87a30 */
uint F_00a87a30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87a30u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87aa0 */
uint F_00a87aa0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87aa0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x34,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87ae0 */
uint F_00a87ae0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87ae0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x24,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87b10 */
uint F_00a87b10(unsigned int gen_a0)
{
  GEN_ENTER(0xa87b10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x29;
}

/* ref: FUN_00a87b20 */
uint F_00a87b20(unsigned int gen_a0)
{
  GEN_ENTER(0xa87b20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a87b30 */
uint F_00a87b30(unsigned int gen_a0)
{
  GEN_ENTER(0xa87b30u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 4;
}

/* ref: FUN_00a87b40 */
uint F_00a87b40(unsigned int gen_a0)
{
  GEN_ENTER(0xa87b40u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00a87b50 */
uint F_00a87b50(unsigned int gen_a0)
{
  GEN_ENTER(0xa87b50u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0xc;
}

/* ref: FUN_00a87b80 */
uint F_00a87b80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87b80u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x2c,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87ba0 */
uint F_00a87ba0(unsigned int gen_a0)
{
  GEN_ENTER(0xa87ba0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 8;
}

/* ref: FUN_00a87bd0 */
uint F_00a87bd0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87bd0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x78,param_2,800);
  return uVar1;
}

/* ref: FUN_00a87c20 */
uint F_00a87c20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87c20u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0xc,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87c60 */
uint F_00a87c60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87c60u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,800);
  return uVar1;
}

/* ref: FUN_00a87c90 */
uint F_00a87c90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87c90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 4,800);
  return (uint)uVar1;
}

/* ref: FUN_00a87ce0 */
uint F_00a87ce0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa87ce0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a87de0 */
uint F_00a87de0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87de0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 2,param_2,0);
  return uVar1;
}

/* ref: FUN_00a87e10 */
uint F_00a87e10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87e10u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 4,param_2,800);
  return uVar1;
}

/* ref: FUN_00a87e50 */
uint F_00a87e50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87e50u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x88,param_2,0x191);
  return uVar1;
}

/* ref: FUN_00a87e90 */
uint F_00a87e90(unsigned int gen_a0)
{
  GEN_ENTER(0xa87e90u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x24;
}

/* ref: FUN_00a87ea0 */
uint F_00a87ea0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87ea0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x28,param_2,0x191);
  return uVar1;
}

/* ref: FUN_00a87ed0 */
uint F_00a87ed0(unsigned int gen_a0)
{
  GEN_ENTER(0xa87ed0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x20;
}

/* ref: FUN_00a87ee0 */
uint F_00a87ee0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87ee0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x24,param_2,0x191);
  return uVar1;
}

/* ref: FUN_00a87f10 */
uint F_00a87f10(unsigned int gen_a0)
{
  GEN_ENTER(0xa87f10u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x14;
}

/* ref: FUN_00a87f20 */
uint F_00a87f20(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87f20u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x18,param_2,0x191);
  return uVar1;
}

/* ref: FUN_00a87f50 */
byte F_00a87f50(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87f50u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return *(int *)this != *param_1;
}

/* ref: FUN_00a87f80 */
uint F_00a87f80(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87f80u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0xe4,param_2,800);
  return uVar1;
}

/* ref: FUN_00a87fb0 */
uint F_00a87fb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa87fb0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x11c,param_2,800);
  return uVar1;
}

/* ref: FUN_00a87ff0 */
uint F_00a87ff0(unsigned int gen_a0)
{
  GEN_ENTER(0xa87ff0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x70;
}

/* ref: FUN_00a88000 */
uint F_00a88000(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88000u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x74,param_2,800);
  return uVar1;
}

/* ref: FUN_00a88030 */
uint F_00a88030(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88030u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1,param_2,800);
  return uVar1;
}

/* ref: FUN_00a88070 */
uint F_00a88070(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88070u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x2624,param_2,800);
  return uVar1;
}

/* ref: FUN_00a880c0 */
uint F_00a880c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa880c0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x34,param_2,800);
  return uVar1;
}

/* ref: FUN_00a880f0 */
uint F_00a880f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa880f0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x20;
}

/* ref: FUN_00a88100 */
uint F_00a88100(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88100u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x24,param_2,800);
  return uVar1;
}

/* ref: FUN_00a88130 */
uint F_00a88130(unsigned int gen_a0)
{
  GEN_ENTER(0xa88130u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x28;
}

/* ref: FUN_00a88140 */
uint F_00a88140(unsigned int gen_a0)
{
  GEN_ENTER(0xa88140u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x29)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x29);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00a88160 */
uint F_00a88160(unsigned int gen_a0)
{
  GEN_ENTER(0xa88160u, gen_a0, 0u, 0u, 0u);
  int * param_1 = (int *)(uintptr_t)gen_a0;
  char cVar1;
  int * piVar2;
  int * piVar3;
  int * piVar4;
  
  cVar1 = *(char *)(*param_1 + 0x29);
  piVar2 = (int *)*param_1;
  piVar4 = param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0x29);
    piVar4 = piVar3;
  }
  return (uint)piVar4;
}

/* ref: FUN_00a88180 */
uint F_00a88180(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88180u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x2c,param_2,800);
  return uVar1;
}

/* ref: FUN_00a881b0 */
uint F_00a881b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa881b0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2;
    *in_ecx = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00a881d0 */
uint F_00a881d0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa881d0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2;
    *in_ecx = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00a881f0 */
uint F_00a881f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa881f0u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2;
    *in_ecx = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00a88230 */
uint F_00a88230(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88230u, gen_a0, gen_a1, 0u, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  int param_2 = (int)gen_a1;
  ulonglong uVar1;
  
  uVar1 = F_00429760(param_1,param_2 * 0x24,800);
  return (uint)uVar1;
}

/* ref: FUN_00a88260 */
uint F_00a88260(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa88260u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a88270 */
uint F_00a88270(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa88270u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a88280 */
uint F_00a88280(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa88280u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a88290 */
uint F_00a88290(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa88290u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a882a0 */
uint F_00a882a0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa882a0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  undefined4 param_3 = (undefined4)gen_a2;
  *in_ecx = param_2;
  return (uint)in_ecx;
}

/* ref: FUN_00a882c0 */
uint F_00a882c0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa882c0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint * param_1 = (uint *)(uintptr_t)gen_a1;
  uint * puVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = *(uint *)(uVar2 + 8);
  if (*((char *)GEN_TOP((*(int *)(uVar2 + 8) + 0x25))) == '\0') {
    *((uint * PTR32 *)GEN_TOP((*(int *)(uVar2 + 8) + 4))) = param_1;
  }
  *(uint *)(uVar2 + 4) = param_1[1];
  if (param_1 == *((uint * PTR32 *)GEN_TOP((*(int *)((int)this + 4) + 4)))) {
    *((uint *)GEN_TOP((*(int *)((int)this + 4) + 4))) = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  puVar1 = (uint *)param_1[1];
  if (param_1 == (uint *)puVar1[2]) {
    puVar1[2] = uVar2;
    *(uint * PTR32 *)(uVar2 + 8) = param_1;
    param_1[1] = uVar2;
    return uVar2;
  }
  *puVar1 = uVar2;
  *(uint * PTR32 *)(uVar2 + 8) = param_1;
  param_1[1] = uVar2;
  return uVar2;
}

/* ref: FUN_00a88320 */
uint F_00a88320(unsigned int gen_a0)
{
  GEN_ENTER(0xa88320u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x25)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x25);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00a88350 */
uint F_00a88350(unsigned int gen_a0)
{
  GEN_ENTER(0xa88350u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00a88380 */
uint F_00a88380(unsigned int gen_a0)
{
  GEN_ENTER(0xa88380u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00a883a0 */
uint F_00a883a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa883a0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00a883e0 */
uint F_00a883e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa883e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  cVar1 = *((char *)GEN_TOP((*(uint *)(param_1 + 8) + 0x71)));
  uVar2 = *(uint *)(param_1 + 8);
  uVar4 = param_1;
  while (uVar3 = uVar2, cVar1 == '\0') {
    uVar2 = *(uint *)(uVar3 + 8);
    cVar1 = *(char *)(uVar2 + 0x71);
    uVar4 = uVar3;
  }
  return uVar4;
}

/* ref: FUN_00a88410 */
uint F_00a88410(unsigned int gen_a0)
{
  GEN_ENTER(0xa88410u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00a88430 */
uint F_00a88430(unsigned int gen_a0)
{
  GEN_ENTER(0xa88430u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00a88470 */
uint F_00a88470(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88470u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x34;
  return (uint)in_ecx;
}

/* ref: FUN_00a884a0 */
uint F_00a884a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa884a0u, gen_a0, 0u, 0u, 0u);
  int param_1 = (int)gen_a0;
  return param_1 + 0x20;
}

/* ref: FUN_00a884b0 */
uint F_00a884b0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa884b0u, gen_a0, gen_a1, 0u, 0u);
  int param_1 = (int)gen_a0;
  undefined4 param_2 = (undefined4)gen_a1;
  uint uVar1;
  
  uVar1 = F_004296a0(param_1 * 0x24,param_2,800);
  return uVar1;
}

/* ref: FUN_00a884e0 */
unsigned int F_00a884e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa884e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  int iVar2;
  int * piVar3;
  int * piVar4;
  
  iVar2 = *(int *)this;
  if (*(char *)(iVar2 + 0x29) == '\0') {
    piVar3 = *(int * PTR32 *)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0x29) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0x29);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0x29);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *(int * PTR32 *)this = piVar3;
      return 0;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0x29);
    while ((cVar1 == '\0' && (*(int *)this == *(int *)(iVar2 + 8)))) {
      *(int *)this = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0x29);
    }
    *(int *)this = iVar2;
  }
  return 0;
}

/* ref: FUN_00a88560 */
uint F_00a88560(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88560u, gen_a0, gen_a1, 0u, 0u);
  uint * in_ecx = (uint *)(uintptr_t)gen_a0;
  uint * param_2 = (uint *)(uintptr_t)gen_a1;
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 != (uint *)0x0) {
    uVar1 = *param_2;
    *in_ecx = uVar1;
  }
  return uVar1;
}

/* ref: FUN_00a88580 */
unsigned int F_00a88580(unsigned int gen_a0)
{
  GEN_ENTER(0xa88580u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00a885d0 */
uint F_00a885d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa885d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a885e0 */
uint F_00a885e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa885e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a885f0 */
uint F_00a885f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa885f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88610 */
uint F_00a88610(unsigned int gen_a0)
{
  GEN_ENTER(0xa88610u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00a88630 */
uint F_00a88630(unsigned int gen_a0)
{
  GEN_ENTER(0xa88630u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00a88660 */
unsigned int F_00a88660(unsigned int gen_a0)
{
  GEN_ENTER(0xa88660u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00a886b0 */
uint F_00a886b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa886b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a886c0 */
uint F_00a886c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa886c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a886d0 */
unsigned int F_00a886d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa886d0u, gen_a0, 0u, 0u, 0u);
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

/* ref: FUN_00a88720 */
uint F_00a88720(unsigned int gen_a0)
{
  GEN_ENTER(0xa88720u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88730 */
uint F_00a88730(unsigned int gen_a0)
{
  GEN_ENTER(0xa88730u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88740 */
uint F_00a88740(unsigned int gen_a0)
{
  GEN_ENTER(0xa88740u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88750 */
uint F_00a88750(unsigned int gen_a0)
{
  GEN_ENTER(0xa88750u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88760 */
uint F_00a88760(unsigned int gen_a0)
{
  GEN_ENTER(0xa88760u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88770 */
uint F_00a88770(unsigned int gen_a0)
{
  GEN_ENTER(0xa88770u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88780 */
uint F_00a88780(unsigned int gen_a0)
{
  GEN_ENTER(0xa88780u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88790 */
uint F_00a88790(unsigned int gen_a0)
{
  GEN_ENTER(0xa88790u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a887a0 */
uint F_00a887a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa887a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a887b0 */
uint F_00a887b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa887b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a887c0 */
uint F_00a887c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa887c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a887d0 */
uint F_00a887d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa887d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a887e0 */
uint F_00a887e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa887e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a887f0 */
uint F_00a887f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa887f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88800 */
uint F_00a88800(unsigned int gen_a0)
{
  GEN_ENTER(0xa88800u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88810 */
uint F_00a88810(unsigned int gen_a0)
{
  GEN_ENTER(0xa88810u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88820 */
uint F_00a88820(unsigned int gen_a0)
{
  GEN_ENTER(0xa88820u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88830 */
uint F_00a88830(unsigned int gen_a0)
{
  GEN_ENTER(0xa88830u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88860 */
uint F_00a88860(unsigned int gen_a0)
{
  GEN_ENTER(0xa88860u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a888b0 */
uint F_00a888b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa888b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a888c0 */
uint F_00a888c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa888c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a888d0 */
uint F_00a888d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa888d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88900 */
uint F_00a88900(unsigned int gen_a0)
{
  GEN_ENTER(0xa88900u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88910 */
uint F_00a88910(unsigned int gen_a0)
{
  GEN_ENTER(0xa88910u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88920 */
uint F_00a88920(unsigned int gen_a0)
{
  GEN_ENTER(0xa88920u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88950 */
uint F_00a88950(unsigned int gen_a0)
{
  GEN_ENTER(0xa88950u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a889a0 */
uint F_00a889a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa889a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a889f0 */
uint F_00a889f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa889f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88a00 */
uint F_00a88a00(unsigned int gen_a0)
{
  GEN_ENTER(0xa88a00u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88a10 */
uint F_00a88a10(unsigned int gen_a0)
{
  GEN_ENTER(0xa88a10u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88a20 */
uint F_00a88a20(unsigned int gen_a0)
{
  GEN_ENTER(0xa88a20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88a40 */
uint F_00a88a40(unsigned int gen_a0)
{
  GEN_ENTER(0xa88a40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a88a70 */
uint F_00a88a70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88a70u, gen_a0, gen_a1, 0u, 0u);
  undefined2 * param_1 = (undefined2 *)(uintptr_t)gen_a0;
  undefined2 * param_2 = (undefined2 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined2 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00a88a90 */
uint F_00a88a90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88a90u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00a88ac0 */
uint F_00a88ac0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88ac0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    param_1[3] = param_2[3];
    param_1[4] = param_2[4];
  }
  return (uint)param_1;
}

/* ref: FUN_00a88b00 */
uint F_00a88b00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88b00u, gen_a0, gen_a1, 0u, 0u);
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined1 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00a88b40 */
unsigned int F_00a88b40(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88b40u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    puVar2 = param_2;
    puVar3 = param_1;
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return 0;
}

/* ref: FUN_00a88b60 */
uint F_00a88b60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88b60u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return (uint)param_1;
}

/* ref: FUN_00a88bb0 */
uint F_00a88bb0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88bb0u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
  }
  return (uint)param_1;
}

/* ref: FUN_00a88bf0 */
uint F_00a88bf0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88bf0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  F_0042cbc0(this,param_1);
  puVar2 = (undefined4 *)(param_1 + 0x54);
  puVar3 = (undefined4 *)((int)this + 0x54);
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)((int)this + 0x7c) = *(undefined2 *)(param_1 + 0x7c);
  *(undefined2 *)((int)this + 0x7e) = *(undefined2 *)(param_1 + 0x7e);
  *(undefined2 *)((int)this + 0x80) = *(undefined2 *)(param_1 + 0x80);
  *(undefined1 *)((int)this + 0x82) = *(undefined1 *)(param_1 + 0x82);
  *(undefined1 *)((int)this + 0x83) = *(undefined1 *)(param_1 + 0x83);
  *(undefined1 *)((int)this + 0x84) = *(undefined1 *)(param_1 + 0x84);
  *(undefined1 *)((int)this + 0x85) = *(undefined1 *)(param_1 + 0x85);
  return (uint)this;
}

/* ref: FUN_00a88c70 */
uint F_00a88c70(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88c70u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042cbc0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined1 *)((int)this + 0x58) = *(undefined1 *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  F_0042cbc0((undefined *)((int)this + 0x60),param_1 + 0x60);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  F_0042cbc0((undefined *)((int)this + 0xbc),param_1 + 0xbc);
  *(undefined4 *)((int)this + 0x110) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)((int)this + 0x114) = *(undefined4 *)(param_1 + 0x114);
  *(undefined1 *)((int)this + 0x118) = *(undefined1 *)(param_1 + 0x118);
  *(undefined1 *)((int)this + 0x119) = *(undefined1 *)(param_1 + 0x119);
  return (uint)this;
}

/* ref: FUN_00a88d10 */
uint F_00a88d10(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88d10u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined4 *)this = *param_1;
  F_0042cbc0((undefined *)((int)this + 4),param_1 + 1);
  F_0042cbc0((undefined *)((int)this + 0x58),param_1 + 0x16);
  *(undefined4 *)((int)this + 0xac) = param_1[0x2b];
  *(undefined4 *)((int)this + 0xb0) = param_1[0x2c];
  *(undefined4 *)((int)this + 0xb4) = param_1[0x2d];
  puVar2 = param_1 + 0x2e;
  puVar3 = (undefined4 *)((int)this + 0xb8);
  for (iVar1 = 0x18; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x118) = param_1[0x46];
  return (uint)this;
}

/* ref: FUN_00a88d90 */
uint F_00a88d90(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa88d90u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  int iVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  
  *(undefined1 *)this = *param_1;
  F_0042cbc0((undefined *)((int)this + 4),param_1 + 4);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  F_0042cbc0((undefined *)((int)this + 0x5c),param_1 + 0x5c);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  puVar2 = (undefined4 *)(param_1 + 200);
  puVar3 = (undefined4 *)((int)this + 200);
  for (iVar1 = 0x30; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)this + 0x188) = *(undefined4 *)(param_1 + 0x188);
  return (uint)this;
}

/* ref: FUN_00a88e60 */
uint F_00a88e60(unsigned int gen_a0)
{
  GEN_ENTER(0xa88e60u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0xe1) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0xe1) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0xe1) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0xe1) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0xe1);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0xe1);
    }
    if (*(char *)(*(int *)this + 0xe1) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00a88f00 */
uint F_00a88f00(unsigned int gen_a0)
{
  GEN_ENTER(0xa88f00u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x71) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x71) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x71) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x71) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x71);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x71);
    }
    if (*(char *)(*(int *)this + 0x71) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00a88f70 */
uint F_00a88f70(unsigned int gen_a0)
{
  GEN_ENTER(0xa88f70u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x21) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x21) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x21) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x21) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x21);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x21);
    }
    if (*(char *)(*(int *)this + 0x21) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00a88fe0 */
uint F_00a88fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xa88fe0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x21) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x21) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x21) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x21) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x21);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x21);
    }
    if (*(char *)(*(int *)this + 0x21) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00a89070 */
uint F_00a89070(unsigned int gen_a0)
{
  GEN_ENTER(0xa89070u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x15) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x15) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x15) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x15) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x15);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x15);
    }
    if (*(char *)(*(int *)this + 0x15) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00a89120 */
uint F_00a89120(unsigned int gen_a0)
{
  GEN_ENTER(0xa89120u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x29) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x29) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x29) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x29) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x29);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x29);
    }
    if (*(char *)(*(int *)this + 0x29) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00a89180 */
uint F_00a89180(unsigned int gen_a0)
{
  GEN_ENTER(0xa89180u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x21) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x21) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x21) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x21) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x21);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x21);
    }
    if (*(char *)(*(int *)this + 0x21) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00a891e0 */
uint F_00a891e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa891e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  char cVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  puVar2 = *(undefined4 * PTR32 *)this;
  if (*(char *)((int)puVar2 + 0x25) != '\0') {
    *(undefined4 *)this = puVar2[2];
    return (uint)this;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0x25) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0x25) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0x25) == '\0');
      *(int *)this = iVar4;
      return (uint)this;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0x25);
    while ((cVar1 == '\0' && (*(int *)this == *piVar5))) {
      *(int * PTR32 *)this = piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0x25);
    }
    if (*(char *)(*(int *)this + 0x25) != '\0') {
      return (uint)this;
    }
  }
  *(int * PTR32 *)this = piVar5;
  return (uint)this;
}

/* ref: FUN_00a89240 */
uint F_00a89240(unsigned int gen_a0)
{
  GEN_ENTER(0xa89240u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89250 */
uint F_00a89250(unsigned int gen_a0)
{
  GEN_ENTER(0xa89250u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89260 */
uint F_00a89260(unsigned int gen_a0)
{
  GEN_ENTER(0xa89260u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89270 */
uint F_00a89270(unsigned int gen_a0)
{
  GEN_ENTER(0xa89270u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89280 */
uint F_00a89280(unsigned int gen_a0)
{
  GEN_ENTER(0xa89280u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89290 */
uint F_00a89290(unsigned int gen_a0)
{
  GEN_ENTER(0xa89290u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a892a0 */
uint F_00a892a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa892a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a892b0 */
uint F_00a892b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa892b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a892c0 */
uint F_00a892c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa892c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a892d0 */
uint F_00a892d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa892d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a892e0 */
uint F_00a892e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa892e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a892f0 */
uint F_00a892f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa892f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89300 */
uint F_00a89300(unsigned int gen_a0)
{
  GEN_ENTER(0xa89300u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89310 */
uint F_00a89310(unsigned int gen_a0)
{
  GEN_ENTER(0xa89310u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89320 */
uint F_00a89320(unsigned int gen_a0)
{
  GEN_ENTER(0xa89320u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89330 */
uint F_00a89330(unsigned int gen_a0)
{
  GEN_ENTER(0xa89330u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89340 */
uint F_00a89340(unsigned int gen_a0)
{
  GEN_ENTER(0xa89340u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89360 */
uint F_00a89360(unsigned int gen_a0)
{
  GEN_ENTER(0xa89360u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89370 */
uint F_00a89370(unsigned int gen_a0)
{
  GEN_ENTER(0xa89370u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89380 */
uint F_00a89380(unsigned int gen_a0)
{
  GEN_ENTER(0xa89380u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89390 */
uint F_00a89390(unsigned int gen_a0)
{
  GEN_ENTER(0xa89390u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a893a0 */
uint F_00a893a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa893a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a893b0 */
uint F_00a893b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa893b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a893c0 */
uint F_00a893c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa893c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a893d0 */
uint F_00a893d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa893d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a893e0 */
uint F_00a893e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa893e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a893f0 */
uint F_00a893f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa893f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89400 */
uint F_00a89400(unsigned int gen_a0)
{
  GEN_ENTER(0xa89400u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a894d0 */
uint F_00a894d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa894d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a89570 */
uint F_00a89570(unsigned int gen_a0)
{
  GEN_ENTER(0xa89570u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89580 */
uint F_00a89580(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa89580u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a895a0 */
uint F_00a895a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa895a0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a895b0 */
uint F_00a895b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa895b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a895c0 */
uint F_00a895c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa895c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a895d0 */
uint F_00a895d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa895d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a895e0 */
uint F_00a895e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa895e0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a895f0 */
uint F_00a895f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa895f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89600 */
uint F_00a89600(unsigned int gen_a0)
{
  GEN_ENTER(0xa89600u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89610 */
uint F_00a89610(unsigned int gen_a0)
{
  GEN_ENTER(0xa89610u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89620 */
uint F_00a89620(unsigned int gen_a0)
{
  GEN_ENTER(0xa89620u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89630 */
uint F_00a89630(unsigned int gen_a0)
{
  GEN_ENTER(0xa89630u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89640 */
uint F_00a89640(unsigned int gen_a0)
{
  GEN_ENTER(0xa89640u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89650 */
uint F_00a89650(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa89650u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int param_1 = (int)gen_a1;
  F_0042ccf0(this,param_1);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined1 *)((int)this + 0x58) = *(undefined1 *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  F_0042ccf0((undefined *)((int)this + 0x60),param_1 + 0x60);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  F_0042ccf0((undefined *)((int)this + 0xbc),param_1 + 0xbc);
  *(undefined4 *)((int)this + 0x110) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)((int)this + 0x114) = *(undefined4 *)(param_1 + 0x114);
  *(undefined1 *)((int)this + 0x118) = *(undefined1 *)(param_1 + 0x118);
  *(undefined1 *)((int)this + 0x119) = *(undefined1 *)(param_1 + 0x119);
  return (uint)this;
}

/* ref: FUN_00a896f0 */
uint F_00a896f0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa896f0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined4 *)this = *param_1;
  F_0042ccf0((undefined *)((int)this + 4),param_1 + 1);
  F_0042ccf0((undefined *)((int)this + 0x58),param_1 + 0x16);
  *(undefined4 *)((int)this + 0xac) = param_1[0x2b];
  *(undefined4 *)((int)this + 0xb0) = param_1[0x2c];
  *(undefined4 *)((int)this + 0xb4) = param_1[0x2d];
  puVar1 = (undefined4 *)((int)this + 0xb8);
  iVar2 = 0x18;
  do {
    *puVar1 = *((undefined4 *)GEN_TOP((((int)param_1 - (int)this) + (int)puVar1)));
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)((int)this + 0x118) = param_1[0x46];
  return (uint)this;
}

/* ref: FUN_00a89770 */
uint F_00a89770(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa89770u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;
  *(undefined1 *)this = *param_1;
  F_0042ccf0((undefined *)((int)this + 4),param_1 + 4);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  F_0042ccf0((undefined *)((int)this + 0x5c),param_1 + 0x5c);
  *(undefined4 *)((int)this + 0xb0) = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)((int)this + 0xb4) = *(undefined4 *)(param_1 + 0xb4);
  *(undefined4 *)((int)this + 0xb8) = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)((int)this + 0xbc) = *(undefined4 *)(param_1 + 0xbc);
  *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)(param_1 + 0xc0);
  *(undefined4 *)((int)this + 0xc4) = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)((int)this + 200) = *(undefined4 *)(param_1 + 200);
  *(undefined4 *)((int)this + 0xcc) = *(undefined4 *)(param_1 + 0xcc);
  *(undefined4 *)((int)this + 0xd0) = *(undefined4 *)(param_1 + 0xd0);
  *(undefined4 *)((int)this + 0xd4) = *(undefined4 *)(param_1 + 0xd4);
  *(undefined4 *)((int)this + 0xd8) = *(undefined4 *)(param_1 + 0xd8);
  *(undefined4 *)((int)this + 0xdc) = *(undefined4 *)(param_1 + 0xdc);
  *(undefined4 *)((int)this + 0xe0) = *(undefined4 *)(param_1 + 0xe0);
  *(undefined4 *)((int)this + 0xe4) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined4 *)((int)this + 0xe8) = *(undefined4 *)(param_1 + 0xe8);
  *(undefined4 *)((int)this + 0xec) = *(undefined4 *)(param_1 + 0xec);
  *(undefined4 *)((int)this + 0xf0) = *(undefined4 *)(param_1 + 0xf0);
  *(undefined4 *)((int)this + 0xf4) = *(undefined4 *)(param_1 + 0xf4);
  *(undefined4 *)((int)this + 0xf8) = *(undefined4 *)(param_1 + 0xf8);
  *(undefined4 *)((int)this + 0xfc) = *(undefined4 *)(param_1 + 0xfc);
  *(undefined4 *)((int)this + 0x100) = *(undefined4 *)(param_1 + 0x100);
  *(undefined4 *)((int)this + 0x104) = *(undefined4 *)(param_1 + 0x104);
  *(undefined4 *)((int)this + 0x108) = *(undefined4 *)(param_1 + 0x108);
  *(undefined4 *)((int)this + 0x10c) = *(undefined4 *)(param_1 + 0x10c);
  *(undefined4 *)((int)this + 0x110) = *(undefined4 *)(param_1 + 0x110);
  *(undefined4 *)((int)this + 0x114) = *(undefined4 *)(param_1 + 0x114);
  *(undefined4 *)((int)this + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)((int)this + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)((int)this + 0x120) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)((int)this + 0x124) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)((int)this + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)((int)this + 300) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)((int)this + 0x130) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)((int)this + 0x134) = *(undefined4 *)(param_1 + 0x134);
  *(undefined4 *)((int)this + 0x138) = *(undefined4 *)(param_1 + 0x138);
  *(undefined4 *)((int)this + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)((int)this + 0x140) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)((int)this + 0x144) = *(undefined4 *)(param_1 + 0x144);
  *(undefined4 *)((int)this + 0x148) = *(undefined4 *)(param_1 + 0x148);
  *(undefined4 *)((int)this + 0x14c) = *(undefined4 *)(param_1 + 0x14c);
  *(undefined4 *)((int)this + 0x150) = *(undefined4 *)(param_1 + 0x150);
  *(undefined4 *)((int)this + 0x154) = *(undefined4 *)(param_1 + 0x154);
  *(undefined4 *)((int)this + 0x158) = *(undefined4 *)(param_1 + 0x158);
  *(undefined4 *)((int)this + 0x15c) = *(undefined4 *)(param_1 + 0x15c);
  *(undefined4 *)((int)this + 0x160) = *(undefined4 *)(param_1 + 0x160);
  *(undefined4 *)((int)this + 0x164) = *(undefined4 *)(param_1 + 0x164);
  *(undefined4 *)((int)this + 0x168) = *(undefined4 *)(param_1 + 0x168);
  *(undefined4 *)((int)this + 0x16c) = *(undefined4 *)(param_1 + 0x16c);
  *(undefined4 *)((int)this + 0x170) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)((int)this + 0x174) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)((int)this + 0x178) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)((int)this + 0x17c) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)((int)this + 0x180) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)((int)this + 0x184) = *(undefined4 *)(param_1 + 0x184);
  *(undefined4 *)((int)this + 0x188) = *(undefined4 *)(param_1 + 0x188);
  return (uint)this;
}

/* ref: FUN_00a89bd0 */
uint F_00a89bd0(unsigned int gen_a0)
{
  GEN_ENTER(0xa89bd0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89be0 */
uint F_00a89be0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa89be0u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x11c;
  return (uint)in_ecx;
}

/* ref: FUN_00a89c00 */
uint F_00a89c00(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa89c00u, gen_a0, gen_a1, 0u, 0u);
  int * in_ecx = (int *)(uintptr_t)gen_a0;
  int param_2 = (int)gen_a1;
  *in_ecx = *in_ecx + param_2 * 0x11c;
  return (uint)in_ecx;
}

/* ref: FUN_00a89c30 */
uint F_00a89c30(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa89c30u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a89c60 */
uint F_00a89c60(unsigned int gen_a0)
{
  GEN_ENTER(0xa89c60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89c80 */
uint F_00a89c80(unsigned int gen_a0)
{
  GEN_ENTER(0xa89c80u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89c90 */
uint F_00a89c90(unsigned int gen_a0)
{
  GEN_ENTER(0xa89c90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89ca0 */
uint F_00a89ca0(unsigned int gen_a0)
{
  GEN_ENTER(0xa89ca0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89cb0 */
uint F_00a89cb0(unsigned int gen_a0)
{
  GEN_ENTER(0xa89cb0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89cc0 */
uint F_00a89cc0(unsigned int gen_a0)
{
  GEN_ENTER(0xa89cc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89d20 */
uint F_00a89d20(unsigned int gen_a0)
{
  GEN_ENTER(0xa89d20u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89d30 */
uint F_00a89d30(unsigned int gen_a0)
{
  GEN_ENTER(0xa89d30u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89d40 */
uint F_00a89d40(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa89d40u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a89d60 */
uint F_00a89d60(unsigned int gen_a0)
{
  GEN_ENTER(0xa89d60u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89d70 */
uint F_00a89d70(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa89d70u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a89d90 */
uint F_00a89d90(unsigned int gen_a0)
{
  GEN_ENTER(0xa89d90u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89da0 */
uint F_00a89da0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa89da0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a89dc0 */
uint F_00a89dc0(unsigned int gen_a0)
{
  GEN_ENTER(0xa89dc0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89dd0 */
uint F_00a89dd0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa89dd0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a89df0 */
uint F_00a89df0(unsigned int gen_a0)
{
  GEN_ENTER(0xa89df0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89e00 */
uint F_00a89e00(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa89e00u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a89e20 */
uint F_00a89e20(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa89e20u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a89e40 */
uint F_00a89e40(unsigned int gen_a0)
{
  GEN_ENTER(0xa89e40u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89e50 */
uint F_00a89e50(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa89e50u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a89e70 */
uint F_00a89e70(unsigned int gen_a0)
{
  GEN_ENTER(0xa89e70u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89e80 */
uint F_00a89e80(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa89e80u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a89ec0 */
uint F_00a89ec0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa89ec0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a89ef0 */
uint F_00a89ef0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa89ef0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + 0xbc));
  F_0042c880((undefined *)((int)this + 0x60));
  F_0042c880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a89f30 */
uint F_00a89f30(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa89f30u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  F_0042c880((undefined *)((int)this + 0x58));
  F_0042c880((undefined *)((int)this + 4));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a89f60 */
uint F_00a89f60(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa89f60u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  undefined * pvVar1;
  int iVar2;
  
  iVar2 = 0x17;
  pvVar1 = (undefined *)((int)this + 0x25d8);
  do {
    F_0042c880((undefined *)((int)pvVar1 + -0x134));
    F_0042c880((undefined *)((int)pvVar1 + -0x18c));
    iVar2 = iVar2 + -1;
    pvVar1 = (undefined *)((int)pvVar1 + -0x18c);
  } while (-1 < iVar2);
  F_0042c880((undefined *)((int)this + 0x54));
  F_0042c880(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: FUN_00a89fc0 */
uint F_00a89fc0(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa89fc0u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)this = *param_1;
  *(undefined1 *)((int)this + 4) = *(undefined1 *)(param_1 + 1);
  return (uint)this;
}

/* ref: FUN_00a89fe0 */
uint F_00a89fe0(unsigned int gen_a0)
{
  GEN_ENTER(0xa89fe0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a89ff0 */
uint F_00a89ff0(unsigned int gen_a0)
{
  GEN_ENTER(0xa89ff0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a8a010 */
uint F_00a8a010(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a010u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a8a020 */
uint F_00a8a020(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa8a020u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00a8a040 */
uint F_00a8a040(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa8a040u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00a8a060 */
uint F_00a8a060(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa8a060u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00a8a080 */
uint F_00a8a080(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa8a080u, gen_a0, gen_a1, 0u, 0u);
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = *param_2;
  }
  return (uint)param_1;
}

/* ref: FUN_00a8a0d0 */
uint F_00a8a0d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a0d0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a8a0f0 */
uint F_00a8a0f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a0f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a8a100 */
uint F_00a8a100(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a100u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a8a110 */
uint F_00a8a110(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a110u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a8a120 */
uint F_00a8a120(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a120u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a8a130 */
uint F_00a8a130(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a130u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a8a140 */
uint F_00a8a140(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a140u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a8a150 */
uint F_00a8a150(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a150u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a8a160 */
uint F_00a8a160(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a160u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a8a170 */
uint F_00a8a170(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a170u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a8a180 */
uint F_00a8a180(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a180u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a8a190 */
uint F_00a8a190(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8a190u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_3 = (undefined4 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00a8a1b0 */
uint F_00a8a1b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a1b0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a8a1c0 */
uint F_00a8a1c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a1c0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a8a1d0 */
uint F_00a8a1d0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8a1d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined4 param_1 = (undefined4)gen_a0;
  undefined1 * param_2 = (undefined1 *)(uintptr_t)gen_a1;
  undefined1 * param_3 = (undefined1 *)(uintptr_t)gen_a2;
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = *param_3;
  }
  return (uint)param_2;
}

/* ref: FUN_00a8a1f0 */
uint F_00a8a1f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a1f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a8a210 */
uint F_00a8a210(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a210u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a8a220 */
uint F_00a8a220(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a220u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a8a260 */
uint F_00a8a260(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa8a260u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return (*(int *)this - *param_1) / 0x11c;
}

/* ref: FUN_00a8a290 */
uint F_00a8a290(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa8a290u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  int * param_1 = (int *)(uintptr_t)gen_a1;
  return (*(int *)this - *param_1) / 0x11c;
}

/* ref: FUN_00a8a2c0 */
uint F_00a8a2c0(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xa8a2c0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = *param_2;
  return (uint)this;
}

/* ref: FUN_00a8a2f0 */
uint F_00a8a2f0(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a2f0u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a8a300 */
uint F_00a8a300(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a300u, gen_a0, 0u, 0u, 0u);
  uint param_1 = (uint)gen_a0;
  return param_1;
}

/* ref: FUN_00a8a370 */
uint F_00a8a370(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa8a370u, gen_a0, gen_a1, 0u, 0u);
  int in_ecx = (int)gen_a0;
  undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a1;
  *(undefined4 *)(in_ecx + 0x240) = *param_2;
  *(undefined4 *)(in_ecx + 0x244) = param_2[1];
  *(undefined4 *)(in_ecx + 0x248) = param_2[2];
  return (uint)param_2;
}

/* ref: FUN_00a8a3a0 */
uint F_00a8a3a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a3a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined4 * puVar1;
  int local_8;
  
  local_8 = 7;
  puVar1 = (undefined4 *)((int)this + 4);
  do {
    *(byte *)((int)puVar1 + 6) = *(byte *)((int)puVar1 + 6) & 0xfc;
    puVar1[-1] = 9999;
    *puVar1 = 0;
    *(undefined2 *)(puVar1 + 1) = 0;
    F_0042b630(puVar1 + 3);
    *(byte *)((int)puVar1 + 0x6a) = *(byte *)((int)puVar1 + 0x6a) & 0xfe;
    puVar1[0x18] = 0;
    puVar1[0x19] = 0;
    *(undefined2 *)(puVar1 + 0x1a) = 0;
    puVar1 = puVar1 + 0x1c;
    local_8 = local_8 + -1;
  } while (-1 < local_8);
  *(undefined4 *)((int)this + 0x380) = 0;
  F_0042b630((int)this + 900);
  *(byte *)((int)this + 0x3f1) = *(byte *)((int)this + 0x3f1) & 0xf0;
  *(undefined4 *)((int)this + 0x3e4) = 0;
  *(undefined4 *)((int)this + 0x3d8) = 0;
  *(undefined4 *)((int)this + 0x3dc) = 0;
  *(undefined4 *)((int)this + 0x3ec) = 0;
  *(undefined1 *)((int)this + 0x3f0) = 0;
  *(undefined4 *)((int)this + 0x3e0) = 0;
  *(undefined4 *)((int)this + 1000) = 0;
  return (uint)this;
}

/* ref: FUN_00a8a440 */
uint F_00a8a440(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a440u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042b630((int)this + 4);
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  F_0042e430((undefined *)((int)this + 4),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined1 *)((int)this + 0x68) = 0;
  return (uint)this;
}

/* ref: FUN_00a8a480 */
uint F_00a8a480(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a480u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0071db50(this);
  F_0042b630((int)this + 0xf8);
  F_0042b630((int)this + 0x14c);
  F_0042b630((int)this + 0x1a0);
  F_00a84ef0(this);
  return (uint)this;
}

/* ref: FUN_00a8a4c0 */
uint F_00a8a4c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a4c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042b630(this);
  F_0042b630((int)this + 0x60);
  F_0042b630((int)this + 0xbc);
  F_0042e430(this,&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined1 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0xefe4;
  F_0042e430((undefined *)((int)this + 0xbc),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x110) = 0;
  *(undefined2 *)((int)this + 0x118) = 0;
  *(undefined4 *)((int)this + 0x114) = 1;
  return (uint)this;
}

/* ref: FUN_00a8a540 */
uint F_00a8a540(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a540u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042b630((int)this + 4);
  F_0042b630((int)this + 0x58);
  F_00a84fd0(this);
  return (uint)this;
}

/* ref: FUN_00a8a560 */
byte F_00a8a560(unsigned int gen_a0, unsigned int gen_a1, unsigned int gen_a2, unsigned int gen_a3, unsigned int gen_a4, unsigned int gen_a5, unsigned int gen_a6, unsigned int gen_a7, unsigned int gen_a8, unsigned int gen_a9, unsigned int gen_a10, unsigned int gen_a11, unsigned int gen_a12, unsigned int gen_a13, unsigned int gen_a14, unsigned int gen_a15, unsigned int gen_a16, unsigned int gen_a17, unsigned int gen_a18, unsigned int gen_a19, unsigned int gen_a20, unsigned int gen_a21, unsigned int gen_a22, unsigned int gen_a23, unsigned int gen_a24, unsigned int gen_a25, unsigned int gen_a26, unsigned int gen_a27, unsigned int gen_a28, unsigned int gen_a29, unsigned int gen_a30, unsigned int gen_a31, unsigned int gen_a32, unsigned int gen_a33, unsigned int gen_a34, unsigned int gen_a35, unsigned int gen_a36, unsigned int gen_a37, unsigned int gen_a38, unsigned int gen_a39, unsigned int gen_a40, unsigned int gen_a41)
{
  GEN_ENTER(0xa8a560u, gen_a0, gen_a1, gen_a2, gen_a3);
  unsigned int gen_args[42];
  gen_args[0] = gen_a0;
  gen_args[1] = gen_a1;
  gen_args[2] = gen_a2;
  gen_args[3] = gen_a3;
  gen_args[4] = gen_a4;
  gen_args[5] = gen_a5;
  gen_args[6] = gen_a6;
  gen_args[7] = gen_a7;
  gen_args[8] = gen_a8;
  gen_args[9] = gen_a9;
  gen_args[10] = gen_a10;
  gen_args[11] = gen_a11;
  gen_args[12] = gen_a12;
  gen_args[13] = gen_a13;
  gen_args[14] = gen_a14;
  gen_args[15] = gen_a15;
  gen_args[16] = gen_a16;
  gen_args[17] = gen_a17;
  gen_args[18] = gen_a18;
  gen_args[19] = gen_a19;
  gen_args[20] = gen_a20;
  gen_args[21] = gen_a21;
  gen_args[22] = gen_a22;
  gen_args[23] = gen_a23;
  gen_args[24] = gen_a24;
  gen_args[25] = gen_a25;
  gen_args[26] = gen_a26;
  gen_args[27] = gen_a27;
  gen_args[28] = gen_a28;
  gen_args[29] = gen_a29;
  gen_args[30] = gen_a30;
  gen_args[31] = gen_a31;
  gen_args[32] = gen_a32;
  gen_args[33] = gen_a33;
  gen_args[34] = gen_a34;
  gen_args[35] = gen_a35;
  gen_args[36] = gen_a36;
  gen_args[37] = gen_a37;
  gen_args[38] = gen_a38;
  gen_args[39] = gen_a39;
  gen_args[40] = gen_a40;
  gen_args[41] = gen_a41;
  undefined1 gen_out[0x58];
  byte bVar1;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 * puStack_60;
  undefined4 uStack_5c;
  
  puStack_60 = &(*(undefined4 *)&gen_args[21]);
  uStack_64 = 0xa8a572;
  F_0042cbc0((gen_out + 0x54),&(*(undefined4 *)&gen_args[21]));
  F_0042cbc0((gen_out + 0x0),&(*(undefined4 *)&gen_args[0]));
  bVar1 = F_00a67e30(uStack_b0,uStack_ac,uStack_a8,uStack_a4,uStack_a0,uStack_9c,uStack_98,
                       uStack_94,uStack_90,uStack_8c,uStack_88,uStack_84,uStack_80,uStack_7c,
                       uStack_78,uStack_74,uStack_70,uStack_6c,uStack_68,uStack_64,puStack_60,
                       uStack_5c);
  F_0042c880(&(*(undefined4 *)&gen_args[0]));
  F_0042c880(&(*(undefined4 *)&gen_args[21]));
  return bVar1;
}

/* ref: FUN_00a8a5b0 */
uint F_00a8a5b0(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a5b0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042b630((int)this + 4);
  F_0042b630((int)this + 0x5c);
  F_00a850a0(this);
  return (uint)this;
}

/* ref: FUN_00a8a5d0 */
uint F_00a8a5d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a5d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  
  this_00 = (undefined *)((int)this + 8);
  iVar1 = 0x17;
  do {
    F_0042b630((int)this_00 + 4);
    F_0042b630((int)this_00 + 0x5c);
    F_00a850a0(this_00);
    this_00 = (undefined *)((int)this_00 + 0x18c);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00a85260(this);
  return (uint)this;
}

/* ref: FUN_00a8a610 */
uint F_00a8a610(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a610u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042b630(this);
  F_0042e430(this,&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x54) = 0;
  return (uint)this;
}

/* ref: FUN_00a8a630 */
uint F_00a8a630(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a630u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  int iVar2;
  
  pvVar1 = (undefined *)((int)this + 4);
  iVar2 = 0x17;
  do {
    F_0042b630(pvVar1);
    F_0042e430(pvVar1,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)pvVar1 + 0x54) = 0;
    pvVar1 = (undefined *)((int)pvVar1 + 0x58);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(undefined2 *)this = 0;
  pvVar1 = (undefined *)((int)this + 4);
  iVar2 = 0x18;
  do {
    F_0042e430(pvVar1,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)pvVar1 + 0x54) = 0;
    pvVar1 = (undefined *)((int)pvVar1 + 0x58);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return (uint)this;
}

/* ref: FUN_00a8a690 */
uint F_00a8a690(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a690u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042b630((int)this + 4);
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  F_0042e430((undefined *)((int)this + 4),&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  return (uint)this;
}

/* ref: FUN_00a8a6c0 */
uint F_00a8a6c0(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a6c0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042b630(this);
  F_0042e430(this,&REFG(undefined1, 0x107fc63));
  *(undefined4 *)((int)this + 0x54) = 0;
  return (uint)this;
}

/* ref: FUN_00a8a6e0 */
uint F_00a8a6e0(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a6e0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * pvVar1;
  int iVar2;
  
  pvVar1 = (undefined *)((int)this + 4);
  iVar2 = 0x17;
  do {
    F_0042b630(pvVar1);
    F_0042e430(pvVar1,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)pvVar1 + 0x54) = 0;
    pvVar1 = (undefined *)((int)pvVar1 + 0x58);
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  *(undefined2 *)this = 0;
  pvVar1 = (undefined *)((int)this + 4);
  iVar2 = 0x18;
  do {
    F_0042e430(pvVar1,&REFG(undefined1, 0x107fc63));
    *(undefined4 *)((int)pvVar1 + 0x54) = 0;
    pvVar1 = (undefined *)((int)pvVar1 + 0x58);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return (uint)this;
}

/* ref: FUN_00a8a740 */
uint F_00a8a740(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a740u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042b630((int)this + 4);
  F_0042b630((int)this + 0x5c);
  F_00a85580(this);
  return (uint)this;
}

/* ref: FUN_00a8a760 */
uint F_00a8a760(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a760u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  undefined * this_00;
  int iVar1;
  
  this_00 = (undefined *)((int)this + 4);
  iVar1 = 0x17;
  do {
    F_0042b630((int)this_00 + 4);
    F_0042b630((int)this_00 + 0x5c);
    F_00a85580(this_00);
    this_00 = (undefined *)((int)this_00 + 0x18c);
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  F_00a85730(this);
  return (uint)this;
}

/* ref: FUN_00a8a7a0 */
uint F_00a8a7a0(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a7a0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  F_0042b630(this);
  F_0042b630((int)this + 0x54);
  F_00a8a760((undefined *)((int)this + 0xb0));
  F_00a858e0(this);
  return (uint)this;
}

/* ref: FUN_00a8a7d0 */
uint F_00a8a7d0(unsigned int gen_a0)
{
  GEN_ENTER(0xa8a7d0u, gen_a0, 0u, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e7928));
  F_00a859d0(this);
  return (uint)this;
}

/* ref: Client::Game::UI::MarkingController::vf0 */
uint F_00a8a800(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa8a800u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e7928));
  F_00a859d0(this);
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

/* ref: Client::Game::LimitBreakController::vf0 */
uint F_00a8a860(unsigned int gen_a0, unsigned int gen_a1)
{
  GEN_ENTER(0xa8a860u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  uint param_1 = (uint)gen_a1;
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[1])REFP(0x10e7930));
  if ((param_1 & 1) != 0) {
    F_00406ad0(this);
  }
  return (uint)this;
}

