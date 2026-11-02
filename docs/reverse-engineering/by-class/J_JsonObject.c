/* Candidate RTTI class: J_JsonObject
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fe1f8 slot 0 address 007734fc */

/* ADDRESS: 007734fc NAME: thunk_FUN_00773504 */

void thunk_FUN_00773504(void)

{
  FUN_00773504();
  return;
}



/* vtable 008fe1f8 slot 1 address 007734d8 */

/* ADDRESS: 007734d8 NAME: FUN_007734d8 */

void __fastcall FUN_007734d8(void *param_1)

{
  FUN_00773504();
  free(param_1);
  return;
}



/* vtable 008fe1f8 slot 2 address 0049beac */

/* ADDRESS: 0049beac NAME: FUN_0049beac */

undefined4 FUN_0049beac(void)

{
  return 0;
}



/* vtable 008fe1f8 slot 3 address 0084b318 */

/* ADDRESS: 0084b318 NAME: FUN_0084b318 */

void FUN_0084b318(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00846950(8);
  FUN_007ee5a0("Attempt to get text on a JsonNode without text.");
                    /* WARNING: Subroutine does not return */
  FUN_00846ea0(uVar1,&PTR_PTR_008f2b74,FUN_007ee790);
}



/* vtable 008fe1f8 slot 4 address 0049c04a */

/* ADDRESS: 0049c04a NAME: FUN_0049c04a */

undefined4 __thiscall FUN_0049c04a(undefined4 param_1,int param_2)

{
  FUN_008371f0(param_2 + 4);
  return param_1;
}



/* vtable 008fe1f8 slot 5 address 0084b368 */

/* ADDRESS: 0084b368 NAME: FUN_0084b368 */

void FUN_0084b368(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00846950(8);
  FUN_007ee5a0("Attempt to get elements on a JsonNode without elements.");
                    /* WARNING: Subroutine does not return */
  FUN_00846ea0(uVar1,&PTR_PTR_008f2b74,FUN_007ee790);
}


