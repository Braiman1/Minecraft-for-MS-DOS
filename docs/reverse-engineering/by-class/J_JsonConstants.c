/* Candidate RTTI class: J_JsonConstants
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009020c8 slot 0 address 00774b0c */

/* ADDRESS: 00774b0c NAME: FUN_00774b0c */

void FUN_00774b0c(void)

{
  return;
}



/* vtable 009020c8 slot 1 address 00774af4 */

/* ADDRESS: 00774af4 NAME: FUN_00774af4 */

void __fastcall FUN_00774af4(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 009020c8 slot 2 address 00499a08 */

/* ADDRESS: 00499a08 NAME: FUN_00499a08 */

undefined4 __fastcall FUN_00499a08(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}



/* vtable 009020c8 slot 3 address 0084b120 */

/* ADDRESS: 0084b120 NAME: FUN_0084b120 */

void FUN_0084b120(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00846950(8);
  FUN_007ee5a0("Attempt to get text on a JsonNode without text.");
                    /* WARNING: Subroutine does not return */
  FUN_00846ea0(uVar1,&PTR_PTR_008f2b74,FUN_007ee790);
}



/* vtable 009020c8 slot 4 address 0084b170 */

/* ADDRESS: 0084b170 NAME: FUN_0084b170 */

void FUN_0084b170(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00846950(8);
  FUN_007ee5a0("Attempt to get fields on a JsonNode without fields.");
                    /* WARNING: Subroutine does not return */
  FUN_00846ea0(uVar1,&PTR_PTR_008f2b74,FUN_007ee790);
}



/* vtable 009020c8 slot 5 address 0084b1c0 */

/* ADDRESS: 0084b1c0 NAME: FUN_0084b1c0 */

void FUN_0084b1c0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00846950(8);
  FUN_007ee5a0("Attempt to get elements on a JsonNode without elements.");
                    /* WARNING: Subroutine does not return */
  FUN_00846ea0(uVar1,&PTR_PTR_008f2b74,FUN_007ee790);
}


