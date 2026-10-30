#include "translated.h"
#pragma warning(disable: 4024 4047 4133 4244 4305 4311 4312 4700 4715 4716 4717 4022 4028 4090 4146 4554 4033)
/* ref: hkBsdSocket::vf7 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbf6d0(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1, unsigned int gen_a2)
{
  GEN_ENTER(0xdbf6d0u, gen_a0, gen_a1, gen_a2, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[2];
  gen_args[0] = gen_a1;
  gen_args[1] = gen_a2;
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  ushort uVar1;
  char * extraout_EAX = 0;
  ulong uVar2;
  undefined * phVar3;
  uint uVar4;
  int iVar5;
  
  F_00da1030(((undefined *)(gen_frame + 0x0)),0,0x10);
  (*(ushort *)((char *)((undefined *)(gen_frame + 0x0)))) = 2;
  uVar1 = gen_imp_htons((ushort)(*(undefined4 *)&gen_args[1]));
  (*((char *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x0)) + 2) + (0) * 1))))) = (char)uVar1;
  (*((char *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x0)) + 2) + (1) * 1))))) = (char)(uVar1 >> 8);
  F_00dbf6c0((int)&(*(undefined4 *)&gen_args[1]) + 3,(int)*(*(char * PTR32 *)&gen_args[0]));
  if (*extraout_EAX == '\0') {
    phVar3 = gen_imp_gethostbyname((*(char * PTR32 *)&gen_args[0]));
    if (phVar3 == ((undefined *)GEN_TOP(0x0))) {
      return 1;
    }
    F_00da1010(((char *)(((char *)((undefined *)(gen_frame + 0x0)) + 2))) + 2,*(*(undefined * PTR32 *)(((char *)(phVar3) + 12))),(int)(*(short *)(((char *)(phVar3) + 10))));
  }
  else {
    uVar2 = gen_imp_inet_addr((*(char * PTR32 *)&gen_args[0]));
    (*((char *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x0)) + 2) + (2) * 1))))) = (char)uVar2;
    (*((char *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x0)) + 2) + (3) * 1))))) = (char)(uVar2 >> 8);
    (*((char *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x0)) + 2) + (4) * 1))))) = (char)(uVar2 >> 0x10);
    (*((char *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x0)) + 2) + (5) * 1))))) = (char)(uVar2 >> 0x18);
  }
  if ((*(int *)(this + 0x20) == -1) && (uVar4 = F_00dbf5f0(this GEN_EDX_ARG), uVar4 != 0)) {
    return 1;
  }
  iVar5 = gen_imp_connect(*(SOCKET *)(this + 0x20),((undefined *)(gen_frame + 0x0)),0x10);
  if ((iVar5 < 0) && (iVar5 = gen_imp_WSAGetLastError(), iVar5 != 0x2733)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
    return 1;
  }
  return 0;
}

/* ref: hkBsdSocket::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbf790(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(HWND param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdbf790u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(HWND param_1 = (HWND)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  int iVar1;
  
  iVar1 = gen_imp_WSAAsyncSelect(*(SOCKET *)(this + 0x20),param_1,param_2,(param_3 & 0xc) * 4 | param_3 & 3)
  ;
  return (uint)(iVar1 != 0);
}

/* ref: hkBsdSocket::vf10 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00dbf7c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdbf7c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x110, 0, 4);
  SOCKET SVar1;
  int iVar2;
  
  SVar1 = *(SOCKET *)(this + 0x20);
  if (SVar1 != 0xffffffff) {
    (*(long *)((char *)&((*(undefined8 *)(gen_frame + 0x104))))) = 0;
    (*(long *)(((char *)&((*(undefined8 *)(gen_frame + 0x104))) + 4))) = 0;
    (*((SOCKET *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x0)) + 4) + (0) * 4))))) = SVar1;
    (*(uint *)((char *)((undefined *)(gen_frame + 0x0)))) = 1;
    iVar2 = gen_imp_select(SVar1 + 1,((undefined *)(gen_frame + 0x0)),((undefined *)GEN_TOP(0x0)),((undefined *)GEN_TOP(0x0)),&(*(undefined8 *)(gen_frame + 0x104)));
    return 0 < iVar2;
  }
  return 0;
}

/* ref: FUN_00dbf810 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbf810(GEN_P(ulong param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(char param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbf810u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(ulong param_1 = (ulong)gen_a0;)
  GEN_PIN(char param_2 = (char)gen_a1;)
  GEN_FRAME_DECL_TOP(0x8, 8, 4);
  int iVar1;
  
  (*(ulong *)(gen_frame + 0x0)) = param_1;
  (*(ulong *)(gen_frame + 0x0)) = (uint)(param_2 == '\0');
  iVar1 = gen_imp_ioctlsocket(*((SOCKET *)GEN_TOP((param_1 + 0x20))),-0x7ffb9982,&(*(ulong *)(gen_frame + 0x0)));
  return (uint)(iVar1 != 0);
}

/* ref: FUN_00dbf840 */
GEN_LIB GEN_FRAME unsigned int F_00dbf840(void)
{
  GEN_ENTER(0xdbf840u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0x3a0, 0, 4);
  code * pcVar1;
  int iVar2;
  uint uVar3;
  
  if (REFG(char, 0x15e0068) == '\0') {
    iVar2 = gen_imp_WSAStartup(0x202,((undefined *)(gen_frame + 0x0)));
    if (iVar2 == -1) {
      F_00da0a80(((undefined1 *)(gen_frame + 0x390)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x190)),0x200);
      F_00d9fe80(((undefined1 *)(gen_frame + 0x390)) GEN_EDX_ARG,((char *)REFP(0x113ddf4)));
      uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                        (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,3,0x321825f8,((undefined1 *)(gen_frame + 0x190)),
                         ((char *)REFP(0x113ddcc)),0x49);
      if (uVar3 != 0) {
        pcVar1 = ((code *)GEN_TOP(swi(3)));
        (*pcVar1)();
        return;
      }
      F_00d9fda0(((undefined1 *)(gen_frame + 0x390)) GEN_EDX_ARG);
    }
    REFG(char, 0x15e0068) = '\x01';
  }
  return;
}

/* ref: FUN_00dbf8d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dbf8d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdbf8d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x113de20));
  F_00dbf5d0(this GEN_EDX_FWD);
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x14))) = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  *((undefined * PTR32 * PTR32 *)GEN_TOP(((int)this + 8))) = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[2])REFP(0x1099440));
  return 0x1099440;
}

/* ref: FUN_00dbf8f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbf8f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbf8f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  F_00db2fd0(this GEN_EDX_FWD);
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x113de20));
  *((int *)GEN_TOP(((int)this + 0x20))) = param_1;
  if (param_1 == -1) {
    F_00dbf5f0(this GEN_EDX_ARG);
  }
  return (uint)this;
}

/* ref: hkBsdSocket::vf11 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbf920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdbf920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x4c4, 12, 4);
  undefined4 in;
  int iVar1;
  SOCKET SVar2;
  char * pcVar3;
  LPVOID pvVar4;
  undefined * this_00;
  uint uVar5;
  
  SVar2 = *(SOCKET *)(this + 0x20);
  if (SVar2 != 0xffffffff) {
    (*((SOCKET *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x304)) + 4) + (0) * 4))))) = SVar2;
    (*((SOCKET *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x200)) + 4) + (0) * 4))))) = SVar2;
    (*(uint *)((char *)((undefined *)(gen_frame + 0x304)))) = 1;
    (*(uint *)((char *)((undefined *)(gen_frame + 0x200)))) = 1;
    (*(long *)((char *)&((*(undefined8 *)(gen_frame + 0x4b0))))) = 0;
    (*(long *)(((char *)&((*(undefined8 *)(gen_frame + 0x4b0))) + 4))) = 0;
    iVar1 = gen_imp_select(SVar2 + 1,((undefined *)(gen_frame + 0x304)),((undefined *)GEN_TOP(0x0)),((undefined *)(gen_frame + 0x200)),&(*(undefined8 *)(gen_frame + 0x4b0)));
    if (0 < iVar1) {
      iVar1 = gen_imp___WSAFDIsSet(*(SOCKET *)(this + 0x20),((undefined *)(gen_frame + 0x304)));
      if (iVar1 != 0) {
        SVar2 = *(SOCKET *)(this + 0x20);
        (*(int *)(gen_frame + 0x4b8)) = 0x10;
        SVar2 = gen_imp_accept(SVar2,((undefined *)(gen_frame + 0x494)),&(*(int *)(gen_frame + 0x4b8)));
        (*(undefined1 * PTR32 *)(gen_frame + 0x408)) = ((undefined1 *)(gen_frame + 0x414));
        (*(undefined4 *)(gen_frame + 0x410)) = 0x80000080;
        (*(undefined4 *)(gen_frame + 0x40c)) = 1;
        ((undefined1 *)(gen_frame + 0x414))[0] = 0;
        gen_imp_ntohs((*((undefined2 *)GEN_TOP(((char *)((char *)(((char *)((undefined *)(gen_frame + 0x494)) + 2))) + 0)))));
        (*(undefined1 *)((char *)&in + 2)) = (*((char *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x494)) + 2) + (4) * 1)))));
        (*(undefined1 *)((char *)&in + 3)) = (*((char *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x494)) + 2) + (5) * 1)))));
        (*(undefined1 *)((char *)&in + 0)) = (*((char *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x494)) + 2) + (2) * 1)))));
        (*(undefined1 *)((char *)&in + 1)) = (*((char *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x494)) + 2) + (3) * 1)))));
        pcVar3 = gen_imp_inet_ntoa(in);
        F_00da4890(&(*(undefined1 * PTR32 *)(gen_frame + 0x408)),((char *)REFP(0x113de50)),pcVar3);
        F_00da0a80(((undefined1 *)(gen_frame + 0x4a4)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
        F_00da0470(((undefined1 *)(gen_frame + 0x4a4)) GEN_EDX_ARG,&(*(undefined1 * PTR32 *)(gen_frame + 0x408)));
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                  (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x113ddcc)),
                   0x1c3);
        F_00d9fda0(((undefined1 *)(gen_frame + 0x4a4)) GEN_EDX_ARG);
        if (SVar2 != 0xffffffff) {
          ((char *)(gen_frame + 0x4bc))[0] = '\x01';
          ((char *)(gen_frame + 0x4bc))[1] = '\0';
          ((char *)(gen_frame + 0x4bc))[2] = '\0';
          ((char *)(gen_frame + 0x4bc))[3] = '\0';
          gen_imp_setsockopt(SVar2,6,1,((char *)(gen_frame + 0x4bc)),4);
          pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
          this_00 = ((undefined *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x2c))) + 4))))
                                      (*((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x2c))) GEN_EDX_ARG,0x24)));
          *((undefined2 *)GEN_TOP(((int)this_00 + 4))) = 0x24;
          uVar5 = F_00dbf8f0(this_00 GEN_EDX_ARG,SVar2);
          F_00d877b0(&(*(undefined1 * PTR32 *)(gen_frame + 0x408)) GEN_EDX_ARG);
          return uVar5;
        }
        F_00d877b0(&(*(undefined1 * PTR32 *)(gen_frame + 0x408)) GEN_EDX_ARG);
      }
    }
  }
  return 0;
}

/* ref: hkBsdSocket::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbfac0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbfac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_FRAME_DECL_TOP(0x3b0, 0, 4);
  SOCKET s;
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined * pvVar4;
  undefined1 * PTR32 * ppuVar5;
  char * pcVar6;
  
  uVar2 = F_00dbf5f0(this GEN_EDX_FWD);
  if (uVar2 != 0) {
    return 1;
  }
  (*(ushort *)((char *)((undefined *)(gen_frame + 0x398)))) = 2;
  (*((char *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x398)) + 2) + (2) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x398)) + 2) + (3) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x398)) + 2) + (4) * 1))))) = '\0';
  (*((char *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x398)) + 2) + (5) * 1))))) = '\0';
  uVar1 = gen_imp_htons((ushort)param_1);
  s = *(SOCKET *)(this + 0x20);
  (*((char *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x398)) + 2) + (0) * 1))))) = (char)uVar1;
  (*((char *)GEN_TOP(((((char *)((undefined *)(gen_frame + 0x398)) + 2) + (1) * 1))))) = (char)(uVar1 >> 8);
  ((char *)(gen_frame + 0x3a8))[0] = '\x01';
  ((char *)(gen_frame + 0x3a8))[1] = '\0';
  ((char *)(gen_frame + 0x3a8))[2] = '\0';
  ((char *)(gen_frame + 0x3a8))[3] = '\0';
  gen_imp_setsockopt(s,0xffff,4,((char *)(gen_frame + 0x3a8)),4);
  iVar3 = gen_imp_bind(*(SOCKET *)(this + 0x20),((undefined *)(gen_frame + 0x398)),0x10);
  if (iVar3 != -1) {
    iVar3 = gen_imp_listen(*(SOCKET *)(this + 0x20),2);
    if (iVar3 != -1) {
      (*(undefined1 * PTR32 *)(gen_frame + 0x300)) = ((undefined1 *)(gen_frame + 0x30c));
      (*(undefined4 *)(gen_frame + 0x308)) = 0x80000080;
      (*(undefined4 *)(gen_frame + 0x304)) = 1;
      ((undefined1 *)(gen_frame + 0x30c))[0] = 0;
      gen_imp_gethostname(((char *)(gen_frame + 0x200)),0x100);
      F_00da46f0(&(*(undefined1 * PTR32 *)(gen_frame + 0x300)) GEN_EDX_ARG,((char *)(gen_frame + 0x200)));
      F_00da0a80(((undefined1 *)(gen_frame + 0x38c)) GEN_EDX_ARG,((undefined1 *)(gen_frame + 0x0)),0x200);
      pcVar6 = ((char *)REFP(0x113de88));
      ppuVar5 = &(*(undefined1 * PTR32 *)(gen_frame + 0x300));
      pvVar4 = ((undefined *)GEN_TOP(F_00d9fe80(((undefined1 *)(gen_frame + 0x38c)) GEN_EDX_ARG,((char *)REFP(0x113de74)))));
      pvVar4 = ((undefined *)GEN_TOP(F_00da0470(pvVar4 GEN_EDX_ARG,ppuVar5)));
      pvVar4 = ((undefined *)GEN_TOP(F_00d9fe80(pvVar4 GEN_EDX_ARG,pcVar6)));
      F_00d9ff40(pvVar4 GEN_EDX_ARG,param_1);
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*REFG(int * PTR32, 0x15dff78) + 0xc))))
                (REFG(int * PTR32, 0x15dff78) GEN_EDX_ARG,0,0xffffffff,((undefined1 *)(gen_frame + 0x0)),((char *)REFP(0x113ddcc)),
                 0x18c);
      F_00d9fda0(((undefined1 *)(gen_frame + 0x38c)) GEN_EDX_ARG);
      F_00d877b0(&(*(undefined1 * PTR32 *)(gen_frame + 0x300)) GEN_EDX_ARG);
      return 0;
    }
  }
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_ARG);
  return 1;
}

/* ref: FUN_00dbfc30 */
GEN_LIB GEN_FRAME uint F_00dbfc30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdbfc30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP((param_1 + 4))));
  return uVar2;
}

/* ref: hkBsdSocket::vf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbfc60(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbfc60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00dbf8d0(param_1 GEN_EDX_FWD);
  if ((param_2 & 1) != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,(uint)*((ushort *)GEN_TOP(((int)param_1 + 4))));
  }
  return (uint)param_1;
}

/* ref: FUN_00dbfca0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbfca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdbfca0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00dbfcc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbfcc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdbfcc0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD,param_1,param_2 * 0x48);
  return uVar1;
}

/* ref: FUN_00dbfce0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbfce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdbfce0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD,param_1 * 4);
  return uVar1;
}

/* ref: FUN_00dbfd00 */
GEN_LIB GEN_NOFRAME unsigned int F_00dbfd00(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdbfd00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x18, 8);
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char * pcVar5;
  int iVar6;
  
  do {
    (*(int *)(gen_frame + 0x0)) = param_2;
    uVar3 = *((undefined4 *)GEN_TOP((param_1 + (param_2 + param_3 >> 1) * 4)));
    iVar6 = param_3;
    do {
      pcVar5 = ((char *)GEN_TOP((*param_4)(&(*(undefined1 *)(gen_frame + 0x7)),*((undefined4 *)GEN_TOP((param_1 + (*(int *)(gen_frame + 0x0)) * 4))),uVar3)));
      cVar2 = *pcVar5;
      while (cVar2 != '\0') {
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
        pcVar5 = ((char *)GEN_TOP((*param_4)(&(*(undefined1 *)(gen_frame + 0x7)),*((undefined4 *)GEN_TOP((param_1 + (*(int *)(gen_frame + 0x0)) * 4))),uVar3)));
        cVar2 = *pcVar5;
      }
      pcVar5 = ((char *)GEN_TOP((*param_4)(&(*(undefined1 *)(gen_frame + 0x6)),uVar3,*((undefined4 *)GEN_TOP((param_1 + iVar6 * 4))))));
      cVar2 = *pcVar5;
      while (cVar2 != '\0') {
        iVar1 = iVar6 * 4;
        iVar6 = iVar6 - 1;
        pcVar5 = ((char *)GEN_TOP((*param_4)(&(*(undefined1 *)(gen_frame + 0x6)),uVar3,*((undefined4 *)GEN_TOP((param_1 - 4 + iVar1))))));
        cVar2 = *pcVar5;
      }
      if (iVar6 < (*(int *)(gen_frame + 0x0))) break;
      if (iVar6 != (*(int *)(gen_frame + 0x0))) {
        uVar4 = *((undefined4 *)GEN_TOP((param_1 + iVar6 * 4)));
        *((undefined4 *)GEN_TOP((param_1 + iVar6 * 4))) = *((undefined4 *)GEN_TOP((param_1 + (*(int *)(gen_frame + 0x0)) * 4)));
        *((undefined4 *)GEN_TOP((param_1 + (*(int *)(gen_frame + 0x0)) * 4))) = uVar4;
      }
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
      iVar6 = iVar6 - 1;
    } while ((*(int *)(gen_frame + 0x0)) <= iVar6);
    if (param_2 < iVar6) {
      F_00dbfd00(param_1,param_2,iVar6,param_4);
    }
    param_2 = (*(int *)(gen_frame + 0x0));
    if (param_3 <= (*(int *)(gen_frame + 0x0))) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00dbfdf0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbfdf0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdbfdf0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00dbfe10 */
GEN_LIB GEN_FRAME uint F_00dbfe10(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint * param_2, unsigned int gen_a1), GEN_P(uint * param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdbfe10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint * param_2 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(uint * param_3 = (uint *)(uintptr_t)gen_a2;)
  *((bool *)GEN_TOP(param_1)) = *param_2 < *param_3;
  return param_1;
}

/* ref: FUN_00dbfe30 */
GEN_LIB GEN_FRAME unsigned int F_00dbfe30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdbfe30u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (1 < param_2) {
    F_00dbfd00(param_1,0,param_2 - 1,param_3);
  }
  return;
}

