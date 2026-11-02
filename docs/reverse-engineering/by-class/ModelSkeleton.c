/* Candidate RTTI class: ModelSkeleton
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008ff3b8 slot 0 address 00773dc0 */

/* ADDRESS: 00773dc0 NAME: thunk_FUN_00773dc8 */

void thunk_FUN_00773dc8(void)

{
  FUN_00773dc8();
  return;
}



/* vtable 008ff3b8 slot 1 address 00773d9c */

/* ADDRESS: 00773d9c NAME: FUN_00773d9c */

void __fastcall FUN_00773d9c(void *param_1)

{
  FUN_00773dc8();
  free(param_1);
  return;
}



/* vtable 008ff3b8 slot 2 address 004a5532 */

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



/* vtable 008ff3b8 slot 3 address 004ac112 */

/* ADDRESS: 004ac112 NAME: FUN_004ac112 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004ac112(int param_1,undefined4 param_2,undefined4 param_3,float param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  FUN_004a55de(param_2,param_3,param_4,param_5,param_6,param_7);
  fVar3 = (float10)FUN_004a3d32(DAT_0088f8d0 * *(float *)(param_1 + 4));
  fVar5 = DAT_0088f8d4 - *(float *)(param_1 + 4);
  fVar4 = (float10)FUN_004a3d32((DAT_0088f8d4 - fVar5 * fVar5) * DAT_0088f8d0);
  fVar5 = DAT_0088f8dc;
  iVar1 = *(int *)(param_1 + 0x18);
  fVar6 = (float)fVar3 * _DAT_0088f8d8;
  iVar2 = *(int *)(param_1 + 0x1c);
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  fVar7 = (float)fVar4 * _DAT_0088f8f8;
  fVar5 = fVar5 - fVar6;
  *(uint *)(iVar1 + 0x20) = (uint)fVar5 ^ _DAT_0088f8e0;
  fVar6 = DAT_0088f8f0;
  *(float *)(iVar2 + 0x20) = fVar5;
  fVar5 = (float)fVar3 * _DAT_0088f8f4;
  *(float *)(iVar2 + 0x1c) = fVar6;
  fVar5 = fVar5 - fVar7;
  *(float *)(iVar1 + 0x1c) = fVar6 - fVar5;
  *(float *)(iVar2 + 0x1c) = *(float *)(iVar2 + 0x1c) - fVar5;
  fVar5 = param_4 * _DAT_0088f8fc;
  fVar3 = (float10)FUN_004a3d60(fVar5);
  *(float *)(*(int *)(param_1 + 0x18) + 0x24) =
       DAT_0088f900 * (float)fVar3 + DAT_0088f900 + *(float *)(*(int *)(param_1 + 0x18) + 0x24);
  fVar3 = (float10)FUN_004a3d60(fVar5);
  param_4 = param_4 * _DAT_0088f904;
  *(float *)(*(int *)(param_1 + 0x1c) + 0x24) =
       *(float *)(*(int *)(param_1 + 0x1c) + 0x24) - (DAT_0088f900 * (float)fVar3 + DAT_0088f900);
  fVar3 = (float10)FUN_004a3d32(param_4);
  *(float *)(*(int *)(param_1 + 0x18) + 0x1c) =
       DAT_0088f900 * (float)fVar3 + *(float *)(*(int *)(param_1 + 0x18) + 0x1c);
  fVar3 = (float10)FUN_004a3d32(param_4);
  *(float *)(*(int *)(param_1 + 0x1c) + 0x1c) =
       *(float *)(*(int *)(param_1 + 0x1c) + 0x1c) - DAT_0088f900 * (float)fVar3;
  return;
}



/* vtable 008ff3b8 slot 4 address 004a53d0 */

/* ADDRESS: 004a53d0 NAME: FUN_004a53d0 */

void FUN_004a53d0(void)

{
  return;
}


