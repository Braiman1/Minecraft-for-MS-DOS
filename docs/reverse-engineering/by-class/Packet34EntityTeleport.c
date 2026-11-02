/* Candidate RTTI class: Packet34EntityTeleport
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 0090496c slot 0 address 00776528 */

/* ADDRESS: 00776528 NAME: FUN_00776528 */

void FUN_00776528(void)

{
  return;
}



/* vtable 0090496c slot 1 address 00776510 */

/* ADDRESS: 00776510 NAME: FUN_00776510 */

void __fastcall FUN_00776510(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 0090496c slot 2 address 004bbaae */

/* ADDRESS: 004bbaae NAME: FUN_004bbaae */

void __thiscall FUN_004bbaae(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  uVar1 = FUN_007d2fa0();
  *(undefined1 *)(param_1 + 0x20) = uVar1;
  uVar1 = FUN_007d2fa0();
  *(undefined1 *)(param_1 + 0x21) = uVar1;
  return;
}



/* vtable 0090496c slot 3 address 004bbb04 */

/* ADDRESS: 004bbb04 NAME: FUN_004bbb04 */

void __thiscall FUN_004bbb04(int param_1,undefined4 param_2)

{
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x14));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x18));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x1c));
  FUN_007d5380((int)*(char *)(param_1 + 0x20));
  FUN_007d5380();
  return;
}



/* vtable 0090496c slot 4 address 004bba94 */

/* ADDRESS: 004bba94 NAME: FUN_004bba94 */

void FUN_004bba94(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bbaa5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34))();
  return;
}



/* vtable 0090496c slot 5 address 004bbaa8 */

/* ADDRESS: 004bbaa8 NAME: FUN_004bbaa8 */

undefined4 FUN_004bbaa8(void)

{
  return 0x22;
}


