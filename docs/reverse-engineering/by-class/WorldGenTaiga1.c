/* Candidate RTTI class: WorldGenTaiga1
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00901370 slot 0 address 007748c4 */

/* ADDRESS: 007748c4 NAME: FUN_007748c4 */

void FUN_007748c4(void)

{
  return;
}



/* vtable 00901370 slot 1 address 007748ac */

/* ADDRESS: 007748ac NAME: FUN_007748ac */

void __fastcall FUN_007748ac(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00901370 slot 2 address 00518518 */

/* ADDRESS: 00518518 NAME: FUN_00518518 */

bool FUN_00518518(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_2c;
  int local_28;
  int local_24;
  bool local_1d;
  
  iVar1 = FUN_0040e7b8(5);
  iVar2 = iVar1 + 7;
  iVar3 = FUN_0040e7b8(2);
  iVar3 = (iVar2 - iVar3) + -3;
  iVar4 = FUN_0040e7b8((iVar2 - iVar3) + 1);
  if ((0 < param_4) && (local_24 = iVar2 + param_4, local_24 < 0x80)) {
    local_1d = true;
    for (iVar8 = param_4; iVar8 <= iVar1 + 8 + param_4; iVar8 = iVar8 + 1) {
      if (local_1d == false) {
        return false;
      }
      iVar6 = 0;
      if (iVar3 <= iVar8 - param_4) {
        iVar6 = iVar4 + 1;
      }
      local_2c = param_3 - iVar6;
      while ((local_2c <= param_3 + iVar6 && (local_1d != false))) {
        iVar7 = param_5 - iVar6;
        while ((iVar7 <= param_5 + iVar6 && (local_1d != false))) {
          if (iVar8 < 0x80) {
            iVar5 = (**(code **)(*param_1 + 8))(local_2c,iVar8,iVar7);
            if (iVar5 != 0) {
              local_1d = *(int *)(DAT_00a062d8 + 8) == iVar5;
            }
          }
          else {
            local_1d = false;
          }
          iVar7 = iVar7 + 1;
        }
        local_2c = local_2c + 1;
      }
    }
    if (local_1d != false) {
      iVar8 = (**(code **)(*param_1 + 8))(param_3,param_4 + -1,param_5);
      if (((*(int *)(DAT_00a06318 + 8) == iVar8) || (*(int *)(DAT_00a06314 + 8) == iVar8)) &&
         (param_4 < 0x7f - iVar2)) {
        iVar2 = 0;
        (**(code **)(*param_1 + 0x3c))
                  (param_3,param_4 + -1,param_5,*(undefined4 *)(DAT_00a06314 + 8));
        do {
          if (local_24 < iVar3 + param_4) {
            for (iVar2 = 0; iVar2 < iVar1 + 6; iVar2 = iVar2 + 1) {
              iVar3 = (**(code **)(*param_1 + 8))(param_3,param_4 + iVar2,param_5);
              if ((iVar3 == 0) || (*(int *)(DAT_00a062d8 + 8) == iVar3)) {
                (**(code **)(*param_1 + 0x38))
                          (param_3,param_4 + iVar2,param_5,*(undefined4 *)(DAT_00a062dc + 8),1);
              }
            }
            return local_1d;
          }
          for (iVar8 = param_3 - iVar2; iVar8 <= param_3 + iVar2; iVar8 = iVar8 + 1) {
            for (local_28 = param_5 - iVar2; local_28 <= param_5 + iVar2; local_28 = local_28 + 1) {
              iVar6 = -(iVar8 - param_3);
              if (iVar6 < 0) {
                iVar6 = iVar8 - param_3;
              }
              if (iVar6 == iVar2) {
                iVar6 = -(local_28 - param_5);
                if (iVar6 < 0) {
                  iVar6 = local_28 - param_5;
                }
                if ((iVar6 != iVar2) || (iVar2 == 0)) goto LAB_0051871c;
              }
              else {
LAB_0051871c:
                iVar6 = (**(code **)(*param_1 + 8))(iVar8,local_24,local_28);
                if ((&DAT_00a06f20)[iVar6] == '\0') {
                  (**(code **)(*param_1 + 0x38))
                            (iVar8,local_24,local_28,*(undefined4 *)(DAT_00a062d8 + 8),1);
                }
              }
            }
          }
          if ((iVar2 < 1) || (iVar3 + param_4 + 1 != local_24)) {
            if (iVar2 < iVar4 + 1) {
              iVar2 = iVar2 + 1;
            }
          }
          else {
            iVar2 = iVar2 + -1;
          }
          local_24 = local_24 + -1;
        } while( true );
      }
    }
  }
  return false;
}



/* vtable 00901370 slot 3 address 007748ec */

/* ADDRESS: 007748ec NAME: FUN_007748ec */

void FUN_007748ec(void)

{
  return;
}



/* vtable 00901370 slot 4 address 007748e4 */

/* ADDRESS: 007748e4 NAME: FUN_007748e4 */

void __fastcall FUN_007748e4(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007748e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}


