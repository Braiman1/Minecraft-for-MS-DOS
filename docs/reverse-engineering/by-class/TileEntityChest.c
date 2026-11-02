/* Candidate RTTI class: TileEntityChest
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009021c8 slot 0 address 005058dc */

/* ADDRESS: 005058dc NAME: FUN_005058dc */

void __fastcall FUN_005058dc(int param_1)

{
  void *_Memory;
  int iVar1;
  
  iVar1 = 0;
  do {
    _Memory = *(void **)(param_1 + 0x1c + iVar1 * 4);
    if (_Memory != (void *)0x0) {
      free(_Memory);
    }
    *(undefined4 *)(param_1 + 0x1c + iVar1 * 4) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x24);
  return;
}



/* vtable 009021c8 slot 1 address 00505918 */

/* ADDRESS: 00505918 NAME: FUN_00505918 */

void __fastcall FUN_00505918(void *param_1)

{
  FUN_005058dc();
  free(param_1);
  return;
}



/* vtable 009021c8 slot 2 address 00505bfc */

/* ADDRESS: 00505bfc NAME: FUN_00505bfc */

void __thiscall FUN_00505bfc(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  int iVar5;
  undefined8 uVar6;
  undefined1 local_38 [24];
  undefined1 local_20;
  
  iVar5 = 0;
  FUN_0050538c(param_2);
  do {
    if ((void *)param_1[iVar5 + 7] != (void *)0x0) {
      free((void *)param_1[iVar5 + 7]);
    }
    param_1[iVar5 + 7] = 0;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x24);
  FUN_00505a36("Items");
  local_20 = 0;
  FUN_004adc4c(local_38);
  iVar5 = 0;
  uVar4 = extraout_EDX;
  FUN_0081ffd0(extraout_EDX);
  while( true ) {
    iVar1 = FUN_004aed18(uVar4);
    if (iVar1 <= iVar5) break;
    uVar2 = FUN_004aed08(iVar5);
    FUN_00505a36(&DAT_0089651e);
    local_20 = 0;
    uVar6 = FUN_004ad7f2(local_38);
    uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
    uVar3 = (uint)uVar6 & 0xff;
    FUN_0081ffd0();
    iVar1 = (**(code **)(*param_1 + 0x1c))();
    if ((int)uVar3 < iVar1) {
      iVar1 = FUN_00846710(0x10);
      uVar4 = FUN_00498656(uVar2);
      param_1[uVar3 + 7] = iVar1;
    }
    iVar5 = iVar5 + 1;
  }
  return;
}



/* vtable 009021c8 slot 3 address 00505ad6 */

/* ADDRESS: 00505ad6 NAME: FUN_00505ad6 */

void __thiscall FUN_00505ad6(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_38 [24];
  undefined1 local_20;
  
  FUN_005054da(param_2);
  uVar4 = 0x30;
  uVar1 = FUN_00846710(0x30);
  FUN_004aec4a();
  iVar3 = 0;
  while( true ) {
    iVar2 = (**(code **)(*param_1 + 0x1c))(uVar4);
    if (iVar2 <= iVar3) break;
    if (param_1[iVar3 + 7] != 0) {
      uVar4 = FUN_00846710(0x5c);
      FUN_004ad754();
      FUN_00505a36(&DAT_0089651e);
      local_20 = 0;
      FUN_004ae30e(local_38,(int)(char)iVar3);
      FUN_0081ffd0(extraout_ECX,extraout_ECX);
      FUN_004984ee(uVar4);
      uVar4 = FUN_004aee34(uVar4);
    }
    iVar3 = iVar3 + 1;
  }
  FUN_00505a36("Items");
  local_20 = 0;
  uVar1 = FUN_004adf58(local_38,uVar1);
  FUN_0081ffd0(uVar1,uVar1);
  return;
}



/* vtable 009021c8 slot 4 address 005051fc */
/* No matching successful function export. Inspect address in Ghidra. */

/* vtable 009021c8 slot 5 address 005051fe */

/* ADDRESS: 005051fe NAME: FUN_005051fe */

void __fastcall FUN_005051fe(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x18))
            (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
             *(undefined4 *)(param_1 + 0x10));
  return;
}



/* vtable 009021c8 slot 6 address 00505996 */

/* ADDRESS: 00505996 NAME: thunk_FUN_0050522c */

void thunk_FUN_0050522c(void)

{
  FUN_0050522c();
  return;
}



/* vtable 009021c8 slot 7 address 00505878 */

/* ADDRESS: 00505878 NAME: FUN_00505878 */

undefined4 FUN_00505878(void)

{
  return 0x1b;
}



/* vtable 009021c8 slot 8 address 0050587e */

/* ADDRESS: 0050587e NAME: FUN_0050587e */

undefined4 __thiscall FUN_0050587e(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + 0x1c + param_2 * 4);
}



/* vtable 009021c8 slot 9 address 00505942 */

/* ADDRESS: 00505942 NAME: FUN_00505942 */

