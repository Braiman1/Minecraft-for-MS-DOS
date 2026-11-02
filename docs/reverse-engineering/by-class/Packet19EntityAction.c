/* Candidate RTTI class: Packet19EntityAction
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904488 slot 0 address 00776028 */

/* ADDRESS: 00776028 NAME: FUN_00776028 */

void FUN_00776028(void)

{
  return;
}



/* vtable 00904488 slot 1 address 00776010 */

/* ADDRESS: 00776010 NAME: FUN_00776010 */

void __fastcall FUN_00776010(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00904488 slot 2 address 004ba3c4 */

/* ADDRESS: 004ba3c4 NAME: FUN_004ba3c4 */

void __thiscall FUN_004ba3c4(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  cVar1 = FUN_0040c7f8(param_2);
  *(int *)(param_1 + 0x14) = (int)cVar1;
  return;
}



/* vtable 00904488 slot 3 address 004ba3f4 */

/* ADDRESS: 004ba3f4 NAME: FUN_004ba3f4 */

void __thiscall FUN_004ba3f4(int param_1,undefined4 param_2)

{
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_0040c647(param_2,*(undefined4 *)(param_1 + 0x14));
  return;
}



/* vtable 00904488 slot 4 address 004ba3a8 */

/* ADDRESS: 004ba3a8 NAME: FUN_004ba3a8 */

void FUN_004ba3a8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004ba3bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd0))();
  return;
}



/* vtable 00904488 slot 5 address 004ba3be */

/* ADDRESS: 004ba3be NAME: FUN_004ba3be */

undefined4 FUN_004ba3be(void)

{
  return 5;
}


