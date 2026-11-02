/* Candidate RTTI class: ModelChicken
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fe218 slot 0 address 004a651c */

/* ADDRESS: 004a651c NAME: FUN_004a651c */

void __fastcall FUN_004a651c(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[3];
  *param_1 = &PTR_FUN_008fe218;
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
  return;
}



/* vtable 008fe218 slot 1 address 004a6624 */

/* ADDRESS: 004a6624 NAME: FUN_004a6624 */

void __fastcall FUN_004a6624(void *param_1)

{
  FUN_004a651c();
  free(param_1);
  return;
}



/* vtable 008fe218 slot 2 address 004a6648 */

/* ADDRESS: 004a6648 NAME: FUN_004a6648 */

void __thiscall
FUN_004a6648(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
  return;
}



/* vtable 008fe218 slot 3 address 004a6700 */

/* ADDRESS: 004a6700 NAME: FUN_004a6700 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004a6700(int param_1,float param_2,float param_3,uint param_4,float param_5,float param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  uint uVar5;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 0x24);
  param_5 = param_5 / DAT_0088f750;
  param_6 = param_6 / DAT_0088f750;
  *(float *)(iVar1 + 0x20) = param_5;
  uVar5 = (uint)param_6 ^ _DAT_0088f760;
  *(uint *)(iVar1 + 0x1c) = uVar5;
  *(float *)(iVar2 + 0x20) = param_5;
  *(uint *)(iVar2 + 0x1c) = uVar5;
  iVar2 = *(int *)(param_1 + 0x28);
  *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
  iVar3 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(iVar2 + 0x20) = *(undefined4 *)(iVar1 + 0x20);
  param_2 = DAT_0088f770 * param_2;
  *(undefined4 *)(iVar3 + 0x1c) = 0x3fc90fd8;
  fVar4 = (float10)FUN_004a3d60(param_2);
  param_2 = param_2 + _DAT_0088f778;
  *(float *)(*(int *)(param_1 + 0x14) + 0x1c) = DAT_0088f774 * (float)fVar4 * param_3;
  fVar4 = (float10)FUN_004a3d60(param_2);
  *(float *)(*(int *)(param_1 + 0x18) + 0x1c) = DAT_0088f774 * (float)fVar4 * param_3;
  uVar5 = param_4 ^ _DAT_0088f760;
  *(uint *)(*(int *)(param_1 + 0x1c) + 0x24) = param_4;
  *(uint *)(*(int *)(param_1 + 0x20) + 0x24) = uVar5;
  return;
}



/* vtable 008fe218 slot 4 address 004a53d0 */

/* ADDRESS: 004a53d0 NAME: FUN_004a53d0 */

void FUN_004a53d0(void)

{
  return;
}


