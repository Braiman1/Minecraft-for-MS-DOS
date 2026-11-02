/* Candidate RTTI class: WorldGenClay
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fe438 slot 0 address 00773720 */

/* ADDRESS: 00773720 NAME: FUN_00773720 */

void FUN_00773720(void)

{
  return;
}



/* vtable 008fe438 slot 1 address 00773708 */

/* ADDRESS: 00773708 NAME: FUN_00773708 */

void __fastcall FUN_00773708(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 008fe438 slot 2 address 00515a7c */

/* ADDRESS: 00515a7c NAME: FUN_00515a7c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00515a7c(int param_1,int *param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 extraout_ECX;
  int iVar10;
  int iVar11;
  float10 fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  float fVar22;
  double dVar23;
  double dVar24;
  undefined8 in_stack_ffffff38;
  int local_28;
  
  uVar9 = (undefined4)((ulonglong)in_stack_ffffff38 >> 0x20);
  iVar2 = (**(code **)(*param_2 + 0x1c))(param_4,param_5,param_6);
  if (DAT_00a0ae34 == iVar2) {
    fVar12 = (float10)FUN_0040e898();
    fVar22 = (float)fVar12 * _DAT_00896be0;
    fVar12 = (float10)FUN_004a3d32(fVar22);
    dVar23 = (double)((float)*(int *)(param_1 + 8) * (float)fVar12 * _DAT_00896be4 +
                     (float)(param_4 + 8));
    fVar12 = (float10)FUN_004a3d32(fVar22);
    fVar13 = (float)*(int *)(param_1 + 8) * (float)fVar12 * _DAT_00896be4;
    fVar12 = (float10)FUN_004a3d60(fVar22);
    dVar1 = (double)((float)*(int *)(param_1 + 8) * (float)fVar12 * _DAT_00896be4 +
                    (float)(param_6 + 8));
    fVar12 = (float10)FUN_004a3d60(fVar22);
    fVar22 = (float)*(int *)(param_1 + 8) * (float)fVar12 * _DAT_00896be4;
    iVar2 = FUN_0040e7b8(3);
    dVar24 = (double)(param_5 + 2 + iVar2);
    iVar2 = FUN_0040e7b8(3);
    dVar16 = (double)CONCAT44(uVar9,extraout_ECX);
    for (local_28 = 0; iVar3 = *(int *)(param_1 + 8), local_28 <= iVar3; local_28 = local_28 + 1) {
      dVar20 = (double)iVar3;
      dVar18 = (double)local_28;
      dVar14 = (((double)((float)(param_4 + 8) - fVar13) - dVar23) * dVar18) / dVar20 + dVar23;
      dVar15 = (((double)(param_5 + 2 + iVar2) - dVar24) * dVar18) / dVar20 + dVar24;
      dVar18 = (((double)((float)(param_6 + 8) - fVar22) - dVar1) * dVar18) / dVar20 + dVar1;
      fVar12 = (float10)FUN_0040e8c2(dVar16);
      dVar16 = (double)*(int *)(param_1 + 8) * (double)fVar12 * _DAT_00896be8;
      fVar12 = (float10)FUN_004a3d32(((float)local_28 * _DAT_00896be0) /
                                     (float)*(int *)(param_1 + 8));
      dVar20 = ((double)((float)fVar12 + _DAT_00896bf0) * dVar16 + _DAT_00896bf8) * _DAT_00896c00;
      iVar3 = FUN_004a3e0c(dVar14 - dVar20);
      iVar4 = FUN_004a3e0c(dVar14 + dVar20);
      iVar5 = FUN_004a3e0c(dVar15 - dVar20);
      iVar6 = FUN_004a3e0c(dVar15 + dVar20);
      iVar7 = FUN_004a3e0c(dVar18 - dVar20);
      dVar16 = dVar18 + dVar20;
      iVar8 = FUN_004a3e0c();
      for (; iVar3 <= iVar4; iVar3 = iVar3 + 1) {
        dVar21 = (((double)iVar3 + _DAT_00896c00) - dVar14) / dVar20;
        dVar21 = dVar21 * dVar21;
        if (dVar21 < _DAT_00896bf8) {
          for (iVar11 = iVar5; iVar11 <= iVar6; iVar11 = iVar11 + 1) {
            dVar17 = (((double)iVar11 + _DAT_00896c00) - dVar15) / dVar20;
            dVar17 = dVar17 * dVar17 + dVar21;
            if (dVar17 < _DAT_00896bf8) {
              for (iVar10 = iVar7; iVar10 <= iVar8; iVar10 = iVar10 + 1) {
                dVar19 = (((double)iVar10 + _DAT_00896c00) - dVar18) / dVar20;
                if (dVar19 * dVar19 + dVar17 < _DAT_00896bf8) {
                  dVar16 = (double)CONCAT44(iVar11,iVar3);
                  FUN_0050b39c(iVar3,iVar11,iVar10,*(undefined4 *)(DAT_00a062f0 + 8),
                               *(undefined4 *)(param_1 + 4));
                }
              }
            }
          }
        }
      }
    }
    uVar9 = CONCAT31((int3)((uint)iVar3 >> 8),1);
  }
  else {
    uVar9 = 0;
  }
  return uVar9;
}



/* vtable 008fe438 slot 3 address 007748ec */

/* ADDRESS: 007748ec NAME: FUN_007748ec */

void FUN_007748ec(void)

{
  return;
}



/* vtable 008fe438 slot 4 address 007748e4 */

/* ADDRESS: 007748e4 NAME: FUN_007748e4 */

void __fastcall FUN_007748e4(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007748e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}


