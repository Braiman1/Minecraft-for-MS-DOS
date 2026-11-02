/* Candidate RTTI class: ModelCreeper
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fe234 slot 0 address 004a71f0 */

/* ADDRESS: 004a71f0 NAME: FUN_004a71f0 */

void __fastcall FUN_004a71f0(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[3];
  *param_1 = &PTR_FUN_008fe234;
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
  return;
}



/* vtable 008fe234 slot 1 address 004a72da */

/* ADDRESS: 004a72da NAME: FUN_004a72da */

void __fastcall FUN_004a72da(void *param_1)

{
  FUN_004a71f0();
  free(param_1);
  return;
}



/* vtable 008fe234 slot 2 address 004a72fe */

/* ADDRESS: 004a72fe NAME: FUN_004a72fe */

void __thiscall
FUN_004a72fe(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  (**(code **)(*param_1 + 0xc))(param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_004a90f2(param_7);
  FUN_004a90f2(param_7);
  FUN_004a90f2(param_7);
  FUN_004a90f2(param_7);
  FUN_004a90f2(param_7);
  FUN_004a90f2(param_7);
  return;
}



/* vtable 008fe234 slot 3 address 004a739e */

/* ADDRESS: 004a739e NAME: FUN_004a739e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004a739e(int param_1,float param_2,float param_3,undefined4 param_4,float param_5,float param_6)

{
  int iVar1;
  float10 fVar2;
  float fVar3;
  
  fVar3 = DAT_0088f798;
  iVar1 = *(int *)(param_1 + 0xc);
  *(float *)(iVar1 + 0x20) = param_5 / DAT_0088f798;
  *(float *)(iVar1 + 0x1c) = param_6 / fVar3;
  param_2 = DAT_0088f79c * param_2;
  fVar2 = (float10)FUN_004a3d60(param_2);
  fVar3 = param_2 + _DAT_0088f7a4;
  *(float *)(*(int *)(param_1 + 0x18) + 0x1c) = DAT_0088f7a0 * (float)fVar2 * param_3;
  fVar2 = (float10)FUN_004a3d60(fVar3);
  *(float *)(*(int *)(param_1 + 0x1c) + 0x1c) = DAT_0088f7a0 * (float)fVar2 * param_3;
  fVar2 = (float10)FUN_004a3d60(fVar3);
  *(float *)(*(int *)(param_1 + 0x20) + 0x1c) = DAT_0088f7a0 * (float)fVar2 * param_3;
  fVar2 = (float10)FUN_004a3d60(param_2);
  *(float *)(*(int *)(param_1 + 0x24) + 0x1c) = DAT_0088f7a0 * (float)fVar2 * param_3;
  return;
}



/* vtable 008fe234 slot 4 address 004a53d0 */

/* ADDRESS: 004a53d0 NAME: FUN_004a53d0 */

void FUN_004a53d0(void)

{
  return;
}


