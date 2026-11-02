/* Candidate RTTI class: Packet12PlayerLook
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009038b4 slot 0 address 00775aec */

/* ADDRESS: 00775aec NAME: FUN_00775aec */

void FUN_00775aec(void)

{
  return;
}



/* vtable 009038b4 slot 1 address 00775ad4 */

/* ADDRESS: 00775ad4 NAME: FUN_00775ad4 */

void __fastcall FUN_00775ad4(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 009038b4 slot 2 address 004b9816 */

/* ADDRESS: 004b9816 NAME: FUN_004b9816 */

void __thiscall FUN_004b9816(int param_1,undefined4 param_2)

{
  float10 fVar1;
  
  fVar1 = (float10)FUN_0040c951(param_2);
  *(float *)(param_1 + 0x30) = (float)fVar1;
  fVar1 = (float10)FUN_0040c951(param_2);
  *(float *)(param_1 + 0x34) = (float)fVar1;
  FUN_004b9602();
  return;
}



/* vtable 009038b4 slot 3 address 004b984a */

/* ADDRESS: 004b984a NAME: FUN_004b984a */

void __thiscall FUN_004b984a(int param_1,undefined4 param_2)

{
  FUN_0040c78f(param_2,*(undefined4 *)(param_1 + 0x30));
  FUN_0040c78f(param_2,*(undefined4 *)(param_1 + 0x34));
  FUN_004b961e();
  return;
}



/* vtable 009038b4 slot 4 address 004b95e8 */

/* ADDRESS: 004b95e8 NAME: FUN_004b95e8 */

void FUN_004b95e8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b95f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}



/* vtable 009038b4 slot 5 address 004b9810 */

/* ADDRESS: 004b9810 NAME: FUN_004b9810 */

undefined4 FUN_004b9810(void)

{
  return 9;
}


