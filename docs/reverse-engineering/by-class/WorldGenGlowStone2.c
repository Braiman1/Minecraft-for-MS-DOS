/* Candidate RTTI class: WorldGenGlowStone2
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00903a50 slot 0 address 00775bcc */

/* ADDRESS: 00775bcc NAME: FUN_00775bcc */

void FUN_00775bcc(void)

{
  return;
}



/* vtable 00903a50 slot 1 address 00775bb4 */

/* ADDRESS: 00775bb4 NAME: FUN_00775bb4 */

void __fastcall FUN_00775bb4(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00903a50 slot 2 address 00517010 */

/* ADDRESS: 00517010 NAME: FUN_00517010 */

char FUN_00517010(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_30;
  int local_2c;
  char local_25;
  int local_20;
  
  local_25 = FUN_0050ac0e(param_3,param_4,param_5);
  if ((local_25 == '\0') ||
     (iVar1 = (**(code **)(*param_1 + 8))(param_3,param_4 + 1,param_5),
     *(int *)(DAT_00a061c4 + 8) != iVar1)) {
    local_25 = '\0';
  }
  else {
    FUN_0050b858(param_3,param_4,param_5,*(undefined4 *)(DAT_00a061bc + 8));
    local_30 = 0x5dc;
    do {
      iVar1 = FUN_0040e95c(param_3,8);
      iVar2 = FUN_0040e7b8(0xc);
      iVar2 = param_4 - iVar2;
      iVar3 = FUN_0040e95c(param_5,8);
      iVar4 = (**(code **)(*param_1 + 8))(iVar1,iVar2,iVar3);
      if (iVar4 == 0) {
        iVar4 = (**(code **)(*param_1 + 8))(iVar1 + -1,iVar2,iVar3);
        local_20 = 0;
        local_2c = 0;
LAB_00517133:
        if (local_20 == 4) {
          iVar5 = *param_1;
          iVar4 = iVar3 + -1;
        }
        else {
          if (local_20 != 5) {
            local_20 = 0;
            goto LAB_00517168;
          }
          iVar5 = *param_1;
          iVar4 = iVar3 + 1;
        }
        iVar7 = iVar2;
LAB_0051715a:
        iVar6 = iVar1;
        do {
          while( true ) {
            iVar4 = (**(code **)(iVar5 + 8))(iVar6,iVar7,iVar4);
LAB_00517168:
            if (*(int *)(DAT_00a061bc + 8) == iVar4) {
              local_2c = local_2c + 1;
            }
            local_20 = local_20 + 1;
            if (local_20 == 6) {
              if (local_2c == 1) {
                FUN_0050b858(iVar1,iVar2,iVar3,*(int *)(DAT_00a061bc + 8));
              }
              goto LAB_005171f2;
            }
            iVar4 = iVar3;
            if (local_20 == 1) break;
            if (local_20 != 2) {
              if (local_20 != 3) {
                iVar4 = 0;
                goto LAB_00517133;
              }
              iVar7 = iVar2 + 1;
              iVar5 = *param_1;
              goto LAB_0051715a;
            }
            iVar7 = iVar2 + -1;
            iVar5 = *param_1;
            iVar6 = iVar1;
          }
          iVar5 = *param_1;
          iVar6 = iVar1 + 1;
          iVar7 = iVar2;
        } while( true );
      }
LAB_005171f2:
      local_30 = local_30 + -1;
    } while (local_30 != 0);
  }
  return local_25;
}



/* vtable 00903a50 slot 3 address 007748ec */

/* ADDRESS: 007748ec NAME: FUN_007748ec */

void FUN_007748ec(void)

{
  return;
}



/* vtable 00903a50 slot 4 address 007748e4 */

/* ADDRESS: 007748e4 NAME: FUN_007748e4 */

void __fastcall FUN_007748e4(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007748e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}


