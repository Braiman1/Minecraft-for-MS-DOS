/* Candidate RTTI class: J_JsonStringNode
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00902758 slot 0 address 007751a4 */

/* ADDRESS: 007751a4 NAME: thunk_FUN_007751ac */

void thunk_FUN_007751ac(void)

{
  FUN_007751ac();
  return;
}



/* vtable 00902758 slot 1 address 00775180 */

/* ADDRESS: 00775180 NAME: FUN_00775180 */

void __fastcall FUN_00775180(void *param_1)

{
  FUN_007751ac();
  free(param_1);
  return;
}



/* vtable 00902758 slot 2 address 0049c764 */

/* ADDRESS: 0049c764 NAME: FUN_0049c764 */

undefined4 FUN_0049c764(void)

{
  return 2;
}



/* vtable 00902758 slot 3 address 0049c76a */

/* ADDRESS: 0049c76a NAME: FUN_0049c76a */

undefined4 __thiscall FUN_0049c76a(undefined4 param_1,int param_2)

{
  FUN_00823370(param_2 + 4);
  return param_1;
}



/* vtable 00902758 slot 4 address 0084b3b8 */

/* ADDRESS: 0084b3b8 NAME: FUN_0084b3b8 */

void FUN_0084b3b8(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00846950(8);
  FUN_007ee5a0("Attempt to get fields on a JsonNode without fields.");
                    /* WARNING: Subroutine does not return */
  FUN_00846ea0(uVar1,&PTR_PTR_008f2b74,FUN_007ee790);
}



/* vtable 00902758 slot 5 address 0084b408 */

/* ADDRESS: 0084b408 NAME: FUN_0084b408 */

void FUN_0084b408(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00846950(8);
  FUN_007ee5a0("Attempt to get elements on a JsonNode without elements.");
                    /* WARNING: Subroutine does not return */
  FUN_00846ea0(uVar1,&PTR_PTR_008f2b74,FUN_007ee790);
}


