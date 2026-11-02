/* Candidate RTTI class: Packet18Animation
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009031e0 slot 0 address 007756c4 */

/* ADDRESS: 007756c4 NAME: FUN_007756c4 */

void FUN_007756c4(void)

{
  return;
}



/* vtable 009031e0 slot 1 address 007756ac */

/* ADDRESS: 007756ac NAME: FUN_007756ac */

void __fastcall FUN_007756ac(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 009031e0 slot 2 address 004ba31a */

/* ADDRESS: 004ba31a NAME: FUN_004ba31a */

void __thiscall FUN_004ba31a(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  cVar1 = FUN_0040c7f8(param_2);
  *(int *)(param_1 + 0x14) = (int)cVar1;
  return;
}



/* vtable 009031e0 slot 3 address 004ba34a */

/* ADDRESS: 004ba34a NAME: FUN_004ba34a */

void __thiscall FUN_004ba34a(int param_1,undefined4 param_2)

{
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_0040c647(param_2,*(undefined4 *)(param_1 + 0x14));
  return;
}



/* vtable 009031e0 slot 4 address 004ba300 */

/* ADDRESS: 004ba300 NAME: FUN_004ba300 */

void FUN_004ba300(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004ba311. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x60))();
  return;
}



/* vtable 009031e0 slot 5 address 004ba314 */

/* ADDRESS: 004ba314 NAME: FUN_004ba314 */

undefined4 FUN_004ba314(void)

{
  return 5;
}


