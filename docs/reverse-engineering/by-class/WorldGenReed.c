/* Candidate RTTI class: WorldGenReed
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fe470 slot 0 address 00773758 */

/* ADDRESS: 00773758 NAME: FUN_00773758 */

void FUN_00773758(void)

{
  return;
}



/* vtable 008fe470 slot 1 address 00773740 */

/* ADDRESS: 00773740 NAME: FUN_00773740 */

void __fastcall FUN_00773740(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 008fe470 slot 2 address 0051837c */

/* ADDRESS: 0051837c NAME: FUN_0051837c */

undefined4
FUN_0051837c(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_24;
  
  local_24 = 0x14;
  do {
    iVar2 = FUN_0040e95c(param_3,4);
    iVar3 = FUN_0040e95c(param_5,4);
    cVar1 = FUN_0050ac0e(iVar2,param_4,iVar3);
    if (cVar1 != '\0') {
      iVar5 = param_4 + -1;
      iVar4 = (**(code **)(*param_1 + 0x1c))(iVar2 + -1,iVar5,iVar3);
      if ((((DAT_00a0ae34 == iVar4) ||
           (iVar4 = (**(code **)(*param_1 + 0x1c))(iVar2 + 1,iVar5,iVar3), DAT_00a0ae34 == iVar4))
          || (iVar4 = (**(code **)(*param_1 + 0x1c))(iVar2,iVar5,iVar3 + -1), DAT_00a0ae34 == iVar4)
          ) || (iVar5 = (**(code **)(*param_1 + 0x1c))(iVar2,iVar5,iVar3 + 1), DAT_00a0ae34 == iVar5
               )) {
        iVar5 = FUN_0040e7b8(3);
        iVar5 = FUN_0040e7b8(iVar5 + 1);
        for (iVar4 = 0; iVar4 < iVar5 + 2; iVar4 = iVar4 + 1) {
          iVar6 = param_4 + iVar4;
          cVar1 = (**(code **)(*DAT_00a061d4 + 0xe8))(param_1,iVar2,iVar6,iVar3,iVar6);
          if (cVar1 != '\0') {
            (**(code **)(*param_1 + 0x3c))(iVar2,iVar6,iVar3,DAT_00a061d4[2]);
          }
        }
      }
    }
    local_24 = local_24 + -1;
  } while (local_24 != 0);
  return 1;
}



/* vtable 008fe470 slot 3 address 007748ec */

/* ADDRESS: 007748ec NAME: FUN_007748ec */

void FUN_007748ec(void)

{
  return;
}



/* vtable 008fe470 slot 4 address 007748e4 */

/* ADDRESS: 007748e4 NAME: FUN_007748e4 */

void __fastcall FUN_007748e4(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007748e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}


