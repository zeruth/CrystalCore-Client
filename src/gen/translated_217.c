#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: FUN_0107c930 */
GEN_NOFRAME unsigned int F_0107c930(void)
{
  GEN_ENTER(0x107c930u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x1340c5c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[2])REFP(0x10904d0))));
  return;
}

/* ref: FUN_0107c940 */
GEN_NOFRAME uint F_0107c940(void)
{
  GEN_ENTER(0x107c940u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  uVar1 = F_00bb41d0(&REFG(undefined4, 0x14c5960) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0107c950 */
GEN_NOFRAME unsigned int F_0107c950(void)
{
  GEN_ENTER(0x107c950u, 0u, 0u, 0u, 0u);
  F_00bb9a40(&REFG(undefined * PTR32, 0x1341d94) GEN_EDX_ARG);
  return;
}

/* ref: FUN_0107c95a */
GEN_NOFRAME unsigned int F_0107c95a(void)
{
  GEN_ENTER(0x107c95au, 0u, 0u, 0u, 0u);
  LONG LVar1;
  undefined * p_Var2;
  
  LVar1 = gen_imp_InterlockedDecrement((LONG *)&REFG(undefined, 0x134a9e4));
  if (LVar1 < 0) {
    p_Var2 = (undefined *)&REFG(undefined, 0x15d6718);
    do {
      F_00c4683b(p_Var2);
      p_Var2 = p_Var2 + (1) * 24;
    } while ((int)p_Var2 < 0x15d6778);
  }
  return;
}

/* ref: FUN_0107c964 */
GEN_NOFRAME unsigned int F_0107c964(void)
{
  GEN_ENTER(0x107c964u, 0u, 0u, 0u, 0u);
  F_00478ec0(&REFG(undefined, 0x15d679c) GEN_EDX_ARG);
  return;
}

/* ref: FUN_0107c96e */
GEN_NOFRAME uint F_0107c96e(void)
{
  GEN_ENTER(0x107c96eu, 0u, 0u, 0u, 0u);
  undefined * this;
  uint uVar1;
  undefined1 a_Stack_14[12];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 4;
  uStack_8 = 0xc45e54;
  F_00c45bc0(a_Stack_14 GEN_EDX_ARG,0);
  uStack_8 = 0;
  while (this = REFG(undefined4, 0x15d677c), REFG(undefined4, 0x15d677c) != (undefined *)0x0) {
    REFG(undefined4, 0x15d677c) = *(undefined * PTR32 *)REFG(undefined4, 0x15d677c);
    F_00c45cab(this GEN_EDX_ARG);
    F_00406ad0(this);
  }
  uStack_8 = 0xffffffff;
  uVar1 = F_00c45be8(a_Stack_14 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0107c978 */
GEN_NOFRAME unsigned int F_0107c978(void)
{
  GEN_ENTER(0x107c978u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x134aad0) = ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[6])REFP(0x11186b0))));
  return;
}

/* ref: FUN_0107c983 */
GEN_NOFRAME unsigned int F_0107c983(void)
{
  GEN_ENTER(0x107c983u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x134aad8) = ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[6])REFP(0x11186b0))));
  return;
}

/* ref: FUN_0107c98e */
GEN_NOFRAME unsigned int F_0107c98e(void)
{
  GEN_ENTER(0x107c98eu, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x134aae0) = ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[6])REFP(0x11186b0))));
  return;
}

/* ref: FUN_0107c999 */
GEN_NOFRAME unsigned int F_0107c999(void)
{
  GEN_ENTER(0x107c999u, 0u, 0u, 0u, 0u);
  LONG LVar1;
  undefined * p_Var2;
  
  LVar1 = gen_imp_InterlockedDecrement((LONG *)&REFG(undefined, 0x134a9e4));
  if (LVar1 < 0) {
    p_Var2 = (undefined *)&REFG(undefined, 0x15d6718);
    do {
      F_00c4683b(p_Var2);
      p_Var2 = p_Var2 + (1) * 24;
    } while ((int)p_Var2 < 0x15d6778);
  }
  return;
}

/* ref: FUN_0107c9a3 */
GEN_NOFRAME unsigned int F_0107c9a3(void)
{
  GEN_ENTER(0x107c9a3u, 0u, 0u, 0u, 0u);
  int iVar1;
  code * pcVar2;
  
  while (REFG(undefined4, 0x134aaf0) < 10) {
    iVar1 = REFG(undefined4, 0x134aaf0) * 4;
    REFG(undefined4, 0x134aaf0) = REFG(undefined4, 0x134aaf0) + 1;
    pcVar2 = gen_imp_DecodePointer(*(PVOID *)(iVar1 + 0x15d6800));
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)();
    }
  }
  return;
}

/* ref: FUN_0107c9b0 */
GEN_NOFRAME uint F_0107c9b0(void)
{
  GEN_ENTER(0x107c9b0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  REFG(undefined * PTR32, 0x134c224) = ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x1129670))));
  if (REFG(undefined * PTR32, 0x134c228) != (undefined *)0x0) {
    *((int *)GEN_TOP((REFG(undefined * PTR32, 0x134c228) + 8))) = REFG(int, 0x134c22c);
  }
  if (REFG(int, 0x134c22c) != 0) {
    *(undefined * PTR32 *)(REFG(int, 0x134c22c) + 4) = REFG(undefined * PTR32, 0x134c228);
  }
  REFG(undefined * PTR32, 0x134c218) = ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x1129670))));
  if (REFG(undefined4, 0x134c21c) != 0) {
    *(undefined * PTR32 *)(REFG(undefined4, 0x134c21c) + 8) = REFG(undefined * PTR32, 0x134c220);
  }
  uVar1 = REFG(undefined4, 0x134c21c);
  if (REFG(undefined * PTR32, 0x134c220) != (undefined *)0x0) {
    *((uint *)GEN_TOP((REFG(undefined * PTR32, 0x134c220) + 4))) = REFG(undefined4, 0x134c21c);
  }
  return uVar1;
}

