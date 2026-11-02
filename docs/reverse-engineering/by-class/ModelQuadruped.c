/* Candidate RTTI class: ModelQuadruped
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00901174 slot 0 address 004a8244 */

/* ADDRESS: 004a8244 NAME: FUN_004a8244 */

void __fastcall FUN_004a8244(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[3];
  *param_1 = &PTR_FUN_00901174;
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
  return;
}



/* vtable 00901174 slot 1 address 004a8310 */

/* ADDRESS: 004a8310 NAME: FUN_004a8310 */

void __fastcall FUN_004a8310(void *param_1)

{
  FUN_004a8244();
  free(param_1);
  return;
}



/* vtable 00901174 slot 2 address 004a8334 */

/* ADDRESS: 004a8334 NAME: FUN_004a8334 */

void __thiscall
FUN_004a8334(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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



/* vtable 00901174 slot 3 address 004a83d4 */

/* ADDRESS: 004a83d4 NAME: FUN_004a83d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004a83d4(int param_1,float param_2,float param_3,undefined4 param_4,float param_5,float param_6)

{
  int iVar1;
  float10 fVar2;
  float fVar3;
  
  fVar3 = DAT_0088f7e4;
  iVar1 = *(int *)(param_1 + 0xc);
  *(float *)(iVar1 + 0x1c) = param_6 / DAT_0088f7e4;
  *(float *)(iVar1 + 0x20) = param_5 / fVar3;
  param_2 = DAT_0088f7e8 * param_2;
  *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c) = 0x3fc90fd8;
  fVar2 = (float10)FUN_004a3d60(param_2);
  fVar3 = param_2 + _DAT_0088f7f0;
  *(float *)(*(int *)(param_1 + 0x14) + 0x1c) = DAT_0088f7ec * (float)fVar2 * param_3;
  fVar2 = (float10)FUN_004a3d60(fVar3);
  *(float *)(*(int *)(param_1 + 0x18) + 0x1c) = DAT_0088f7ec * (float)fVar2 * param_3;
  fVar2 = (float10)FUN_004a3d60(fVar3);
  *(float *)(*(int *)(param_1 + 0x1c) + 0x1c) = DAT_0088f7ec * (float)fVar2 * param_3;
  fVar2 = (float10)FUN_004a3d60(param_2);
  *(float *)(*(int *)(param_1 + 0x20) + 0x1c) = DAT_0088f7ec * (float)fVar2 * param_3;
  return;
}



/* vtable 00901174 slot 4 address 004a53d0 */

/* ADDRESS: 004a53d0 NAME: FUN_004a53d0 */

void FUN_004a53d0(void)

{
  return;
}


