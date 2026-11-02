/* Candidate RTTI class: ModelBiped
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fb450 slot 0 address 004a53e8 */

/* ADDRESS: 004a53e8 NAME: FUN_004a53e8 */

void __fastcall FUN_004a53e8(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[3];
  *param_1 = &PTR_FUN_008fb450;
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
  return;
}



/* vtable 008fb450 slot 1 address 004a550e */

/* ADDRESS: 004a550e NAME: FUN_004a550e */

void __fastcall FUN_004a550e(void *param_1)

{
  FUN_004a53e8();
  free(param_1);
  return;
}



/* vtable 008fb450 slot 2 address 004a5532 */

/* ADDRESS: 004a5532 NAME: FUN_004a5532 */

void __thiscall
FUN_004a5532(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  return;
}



/* vtable 008fb450 slot 3 address 004a55de */

/* ADDRESS: 004a55de NAME: FUN_004a55de */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004a55de(int param_1,float param_2,float param_3,float param_4,float param_5,float param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float fVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  
  iVar1 = *(int *)(param_1 + 0xc);
  param_5 = param_5 / DAT_0088f6d0;
  param_6 = param_6 / DAT_0088f6d0;
  *(float *)(iVar1 + 0x20) = param_5;
  *(float *)(iVar1 + 0x1c) = param_6;
  iVar1 = *(int *)(param_1 + 0x10);
  *(float *)(iVar1 + 0x1c) = param_6;
  param_2 = DAT_0088f6d4 * param_2;
  *(float *)(iVar1 + 0x20) = param_5;
  fVar9 = DAT_0088f6d8 + param_2;
  fVar5 = (float10)FUN_004a3d60(fVar9);
  *(float *)(*(int *)(param_1 + 0x18) + 0x1c) =
       ((float)fVar5 + (float)fVar5) * param_3 * DAT_0088f6dc;
  fVar5 = (float10)FUN_004a3d60(param_2);
  iVar1 = *(int *)(param_1 + 0x1c);
  iVar2 = *(int *)(param_1 + 0x18);
  *(float *)(iVar1 + 0x1c) = ((float)fVar5 + (float)fVar5) * param_3 * DAT_0088f6dc;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  fVar5 = (float10)FUN_004a3d60(param_2);
  *(float *)(*(int *)(param_1 + 0x20) + 0x1c) = DAT_0088f6e0 * (float)fVar5 * param_3;
  fVar5 = (float10)FUN_004a3d60(fVar9);
  iVar1 = *(int *)(param_1 + 0x24);
  iVar2 = *(int *)(param_1 + 0x20);
  iVar3 = *(int *)(param_1 + 0x18);
  iVar4 = *(int *)(param_1 + 0x1c);
  *(float *)(iVar1 + 0x1c) = DAT_0088f6e0 * (float)fVar5 * param_3;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  fVar9 = DAT_0088f6e4;
  if (*(char *)(param_1 + 8) != '\0') {
    *(float *)(iVar3 + 0x1c) = *(float *)(iVar3 + 0x1c) - DAT_0088f6e4;
    *(float *)(iVar4 + 0x1c) = *(float *)(iVar4 + 0x1c) - fVar9;
    uVar10 = DAT_0088f6e8;
    *(undefined4 *)(iVar2 + 0x1c) = DAT_0088f6e8;
    *(undefined4 *)(iVar1 + 0x1c) = uVar10;
    *(undefined4 *)(iVar2 + 0x20) = 0x3ea0d97d;
    *(undefined4 *)(iVar1 + 0x20) = 0xbea0d97d;
  }
  if (*(char *)(param_1 + 0x30) != '\0') {
    *(float *)(iVar4 + 0x1c) = DAT_0088f6dc * *(float *)(iVar4 + 0x1c) - _DAT_0088f6ec;
  }
  if (*(char *)(param_1 + 0x31) != '\0') {
    *(float *)(iVar3 + 0x1c) = DAT_0088f6dc * *(float *)(iVar3 + 0x1c) - _DAT_0088f6ec;
  }
  fVar7 = _DAT_0088f6f0;
  fVar9 = *(float *)(param_1 + 4);
  *(undefined4 *)(iVar3 + 0x20) = 0;
  *(undefined4 *)(iVar4 + 0x20) = 0;
  if (fVar7 < fVar9) {
    fVar5 = (float10)FUN_004a3d96(fVar9);
    fVar5 = (float10)FUN_004a3d32(DAT_0088f6d8 * (float)fVar5 + DAT_0088f6d8 * (float)fVar5);
    fVar9 = (float)fVar5 * _DAT_0088f6f4;
    *(float *)(*(int *)(param_1 + 0x14) + 0x20) = fVar9;
    fVar5 = (float10)FUN_004a3d32(fVar9);
    *(float *)(*(int *)(param_1 + 0x18) + 0x18) = DAT_0088f6f8 * (float)fVar5;
    fVar5 = (float10)FUN_004a3d60(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x20));
    *(float *)(*(int *)(param_1 + 0x18) + 0x10) =
         (float)((uint)(float)fVar5 ^ _DAT_0088f700) * DAT_0088f6f8;
    fVar5 = (float10)FUN_004a3d32(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x20));
    *(float *)(*(int *)(param_1 + 0x1c) + 0x18) =
         (float)((uint)(float)fVar5 ^ _DAT_0088f700) * DAT_0088f6f8;
    fVar5 = (float10)FUN_004a3d60(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x20));
    fVar9 = DAT_0088f6c8;
    iVar1 = *(int *)(param_1 + 0x1c);
    iVar2 = *(int *)(param_1 + 0x14);
    iVar3 = *(int *)(param_1 + 0x18);
    *(float *)(iVar1 + 0x10) = DAT_0088f6f8 * (float)fVar5;
    *(float *)(iVar3 + 0x20) = *(float *)(iVar3 + 0x20) + *(float *)(iVar2 + 0x20);
    *(float *)(iVar1 + 0x20) = *(float *)(iVar1 + 0x20) + *(float *)(iVar2 + 0x20);
    *(float *)(iVar1 + 0x1c) = *(float *)(iVar1 + 0x1c) + *(float *)(iVar2 + 0x20);
    fVar7 = fVar9 - *(float *)(param_1 + 4);
    fVar7 = fVar7 * fVar7;
    fVar5 = (float10)FUN_004a3d32((fVar9 - fVar7 * fVar7) * DAT_0088f6d8);
    fVar6 = (float10)FUN_004a3d32(DAT_0088f6d8 * *(float *)(param_1 + 4));
    iVar1 = *(int *)(param_1 + 0x18);
    fVar9 = *(float *)(*(int *)(param_1 + 0x14) + 0x20);
    *(float *)(iVar1 + 0x1c) =
         *(float *)(iVar1 + 0x1c) -
         (float)((double)((float)((uint)(*(float *)(*(int *)(param_1 + 0xc) + 0x1c) - _DAT_0088f710)
                                 ^ _DAT_0088f700) * (float)fVar6 * _DAT_0088f714) +
                (double)(float)fVar5 * _DAT_0088f718);
    *(float *)(iVar1 + 0x20) = fVar9 + fVar9 + *(float *)(iVar1 + 0x20);
    fVar5 = (float10)FUN_004a3d32(DAT_0088f6d8 * *(float *)(param_1 + 4));
    *(float *)(*(int *)(param_1 + 0x18) + 0x24) = (float)fVar5 * _DAT_0088f720;
  }
  fVar9 = DAT_0088f724;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x24);
  iVar3 = *(int *)(param_1 + 0xc);
  if (*(char *)(param_1 + 0x32) == '\0') {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1c) = 0;
    uVar10 = 0;
    fVar7 = 0.0;
    uVar8 = DAT_0088f6cc;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1c) = 0x3f000000;
    fVar7 = DAT_0088f6c8;
    *(float *)(*(int *)(param_1 + 0x18) + 0x1c) =
         *(float *)(*(int *)(param_1 + 0x18) + 0x1c) + fVar9;
    uVar10 = DAT_0088f6c0;
    *(float *)(*(int *)(param_1 + 0x1c) + 0x1c) =
         fVar9 + *(float *)(*(int *)(param_1 + 0x1c) + 0x1c);
    uVar8 = DAT_0088f6c4;
  }
  *(undefined4 *)(iVar1 + 0x18) = uVar10;
  *(undefined4 *)(iVar2 + 0x18) = uVar10;
  fVar9 = param_4 * _DAT_0088f728;
  *(undefined4 *)(iVar1 + 0x14) = uVar8;
  *(undefined4 *)(iVar2 + 0x14) = uVar8;
  *(float *)(iVar3 + 0x14) = fVar7;
  fVar5 = (float10)FUN_004a3d60(fVar9);
  *(float *)(*(int *)(param_1 + 0x18) + 0x24) =
       DAT_0088f72c * (float)fVar5 + DAT_0088f72c + *(float *)(*(int *)(param_1 + 0x18) + 0x24);
  fVar5 = (float10)FUN_004a3d60(fVar9);
  param_4 = param_4 * _DAT_0088f730;
  *(float *)(*(int *)(param_1 + 0x1c) + 0x24) =
       *(float *)(*(int *)(param_1 + 0x1c) + 0x24) - (DAT_0088f72c * (float)fVar5 + DAT_0088f72c);
  fVar5 = (float10)FUN_004a3d32(param_4);
  *(float *)(*(int *)(param_1 + 0x18) + 0x1c) =
       DAT_0088f72c * (float)fVar5 + *(float *)(*(int *)(param_1 + 0x18) + 0x1c);
  fVar5 = (float10)FUN_004a3d32(param_4);
  *(float *)(*(int *)(param_1 + 0x1c) + 0x1c) =
       *(float *)(*(int *)(param_1 + 0x1c) + 0x1c) - DAT_0088f72c * (float)fVar5;
  return;
}



/* vtable 008fb450 slot 4 address 004a53d0 */

/* ADDRESS: 004a53d0 NAME: FUN_004a53d0 */

void FUN_004a53d0(void)

{
  return;
}


