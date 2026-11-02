/* Candidate RTTI class: WorldGenLakes
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008ff564 slot 0 address 00773f74 */

/* ADDRESS: 00773f74 NAME: FUN_00773f74 */

void FUN_00773f74(void)

{
  return;
}



/* vtable 008ff564 slot 1 address 00773f5c */

/* ADDRESS: 00773f5c NAME: FUN_00773f5c */

void __fastcall FUN_00773f5c(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 008ff564 slot 2 address 005174b4 */

/* ADDRESS: 005174b4 NAME: FUN_005174b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 __thiscall
FUN_005174b4(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  char *pcVar10;
  float10 fVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  int local_820;
  char local_81c [5];
  char acStack_817 [2055];
  
  while ((0 < param_5 && (cVar1 = FUN_0050ac0e(param_4 + -8,param_5,param_6 + -8), cVar1 != '\0')))
  {
    param_5 = param_5 + -1;
  }
  pcVar10 = local_81c;
  for (iVar3 = 0x200; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar10[0] = '\0';
    pcVar10[1] = '\0';
    pcVar10[2] = '\0';
    pcVar10[3] = '\0';
    pcVar10 = pcVar10 + 4;
  }
  iVar3 = FUN_0040e7b8(4);
  for (iVar9 = 0; iVar9 < iVar3 + 4; iVar9 = iVar9 + 1) {
    fVar11 = (float10)FUN_0040e8c2(pcVar10);
    dVar16 = DAT_00896c40 * (double)fVar11 + _DAT_00896c48;
    fVar11 = (float10)FUN_0040e8c2();
    dVar14 = DAT_00896c50 * (double)fVar11 + _DAT_00896c58;
    fVar11 = (float10)FUN_0040e8c2();
    dVar12 = DAT_00896c40 * (double)fVar11 + _DAT_00896c48;
    fVar11 = (float10)FUN_0040e8c2();
    dVar19 = DAT_00896c60 * dVar16;
    dVar16 = ((DAT_00896c68 - dVar16) - _DAT_00896c58) * (double)fVar11 + DAT_00896c70;
    fVar11 = (float10)FUN_0040e8c2();
    dVar20 = DAT_00896c60 * dVar14;
    dVar14 = ((DAT_00896c78 - dVar14) - DAT_00896c50) * (double)fVar11 + _DAT_00896c58;
    fVar11 = (float10)FUN_0040e8c2();
    iVar6 = 1;
    dVar18 = DAT_00896c60 * dVar12;
    do {
      iVar7 = 1;
      dVar15 = ((double)iVar6 - (dVar16 + dVar19)) / dVar19;
      iVar8 = iVar6 * 0x80;
      do {
        iVar4 = 1;
        dVar17 = ((double)iVar7 -
                 (((DAT_00896c68 - dVar12) - _DAT_00896c58) * (double)fVar11 + DAT_00896c70 + dVar18
                 )) / dVar18;
        do {
          dVar13 = ((double)iVar4 - (dVar14 + dVar20)) / dVar20;
          if (dVar13 * dVar13 + dVar15 * dVar15 + dVar17 * dVar17 < DAT_00896c70) {
            acStack_817[iVar4 + iVar8 + 3] = '\x01';
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 != 7);
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 8;
      } while (iVar7 != 0xf);
      iVar6 = iVar6 + 1;
    } while (iVar6 != 0xf);
  }
  iVar3 = 0;
  do {
    local_820 = 0;
    pcVar10 = local_81c + iVar3 * 0x80;
    do {
      iVar9 = 0;
LAB_0051776b:
      do {
        if (pcVar10[iVar9] == '\0') {
          if (iVar3 == 0xf) {
LAB_00517796:
            if (pcVar10[iVar9 + -0x80] == '\0') {
LAB_0051779d:
              if (local_820 == 0xf) {
LAB_005177b6:
                if (pcVar10[iVar9 + -8] == '\0') {
LAB_005177bd:
                  if (iVar9 != 7) {
                    if (pcVar10[iVar9 + 1] != '\0') goto LAB_005177db;
                    if (iVar9 == 0) {
                      iVar9 = 1;
                      goto LAB_0051776b;
                    }
                  }
                  if (pcVar10[iVar9 + -1] == '\0') goto LAB_00517778;
                }
              }
              else if (pcVar10[iVar9 + 8] == '\0') {
                if (local_820 != 0) goto LAB_005177b6;
                goto LAB_005177bd;
              }
            }
          }
          else if (pcVar10[iVar9 + 0x80] == '\0') {
            if (iVar3 != 0) goto LAB_00517796;
            goto LAB_0051779d;
          }
LAB_005177db:
          iVar6 = local_820 + -8 + param_6;
          iVar8 = iVar9 + -4 + param_5;
          iVar7 = iVar3 + -8 + param_4;
          piVar2 = (int *)(**(code **)(*param_2 + 0x1c))(iVar7,iVar8,iVar6);
          if (iVar9 < 4) {
            cVar1 = (**(code **)(*piVar2 + 0xc))();
            if ((cVar1 == '\0') &&
               (iVar6 = (**(code **)(*param_2 + 8))(iVar7,iVar8,iVar6),
               *(int *)(param_1 + 4) != iVar6)) {
              return 0;
            }
            iVar9 = iVar9 + 1;
            goto LAB_0051776b;
          }
          cVar1 = (**(code **)(*piVar2 + 8))();
          if (cVar1 != '\0') {
            return 0;
          }
        }
LAB_00517778:
        iVar9 = iVar9 + 1;
      } while (iVar9 != 8);
      local_820 = local_820 + 1;
      pcVar10 = pcVar10 + 8;
    } while (local_820 != 0x10);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x10);
  iVar3 = 0;
  do {
    iVar8 = iVar3 * 0x80;
    iVar6 = iVar8 + 0x80;
    iVar9 = param_6 + -8;
    do {
      iVar7 = 0;
      do {
        if (local_81c[iVar7 + iVar8] != '\0') {
          uVar5 = 0;
          if (iVar7 < 4) {
            uVar5 = *(undefined4 *)(param_1 + 4);
          }
          (**(code **)(*param_2 + 0x3c))(iVar3 + -8 + param_4,iVar7 + -4 + param_5,iVar9,uVar5);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 != 8);
      iVar9 = iVar9 + 1;
      iVar8 = iVar8 + 8;
    } while (iVar8 != iVar6);
    iVar3 = iVar3 + 1;
  } while (iVar3 != 0x10);
  local_820 = 0;
  do {
    iVar6 = local_820 * 0x80;
    iVar9 = iVar6 + 0x80;
    iVar3 = param_6 + -8;
    do {
      iVar8 = param_5 + -1;
      do {
        if (acStack_817[iVar8 + (iVar6 - param_5)] != '\0') {
          iVar7 = local_820 + -8 + param_4;
          iVar4 = (**(code **)(*param_2 + 8))(iVar7,iVar8,iVar3);
          if ((*(int *)(DAT_00a06314 + 8) == iVar4) &&
             (iVar4 = FUN_0050be78(DAT_00a0858c,iVar7,iVar8 + 1,iVar3), 0 < iVar4)) {
            (**(code **)(*param_2 + 0x3c))(iVar7,iVar8,iVar3,*(undefined4 *)(DAT_00a06318 + 8));
          }
        }
        iVar8 = iVar8 + 1;
      } while (param_5 + 3 != iVar8);
      iVar3 = iVar3 + 1;
      iVar6 = iVar6 + 8;
    } while (iVar6 != iVar9);
    local_820 = local_820 + 1;
  } while (local_820 != 0x10);
  if (*(int *)((&DAT_00a07120)[*(int *)(param_1 + 4)] + 0x50) == DAT_00a0ae30) {
    iVar3 = 0;
    do {
      pcVar10 = local_81c + iVar3 * 0x80;
      local_820 = 0;
      do {
        iVar9 = 0;
LAB_00517a94:
        do {
          if (pcVar10[iVar9] == '\0') {
            if (iVar3 == 0xf) {
LAB_00517ab1:
              if (pcVar10[iVar9 + -0x80] == '\0') {
LAB_00517ab8:
                if (local_820 == 0xf) {
LAB_00517ad1:
                  if (pcVar10[iVar9 + -8] == '\0') {
LAB_00517ad8:
                    if (iVar9 != 7) {
                      if (pcVar10[iVar9 + 1] != '\0') goto LAB_00517afa;
                      if (iVar9 == 0) {
                        iVar9 = 1;
                        goto LAB_00517a94;
                      }
                    }
                    if (pcVar10[iVar9 + -1] == '\0') goto LAB_00517bb2;
                  }
                }
                else if (pcVar10[iVar9 + 8] == '\0') {
                  if (local_820 != 0) goto LAB_00517ad1;
                  goto LAB_00517ad8;
                }
              }
            }
            else if (pcVar10[iVar9 + 0x80] == '\0') {
              if (iVar3 != 0) goto LAB_00517ab1;
              goto LAB_00517ab8;
            }
LAB_00517afa:
            if ((iVar9 < 4) || (iVar6 = FUN_0040e7b8(2), iVar6 != 0)) {
              iVar6 = local_820 + -8 + param_6;
              iVar8 = iVar9 + -4 + param_5;
              iVar7 = iVar3 + -8 + param_4;
              piVar2 = (int *)(**(code **)(*param_2 + 0x1c))(iVar7,iVar8,iVar6);
              cVar1 = (**(code **)(*piVar2 + 0xc))();
              if (cVar1 != '\0') {
                (**(code **)(*param_2 + 0x3c))(iVar7,iVar8,iVar6,*(undefined4 *)(DAT_00a0631c + 8));
              }
            }
          }
LAB_00517bb2:
          iVar9 = iVar9 + 1;
        } while (iVar9 != 8);
        local_820 = local_820 + 1;
        pcVar10 = pcVar10 + 8;
      } while (local_820 != 0x10);
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x10);
  }
  return 1;
}



/* vtable 008ff564 slot 3 address 007748ec */

/* ADDRESS: 007748ec NAME: FUN_007748ec */

void FUN_007748ec(void)

{
  return;
}



/* vtable 008ff564 slot 4 address 007748e4 */

/* ADDRESS: 007748e4 NAME: FUN_007748e4 */

void __fastcall FUN_007748e4(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007748e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}


