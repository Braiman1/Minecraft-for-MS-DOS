/* Candidate RTTI class: Packet53BlockChange
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00903ff8 slot 0 address 00775e94 */

/* ADDRESS: 00775e94 NAME: FUN_00775e94 */

void FUN_00775e94(void)

{
  return;
}



/* vtable 00903ff8 slot 1 address 00775e7c */

/* ADDRESS: 00775e7c NAME: FUN_00775e7c */

void __fastcall FUN_00775e7c(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00903ff8 slot 2 address 004bc6f2 */

/* ADDRESS: 004bc6f2 NAME: FUN_004bc6f2 */

void __thiscall FUN_004bc6f2(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  uVar1 = FUN_007d2fa0();
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = FUN_0040c848(param_2);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = FUN_007d2fa0();
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  uVar1 = FUN_007d2fa0();
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  return;
}



/* vtable 00903ff8 slot 3 address 004bc73c */

/* ADDRESS: 004bc73c NAME: FUN_004bc73c */

void __thiscall FUN_004bc73c(int param_1,undefined4 param_2)

{
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x10));
  FUN_007d5380((int)*(char *)(param_1 + 0x14));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x18));
  FUN_007d5380((int)*(char *)(param_1 + 0x1c));
  FUN_007d5380();
  return;
}



/* vtable 00903ff8 slot 4 address 004bc6d8 */

/* ADDRESS: 004bc6d8 NAME: FUN_004bc6d8 */

void FUN_004bc6d8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bc6e9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))();
  return;
}



/* vtable 00903ff8 slot 5 address 004bc6ec */

/* ADDRESS: 004bc6ec NAME: FUN_004bc6ec */

undefined4 FUN_004bc6ec(void)

{
  return 0xb;
}


