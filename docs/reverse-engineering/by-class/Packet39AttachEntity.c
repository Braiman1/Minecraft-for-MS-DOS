/* Candidate RTTI class: Packet39AttachEntity
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009044e8 slot 0 address 0077607c */

/* ADDRESS: 0077607c NAME: FUN_0077607c */

void FUN_0077607c(void)

{
  return;
}



/* vtable 009044e8 slot 1 address 00776064 */

/* ADDRESS: 00776064 NAME: FUN_00776064 */

void __fastcall FUN_00776064(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 009044e8 slot 2 address 004bbcc2 */

/* ADDRESS: 004bbcc2 NAME: FUN_004bbcc2 */

void __thiscall FUN_004bbcc2(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}



/* vtable 009044e8 slot 3 address 004bbcee */

/* ADDRESS: 004bbcee NAME: FUN_004bbcee */

void __thiscall FUN_004bbcee(int param_1,undefined4 param_2)

{
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x14));
  return;
}



/* vtable 009044e8 slot 4 address 004bbca8 */

/* ADDRESS: 004bbca8 NAME: FUN_004bbca8 */

void FUN_004bbca8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bbcb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x74))();
  return;
}



/* vtable 009044e8 slot 5 address 004bbcbc */

/* ADDRESS: 004bbcbc NAME: FUN_004bbcbc */

undefined4 FUN_004bbcbc(void)

{
  return 8;
}


