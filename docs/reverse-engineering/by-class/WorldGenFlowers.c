/* Candidate RTTI class: WorldGenFlowers
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00902254 slot 0 address 00774e2c */

/* ADDRESS: 00774e2c NAME: FUN_00774e2c */

void FUN_00774e2c(void)

{
  return;
}



/* vtable 00902254 slot 1 address 00774e14 */

/* ADDRESS: 00774e14 NAME: FUN_00774e14 */

void __fastcall FUN_00774e14(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00902254 slot 2 address 00516a0c */

/* ADDRESS: 00516a0c NAME: FUN_00516a0c */

undefined4 __thiscall
FUN_00516a0c(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int local_24;
  
  local_24 = 0x40;
  do {
    uVar2 = FUN_0040e95c(param_4,8);
    uVar3 = FUN_0040e95c(param_5,4);
    uVar4 = FUN_0040e95c(param_6,8);
    piVar5 = (int *)0x0;
    if ((&DAT_00a07120)[*(int *)(param_1 + 4)] != 0) {
      piVar5 = (int *)FUN_00846ef0((&DAT_00a07120)[*(int *)(param_1 + 4)],&PTR_PTR_008f1984,
                                   &PTR_PTR_008f0718,0);
    }
    cVar1 = FUN_0050ac0e(uVar2,uVar3,uVar4);
    if ((piVar5 != (int *)0x0) && (cVar1 != '\0')) {
      cVar1 = (**(code **)(*piVar5 + 0xe8))(param_2,uVar2,uVar3,uVar4);
      if (cVar1 != '\0') {
        (**(code **)(*param_2 + 0x3c))(uVar2,uVar3,uVar4,*(undefined4 *)(param_1 + 4));
      }
    }
    local_24 = local_24 + -1;
  } while (local_24 != 0);
  return 1;
}



/* vtable 00902254 slot 3 address 007748ec */

/* ADDRESS: 007748ec NAME: FUN_007748ec */

void FUN_007748ec(void)

{
  return;
}



/* vtable 00902254 slot 4 address 007748e4 */

/* ADDRESS: 007748e4 NAME: FUN_007748e4 */

void __fastcall FUN_007748e4(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007748e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}


