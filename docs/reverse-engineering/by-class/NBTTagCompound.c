/* Candidate RTTI class: NBTTagCompound
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009011b8 slot 0 address 004ad6bc */

/* ADDRESS: 004ad6bc NAME: FUN_004ad6bc */

void __fastcall FUN_004ad6bc(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &PTR_FUN_009011b8;
  FUN_004ad5aa();
  iVar1 = param_1[0x13];
  for (iVar2 = param_1[0x12]; iVar1 != iVar2; iVar2 = iVar2 + 0x24) {
    FUN_0081ffd0();
  }
  if ((void *)param_1[0x12] != (void *)0x0) {
    free((void *)param_1[0x12]);
  }
  if ((void *)param_1[0xf] != (void *)0x0) {
    free((void *)param_1[0xf]);
  }
  FUN_007daefc();
  FUN_0077729c();
  return;
}



/* vtable 009011b8 slot 1 address 004ad730 */

/* ADDRESS: 004ad730 NAME: FUN_004ad730 */

void __fastcall FUN_004ad730(void *param_1)

{
  FUN_004ad6bc();
  free(param_1);
  return;
}



/* vtable 009011b8 slot 2 address 004addba */

/* ADDRESS: 004addba NAME: FUN_004addba */

void __thiscall FUN_004addba(int param_1,undefined4 param_2)

{
  int extraout_ECX;
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iStack_28;
  int iStack_24;
  
  FUN_0077c258(param_1 + 0x3c);
  iVar2 = extraout_ECX;
  for (; iStack_28 != iStack_24; iStack_28 = iStack_28 + 0x1c) {
    uVar1 = FUN_007dae10(iStack_28);
    iVar2 = (int)((ulonglong)uVar1 >> 0x20);
    if (((int)uVar1 != 0) && (iVar3 = *(int *)((int)uVar1 + 0x20), iVar3 != 0)) {
      FUN_004acabc(iVar3,param_2);
      iVar2 = iVar3;
    }
  }
  FUN_0081aa80(iVar2);
  FUN_0040c647(param_2,0);
  return;
}



/* vtable 009011b8 slot 3 address 004ae1b8 */

/* ADDRESS: 004ae1b8 NAME: FUN_004ae1b8 */

void FUN_004ae1b8(undefined4 param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 local_38 [40];
  
  FUN_004ad5aa();
  while( true ) {
    piVar2 = (int *)FUN_004acce2(param_1);
    if (piVar2 == (int *)0x0) {
      return;
    }
    cVar1 = (**(code **)(*piVar2 + 0x10))();
    if (cVar1 == '\0') break;
    FUN_004aca52(piVar2);
    uVar3 = FUN_004adf58(local_38,piVar2);
    FUN_0081ffd0(uVar3,uVar3);
  }
  (**(code **)(*piVar2 + 4))();
  return;
}



/* vtable 009011b8 slot 4 address 004ad438 */

/* ADDRESS: 004ad438 NAME: FUN_004ad438 */

undefined1 FUN_004ad438(void)

{
  return 10;
}



/* vtable 009011b8 slot 5 address 004ae230 */

/* ADDRESS: 004ae230 NAME: FUN_004ae230 */

undefined4 __fastcall FUN_004ae230(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  int iVar4;
  undefined8 uVar5;
  int local_38;
  int local_34;
  
  uVar2 = FUN_00846710(0x5c);
  FUN_004ad754();
  FUN_004aca52(param_1);
  FUN_004aca92(&local_38);
  FUN_0081ffd0(extraout_ECX);
  FUN_0077c258(param_1 + 0x3c);
  for (iVar4 = local_38; local_34 != iVar4; iVar4 = iVar4 + 0x1c) {
    uVar5 = FUN_007dae10(iVar4);
    if (((int)uVar5 != 0) && (piVar1 = *(int **)((int)uVar5 + 0x20), piVar1 != (int *)0x0)) {
      uVar3 = (**(code **)(*piVar1 + 0x14))((int)((ulonglong)uVar5 >> 0x20));
      FUN_004adf58(iVar4,uVar3);
    }
  }
  FUN_0081aa80();
  return uVar2;
}



/* vtable 009011b8 slot 6 address 004ad4d8 */

/* ADDRESS: 004ad4d8 NAME: FUN_004ad4d8 */

int __thiscall FUN_004ad4d8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  undefined1 local_6c [4];
  int local_68;
  undefined1 local_54 [28];
  undefined4 local_38;
  uint local_34;
  undefined1 local_20;
  
  FUN_0040f327(local_54,*(undefined4 *)(param_2 + 0x2c),10);
  FUN_004ad46a(" entries");
  local_20 = 0;
  FUN_00823370(local_54);
  if (0x7ffffffeU - local_68 < local_34) {
                    /* WARNING: Subroutine does not return */
    FUN_0084e530("basic_string::append");
  }
  uVar1 = FUN_00822ca0(local_38,local_34);
  FUN_00823680(local_6c);
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_0081ffd0(extraout_EDX,uVar1);
  FUN_0081ffd0();
  FUN_0081ffd0();
  return param_1;
}


