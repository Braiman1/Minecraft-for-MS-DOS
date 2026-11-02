/* Candidate RTTI class: Packet5PlayerInventory
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009049ac slot 0 address 00776544 */

/* ADDRESS: 00776544 NAME: FUN_00776544 */

void FUN_00776544(void)

{
  return;
}



/* vtable 009049ac slot 1 address 0077652c */

/* ADDRESS: 0077652c NAME: FUN_0077652c */

void __fastcall FUN_0077652c(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 009049ac slot 2 address 004bc8ac */

/* ADDRESS: 004bc8ac NAME: FUN_004bc8ac */

void __thiscall FUN_004bc8ac(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  sVar1 = FUN_0040c828(param_2);
  *(int *)(param_1 + 0x14) = (int)sVar1;
  sVar1 = FUN_0040c828(param_2);
  *(int *)(param_1 + 0x18) = (int)sVar1;
  sVar1 = FUN_0040c828(param_2);
  *(int *)(param_1 + 0x1c) = (int)sVar1;
  return;
}



/* vtable 009049ac slot 3 address 004bc8f2 */

/* ADDRESS: 004bc8f2 NAME: FUN_004bc8f2 */

void __thiscall FUN_004bc8f2(int param_1,undefined4 param_2)

{
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  thunk_FUN_0040c65f(param_2,*(undefined4 *)(param_1 + 0x14));
  thunk_FUN_0040c65f(param_2,*(undefined4 *)(param_1 + 0x18));
  thunk_FUN_0040c65f(param_2,*(undefined4 *)(param_1 + 0x1c));
  return;
}



/* vtable 009049ac slot 4 address 004bc890 */

/* ADDRESS: 004bc890 NAME: FUN_004bc890 */

void FUN_004bc890(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bc8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xa0))();
  return;
}



/* vtable 009049ac slot 5 address 004bc8a6 */

/* ADDRESS: 004bc8a6 NAME: FUN_004bc8a6 */

undefined4 FUN_004bc8a6(void)

{
  return 8;
}


