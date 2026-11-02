/* Candidate RTTI class: Packet21PickupSpawn
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00903fd8 slot 0 address 00775e78 */

/* ADDRESS: 00775e78 NAME: FUN_00775e78 */

void FUN_00775e78(void)

{
  return;
}



/* vtable 00903fd8 slot 1 address 00775e60 */

/* ADDRESS: 00775e60 NAME: FUN_00775e60 */

void __fastcall FUN_00775e60(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00903fd8 slot 2 address 004ba94e */

/* ADDRESS: 004ba94e NAME: FUN_004ba94e */

void __thiscall FUN_004ba94e(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined1 uVar2;
  short sVar3;
  undefined4 uVar4;
  
  uVar4 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar4;
  sVar3 = FUN_0040c828(param_2);
  *(int *)(param_1 + 0x24) = (int)sVar3;
  cVar1 = FUN_0040c7f8(param_2);
  *(int *)(param_1 + 0x28) = (int)cVar1;
  sVar3 = FUN_0040c828(param_2);
  *(int *)(param_1 + 0x2c) = (int)sVar3;
  uVar4 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  uVar4 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x18) = uVar4;
  uVar4 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x1c) = uVar4;
  uVar2 = FUN_0040c7f8(param_2);
  *(undefined1 *)(param_1 + 0x20) = uVar2;
  uVar2 = FUN_0040c7f8(param_2);
  *(undefined1 *)(param_1 + 0x21) = uVar2;
  uVar2 = FUN_0040c7f8(param_2);
  *(undefined1 *)(param_1 + 0x22) = uVar2;
  return;
}



/* vtable 00903fd8 slot 3 address 004ba9d8 */

/* ADDRESS: 004ba9d8 NAME: FUN_004ba9d8 */

void __thiscall FUN_004ba9d8(int param_1,undefined4 param_2)

{
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  thunk_FUN_0040c65f(param_2,*(undefined4 *)(param_1 + 0x24));
  FUN_0040c647(param_2,*(undefined4 *)(param_1 + 0x28));
  thunk_FUN_0040c65f(param_2,*(undefined4 *)(param_1 + 0x2c));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x14));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x18));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x1c));
  FUN_0040c647(param_2,(int)*(char *)(param_1 + 0x20));
  FUN_0040c647(param_2,(int)*(char *)(param_1 + 0x21));
  FUN_0040c647(param_2,(int)*(char *)(param_1 + 0x22));
  return;
}



/* vtable 00903fd8 slot 4 address 004ba934 */

/* ADDRESS: 004ba934 NAME: FUN_004ba934 */

void FUN_004ba934(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004ba945. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}



/* vtable 00903fd8 slot 5 address 004ba948 */

/* ADDRESS: 004ba948 NAME: FUN_004ba948 */

undefined4 FUN_004ba948(void)

{
  return 0x18;
}


