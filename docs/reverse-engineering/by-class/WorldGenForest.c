/* Candidate RTTI class: WorldGenForest
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00901354 slot 0 address 007748a8 */

/* ADDRESS: 007748a8 NAME: FUN_007748a8 */

void FUN_007748a8(void)

{
  return;
}



/* vtable 00901354 slot 1 address 00774890 */

/* ADDRESS: 00774890 NAME: FUN_00774890 */

void __fastcall FUN_00774890(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00901354 slot 2 address 00516b34 */

/* ADDRESS: 00516b34 NAME: FUN_00516b34 */

bool FUN_00516b34(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_2c;
  int local_24;
  bool local_1d;
  
  iVar1 = FUN_0040e7b8(3);
  if (0 < param_4) {
    iVar2 = iVar1 + 5;
    iVar3 = iVar2 + param_4;
    if (iVar3 < 0x80) {
      local_1d = true;
      iVar1 = iVar1 + 6 + param_4;
      for (iVar6 = param_4; iVar6 <= iVar1; iVar6 = iVar6 + 1) {
        uVar7 = 2;
        if (iVar6 < iVar1 + -2) {
          uVar7 = (uint)(iVar6 != param_4);
        }
        local_24 = param_3 - uVar7;
        while ((local_24 <= (int)(param_3 + uVar7) && (local_1d != false))) {
          iVar5 = param_5 - uVar7;
          while ((iVar5 <= (int)(param_5 + uVar7) && (local_1d != false))) {
            if (iVar6 < 0x80) {
              iVar4 = (**(code **)(*param_1 + 8))(local_24,iVar6,iVar5);
              if (iVar4 != 0) {
                local_1d = *(int *)(DAT_00a062d8 + 8) == iVar4;
              }
            }
            else {
              local_1d = false;
            }
            iVar5 = iVar5 + 1;
          }
          local_24 = local_24 + 1;
        }
      }
      if (local_1d != false) {
        iVar1 = (**(code **)(*param_1 + 8))(param_3,param_4 + -1,param_5);
        if (((*(int *)(DAT_00a06318 + 8) == iVar1) || (*(int *)(DAT_00a06314 + 8) == iVar1)) &&
           (param_4 < 0x7f - iVar2)) {
          (**(code **)(*param_1 + 0x3c))
                    (param_3,param_4 + -1,param_5,*(undefined4 *)(DAT_00a06314 + 8));
          local_2c = -3;
          do {
            iVar1 = local_2c + iVar3;
            if (iVar3 < iVar1) {
              for (iVar1 = 0; iVar1 < iVar2; iVar1 = iVar1 + 1) {
                iVar3 = (**(code **)(*param_1 + 8))(param_3,param_4 + iVar1,param_5);
                if ((iVar3 == 0) || (*(int *)(DAT_00a062d8 + 8) == iVar3)) {
                  (**(code **)(*param_1 + 0x38))
                            (param_3,param_4 + iVar1,param_5,*(undefined4 *)(DAT_00a062dc + 8),2);
                }
              }
              return local_1d;
            }
            iVar6 = 1 - local_2c / 2;
            for (iVar5 = param_3 - iVar6; iVar5 <= param_3 + iVar6; iVar5 = iVar5 + 1) {
              for (local_24 = param_5 - iVar6; local_24 <= param_5 + iVar6; local_24 = local_24 + 1)
              {
                iVar4 = -(iVar5 - param_3);
                if (iVar4 < 0) {
                  iVar4 = iVar5 - param_3;
                }
                if (iVar4 == iVar6) {
                  iVar4 = -(local_24 - param_5);
                  if (iVar4 < 0) {
                    iVar4 = local_24 - param_5;
                  }
                  if ((iVar4 != iVar6) || ((iVar4 = FUN_0040e7b8(2), iVar4 != 0 && (local_2c != 0)))
                     ) goto LAB_00516cfc;
                }
                else {
LAB_00516cfc:
                  iVar4 = (**(code **)(*param_1 + 8))(iVar5,iVar1,local_24);
                  if ((&DAT_00a06f20)[iVar4] == '\0') {
                    (**(code **)(*param_1 + 0x38))
                              (iVar5,iVar1,local_24,*(undefined4 *)(DAT_00a062d8 + 8),2);
                  }
                }
              }
            }
            local_2c = local_2c + 1;
          } while( true );
        }
      }
    }
  }
  return false;
}



/* vtable 00901354 slot 3 address 007748ec */

/* ADDRESS: 007748ec NAME: FUN_007748ec */

void FUN_007748ec(void)

{
  return;
}



/* vtable 00901354 slot 4 address 007748e4 */

/* ADDRESS: 007748e4 NAME: FUN_007748e4 */

void __fastcall FUN_007748e4(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007748e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}


