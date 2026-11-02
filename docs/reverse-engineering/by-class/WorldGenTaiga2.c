/* Candidate RTTI class: WorldGenTaiga2
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 0090138c slot 0 address 007748e0 */

/* ADDRESS: 007748e0 NAME: FUN_007748e0 */

void FUN_007748e0(void)

{
  return;
}



/* vtable 0090138c slot 1 address 007748c8 */

/* ADDRESS: 007748c8 NAME: FUN_007748c8 */

void __fastcall FUN_007748c8(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 0090138c slot 2 address 00518818 */

/* ADDRESS: 00518818 NAME: FUN_00518818 */

bool FUN_00518818(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint local_38;
  int local_2c;
  int local_28;
  bool local_1d;
  
  iVar2 = FUN_0040e7b8(4);
  iVar3 = FUN_0040e7b8(2);
  iVar4 = FUN_0040e7b8(2);
  if (0 < param_4) {
    iVar1 = iVar2 + 6;
    if (param_4 + iVar1 < 0x80) {
      iVar4 = iVar4 + 2;
      local_1d = true;
      for (iVar10 = param_4; iVar10 <= iVar2 + 7 + param_4; iVar10 = iVar10 + 1) {
        if (local_1d == false) {
          return false;
        }
        iVar9 = 0;
        if (iVar3 + 1 <= iVar10 - param_4) {
          iVar9 = iVar4;
        }
        local_28 = param_3 - iVar9;
        while ((local_28 <= param_3 + iVar9 && (local_1d != false))) {
          iVar8 = param_5 - iVar9;
          while ((iVar8 <= param_5 + iVar9 && (local_1d != false))) {
            if (iVar10 < 0x80) {
              iVar5 = (**(code **)(*param_1 + 8))(local_28,iVar10,iVar8);
              if (iVar5 != 0) {
                local_1d = *(int *)(DAT_00a062d8 + 8) == iVar5;
              }
            }
            else {
              local_1d = false;
            }
            iVar8 = iVar8 + 1;
          }
          local_28 = local_28 + 1;
        }
      }
      if (local_1d != false) {
        iVar2 = (**(code **)(*param_1 + 8))(param_3,param_4 + -1,param_5);
        if (((*(int *)(DAT_00a06318 + 8) == iVar2) || (*(int *)(DAT_00a06314 + 8) == iVar2)) &&
           (param_4 < 0x7f - iVar1)) {
          (**(code **)(*param_1 + 0x3c))
                    (param_3,param_4 + -1,param_5,*(undefined4 *)(DAT_00a06314 + 8));
          uVar6 = FUN_0040e7b8(2);
          local_2c = 0;
          local_38 = 0;
          local_28 = 1;
          do {
            uVar11 = local_38;
            if (iVar1 - (iVar3 + 1) < local_2c) {
              iVar2 = FUN_0040e7b8(3);
              for (iVar3 = 0; iVar3 < iVar1 - iVar2; iVar3 = iVar3 + 1) {
                iVar4 = (**(code **)(*param_1 + 8))(param_3,param_4 + iVar3,param_5);
                if ((iVar4 == 0) || (*(int *)(DAT_00a062d8 + 8) == iVar4)) {
                  (**(code **)(*param_1 + 0x38))
                            (param_3,param_4 + iVar3,param_5,*(undefined4 *)(DAT_00a062dc + 8),1);
                }
              }
              return local_1d;
            }
            iVar2 = (param_4 + iVar1) - local_2c;
            for (iVar10 = param_3 - uVar6; iVar10 <= (int)(param_3 + uVar6); iVar10 = iVar10 + 1) {
              for (iVar9 = param_5 - uVar6; iVar9 <= (int)(param_5 + uVar6); iVar9 = iVar9 + 1) {
                uVar7 = -(iVar10 - param_3);
                if ((int)uVar7 < 0) {
                  uVar7 = iVar10 - param_3;
                }
                if (uVar7 == uVar6) {
                  uVar7 = -(iVar9 - param_5);
                  if ((int)uVar7 < 0) {
                    uVar7 = iVar9 - param_5;
                  }
                  if ((uVar7 != uVar6) || (uVar6 == 0)) goto LAB_00518a37;
                }
                else {
LAB_00518a37:
                  iVar8 = (**(code **)(*param_1 + 8))(iVar10,iVar2,iVar9);
                  if ((&DAT_00a06f20)[iVar8] == '\0') {
                    (**(code **)(*param_1 + 0x38))
                              (iVar10,iVar2,iVar9,*(undefined4 *)(DAT_00a062d8 + 8),1);
                  }
                }
              }
            }
            if ((int)uVar6 < local_28) {
              uVar11 = uVar6 + 1;
            }
            else {
              local_28 = local_28 + 1;
              if (iVar4 < local_28) {
                local_28 = iVar4;
              }
              local_38 = (uint)local_1d;
            }
            local_2c = local_2c + 1;
            uVar6 = uVar11;
          } while( true );
        }
      }
    }
  }
  return false;
}



/* vtable 0090138c slot 3 address 007748ec */

/* ADDRESS: 007748ec NAME: FUN_007748ec */

void FUN_007748ec(void)

{
  return;
}



/* vtable 0090138c slot 4 address 007748e4 */

/* ADDRESS: 007748e4 NAME: FUN_007748e4 */

void __fastcall FUN_007748e4(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007748e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}