/* ref: FUN_00dbfe60 */
GEN_LIB GEN_FRAME uint F_00dbfe60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbfe60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) GEN_EDX_ARG,param_1,param_2 * 4);
  return uVar2;
}

/* ref: FUN_00dbfe90 */
GEN_LIB GEN_FRAME uint F_00dbfe90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbfe90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) GEN_EDX_ARG,param_1,param_2 * 0x48);
  return uVar2;
}

/* ref: FUN_00dbfec0 */
GEN_LIB GEN_FRAME uint F_00dbfec0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdbfec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) + 4))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) GEN_EDX_ARG,param_1 * 4);
  return uVar2;
}

/* ref: FUN_00dbfef0 */
GEN_LIB GEN_FRAME uint F_00dbfef0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdbfef0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) + 8))))
                    (*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x30))) GEN_EDX_ARG,param_1,param_2 * 4);
  return uVar2;
}

/* ref: FUN_00dbff20 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dbff20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdbff20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  LPVOID pvVar4;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    iVar2 = *((int *)GEN_TOP(((int)this + 8)));
    pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x30))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x30))) GEN_EDX_ARG,iVar1,iVar2 * 4)
    ;
    uVar3 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    iVar1 = *((int *)GEN_TOP(((int)this + 8)));
    pvVar4 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x30))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar4 + 0x30))) GEN_EDX_ARG,uVar3,iVar1 * 0x48);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return 0;
}

/* ref: FUN_00dbffa0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dbffa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdbffa0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 uVar1;
  LPVOID pvVar2;
  int * piVar3;
  int iVar4;
  uint uVar5;
  undefined4 * puVar6;
  int iVar7;
  int * piVar8;
  undefined4 * puVar9;
  code * pcVar10;
  undefined4 * puVar11;
  int local_c;
  undefined4 * local_8;
  
  pcVar10 = (((code *)GEN_TOP(gen_imp_TlsGetValue)));
  iVar7 = *((int *)GEN_TOP(((int)this + 8)));
  if (1 < iVar7) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    piVar3 = ((int *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x30))) + 4))))
                              (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x30))) GEN_EDX_ARG,iVar7 * 4)));
    iVar7 = 0;
    if (0 < *((int *)GEN_TOP(((int)this + 8)))) {
      do {
        iVar4 = iVar7 + 1;
        piVar3[iVar7] = *(int *)this + iVar7 * 4;
        iVar7 = iVar4;
      } while (iVar4 < *((int *)GEN_TOP(((int)this + 8))));
    }
    if (1 < *((int *)GEN_TOP(((int)this + 8)))) {
      F_00dbfd00(piVar3,0,*((int *)GEN_TOP(((int)this + 8))) - 1,((code *)REFP(0xdbfe10)));
    }
    iVar7 = *((int *)GEN_TOP(((int)this + 8)));
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    uVar5 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x30))) + 4))))
                      (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x30))) GEN_EDX_ARG,iVar7 * 4);
    iVar7 = *((int *)GEN_TOP(((int)this + 8)));
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    puVar6 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x30))) + 4))))
                       (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x30))) GEN_EDX_ARG,iVar7 * 0x48)));
    local_c = 0;
    if (0 < *((int *)GEN_TOP(((int)this + 8)))) {
      piVar8 = piVar3;
      local_8 = puVar6;
      do {
        *((undefined4 *)GEN_TOP(((uVar5 - (int)piVar3) + (int)piVar8))) = *((undefined4 *)GEN_TOP(*piVar8));
        local_c = local_c + 1;
        puVar9 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) + (*piVar8 - *(int *)((int)(uintptr_t)this) >> 2) * 0x48)));
        puVar11 = local_8;
        for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 - 1) {
          *puVar11 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar11 = puVar11 + 1;
        }
        piVar8 = piVar8 + 1;
        pcVar10 = (((code *)GEN_TOP(gen_imp_TlsGetValue)));
        local_8 = local_8 + 0x12;
      } while (local_c < *((int *)GEN_TOP(((int)this + 8))));
    }
    iVar7 = *((int *)GEN_TOP(((int)this + 8)));
    pvVar2 = (*pcVar10)(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x30))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x30))) GEN_EDX_ARG,piVar3,iVar7 * 4);
    uVar1 = *(undefined4 *)this;
    iVar7 = *((int *)GEN_TOP(((int)this + 8)));
    pvVar2 = (*pcVar10)(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x30))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x30))) GEN_EDX_ARG,uVar1,iVar7 * 4)
    ;
    uVar1 = *((undefined4 *)GEN_TOP(((int)this + 4)));
    iVar7 = *((int *)GEN_TOP(((int)this + 8)));
    pvVar2 = (*pcVar10)(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x30))) + 8))))
              (*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x30))) GEN_EDX_ARG,uVar1,iVar7 * 0x48);
    *(uint *)this = uVar5;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 4))) = puVar6;
  }
  return;
}

/* ref: FUN_00dc0150 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dc0150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc0150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint * puVar1;
  uint * puVar2;
  uint * puVar3;
  uint * puVar4;
  
  F_00dbffa0(this GEN_EDX_FWD);
  F_00dbffa0(param_1 GEN_EDX_ARG);
  puVar3 = *(uint * PTR32 *)this;
  puVar1 = puVar3 + *((int *)GEN_TOP(((int)this + 8)));
  puVar4 = ((uint *)GEN_TOP(*param_1));
  puVar2 = puVar4 + param_1[2];
  do {
    while( true ) {
      if ((puVar1 <= puVar3) || (puVar2 <= puVar4)) {
        return 0;
      }
      if (*puVar3 != *puVar4) break;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
LAB_00dc0195: ;
      puVar4 = puVar4 + 1;
    }
    if (*puVar4 <= *puVar3) goto LAB_00dc0195;
    puVar3 = puVar3 + 1;
  } while( true );
}

/* ref: FUN_00dc01b0 */
GEN_LIB GEN_FRAME double F_00dc01b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2), GEN_P(undefined4 param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdc01b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a3;)
  return GEN_X87((double)(longlong)CONCAT44(param_2,param_1) / (double)(longlong)CONCAT44(param_4,param_3));
}

/* ref: FUN_00dc01e0 */
GEN_LIB GEN_FRAME double F_00dc01e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc01e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  ulonglong uVar1;
  double dVar2;
  
  uVar1 = F_00dc2660();
  dVar2 = F_00dc01b0(param_1,param_2,(int)uVar1,(int)(uVar1 >> 0x20));
  return dVar2;
}

/* ref: FUN_00dc0210 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc0210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc0210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) + 1;
  *param_1 = *(undefined4 *)this;
  *(undefined4 * PTR32 *)this = param_1;
  return (uint)param_1;
}

/* ref: FUN_00dc0250 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc0250(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc0250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  if (param_2 < 0x281) {
    return (int)*((char *)GEN_TOP(((param_2 + 0xf >> 4) + 0xd8 + in_ecx)));
  }
  return *((uint *)GEN_TOP((in_ecx + 0x104 + (param_2 - 1 >> 10) * 4)));
}

/* ref: FUN_00dc0280 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc0280(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc0280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *((uint *)GEN_TOP((in_ecx + 0x94 + param_2 * 4)));
}

/* ref: FUN_00dc02a0 */
GEN_LIB GEN_FRAME uint F_00dc02a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc02a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  code * pcVar1;
  uint uVar2;
  
  if (param_1 < 0x11) {
    return 1;
  }
  if (param_1 < 0x21) {
    return 2;
  }
  if (param_1 < 0x31) {
    return 3;
  }
  if (param_1 < 0x41) {
    return 4;
  }
  if (param_1 < 0x61) {
    return 5;
  }
  if (param_1 < 0x81) {
    return 6;
  }
  if (param_1 < 0xa1) {
    return 7;
  }
  if (param_1 < 0xc1) {
    return 8;
  }
  if (param_1 < 0x101) {
    return 9;
  }
  if (param_1 < 0x141) {
    return 10;
  }
  if (param_1 < 0x201) {
    return 0xb;
  }
  if (param_1 < 0x281) {
    return 0xc;
  }
  if (param_1 < 0x401) {
    return 0xd;
  }
  if (param_1 < 0x801) {
    return 0xe;
  }
  if (param_1 < 0x1001) {
    return 0xf;
  }
  if (param_1 < 0x2001) {
    return 0x10;
  }
  pcVar1 = ((code *)GEN_TOP(swi(3)));
  uVar2 = (*pcVar1)();
  return uVar2;
}

/* ref: hkThreadMemory::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc0390(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc0390u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_FWD,*param_1);
  return uVar1;
}

/* ref: hkThreadMemory::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc03b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5), GEN_P(undefined4 param_6, unsigned int gen_a6), GEN_P(undefined4 param_7, unsigned int gen_a7), GEN_P(undefined4 param_8, unsigned int gen_a8))
{
  GEN_ENTER(0xdc03b0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  GEN_PIN(undefined4 param_6 = (undefined4)gen_a6;)
  GEN_PIN(undefined4 param_7 = (undefined4)gen_a7;)
  GEN_PIN(undefined4 param_8 = (undefined4)gen_a8;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))
                    (this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return uVar1;
}

/* ref: hkThreadMemory::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dc03c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdc03c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  uint uVar1;
  int iVar2;
  
  if (0x2000 < param_3) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x18))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD,param_1,param_2,param_3);
    return;
  }
  iVar2 = 0;
  if (0 < param_2) {
    do {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 4))))(this GEN_EDX_ARG,param_3);
      *((uint *)GEN_TOP((param_1 + iVar2 * 4))) = uVar1;
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  return;
}

/* ref: hkThreadMemory::vf7 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dc0420(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdc0420u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int param_3 = (int)gen_a3;)
  int iVar1;
  
  if (0x2000 < param_3) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x1c))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD,param_1,param_2,param_3);
    return;
  }
  iVar1 = 0;
  if (0 < param_2) {
    do {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 8))))(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP((param_1 + iVar1 * 4))),param_3);
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2);
  }
  return;
}

/* ref: hkThreadMemory::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc0480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc0480u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  undefined * phVar2;
  undefined * phVar3;
  int local_c;
  int local_8;
  
  puVar1 = param_1;
  local_8 = 0;
  local_c = 0;
  *param_1 = 0xffffffff;
  param_1[1] = 0xffffffff;
  param_1[2] = 0xffffffff;
  phVar3 = this + 0x18;
  phVar2 = this + 0x98;
  param_1 = ((undefined4 *)GEN_TOP(0x8));
  do {
    local_8 = local_8 + *(int *)(phVar2 - 4) * *(int *)(phVar3 - 8);
    local_c = local_c + *(int *)phVar3 * *(int *)phVar2;
    phVar2 = phVar2 + 8;
    phVar3 = phVar3 + 0x10;
    param_1 = ((undefined4 *)GEN_TOP(((int)param_1 - 1)));
  } while (param_1 != ((undefined4 *)GEN_TOP(0x0)));
  puVar1[3] = local_c + local_8 + *(int *)(this + 0xd4) * *(int *)(this + 0x90);
  puVar1[4] = 0xffffffff;
  puVar1[5] = 0xffffffff;
  return 0xffffffff;
}

/* ref: FUN_00dc0500 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00dc0500(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc0500u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  code * pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int * piVar5;
  
  iVar4 = 0;
  do {
    iVar3 = iVar4 * 0x10;
    if (iVar3 < 0x11) {
      iVar2 = 1;
    }
    else if (iVar3 < 0x21) {
      iVar2 = 2;
    }
    else if (iVar3 < 0x31) {
      iVar2 = 3;
    }
    else if (iVar3 < 0x41) {
      iVar2 = 4;
    }
    else if (iVar3 < 0x61) {
      iVar2 = 5;
    }
    else if (iVar3 < 0x81) {
      iVar2 = 6;
    }
    else if (iVar3 < 0xa1) {
      iVar2 = 7;
    }
    else if (iVar3 < 0xc1) {
      iVar2 = 8;
    }
    else if (iVar3 < 0x101) {
      iVar2 = 9;
    }
    else if (iVar3 < 0x141) {
      iVar2 = 10;
    }
    else if (iVar3 < 0x201) {
      iVar2 = 0xb;
    }
    else if (iVar3 < 0x281) {
      iVar2 = 0xc;
    }
    else if (iVar3 < 0x401) {
      iVar2 = 0xd;
    }
    else if (iVar3 < 0x801) {
      iVar2 = 0xe;
    }
    else if (iVar3 < 0x1001) {
      iVar2 = 0xf;
    }
    else {
      if (0x2000 < iVar3) {
        pcVar1 = ((code *)GEN_TOP(swi(3)));
        (*pcVar1)();
        return;
      }
      iVar2 = 0x10;
    }
    *((char *)GEN_TOP(((int)this + iVar4 + 0xd8))) = (char)iVar2;
    iVar4 = iVar4 + 1;
    *((int *)GEN_TOP(((int)this + iVar2 * 4 + 0x94))) = iVar3;
  } while (iVar4 < 0x29);
  iVar4 = 0x400;
  piVar5 = ((int *)GEN_TOP(((int)this + 0x104)));
  do {
    if (iVar4 < 0x11) {
      iVar3 = 1;
    }
    else if (iVar4 < 0x21) {
      iVar3 = 2;
    }
    else if (iVar4 < 0x31) {
      iVar3 = 3;
    }
    else if (iVar4 < 0x41) {
      iVar3 = 4;
    }
    else if (iVar4 < 0x61) {
      iVar3 = 5;
    }
    else if (iVar4 < 0x81) {
      iVar3 = 6;
    }
    else if (iVar4 < 0xa1) {
      iVar3 = 7;
    }
    else if (iVar4 < 0xc1) {
      iVar3 = 8;
    }
    else if (iVar4 < 0x101) {
      iVar3 = 9;
    }
    else if (iVar4 < 0x141) {
      iVar3 = 10;
    }
    else if (iVar4 < 0x201) {
      iVar3 = 0xb;
    }
    else if (iVar4 < 0x281) {
      iVar3 = 0xc;
    }
    else if (iVar4 < 0x401) {
      iVar3 = 0xd;
    }
    else if (iVar4 < 0x801) {
      iVar3 = 0xe;
    }
    else if (iVar4 < 0x1001) {
      iVar3 = 0xf;
    }
    else {
      if (0x2000 < iVar4) {
        pcVar1 = ((code *)GEN_TOP(swi(3)));
        (*pcVar1)();
        return;
      }
      iVar3 = 0x10;
    }
    *piVar5 = iVar3;
    *((int *)GEN_TOP(((int)this + iVar3 * 4 + 0x94))) = iVar4;
    iVar4 = iVar4 + 0x400;
    piVar5 = piVar5 + 1;
  } while (iVar4 < 0x2400);
  return;
}

/* ref: FUN_00dc0750 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc0750(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc0750u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int * piVar1;
  int * piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = 0;
  piVar2 = ((int *)GEN_TOP(((int)this + 0x18)));
  piVar1 = ((int *)GEN_TOP(((int)this + 0x98)));
  iVar3 = 8;
  do {
    iVar4 = iVar4 + piVar1[-1] * piVar2[-2];
    iVar5 = iVar5 + *piVar1 * *piVar2;
    piVar1 = piVar1 + 2;
    piVar2 = piVar2 + 4;
    iVar3 = iVar3 - 1;
  } while (iVar3 != 0);
  return iVar5 + iVar4 + *((int *)GEN_TOP(((int)this + 0xd4))) * *((int *)GEN_TOP(((int)this + 0x90)));
}

/* ref: FUN_00dc07b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc07b0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdc07b0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  if (param_2 != 0) {
    *((int *)GEN_TOP((in_ecx + 4))) = param_2;
    *((uint *)GEN_TOP((in_ecx + 8))) = param_3;
    return param_3;
  }
  *((undefined4 *)GEN_TOP((in_ecx + 4))) = 0;
  return 0;
}

/* ref: FUN_00dc07e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc07e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc07e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x14, 12, 4);
  int * piVar1;
  undefined4 * puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *((int *)GEN_TOP(((int)this + 8)));
  if (iVar5 != 0) {
    if (3 < iVar5) {
      iVar5 = 4;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x18))))
              (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((uint *)(gen_frame + 0x0)),iVar5,
               *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x94))));
    iVar4 = 1;
    if (1 < iVar5) {
      do {
        puVar2 = ((undefined4 *)GEN_TOP(((uint *)(gen_frame + 0x0))[(int)(iVar4)]));
        piVar1 = ((int *)GEN_TOP(((int)this + param_1 * 8 + 0x10)));
        *piVar1 = *piVar1 + 1;
        iVar4 = iVar4 + 1;
        *puVar2 = *((undefined4 *)GEN_TOP(((int)this + param_1 * 8 + 0xc)));
        *((undefined4 * PTR32 *)GEN_TOP(((int)this + param_1 * 8 + 0xc))) = puVar2;
      } while (iVar4 < iVar5);
    }
    return ((uint *)(gen_frame + 0x0))[0];
  }
  uVar3 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 4))))
                    (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x94))));
  return uVar3;
}

/* ref: FUN_00dc0870 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc0870(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 * param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc0870u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 * param_2 = (undefined4 *)(uintptr_t)gen_a2;)
  GEN_FRAME_DECL_TOP(0x1c, 4, 4);
  int * piVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 * puVar6;
  int iVar7;
  
  iVar3 = param_1;
  uVar2 = *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x94)));
  (*(undefined4 *)(gen_frame + 0x14)) = uVar2;
  if (*((int *)GEN_TOP(((int)this + 8))) != 0) {
    param_1 = *((int *)GEN_TOP(((int)this + param_1 * 8 + 0x10)));
    iVar5 = *((int *)GEN_TOP(((int)this + 8))) / 2;
    (*(int *)(gen_frame + 0x10)) = iVar5;
    if (iVar5 < param_1) {
      do {
        iVar5 = param_1 - (*(int *)(gen_frame + 0x10));
        if (4 < iVar5) {
          iVar5 = 4;
        }
        iVar7 = 0;
        if (0 < iVar5) {
          do {
            puVar6 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + iVar3 * 8 + 0xc)));
            if (puVar6 == ((undefined4 *)GEN_TOP(0x0))) {
              puVar6 = ((undefined4 *)GEN_TOP(0x0));
            }
            else {
              piVar1 = ((int *)GEN_TOP(((int)this + iVar3 * 8 + 0x10)));
              *piVar1 = *piVar1 - 1;
              *((undefined4 *)GEN_TOP(((int)this + iVar3 * 8 + 0xc))) = *puVar6;
            }
            ((int *)(gen_frame + 0x0))[(int)(iVar7)] = (int)puVar6;
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar5);
        }
        param_1 = param_1 - iVar5;
        ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))
                  (*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,((int *)(gen_frame + 0x0)),iVar5,(*(undefined4 *)(gen_frame + 0x14)));
      } while ((*(int *)(gen_frame + 0x10)) < param_1);
    }
    piVar1 = ((int *)GEN_TOP(((int)this + iVar3 * 8 + 0x10)));
    *piVar1 = *piVar1 + 1;
    *param_2 = *((undefined4 *)GEN_TOP(((int)this + iVar3 * 8 + 0xc)));
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + iVar3 * 8 + 0xc))) = param_2;
    return (uint)param_2;
  }
  uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_ARG,param_2,uVar2);
  return uVar4;
}

/* ref: FUN_00dc0940 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dc0940(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc0940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_FRAME_DECL_TOP(0x18, 8, 4);
  int * piVar1;
  undefined4 * puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *((int *)GEN_TOP(((int)this + param_1 * 8 + 0x10)));
  (*(undefined4 *)(gen_frame + 0x10)) = *((undefined4 *)GEN_TOP(((int)this + param_1 * 4 + 0x94)));
  for (; 0 < iVar5; iVar5 = iVar5 - iVar4) {
    iVar4 = 4;
    if (iVar5 < 5) {
      iVar4 = iVar5;
    }
    iVar3 = 0;
    if (0 < iVar4) {
      do {
        puVar2 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + param_1 * 8 + 0xc)));
        if (puVar2 == ((undefined4 *)GEN_TOP(0x0))) {
          puVar2 = ((undefined4 *)GEN_TOP(0x0));
        }
        else {
          piVar1 = ((int *)GEN_TOP(((int)this + param_1 * 8 + 0x10)));
          *piVar1 = *piVar1 - 1;
          *((undefined4 *)GEN_TOP(((int)this + param_1 * 8 + 0xc))) = *puVar2;
        }
        ((int *)(gen_frame + 0x0))[(int)(iVar3)] = (int)puVar2;
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar4);
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 4))) + 0x1c))))(*((int * PTR32 *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,((int *)(gen_frame + 0x0)),iVar4,(*(undefined4 *)(gen_frame + 0x10)))
    ;
  }
  return 0;
}

/* ref: hkThreadMemory::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc09c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc09c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  int iVar3;
  
  if (0x2000 < param_1) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 4))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD,param_1);
    return uVar2;
  }
  if (param_1 < 0x281) {
    iVar3 = (int)(char)this[(param_1 + 0xf >> 4) + 0xd8];
  }
  else {
    iVar3 = *((int *)GEN_TOP((this + (param_1 - 1 >> 10) * 4 + 0x104)));
  }
  puVar1 = *(undefined4 * PTR32 *)(this + iVar3 * 8 + 0xc);
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *(int *)(this + iVar3 * 8 + 0x10) = *(int *)(this + iVar3 * 8 + 0x10) - 1;
    *(undefined4 *)(this + iVar3 * 8 + 0xc) = *puVar1;
    return (uint)puVar1;
  }
  uVar2 = F_00dc07e0(this GEN_EDX_ARG,iVar3);
  return uVar2;
}

/* ref: hkThreadMemory::vf2 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dc0a20(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc0a20u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  
  if (param_1 != ((undefined4 *)GEN_TOP(0x0))) {
    if (param_2 < 0x2001) {
      if (param_2 < 0x281) {
        iVar1 = (int)(char)this[(param_2 + 0xf >> 4) + 0xd8];
      }
      else {
        iVar1 = *((int *)GEN_TOP((this + (param_2 - 1 >> 10) * 4 + 0x104)));
      }
      if (*(int *)(this + 8) <= *(int *)(this + iVar1 * 8 + 0x10)) {
        F_00dc0870(this GEN_EDX_FWD,iVar1,param_1);
        return;
      }
      *(int *)(this + iVar1 * 8 + 0x10) = *(int *)(this + iVar1 * 8 + 0x10) + 1;
      *param_1 = *(undefined4 *)(this + iVar1 * 8 + 0xc);
      *(undefined4 * PTR32 *)(this + iVar1 * 8 + 0xc) = param_1;
      return;
    }
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 8))))(*(int * PTR32 *)(this + 4) GEN_EDX_ARG,param_1,param_2);
  }
  return;
}

/* ref: hkThreadMemory::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc0a90(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc0a90u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2;
  if (param_2 < 0x2001) {
    if (param_2 < 0x281) {
      iVar1 = (int)(char)this[(param_2 + 0xf >> 4) + 0xd8];
    }
    else {
      iVar1 = *((int *)GEN_TOP((this + (param_2 - 1 >> 10) * 4 + 0x104)));
    }
    iVar1 = *(int *)(this + iVar1 * 4 + 0x94);
  }
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 4) + 0x24))))(*(int * PTR32 *)(this + 4) GEN_EDX_FWD,param_1,iVar1);
  return uVar2;
}

/* ref: hkThreadMemory::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc0af0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdc0af0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  uint uVar1;
  int iVar2;
  
  uVar1 = F_00dc09c0(this GEN_EDX_FWD,*param_3);
  if (uVar1 != 0) {
    iVar2 = *param_3;
    if (param_2 <= iVar2) {
      iVar2 = param_2;
    }
    F_00da3710(uVar1,param_1,iVar2);
  }
  F_00dc0a20(this GEN_EDX_ARG,param_1,param_2);
  return uVar1;
}

/* ref: FUN_00dc0b40 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc0b40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc0b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x113d6d4));
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0xc)));
  iVar2 = 0x10;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00dc0500(this GEN_EDX_FWD);
  F_00dc07b0(((undefined4)(uint)(this)) GEN_EDX_ARG,0,8);
  return ((uint)(uint)(((undefined4)(uint)(this))));
}

/* ref: FUN_00dc0b80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc0b80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc0b80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  int iVar2;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[12])REFP(0x113d6d4));
  puVar1 = ((undefined4 *)GEN_TOP(((int)this + 0xc)));
  iVar2 = 0x10;
  do {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 - 1;
  } while (-1 < iVar2);
  F_00dc0500(this GEN_EDX_FWD);
  F_00dc07b0(((undefined4)(uint)(this)) GEN_EDX_ARG,param_1,8);
  return ((uint)(uint)(((undefined4)(uint)(this))));
}

/* ref: hkThreadMemory::vf11 */
GEN_LIB GEN_NOFRAME unsigned int GEN_THISCALL F_00dc0bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc0bd0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  undefined * phVar2;
  
  iVar1 = 0x10;
  phVar2 = this + 0x90;
  do {
    if (*(int *)phVar2 != 0) {
      F_00dc0940(this GEN_EDX_FWD,iVar1);
    }
    phVar2 = phVar2 - 8;
    iVar1 = iVar1 - 1;
  } while (-1 < iVar1);
  return;
}

