/* Candidate RTTI class: Packet60Explosion
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00903220 slot 0 address 00775708 */

/* ADDRESS: 00775708 NAME: thunk_FUN_00775710 */

void thunk_FUN_00775710(void)

{
  FUN_00775710();
  return;
}



/* vtable 00903220 slot 1 address 007756e4 */

/* ADDRESS: 007756e4 NAME: FUN_007756e4 */

void __fastcall FUN_007756e4(void *param_1)

{
  FUN_00775710();
  free(param_1);
  return;
}



/* vtable 00903220 slot 2 address 004bc962 */

/* ADDRESS: 004bc962 NAME: FUN_004bc962 */

void __thiscall FUN_004bc962(int param_1,undefined4 param_2)

{
  uint uVar1;
  void *_Memory;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  int iVar17;
  uint uVar16;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint uVar21;
  uint *puVar22;
  undefined4 *puVar23;
  int iVar24;
  float10 fVar25;
  undefined8 uVar26;
  uint uStack_84;
  int iStack_70;
  undefined4 *puStack_6c;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [36];
  
  fVar25 = (float10)FUN_0040c96a(param_2);
  *(double *)(param_1 + 0x10) = (double)fVar25;
  fVar25 = (float10)FUN_0040c96a(param_2);
  *(double *)(param_1 + 0x18) = (double)fVar25;
  fVar25 = (float10)FUN_0040c96a(param_2);
  *(double *)(param_1 + 0x20) = (double)fVar25;
  fVar25 = (float10)FUN_0040c951(param_2);
  *(float *)(param_1 + 0x28) = (float)fVar25;
  uVar3 = FUN_0040c848(param_2);
  if (0x2000 < uVar3) {
    uVar4 = FUN_00846950(8);
    FUN_00835f50(auStack_60,uVar3);
    uVar5 = FUN_00821d90(0,"Invalid explosion block count: ");
    FUN_00823120(uVar5);
    uVar5 = FUN_00804bf0(auStack_48);
    FUN_0081ffd0(uVar5);
    FUN_0081ffd0();
                    /* WARNING: Subroutine does not return */
    FUN_00846ea0(uVar4,&PTR_PTR_008f2c74,FUN_00804d80);
  }
  puVar23 = *(undefined4 **)(param_1 + 0x30);
  for (puVar6 = *(undefined4 **)(param_1 + 0x2c); puVar23 != puVar6; puVar6 = puVar6 + 1) {
    *puVar6 = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 0x3c)) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x38);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  iVar7 = FUN_007743c8(*(undefined8 *)(param_1 + 0x10));
  iVar8 = FUN_007743c8(*(undefined8 *)(param_1 + 0x18));
  iVar9 = FUN_007743c8(*(undefined8 *)(param_1 + 0x20));
  uStack_84 = 0;
  do {
    if (uStack_84 == uVar3) {
      return;
    }
    cVar2 = FUN_0040c7f8(param_2);
    uVar10 = cVar2 + iVar7;
    cVar2 = FUN_0040c7f8(param_2);
    uVar11 = cVar2 + iVar8;
    cVar2 = FUN_0040c7f8(param_2);
    uVar12 = cVar2 + iVar9;
    uVar21 = uVar10 * 0x88f9fa + uVar11 * 0xef88b + uVar12;
    uVar21 = uVar21 >> 0x14 ^ uVar21 >> 0xc ^ uVar21;
    uVar21 = uVar21 >> 7 ^ uVar21 >> 4 ^ uVar21;
    uVar13 = (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) >> 2) - 1U & uVar21;
    puVar19 = *(uint **)(param_1 + 0x38);
    uVar1 = *(uint *)(*(int *)(param_1 + 0x2c) + uVar13 * 4);
    uVar16 = uVar1;
    while (-1 < (int)uVar16) {
      puVar14 = puVar19 + uVar16 * 5;
      if ((((*puVar14 == uVar21) && (uVar10 == puVar14[1])) && (uVar11 == puVar14[2])) &&
         (uVar12 == puVar14[3])) goto LAB_004bcd69;
      uVar16 = puVar14[4];
    }
    puVar14 = *(uint **)(param_1 + 0x3c);
    iVar24 = (int)puVar14 - (int)puVar19;
    iVar15 = (iVar24 >> 2) * -0x33333333;
    if (puVar14 == *(uint **)(param_1 + 0x40)) {
      if (iVar15 == 0x6666666) {
        uVar26 = 0x890949;
        goto LAB_004bccb4;
      }
      iVar17 = 1;
      if (iVar15 != 0) {
        iVar17 = iVar15;
      }
      uVar16 = iVar17 + iVar15;
      if (0x6666666 < uVar16) {
        uVar16 = 0x6666666;
      }
      puVar18 = (uint *)FUN_00846710(uVar16 * 0x14);
      *(uint *)((int)puVar18 + iVar24) = uVar21;
      *(uint *)((int)puVar18 + iVar24 + 4) = uVar10;
      *(uint *)((int)puVar18 + iVar24 + 8) = uVar11;
      *(uint *)((int)puVar18 + iVar24 + 0xc) = uVar12;
      *(uint *)((int)puVar18 + iVar24 + 0x10) = uVar1;
      puVar20 = puVar18;
      for (puVar22 = puVar19; puVar14 != puVar22; puVar22 = puVar22 + 5) {
        uVar10 = puVar22[1];
        uVar11 = puVar22[2];
        uVar12 = puVar22[3];
        uVar1 = puVar22[4];
        *puVar20 = *puVar22;
        puVar20[1] = uVar10;
        puVar20[2] = uVar11;
        puVar20[3] = uVar12;
        puVar20[4] = uVar1;
        puVar20 = puVar20 + 5;
      }
      if (puVar19 != (uint *)0x0) {
        free(puVar19);
      }
      *(uint **)(param_1 + 0x38) = puVar18;
      *(uint **)(param_1 + 0x3c) =
           puVar18 + ((((uint)((int)puVar14 - (int)puVar19) >> 2) * 0xccccccd & 0x3fffffff) + 1) * 5
      ;
      *(uint **)(param_1 + 0x40) = puVar18 + uVar16 * 5;
    }
    else {
      *puVar14 = uVar21;
      puVar14[1] = uVar10;
      puVar14[2] = uVar11;
      puVar14[3] = uVar12;
      puVar14[4] = uVar1;
      *(uint **)(param_1 + 0x3c) = puVar14 + 5;
    }
    _Memory = *(void **)(param_1 + 0x2c);
    *(int *)((int)_Memory + uVar13 * 4) = iVar15;
    uVar1 = *(uint *)(param_1 + 0x48);
    *(uint *)(param_1 + 0x48) = uVar1 + 1;
    if (*(uint *)(param_1 + 0x44) <= uVar1) {
      iVar15 = *(int *)(param_1 + 0x30) - (int)_Memory;
      iVar24 = iVar15 >> 2;
      uVar1 = iVar24 * 2;
      if (0x1fffffff < uVar1) {
        uVar26 = 0x890963;
LAB_004bccb4:
                    /* WARNING: Subroutine does not return */
        FUN_0084e530(uVar26);
      }
      iVar15 = iVar15 * 2;
      puVar23 = (undefined4 *)0x0;
      if (uVar1 != 0) {
        puVar23 = (undefined4 *)FUN_00846710(iVar15);
      }
      puVar6 = (undefined4 *)((int)puVar23 + iVar15);
      puStack_6c = puVar23;
      while (puVar6 != puStack_6c) {
        *puStack_6c = 0xffffffff;
        puStack_6c = puStack_6c + 1;
      }
      for (iStack_70 = 0; iVar24 != iStack_70; iStack_70 = iStack_70 + 1) {
        uVar16 = *(uint *)((int)_Memory + iStack_70 * 4);
        while (-1 < (int)uVar16) {
          puVar19 = (uint *)(uVar16 * 0x14 + *(int *)(param_1 + 0x38));
          uVar10 = puVar19[4];
          uVar11 = uVar1 - 1 & *puVar19;
          puVar19[4] = puVar23[uVar11];
          puVar23[uVar11] = uVar16;
          uVar16 = uVar10;
        }
      }
      *(undefined4 **)(param_1 + 0x2c) = puVar23;
      *(undefined4 **)(param_1 + 0x30) = puVar6;
      *(undefined4 **)(param_1 + 0x34) = puStack_6c;
      *(uint *)(param_1 + 0x44) = (uint)(iVar24 * 6) >> 2;
      if (_Memory != (void *)0x0) {
        free(_Memory);
      }
    }
