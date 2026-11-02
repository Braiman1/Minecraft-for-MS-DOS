/* Candidate RTTI class: SlotFurnace
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fcc74 slot 0 address 00772d60 */

/* ADDRESS: 00772d60 NAME: FUN_00772d60 */

void FUN_00772d60(void)

{
  return;
}



/* vtable 008fcc74 slot 1 address 00772d48 */

/* ADDRESS: 00772d48 NAME: FUN_00772d48 */

void __fastcall FUN_00772d48(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 008fcc74 slot 2 address 004f3b22 */

/* ADDRESS: 004f3b22 NAME: FUN_004f3b22 */

void __thiscall FUN_004f3b22(int param_1,int param_2)

{
  FUN_00498a58(*(undefined4 *)(*(int *)(param_1 + 0x18) + 0x24),*(int *)(param_1 + 0x18));
  if (*(int *)(param_2 + 8) == *(int *)(DAT_00a08780 + 4)) {
    (**(code **)(**(int **)(param_1 + 0x18) + 0x1a8))(DAT_009f6090,1);
  }
  if (*(int *)(param_2 + 8) == *(int *)(DAT_00a0862c + 4)) {
    (**(code **)(**(int **)(param_1 + 0x18) + 0x1a8))(DAT_009f607c,1);
  }
  FUN_004f3718();
  return;
}



/* vtable 008fcc74 slot 3 address 004f3b1c */

/* ADDRESS: 004f3b1c NAME: FUN_004f3b1c */

undefined4 FUN_004f3b1c(void)

{
  return 0;
}



/* vtable 008fcc74 slot 4 address 004f372e */

/* ADDRESS: 004f372e NAME: FUN_004f372e */

void __fastcall FUN_004f372e(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004f3733. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 8) + 0x20))();
  return;
}



/* vtable 008fcc74 slot 5 address 004f3736 */

/* ADDRESS: 004f3736 NAME: FUN_004f3736 */

void __fastcall FUN_004f3736(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004f373b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 8) + 0x1c))();
  return;
}



/* vtable 008fcc74 slot 6 address 004f373e */

/* ADDRESS: 004f373e NAME: FUN_004f373e */

undefined4 FUN_004f373e(void)

{
  return 0xffffffff;
}


