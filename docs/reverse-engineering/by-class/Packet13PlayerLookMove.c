/* Candidate RTTI class: Packet13PlayerLookMove
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 0090490c slot 0 address 007764b4 */

/* ADDRESS: 007764b4 NAME: FUN_007764b4 */

void FUN_007764b4(void)

{
  return;
}



/* vtable 0090490c slot 1 address 0077649c */

/* ADDRESS: 0077649c NAME: FUN_0077649c */

void __fastcall FUN_0077649c(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 0090490c slot 2 address 004b9cd2 */

/* ADDRESS: 004b9cd2 NAME: FUN_004b9cd2 */

void __thiscall FUN_004b9cd2(int param_1,undefined4 param_2)

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
  fVar1 = (float10)FUN_0040c951(param_2);
  *(float *)(param_1 + 0x30) = (float)fVar1;
  fVar1 = (float10)FUN_0040c951(param_2);
  *(float *)(param_1 + 0x34) = (float)fVar1;
  FUN_004b9602();
  return;
}



/* vtable 0090490c slot 3 address 004b9d32 */

/* ADDRESS: 004b9d32 NAME: FUN_004b9d32 */

void __thiscall FUN_004b9d32(int param_1,undefined4 param_2)

{
  FUN_0040c7b6(param_2,*(undefined8 *)(param_1 + 0x10));
  FUN_0040c7b6(param_2,*(undefined8 *)(param_1 + 0x18));
  FUN_0040c7b6(param_2,*(undefined8 *)(param_1 + 0x28));
  FUN_0040c7b6(param_2,*(undefined8 *)(param_1 + 0x20));
  FUN_0040c78f(param_2,*(undefined4 *)(param_1 + 0x30));
  FUN_0040c78f(param_2,*(undefined4 *)(param_1 + 0x34));
  FUN_004b961e();
  return;
}



/* vtable 0090490c slot 4 address 004b95e8 */

/* ADDRESS: 004b95e8 NAME: FUN_004b95e8 */

void FUN_004b95e8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b95f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}



/* vtable 0090490c slot 5 address 004b9ccc */

/* ADDRESS: 004b9ccc NAME: FUN_004b9ccc */

undefined4 FUN_004b9ccc(void)

{
  return 0x29;
}