/* ref: hkSolverAllocator::vf2 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dc0c10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc0c10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  if ((param_1 != 0) && (param_2 != 0)) {
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 + 0x7fU & 0xffffff80);
  }
  return;
}

/* ref: FUN_00dc0c40 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00dc0c40(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc0c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return param_2 <= *((int *)GEN_TOP((in_ecx + 8))) - *((int *)GEN_TOP((in_ecx + 4)));
}

/* ref: hkSolverAllocator::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc0c60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc0c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  *param_1 = *(int *)(this + 8) - *(int *)(this + 4);
  param_1[3] = *(int *)(this + 8) - *(int *)(this + 0xc);
  param_1[1] = *(int *)(this + 0xc) - *(int *)(this + 4);
  param_1[2] = *(int *)(this + 0x14);
  return (uint)param_1;
}

/* ref: hkSolverAllocator::vf10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc0c90(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc0c90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  uint uVar1;
  
  uVar1 = *((int *)GEN_TOP((in_ecx + 0xc))) - *((int *)GEN_TOP((in_ecx + 4)));
  *((uint *)GEN_TOP((in_ecx + 0x14))) = uVar1;
  return uVar1;
}

/* ref: FUN_00dc0ca0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc0ca0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc0ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x113de94));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((int *)GEN_TOP(((int)this + 0x18))) = (int)this + 0x24;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0x80000040;
  F_00da5ee0(((undefined *)GEN_TOP(((int)this + 0x224))) GEN_EDX_FWD,0);
  return (uint)this;
}

/* ref: FUN_00dc0ce0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc0ce0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc0ce0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint extraout_EAX = 0;
  
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x113de94));
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)((int)this + 0x224));
  F_00d9b7c0(this GEN_EDX_ARG);
  return extraout_EAX;
}

/* ref: FUN_00dc0d00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc0d00(GEN_P(int param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_2, unsigned int gen_a1), GEN_P(char param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdc0d00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int * param_2 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(char param_3 = (char)gen_a2;)
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 * puVar7;
  int iVar8;
  int iVar9;
  int * local_c;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x224);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  iVar6 = *param_2;
  iVar9 = -1;
  if (*((int *)GEN_TOP((param_1 + 0x10))) + 1 <
      (int)((*((uint *)GEN_TOP((param_1 + 0x20))) & 0x3fffffff) * 2 - *((int *)GEN_TOP((param_1 + 0x1c))))) {
    iVar4 = *((int *)GEN_TOP((param_1 + 0x1c))) - 1;
    if (-1 < iVar4) {
      iVar8 = 0x7ffffff;
      local_c = ((int *)GEN_TOP((*((int *)GEN_TOP((param_1 + 0x18))) + 4 + iVar4 * 8)));
      do {
        iVar2 = *local_c;
        if ((iVar6 <= iVar2) && (iVar2 < iVar8)) {
          iVar8 = iVar2;
          iVar9 = iVar4;
        }
        local_c = local_c - 2;
        iVar4 = iVar4 - 1;
      } while (-1 < iVar4);
      if (-1 < iVar9) {
        iVar4 = iVar9 * 8;
        uVar3 = *((uint *)GEN_TOP((iVar4 + *((int *)GEN_TOP((param_1 + 0x18))))));
        if (((param_3 == '\0') || (iVar8 == iVar6)) && ((iVar8 * 2 <= iVar6 * 3 || (iVar6 < 0x401)))
           ) {
          *param_2 = *((int *)GEN_TOP((iVar4 + 4 + *((int *)GEN_TOP((param_1 + 0x18))))));
          *((int *)GEN_TOP((param_1 + 0x1c))) = *((int *)GEN_TOP((param_1 + 0x1c))) - 1;
          puVar7 = ((undefined4 *)GEN_TOP((iVar4 + *((int *)GEN_TOP((param_1 + 0x18))))));
          iVar6 = (*((int *)GEN_TOP((param_1 + 0x1c))) - iVar9) * 8;
          if (0 < iVar6) {
            iVar6 = (iVar6 - 1U >> 2) + 1;
            do {
              *puVar7 = puVar7[2];
              puVar7 = puVar7 + 1;
              iVar6 = iVar6 - 1;
            } while (iVar6 != 0);
          }
        }
        else {
          iVar9 = *((int *)GEN_TOP((param_1 + 0x18)));
          piVar1 = ((int *)GEN_TOP((iVar4 + 4 + iVar9)));
          *piVar1 = *piVar1 - iVar6;
          *((uint *)GEN_TOP((iVar4 + iVar9))) = uVar3 + iVar6;
        }
        uVar5 = *((int *)GEN_TOP((param_1 + 0xc))) - *((int *)GEN_TOP((param_1 + 4)));
        *((int *)GEN_TOP((param_1 + 0x10))) = *((int *)GEN_TOP((param_1 + 0x10))) + 1;
        if (*((uint *)GEN_TOP((param_1 + 0x14))) < uVar5) {
          *((uint *)GEN_TOP((param_1 + 0x14))) = uVar5;
        }
        gen_imp_LeaveCriticalSection(lpCriticalSection);
        return uVar3;
      }
    }
    uVar3 = *((uint *)GEN_TOP((param_1 + 0xc)));
    if (iVar6 <= (int)(*((int *)GEN_TOP((param_1 + 8))) - uVar3)) {
      *((uint *)GEN_TOP((param_1 + 0xc))) = uVar3 + iVar6;
      *param_2 = iVar6;
      uVar5 = *((int *)GEN_TOP((param_1 + 0xc))) - *((int *)GEN_TOP((param_1 + 4)));
      *((int *)GEN_TOP((param_1 + 0x10))) = *((int *)GEN_TOP((param_1 + 0x10))) + 1;
      if (*((uint *)GEN_TOP((param_1 + 0x14))) < uVar5) {
        *((uint *)GEN_TOP((param_1 + 0x14))) = uVar5;
      }
      gen_imp_LeaveCriticalSection(lpCriticalSection);
      return uVar3;
    }
  }
  gen_imp_LeaveCriticalSection(lpCriticalSection);
  return 0;
}

/* ref: hkSolverAllocator::vf4 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dc0e60(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc0e60u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  uint * puVar1;
  LPCRITICAL_SECTION lpCriticalSection;
  int * piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint * puVar7;
  undefined4 * puVar8;
  int iVar9;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(this + 0x224);
  gen_imp_EnterCriticalSection(lpCriticalSection);
  *(int *)(this + 0x10) = *(int *)(this + 0x10) - 1;
  iVar6 = param_1 + param_2;
  if (iVar6 == *(int *)(this + 0xc)) {
    iVar6 = *(int *)(this + 0x1c);
    *(uint *)(this + 0xc) = *(int *)(this + 0xc) - param_2;
    while ((iVar6 != 0 &&
           (piVar2 = ((int *)GEN_TOP((*(int *)(this + 0x18) - 8 + *(int *)(this + 0x1c) * 8))),
           piVar2[1] + *piVar2 == param_1))) {
      *(int *)(this + 0xc) = *piVar2;
      *(int *)(this + 0x1c) = *(int *)(this + 0x1c) - 1;
      iVar6 = *(int *)(this + 0x1c);
    }
    return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
  }
  if (*(int *)(this + 0x1c) == 0) {
    *(undefined4 *)(this + 0x1c) = 1;
    puVar7 = *(uint * PTR32 *)(this + 0x18);
    *puVar7 = param_1;
    puVar7[1] = param_2;
    return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
  }
  iVar4 = *(int *)(this + 0x1c) - 1;
  iVar5 = iVar4;
  if (-1 < iVar4) {
    iVar3 = *(int *)(this + 0x18);
    puVar7 = ((uint *)GEN_TOP((iVar3 + iVar4 * 8)));
    do {
      if (*puVar7 < param_1) {
        if (-1 < iVar5) {
          iVar9 = *((int *)GEN_TOP((iVar3 + 4 + iVar5 * 8)));
          piVar2 = ((int *)GEN_TOP((iVar3 + 4 + iVar5 * 8)));
          if (*((int *)GEN_TOP((iVar3 + iVar5 * 8))) + iVar9 == param_1) {
            iVar9 = iVar9 + param_2;
            *piVar2 = iVar9;
            if ((iVar5 < *(int *)(this + 0x1c) - 1) &&
               (iVar6 == *((int *)GEN_TOP((*(int *)(this + 0x18) + 8 + iVar5 * 8))))) {
              *piVar2 = *((int *)GEN_TOP((*(int *)(this + 0x18) + iVar5 * 8 + 0xc))) + iVar9;
              *(int *)(this + 0x1c) = *(int *)(this + 0x1c) - 1;
              iVar6 = (*(int *)(this + 0x1c) - (iVar5 + 1)) * 8;
              puVar8 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + (iVar5 + 1) * 8)));
              if (0 < iVar6) {
                iVar6 = (iVar6 - 1U >> 2) + 1;
                do {
                  *puVar8 = puVar8[2];
                  puVar8 = puVar8 + 1;
                  iVar6 = iVar6 - 1;
                } while (iVar6 != 0);
                return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
              }
            }
            goto LAB_00dc1008;
          }
        }
        break;
      }
      puVar7 = puVar7 - 2;
      iVar5 = iVar5 - 1;
    } while (-1 < iVar5);
  }
  if ((iVar5 < iVar4) &&
     (puVar7 = ((uint *)GEN_TOP((*(int *)(this + 0x18) + 8 + iVar5 * 8))),
     *((int *)GEN_TOP((*(int *)(this + 0x18) + 8 + iVar5 * 8))) == iVar6)) {
    puVar1 = puVar7 + 1;
    *puVar1 = *puVar1 + param_2;
    *puVar7 = param_1;
    return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
  }
  *(int *)(this + 0x1c) = *(int *)(this + 0x1c) + 1;
  iVar6 = *(int *)(this + 0x1c);
  while (iVar6 = iVar6 - 1, iVar5 + 1 < iVar6) {
    puVar8 = ((undefined4 *)GEN_TOP((*(int *)(this + 0x18) + iVar6 * 8)));
    *puVar8 = *((undefined4 *)GEN_TOP((*(int *)(this + 0x18) - 8 + iVar6 * 8)));
    puVar8[1] = puVar8[-1];
  }
  iVar6 = *(int *)(this + 0x18);
  *((uint *)GEN_TOP((iVar6 + 8 + iVar5 * 8))) = param_1;
  *((uint *)GEN_TOP((iVar6 + 0xc + iVar5 * 8))) = param_2;
LAB_00dc1008: ;
  return (uint)(gen_imp_LeaveCriticalSection(lpCriticalSection));
}

/* ref: FUN_00dc1020 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dc1020(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc1020u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  int iVar1;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x224));
  *((int *)GEN_TOP(((int)this + 0x18))) = (int)this + 0x24;
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0x80000040;
  iVar1 = param_2;
  if (param_1 == 0) {
    iVar1 = 0;
  }
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  *((int *)GEN_TOP(((int)this + 0xc))) = param_1;
  *((int *)GEN_TOP(((int)this + 8))) = param_1 + iVar1;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x224)));
}

/* ref: hkSolverAllocator::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1070(unsigned int gen_a0 GEN_EDX_PARAM, unsigned int gen_a1)
{
  GEN_ENTER(0xdc1070u, gen_a0, gen_a1, 0u, 0u);
  undefined * this = (undefined *)(uintptr_t)gen_a0;
  unsigned int gen_args[1];
  gen_args[0] = gen_a1;
  uint uVar1;
  
  if ((*(uint *)&gen_args[0]) != 0) {
    (*(uint *)&gen_args[0]) = (*(uint *)&gen_args[0]) + 0x7f & 0xffffff80;
    uVar1 = F_00dc0d00(this GEN_EDX_FWD,&(*(uint *)&gen_args[0]),1);
    return uVar1;
  }
  return 0;
}

/* ref: hkSolverAllocator::vf3 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc10a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc10a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dc0d00(this GEN_EDX_FWD,param_1,0);
  return uVar1;
}

/* ref: FUN_00dc10c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc10c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdc10c0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return (uint)this;
}

/* ref: FUN_00dc10f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc10f0(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc10f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 8;
}

/* ref: FUN_00dc1150 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdc1150u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3;
  return param_3;
}

/* ref: hkSolverAllocator::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc1180u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  return param_2;
}

/* ref: FUN_00dc1190 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dc1190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc1190u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  undefined4 * puVar2;
  
  *((int *)GEN_TOP(((int)this + 4))) = *((int *)GEN_TOP(((int)this + 4))) - 1;
  iVar1 = (*((int *)GEN_TOP(((int)this + 4))) - param_1) * 8;
  puVar2 = ((undefined4 *)GEN_TOP((*(int *)this + param_1 * 8)));
  if (0 < iVar1) {
    iVar1 = (iVar1 - 1U >> 2) + 1;
    do {
      *puVar2 = puVar2[2];
      puVar2 = puVar2 + 1;
      iVar1 = iVar1 - 1;
    } while (iVar1 != 0);
  }
  return 0;
}

/* ref: FUN_00dc11d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc11d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc11d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((int *)GEN_TOP((in_ecx + 4))) = *((int *)GEN_TOP((in_ecx + 4))) - param_2;
  return param_2;
}

/* ref: FUN_00dc11e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc11e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc11e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 4)));
  *((int *)GEN_TOP(((int)this + 4))) = param_1 + iVar1;
  return *(int *)this + iVar1 * 8;
}

/* ref: FUN_00dc1200 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xdc1200u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3;
  return param_3;
}

/* ref: hkSolverAllocator::vf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc1220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc1220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  F_00dc0ce0(this GEN_EDX_FWD);
  return (uint)this;
}

/* ref: FUN_00dc1230 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1230(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdc1230u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  *(undefined4 *)this = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 4))) = param_2;
  *((uint *)GEN_TOP(((int)this + 8))) = param_3 | 0x80000000;
  return param_3 | 0x80000000;
}

/* ref: FUN_00dc1250 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1250(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc1250u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *((uint *)GEN_TOP((in_ecx + 0x1c))) = param_2;
  return param_2;
}

/* ref: hkStatsAllocator::vf2 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dc1260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc1260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 4));
  *(int *)(this + 0x20) = *(int *)(this + 0x20) - param_2;
  ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 8))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,param_1,param_2);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 4)));
}

/* ref: hkStatsAllocator::vf8 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dc12a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined8 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc12a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined8 * param_1 = (undefined8 *)(uintptr_t)gen_a1;)
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 4));
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(this + 0x20);
  *param_1 = *(undefined8 *)(this + 0x20);
  param_1[1] = *(undefined8 *)(this + 0x28);
  param_1[2] = *(undefined8 *)(this + 0x30);
  return (uint)(gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 4)));
}

/* ref: hkStatsAllocator::vf10 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc12f0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc12f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  *((uint *)GEN_TOP((in_ecx + 0x28))) = *((uint *)GEN_TOP((in_ecx + 0x24)));
  return *((uint *)GEN_TOP((in_ecx + 0x24)));
}

/* ref: hkStatsAllocator::vf9 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1300(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc1300u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  return param_2;
}

/* ref: FUN_00dc1320 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1320(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc1320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  *(undefined * PTR32 * PTR32 *)this = (*(undefined * PTR32 (*)[11])REFP(0x113dec4));
  F_00da5ee0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,1000);
  *((undefined4 *)GEN_TOP(((int)this + 0x1c))) = param_1;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0xffffffff;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x28))) = 0;
  return (uint)this;
}

/* ref: hkStatsAllocator::vf1 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1360(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc1360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  int iVar1;
  uint uVar2;
  
  gen_imp_EnterCriticalSection((LPCRITICAL_SECTION)(this + 4));
  *(int *)(this + 0x20) = *(int *)(this + 0x20) + param_1;
  iVar1 = *(int *)(this + 0x24);
  if (*(int *)(this + 0x24) < *(int *)(this + 0x28)) {
    iVar1 = *(int *)(this + 0x28);
  }
  *(int *)(this + 0x28) = iVar1;
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**(int * PTR32 *)(this + 0x1c) + 4))))(*(int * PTR32 *)(this + 0x1c) GEN_EDX_ARG,param_1);
  gen_imp_LeaveCriticalSection((LPCRITICAL_SECTION)(this + 4));
  return uVar2;
}

/* ref: hkStatsAllocator::vf0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc13b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc13b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  gen_imp_DeleteCriticalSection((LPCRITICAL_SECTION)(this + 4));
  F_00d9b7c0(this GEN_EDX_ARG);
  return (uint)this;
}

/* ref: FUN_00dc13f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc13f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc13f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = *((undefined4 *)GEN_TOP((param_1 + 8)));
  *((int *)GEN_TOP(((int)this + 0x24))) =
       *((int *)GEN_TOP((param_1 + 0xc))) * *((int *)GEN_TOP(((int)this + 4))) + *((int *)GEN_TOP((param_1 + 8)));
  return param_1;
}

/* ref: FUN_00dc1410 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc1410(GEN_P(undefined4 * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc1410u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * in_ecx = (undefined4 *)(uintptr_t)gen_a0;)
  *in_ecx = 0;
  in_ecx[3] = 0;
  in_ecx[4] = 0;
  in_ecx[5] = 0;
  in_ecx[6] = 0;
  in_ecx[8] = 0;
  in_ecx[9] = 0;
  in_ecx[0xd] = 0;
  in_ecx[0xc] = 0;
  in_ecx[0xb] = 0;
  in_ecx[10] = 0;
  in_ecx[1] = 0;
  return (uint)in_ecx;
}

/* ref: FUN_00dc1440 */
GEN_LIB GEN_FRAME uint F_00dc1440(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc1440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  for (puVar1 = param_1; puVar1 != ((undefined4 *)GEN_TOP(0x0)); puVar1 = ((undefined4 *)GEN_TOP(*puVar1))) {
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}

/* ref: FUN_00dc1460 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc1460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  undefined4 * puVar3;
  uint uVar4;
  
  uVar4 = 0;
  puVar3 = param_1;
  while (puVar3 != ((undefined4 *)GEN_TOP(0x0))) {
    *((int *)GEN_TOP(((int)this + 0x30))) = *((int *)GEN_TOP(((int)this + 0x30))) - puVar3[3];
    *((int *)GEN_TOP(((int)this + 0x34))) = *((int *)GEN_TOP(((int)this + 0x34))) - puVar3[3];
    uVar4 = uVar4 + 1;
    puVar1 = ((undefined4 *)GEN_TOP(*puVar3));
    piVar2 = *((int * PTR32 *)GEN_TOP(((int)this + 0x28)));
    if (*((int *)GEN_TOP(((int)this + 0x2c))) == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_FWD,puVar3,*((undefined4 *)GEN_TOP(((int)this + 0x14))));
      puVar3 = puVar1;
    }
    else {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar2 + 0x10))))(piVar2 GEN_EDX_ARG,puVar3[1],*((undefined4 *)GEN_TOP(((int)this + 0x14))));
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x2c))) GEN_EDX_ARG,puVar3,0x10);
      puVar3 = puVar1;
    }
  }
  return uVar4;
}

/* ref: FUN_00dc14d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc14d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc14d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  F_00dc1460(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0xc))));
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  uVar1 = F_00dc1460(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0x10))));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x14))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  return uVar1;
}

/* ref: FUN_00dc1510 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc1510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc1510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint * puVar1;
  uint * puVar2;
  uint * puVar3;
  
  puVar3 = *(uint * PTR32 *)this;
  puVar1 = *((uint * PTR32 *)GEN_TOP(((int)this + 0x20)));
  puVar2 = puVar3;
  if (*((uint * PTR32 *)GEN_TOP(((int)this + 0x20))) < *((uint *)GEN_TOP(((int)this + 0x24)))) {
    do {
      puVar3 = puVar1;
      *puVar3 = (uint)puVar2;
      puVar1 = ((uint *)GEN_TOP(((int)puVar3 + *((int *)GEN_TOP(((int)this + 4))))));
      puVar2 = puVar3;
    } while (puVar1 < *((uint * PTR32 *)GEN_TOP(((int)this + 0x24))));
  }
  *(uint * PTR32 *)this = puVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  return 0;
}

/* ref: FUN_00dc1540 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc1540(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc1540u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0;
  for (puVar1 = *(undefined4 * PTR32 *)this; puVar1 != ((undefined4 *)GEN_TOP(0x0)); puVar1 = ((undefined4 *)GEN_TOP(*puVar1))) {
    iVar2 = iVar2 + 1;
  }
  uVar3 = iVar2 + (uint)(*((int *)GEN_TOP(((int)this + 0x24))) - *((int *)GEN_TOP(((int)this + 0x20)))) /
                  *((uint *)GEN_TOP(((int)this + 4)));
  for (puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))); puVar1 != ((undefined4 *)GEN_TOP(0x0));
      puVar1 = ((undefined4 *)GEN_TOP(*puVar1))) {
    uVar3 = uVar3 + puVar1[3];
  }
  return uVar3;
}

/* ref: FUN_00dc1580 */
GEN_LIB GEN_FRAME uint F_00dc1580(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc1580u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  undefined4 * puVar1;
  uint uVar2;
  
  uVar2 = 0;
  for (puVar1 = param_1; puVar1 != ((undefined4 *)GEN_TOP(0x0)); puVar1 = ((undefined4 *)GEN_TOP(*puVar1))) {
    uVar2 = uVar2 + puVar1[3];
  }
  return uVar2;
}

/* ref: FUN_00dc15a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc15a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc15a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int * piVar4;
  
  uVar3 = 0;
  piVar4 = param_1;
  if (*((int *)GEN_TOP(((int)this + 0x2c))) == 0) {
    for (; piVar4 != ((int *)GEN_TOP(0x0)); piVar4 = ((int *)GEN_TOP(*piVar4))) {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 0x24))))
                        (*((int * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG,piVar4,*((undefined4 *)GEN_TOP(((int)this + 0x14))));
      uVar3 = uVar3 + uVar1;
    }
  }
  else if (param_1 != ((int *)GEN_TOP(0x0))) {
    do {
      uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x2c))) + 0x24))))
                        (*((int * PTR32 *)GEN_TOP(((int)this + 0x2c))) GEN_EDX_ARG,piVar4,0x10);
      uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x28))) + 0x24))))
                        (*((int * PTR32 *)GEN_TOP(((int)this + 0x28))) GEN_EDX_ARG,piVar4[1],*((undefined4 *)GEN_TOP(((int)this + 0x14))));
      piVar4 = ((int *)GEN_TOP(*piVar4));
      uVar3 = uVar3 + uVar1 + uVar2;
    } while (piVar4 != ((int *)GEN_TOP(0x0)));
    return uVar3;
  }
  return uVar3;
}

/* ref: FUN_00dc1610 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc1610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc1610u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  uint uVar2;
  
  uVar1 = F_00dc1580(*((undefined4 *)GEN_TOP(((int)this + 0x10))));
  uVar2 = F_00dc1580(*((undefined4 *)GEN_TOP(((int)this + 0xc))));
  return uVar2 + uVar1;
}

/* ref: FUN_00dc1630 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dc1630(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(code * param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xdc1630u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(code * param_2 = (code *)(uintptr_t)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 != ((int *)GEN_TOP(0x0))) {
    iVar1 = *((int *)GEN_TOP(((int)this + 4)));
    do {
      uVar2 = param_1[2];
      uVar3 = param_1[3] * iVar1 + uVar2;
      for (; uVar2 < uVar3; uVar2 = uVar2 + iVar1) {
        (*param_2)(uVar2,*((undefined4 *)GEN_TOP(((int)this + 4))),param_3 & 0xffffff00,param_3,param_4);
        iVar1 = *((int *)GEN_TOP(((int)this + 4)));
      }
      param_1 = ((int *)GEN_TOP(*param_1));
    } while (param_1 != ((int *)GEN_TOP(0x0)));
  }
  return;
}

/* ref: FUN_00dc1690 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc1690(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc1690u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00dc1460(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x10))));
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  return uVar1;
}

/* ref: FUN_00dc16b0 */
GEN_LIB GEN_FRAME uint F_00dc16b0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc16b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  if (param_2 < 0x11) {
    return param_1 + 0x10;
  }
  return param_2 + param_1;
}

