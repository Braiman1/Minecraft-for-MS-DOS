/* Candidate RTTI class: WorldGenDeadBush
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00902a68 slot 0 address 007754e8 */

/* ADDRESS: 007754e8 NAME: FUN_007754e8 */

void FUN_007754e8(void)

{
  return;
}



/* vtable 00902a68 slot 1 address 007754d0 */

/* ADDRESS: 007754d0 NAME: FUN_007754d0 */

void __fastcall FUN_007754d0(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00902a68 slot 2 address 00515e74 */

/* ADDRESS: 00515e74 NAME: FUN_00515e74 */

undefined4 __thiscall
FUN_00515e74(int param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int local_28;
  
  while( true ) {
    iVar2 = (**(code **)(*param_2 + 8))(param_4,param_5,param_6);
    if (((iVar2 != 0) && (*(int *)(DAT_00a062d8 + 8) != iVar2)) || (param_5 < 1)) break;
    param_5 = param_5 + -1;
  }
  local_28 = 4;
  do {
    uVar3 = FUN_0040e95c(param_4,8);
    uVar4 = FUN_0040e95c(param_5,4);
    uVar5 = FUN_0040e95c(param_6,8);
    piVar6 = (int *)0x0;
    if ((&DAT_00a07120)[*(int *)(param_1 + 4)] != 0) {
      piVar6 = (int *)FUN_00846ef0((&DAT_00a07120)[*(int *)(param_1 + 4)],&PTR_PTR_008f1984,
                                   &PTR_PTR_008f0718,0);
    }
    cVar1 = FUN_0050ac0e(uVar3,uVar4,uVar5);
    if ((piVar6 != (int *)0x0) && (cVar1 != '\0')) {
      cVar1 = (**(code **)(*piVar6 + 0xe8))(param_2,uVar3,uVar4,uVar5);
      if (cVar1 != '\0') {
        (**(code **)(*param_2 + 0x3c))(uVar3,uVar4,uVar5,*(undefined4 *)(param_1 + 4));
      }
    }
    local_28 = local_28 + -1;
  } while (local_28 != 0);
  return 1;
}



/* vtable 00902a68 slot 3 address 007748ec */

/* ADDRESS: 007748ec NAME: FUN_007748ec */

void FUN_007748ec(void)

{
  return;
}



/* vtable 00902a68 slot 4 address 007748e4 */

/* ADDRESS: 007748e4 NAME: FUN_007748e4 */

void __fastcall FUN_007748e4(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007748e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}


