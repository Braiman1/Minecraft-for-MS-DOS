/* Candidate RTTI class: ModelSpider
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fca38 slot 0 address 004aa24c */

/* ADDRESS: 004aa24c NAME: FUN_004aa24c */

void __fastcall FUN_004aa24c(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[3];
  *param_1 = &PTR_FUN_008fca38;
  if (pvVar1 != (void *)0x0) {
    FUN_004a89a4();
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[4];
  if (pvVar1 != (void *)0x0) {
    FUN_004a89a4();
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[5];
  if (pvVar1 != (void *)0x0) {
    FUN_004a89a4();
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[6];
  if (pvVar1 != (void *)0x0) {
    FUN_004a89a4();
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[7];
  if (pvVar1 != (void *)0x0) {
    FUN_004a89a4();
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[8];
  if (pvVar1 != (void *)0x0) {
    FUN_004a89a4();
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[9];
  if (pvVar1 != (void *)0x0) {
    FUN_004a89a4();
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[10];
  if (pvVar1 != (void *)0x0) {
    FUN_004a89a4();
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[0xb];
  if (pvVar1 != (void *)0x0) {
    FUN_004a89a4();
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[0xc];
  if (pvVar1 != (void *)0x0) {
    FUN_004a89a4();
    free(pvVar1);
  }
  pvVar1 = (void *)param_1[0xd];
  if (pvVar1 != (void *)0x0) {
    FUN_004a89a4();
    free(pvVar1);
  }
  return;
}



/* vtable 008fca38 slot 1 address 004aa3ae */

/* ADDRESS: 004aa3ae NAME: FUN_004aa3ae */

void __fastcall FUN_004aa3ae(void *param_1)

{
  FUN_004aa24c();
  free(param_1);
  return;
}



/* vtable 008fca38 slot 2 address 004aa3d2 */

/* ADDRESS: 004aa3d2 NAME: FUN_004aa3d2 */

void __thiscall
FUN_004aa3d2(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  (**(code **)(*param_1 + 0xc))(param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_004a90f2(param_7);
  FUN_004a90f2(param_7);
  FUN_004a90f2(param_7);
  FUN_004a90f2(param_7);
  FUN_004a90f2(param_7);
  FUN_004a90f2(param_7);
  FUN_004a90f2(param_7);
  FUN_004a90f2(param_7);
  FUN_004a90f2(param_7);
  FUN_004a90f2(param_7);
  FUN_004a90f2(param_7);
  return;
}



/* vtable 008fca38 slot 3 address 004aa4ae */

/* ADDRESS: 004aa4ae NAME: FUN_004aa4ae */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004aa4ae(int param_1,float param_2,float param_3,undefined4 param_4,float param_5,float param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  
  uVar12 = DAT_0088f840;
  uVar11 = DAT_0088f83c;
  fVar18 = DAT_0088f830;
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x20);
  *(float *)(iVar1 + 0x20) = param_5 / DAT_0088f830;
  uVar9 = DAT_0088f834;
  *(float *)(iVar1 + 0x1c) = param_6 / fVar18;
  uVar10 = DAT_0088f838;
  iVar1 = *(int *)(param_1 + 0x18);
  *(undefined4 *)(iVar1 + 0x24) = uVar9;
  iVar4 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(iVar2 + 0x24) = uVar10;
  *(undefined4 *)(iVar3 + 0x24) = uVar11;
  *(undefined4 *)(iVar4 + 0x24) = uVar12;
  iVar5 = *(int *)(param_1 + 0x28);
  iVar6 = *(int *)(param_1 + 0x2c);
  iVar7 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(iVar5 + 0x24) = uVar11;
  uVar13 = DAT_0088f848;
  iVar8 = *(int *)(param_1 + 0x34);
  *(undefined4 *)(iVar6 + 0x24) = uVar12;
  uVar11 = DAT_0088f844;
  *(undefined4 *)(iVar7 + 0x24) = uVar9;
  *(undefined4 *)(iVar8 + 0x24) = uVar10;
  *(undefined4 *)(iVar1 + 0x20) = uVar10;
  *(undefined4 *)(iVar2 + 0x20) = uVar9;
  *(undefined4 *)(iVar3 + 0x20) = uVar11;
  *(undefined4 *)(iVar4 + 0x20) = uVar13;
  *(undefined4 *)(iVar5 + 0x20) = uVar13;
  *(undefined4 *)(iVar6 + 0x20) = uVar11;
  *(undefined4 *)(iVar7 + 0x20) = uVar9;
  *(undefined4 *)(iVar8 + 0x20) = uVar10;
  param_2 = DAT_0088f84c * param_2;
  fVar21 = param_2 + param_2;
  fVar14 = (float10)FUN_004a3d60(fVar21 + 0.0);
  fVar20 = (float)((uint)(DAT_0088f850 * (float)fVar14) ^ _DAT_0088f860) * param_3;
  fVar14 = (float10)FUN_004a3d60(fVar21 + _DAT_0088f870);
  fVar19 = (float)((uint)(DAT_0088f850 * (float)fVar14) ^ _DAT_0088f860) * param_3;
  fVar14 = (float10)FUN_004a3d60(fVar21 + _DAT_0088f874);
  fVar18 = (float)((uint)(DAT_0088f850 * (float)fVar14) ^ _DAT_0088f860) * param_3;
  fVar14 = (float10)FUN_004a3d60(fVar21 + _DAT_0088f878);
  fVar21 = (float)((uint)(DAT_0088f850 * (float)fVar14) ^ _DAT_0088f860) * param_3;
  fVar14 = (float10)FUN_004a3d32(param_2 + 0.0);
  fVar14 = (float10)FUN_004a3e34(DAT_0088f850 * (float)fVar14);
  fVar15 = (float10)FUN_004a3d32(param_2 + _DAT_0088f870);
  fVar15 = (float10)FUN_004a3e34(DAT_0088f850 * (float)fVar15);
  fVar16 = (float10)FUN_004a3d32(param_2 + _DAT_0088f874);
  fVar16 = (float10)FUN_004a3e34(DAT_0088f850 * (float)fVar16);
  fVar17 = (float10)FUN_004a3d32(param_2 + _DAT_0088f878);
  fVar17 = (float10)FUN_004a3e34(DAT_0088f850 * (float)fVar17);
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x24);
  iVar4 = *(int *)(param_1 + 0x28);
  iVar5 = *(int *)(param_1 + 0x2c);
  *(float *)(iVar1 + 0x20) = *(float *)(iVar1 + 0x20) + fVar20;
  iVar6 = *(int *)(param_1 + 0x20);
  *(float *)(iVar2 + 0x20) = *(float *)(iVar2 + 0x20) - fVar20;
  *(float *)(iVar6 + 0x20) = *(float *)(iVar6 + 0x20) + fVar19;
  iVar7 = *(int *)(param_1 + 0x30);
  iVar8 = *(int *)(param_1 + 0x34);
  *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) - fVar19;
  *(float *)(iVar4 + 0x20) = *(float *)(iVar4 + 0x20) + fVar18;
  *(float *)(iVar5 + 0x20) = *(float *)(iVar5 + 0x20) - fVar18;
  *(float *)(iVar7 + 0x20) = fVar21 + *(float *)(iVar7 + 0x20);
  *(float *)(iVar8 + 0x20) = *(float *)(iVar8 + 0x20) - fVar21;
  *(float *)(iVar1 + 0x24) = *(float *)(iVar1 + 0x24) + (float)fVar14 * param_3;
  *(float *)(iVar2 + 0x24) = *(float *)(iVar2 + 0x24) - (float)fVar14 * param_3;
  *(float *)(iVar6 + 0x24) = *(float *)(iVar6 + 0x24) + (float)fVar15 * param_3;
  *(float *)(iVar3 + 0x24) = *(float *)(iVar3 + 0x24) - (float)fVar15 * param_3;
  *(float *)(iVar4 + 0x24) = *(float *)(iVar4 + 0x24) + (float)fVar16 * param_3;
  *(float *)(iVar5 + 0x24) = *(float *)(iVar5 + 0x24) - (float)fVar16 * param_3;
  *(float *)(iVar7 + 0x24) = (float)fVar17 * param_3 + *(float *)(iVar7 + 0x24);
  *(float *)(iVar8 + 0x24) = *(float *)(iVar8 + 0x24) - (float)fVar17 * param_3;
  return;
}



/* vtable 008fca38 slot 4 address 004a53d0 */

/* ADDRESS: 004a53d0 NAME: FUN_004a53d0 */

void FUN_004a53d0(void)

{
  return;
}


