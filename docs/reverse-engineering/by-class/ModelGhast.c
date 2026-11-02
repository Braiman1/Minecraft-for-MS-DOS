/* Candidate RTTI class: ModelGhast
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fb46c slot 0 address 004a78cc */

/* ADDRESS: 004a78cc NAME: FUN_004a78cc */

void __fastcall FUN_004a78cc(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[3];
  *param_1 = &PTR_FUN_008fb46c;
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
  return;
}



/* vtable 008fb46c slot 1 address 004a7a10 */

/* ADDRESS: 004a7a10 NAME: FUN_004a7a10 */

void __fastcall FUN_004a7a10(void *param_1)

{
  FUN_004a78cc();
  free(param_1);
  return;
}



/* vtable 008fb46c slot 2 address 004a7a9a */

/* ADDRESS: 004a7a9a NAME: FUN_004a7a9a */

void __thiscall
FUN_004a7a9a(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  
  iVar1 = 0;
  (**(code **)(*param_1 + 0xc))(param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_004a90f2(param_7);
  do {
    iVar1 = iVar1 + 1;
    FUN_004a90f2(param_7);
  } while (iVar1 != 9);
  return;
}



/* vtable 008fb46c slot 3 address 004a7a34 */

/* ADDRESS: 004a7a34 NAME: FUN_004a7a34 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_004a7a34(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

{
  int iVar1;
  int iVar2;
  float10 fVar3;
  
  iVar2 = 0;
  param_4 = DAT_0088f7b0 * param_4;
  do {
    fVar3 = (float10)FUN_004a3d32((float)iVar2 + param_4);
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + 1;
    *(float *)(*(int *)(param_1 + 0x10 + iVar1) + 0x1c) =
         (float)fVar3 * _DAT_0088f7b4 + _DAT_0088f7b8;
  } while (iVar2 != 9);
  return;
}



/* vtable 008fb46c slot 4 address 004a53d0 */

/* ADDRESS: 004a53d0 NAME: FUN_004a53d0 */

void FUN_004a53d0(void)

{
  return;
}


