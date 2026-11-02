/* Candidate RTTI class: Packet3Chat
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fcab8 slot 0 address 00772bb0 */

/* ADDRESS: 00772bb0 NAME: thunk_FUN_00772bb8 */

void thunk_FUN_00772bb8(void)

{
  FUN_00772bb8();
  return;
}



/* vtable 008fcab8 slot 1 address 00772b8c */

/* ADDRESS: 00772b8c NAME: FUN_00772b8c */

void __fastcall FUN_00772b8c(void *param_1)

{
  FUN_00772bb8();
  free(param_1);
  return;
}



/* vtable 008fcab8 slot 2 address 004bbdf0 */

/* ADDRESS: 004bbdf0 NAME: FUN_004bbdf0 */

void __thiscall FUN_004bbdf0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 local_28 [24];
  undefined1 local_10;
  
  FUN_004b6ef4(local_28,param_2,0x77);
  uVar1 = FUN_004bbd68(local_28);
  *(undefined1 *)(param_1 + 0x28) = local_10;
  FUN_0081ffd0(uVar1);
  return;
}



/* vtable 008fcab8 slot 3 address 004bbd4c */

/* ADDRESS: 004bbd4c NAME: FUN_004bbd4c */

void __thiscall FUN_004bbd4c(int param_1,undefined4 param_2)

{
  FUN_004b6e38(param_1 + 0x10,param_2);
  return;
}



/* vtable 008fcab8 slot 4 address 004bbd24 */

/* ADDRESS: 004bbd24 NAME: FUN_004bbd24 */

void FUN_004bbd24(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bbd35. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x5c))();
  return;
}



/* vtable 008fcab8 slot 5 address 004bbd38 */

/* ADDRESS: 004bbd38 NAME: FUN_004bbd38 */

void __fastcall FUN_004bbd38(int param_1)

{
  FUN_0040f9d7(param_1 + 0x10);
  return;
}