/* ref: FUN_00dc1710 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1710(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc1710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar3 = F_00dc15a0(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x10))));
  uVar4 = F_00dc15a0(this GEN_EDX_ARG,*((undefined4 *)GEN_TOP(((int)this + 0xc))));
  *param_1 = uVar3 + uVar4;
  iVar1 = *((int *)GEN_TOP(((int)this + 0x34)));
  iVar2 = *((int *)GEN_TOP(((int)this + 0x30)));
  iVar5 = *((int *)GEN_TOP(((int)this + 4))) * iVar1;
  param_1[3] = iVar5;
  param_1[1] = (iVar2 - iVar1) * *((int *)GEN_TOP(((int)this + 4)));
  param_1[5] = *((int *)GEN_TOP(((int)this + 4)));
  param_1[4] = iVar5;
  return (uint)param_1;
}

/* ref: FUN_00dc1760 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1760(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc1760u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  undefined4 * puVar1;
  int * piVar2;
  uint uVar3;
  int * piVar4;
  
  uVar3 = F_00dc1540(this GEN_EDX_FWD);
  if ((uVar3 != *((uint *)GEN_TOP(((int)this + 0x34)))) || (uVar3 = F_00dc1610((((undefined *)GEN_TOP((uint)(this)))) GEN_EDX_ARG), uVar3 != *((uint *)GEN_TOP(((int)this + 0x30))))) {
    *param_1 = 0;
    return (uint)param_1;
  }
  piVar4 = *(int * PTR32 *)this;
  if (piVar4 != ((int *)GEN_TOP(0x0))) {
    do {
      if (((uint)piVar4 & *((int *)GEN_TOP(((int)this + 0x18))) - 1U) != 0) {
LAB_00dc17ba: ;
        *param_1 = 0;
        return (uint)param_1;
      }
      puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc)));
      while( true ) {
        if (puVar1 == ((undefined4 *)GEN_TOP(0x0))) goto LAB_00dc17ba;
        piVar2 = ((int *)GEN_TOP(puVar1[2]));
        if ((piVar2 <= piVar4) && (piVar4 < ((int *)GEN_TOP((puVar1[3] * *((int *)GEN_TOP(((int)this + 4))) + (int)piVar2))))) break;
        puVar1 = ((undefined4 *)GEN_TOP(*puVar1));
      }
      if ((uint)((int)piVar4 - (int)piVar2) % *((uint *)GEN_TOP(((int)this + 4))) != 0) goto LAB_00dc17ba;
      piVar4 = ((int *)GEN_TOP(*piVar4));
    } while (piVar4 != ((int *)GEN_TOP(0x0)));
  }
  *param_1 = 1;
  return (uint)param_1;
}

/* ref: FUN_00dc17f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc17f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc17f0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0x24, 12, 4);
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar1;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar2;
  uint uVar3;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * ppppppuVar4;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * ppppppuVar5;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * ppppppuVar6;
  
  if (*((int *)GEN_TOP(((int)this + 0xc))) == 0) {
    return 0;
  }
  uVar3 = F_00dc1ee0(*((int *)GEN_TOP(((int)this + 0xc))));
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar3;
  F_00dc1510(this GEN_EDX_ARG);
  ppppppuVar4 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(F_00dc1ef0(*(undefined4 *)this)));
  pppppppuVar1 = *((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc)));
  (*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14)) = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
  (*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c)) = &(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x10));
  *(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)this = ppppppuVar4;
  ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0] = pppppppuVar1;
  (*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x10)) = ppppppuVar4;
  (*(uint *)(gen_frame + 0x18)) = 0;
  pppppppuVar2 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14));
  uVar3 = (*(uint *)(gen_frame + 0x18));
  do {
    if (pppppppuVar1 == ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(0x0))) {
      *(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)this = (*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x10));
      *((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)this + 0xc))) = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0))[0];
      *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
      return uVar3;
    }
    ppppppuVar6 = pppppppuVar1[2];
    ppppppuVar5 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)pppppppuVar1[3] * *((int *)GEN_TOP(((int)this + 4))) + (int)ppppppuVar6)));
    if (ppppppuVar6 == ppppppuVar4) {
      do {
        if (ppppppuVar5 <= ppppppuVar6) break;
        ppppppuVar4 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)*ppppppuVar4;
        ppppppuVar6 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)ppppppuVar6 + *((int *)GEN_TOP(((int)this + 4))))));
      } while (ppppppuVar6 == ppppppuVar4);
    }
    if (ppppppuVar6 == ppppppuVar5) {
      ppppppuVar6 = *pppppppuVar1;
      (*(uint *)(gen_frame + 0x18)) = uVar3 + 1;
      (*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14)) = pppppppuVar2;
      *pppppppuVar2 = ppppppuVar6;
      *pppppppuVar1 = *((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10)));
      *((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)this + 0x10))) = pppppppuVar1;
      pppppppuVar1 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)*pppppppuVar2;
      *(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c)) = ppppppuVar4;
      pppppppuVar2 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14));
      uVar3 = (*(uint *)(gen_frame + 0x18));
    }
    else {
      for (; (ppppppuVar4 != ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(0x0)) && (ppppppuVar4 < ppppppuVar5));
          ppppppuVar4 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)*ppppppuVar4) {
      }
      if ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)*(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c)) != ppppppuVar4) {
        do {
          (*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c)) = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 *)*(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c));
        } while ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)*(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x1c)) != ppppppuVar4);
      }
      (*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14)) = pppppppuVar1;
      pppppppuVar1 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)*pppppppuVar1;
      pppppppuVar2 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x14));
    }
  } while( true );
}

/* ref: FUN_00dc18d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc18d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(code * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdc18d0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(code * param_1 = (code *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined4 * puVar1;
  uint uVar2;
  undefined4 * puVar3;
  undefined4 * puVar4;
  undefined4 * extraout_ECX = 0;
  undefined4 * extraout_ECX_00 = 0;
  undefined4 * puVar5;
  undefined4 * puVar6;
  undefined4 * puVar7;
  uint3 uVar8;
  
  F_00dc1630(this GEN_EDX_FWD,*((undefined4 *)GEN_TOP(((int)this + 0x10))),param_1,param_2,param_3);
  if ((*((int *)GEN_TOP(((int)this + 0xc))) != 0) || (puVar3 = ((undefined4 *)GEN_TOP(0x0)), *(int *)this != 0)) {
    uVar2 = F_00dc1ee0(*((int *)GEN_TOP(((int)this + 0xc))));
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
    F_00dc1510(this GEN_EDX_ARG);
    puVar3 = ((undefined4 *)GEN_TOP(F_00dc1ef0(*(undefined4 *)this)));
    puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc)));
    *(undefined4 * PTR32 *)this = puVar3;
    puVar6 = puVar3;
    for (; puVar1 != ((undefined4 *)GEN_TOP(0x0)); puVar1 = ((undefined4 *)GEN_TOP(*puVar1))) {
      puVar7 = ((undefined4 *)GEN_TOP(puVar1[2]));
      puVar4 = ((undefined4 *)GEN_TOP((puVar1[3] * *((int *)GEN_TOP(((int)this + 4))) + (int)puVar7)));
      puVar3 = puVar4;
      puVar5 = puVar1;
      for (; puVar7 < puVar4; puVar7 = ((undefined4 *)GEN_TOP(((int)puVar7 + *((int *)GEN_TOP(((int)this + 4))))))) {
        uVar8 = (uint3)((uint)((int)(uintptr_t)puVar5) >> 8);
        if (puVar7 == puVar6) {
          puVar3 = ((undefined4 *)GEN_TOP((*param_1)(puVar7,*((undefined4 *)GEN_TOP(((int)this + 4))),(uint)uVar8 << 8,param_2,param_3 )));
          puVar6 = ((undefined4 *)GEN_TOP(*puVar6));
          puVar5 = extraout_ECX;
        }
        else {
          puVar3 = ((undefined4 *)GEN_TOP((*param_1)(puVar7,*((undefined4 *)GEN_TOP(((int)this + 4))),CONCAT31(uVar8,1),param_2, param_3)));
          puVar5 = extraout_ECX_00;
        }
      }
    }
  }
  return (uint)puVar3;
}

/* ref: FUN_00dc1990 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1990(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc1990u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  int * piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 * puVar5;
  uint * puVar6;
  uint * puVar7;
  uint uVar8;
  
  puVar5 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10)));
  if (puVar5 != ((undefined4 *)GEN_TOP(0x0))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x10))) = *puVar5;
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = puVar5[2];
    *((int *)GEN_TOP(((int)this + 0x24))) = puVar5[3] * *((int *)GEN_TOP(((int)this + 4))) + puVar5[2];
    *puVar5 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
    *((int *)GEN_TOP(((int)this + 0x34))) = *((int *)GEN_TOP(((int)this + 0x34))) - 1;
    *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar5;
    uVar4 = *((uint *)GEN_TOP(((int)this + 0x20)));
    *((uint *)GEN_TOP(((int)this + 0x20))) = *((int *)GEN_TOP(((int)this + 4))) + uVar4;
    return uVar4;
  }
  if (*((int *)GEN_TOP(((int)this + 0x14))) == 0) {
    iVar3 = (int)(0x100 / (ulonglong)*((uint *)GEN_TOP(((int)this + 4))));
    if (iVar3 == 0) {
      iVar3 = 1;
    }
    uVar4 = F_00dc16b0(*((uint *)GEN_TOP(((int)this + 4))) * iVar3,*((undefined4 *)GEN_TOP(((int)this + 0x18))));
    *((uint *)GEN_TOP(((int)this + 0x14))) = uVar4;
  }
  piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x2c)));
  if (piVar1 == ((int *)GEN_TOP(0x0))) {
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x28)));
    (*(int *)(gen_frame + 0x0)) = *((int *)GEN_TOP(((int)this + 0x14)));
    puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,&(*(int *)(gen_frame + 0x0)))));
    if (puVar5 == ((undefined4 *)GEN_TOP(0x0))) {
      return 0;
    }
    uVar4 = *((int *)GEN_TOP(((int)this + 0x18))) + 0xf + (int)puVar5 & ~(*((int *)GEN_TOP(((int)this + 0x18))) - 1U);
    (*(uint *)(gen_frame + 0x4)) = uVar4;
    puVar5[1] = 0;
    puVar6 = puVar5 + 3;
    *puVar6 = ((int)puVar5 + ((*(int *)(gen_frame + 0x0)) - uVar4)) / *((uint *)GEN_TOP(((int)this + 4)));
  }
  else {
    puVar5 = ((undefined4 *)GEN_TOP(((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 4))))(piVar1 GEN_EDX_ARG,0x10)));
    if (puVar5 == ((undefined4 *)GEN_TOP(0x0))) {
      return 0;
    }
    piVar1 = *((int * PTR32 *)GEN_TOP(((int)this + 0x28)));
    (*(uint *)(gen_frame + 0x4)) = *((uint *)GEN_TOP(((int)this + 0x14)));
    uVar4 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*piVar1 + 0xc))))(piVar1 GEN_EDX_ARG,&(*(uint *)(gen_frame + 0x4)));
    if (uVar4 == 0) {
      ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)this + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)this + 0x2c))) GEN_EDX_ARG,puVar5,0x10);
      return 0;
    }
    puVar5[1] = uVar4;
    uVar8 = *((int *)GEN_TOP(((int)this + 0x18))) - 1 + uVar4 & ~(*((int *)GEN_TOP(((int)this + 0x18))) - 1U);
    if ((uVar8 != uVar4) || ((*(uint *)(gen_frame + 0x4)) != *((uint *)GEN_TOP(((int)this + 0x14))))) {
      uVar2 = *((uint *)GEN_TOP(((int)this + 4)));
      puVar6 = puVar5 + 3;
      puVar7 = puVar5 + 2;
      *puVar7 = uVar8;
      *puVar6 = ((uVar4 - uVar8) + (*(uint *)(gen_frame + 0x4))) / uVar2;
      goto LAB_00dc1acb;
    }
    puVar6 = puVar5 + 3;
    *puVar6 = *((uint *)GEN_TOP(((int)this + 0x1c)));
  }
  puVar7 = puVar5 + 2;
  *puVar7 = uVar4;
LAB_00dc1acb: ;
  *((uint *)GEN_TOP(((int)this + 0x20))) = *puVar7;
  *((uint *)GEN_TOP(((int)this + 0x24))) = *puVar6 * *((int *)GEN_TOP(((int)this + 4))) + *puVar7;
  *puVar5 = *((undefined4 *)GEN_TOP(((int)this + 0xc)));
  *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc))) = puVar5;
  *((int *)GEN_TOP(((int)this + 0x30))) = *((int *)GEN_TOP(((int)this + 0x30))) + *puVar6;
  uVar4 = *((uint *)GEN_TOP(((int)this + 0x20)));
  *((int *)GEN_TOP(((int)this + 0x34))) = *((int *)GEN_TOP(((int)this + 0x34))) + (*puVar6 - 1);
  *((uint *)GEN_TOP(((int)this + 0x20))) = *((int *)GEN_TOP(((int)this + 4))) + uVar4;
  return uVar4;
}

/* ref: FUN_00dc1b00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1b00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc1b00u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  uint uVar2;
  
  uVar2 = F_00dc1ee0(*((undefined4 *)GEN_TOP(((int)this + 0xc))));
  *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
  uVar2 = F_00dc1ee0(*((undefined4 *)GEN_TOP(((int)this + 0x10))));
  iVar1 = *((int *)GEN_TOP(((int)this + 0xc)));
  *((uint *)GEN_TOP(((int)this + 0x10))) = uVar2;
  if (iVar1 != 0) {
    *param_1 = iVar1;
  }
  uVar2 = (uint)(iVar1 != 0);
  if (*((int *)GEN_TOP(((int)this + 0x10))) != 0) {
    param_1[uVar2] = *((int *)GEN_TOP(((int)this + 0x10)));
    uVar2 = uVar2 + 1;
  }
  return uVar2;
}

/* ref: FUN_00dc1b50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1b50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(uint param_2, unsigned int gen_a2), GEN_P(uint param_3, unsigned int gen_a3), GEN_P(int param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xdc1b50u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(uint param_2 = (uint)gen_a2;)
  GEN_PIN(uint param_3 = (uint)gen_a3;)
  GEN_PIN(int param_4 = (int)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  LPVOID pvVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = param_4;
  if (param_4 == 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    iVar3 = *((int *)GEN_TOP(((int)pvVar1 + 0x2c)));
  }
  *((int *)GEN_TOP(((int)this + 0x28))) = iVar3;
  *((undefined4 *)GEN_TOP(((int)this + 0x2c))) = param_5;
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0xc))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x10))) = 0;
  *((uint *)GEN_TOP(((int)this + 0x14))) = param_3;
  *((uint *)GEN_TOP(((int)this + 0x18))) = param_2;
  *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x34))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x30))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
  if (param_1 < param_2) {
    *((uint *)GEN_TOP(((int)this + 4))) = param_2;
    *((uint *)GEN_TOP(((int)this + 0x1c))) = param_3 / param_2;
    return param_3 / param_2;
  }
  uVar4 = (param_1 - 1) + param_2 & ~(param_2 - 1);
  uVar2 = param_3 / uVar4;
  *((uint *)GEN_TOP(((int)this + 4))) = uVar4;
  *((uint *)GEN_TOP(((int)this + 0x1c))) = uVar2;
  return uVar2;
}

/* ref: FUN_00dc1bd0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1bd0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xdc1bd0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  uint uVar1;
  
  F_00dc14d0(this GEN_EDX_FWD);
  uVar1 = F_00dc1b50(this GEN_EDX_ARG,param_1,param_2,param_3,param_4,param_5);
  return uVar1;
}

/* ref: FUN_00dc1c00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1c00(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4), GEN_P(undefined4 param_5, unsigned int gen_a5))
{
  GEN_ENTER(0xdc1c00u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  GEN_PIN(undefined4 param_5 = (undefined4)gen_a5;)
  F_00dc1b50(this GEN_EDX_FWD,param_1,param_2,param_3,param_4,param_5);
  return (uint)this;
}

/* ref: FUN_00dc1c30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1c30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc1c30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  undefined4 * puVar1;
  undefined4 * puVar2;
  LPVOID pvVar3;
  undefined4 * puVar4;
  int iVar5;
  uint uVar6;
  undefined4 * puVar7;
  undefined4 * puVar8;
  int iVar9;
  undefined4 * local_c;
  
  iVar9 = *((int *)GEN_TOP((param_1 + 0xc)));
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  puVar4 = *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 0xc)));
  uVar6 = iVar9 * 4 + 0x7fU & 0xffffff80;
  if ((*((int *)GEN_TOP(((int)pvVar3 + 8))) < (int)uVar6) ||
     (*((uint *)GEN_TOP(((int)pvVar3 + 0x10))) < (int)puVar4 + uVar6)) {
    puVar4 = ((undefined4 *)GEN_TOP(F_00d94390(pvVar3 GEN_EDX_ARG,uVar6)));
  }
  else {
    *((uint *)GEN_TOP(((int)pvVar3 + 0xc))) = (int)puVar4 + uVar6;
  }
  puVar8 = *((undefined4 * PTR32 *)GEN_TOP((param_1 + 8)));
  iVar9 = 0;
  puVar7 = ((undefined4 *)GEN_TOP((*((int *)GEN_TOP(((int)this + 4))) * *((int *)GEN_TOP((param_1 + 0xc))) + (int)puVar8)));
  puVar2 = this;
  for (puVar1 = *(undefined4 * PTR32 *)this; puVar1 != ((undefined4 *)GEN_TOP(0x0)); puVar1 = ((undefined4 *)GEN_TOP(*puVar1))) {
    local_c = puVar1;
    if ((puVar8 <= puVar1) && (puVar1 < puVar7)) {
      puVar4[iVar9] = puVar1;
      *puVar2 = *puVar1;
      iVar9 = iVar9 + 1;
      local_c = puVar2;
    }
    puVar2 = local_c;
  }
  puVar1 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x20)));
  if ((puVar1 < puVar8) || (puVar7 <= puVar1)) {
    if (iVar9 == *((int *)GEN_TOP((param_1 + 0xc)))) {
      pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
      if ((((int)uVar6 <= *((int *)GEN_TOP(((int)pvVar3 + 8)))) &&
          (uVar6 + (int)puVar4 == *((int *)GEN_TOP(((int)pvVar3 + 0xc))))) &&
         (*((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 0x14))) != puVar4)) {
        *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 0xc))) = puVar4;
        return 1;
      }
      F_00d945c0(pvVar3 GEN_EDX_ARG,puVar4,uVar6);
      return 1;
    }
  }
  else if ((uint)(*((int *)GEN_TOP(((int)this + 0x24))) - (int)puVar1) / *((uint *)GEN_TOP(((int)this + 4))) + iVar9 ==
           *((int *)GEN_TOP((param_1 + 0xc)))) {
    *((undefined4 *)GEN_TOP(((int)this + 0x20))) = 0;
    *((undefined4 *)GEN_TOP(((int)this + 0x24))) = 0;
    pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    if ((((int)uVar6 <= *((int *)GEN_TOP(((int)pvVar3 + 8)))) &&
        (uVar6 + (int)puVar4 == *((int *)GEN_TOP(((int)pvVar3 + 0xc))))) &&
       (*((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 0x14))) != puVar4)) {
      *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 0xc))) = puVar4;
      return 1;
    }
    F_00d945c0(pvVar3 GEN_EDX_ARG,puVar4,uVar6);
    return 1;
  }
  if (0 < iVar9) {
    if (1 < iVar9) {
      F_00dc1f40(puVar4,0,iVar9 - 1,((code *)REFP(0xdc2030)));
    }
    iVar5 = 1;
    puVar8 = ((undefined4 *)GEN_TOP(*puVar4));
    if (1 < iVar9) {
      do {
        puVar1 = ((undefined4 *)GEN_TOP(puVar4[iVar5]));
        iVar5 = iVar5 + 1;
        *puVar8 = puVar1;
        puVar8 = puVar1;
      } while (iVar5 < iVar9);
    }
    *((undefined4 *)GEN_TOP(puVar4[iVar9 - 1])) = *(undefined4 *)this;
    *(undefined4 *)this = *puVar4;
  }
  pvVar3 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  if ((((int)uVar6 <= *((int *)GEN_TOP(((int)pvVar3 + 8)))) &&
      (uVar6 + (int)puVar4 == *((int *)GEN_TOP(((int)pvVar3 + 0xc))))) &&
     (*((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 0x14))) != puVar4)) {
    *((undefined4 * PTR32 *)GEN_TOP(((int)pvVar3 + 0xc))) = puVar4;
    return 0;
  }
  F_00d945c0(pvVar3 GEN_EDX_ARG,puVar4,uVar6);
  return 0;
}

/* ref: FUN_00dc1e30 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1e30(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined1 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(int * param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdc1e30u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined1 * param_1 = (undefined1 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(int * param_3 = (int *)(uintptr_t)gen_a3;)
  uint uVar1;
  int iVar2;
  undefined4 * puVar3;
  
  iVar2 = 0;
  if (0 < param_2) {
    do {
      if (*((int * PTR32 *)GEN_TOP(((int)this + 8))) == ((int *)GEN_TOP(0x0))) {
        puVar3 = *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0xc)));
        if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
          *param_3 = iVar2;
          *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
          *param_1 = 1;
          return (uint)param_1;
        }
        uVar1 = F_00dc1c30(this GEN_EDX_FWD,puVar3);
        if (uVar1 == 0) goto LAB_00dc1e8c;
        *((undefined4 *)GEN_TOP(((int)this + 0xc))) = *puVar3;
        *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
        *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))) = puVar3;
      }
      else {
        puVar3 = ((undefined4 *)GEN_TOP(**((int * PTR32 *)GEN_TOP(((int)this + 8)))));
        if (puVar3 == ((undefined4 *)GEN_TOP(0x0))) {
          *param_3 = iVar2;
          *((undefined4 *)GEN_TOP(((int)this + 8))) = 0;
          *param_1 = 1;
          return (uint)param_1;
        }
        uVar1 = F_00dc1c30(this GEN_EDX_ARG,puVar3);
        if (uVar1 == 0) {
LAB_00dc1e8c: ;
          *((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = puVar3;
        }
        else {
          **((undefined4 * PTR32 *)GEN_TOP(((int)this + 8))) = *puVar3;
          *puVar3 = *((undefined4 *)GEN_TOP(((int)this + 0x10)));
          *((undefined4 * PTR32 *)GEN_TOP(((int)this + 0x10))) = puVar3;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_2);
  }
  *param_3 = iVar2;
  *param_1 = *((int *)GEN_TOP(((int)this + 8))) == 0;
  return (uint)param_1;
}

/* ref: FUN_00dc1ee0 */
GEN_LIB GEN_FRAME uint F_00dc1ee0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc1ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00dc27b0(param_1);
  return uVar1;
}

