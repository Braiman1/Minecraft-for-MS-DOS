/* Candidate RTTI class: TileEntityDispenser
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 0090404c slot 0 address 00505da8 */

/* ADDRESS: 00505da8 NAME: FUN_00505da8 */

void __fastcall FUN_00505da8(int param_1)

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
  } while (iVar1 != 9);
  return;
}



/* vtable 0090404c slot 1 address 00505de4 */

/* ADDRESS: 00505de4 NAME: FUN_00505de4 */

void __fastcall FUN_00505de4(void *param_1)

{
  FUN_00505da8();
  free(param_1);
  return;
}



/* vtable 0090404c slot 2 address 005060b6 */

/* ADDRESS: 005060b6 NAME: FUN_005060b6 */

void __thiscall FUN_005060b6(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 extraout_EDX;
  int iVar5;
  int *piVar6;
  undefined8 uVar7;
  undefined1 auStack_38 [24];
  undefined1 uStack_20;
  
  iVar5 = 0;
  FUN_0050538c(param_2);
  do {
    if ((void *)param_1[iVar5 + 7] != (void *)0x0) {
      free((void *)param_1[iVar5 + 7]);
    }
    param_1[iVar5 + 7] = 0;
    iVar5 = iVar5 + 1;
  } while (iVar5 != 9);
  FUN_00505ef4("Items");
  uStack_20 = 0;
  FUN_004adc4c(auStack_38);
  uVar4 = extraout_EDX;
  FUN_0081ffd0(extraout_EDX);
  piVar6 = param_1 + 7;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar6 = 0;
    piVar6 = piVar6 + 1;
  }
  iVar5 = 0;
  while( true ) {
    iVar1 = FUN_004aed18(uVar4);
    if (iVar1 <= iVar5) break;
    uVar2 = FUN_004aed08(iVar5);
    FUN_00505ef4(&DAT_00896545);
    uStack_20 = 0;
    uVar7 = FUN_004ad7f2(auStack_38);
    uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
    uVar3 = (uint)uVar7 & 0xff;
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



/* vtable 0090404c slot 3 address 00505f94 */

/* ADDRESS: 00505f94 NAME: FUN_00505f94 */

void __thiscall FUN_00505f94(int *param_1,undefined4 param_2)

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
      FUN_00505ef4(&DAT_00896545);
      local_20 = 0;
      FUN_004ae30e(local_38,iVar3);
      FUN_0081ffd0(extraout_ECX,extraout_ECX);
      FUN_004984ee(uVar4);
      uVar4 = FUN_004aee34(uVar4);
    }
    iVar3 = iVar3 + 1;
  }
  FUN_00505ef4("Items");
  local_20 = 0;
  uVar1 = FUN_004adf58(local_38,uVar1);
  FUN_0081ffd0(uVar1,uVar1);
  return;
}



/* vtable 0090404c slot 4 address 005051fc */
/* No matching successful function export. Inspect address in Ghidra. */

/* vtable 0090404c slot 5 address 005051fe */

/* ADDRESS: 005051fe NAME: FUN_005051fe */

void __fastcall FUN_005051fe(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x18))
            (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
             *(undefined4 *)(param_1 + 0x10));
  return;
}



/* vtable 0090404c slot 6 address 00775eec */

/* ADDRESS: 00775eec NAME: thunk_FUN_0050522c */

void thunk_FUN_0050522c(void)

{
  FUN_0050522c();
  return;
}



/* vtable 0090404c slot 7 address 00505d44 */

/* ADDRESS: 00505d44 NAME: FUN_00505d44 */

undefined4 FUN_00505d44(void)

{
  return 9;
}



/* vtable 0090404c slot 8 address 00505d4a */

/* ADDRESS: 00505d4a NAME: FUN_00505d4a */

undefined4 __thiscall FUN_00505d4a(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + 0x1c + param_2 * 4);
}



/* vtable 0090404c slot 9 address 00505e0e */

/* ADDRESS: 00505e0e NAME: FUN_00505e0e */

int * __thiscall FUN_00505e0e(int *param_1,int param_2,int param_3)

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



