/* Candidate RTTI class: Packet38EntityStatus
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009044c8 slot 0 address 00776060 */

/* ADDRESS: 00776060 NAME: FUN_00776060 */

void FUN_00776060(void)

{
  return;
}



/* vtable 009044c8 slot 1 address 00776048 */

/* ADDRESS: 00776048 NAME: FUN_00776048 */

void __fastcall FUN_00776048(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 009044c8 slot 2 address 004bbc46 */

/* ADDRESS: 004bbc46 NAME: FUN_004bbc46 */

void __thiscall FUN_004bbc46(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  uVar2 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar1 = FUN_0040c7f8(param_2);
  *(undefined1 *)(param_1 + 0x14) = uVar1;
  return;
}



/* vtable 009044c8 slot 3 address 004bbc72 */

/* ADDRESS: 004bbc72 NAME: FUN_004bbc72 */

void __thiscall FUN_004bbc72(int param_1,undefined4 param_2)

{
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_0040c647(param_2,(int)*(char *)(param_1 + 0x14));
  return;
}



/* vtable 009044c8 slot 4 address 004bbc2c */

/* ADDRESS: 004bbc2c NAME: FUN_004bbc2c */

void FUN_004bbc2c(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bbc3d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))();
  return;
}



/* vtable 009044c8 slot 5 address 004bbc40 */

/* ADDRESS: 004bbc40 NAME: FUN_004bbc40 */

undefined4 FUN_004bbc40(void)

{
  return 5;
}