/* ref: FUN_00dc1ef0 */
GEN_LIB GEN_FRAME uint F_00dc1ef0(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc1ef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00dc27b0(param_1);
  return uVar1;
}

/* ref: FUN_00dc1f00 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc1f00(GEN_P(uint * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc1f00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint * in_ecx = (uint *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  *in_ecx = param_2;
  return param_2;
}

/* ref: FUN_00dc1f40 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc1f40(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(int param_3, unsigned int gen_a2), GEN_P(code * param_4, unsigned int gen_a3))
{
  GEN_ENTER(0xdc1f40u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(int param_3 = (int)gen_a2;)
  GEN_PIN(code * param_4 = (code *)(uintptr_t)gen_a3;)
  GEN_FRAME_DECL(0x18, 8);
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char * pcVar5;
  int iVar6;
  
  do {
    (*(int *)(gen_frame + 0x0)) = param_2;
    uVar3 = *((undefined4 *)GEN_TOP((param_1 + (param_2 + param_3 >> 1) * 4)));
    iVar6 = param_3;
    do {
      pcVar5 = ((char *)GEN_TOP((*param_4)(&(*(undefined1 *)(gen_frame + 0x7)),*((undefined4 *)GEN_TOP((param_1 + (*(int *)(gen_frame + 0x0)) * 4))),uVar3)));
      cVar2 = *pcVar5;
      while (cVar2 != '\0') {
        (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
        pcVar5 = ((char *)GEN_TOP((*param_4)(&(*(undefined1 *)(gen_frame + 0x7)),*((undefined4 *)GEN_TOP((param_1 + (*(int *)(gen_frame + 0x0)) * 4))),uVar3)));
        cVar2 = *pcVar5;
      }
      pcVar5 = ((char *)GEN_TOP((*param_4)(&(*(undefined1 *)(gen_frame + 0x6)),uVar3,*((undefined4 *)GEN_TOP((param_1 + iVar6 * 4))))));
      cVar2 = *pcVar5;
      while (cVar2 != '\0') {
        iVar1 = iVar6 * 4;
        iVar6 = iVar6 - 1;
        pcVar5 = ((char *)GEN_TOP((*param_4)(&(*(undefined1 *)(gen_frame + 0x6)),uVar3,*((undefined4 *)GEN_TOP((param_1 - 4 + iVar1))))));
        cVar2 = *pcVar5;
      }
      if (iVar6 < (*(int *)(gen_frame + 0x0))) break;
      if (iVar6 != (*(int *)(gen_frame + 0x0))) {
        uVar4 = *((undefined4 *)GEN_TOP((param_1 + iVar6 * 4)));
        *((undefined4 *)GEN_TOP((param_1 + iVar6 * 4))) = *((undefined4 *)GEN_TOP((param_1 + (*(int *)(gen_frame + 0x0)) * 4)));
        *((undefined4 *)GEN_TOP((param_1 + (*(int *)(gen_frame + 0x0)) * 4))) = uVar4;
      }
      (*(int *)(gen_frame + 0x0)) = (*(int *)(gen_frame + 0x0)) + 1;
      iVar6 = iVar6 - 1;
    } while ((*(int *)(gen_frame + 0x0)) <= iVar6);
    if (param_2 < iVar6) {
      F_00dc1f40(param_1,param_2,iVar6,param_4);
    }
    param_2 = (*(int *)(gen_frame + 0x0));
    if (param_3 <= (*(int *)(gen_frame + 0x0))) {
      return 0;
    }
  } while( true );
}

/* ref: FUN_00dc2030 */
GEN_LIB GEN_FRAME uint F_00dc2030(GEN_P(uint param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1), GEN_P(uint param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdc2030u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  GEN_PIN(uint param_3 = (uint)gen_a2;)
  *((bool *)GEN_TOP(param_1)) = param_2 < param_3;
  return param_1;
}

/* ref: FUN_00dc2050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc2050(GEN_P(int * in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int * in_ecx = (int *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  return *in_ecx + param_2 * 4;
}

/* ref: FUN_00dc2070 */
GEN_LIB GEN_FRAME unsigned int F_00dc2070(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdc2070u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  if (1 < param_2) {
    F_00dc1f40(param_1,0,param_2 - 1,param_3);
  }
  return;
}

/* ref: FUN_00dc20b0 */
GEN_LIB GEN_FRAME uint F_00dc20b0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc20b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  uint uVar1;
  LPVOID this;
  uint uVar2;
  uint uVar3;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = *((uint *)GEN_TOP(((int)this + 0xc)));
  uVar3 = param_1 * 4 + 0x7fU & 0xffffff80;
  uVar2 = uVar1 + uVar3;
  if (((int)uVar3 <= *((int *)GEN_TOP(((int)this + 8)))) && (uVar2 <= *((uint *)GEN_TOP(((int)this + 0x10))))) {
    *((uint *)GEN_TOP(((int)this + 0xc))) = uVar2;
    return uVar1;
  }
  uVar2 = F_00d94390(this GEN_EDX_ARG,uVar3);
  return uVar2;
}