/* ref: FUN_0107ca10 */
GEN_NOFRAME unsigned int F_0107ca10(void)
{
  GEN_ENTER(0x107ca10u, 0u, 0u, 0u, 0u);
  return (uint)(gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d869c)));
}

/* ref: FUN_0107ca20 */
GEN_NOFRAME unsigned int F_0107ca20(void)
{
  GEN_ENTER(0x107ca20u, 0u, 0u, 0u, 0u);
  F_00cccb40(&REFG(undefined, 0x15d8644) GEN_EDX_ARG);
  return;
}

/* ref: FUN_0107ca30 */
GEN_NOFRAME unsigned int F_0107ca30(void)
{
  GEN_ENTER(0x107ca30u, 0u, 0u, 0u, 0u);
  REFG(char, 0x15d8698) = REFG(char, 0x15d867c);
  if (REFG(char, 0x15d867c) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
  }
  if (REFG(int, 0x15d8668) != 0) {
    F_00406810(REFG(int, 0x15d8668));
    REFG(int, 0x15d8668) = 0;
  }
  REFG(undefined4, 0x15d866c) = 0;
  if (REFG(char, 0x15d8698) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680));
  }
  return (uint)(gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8680)));
}

/* ref: FUN_0107ca90 */
GEN_NOFRAME unsigned int F_0107ca90(void)
{
  GEN_ENTER(0x107ca90u, 0u, 0u, 0u, 0u);
  return (uint)(gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d86e8)));
}

/* ref: FUN_0107caa0 */
GEN_NOFRAME unsigned int F_0107caa0(void)
{
  GEN_ENTER(0x107caa0u, 0u, 0u, 0u, 0u);
  return (uint)(gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8738)));
}

/* ref: FUN_0107cab0 */
GEN_NOFRAME unsigned int F_0107cab0(void)
{
  GEN_ENTER(0x107cab0u, 0u, 0u, 0u, 0u);
  return (uint)(gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8754)));
}

/* ref: FUN_0107cac0 */
GEN_NOFRAME unsigned int F_0107cac0(void)
{
  GEN_ENTER(0x107cac0u, 0u, 0u, 0u, 0u);
  REFG(char, 0x15d8734) = REFG(char, 0x15d8718);
  if (REFG(char, 0x15d8718) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d871c));
  }
  if (REFG(int, 0x15d8704) != 0) {
    F_00406810(REFG(int, 0x15d8704));
    REFG(int, 0x15d8704) = 0;
  }
  REFG(undefined4, 0x15d8708) = 0;
  if (REFG(char, 0x15d8734) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d871c));
  }
  return (uint)(gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d871c)));
}

/* ref: FUN_0107cb20 */
GEN_NOFRAME unsigned int F_0107cb20(void)
{
  GEN_ENTER(0x107cb20u, 0u, 0u, 0u, 0u);
  REFG(char, 0x15d8ba0) = REFG(char, 0x15d8b81);
  if (REFG(char, 0x15d8b81) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8b88));
  }
  if (REFG(int, 0x15d8b84) != 0) {
    F_00406810(REFG(int, 0x15d8b84));
    REFG(int, 0x15d8b84) = 0;
  }
  if (REFG(char, 0x15d8ba0) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8b88));
  }
  return (uint)(gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8b88)));
}

/* ref: FUN_0107cb80 */
GEN_NOFRAME unsigned int F_0107cb80(void)
{
  GEN_ENTER(0x107cb80u, 0u, 0u, 0u, 0u);
  return (uint)(gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8be8)));
}

/* ref: FUN_0107cb90 */
GEN_NOFRAME unsigned int F_0107cb90(void)
{
  GEN_ENTER(0x107cb90u, 0u, 0u, 0u, 0u);
  return (uint)(gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c10)));
}

/* ref: FUN_0107cba0 */
GEN_NOFRAME unsigned int F_0107cba0(void)
{
  GEN_ENTER(0x107cba0u, 0u, 0u, 0u, 0u);
  F_00cccb40(&REFG(undefined, 0x15d8c48) GEN_EDX_ARG);
  return;
}

/* ref: FUN_0107cbb0 */
GEN_NOFRAME unsigned int F_0107cbb0(void)
{
  GEN_ENTER(0x107cbb0u, 0u, 0u, 0u, 0u);
  return (uint)(gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8cd8)));
}

/* ref: FUN_0107cbc0 */
GEN_NOFRAME unsigned int F_0107cbc0(void)
{
  GEN_ENTER(0x107cbc0u, 0u, 0u, 0u, 0u);
  F_00cccb40(&REFG(undefined, 0x15d8cb0) GEN_EDX_ARG);
  return;
}

/* ref: FUN_0107cbd0 */
GEN_NOFRAME unsigned int F_0107cbd0(void)
{
  GEN_ENTER(0x107cbd0u, 0u, 0u, 0u, 0u);
  REFG(char, 0x15d8ca0) = REFG(char, 0x15d8c84);
  if (REFG(char, 0x15d8c84) != '\0') {
    gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c88));
  }
  if (REFG(int, 0x15d8c70) != 0) {
    F_00406810(REFG(int, 0x15d8c70));
    REFG(int, 0x15d8c70) = 0;
  }
  REFG(undefined4, 0x15d8c74) = 0;
  if (REFG(char, 0x15d8ca0) != '\0') {
    gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c88));
  }
  return (uint)(gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d8c88)));
}

