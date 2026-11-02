/* Candidate RTTI class: Packet54PlayNoteBlock
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009047e8 slot 0 address 007762ec */

/* ADDRESS: 007762ec NAME: FUN_007762ec */

void FUN_007762ec(void)

{
  return;
}



/* vtable 009047e8 slot 1 address 007762d4 */

/* ADDRESS: 007762d4 NAME: FUN_007762d4 */

void __fastcall FUN_007762d4(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 009047e8 slot 2 address 004bc7e4 */

/* ADDRESS: 004bc7e4 NAME: FUN_004bc7e4 */

void __thiscall FUN_004bc7e4(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  sVar1 = FUN_0040c828(param_2);
  *(int *)(param_1 + 0x14) = (int)sVar1;
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  uVar2 = FUN_007d2fa0();
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  uVar2 = FUN_007d2fa0();
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  return;
}



/* vtable 009047e8 slot 3 address 004bc830 */

/* ADDRESS: 004bc830 NAME: FUN_004bc830 */

void __thiscall FUN_004bc830(int param_1,undefined4 param_2)

{
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  thunk_FUN_0040c65f(param_2,*(undefined4 *)(param_1 + 0x14));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x18));
  FUN_007d5380((int)*(char *)(param_1 + 0x1c));
  FUN_007d5380();
  return;
}



/* vtable 009047e8 slot 4 address 004bc7c8 */

/* ADDRESS: 004bc7c8 NAME: FUN_004bc7c8 */

void FUN_004bc7c8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bc7dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa4))();
  return;
}



/* vtable 009047e8 slot 5 address 004bc7de */

/* ADDRESS: 004bc7de NAME: FUN_004bc7de */

undefined4 FUN_004bc7de(void)

{
  return 0xc;
}