/* ref: FUN_00dc20f0 */
GEN_LIB GEN_FRAME uint F_00dc20f0(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc20f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  LPVOID this;
  uint uVar1;
  
  this = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar1 = param_2 * 4 + 0x7fU & 0xffffff80;
  if ((((int)uVar1 <= *((int *)GEN_TOP(((int)this + 8)))) && (uVar1 + param_1 == *((int *)GEN_TOP(((int)this + 0xc))))) &&
     (*((int *)GEN_TOP(((int)this + 0x14))) != param_1)) {
    *((int *)GEN_TOP(((int)this + 0xc))) = param_1;
    return (uint)this;
  }
  uVar1 = F_00d945c0(this GEN_EDX_ARG,param_1,uVar1);
  return uVar1;
}

/* ref: FUN_00dc2140 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc2140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc2140u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  int iVar1;
  LPVOID this_00;
  uint uVar2;
  uint uVar3;
  
  this_00 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  iVar1 = *((int *)GEN_TOP(((int)this_00 + 0xc)));
  uVar3 = param_1 * 4 + 0x7fU & 0xffffff80;
  uVar2 = iVar1 + uVar3;
  if (((int)uVar3 <= *((int *)GEN_TOP(((int)this_00 + 8)))) && (uVar2 <= *((uint *)GEN_TOP(((int)this_00 + 0x10))))) {
    *((uint *)GEN_TOP(((int)this_00 + 0xc))) = uVar2;
    *(int *)this = iVar1;
    *((int *)GEN_TOP(((int)this + 4))) = param_1;
    return (uint)this;
  }
  uVar2 = F_00d94390(this_00 GEN_EDX_ARG,uVar3);
  *(uint *)this = uVar2;
  *((int *)GEN_TOP(((int)this + 4))) = param_1;
  return (uint)this;
}

/* ref: FUN_00dc21f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc21f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3), GEN_P(undefined4 param_4, unsigned int gen_a4))
{
  GEN_ENTER(0xdc21f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  GEN_PIN(undefined4 param_4 = (undefined4)gen_a4;)
  uint uVar1;
  
  uVar1 = F_00dc1bd0(((undefined *)GEN_TOP(((int)this + 4))) GEN_EDX_FWD,param_1,param_2,param_3,param_4,0);
  return uVar1;
}

/* ref: hkFixedSizeAllocator::vf1 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc2220(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2220u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 4);
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *(int *)(this + 0x38) = *(int *)(this + 0x38) - 1;
    *(undefined4 *)(this + 4) = *puVar1;
    return (uint)puVar1;
  }
  uVar2 = *(uint *)(this + 0x24);
  if (*(uint *)(this + 0x28) <= uVar2) {
    uVar2 = F_00dc1990(this + 4 GEN_EDX_FWD);
    return uVar2;
  }
  *(int *)(this + 0x38) = *(int *)(this + 0x38) - 1;
  *(uint *)(this + 0x24) = *(int *)(this + 8) + uVar2;
  return uVar2;
}

/* ref: hkFixedSizeAllocator::vf2 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc2260(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc2260u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
  *param_1 = *(undefined4 *)(this + 4);
  *(undefined4 * PTR32 *)(this + 4) = param_1;
  return (uint)param_1;
}

/* ref: hkFixedSizeAllocator::vf3 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc2280(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  undefined4 * puVar1;
  uint uVar2;
  
  puVar1 = *(undefined4 * PTR32 *)(this + 4);
  if (puVar1 != ((undefined4 *)GEN_TOP(0x0))) {
    *(int *)(this + 0x38) = *(int *)(this + 0x38) - 1;
    *(undefined4 *)(this + 4) = *puVar1;
    return (uint)puVar1;
  }
  uVar2 = *(uint *)(this + 0x24);
  if (*(uint *)(this + 0x28) <= uVar2) {
    uVar2 = F_00dc1990(this + 4 GEN_EDX_FWD);
    return uVar2;
  }
  *(int *)(this + 0x38) = *(int *)(this + 0x38) - 1;
  *(uint *)(this + 0x24) = *(int *)(this + 8) + uVar2;
  return uVar2;
}

/* ref: hkFixedSizeAllocator::vf4 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc22c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc22c0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + 1;
  *param_1 = *(undefined4 *)(this + 4);
  *(undefined4 * PTR32 *)(this + 4) = param_1;
  return (uint)param_1;
}

/* ref: hkFixedSizeAllocator::vf5 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc22e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdc22e0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint param_1 = (uint)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  return param_1;
}

/* ref: hkFixedSizeAllocator::vf6 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dc22f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(uint * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdc22f0u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(uint * param_1 = (uint *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  undefined * this_00;
  uint * puVar1;
  undefined4 * puVar2;
  undefined4 * puVar3;
  uint uVar4;
  uint * puVar5;
  uint * puVar6;
  
  this_00 = this + 4;
  puVar1 = param_1 + param_2;
  puVar5 = param_1;
  for (puVar2 = *(undefined4 * PTR32 *)this_00;
      (puVar3 = puVar2, puVar5 < puVar1 && (puVar3 = ((undefined4 *)GEN_TOP(0x0)), puVar2 != ((undefined4 *)GEN_TOP(0x0)))
      ); puVar2 = ((undefined4 *)GEN_TOP(*puVar2))) {
    *puVar5 = (uint)puVar2;
    puVar5 = puVar5 + 1;
  }
  *(int *)(this + 0x38) = *(int *)(this + 0x38) - ((int)puVar5 - (int)((int)(uintptr_t)param_1) >> 2);
  *(undefined4 * PTR32 *)this_00 = puVar3;
  do {
    while( true ) {
      if (puVar1 <= puVar5) {
        return 0;
      }
      puVar6 = puVar5;
      if (*(uint *)(this + 0x24) < *(uint *)(this + 0x28)) break;
      uVar4 = F_00dc1990(this_00 GEN_EDX_FWD);
      *puVar5 = uVar4;
      puVar5 = puVar5 + 1;
    }
    do {
      if (puVar1 <= puVar6) break;
      *puVar6 = *(uint *)(this + 0x24);
      *(int *)(this + 0x24) = *(int *)(this + 0x24) + *(int *)(this + 8);
      puVar6 = puVar6 + 1;
    } while (*(uint *)(this + 0x24) < *(uint *)(this + 0x28));
    *(int *)(this + 0x38) = *(int *)(this + 0x38) - ((int)puVar6 - (int)((int)(uintptr_t)puVar5) >> 2);
    puVar5 = puVar6;
  } while( true );
}

/* ref: hkFixedSizeAllocator::vf7 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dc2380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 * param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2), GEN_P(undefined4 param_3, unsigned int gen_a3))
{
  GEN_ENTER(0xdc2380u, gen_a0, gen_a1, gen_a2, gen_a3);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a3;)
  int * piVar1;
  int * piVar2;
  int iVar3;
  undefined4 * puVar4;
  
  *(int *)(this + 0x38) = *(int *)(this + 0x38) + param_2;
  piVar2 = ((int *)GEN_TOP(*(int *)(this + 4)));
  puVar4 = param_1;
  iVar3 = param_2;
  while (iVar3 = iVar3 - 1, -1 < iVar3) {
    piVar1 = ((int *)GEN_TOP(*puVar4));
    puVar4 = puVar4 + 1;
    if (piVar1 == ((int *)GEN_TOP(0x0))) {
      *(int *)(this + 0x38) = *(int *)(this + 0x38) - 1;
    }
    else {
      *piVar1 = (int)piVar2;
      piVar2 = piVar1;
    }
  }
  *(int * PTR32 *)(this + 4) = piVar2;
  return 0;
}

/* ref: hkFixedSizeAllocator::vf8 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc23c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc23c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = F_00dc1710(this + 4 GEN_EDX_FWD,param_1);
  return uVar1;
}

/* ref: hkFixedSizeAllocator::vf9 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc23d0(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_2, unsigned int gen_a1), GEN_P(undefined4 param_3, unsigned int gen_a2))
{
  GEN_ENTER(0xdc23d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_3 = (undefined4)gen_a2;)
  return *((uint *)GEN_TOP((in_ecx + 8)));
}

/* ref: FUN_00dc23e0 */
GEN_LIB GEN_FRAME uint F_00dc23e0(GEN_P(uint param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc23e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  *(uint *)&REFG(undefined, 0x15e0070) = param_1;
  return param_1;
}

/* ref: FUN_00dc2460 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00dc2460(GEN_P(int in_ecx, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2460u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int in_ecx = (int)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  *((byte *)GEN_TOP((in_ecx + 8))) = param_2;
  return param_2;
}

/* ref: FUN_00dc2470 */
GEN_LIB GEN_FRAME byte GEN_THISCALL F_00dc2470(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2470u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int param_1 = (int)gen_a1;)
  if ((*(char *)this != '\0') && (*((char *)GEN_TOP(((int)this + 8))) != '\0')) {
    return 0;
  }
  if ((((0x32 < *((int *)GEN_TOP(((int)this + 4)))) && (*((int *)GEN_TOP(((int)this + 4))) % 3 == 0)) &&
      (*((char *)GEN_TOP(((int)this + 8))) != '\0')) && (*((char *)GEN_TOP((param_1 + 9 + (int)this))) == '\0')) {
    *((undefined1 *)GEN_TOP((param_1 + 9 + (int)this))) = 1;
    *(undefined1 *)this = 1;
    return 0;
  }
  return 1;
}

/* ref: FUN_00dc2550 */
GEN_LIB GEN_FRAME uint F_00dc2550(GEN_P(undefined4 param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc2550u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  LPVOID pvVar1;
  uint uVar2;
  
  pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
  uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 4))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1);
  return uVar2;
}

/* ref: FUN_00dc2570 */
GEN_LIB GEN_FRAME unsigned int F_00dc2570(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc2570u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x3c);
  }
  return;
}

/* ref: FUN_00dc25a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc25a0(GEN_P(uint param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc25a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(uint param_1 = (uint)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x3c);
  }
  return param_1;
}

/* ref: FUN_00dc25d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc25d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc25d0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((gen_code32 *)GEN_TOP(((int)this + 8))) != ((code *)GEN_TOP(0x0))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 8))))(param_1,param_2);
  }
  return uVar1;
}

/* ref: FUN_00dc25f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc25f0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(undefined4 param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc25f0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a2;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((gen_code32 *)GEN_TOP(((int)this + 8))) != ((code *)GEN_TOP(0x0))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 8))))(param_1,param_2);
  }
  return uVar1;
}

/* ref: FUN_00dc2610 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc2610(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2610u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = 0;
  if (*((gen_code32 *)GEN_TOP(((int)this + 0xc))) != ((code *)GEN_TOP(0x0))) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP(((int)this + 0xc))))(param_1);
  }
  return uVar1;
}

/* ref: FUN_00dc2630 */
GEN_LIB GEN_FRAME ulonglong F_00dc2630(void)
{
  GEN_ENTER(0xdc2630u, 0u, 0u, 0u, 0u);
  ulonglong uVar1;
  int in_EAX = 0;
  
  if (in_EAX == 0) {
    cpuid_basic_info(0);
  }
  else if (in_EAX == 1) {
    cpuid_Version_info(1);
  }
  else if (in_EAX == 2) {
    cpuid_cache_tlb_info(2);
  }
  else if (in_EAX == 3) {
    cpuid_serial_info(3);
  }
  else if (in_EAX == 4) {
    cpuid_Deterministic_Cache_Parameters_info(4);
  }
  else if (in_EAX == 5) {
    cpuid_MONITOR_MWAIT_Features_info(5);
  }
  else if (in_EAX == 6) {
    cpuid_Thermal_Power_Management_info(6);
  }
  else if (in_EAX == 7) {
    cpuid_Extended_Feature_Enumeration_info(7);
  }
  else if (in_EAX == 9) {
    cpuid_Direct_Cache_Access_info(9);
  }
  else if (in_EAX == 10) {
    cpuid_Architectural_Performance_Monitoring_info(10);
  }
  else if (in_EAX == 0xb) {
    cpuid_Extended_Topology_info(0xb);
  }
  else if (in_EAX == 0xd) {
    cpuid_Processor_Extended_States_info(0xd);
  }
  else if (in_EAX == 0xf) {
    cpuid_Quality_of_Service_info(0xf);
  }
  else if (in_EAX == -0x7ffffffe) {
    cpuid_brand_part1_info(0x80000002);
  }
  else if (in_EAX == -0x7ffffffd) {
    cpuid_brand_part2_info(0x80000003);
  }
  else if (in_EAX == -0x7ffffffc) {
    cpuid_brand_part3_info(0x80000004);
  }
  else {
    cpuid(in_EAX);
  }
  uVar1 = rdtsc();
  return uVar1;
}

