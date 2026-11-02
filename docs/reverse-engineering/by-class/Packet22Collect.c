/* Candidate RTTI class: Packet22Collect
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 0090211c slot 0 address 00774b74 */

/* ADDRESS: 00774b74 NAME: FUN_00774b74 */

void FUN_00774b74(void)

{
  return;
}



/* vtable 0090211c slot 1 address 00774b5c */

/* ADDRESS: 00774b5c NAME: FUN_00774b5c */

void __fastcall FUN_00774b5c(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 0090211c slot 2 address 004bab7e */

/* ADDRESS: 004bab7e NAME: FUN_004bab7e */

void __thiscall FUN_004bab7e(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  return;
}



/* vtable 0090211c slot 3 address 004babaa */

/* ADDRESS: 004babaa NAME: FUN_004babaa */

void __thiscall FUN_004babaa(int param_1,undefined4 param_2)

{
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x14));
  return;
}



/* vtable 0090211c slot 4 address 004bab64 */

/* ADDRESS: 004bab64 NAME: FUN_004bab64 */

void FUN_004bab64(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bab75. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x58))();
  return;
}



/* vtable 0090211c slot 5 address 004bab78 */

/* ADDRESS: 004bab78 NAME: FUN_004bab78 */

undefined4 FUN_004bab78(void)

{
  return 8;
}


