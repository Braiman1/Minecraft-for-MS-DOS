/* Candidate RTTI class: Packet101CloseWindow
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904408 slot 0 address 00775ff0 */

/* ADDRESS: 00775ff0 NAME: FUN_00775ff0 */

void FUN_00775ff0(void)

{
  return;
}



/* vtable 00904408 slot 1 address 00775fd8 */

/* ADDRESS: 00775fd8 NAME: FUN_00775fd8 */

void __fastcall FUN_00775fd8(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00904408 slot 2 address 004b8cf4 */

/* ADDRESS: 004b8cf4 NAME: FUN_004b8cf4 */

void __thiscall FUN_004b8cf4(int param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_0040c7f8(param_2);
  *(int *)(param_1 + 0x10) = (int)cVar1;
  return;
}



/* vtable 00904408 slot 3 address 004b8d16 */

/* ADDRESS: 004b8d16 NAME: FUN_004b8d16 */

void __thiscall FUN_004b8d16(int param_1,undefined4 param_2)

{
  FUN_0040c647(param_2,*(undefined4 *)(param_1 + 0x10));
  return;
}



/* vtable 00904408 slot 4 address 004b8cd8 */

/* ADDRESS: 004b8cd8 NAME: FUN_004b8cd8 */

void FUN_004b8cd8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004b8cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xb8))();
  return;
}



/* vtable 00904408 slot 5 address 004b8cee */

/* ADDRESS: 004b8cee NAME: FUN_004b8cee */

undefined4 FUN_004b8cee(void)

{
  return 1;
}