/* ref: FUN_00dc2660 */
GEN_LIB GEN_FRAME ulonglong F_00dc2660(void)
{
  GEN_ENTER(0xdc2660u, 0u, 0u, 0u, 0u);
  GEN_FRAME_DECL_TOP(0x38, 8, 4);
  double dVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float10 fVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  
  uVar6 = CONCAT44(REFG(undefined4, 0x15e007c),REFG(int, 0x15e0078));
  if (REFG(int, 0x15e0078) == 0 && REFG(undefined4, 0x15e007c) == 0) {
    (*(double *)(gen_frame + 0x20)) = *(double *)&REFG(double, 0x10a1b50);
    (*(int *)(gen_frame + 0x28)) = 10;
    do {
      uVar6 = F_00dc2630();
      gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x0)));
      (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x2c)) + 4)) = 1;
      (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x2c)) + 4)) = 1;
      iVar2 = 5000;
      do {
        (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x2c)) + 4)) = (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x2c)) + 4)) * (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x2c)) + 4)) + (*(undefined4 *)((char *)&(*(double *)(gen_frame + 0x2c)) + 4));
        iVar2 = iVar2 - 1;
      } while (iVar2 != 0);
      uVar7 = F_00dc2630();
      gen_imp_QueryPerformanceCounter(&(*(LARGE_INTEGER *)(gen_frame + 0x8)));
      gen_imp_QueryPerformanceFrequency((LARGE_INTEGER *)&REFG(int, 0x15e0078));
      uVar4 = (uint)(uVar7 - uVar6 >> 0x20);
      (*(uint *)(gen_frame + 0x14)) = uVar4 & 0x80000000;
      uVar3 = ((*(LARGE_INTEGER *)(gen_frame + 0x8)).s.HighPart - (*(undefined4 *)((char *)&(*(LARGE_INTEGER *)(gen_frame + 0x0)) + 4))) -
              (uint)((*(LARGE_INTEGER *)(gen_frame + 0x8)).s.LowPart < (*(LARGE_INTEGER *)(gen_frame + 0x0)).s.LowPart);
      (*(undefined4 *)(gen_frame + 0x18)) = (int)(uVar7 - uVar6);
      (*(uint *)(gen_frame + 0x1c)) = uVar4 & 0x7fffffff;
      (*(undefined4 *)(gen_frame + 0x10)) = 0;
      fVar5 = GEN_X87((-(float10)(longlong)(((ulonglong)uVar4 & 0x80000000) << 0x20) +
              (float10)(uVar7 - uVar6 & 0x7fffffffffffffff)) /
              (-(float10)(longlong)(((ulonglong)uVar3 & 0x80000000) << 0x20) +
              ((float10)GEN_TOD((CONCAT44(uVar3,(*(LARGE_INTEGER *)(gen_frame + 0x8)).s.LowPart - (*(undefined4 *)((char *)&(*(LARGE_INTEGER *)(gen_frame + 0x0)) + 0))) & 0x7fffffffffffffff)))));
      dVar1 = (double)fVar5;
      (*(double *)(gen_frame + 0x2c)) = dVar1;
      if (fVar5 < (float10)(*(double *)(gen_frame + 0x20))) {
        (*(double *)(gen_frame + 0x20)) = dVar1;
      }
      iVar2 = (*(int *)(gen_frame + 0x28)) - 1;
      (*(int *)(gen_frame + 0x28)) = iVar2;
    } while (iVar2 != 0);
    uVar6 = (ulonglong)
            ((-(float10)(longlong)(((ulonglong)REFG(undefined4, 0x15e007c) & 0x80000000) << 0x20) +
             ((float10)GEN_TOD((CONCAT44(REFG(undefined4, 0x15e007c),REFG(int, 0x15e0078)) & 0x7fffffffffffffff)))) *
            (float10)(*(double *)(gen_frame + 0x20)));
    REFG(int, 0x15e0078) = (int)uVar6;
  }
  REFG(undefined4, 0x15e007c) = (uint)(uVar6 >> 0x20);
  REFG(int, 0x15e0078) = (int)uVar6;
  return uVar6;
}

/* ref: FUN_00dc27b0 */
GEN_LIB GEN_FRAME uint F_00dc27b0(GEN_P(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc27b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * param_1 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(uintptr_t)gen_a0;)
  GEN_FRAME_DECL_TOP(0xc, 4, 4);
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar1;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar2;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar3;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar4;
  int iVar5;
  int iVar6;
  undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * pppppppuVar7;
  
  pppppppuVar3 = param_1;
  if (param_1 == ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(0x0))) {
    return 0;
  }
  param_1 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(0x1));
  do {
    (*(int *)(gen_frame + 0x4)) = 0;
    (*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0)) = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(0x0));
    pppppppuVar1 = &(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
    iVar5 = (*(int *)(gen_frame + 0x4));
joined_r0x00dc27db: ;
    if (pppppppuVar3 != ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(0x0))) {
      (*(int *)(gen_frame + 0x4)) = iVar5 + 1;
      iVar5 = 0;
      pppppppuVar2 = pppppppuVar3;
      iVar6 = (int)param_1;
      if (0 < (int)param_1) {
        do {
          if (pppppppuVar2 == ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(0x0))) break;
          pppppppuVar2 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)*pppppppuVar2;
          iVar5 = iVar5 + 1;
        } while (iVar5 < (int)param_1);
      }
      do {
        pppppppuVar7 = pppppppuVar2;
        if (iVar5 < 1) goto joined_r0x00dc283d;
        if ((iVar6 < 1) || (pppppppuVar7 == ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(0x0)))) goto joined_r0x00dc2828;
        if (pppppppuVar7 < pppppppuVar3) {
          pppppppuVar2 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)*pppppppuVar7;
          iVar6 = iVar6 - 1;
          pppppppuVar4 = pppppppuVar3;
        }
        else {
          iVar5 = iVar5 - 1;
          pppppppuVar2 = pppppppuVar7;
          pppppppuVar4 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)*pppppppuVar3;
          pppppppuVar7 = pppppppuVar3;
        }
        *pppppppuVar1 = pppppppuVar7;
        pppppppuVar3 = pppppppuVar4;
        pppppppuVar1 = pppppppuVar7;
      } while( true );
    }
    *pppppppuVar1 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(0x0));
    if (iVar5 < 2) {
      return (uint)(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
    }
    param_1 = ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(((int)((int)(uintptr_t)param_1) * 2)));
    pppppppuVar3 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(*(undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)(gen_frame + 0x0));
  } while( true );
joined_r0x00dc2828: ;
  for (; pppppppuVar2 = pppppppuVar3, 0 < iVar5; iVar5 = iVar5 - 1) {
    *pppppppuVar1 = pppppppuVar2;
    pppppppuVar3 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)*pppppppuVar2;
    pppppppuVar1 = pppppppuVar2;
  }
joined_r0x00dc283d: ;
  while ((pppppppuVar3 = pppppppuVar7, iVar5 = (*(int *)(gen_frame + 0x4)), 0 < iVar6 &&
         (pppppppuVar3 != ((undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)GEN_TOP(0x0))))) {
    *pppppppuVar1 = pppppppuVar3;
    iVar6 = iVar6 - 1;
    pppppppuVar1 = pppppppuVar3;
    pppppppuVar7 = (undefined4 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 * PTR32 *)*pppppppuVar3;
  }
  goto joined_r0x00dc27db;
}