/* vtable 0090404c slot 10 address 00505d5e */

/* ADDRESS: 00505d5e NAME: FUN_00505d5e */

void __thiscall FUN_00505d5e(int *param_1,int param_2,int *param_3)

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



/* vtable 0090404c slot 11 address 00505f62 */

/* ADDRESS: 00505f62 NAME: FUN_00505f62 */

undefined4 __fastcall FUN_00505f62(undefined4 param_1)

{
  FUN_00505ef4(&DAT_00896540);
  return param_1;
}



/* vtable 0090404c slot 12 address 00505da2 */

/* ADDRESS: 00505da2 NAME: FUN_00505da2 */

undefined4 FUN_00505da2(void)

{
  return 0x40;
}



/* vtable 0090404c slot 13 address 00505e62 */

/* ADDRESS: 00505e62 NAME: FUN_00505e62 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_00505e62(int param_1)

{
  bool bVar1;
  int iVar2;
  float10 extraout_ST0;
  
  iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0xc))();
  if (param_1 == iVar2) {
    FUN_0044a04a((double)*(int *)(param_1 + 8) + DAT_00896550,
                 (double)*(int *)(param_1 + 0xc) + DAT_00896550,
                 (double)*(int *)(param_1 + 0x10) + DAT_00896550);
    bVar1 = (double)extraout_ST0 <= _DAT_00896558;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* vtable 0090408c slot 0 address 00505ddf */

/* ADDRESS: 00505ddf NAME: FUN_00505ddf */

void FUN_00505ddf(void)

{
  FUN_00505da8();
  return;
}



/* vtable 0090408c slot 1 address 00505e08 */

/* ADDRESS: 00505e08 NAME: FUN_00505e08 */

void __fastcall FUN_00505e08(int param_1)

{
  FUN_00505da8();
  free((void *)(param_1 + -0x18));
  return;
}



/* vtable 0090408c slot 2 address 00505f88 */

/* ADDRESS: 00505f88 NAME: FUN_00505f88 */

undefined4 FUN_00505f88(void)

{
  return 9;
}



/* vtable 0090408c slot 3 address 00505d58 */

/* ADDRESS: 00505d58 NAME: FUN_00505d58 */

void FUN_00505d58(void)

{
  FUN_00505d4a();
  return;
}



/* vtable 0090408c slot 4 address 00505e5d */

/* ADDRESS: 00505e5d NAME: FUN_00505e5d */

void FUN_00505e5d(void)

{
  FUN_00505e0e();
  return;
}



/* vtable 0090408c slot 5 address 00505d9c */

/* ADDRESS: 00505d9c NAME: FUN_00505d9c */

void FUN_00505d9c(void)

{
  FUN_00505d5e();
  return;
}



/* vtable 0090408c slot 6 address 00505f81 */

/* ADDRESS: 00505f81 NAME: FUN_00505f81 */

void FUN_00505f81(void)

{
  FUN_00505f62();
  return;
}



/* vtable 0090408c slot 7 address 00505f8e */

/* ADDRESS: 00505f8e NAME: FUN_00505f8e */

undefined4 FUN_00505f8e(void)

{
  return 0x40;
}



/* vtable 0090408c slot 8 address 00845208 */

/* ADDRESS: 00845208 NAME: FUN_00845208 */

void FUN_00845208(void)

{
  FUN_0050522c();
  return;
}



/* vtable 0090408c slot 9 address 00505eeb */

/* ADDRESS: 00505eeb NAME: FUN_00505eeb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_00505eeb(int param_1)

{
  bool bVar1;
  int iVar2;
  float10 extraout_ST0;
  
  iVar2 = (**(code **)(**(int **)(param_1 + -0x14) + 0xc))();
  if (param_1 + -0x18 == iVar2) {
    FUN_0044a04a((double)*(int *)(param_1 + -0x10) + DAT_00896550,
                 (double)*(int *)(param_1 + -0xc) + DAT_00896550,
                 (double)*(int *)(param_1 + -8) + DAT_00896550);
    bVar1 = (double)extraout_ST0 <= _DAT_00896558;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


