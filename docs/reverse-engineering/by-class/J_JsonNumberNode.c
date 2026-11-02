/* Candidate RTTI class: J_JsonNumberNode
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00902738 slot 0 address 00775168 */

/* ADDRESS: 00775168 NAME: thunk_FUN_00775170 */

void thunk_FUN_00775170(void)

{
  FUN_00775170();
  return;
}



/* vtable 00902738 slot 1 address 00775144 */

/* ADDRESS: 00775144 NAME: FUN_00775144 */

void __fastcall FUN_00775144(void *param_1)

{
  FUN_00775170();
  free(param_1);
  return;
}



/* vtable 00902738 slot 2 address 0049bb74 */

/* ADDRESS: 0049bb74 NAME: FUN_0049bb74 */

undefined4 FUN_0049bb74(void)

{
  return 3;
}



/* vtable 00902738 slot 3 address 0049bb7a */

/* ADDRESS: 0049bb7a NAME: FUN_0049bb7a */

undefined4 __thiscall FUN_0049bb7a(undefined4 param_1,int param_2)

{
  FUN_00823370(param_2 + 4);
  return param_1;
}



/* vtable 00902738 slot 4 address 0084b278 */

/* ADDRESS: 0084b278 NAME: FUN_0084b278 */

void FUN_0084b278(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00846950(8);
  FUN_007ee5a0("Attempt to get fields on a JsonNode without fields.");
                    /* WARNING: Subroutine does not return */
  FUN_00846ea0(uVar1,&PTR_PTR_008f2b74,FUN_007ee790);
}



/* vtable 00902738 slot 5 address 0084b2c8 */

/* ADDRESS: 0084b2c8 NAME: FUN_0084b2c8 */

void FUN_0084b2c8(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00846950(8);
  FUN_007ee5a0("Attempt to get elements on a JsonNode without elements.");
                    /* WARNING: Subroutine does not return */
  FUN_00846ea0(uVar1,&PTR_PTR_008f2b74,FUN_007ee790);
}


