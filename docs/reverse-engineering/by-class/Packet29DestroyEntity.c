/* Candidate RTTI class: Packet29DestroyEntity
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009047a8 slot 0 address 007762b4 */

/* ADDRESS: 007762b4 NAME: FUN_007762b4 */

void FUN_007762b4(void)

{
  return;
}



/* vtable 009047a8 slot 1 address 0077629c */

/* ADDRESS: 0077629c NAME: FUN_0077629c */

void __fastcall FUN_0077629c(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 009047a8 slot 2 address 004bb69a */

/* ADDRESS: 004bb69a NAME: FUN_004bb69a */

void __thiscall FUN_004bb69a(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}



/* vtable 009047a8 slot 3 address 004bb6ba */

/* ADDRESS: 004bb6ba NAME: FUN_004bb6ba */

void __thiscall FUN_004bb6ba(int param_1,undefined4 param_2)

{
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  return;
}



/* vtable 009047a8 slot 4 address 004bb680 */

/* ADDRESS: 004bb680 NAME: FUN_004bb680 */

void FUN_004bb680(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bb691. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x3c))();
  return;
}



/* vtable 009047a8 slot 5 address 004bb694 */

/* ADDRESS: 004bb694 NAME: FUN_004bb694 */

undefined4 FUN_004bb694(void)

{
  return 4;
}


