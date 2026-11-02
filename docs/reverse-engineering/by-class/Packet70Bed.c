/* Candidate RTTI class: Packet70Bed
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fcad8 slot 0 address 00772be0 */

/* ADDRESS: 00772be0 NAME: FUN_00772be0 */

void FUN_00772be0(void)

{
  return;
}



/* vtable 008fcad8 slot 1 address 00772bc8 */

/* ADDRESS: 00772bc8 NAME: FUN_00772bc8 */

void __fastcall FUN_00772bc8(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 008fcad8 slot 2 address 004bd18c */

/* ADDRESS: 004bd18c NAME: FUN_004bd18c */

void __thiscall FUN_004bd18c(int param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_0040c7f8(param_2);
  *(int *)(param_1 + 0x10) = (int)cVar1;
  return;
}



/* vtable 008fcad8 slot 3 address 004bd1ae */

/* ADDRESS: 004bd1ae NAME: FUN_004bd1ae */

void __thiscall FUN_004bd1ae(int param_1,undefined4 param_2)

{
  FUN_0040c647(param_2,*(undefined4 *)(param_1 + 0x10));
  return;
}



/* vtable 008fcad8 slot 4 address 004bd150 */

/* ADDRESS: 004bd150 NAME: FUN_004bd150 */

void FUN_004bd150(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bd164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa8))();
  return;
}



/* vtable 008fcad8 slot 5 address 004bd166 */

/* ADDRESS: 004bd166 NAME: FUN_004bd166 */

undefined4 FUN_004bd166(void)

{
  return 1;
}


