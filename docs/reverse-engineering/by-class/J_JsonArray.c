/* Candidate RTTI class: J_JsonArray
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fc9b8 slot 0 address 007724dc */

/* ADDRESS: 007724dc NAME: thunk_FUN_007724e4 */

void thunk_FUN_007724e4(void)

{
  FUN_007724e4();
  return;
}



/* vtable 008fc9b8 slot 1 address 007724b8 */

/* ADDRESS: 007724b8 NAME: FUN_007724b8 */

void __fastcall FUN_007724b8(void *param_1)

{
  FUN_007724e4();
  free(param_1);
  return;
}



/* vtable 008fc9b8 slot 2 address 004995f0 */

/* ADDRESS: 004995f0 NAME: FUN_004995f0 */

undefined4 FUN_004995f0(void)

{
  return 1;
}



/* vtable 008fc9b8 slot 3 address 0084b080 */

/* ADDRESS: 0084b080 NAME: FUN_0084b080 */

void FUN_0084b080(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00846950(8);
  FUN_007ee5a0("Attempt to get text on a JsonNode without text.");
                    /* WARNING: Subroutine does not return */
  FUN_00846ea0(uVar1,&PTR_PTR_008f2b74,FUN_007ee790);
}



/* vtable 008fc9b8 slot 4 address 0084b0d0 */

/* ADDRESS: 0084b0d0 NAME: FUN_0084b0d0 */

void FUN_0084b0d0(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00846950(8);
  FUN_007ee5a0("Attempt to get fields on a JsonNode without fields.");
                    /* WARNING: Subroutine does not return */
  FUN_00846ea0(uVar1,&PTR_PTR_008f2b74,FUN_007ee790);
}



/* vtable 008fc9b8 slot 5 address 004995f6 */

/* ADDRESS: 004995f6 NAME: FUN_004995f6 */

undefined4 __thiscall FUN_004995f6(undefined4 param_1,int param_2)

{
  FUN_0081b464(param_2 + 4);
  return param_1;
}


