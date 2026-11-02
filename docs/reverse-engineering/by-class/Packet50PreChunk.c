/* Candidate RTTI class: Packet50PreChunk
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00902938 slot 0 address 0077540c */

/* ADDRESS: 0077540c NAME: FUN_0077540c */

void FUN_0077540c(void)

{
  return;
}



/* vtable 00902938 slot 1 address 007753f4 */

/* ADDRESS: 007753f4 NAME: FUN_007753f4 */

void __fastcall FUN_007753f4(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00902938 slot 2 address 004bc0f6 */

/* ADDRESS: 004bc0f6 NAME: FUN_004bc0f6 */

void __thiscall FUN_004bc0f6(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  iVar2 = FUN_007d2fa0();
  *(bool *)(param_1 + 0x18) = iVar2 != 0;
  return;
}



/* vtable 00902938 slot 3 address 004bc130 */

/* ADDRESS: 004bc130 NAME: FUN_004bc130 */

void __thiscall FUN_004bc130(int param_1,undefined4 param_2)

{
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x14));
  FUN_007d5380();
  return;
}



/* vtable 00902938 slot 4 address 004bc0dc */

/* ADDRESS: 004bc0dc NAME: FUN_004bc0dc */

void FUN_004bc0dc(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bc0ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x44))();
  return;
}



/* vtable 00902938 slot 5 address 004bc0f0 */

/* ADDRESS: 004bc0f0 NAME: FUN_004bc0f0 */

undefined4 FUN_004bc0f0(void)

{
  return 9;
}


