/* Candidate RTTI class: MinecraftException
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009038a0 slot 0 address 00775ac0 */

/* ADDRESS: 00775ac0 NAME: thunk_FUN_00775ac8 */

void thunk_FUN_00775ac8(void)

{
  FUN_00775ac8();
  return;
}



/* vtable 009038a0 slot 1 address 00775a9c */

/* ADDRESS: 00775a9c NAME: FUN_00775a9c */

void __fastcall FUN_00775a9c(void *param_1)

{
  FUN_00775ac8();
  free(param_1);
  return;
}



/* vtable 009038a0 slot 2 address 007843a0 */

/* ADDRESS: 007843a0 NAME: FUN_007843a0 */

undefined4 __fastcall FUN_007843a0(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}


