/* Candidate RTTI class: Packet11PlayerPosition
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009048ec slot 0 address 00776498 */

/* ADDRESS: 00776498 NAME: FUN_00776498 */

void FUN_00776498(void)

{
  return;
}



/* vtable 009048ec slot 1 address 00776480 */

/* ADDRESS: 00776480 NAME: FUN_00776480 */

void __fastcall FUN_00776480(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 009048ec slot 2 address 004b968a */

/* ADDRESS: 004b968a NAME: FUN_004b968a */

void __thiscall FUN_004b968a(int param_1,undefined4 param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_0040c96a(param_2);
  *(double *)(param_1 + 0x10) = (double)fVar1;
  fVar1 = (float10)FUN_0040c96a(param_2);
  *(double *)(param_1 + 0x18) = (double)fVar1;
  fVar1 = (float10)FUN_0040c96a(param_2);
  *(double *)(param_1 + 0x28) = (double)fVar1;
  fVar1 = (float10)FUN_0040c96a(param_2);
  *(double *)(param_1 + 0x20) = (double)fVar1;
  FUN_004b9602();
  return;
}



/* vtable 009048ec slot 3 address 004b96d4 */

/* ADDRESS: 004b96d4 NAME: FUN_004b96d4 */

void __thiscall FUN_004b96d4(int param_1,undefined4 param_2)

{
  FUN_0040c7b6(param_2,*(undefined8 *)(param_1 + 0x10));
  FUN_0040c7b6(param_2,*(undefined8 *)(param_1 + 0x18));
  FUN_0040c7b6(param_2,*(undefined8 *)(param_1 + 0x28));
  FUN_0040c7b6(param_2,*(undefined8 *)(param_1 + 0x20));
  FUN_004b961e();
  return;
}



/* vtable 009048ec slot 4 address 004b95e8 */

/* ADDRESS: 004b95e8 NAME: FUN_004b95e8 */

void FUN_004b95e8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b95f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}



/* vtable 009048ec slot 5 address 004b9684 */

/* ADDRESS: 004b9684 NAME: FUN_004b9684 */

undefined4 FUN_004b9684(void)

{
  return 0x21;
}