/* ref: FUN_0107cc30 */
GEN_NOFRAME unsigned int F_0107cc30(void)
{
  GEN_ENTER(0x107cc30u, 0u, 0u, 0u, 0u);
  return (uint)(gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x15d939c)));
}

/* ref: FUN_0107cc40 */
GEN_NOFRAME unsigned int F_0107cc40(void)
{
  GEN_ENTER(0x107cc40u, 0u, 0u, 0u, 0u);
  F_00d9b7c0(&REFG(undefined * PTR32, 0x13516a4) GEN_EDX_ARG);
  return;
}

/* ref: FUN_0107cc50 */
GEN_NOFRAME unsigned int F_0107cc50(void)
{
  GEN_ENTER(0x107cc50u, 0u, 0u, 0u, 0u);
  F_00d9b7c0(&REFG(undefined * PTR32, 0x13516a8) GEN_EDX_ARG);
  return;
}

/* ref: FUN_0107cc60 */
GEN_NOFRAME unsigned int F_0107cc60(void)
{
  GEN_ENTER(0x107cc60u, 0u, 0u, 0u, 0u);
  F_00d9b7c0(&REFG(undefined * PTR32, 0x13516ac) GEN_EDX_ARG);
  return;
}

/* ref: FUN_0107cc70 */
GEN_NOFRAME unsigned int F_0107cc70(void)
{
  GEN_ENTER(0x107cc70u, 0u, 0u, 0u, 0u);
  return (uint)(gen_imp_TlsFree(REFG(undefined4, 0x15d9a88)));
}

/* ref: FUN_0107cc80 */
GEN_NOFRAME unsigned int F_0107cc80(void)
{
  GEN_ENTER(0x107cc80u, 0u, 0u, 0u, 0u);
  return (uint)(gen_imp_TlsFree(REFG(undefined4, 0x15d9a8c)));
}

/* ref: FUN_0107cc90 */
GEN_NOFRAME unsigned int F_0107cc90(void)
{
  GEN_ENTER(0x107cc90u, 0u, 0u, 0u, 0u);
  F_00d9b7c0(&REFG(undefined * PTR32, 0x1352290) GEN_EDX_ARG);
  return;
}

/* ref: FUN_0107cca0 */
GEN_NOFRAME uint F_0107cca0(void)
{
  GEN_ENTER(0x107cca0u, 0u, 0u, 0u, 0u);
  uint extraout_EAX = 0;
  
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)&REFG(undefined, 0x13522c0));
  F_00db3820(&REFG(undefined, 0x13522a8) GEN_EDX_ARG);
  F_00d9b7c0(&REFG(undefined * PTR32, 0x13522a0) GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: FUN_0107ccc0 */
GEN_NOFRAME unsigned int F_0107ccc0(void)
{
  GEN_ENTER(0x107ccc0u, 0u, 0u, 0u, 0u);
  return (uint)(gen_imp_TlsFree(REFG(undefined4, 0x15dff7c)));
}

/* ref: FUN_0107ccd0 */
GEN_NOFRAME unsigned int F_0107ccd0(void)
{
  GEN_ENTER(0x107ccd0u, 0u, 0u, 0u, 0u);
  F_00d9b7c0(&REFG(undefined * PTR32, 0x1352860) GEN_EDX_ARG);
  return;
}

/* ref: FUN_0107cce0 */
GEN_NOFRAME unsigned int F_0107cce0(void)
{
  GEN_ENTER(0x107cce0u, 0u, 0u, 0u, 0u);
  *(undefined * PTR32 * PTR32 *)&REFG(undefined, 0x15e373c) = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return;
}

/* ref: FUN_0107ccf0 */
GEN_NOFRAME unsigned int F_0107ccf0(void)
{
  GEN_ENTER(0x107ccf0u, 0u, 0u, 0u, 0u);
  *(undefined * PTR32 * PTR32 *)&REFG(undefined, 0x15e3758) = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return;
}

/* ref: FUN_0107cd00 */
GEN_NOFRAME unsigned int F_0107cd00(void)
{
  GEN_ENTER(0x107cd00u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x1354948) = ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[2])REFP(0x1099440))));
  return;
}

