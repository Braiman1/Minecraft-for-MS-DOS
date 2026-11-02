/* Candidate RTTI class: Achievement
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fb5f4 slot 0 address 00772044 */

/* ADDRESS: 00772044 NAME: thunk_FUN_0077204c */

void thunk_FUN_0077204c(void)

{
  FUN_0077204c();
  return;
}



/* vtable 008fb5f4 slot 1 address 00772020 */

/* ADDRESS: 00772020 NAME: FUN_00772020 */

void __fastcall FUN_00772020(void *param_1)

{
  FUN_0077204c();
  free(param_1);
  return;
}



/* vtable 008fb5f4 slot 2 address 00412998 */

/* ADDRESS: 00412998 NAME: FUN_00412998 */

int __fastcall FUN_00412998(int param_1)

{
  *(undefined1 *)(param_1 + 0x20) = 1;
  return param_1;
}



/* vtable 008fb5f4 slot 3 address 00412d92 */

/* ADDRESS: 00412d92 NAME: thunk_FUN_00412d50 */

void thunk_FUN_00412d50(void)

{
  FUN_00412d50();
  return;
}



/* vtable 008fb5f4 slot 4 address 004129a0 */

/* ADDRESS: 004129a0 NAME: FUN_004129a0 */

undefined1 FUN_004129a0(void)

{
  return 1;
}



/* vtable 008fb5f4 slot 5 address 004f6548 */

/* ADDRESS: 004f6548 NAME: FUN_004f6548 */

undefined4 __thiscall FUN_004f6548(undefined4 param_1,int param_2,undefined4 param_3)

{
  (**(code **)(**(int **)(param_2 + 0x3c) + 8))(*(int **)(param_2 + 0x3c),param_3);
  return param_1;
}



/* vtable 008fb5f4 slot 6 address 004f6574 */

/* ADDRESS: 004f6574 NAME: FUN_004f6574 */

undefined4 __thiscall FUN_004f6574(undefined4 param_1,int param_2)

{
  FUN_00823370(param_2 + 8);
  return param_1;
}


