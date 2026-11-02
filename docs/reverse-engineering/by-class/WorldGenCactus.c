/* Candidate RTTI class: WorldGenCactus
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00901338 slot 0 address 0077488c */

/* ADDRESS: 0077488c NAME: FUN_0077488c */

void FUN_0077488c(void)

{
  return;
}



/* vtable 00901338 slot 1 address 00774874 */

/* ADDRESS: 00774874 NAME: FUN_00774874 */

void __fastcall FUN_00774874(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00901338 slot 2 address 00515968 */

/* ADDRESS: 00515968 NAME: FUN_00515968 */

undefined4
FUN_00515968(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_24;
  
  local_24 = 10;
  do {
    uVar2 = FUN_0040e95c(param_3,8);
    iVar3 = FUN_0040e95c(param_4,4);
    uVar4 = FUN_0040e95c(param_5,8);
    cVar1 = FUN_0050ac0e(uVar2,iVar3,uVar4);
    if (cVar1 != '\0') {
      iVar5 = FUN_0040e7b8(3);
      iVar5 = FUN_0040e7b8(iVar5 + 1);
      for (iVar6 = 0; iVar6 < iVar5 + 1; iVar6 = iVar6 + 1) {
        iVar7 = iVar3 + iVar6;
        cVar1 = (**(code **)(*DAT_00a061dc + 0xe8))(param_1,uVar2,iVar7,uVar4,iVar7);
        if (cVar1 != '\0') {
          (**(code **)(*param_1 + 0x3c))(uVar2,iVar7,uVar4,DAT_00a061dc[2]);
        }
      }
    }
    local_24 = local_24 + -1;
  } while (local_24 != 0);
  return 1;
}



/* vtable 00901338 slot 3 address 007748ec */

/* ADDRESS: 007748ec NAME: FUN_007748ec */

void FUN_007748ec(void)

{
  return;
}



/* vtable 00901338 slot 4 address 007748e4 */

/* ADDRESS: 007748e4 NAME: FUN_007748e4 */

void __fastcall FUN_007748e4(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007748e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}


