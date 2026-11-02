/* Candidate RTTI class: WorldGenMinable
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 0090228c slot 0 address 00774e64 */

/* ADDRESS: 00774e64 NAME: FUN_00774e64 */

void FUN_00774e64(void)

{
  return;
}



/* vtable 0090228c slot 1 address 00774e4c */

/* ADDRESS: 00774e4c NAME: FUN_00774e4c */

void __fastcall FUN_00774e4c(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 0090228c slot 2 address 00517e80 */

/* ADDRESS: 00517e80 NAME: FUN_00517e80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_00517e80(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  double dVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 extraout_ECX;
  int iVar8;
  int iVar9;
  int iVar10;
  float10 fVar11;
  float fVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  undefined8 in_stack_ffffff44;
  undefined4 uVar24;
  int local_28;
  
  uVar24 = (undefined4)((ulonglong)in_stack_ffffff44 >> 0x20);
  fVar11 = (float10)FUN_0040e898();
  fVar21 = (float)fVar11 * _DAT_00896c80;
  fVar11 = (float10)FUN_004a3d32(fVar21);
  dVar22 = (double)((float)*(int *)(param_1 + 8) * (float)fVar11 * _DAT_00896c84 +
                   (float)(param_4 + 8));
  fVar11 = (float10)FUN_004a3d32(fVar21);
  fVar12 = (float)*(int *)(param_1 + 8) * (float)fVar11 * _DAT_00896c84;
  fVar11 = (float10)FUN_004a3d60(fVar21);
  dVar1 = (double)((float)*(int *)(param_1 + 8) * (float)fVar11 * _DAT_00896c84 +
                  (float)(param_6 + 8));
  fVar11 = (float10)FUN_004a3d60(fVar21);
  fVar21 = (float)*(int *)(param_1 + 8) * (float)fVar11 * _DAT_00896c84;
  iVar2 = FUN_0040e7b8(3);
  dVar23 = (double)(param_5 + 2 + iVar2);
  iVar2 = FUN_0040e7b8(3);
  dVar15 = (double)CONCAT44(uVar24,extraout_ECX);
  uVar24 = *(undefined4 *)(DAT_00a0631c + 8);
  for (iVar9 = 0; iVar3 = *(int *)(param_1 + 8), iVar9 <= iVar3; iVar9 = iVar9 + 1) {
    dVar17 = (double)iVar9;
    dVar19 = (double)iVar3;
    dVar13 = (((double)((float)(param_4 + 8) - fVar12) - dVar22) * dVar17) / dVar19 + dVar22;
    dVar14 = (((double)(param_5 + 2 + iVar2) - dVar23) * dVar17) / dVar19 + dVar23;
    dVar17 = (((double)((float)(param_6 + 8) - fVar21) - dVar1) * dVar17) / dVar19 + dVar1;
    fVar11 = (float10)FUN_0040e8c2(dVar15);
    dVar15 = (double)*(int *)(param_1 + 8) * (double)fVar11 * _DAT_00896c88;
    fVar11 = (float10)FUN_004a3d32(((float)iVar9 * _DAT_00896c80) / (float)*(int *)(param_1 + 8));
    dVar19 = ((double)((float)fVar11 + _DAT_00896c90) * dVar15 + DAT_00896c98) * _DAT_00896ca0;
    local_28 = FUN_004a3e0c(dVar13 - dVar19);
    iVar3 = FUN_004a3e0c(dVar14 - dVar19);
    iVar4 = FUN_004a3e0c(dVar17 - dVar19);
    iVar5 = FUN_004a3e0c(dVar13 + dVar19);
    iVar6 = FUN_004a3e0c(dVar14 + dVar19);
    dVar15 = dVar17 + dVar19;
    iVar7 = FUN_004a3e0c();
    for (; local_28 <= iVar5; local_28 = local_28 + 1) {
      dVar20 = (((double)local_28 + _DAT_00896ca0) - dVar13) / dVar19;
      dVar20 = dVar20 * dVar20;
      if (dVar20 < DAT_00896c98) {
        for (iVar10 = iVar3; iVar10 <= iVar6; iVar10 = iVar10 + 1) {
          dVar16 = (((double)iVar10 + _DAT_00896ca0) - dVar14) / dVar19;
          dVar16 = dVar16 * dVar16 + dVar20;
          if (dVar16 < DAT_00896c98) {
            for (iVar8 = iVar4; iVar8 <= iVar7; iVar8 = iVar8 + 1) {
              dVar18 = (((double)iVar8 + _DAT_00896ca0) - dVar17) / dVar19;
              if (dVar18 * dVar18 + dVar16 < DAT_00896c98) {
                dVar15 = (double)CONCAT44(iVar10,local_28);
                FUN_0050b39c(local_28,iVar10,iVar8,uVar24,*(undefined4 *)(param_1 + 4));
              }
            }
          }
        }
      }
    }
  }
  return CONCAT31((int3)((uint)iVar3 >> 8),1);
}



/* vtable 0090228c slot 3 address 007748ec */

/* ADDRESS: 007748ec NAME: FUN_007748ec */

void FUN_007748ec(void)

{
  return;
}



/* vtable 0090228c slot 4 address 007748e4 */

/* ADDRESS: 007748e4 NAME: FUN_007748e4 */

void __fastcall FUN_007748e4(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x007748e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}