/* ref: FUN_0107cd10 */
GEN_NOFRAME unsigned int F_0107cd10(void)
{
  GEN_ENTER(0x107cd10u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ae3c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107cd20 */
GEN_NOFRAME unsigned int F_0107cd20(void)
{
  GEN_ENTER(0x107cd20u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ae40) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107cd30 */
GEN_NOFRAME unsigned int F_0107cd30(void)
{
  GEN_ENTER(0x107cd30u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ae44) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107cd40 */
GEN_NOFRAME unsigned int F_0107cd40(void)
{
  GEN_ENTER(0x107cd40u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ae48) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107cd50 */
GEN_NOFRAME unsigned int F_0107cd50(void)
{
  GEN_ENTER(0x107cd50u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ae4c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107cd60 */
GEN_NOFRAME unsigned int F_0107cd60(void)
{
  GEN_ENTER(0x107cd60u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ae50) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107cd70 */
GEN_NOFRAME unsigned int F_0107cd70(void)
{
  GEN_ENTER(0x107cd70u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135b28c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107cd80 */
GEN_NOFRAME unsigned int F_0107cd80(void)
{
  GEN_ENTER(0x107cd80u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135b290) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107cd90 */
GEN_NOFRAME unsigned int F_0107cd90(void)
{
  GEN_ENTER(0x107cd90u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135b294) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107cda0 */
GEN_NOFRAME unsigned int F_0107cda0(void)
{
  GEN_ENTER(0x107cda0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135b298) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107cdb0 */
GEN_NOFRAME unsigned int F_0107cdb0(void)
{
  GEN_ENTER(0x107cdb0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135b29c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107cdc0 */
GEN_NOFRAME unsigned int F_0107cdc0(void)
{
  GEN_ENTER(0x107cdc0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135b2a0) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107cdd0 */
GEN_NOFRAME unsigned int F_0107cdd0(void)
{
  GEN_ENTER(0x107cdd0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ebb8) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107cde0 */
GEN_NOFRAME unsigned int F_0107cde0(void)
{
  GEN_ENTER(0x107cde0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ebc4) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107cdf0 */
GEN_NOFRAME unsigned int F_0107cdf0(void)
{
  GEN_ENTER(0x107cdf0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ebd0) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107ce00 */
GEN_NOFRAME unsigned int F_0107ce00(void)
{
  GEN_ENTER(0x107ce00u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ebdc) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107ce10 */
GEN_NOFRAME unsigned int F_0107ce10(void)
{
  GEN_ENTER(0x107ce10u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ebe8) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107ce20 */
GEN_NOFRAME unsigned int F_0107ce20(void)
{
  GEN_ENTER(0x107ce20u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ebf4) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107ce30 */
GEN_NOFRAME unsigned int F_0107ce30(void)
{
  GEN_ENTER(0x107ce30u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ec00) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107ce40 */
GEN_NOFRAME unsigned int F_0107ce40(void)
{
  GEN_ENTER(0x107ce40u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ec0c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107ce50 */
GEN_NOFRAME unsigned int F_0107ce50(void)
{
  GEN_ENTER(0x107ce50u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ec18) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107ce60 */
GEN_NOFRAME unsigned int F_0107ce60(void)
{
  GEN_ENTER(0x107ce60u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ec24) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107ce70 */
GEN_NOFRAME unsigned int F_0107ce70(void)
{
  GEN_ENTER(0x107ce70u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ec30) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107ce80 */
GEN_NOFRAME unsigned int F_0107ce80(void)
{
  GEN_ENTER(0x107ce80u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ec3c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107ce90 */
GEN_NOFRAME unsigned int F_0107ce90(void)
{
  GEN_ENTER(0x107ce90u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ec48) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107cea0 */
GEN_NOFRAME unsigned int F_0107cea0(void)
{
  GEN_ENTER(0x107cea0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ec54) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107ceb0 */
GEN_NOFRAME unsigned int F_0107ceb0(void)
{
  GEN_ENTER(0x107ceb0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ec60) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107cec0 */
GEN_NOFRAME unsigned int F_0107cec0(void)
{
  GEN_ENTER(0x107cec0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ec6c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107ced0 */
GEN_NOFRAME unsigned int F_0107ced0(void)
{
  GEN_ENTER(0x107ced0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ec9c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107cee0 */
GEN_NOFRAME unsigned int F_0107cee0(void)
{
  GEN_ENTER(0x107cee0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135eccc) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107cef0 */
GEN_NOFRAME unsigned int F_0107cef0(void)
{
  GEN_ENTER(0x107cef0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ecfc) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107cf00 */
GEN_NOFRAME unsigned int F_0107cf00(void)
{
  GEN_ENTER(0x107cf00u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ed2c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107cf10 */
GEN_NOFRAME unsigned int F_0107cf10(void)
{
  GEN_ENTER(0x107cf10u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ed5c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107cf20 */
GEN_NOFRAME unsigned int F_0107cf20(void)
{
  GEN_ENTER(0x107cf20u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ed8c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107cf30 */
GEN_NOFRAME unsigned int F_0107cf30(void)
{
  GEN_ENTER(0x107cf30u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135edbc) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107cf40 */
GEN_NOFRAME unsigned int F_0107cf40(void)
{
  GEN_ENTER(0x107cf40u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135edec) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107cf50 */
GEN_NOFRAME unsigned int F_0107cf50(void)
{
  GEN_ENTER(0x107cf50u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ee1c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107cf60 */
GEN_NOFRAME unsigned int F_0107cf60(void)
{
  GEN_ENTER(0x107cf60u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ee4c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107cf70 */
GEN_NOFRAME unsigned int F_0107cf70(void)
{
  GEN_ENTER(0x107cf70u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ee7c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107cf80 */
GEN_NOFRAME unsigned int F_0107cf80(void)
{
  GEN_ENTER(0x107cf80u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135eeac) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107cf90 */
GEN_NOFRAME unsigned int F_0107cf90(void)
{
  GEN_ENTER(0x107cf90u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135eedc) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107cfa0 */
GEN_NOFRAME unsigned int F_0107cfa0(void)
{
  GEN_ENTER(0x107cfa0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ef0c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107cfb0 */
GEN_NOFRAME unsigned int F_0107cfb0(void)
{
  GEN_ENTER(0x107cfb0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ef3c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107cfc0 */
GEN_NOFRAME unsigned int F_0107cfc0(void)
{
  GEN_ENTER(0x107cfc0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ef6c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107cfd0 */
GEN_NOFRAME unsigned int F_0107cfd0(void)
{
  GEN_ENTER(0x107cfd0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135ef9c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107cfe0 */
GEN_NOFRAME unsigned int F_0107cfe0(void)
{
  GEN_ENTER(0x107cfe0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135efcc) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107cff0 */
GEN_NOFRAME unsigned int F_0107cff0(void)
{
  GEN_ENTER(0x107cff0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135effc) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d000 */
GEN_NOFRAME unsigned int F_0107d000(void)
{
  GEN_ENTER(0x107d000u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f02c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d010 */
GEN_NOFRAME unsigned int F_0107d010(void)
{
  GEN_ENTER(0x107d010u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f05c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d020 */
GEN_NOFRAME unsigned int F_0107d020(void)
{
  GEN_ENTER(0x107d020u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f08c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d030 */
GEN_NOFRAME unsigned int F_0107d030(void)
{
  GEN_ENTER(0x107d030u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f0bc) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d040 */
GEN_NOFRAME unsigned int F_0107d040(void)
{
  GEN_ENTER(0x107d040u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f0ec) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d050 */
GEN_NOFRAME unsigned int F_0107d050(void)
{
  GEN_ENTER(0x107d050u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f11c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d060 */
GEN_NOFRAME unsigned int F_0107d060(void)
{
  GEN_ENTER(0x107d060u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f14c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d070 */
GEN_NOFRAME unsigned int F_0107d070(void)
{
  GEN_ENTER(0x107d070u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f17c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d080 */
GEN_NOFRAME unsigned int F_0107d080(void)
{
  GEN_ENTER(0x107d080u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f1ac) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d090 */
GEN_NOFRAME unsigned int F_0107d090(void)
{
  GEN_ENTER(0x107d090u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f1dc) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d0a0 */
GEN_NOFRAME unsigned int F_0107d0a0(void)
{
  GEN_ENTER(0x107d0a0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f20c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d0b0 */
GEN_NOFRAME unsigned int F_0107d0b0(void)
{
  GEN_ENTER(0x107d0b0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f23c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d0c0 */
GEN_NOFRAME unsigned int F_0107d0c0(void)
{
  GEN_ENTER(0x107d0c0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f26c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d0d0 */
GEN_NOFRAME unsigned int F_0107d0d0(void)
{
  GEN_ENTER(0x107d0d0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f29c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d0e0 */
GEN_NOFRAME unsigned int F_0107d0e0(void)
{
  GEN_ENTER(0x107d0e0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f2cc) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d0f0 */
GEN_NOFRAME unsigned int F_0107d0f0(void)
{
  GEN_ENTER(0x107d0f0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f2fc) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d100 */
GEN_NOFRAME unsigned int F_0107d100(void)
{
  GEN_ENTER(0x107d100u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f32c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d110 */
GEN_NOFRAME unsigned int F_0107d110(void)
{
  GEN_ENTER(0x107d110u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f35c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d120 */
GEN_NOFRAME unsigned int F_0107d120(void)
{
  GEN_ENTER(0x107d120u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f38c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d130 */
GEN_NOFRAME unsigned int F_0107d130(void)
{
  GEN_ENTER(0x107d130u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f3bc) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d140 */
GEN_NOFRAME unsigned int F_0107d140(void)
{
  GEN_ENTER(0x107d140u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f3ec) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d150 */
GEN_NOFRAME unsigned int F_0107d150(void)
{
  GEN_ENTER(0x107d150u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f41c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d160 */
GEN_NOFRAME unsigned int F_0107d160(void)
{
  GEN_ENTER(0x107d160u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f44c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d170 */
GEN_NOFRAME unsigned int F_0107d170(void)
{
  GEN_ENTER(0x107d170u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f47c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d180 */
GEN_NOFRAME unsigned int F_0107d180(void)
{
  GEN_ENTER(0x107d180u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f4ac) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d190 */
GEN_NOFRAME unsigned int F_0107d190(void)
{
  GEN_ENTER(0x107d190u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f4dc) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d1a0 */
GEN_NOFRAME unsigned int F_0107d1a0(void)
{
  GEN_ENTER(0x107d1a0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f50c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d1b0 */
GEN_NOFRAME unsigned int F_0107d1b0(void)
{
  GEN_ENTER(0x107d1b0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f53c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d1c0 */
GEN_NOFRAME unsigned int F_0107d1c0(void)
{
  GEN_ENTER(0x107d1c0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f56c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d1d0 */
GEN_NOFRAME unsigned int F_0107d1d0(void)
{
  GEN_ENTER(0x107d1d0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f59c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d1e0 */
GEN_NOFRAME unsigned int F_0107d1e0(void)
{
  GEN_ENTER(0x107d1e0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f5cc) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d1f0 */
GEN_NOFRAME unsigned int F_0107d1f0(void)
{
  GEN_ENTER(0x107d1f0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f5fc) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d200 */
GEN_NOFRAME unsigned int F_0107d200(void)
{
  GEN_ENTER(0x107d200u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f62c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d210 */
GEN_NOFRAME unsigned int F_0107d210(void)
{
  GEN_ENTER(0x107d210u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f65c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d220 */
GEN_NOFRAME unsigned int F_0107d220(void)
{
  GEN_ENTER(0x107d220u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f68c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d230 */
GEN_NOFRAME unsigned int F_0107d230(void)
{
  GEN_ENTER(0x107d230u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f6bc) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d240 */
GEN_NOFRAME unsigned int F_0107d240(void)
{
  GEN_ENTER(0x107d240u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f6ec) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d250 */
GEN_NOFRAME unsigned int F_0107d250(void)
{
  GEN_ENTER(0x107d250u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f71c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d260 */
GEN_NOFRAME unsigned int F_0107d260(void)
{
  GEN_ENTER(0x107d260u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f74c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d270 */
GEN_NOFRAME unsigned int F_0107d270(void)
{
  GEN_ENTER(0x107d270u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f77c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d280 */
GEN_NOFRAME unsigned int F_0107d280(void)
{
  GEN_ENTER(0x107d280u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f7ac) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d290 */
GEN_NOFRAME unsigned int F_0107d290(void)
{
  GEN_ENTER(0x107d290u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f7dc) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d2a0 */
GEN_NOFRAME unsigned int F_0107d2a0(void)
{
  GEN_ENTER(0x107d2a0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f80c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d2b0 */
GEN_NOFRAME unsigned int F_0107d2b0(void)
{
  GEN_ENTER(0x107d2b0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f814) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d2c0 */
GEN_NOFRAME unsigned int F_0107d2c0(void)
{
  GEN_ENTER(0x107d2c0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f81c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d2d0 */
GEN_NOFRAME unsigned int F_0107d2d0(void)
{
  GEN_ENTER(0x107d2d0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x135f824) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[10])REFP(0x1159938))));
  return;
}

/* ref: FUN_0107d2e0 */
GEN_NOFRAME uint F_0107d2e0(void)
{
  GEN_ENTER(0x107d2e0u, 0u, 0u, 0u, 0u);
  uint uVar1;
  
  REFG(undefined * PTR32, 0x135eba0) = ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[1])REFP(0x1159a34))));
  uVar1 = F_00ea7c20(&REFG(undefined * PTR32, 0x135eba0) GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_0107d300 */
GEN_NOFRAME uint F_0107d300(void)
{
  GEN_ENTER(0x107d300u, 0u, 0u, 0u, 0u);
  if (0xf < REFG(undefined4, 0x15e3920)) {
    F_00406ad0(REFG(undefined4, 0x15e390c));
  }
  REFG(undefined4, 0x15e3920) = 0xf;
  *(undefined4 *)&REFG(undefined, 0x15e391c) = 0;
  REFG(undefined4, 0x15e390c) = REFG(undefined4, 0x15e390c) & 0xffffff00;
  return 0;
}

/* ref: FUN_0107d330 */
GEN_NOFRAME unsigned int F_0107d330(void)
{
  GEN_ENTER(0x107d330u, 0u, 0u, 0u, 0u);
  if (7 < REFG(undefined4, 0x15e3940)) {
    F_00406ad0(REFG(undefined4, 0x15e392c));
  }
  REFG(undefined4, 0x15e3940) = 7;
  *(undefined4 *)&REFG(undefined, 0x15e393c) = 0;
  REFG(undefined4, 0x15e392c) = REFG(undefined4, 0x15e392c) & 0xffff0000;
  return;
}

/* ref: FUN_0107d370 */
GEN_NOFRAME unsigned int F_0107d370(void)
{
  GEN_ENTER(0x107d370u, 0u, 0u, 0u, 0u);
  if (7 < REFG(undefined4, 0x15e395c)) {
    F_00406ad0(REFG(undefined4, 0x15e3948));
  }
  REFG(undefined4, 0x15e395c) = 7;
  *(undefined4 *)&REFG(undefined, 0x15e3958) = 0;
  REFG(undefined4, 0x15e3948) = REFG(undefined4, 0x15e3948) & 0xffff0000;
  return;
}

/* ref: FUN_0107d3b0 */
GEN_NOFRAME unsigned int F_0107d3b0(void)
{
  GEN_ENTER(0x107d3b0u, 0u, 0u, 0u, 0u);
  if (7 < REFG(undefined4, 0x15e3978)) {
    F_00406ad0(REFG(undefined4, 0x15e3964));
  }
  REFG(undefined4, 0x15e3978) = 7;
  *(undefined4 *)&REFG(undefined, 0x15e3974) = 0;
  REFG(undefined4, 0x15e3964) = REFG(undefined4, 0x15e3964) & 0xffff0000;
  return;
}

/* ref: FUN_0107d3f0 */
GEN_NOFRAME unsigned int F_0107d3f0(void)
{
  GEN_ENTER(0x107d3f0u, 0u, 0u, 0u, 0u);
  if (7 < REFG(undefined4, 0x15e3994)) {
    F_00406ad0(REFG(undefined4, 0x15e3980));
  }
  REFG(undefined4, 0x15e3994) = 7;
  *(undefined4 *)&REFG(undefined, 0x15e3990) = 0;
  REFG(undefined4, 0x15e3980) = REFG(undefined4, 0x15e3980) & 0xffff0000;
  return;
}

/* ref: FUN_0107d430 */
GEN_NOFRAME unsigned int F_0107d430(void)
{
  GEN_ENTER(0x107d430u, 0u, 0u, 0u, 0u);
  if (7 < REFG(undefined4, 0x15e39b0)) {
    F_00406ad0(REFG(undefined4, 0x15e399c));
  }
  REFG(undefined4, 0x15e39b0) = 7;
  *(undefined4 *)&REFG(undefined, 0x15e39ac) = 0;
  REFG(undefined4, 0x15e399c) = REFG(undefined4, 0x15e399c) & 0xffff0000;
  return;
}

/* ref: FUN_0107d470 */
GEN_NOFRAME unsigned int F_0107d470(void)
{
  GEN_ENTER(0x107d470u, 0u, 0u, 0u, 0u);
  if (7 < REFG(undefined4, 0x15e39cc)) {
    F_00406ad0(REFG(undefined4, 0x15e39b8));
  }
  REFG(undefined4, 0x15e39cc) = 7;
  *(undefined4 *)&REFG(undefined, 0x15e39c8) = 0;
  REFG(undefined4, 0x15e39b8) = REFG(undefined4, 0x15e39b8) & 0xffff0000;
  return;
}

/* ref: FUN_0107d4b0 */
GEN_NOFRAME unsigned int F_0107d4b0(void)
{
  GEN_ENTER(0x107d4b0u, 0u, 0u, 0u, 0u);
  if (7 < REFG(undefined4, 0x15e39e8)) {
    F_00406ad0(REFG(undefined4, 0x15e39d4));
  }
  REFG(undefined4, 0x15e39e8) = 7;
  *(undefined4 *)&REFG(undefined, 0x15e39e4) = 0;
  REFG(undefined4, 0x15e39d4) = REFG(undefined4, 0x15e39d4) & 0xffff0000;
  return;
}

/* ref: FUN_0107d4f0 */
GEN_NOFRAME unsigned int F_0107d4f0(void)
{
  GEN_ENTER(0x107d4f0u, 0u, 0u, 0u, 0u);
  if (7 < REFG(undefined4, 0x15e3a04)) {
    F_00406ad0(REFG(undefined4, 0x15e39f0));
  }
  REFG(undefined4, 0x15e3a04) = 7;
  *(undefined4 *)&REFG(undefined, 0x15e3a00) = 0;
  REFG(undefined4, 0x15e39f0) = REFG(undefined4, 0x15e39f0) & 0xffff0000;
  return;
}

/* ref: FUN_0107d530 */
GEN_NOFRAME unsigned int F_0107d530(void)
{
  GEN_ENTER(0x107d530u, 0u, 0u, 0u, 0u);
  if (7 < REFG(undefined4, 0x15e3a20)) {
    F_00406ad0(REFG(undefined4, 0x15e3a0c));
  }
  REFG(undefined4, 0x15e3a20) = 7;
  *(undefined4 *)&REFG(undefined, 0x15e3a1c) = 0;
  REFG(undefined4, 0x15e3a0c) = REFG(undefined4, 0x15e3a0c) & 0xffff0000;
  return;
}

/* ref: FUN_0107d570 */
GEN_NOFRAME unsigned int F_0107d570(void)
{
  GEN_ENTER(0x107d570u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136962c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d580 */
GEN_NOFRAME unsigned int F_0107d580(void)
{
  GEN_ENTER(0x107d580u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x1369630) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d590 */
GEN_NOFRAME unsigned int F_0107d590(void)
{
  GEN_ENTER(0x107d590u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x1369634) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d5a0 */
GEN_NOFRAME unsigned int F_0107d5a0(void)
{
  GEN_ENTER(0x107d5a0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x1369638) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d5b0 */
GEN_NOFRAME unsigned int F_0107d5b0(void)
{
  GEN_ENTER(0x107d5b0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136963c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d5c0 */
GEN_NOFRAME unsigned int F_0107d5c0(void)
{
  GEN_ENTER(0x107d5c0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x1369640) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d5d0 */
GEN_NOFRAME unsigned int F_0107d5d0(void)
{
  GEN_ENTER(0x107d5d0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x1369644) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d5e0 */
GEN_NOFRAME unsigned int F_0107d5e0(void)
{
  GEN_ENTER(0x107d5e0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x1369c8c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d5f0 */
GEN_NOFRAME unsigned int F_0107d5f0(void)
{
  GEN_ENTER(0x107d5f0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x1369c90) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d600 */
GEN_NOFRAME unsigned int F_0107d600(void)
{
  GEN_ENTER(0x107d600u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x1369c94) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d610 */
GEN_NOFRAME unsigned int F_0107d610(void)
{
  GEN_ENTER(0x107d610u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x1369c98) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d620 */
GEN_NOFRAME unsigned int F_0107d620(void)
{
  GEN_ENTER(0x107d620u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x1369c9c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d630 */
GEN_NOFRAME unsigned int F_0107d630(void)
{
  GEN_ENTER(0x107d630u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136a4fc) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d640 */
GEN_NOFRAME unsigned int F_0107d640(void)
{
  GEN_ENTER(0x107d640u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136a500) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d650 */
GEN_NOFRAME unsigned int F_0107d650(void)
{
  GEN_ENTER(0x107d650u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136a504) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d660 */
GEN_NOFRAME unsigned int F_0107d660(void)
{
  GEN_ENTER(0x107d660u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136a508) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d670 */
GEN_NOFRAME unsigned int F_0107d670(void)
{
  GEN_ENTER(0x107d670u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136a50c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d680 */
GEN_NOFRAME unsigned int F_0107d680(void)
{
  GEN_ENTER(0x107d680u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136a510) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d690 */
GEN_NOFRAME unsigned int F_0107d690(void)
{
  GEN_ENTER(0x107d690u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136a514) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d6a0 */
GEN_NOFRAME unsigned int F_0107d6a0(void)
{
  GEN_ENTER(0x107d6a0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136aedc) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d6b0 */
GEN_NOFRAME unsigned int F_0107d6b0(void)
{
  GEN_ENTER(0x107d6b0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136aee0) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d6c0 */
GEN_NOFRAME unsigned int F_0107d6c0(void)
{
  GEN_ENTER(0x107d6c0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136aee4) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d6d0 */
GEN_NOFRAME unsigned int F_0107d6d0(void)
{
  GEN_ENTER(0x107d6d0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136aee8) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d6e0 */
GEN_NOFRAME unsigned int F_0107d6e0(void)
{
  GEN_ENTER(0x107d6e0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136aeec) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d6f0 */
GEN_NOFRAME unsigned int F_0107d6f0(void)
{
  GEN_ENTER(0x107d6f0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136aef0) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d700 */
GEN_NOFRAME unsigned int F_0107d700(void)
{
  GEN_ENTER(0x107d700u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136aef4) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d710 */
GEN_NOFRAME unsigned int F_0107d710(void)
{
  GEN_ENTER(0x107d710u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136b480) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d720 */
GEN_NOFRAME unsigned int F_0107d720(void)
{
  GEN_ENTER(0x107d720u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136b484) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d730 */
GEN_NOFRAME unsigned int F_0107d730(void)
{
  GEN_ENTER(0x107d730u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136b488) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d740 */
GEN_NOFRAME unsigned int F_0107d740(void)
{
  GEN_ENTER(0x107d740u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136b48c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d750 */
GEN_NOFRAME unsigned int F_0107d750(void)
{
  GEN_ENTER(0x107d750u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136b490) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d760 */
GEN_NOFRAME unsigned int F_0107d760(void)
{
  GEN_ENTER(0x107d760u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136b850) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d770 */
GEN_NOFRAME unsigned int F_0107d770(void)
{
  GEN_ENTER(0x107d770u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136b854) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d780 */
GEN_NOFRAME unsigned int F_0107d780(void)
{
  GEN_ENTER(0x107d780u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136b858) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d790 */
GEN_NOFRAME unsigned int F_0107d790(void)
{
  GEN_ENTER(0x107d790u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136b85c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d7a0 */
GEN_NOFRAME unsigned int F_0107d7a0(void)
{
  GEN_ENTER(0x107d7a0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136b860) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d7b0 */
GEN_NOFRAME unsigned int F_0107d7b0(void)
{
  GEN_ENTER(0x107d7b0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136b864) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d7c0 */
GEN_NOFRAME unsigned int F_0107d7c0(void)
{
  GEN_ENTER(0x107d7c0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136b868) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d7d0 */
GEN_NOFRAME unsigned int F_0107d7d0(void)
{
  GEN_ENTER(0x107d7d0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136bda8) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d7e0 */
GEN_NOFRAME unsigned int F_0107d7e0(void)
{
  GEN_ENTER(0x107d7e0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136bdac) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d7f0 */
GEN_NOFRAME unsigned int F_0107d7f0(void)
{
  GEN_ENTER(0x107d7f0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136bdb0) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d800 */
GEN_NOFRAME unsigned int F_0107d800(void)
{
  GEN_ENTER(0x107d800u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136bdb4) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d810 */
GEN_NOFRAME unsigned int F_0107d810(void)
{
  GEN_ENTER(0x107d810u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136bdb8) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d820 */
GEN_NOFRAME unsigned int F_0107d820(void)
{
  GEN_ENTER(0x107d820u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136bdbc) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d830 */
GEN_NOFRAME unsigned int F_0107d830(void)
{
  GEN_ENTER(0x107d830u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136bdc0) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d840 */
GEN_NOFRAME unsigned int F_0107d840(void)
{
  GEN_ENTER(0x107d840u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136c22c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d850 */
GEN_NOFRAME unsigned int F_0107d850(void)
{
  GEN_ENTER(0x107d850u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136c230) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d860 */
GEN_NOFRAME unsigned int F_0107d860(void)
{
  GEN_ENTER(0x107d860u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136c234) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d870 */
GEN_NOFRAME unsigned int F_0107d870(void)
{
  GEN_ENTER(0x107d870u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136c238) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d880 */
GEN_NOFRAME unsigned int F_0107d880(void)
{
  GEN_ENTER(0x107d880u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136c52c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d890 */
GEN_NOFRAME unsigned int F_0107d890(void)
{
  GEN_ENTER(0x107d890u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136c530) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d8a0 */
GEN_NOFRAME unsigned int F_0107d8a0(void)
{
  GEN_ENTER(0x107d8a0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136c534) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d8b0 */
GEN_NOFRAME unsigned int F_0107d8b0(void)
{
  GEN_ENTER(0x107d8b0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136c538) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d8c0 */
GEN_NOFRAME unsigned int F_0107d8c0(void)
{
  GEN_ENTER(0x107d8c0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136c53c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d8d0 */
GEN_NOFRAME unsigned int F_0107d8d0(void)
{
  GEN_ENTER(0x107d8d0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136c540) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d8e0 */
GEN_NOFRAME unsigned int F_0107d8e0(void)
{
  GEN_ENTER(0x107d8e0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136c544) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d8f0 */
GEN_NOFRAME unsigned int F_0107d8f0(void)
{
  GEN_ENTER(0x107d8f0u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136c548) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d900 */
GEN_NOFRAME unsigned int F_0107d900(void)
{
  GEN_ENTER(0x107d900u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136c54c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d910 */
GEN_NOFRAME unsigned int F_0107d910(void)
{
  GEN_ENTER(0x107d910u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136c550) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d920 */
GEN_NOFRAME unsigned int F_0107d920(void)
{
  GEN_ENTER(0x107d920u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136c554) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d930 */
GEN_NOFRAME unsigned int F_0107d930(void)
{
  GEN_ENTER(0x107d930u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136c558) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d940 */
GEN_NOFRAME unsigned int F_0107d940(void)
{
  GEN_ENTER(0x107d940u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136c55c) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d950 */
GEN_NOFRAME unsigned int F_0107d950(void)
{
  GEN_ENTER(0x107d950u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136c560) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

/* ref: FUN_0107d960 */
GEN_NOFRAME unsigned int F_0107d960(void)
{
  GEN_ENTER(0x107d960u, 0u, 0u, 0u, 0u);
  REFG(undefined * PTR32, 0x136c564) =
       ((undefined *)GEN_TOP((*(undefined * PTR32 (*)[21])REFP(0x11584bc))));
  return;
}