/* ref: FUN_00dc2880 */
GEN_LIB GEN_FRAME uint F_00dc2880(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2880u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc2890 */
GEN_LIB GEN_FRAME uint F_00dc2890(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc28a0 */
GEN_LIB GEN_FRAME uint F_00dc28a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc28a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc28b0 */
GEN_LIB GEN_FRAME uint F_00dc28b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc28b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc2900 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc2900(void)
{
  GEN_ENTER(0xdc2900u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc2910 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc2910(void)
{
  GEN_ENTER(0xdc2910u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc2920 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc2920(void)
{
  GEN_ENTER(0xdc2920u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc2930 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc2930(void)
{
  GEN_ENTER(0xdc2930u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc2940 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc2940(void)
{
  GEN_ENTER(0xdc2940u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc2950 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc2950(void)
{
  GEN_ENTER(0xdc2950u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc2960 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc2960(void)
{
  GEN_ENTER(0xdc2960u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc2970 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc2970(void)
{
  GEN_ENTER(0xdc2970u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc2980 */
GEN_LIB GEN_FRAME uint F_00dc2980(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc2980u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc29d0 */
GEN_LIB GEN_FRAME uint F_00dc29d0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc29d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc2a20 */
GEN_LIB GEN_FRAME uint F_00dc2a20(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc2a20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc2a70 */
GEN_LIB GEN_FRAME uint F_00dc2a70(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc2a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc2ac0 */
GEN_LIB GEN_FRAME uint F_00dc2ac0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc2ac0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc2b10 */
GEN_LIB GEN_FRAME uint F_00dc2b10(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc2b10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc2b60 */
GEN_LIB GEN_FRAME uint F_00dc2b60(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc2b60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc2bb0 */
GEN_LIB GEN_FRAME uint F_00dc2bb0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc2bb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc2c00 */
GEN_LIB GEN_FRAME uint F_00dc2c00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2c00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc2c20 */
GEN_LIB GEN_FRAME uint F_00dc2c20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2c20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc2c40 */
GEN_LIB GEN_FRAME uint F_00dc2c40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2c40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc2c60 */
GEN_LIB GEN_FRAME uint F_00dc2c60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2c60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc2d10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc2d10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc2d10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00dc2d40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc2d40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc2d40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 5);
  return uVar1;
}

/* ref: FUN_00dc2d70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc2d70(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc2d70u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 6);
  return uVar1;
}

/* ref: FUN_00dc2da0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc2da0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc2da0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 << 5);
  return uVar1;
}

/* ref: FUN_00dc2e00 */
GEN_LIB GEN_FRAME unsigned int F_00dc2e00(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc2e00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x30);
  }
  return;
}

/* ref: FUN_00dc2e30 */
GEN_LIB GEN_FRAME unsigned int F_00dc2e30(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc2e30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x30);
  }
  return;
}

/* ref: FUN_00dc2e60 */
GEN_LIB GEN_FRAME unsigned int F_00dc2e60(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc2e60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x30);
  }
  return;
}

/* ref: FUN_00dc2e90 */
GEN_LIB GEN_FRAME unsigned int F_00dc2e90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc2e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x30);
  }
  return;
}

/* ref: FUN_00dc2f40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc2f40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2f40u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dc2f80 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc2f80(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2f80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))
                      (param_1 GEN_EDX_ARG,*(undefined4 *)this,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc2fc0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc2fc0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc2fc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 6);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3000 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc3000(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3000u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3040 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3040(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3040u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3080 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3080(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3080u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc30c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc30c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc30c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 6);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3100 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3100(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3100u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3140 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3140(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3140u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3180 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3180(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3180u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc31c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc31c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc31c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 6);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3200 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3200(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3200u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3240 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3240(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3240u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3290 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc32e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc32e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc32e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 6);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3330 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3330(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3330u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3380 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc33c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc33c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc33c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3400 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3460 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3460(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3460u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 6);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc34c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc34c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc34c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3510 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3510(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3510u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3560 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 6);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc35b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc35b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc35b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3620 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 6);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3680 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3680(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3680u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc36c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc36c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc36c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc3700 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc3700(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3700u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 6);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x30);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc3770 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3770(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc3770u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc37b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc37b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc37b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,iVar1 * 4);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  return (uint)this;
}

/* ref: FUN_00dc3800 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3800(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3800u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  return (uint)this;
}

/* ref: FUN_00dc3840 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3840(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3840u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 6);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  return (uint)this;
}

/* ref: FUN_00dc3890 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3890(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3890u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,iVar1 << 5)
    ;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  return (uint)this;
}

/* ref: FUN_00dc38d0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc38d0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc38d0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,iVar1 * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x30);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc3940 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc3940(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3940u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x30);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc39b0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc39b0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc39b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,iVar1 << 5);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x30);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc3a20 */
GEN_LIB GEN_FRAME uint F_00dc3a20(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3a20u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc3a30 */
GEN_LIB GEN_FRAME uint F_00dc3a30(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3a30u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc3a40 */
GEN_LIB GEN_FRAME uint F_00dc3a40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3a40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc3a50 */
GEN_LIB GEN_FRAME uint F_00dc3a50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc3aa0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc3aa0(void)
{
  GEN_ENTER(0xdc3aa0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc3ab0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc3ab0(void)
{
  GEN_ENTER(0xdc3ab0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc3ac0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc3ac0(void)
{
  GEN_ENTER(0xdc3ac0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc3ad0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc3ad0(void)
{
  GEN_ENTER(0xdc3ad0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc3ae0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc3ae0(void)
{
  GEN_ENTER(0xdc3ae0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc3af0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc3af0(void)
{
  GEN_ENTER(0xdc3af0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc3b00 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc3b00(void)
{
  GEN_ENTER(0xdc3b00u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc3b10 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc3b10(void)
{
  GEN_ENTER(0xdc3b10u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc3b20 */
GEN_LIB GEN_FRAME uint F_00dc3b20(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc3b20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc3b70 */
GEN_LIB GEN_FRAME uint F_00dc3b70(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc3b70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc3bc0 */
GEN_LIB GEN_FRAME uint F_00dc3bc0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc3bc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc3c10 */
GEN_LIB GEN_FRAME uint F_00dc3c10(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc3c10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 6);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc3c60 */
GEN_LIB GEN_FRAME uint F_00dc3c60(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc3c60u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc3cb0 */
GEN_LIB GEN_FRAME uint F_00dc3cb0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc3cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc3d00 */
GEN_LIB GEN_FRAME uint F_00dc3d00(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc3d00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc3d50 */
GEN_LIB GEN_FRAME uint F_00dc3d50(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc3d50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc3da0 */
GEN_LIB GEN_FRAME uint F_00dc3da0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc3dc0 */
GEN_LIB GEN_FRAME uint F_00dc3dc0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3dc0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc3de0 */
GEN_LIB GEN_FRAME uint F_00dc3de0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3de0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc3e00 */
GEN_LIB GEN_FRAME uint F_00dc3e00(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3e00u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc3e20 */
GEN_LIB GEN_FRAME unsigned int F_00dc3e20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc3e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00dc3e50 */
GEN_LIB GEN_FRAME unsigned int F_00dc3e50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc3e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00dc3e80 */
GEN_LIB GEN_FRAME unsigned int F_00dc3e80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc3e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00dc3eb0 */
GEN_LIB GEN_FRAME unsigned int F_00dc3eb0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc3eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return;
}

/* ref: FUN_00dc3ee0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc3ee0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3ee0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 6);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc3f50 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3f50(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3f50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,iVar1 * 4);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  return (uint)this;
}

/* ref: FUN_00dc3fa0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3fa0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3fa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  return (uint)this;
}

/* ref: FUN_00dc3fe0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc3fe0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc3fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 6);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  return (uint)this;
}

/* ref: FUN_00dc4030 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc4030(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4030u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  int iVar1;
  
  iVar1 = *((int *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,iVar1 << 5)
    ;
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  return (uint)this;
}

/* ref: FUN_00dc4070 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc4070(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4070u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,iVar1 * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc40e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc40e0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc40e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) + uVar1 * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc4150 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc4150(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4150u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,iVar1 << 5);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0xc);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc41d0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc41d0(void)
{
  GEN_ENTER(0xdc41d0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc41f0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc41f0(void)
{
  GEN_ENTER(0xdc41f0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4210 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc4210(void)
{
  GEN_ENTER(0xdc4210u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4230 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc4230(void)
{
  GEN_ENTER(0xdc4230u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4250 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc4250(void)
{
  GEN_ENTER(0xdc4250u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4260 */
GEN_LIB GEN_FRAME uint F_00dc4260(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4260u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc4270 */
GEN_LIB GEN_FRAME uint F_00dc4270(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4270u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc4290 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc4290(void)
{
  GEN_ENTER(0xdc4290u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc42b0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc42b0(void)
{
  GEN_ENTER(0xdc42b0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc42d0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc42d0(void)
{
  GEN_ENTER(0xdc42d0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4300 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc4300(void)
{
  GEN_ENTER(0xdc4300u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4320 */
GEN_LIB GEN_FRAME unsigned int F_00dc4320(GEN_P(int param_1, unsigned int gen_a0), GEN_P(undefined4 param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4320u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(undefined4 param_2 = (undefined4)gen_a1;)
  if (param_1 != 0) {
    F_00dc6640(param_1 GEN_EDX_ARG,param_2);
  }
  return;
}

/* ref: FUN_00dc4350 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc4350(void)
{
  GEN_ENTER(0xdc4350u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4360 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc4360(void)
{
  GEN_ENTER(0xdc4360u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4370 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc4370(void)
{
  GEN_ENTER(0xdc4370u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4380 */
GEN_LIB GEN_FRAME uint F_00dc4380(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc4380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 * 4);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc43d0 */
GEN_LIB GEN_FRAME uint F_00dc43d0(GEN_P(undefined * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc43d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = F_00dc4920(param_1 GEN_EDX_ARG);
  return uVar1;
}

/* ref: FUN_00dc4410 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc4410(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc4410u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0x60);
  return uVar1;
}

/* ref: FUN_00dc4440 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc4440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc4440u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 4);
  return uVar1;
}

/* ref: FUN_00dc4470 */
GEN_LIB GEN_FRAME unsigned int F_00dc4470(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc4470u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x60);
  }
  return;
}

/* ref: FUN_00dc44a0 */
GEN_LIB GEN_FRAME unsigned int F_00dc44a0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc44a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x60);
  }
  return;
}

/* ref: FUN_00dc44e0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc44e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc44e0u, gen_a0, gen_a1, 0u, 0u);
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

/* ref: FUN_00dc4520 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc4520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc4520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc4560 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc4560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc4560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc45b0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc45b0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc45b0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc45f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc45f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc45f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,iVar1 * 4);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x60);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc4660 */
GEN_LIB GEN_FRAME unsigned int F_00dc4660(GEN_P(int param_1, unsigned int gen_a0), GEN_P(int param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4660u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  GEN_PIN(int param_2 = (int)gen_a1;)
  int iVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = param_2 - 1;
  if (-1 < iVar3) {
    piVar2 = ((int *)GEN_TOP((iVar3 * 0x60 + 8 + param_1)));
    do {
      iVar1 = *piVar2;
      piVar2[-1] = 0;
      if (-1 < iVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),piVar2[-2],iVar1 * 4);
      }
      piVar2[-2] = 0;
      *piVar2 = ((int)0x80000000);
      iVar3 = iVar3 - 1;
      piVar2 = piVar2 - 0x18;
    } while (-1 < iVar3);
  }
  return;
}

/* ref: FUN_00dc46c0 */
GEN_LIB GEN_FRAME unsigned int GEN_THISCALL F_00dc46c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc46c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  int * piVar2;
  int iVar3;
  
  iVar3 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar3) {
    piVar2 = ((int *)GEN_TOP((iVar3 * 0x60 + 8 + *(int *)this)));
    do {
      iVar1 = *piVar2;
      piVar2[-1] = 0;
      if (-1 < iVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),piVar2[-2],iVar1 * 4);
      }
      piVar2[-2] = 0;
      *piVar2 = ((int)0x80000000);
      iVar3 = iVar3 - 1;
      piVar2 = piVar2 - 0x18;
    } while (-1 < iVar3);
    *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
    return 0;
  }
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  return 0;
}

/* ref: FUN_00dc4740 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc4740(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4740u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar4) {
    piVar3 = ((int *)GEN_TOP((iVar4 * 0x60 + 8 + *(int *)this)));
    do {
      iVar1 = *piVar3;
      piVar3[-1] = 0;
      if (-1 < iVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),piVar3[-2],iVar1 * 4);
      }
      piVar3[-2] = 0;
      *piVar3 = ((int)0x80000000);
      piVar3 = piVar3 - 0x18;
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_ARG,*(undefined4 *)this,(uVar2 & 0x3fffffff) * 0x60);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00dc47e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc47e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc47e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar4) {
    piVar3 = ((int *)GEN_TOP((iVar4 * 0x60 + 8 + *(int *)this)));
    do {
      iVar1 = *piVar3;
      piVar3[-1] = 0;
      if (-1 < iVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),piVar3[-2],iVar1 * 4);
      }
      piVar3[-2] = 0;
      *piVar3 = ((int)0x80000000);
      piVar3 = piVar3 - 0x18;
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar2 & 0x3fffffff) * 0x60);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00dc4880 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc4880(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc4880u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int * piVar3;
  int iVar4;
  
  iVar4 = *((int *)GEN_TOP(((int)this + 4))) - 1;
  if (-1 < iVar4) {
    piVar3 = ((int *)GEN_TOP((iVar4 * 0x60 + 8 + *(int *)this)));
    do {
      iVar1 = *piVar3;
      piVar3[-1] = 0;
      if (-1 < iVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),piVar3[-2],iVar1 * 4);
      }
      piVar3[-2] = 0;
      *piVar3 = ((int)0x80000000);
      piVar3 = piVar3 - 0x18;
      iVar4 = iVar4 - 1;
    } while (-1 < iVar4);
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar2) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar2 & 0x3fffffff) * 0x60);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar2;
}

/* ref: FUN_00dc4920 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc4920(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc4920u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  int iVar1;
  uint uVar2;
  int iVar3;
  int * piVar4;
  
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x5c)));
  *((undefined4 *)GEN_TOP(((int)this + 0x58))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x54))),(uVar2 & 0x3fffffff) * 2);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x54))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x5c))) = 0x80000000;
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x50)));
  *((undefined4 *)GEN_TOP(((int)this + 0x4c))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x48))),uVar2 * 4);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x50))) = 0x80000000;
  *((undefined4 *)GEN_TOP(((int)this + 0x48))) = 0;
  iVar3 = *((int *)GEN_TOP(((int)this + 0x40))) - 1;
  if (-1 < iVar3) {
    piVar4 = ((int *)GEN_TOP((iVar3 * 0x60 + 8 + *((int *)GEN_TOP(((int)this + 0x3c))))));
    do {
      iVar1 = *piVar4;
      piVar4[-1] = 0;
      if (-1 < iVar1) {
        ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),piVar4[-2],iVar1 * 4);
      }
      piVar4[-2] = 0;
      *piVar4 = ((int)0x80000000);
      piVar4 = piVar4 - 0x18;
      iVar3 = iVar3 - 1;
    } while (-1 < iVar3);
  }
  uVar2 = *((uint *)GEN_TOP(((int)this + 0x44)));
  *((undefined4 *)GEN_TOP(((int)this + 0x40))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*((undefined4 *)GEN_TOP(((int)this + 0x3c))),(uVar2 & 0x3fffffff) * 0x60);
  }
  *((undefined4 *)GEN_TOP(((int)this + 0x3c))) = 0;
  *((undefined4 *)GEN_TOP(((int)this + 0x44))) = 0x80000000;
  uVar2 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if ((uVar2 & 0x80000000) == 0) {
    uVar2 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar2 & 0x3fffffff) + uVar2 * 4);
  }
  *(undefined4 *)this = 0;
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  return uVar2;
}

/* ref: FUN_00dc4a50 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc4a50(GEN_P(undefined * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4a50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * param_1 = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  LPVOID pvVar1;
  
  F_00dc4920(param_1 GEN_EDX_FWD);
  if (((param_2 & 1) != 0) && (param_1 != ((undefined *)GEN_TOP(0x0)))) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x60);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc4aa0 */
GEN_LIB GEN_FRAME uint F_00dc4aa0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4aa0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc4ab0 */
GEN_LIB GEN_FRAME uint F_00dc4ab0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4ab0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc4ac0 */
GEN_LIB GEN_FRAME uint F_00dc4ac0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4ac0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc4b00 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc4b00(void)
{
  GEN_ENTER(0xdc4b00u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4b10 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc4b10(void)
{
  GEN_ENTER(0xdc4b10u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4b20 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc4b20(void)
{
  GEN_ENTER(0xdc4b20u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4b30 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc4b30(void)
{
  GEN_ENTER(0xdc4b30u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4b40 */
GEN_LIB GEN_FRAME uint F_00dc4b40(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc4b40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc4b90 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc4b90(void)
{
  GEN_ENTER(0xdc4b90u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4ba0 */
GEN_LIB GEN_FRAME uint F_00dc4ba0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc4ba0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc4bf0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc4bf0(void)
{
  GEN_ENTER(0xdc4bf0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc4c00 */
GEN_LIB GEN_FRAME uint F_00dc4c00(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc4c00u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc4c50 */
GEN_LIB GEN_FRAME uint F_00dc4c50(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc4c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc4ca0 */
GEN_LIB GEN_FRAME uint F_00dc4ca0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc4ca0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc4cf0 */
GEN_LIB GEN_FRAME uint F_00dc4cf0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc4cf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc4d40 */
GEN_LIB GEN_FRAME uint F_00dc4d40(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4d40u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc4d50 */
GEN_LIB GEN_FRAME uint F_00dc4d50(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4d50u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc4d60 */
GEN_LIB GEN_FRAME uint F_00dc4d60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc4d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc4de0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc4de0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc4de0u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0x30);
  return uVar1;
}

/* ref: FUN_00dc4e10 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc4e10(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc4e10u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 * 0x30);
  return uVar1;
}

/* ref: FUN_00dc4e40 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc4e40(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(undefined4 param_1, unsigned int gen_a1), GEN_P(int param_2, unsigned int gen_a2))
{
  GEN_ENTER(0xdc4e40u, gen_a0, gen_a1, gen_a2, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a1;)
  GEN_PIN(int param_2 = (int)gen_a2;)
  uint uVar1;
  
  uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*(int *)this + 0x10))))(this GEN_EDX_FWD,param_1,param_2 << 5);
  return uVar1;
}

/* ref: FUN_00dc4e90 */
GEN_LIB GEN_FRAME unsigned int F_00dc4e90(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc4e90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x1c);
  }
  return;
}

/* ref: FUN_00dc4ec0 */
GEN_LIB GEN_FRAME unsigned int F_00dc4ec0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc4ec0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x1c);
  }
  return;
}

/* ref: FUN_00dc4ef0 */
GEN_LIB GEN_FRAME unsigned int F_00dc4ef0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc4ef0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x1c);
  }
  return;
}

/* ref: FUN_00dc4f20 */
GEN_LIB GEN_FRAME unsigned int F_00dc4f20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc4f20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x1c);
  }
  return;
}

/* ref: FUN_00dc4f50 */
GEN_LIB GEN_FRAME unsigned int F_00dc4f50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc4f50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x1c);
  }
  return;
}

/* ref: FUN_00dc4f80 */
GEN_LIB GEN_FRAME unsigned int F_00dc4f80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc4f80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x1c);
  }
  return;
}

/* ref: FUN_00dc5010 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc5010(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5010u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc5050(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5090 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc5090(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(int * param_1, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5090u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  GEN_PIN(int * param_1 = (int *)(uintptr_t)gen_a1;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((*param_1 + 0x10))))(param_1 GEN_EDX_FWD,*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc50d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc50d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc50d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5110 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5110(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5110u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5150 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5150(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5150u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5190 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5190(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5190u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc51d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc51d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc51d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5210 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5210(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5210u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5250 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5250(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5250u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5290 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5290(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5290u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc52d0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc52d0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc52d0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5340 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5340(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5340u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5380 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5380(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5380u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc53c0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc53c0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc53c0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5400 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5400(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5400u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5440 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5440(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5440u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5480 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5480(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5480u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5520 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5520(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5520u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5560 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5560(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5560u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc55a0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc55a0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc55a0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc55e0 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc55e0(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc55e0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5620 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5620(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5620u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,(uVar1 & 0x3fffffff) * 0x30);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc5660 */
GEN_LIB GEN_NOFRAME uint GEN_THISCALL F_00dc5660(GEN_P(undefined * this, unsigned int gen_a0) GEN_EDX_PARAM)
{
  GEN_ENTER(0xdc5660u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined * this = (undefined *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = *((uint *)GEN_TOP(((int)this + 8)));
  *((undefined4 *)GEN_TOP(((int)this + 4))) = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*(undefined4 *)this,uVar1 << 5);
  }
  *((undefined4 *)GEN_TOP(((int)this + 8))) = 0x80000000;
  *(undefined4 *)this = 0;
  return uVar1;
}

/* ref: FUN_00dc56a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc56a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc56a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x1c);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc5710 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc5710(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5710u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x1c);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc5780 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc5780(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5780u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,iVar1 << 5);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x1c);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc5850 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc5850(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5850u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x1c);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc58c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc58c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc58c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x1c);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc5930 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc5930(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5930u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,iVar1 << 5);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x1c);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc59a0 */
GEN_LIB GEN_FRAME uint F_00dc59a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc59a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc59b0 */
GEN_LIB GEN_FRAME uint F_00dc59b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc59b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc59c0 */
GEN_LIB GEN_FRAME uint F_00dc59c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc59c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc5a00 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc5a00(void)
{
  GEN_ENTER(0xdc5a00u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc5a10 */
GEN_LIB GEN_FRAME uint F_00dc5a10(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5a10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc5a60 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc5a60(void)
{
  GEN_ENTER(0xdc5a60u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc5a70 */
GEN_LIB GEN_FRAME uint F_00dc5a70(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5a70u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc5ac0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc5ac0(void)
{
  GEN_ENTER(0xdc5ac0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc5ad0 */
GEN_LIB GEN_FRAME uint F_00dc5ad0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5ad0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc5b20 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc5b20(void)
{
  GEN_ENTER(0xdc5b20u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc5b30 */
GEN_LIB GEN_FRAME uint F_00dc5b30(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5b30u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc5b80 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc5b80(void)
{
  GEN_ENTER(0xdc5b80u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc5b90 */
GEN_LIB GEN_FRAME uint F_00dc5b90(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5b90u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc5be0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc5be0(void)
{
  GEN_ENTER(0xdc5be0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc5bf0 */
GEN_LIB GEN_FRAME uint F_00dc5bf0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5bf0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc5c40 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc5c40(void)
{
  GEN_ENTER(0xdc5c40u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc5c50 */
GEN_LIB GEN_FRAME uint F_00dc5c50(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5c50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc5ca0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc5ca0(void)
{
  GEN_ENTER(0xdc5ca0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc5cb0 */
GEN_LIB GEN_FRAME uint F_00dc5cb0(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5cb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
                      (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc5d00 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc5d00(void)
{
  GEN_ENTER(0xdc5d00u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc5d10 */
GEN_LIB GEN_FRAME uint F_00dc5d10(GEN_P(undefined4 * param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5d10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  uint uVar1;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    uVar1 = ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,uVar1 << 5);
  }
  param_1[2] = 0x80000000;
  *param_1 = 0;
  return uVar1;
}

/* ref: FUN_00dc5d60 */
GEN_LIB GEN_FRAME uint F_00dc5d60(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5d60u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc5d70 */
GEN_LIB GEN_FRAME uint F_00dc5d70(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5d70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc5d80 */
GEN_LIB GEN_FRAME uint F_00dc5d80(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5d80u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc5d90 */
GEN_LIB GEN_FRAME uint F_00dc5d90(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5d90u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc5da0 */
GEN_LIB GEN_FRAME uint F_00dc5da0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5da0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc5db0 */
GEN_LIB GEN_FRAME uint F_00dc5db0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5db0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc5dc0 */
GEN_LIB GEN_FRAME unsigned int F_00dc5dc0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5dc0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return;
}

/* ref: FUN_00dc5df0 */
GEN_LIB GEN_FRAME unsigned int F_00dc5df0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5df0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return;
}

/* ref: FUN_00dc5e20 */
GEN_LIB GEN_FRAME unsigned int F_00dc5e20(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5e20u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return;
}

/* ref: FUN_00dc5e50 */
GEN_LIB GEN_FRAME unsigned int F_00dc5e50(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5e50u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return;
}

/* ref: FUN_00dc5e80 */
GEN_LIB GEN_FRAME unsigned int F_00dc5e80(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5e80u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return;
}

/* ref: FUN_00dc5eb0 */
GEN_LIB GEN_FRAME unsigned int F_00dc5eb0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5eb0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return;
}

/* ref: FUN_00dc5ee0 */
GEN_LIB GEN_FRAME unsigned int F_00dc5ee0(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5ee0u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return;
}

/* ref: FUN_00dc5f10 */
GEN_LIB GEN_FRAME unsigned int F_00dc5f10(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5f10u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return;
}

/* ref: FUN_00dc5f40 */
GEN_LIB GEN_FRAME unsigned int F_00dc5f40(GEN_P(int param_1, unsigned int gen_a0))
{
  GEN_ENTER(0xdc5f40u, gen_a0, 0u, 0u, 0u);
  GEN_PIN(int param_1 = (int)gen_a0;)
  LPVOID pvVar1;
  
  if (param_1 != 0) {
    pvVar1 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar1 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return;
}

/* ref: FUN_00dc5f70 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc5f70(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5f70u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc5fe0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc5fe0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc5fe0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc6050 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc6050(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc6050u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,iVar1 << 5);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc60c0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc60c0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc60c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc6130 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc6130(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc6130u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc61a0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc61a0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc61a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,iVar1 << 5);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc6210 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc6210(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc6210u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc6280 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc6280(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc6280u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  uint uVar1;
  LPVOID pvVar2;
  
  uVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < (int)uVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))
              (&REFG(undefined * PTR32, 0x13516ac),*param_1,(uVar1 & 0x3fffffff) * 0x30);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc62f0 */
GEN_LIB GEN_FRAME uint GEN_THISCALL F_00dc62f0(GEN_P(undefined4 * param_1, unsigned int gen_a0) GEN_EDX_PARAM, GEN_P(byte param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc62f0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 * param_1 = (undefined4 *)(uintptr_t)gen_a0;)
  GEN_PIN(byte param_2 = (byte)gen_a1;)
  int iVar1;
  LPVOID pvVar2;
  
  iVar1 = param_1[2];
  param_1[1] = 0;
  if (-1 < iVar1) {
    ((code *)*((gen_code32 *)GEN_TOP((REFG(undefined * PTR32, 0x13516ac) + 0x10))))(&REFG(undefined * PTR32, 0x13516ac),*param_1,iVar1 << 5);
  }
  *param_1 = 0;
  param_1[2] = 0x80000000;
  if ((param_2 & 1) != 0) {
    pvVar2 = gen_imp_TlsGetValue(REFG(undefined4, 0x15d9a88));
    ((GEN_TCODE *)*((gen_code32 *)GEN_TOP((**((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) + 8))))(*((int * PTR32 *)GEN_TOP(((int)pvVar2 + 0x2c))) GEN_EDX_ARG,param_1,0x10);
  }
  return (uint)param_1;
}

/* ref: FUN_00dc6360 */
GEN_LIB GEN_FRAME uint F_00dc6360(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc6360u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc6380 */
GEN_LIB GEN_FRAME uint F_00dc6380(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc6380u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc63a0 */
GEN_LIB GEN_FRAME uint F_00dc63a0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc63a0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc63b0 */
GEN_LIB GEN_FRAME uint F_00dc63b0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc63b0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc63d0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc63d0(void)
{
  GEN_ENTER(0xdc63d0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc63e0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc63e0(void)
{
  GEN_ENTER(0xdc63e0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc6400 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc6400(void)
{
  GEN_ENTER(0xdc6400u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc6410 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc6410(void)
{
  GEN_ENTER(0xdc6410u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc6430 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc6430(void)
{
  GEN_ENTER(0xdc6430u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc6450 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc6450(void)
{
  GEN_ENTER(0xdc6450u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc6460 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc6460(void)
{
  GEN_ENTER(0xdc6460u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc6470 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc6470(void)
{
  GEN_ENTER(0xdc6470u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc6480 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc6480(void)
{
  GEN_ENTER(0xdc6480u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc6490 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc6490(void)
{
  GEN_ENTER(0xdc6490u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc64a0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc64a0(void)
{
  GEN_ENTER(0xdc64a0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc64b0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc64b0(void)
{
  GEN_ENTER(0xdc64b0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc64c0 */
GEN_LIB GEN_FRAME uint F_00dc64c0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc64c0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc64e0 */
GEN_LIB GEN_FRAME uint F_00dc64e0(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc64e0u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc6520 */
GEN_LIB GEN_FRAME uint F_00dc6520(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc6520u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc6540 */
GEN_LIB GEN_FRAME uint F_00dc6540(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc6540u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc6560 */
GEN_LIB GEN_FRAME uint F_00dc6560(GEN_P(undefined4 param_1, unsigned int gen_a0), GEN_P(uint param_2, unsigned int gen_a1))
{
  GEN_ENTER(0xdc6560u, gen_a0, gen_a1, 0u, 0u);
  GEN_PIN(undefined4 param_1 = (undefined4)gen_a0;)
  GEN_PIN(uint param_2 = (uint)gen_a1;)
  return param_2;
}

/* ref: FUN_00dc6580 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc6580(void)
{
  GEN_ENTER(0xdc6580u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc6590 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc6590(void)
{
  GEN_ENTER(0xdc6590u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc65b0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc65b0(void)
{
  GEN_ENTER(0xdc65b0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc65c0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc65c0(void)
{
  GEN_ENTER(0xdc65c0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc65e0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc65e0(void)
{
  GEN_ENTER(0xdc65e0u, 0u, 0u, 0u, 0u);
  return;
}

/* ref: FUN_00dc65f0 */
GEN_LIB GEN_NOFRAME unsigned int F_00dc65f0(void)
{
  GEN_ENTER(0xdc65f0u, 0u, 0u, 0u, 0u);
  return;
}

