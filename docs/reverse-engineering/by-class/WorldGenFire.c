/* Candidate RTTI class: WorldGenFire
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fe454 slot 0 address 0077373c */

/* ADDRESS: 0077373c NAME: FUN_0077373c */

void FUN_0077373c(void)

{
  return;
}



/* vtable 008fe454 slot 1 address 00773724 */

/* ADDRESS: 00773724 NAME: FUN_00773724 */

void __fastcall FUN_00773724(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 008fe454 slot 2 address 00516934 */

/* ADDRESS: 00516934 NAME: FUN_00516934 */

undefined4
FUN_00516934(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int local_20;
  
  local_20 = 0x40;
  do {
    uVar2 = FUN_0040e95c(param_3,8);
    iVar3 = FUN_0040e95c(param_4,4);
    uVar4 = FUN_0040e95c(param_5,8);
    cVar1 = FUN_0050ac0e(uVar2,iVar3,uVar4);
    if (cVar1 != '\0') {
      iVar5 = (**(code **)(*param_1 + 8))(uVar2,iVar3 + -1,uVar4);
      if (*(int *)(DAT_00a061c4 + 8) == iVar5) {
        FUN_0050b858(uVar2,iVar3,uVar4,*(undefined4 *)(DAT_00a06254 + 8));
      }
    }
    local_20 = local_20 + -1;
  } while (local_20 != 0);
  return 1;
}



/* vtable 008fe454 slot 3 address 007748ec */

/* ADDRESS: 007748ec NAME: FUN_007748ec */

void FUN_007748ec(void)

{
  return;
}



/* vtable 008fe454 slot 4 address 007748e4 */

/* ADDRESS: 007748e4 NAME: FUN_007748e4 */

void __fastcall FUN_007748e4(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007748e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}


