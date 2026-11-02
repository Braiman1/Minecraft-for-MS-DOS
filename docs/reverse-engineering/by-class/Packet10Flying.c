/* Candidate RTTI class: Packet10Flying
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009011dc slot 0 address 00774694 */

/* ADDRESS: 00774694 NAME: FUN_00774694 */

void FUN_00774694(void)

{
  return;
}



/* vtable 009011dc slot 1 address 0077467c */

/* ADDRESS: 0077467c NAME: FUN_0077467c */

void __fastcall FUN_0077467c(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 009011dc slot 2 address 004b9602 */

/* ADDRESS: 004b9602 NAME: FUN_004b9602 */

void __fastcall FUN_004b9602(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_007d2fa0();
  *(bool *)(param_1 + 0x38) = iVar1 != 0;
  return;
}



/* vtable 009011dc slot 3 address 004b961e */

/* ADDRESS: 004b961e NAME: FUN_004b961e */

void __fastcall FUN_004b961e(int param_1)

{
  uint uStack00000004;
  
  uStack00000004 = (uint)*(byte *)(param_1 + 0x38);
  FUN_007d5380();
  return;
}



/* vtable 009011dc slot 4 address 004b95e8 */

/* ADDRESS: 004b95e8 NAME: FUN_004b95e8 */

void FUN_004b95e8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b95f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x40))();
  return;
}



/* vtable 009011dc slot 5 address 004b95fc */

/* ADDRESS: 004b95fc NAME: FUN_004b95fc */

undefined4 FUN_004b95fc(void)

{
  return 1;
}


