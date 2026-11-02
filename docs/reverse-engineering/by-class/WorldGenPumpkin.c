/* Candidate RTTI class: WorldGenPumpkin
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009022a8 slot 0 address 00774e80 */

/* ADDRESS: 00774e80 NAME: FUN_00774e80 */

void FUN_00774e80(void)

{
  return;
}



/* vtable 009022a8 slot 1 address 00774e68 */

/* ADDRESS: 00774e68 NAME: FUN_00774e68 */

void __fastcall FUN_00774e68(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 009022a8 slot 2 address 00518258 */

/* ADDRESS: 00518258 NAME: FUN_00518258 */

undefined4
FUN_00518258(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  int local_24;
  
  local_24 = 0x40;
  do {
    uVar3 = FUN_0040e95c(param_3,8);
    iVar4 = FUN_0040e95c(param_4,4);
    uVar5 = FUN_0040e95c(param_5,8);
    cVar2 = FUN_0050ac0e(uVar3,iVar4,uVar5);
    if (cVar2 != '\0') {
      iVar6 = (**(code **)(*param_1 + 8))(uVar3,iVar4 + -1,uVar5);
      if (*(int *)(DAT_00a06318 + 8) == iVar6) {
        cVar2 = (**(code **)(*DAT_00a061c8 + 0xac))(param_1,uVar3,iVar4,uVar5);
        if (cVar2 != '\0') {
          pcVar1 = *(code **)(*param_1 + 0x38);
          uVar7 = FUN_0040e7b8(4);
          (*pcVar1)(uVar3,iVar4,uVar5,DAT_00a061c8[2],uVar7);
        }
      }
    }
    local_24 = local_24 + -1;
  } while (local_24 != 0);
  return 1;
}



/* vtable 009022a8 slot 3 address 007748ec */

/* ADDRESS: 007748ec NAME: FUN_007748ec */

void FUN_007748ec(void)

{
  return;
}



/* vtable 009022a8 slot 4 address 007748e4 */

/* ADDRESS: 007748e4 NAME: FUN_007748e4 */

void __fastcall FUN_007748e4(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007748e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}


