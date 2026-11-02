/* Candidate RTTI class: WorldGenDungeons
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00902a84 slot 0 address 00775504 */

/* ADDRESS: 00775504 NAME: FUN_00775504 */

void FUN_00775504(void)

{
  return;
}



/* vtable 00902a84 slot 1 address 007754ec */

/* ADDRESS: 007754ec NAME: FUN_007754ec */

void __fastcall FUN_007754ec(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00902a84 slot 2 address 00516368 */

/* ADDRESS: 00516368 NAME: FUN_00516368 */

undefined4 __thiscall
FUN_00516368(undefined4 param_1,int *param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  void *_Memory;
  undefined4 extraout_EDX;
  int iVar17;
  int iVar18;
  bool bVar19;
  undefined8 uVar20;
  undefined **ppuVar21;
  undefined4 uVar22;
  int local_5c;
  int local_4c;
  int local_48;
  int local_40;
  undefined1 local_34 [36];
  
  iVar4 = FUN_0040e7b8(2);
  iVar5 = iVar4 + 2;
  iVar6 = FUN_0040e7b8(2);
  iVar7 = iVar6 + 2;
  local_5c = 0;
  iVar4 = iVar4 + 3 + param_4;
  iVar8 = (param_4 - iVar5) + -1;
  for (iVar18 = iVar8; iVar18 <= iVar4; iVar18 = iVar18 + 1) {
    for (iVar17 = param_5 + -1; iVar17 <= param_5 + 4; iVar17 = iVar17 + 1) {
      iVar12 = iVar6 + 3 + param_6;
      iVar9 = (param_6 - iVar7) + -1;
      for (local_40 = iVar9; local_40 <= iVar12; local_40 = local_40 + 1) {
        piVar10 = (int *)(**(code **)(*param_2 + 0x1c))(iVar18,iVar17,local_40);
        if ((iVar17 == param_5 + -1) && (cVar1 = (**(code **)(*piVar10 + 0xc))(), cVar1 == '\0')) {
          return 0;
        }
        if ((param_5 + 4 == iVar17) && (cVar1 = (**(code **)(*piVar10 + 0xc))(), cVar1 == '\0')) {
          return 0;
        }
        if ((((iVar12 == local_40 || local_40 == iVar9) || (iVar18 == iVar8 || iVar4 == iVar18)) &&
            (iVar17 == param_5)) && (cVar1 = FUN_0050ac0e(iVar18,iVar17,local_40), cVar1 != '\0')) {
          uVar11 = FUN_0050ac0e(iVar18,iVar17 + 1,local_40);
          local_5c = local_5c + (uVar11 & 0xff);
        }
      }
    }
  }
  if (4 < local_5c - 1U) {
    return 0;
  }
  for (iVar18 = iVar8; iVar18 <= iVar4; iVar18 = iVar18 + 1) {
    for (iVar17 = param_5 + 3; iVar12 = param_5 + -1, iVar12 <= iVar17; iVar17 = iVar17 + -1) {
      iVar9 = iVar6 + 3 + param_6;
      iVar13 = (param_6 - iVar7) + -1;
      for (local_40 = iVar13; local_40 <= iVar9; local_40 = local_40 + 1) {
        if (((local_40 == iVar13 || (iVar12 == iVar17 || iVar18 == iVar8)) || (iVar4 == iVar18)) ||
           ((iVar9 == local_40 || (param_5 + 4 == iVar17)))) {
          if (-1 < iVar17) {
            piVar10 = (int *)(**(code **)(*param_2 + 0x1c))(iVar18,iVar17 + -1,local_40);
            cVar1 = (**(code **)(*piVar10 + 0xc))();
            if (cVar1 == '\0') goto LAB_0051660d;
          }
          piVar10 = (int *)(**(code **)(*param_2 + 0x1c))(iVar18,iVar17,local_40);
          cVar1 = (**(code **)(*piVar10 + 0xc))();
          if (cVar1 != '\0') {
            if ((iVar12 != iVar17) || (iVar14 = FUN_0040e7b8(4), iVar14 == 0)) {
              uVar22 = *(undefined4 *)(DAT_00a06310 + 8);
              goto LAB_00516613;
            }
            uVar22 = *(undefined4 *)(DAT_00a06260 + 8);
            iVar14 = iVar12;
            goto LAB_0051661e;
          }
        }
        else {
LAB_0051660d:
          uVar22 = 0;
LAB_00516613:
          iVar14 = iVar17;
LAB_0051661e:
          FUN_0050b858(iVar18,iVar14,local_40,uVar22);
        }
      }
    }
  }
  local_48 = 2;
  do {
    local_4c = 0;
    do {
      iVar4 = FUN_0040e7b8(iVar5 * 2 + 1);
      iVar18 = (iVar4 + param_4) - iVar5;
      iVar4 = FUN_0040e7b8(iVar7 * 2 + 1);
      iVar4 = (iVar4 + param_6) - iVar7;
      bVar2 = FUN_0050ac0e(iVar18,param_5,iVar4);
      if (bVar2 == 0) {
LAB_005166ac:
        bVar2 = 0;
      }
      else {
        piVar10 = (int *)(**(code **)(*param_2 + 0x1c))(iVar18 + -1,param_5,iVar4);
        bVar3 = (**(code **)(*piVar10 + 0xc))();
        piVar10 = (int *)(**(code **)(*param_2 + 0x1c))(iVar18 + 1,param_5,iVar4);
        uVar11 = (**(code **)(*piVar10 + 0xc))();
        piVar10 = (int *)(**(code **)(*param_2 + 0x1c))(iVar18,param_5,iVar4 + -1);
        uVar15 = (**(code **)(*piVar10 + 0xc))();
        piVar10 = (int *)(**(code **)(*param_2 + 0x1c))(iVar18,param_5,iVar4 + 1);
        uVar16 = (**(code **)(*piVar10 + 0xc))();
        if ((uVar16 & 0xff) + (uVar15 & 0xff) + (uVar11 & 0xff) + (uint)bVar3 != 1)
        goto LAB_005166ac;
        FUN_0050b858(iVar18,param_5,iVar4,*(undefined4 *)(DAT_00a06248 + 8));
        iVar4 = (**(code **)(*param_2 + 0xc))(iVar18,param_5,iVar4);
        if (iVar4 != 0) {
          ppuVar21 = &PTR_PTR_008f06e0;
          piVar10 = (int *)FUN_00846ef0(iVar4,&PTR_PTR_008f06e0,&PTR_PTR_008f112c,0);
          if (piVar10 != (int *)0x0) {
            bVar2 = 0;
            iVar4 = 0;
            do {
              uVar20 = FUN_0051604a(param_3);
              if ((int)uVar20 != 0) {
                uVar22 = (**(code **)(*piVar10 + 0x1c))((int)((ulonglong)uVar20 >> 0x20),ppuVar21);
                uVar22 = FUN_0040e7b8(uVar22);
                _Memory = (void *)(**(code **)(*piVar10 + 0x20))(uVar22);
                ppuVar21 = (undefined **)(**(code **)(*piVar10 + 0x28))(uVar22,(int)uVar20);
                if (_Memory != (void *)0x0) {
                  ppuVar21 = (undefined **)0x10;
                  free(_Memory);
                }
              }
              bVar19 = iVar4 == 7;
              iVar4 = iVar4 + 1;
              bVar2 = bVar2 | bVar19;
            } while (iVar4 != 8);
          }
        }
      }
      local_4c = local_4c + 1;
    } while ((local_4c != 3) && (bVar2 != 1));
    if (local_48 == 1) {
      FUN_0050b858(param_4,param_5,param_6,*(undefined4 *)(DAT_00a06250 + 8));
      iVar4 = (**(code **)(*param_2 + 0xc))(param_4,param_5,param_6);
      if ((iVar4 != 0) &&
         (iVar4 = FUN_00846ef0(iVar4,&PTR_PTR_008f06e0,&PTR_PTR_008f16d8,0), iVar4 != 0)) {
        FUN_0051630a(param_1,param_3);
        uVar22 = FUN_00506dcc(local_34,extraout_EDX);
        FUN_0081ffd0(uVar22);
      }
      return 1;
    }
    local_48 = 1;
  } while( true );
}



/* vtable 00902a84 slot 3 address 007748ec */

/* ADDRESS: 007748ec NAME: FUN_007748ec */

void FUN_007748ec(void)

{
  return;
}



/* vtable 00902a84 slot 4 address 007748e4 */

/* ADDRESS: 007748e4 NAME: FUN_007748e4 */

void __fastcall FUN_007748e4(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007748e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}


