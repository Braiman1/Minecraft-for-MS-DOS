/* Candidate RTTI class: Packet23VehicleSpawn
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009044a8 slot 0 address 00776044 */

/* ADDRESS: 00776044 NAME: FUN_00776044 */

void FUN_00776044(void)

{
  return;
}



/* vtable 009044a8 slot 1 address 0077602c */

/* ADDRESS: 0077602c NAME: FUN_0077602c */

void __fastcall FUN_0077602c(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 009044a8 slot 2 address 004bac06 */

/* ADDRESS: 004bac06 NAME: FUN_004bac06 */

void __thiscall FUN_004bac06(int param_1,undefined4 param_2)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar3 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar3;
  cVar1 = FUN_0040c7f8(param_2);
  *(int *)(param_1 + 0x2c) = (int)cVar1;
  uVar3 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x14) = uVar3;
  uVar3 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x18) = uVar3;
  uVar3 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x1c) = uVar3;
  iVar4 = FUN_0040c848(param_2);
  *(int *)(param_1 + 0x30) = iVar4;
  if (0 < iVar4) {
    sVar2 = FUN_0040c828(param_2);
    *(int *)(param_1 + 0x20) = (int)sVar2;
    sVar2 = FUN_0040c828(param_2);
    *(int *)(param_1 + 0x24) = (int)sVar2;
    sVar2 = FUN_0040c828(param_2);
    *(int *)(param_1 + 0x28) = (int)sVar2;
  }
  return;
}



/* vtable 009044a8 slot 3 address 004bac8a */

/* ADDRESS: 004bac8a NAME: FUN_004bac8a */

void __thiscall FUN_004bac8a(int param_1,undefined4 param_2)

{
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_0040c647(param_2,*(undefined4 *)(param_1 + 0x2c));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x14));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x18));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x1c));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x30));
  if (0 < *(int *)(param_1 + 0x30)) {
    thunk_FUN_0040c65f(param_2,*(undefined4 *)(param_1 + 0x20));
    thunk_FUN_0040c65f(param_2,*(undefined4 *)(param_1 + 0x24));
    thunk_FUN_0040c65f(param_2,*(undefined4 *)(param_1 + 0x28));
  }
  return;
}



/* vtable 009044a8 slot 4 address 004babe0 */

/* ADDRESS: 004babe0 NAME: FUN_004babe0 */

void FUN_004babe0(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004babf1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))();
  return;
}



/* vtable 009044a8 slot 5 address 004babf4 */

/* ADDRESS: 004babf4 NAME: FUN_004babf4 */

undefined4 __fastcall FUN_004babf4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x1b;
  if (*(int *)(param_1 + 0x30) < 1) {
    uVar1 = 0x15;
  }
  return uVar1;
}


