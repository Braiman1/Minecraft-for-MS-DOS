/* Candidate RTTI class: Packet4UpdateTime
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00903200 slot 0 address 007756e0 */

/* ADDRESS: 007756e0 NAME: FUN_007756e0 */

void FUN_007756e0(void)

{
  return;
}



/* vtable 00903200 slot 1 address 007756c8 */

/* ADDRESS: 007756c8 NAME: FUN_007756c8 */

void __fastcall FUN_007756c8(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00903200 slot 2 address 004bc096 */

/* ADDRESS: 004bc096 NAME: FUN_004bc096 */

void __thiscall FUN_004bc096(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0040c895(param_2);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  return;
}



/* vtable 00903200 slot 3 address 004bc0b8 */

/* ADDRESS: 004bc0b8 NAME: FUN_004bc0b8 */

void __thiscall FUN_004bc0b8(int param_1,undefined4 param_2)

{
  FUN_0040c6e2(param_2,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  return;
}



/* vtable 00903200 slot 4 address 004bc07c */

/* ADDRESS: 004bc07c NAME: FUN_004bc07c */

void FUN_004bc07c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bc08d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x6c))();
  return;
}



/* vtable 00903200 slot 5 address 004bc090 */

/* ADDRESS: 004bc090 NAME: FUN_004bc090 */

undefined4 FUN_004bc090(void)

{
  return 8;
}