int * __thiscall FUN_00505942(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[param_2 + 7];
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  if ((*piVar1 <= param_3) ||
     (piVar1 = (int *)FUN_0049836e(param_3), *(int *)param_1[param_2 + 7] == 0)) {
    param_1[param_2 + 7] = 0;
  }
  (**(code **)(*param_1 + 0x18))();
  return piVar1;
}



/* vtable 009021c8 slot 10 address 00505892 */

/* ADDRESS: 00505892 NAME: FUN_00505892 */

void __thiscall FUN_00505892(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  param_1[param_2 + 7] = (int)param_3;
  if (param_3 != (int *)0x0) {
    iVar2 = *param_3;
    iVar1 = (**(code **)(*param_1 + 0x30))();
    if (iVar1 < iVar2) {
      iVar2 = (**(code **)(*param_1 + 0x30))();
      *param_3 = iVar2;
    }
  }
  (**(code **)(*param_1 + 0x18))();
  return;
}



/* vtable 009021c8 slot 11 address 00505aa4 */

/* ADDRESS: 00505aa4 NAME: FUN_00505aa4 */

undefined4 __fastcall FUN_00505aa4(undefined4 param_1)

{
  FUN_00505a36("Chest");
  return param_1;
}



/* vtable 009021c8 slot 12 address 005058d6 */

/* ADDRESS: 005058d6 NAME: FUN_005058d6 */

undefined4 FUN_005058d6(void)

{
  return 0x40;
}



/* vtable 009021c8 slot 13 address 005059a0 */

/* ADDRESS: 005059a0 NAME: FUN_005059a0 */

bool __fastcall FUN_005059a0(int param_1)

{
  int iVar1;
  float10 extraout_ST0;
  
  if ((*(int **)(param_1 + 4) == (int *)0x0) ||
     (iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xc))(), param_1 != iVar1)) {
    return false;
  }
  FUN_0044a04a((double)*(int *)(param_1 + 8) + DAT_00896530,
               (double)*(int *)(param_1 + 0xc) + DAT_00896530,
               (double)*(int *)(param_1 + 0x10) + DAT_00896530);
  return (double)extraout_ST0 <= DAT_00896538;
}



/* vtable 00902208 slot 0 address 00505913 */

/* ADDRESS: 00505913 NAME: FUN_00505913 */

void FUN_00505913(void)

{
  FUN_005058dc();
  return;
}



/* vtable 00902208 slot 1 address 0050593c */

/* ADDRESS: 0050593c NAME: FUN_0050593c */

void __fastcall FUN_0050593c(int param_1)

{
  FUN_005058dc();
  free((void *)(param_1 + -0x18));
  return;
}



/* vtable 00902208 slot 2 address 00505aca */

/* ADDRESS: 00505aca NAME: FUN_00505aca */

undefined4 FUN_00505aca(void)

{
  return 0x1b;
}



/* vtable 00902208 slot 3 address 0050588c */

/* ADDRESS: 0050588c NAME: FUN_0050588c */

void FUN_0050588c(void)

{
  FUN_0050587e();
  return;
}



/* vtable 00902208 slot 4 address 00505991 */

/* ADDRESS: 00505991 NAME: FUN_00505991 */

void FUN_00505991(void)

{
  FUN_00505942();
  return;
}



/* vtable 00902208 slot 5 address 005058d0 */

/* ADDRESS: 005058d0 NAME: FUN_005058d0 */

void FUN_005058d0(void)

{
  FUN_00505892();
  return;
}



/* vtable 00902208 slot 6 address 00505ac3 */

/* ADDRESS: 00505ac3 NAME: FUN_00505ac3 */

void FUN_00505ac3(void)

{
  FUN_00505aa4();
  return;
}



/* vtable 00902208 slot 7 address 00505ad0 */

/* ADDRESS: 00505ad0 NAME: FUN_00505ad0 */

undefined4 FUN_00505ad0(void)

{
  return 0x40;
}



/* vtable 00902208 slot 8 address 0050599b */

/* ADDRESS: 0050599b NAME: FUN_0050599b */

void FUN_0050599b(void)

{
  FUN_0050522c();
  return;
}



/* vtable 00902208 slot 9 address 00505a2d */

/* ADDRESS: 00505a2d NAME: FUN_00505a2d */

bool __fastcall FUN_00505a2d(int param_1)

{
  int iVar1;
  float10 extraout_ST0;
  
  if ((*(int **)(param_1 + -0x14) == (int *)0x0) ||
     (iVar1 = (**(code **)(**(int **)(param_1 + -0x14) + 0xc))(), param_1 + -0x18 != iVar1)) {
    return false;
  }
  FUN_0044a04a((double)*(int *)(param_1 + -0x10) + DAT_00896530,
               (double)*(int *)(param_1 + -0xc) + DAT_00896530,
               (double)*(int *)(param_1 + -8) + DAT_00896530);
  return (double)extraout_ST0 <= DAT_00896538;
}