LAB_004bcd69:
    uStack_84 = uStack_84 + 1;
  } while( true );
}



/* vtable 00903220 slot 3 address 004bcda8 */

/* ADDRESS: 004bcda8 NAME: FUN_004bcda8 */

void __thiscall FUN_004bcda8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  uint local_38;
  int *local_34;
  
  FUN_0040c7b6(param_2,(int)*(undefined8 *)(param_1 + 0x10),
               (int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20));
  FUN_0040c7b6(param_2,(int)*(undefined8 *)(param_1 + 0x18),
               (int)((ulonglong)*(undefined8 *)(param_1 + 0x18) >> 0x20));
  FUN_0040c7b6(param_2,(int)*(undefined8 *)(param_1 + 0x20),
               (int)((ulonglong)*(undefined8 *)(param_1 + 0x20) >> 0x20));
  FUN_0040c78f(param_2,*(undefined4 *)(param_1 + 0x28));
  FUN_0040c68e(param_2,*(undefined4 *)(param_1 + 0x48));
  iVar3 = FUN_007743c8((int)*(undefined8 *)(param_1 + 0x10),
                       (int)((ulonglong)*(undefined8 *)(param_1 + 0x10) >> 0x20));
  iVar4 = FUN_007743c8((int)*(undefined8 *)(param_1 + 0x18),
                       (int)((ulonglong)*(undefined8 *)(param_1 + 0x18) >> 0x20));
  iVar10 = (int)*(undefined8 *)(param_1 + 0x20);
  iVar5 = FUN_007743c8(iVar10,(int)((ulonglong)*(undefined8 *)(param_1 + 0x20) >> 0x20));
  uVar1 = *(uint *)(param_1 + 0x48);
  if (0xaaaaaaa < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_0084e530("vector::reserve");
  }
  if (uVar1 == 0) {
    piVar6 = (int *)0x0;
    local_34 = (int *)0x0;
  }
  else {
    iVar10 = uVar1 * 0xc;
    piVar6 = (int *)FUN_00846710(iVar10);
    local_34 = piVar6 + uVar1 * 3;
  }
  piVar8 = piVar6;
  for (local_38 = 0; local_38 < (uint)(*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c) >> 2);
      local_38 = local_38 + 1) {
    for (iVar7 = *(int *)(*(int *)(param_1 + 0x2c) + local_38 * 4); -1 < iVar7;
        iVar7 = *(int *)(*(int *)(param_1 + 0x38) + 0x10 + iVar7 * 0x14)) {
      iVar9 = iVar7 * 0x14 + *(int *)(param_1 + 0x38);
      if (local_34 == piVar8) {
        iVar10 = FUN_0081a3d0(iVar9 + 4);
        piVar8 = local_34;
      }
      else {
        iVar2 = *(int *)(iVar9 + 8);
        *piVar8 = *(int *)(iVar9 + 4);
        piVar8[1] = iVar2;
        piVar8[2] = *(int *)(iVar9 + 0xc);
        piVar8 = piVar8 + 3;
      }
    }
  }
  for (; piVar6 != piVar8; piVar6 = piVar6 + 3) {
    iVar10 = piVar6[1];
    iVar7 = piVar6[2];
    FUN_0040c647(param_2,*piVar6 - iVar3);
    FUN_0040c647(param_2,iVar10 - iVar4);
    iVar10 = param_2;
    FUN_0040c647(param_2,iVar7 - iVar5);
  }
  FUN_007ef9b0(iVar10);
  return;
}



/* vtable 00903220 slot 4 address 004bc944 */

/* ADDRESS: 004bc944 NAME: FUN_004bc944 */

void FUN_004bc944(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004bc958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x84))();
  return;
}



/* vtable 00903220 slot 5 address 004bc95a */

/* ADDRESS: 004bc95a NAME: FUN_004bc95a */

int __fastcall FUN_004bc95a(int param_1)

{
  return *(int *)(param_1 + 0x48) * 3 + 0x20;
}


