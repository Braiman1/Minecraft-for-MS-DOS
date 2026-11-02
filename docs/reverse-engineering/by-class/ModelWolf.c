/* Candidate RTTI class: ModelWolf
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00907808 slot 0 address 004ab2f8 */

/* ADDRESS: 004ab2f8 NAME: FUN_004ab2f8 */

void __fastcall FUN_004ab2f8(undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[3];
  *param_1 = &PTR_FUN_00907808;
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



/* vtable 00907808 slot 1 address 004ab45a */

/* ADDRESS: 004ab45a NAME: FUN_004ab45a */

void __fastcall FUN_004ab45a(void *param_1)

{
  FUN_004ab2f8();
  free(param_1);
  return;
}



/* vtable 00907808 slot 2 address 004ab47e */

/* ADDRESS: 004ab47e NAME: FUN_004ab47e */

void __thiscall
FUN_004ab47e(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  FUN_004a53cc(param_2,param_3,param_4,param_5,param_6,param_7);
  (**(code **)(*param_1 + 0xc))(param_2,param_3,param_4,param_5,param_6,param_7);
  FUN_004a932a(param_7);
  FUN_004a90f2(param_7);
  FUN_004a90f2(param_7);
  FUN_004a90f2(param_7);
  FUN_004a90f2(param_7);
  FUN_004a90f2(param_7);
  FUN_004a932a(param_7);
  FUN_004a932a(param_7);
  FUN_004a932a(param_7);
  FUN_004a932a(param_7);
  FUN_004a90f2(param_7);
  return;
}



/* vtable 00907808 slot 3 address 004aba22 */

/* ADDRESS: 004aba22 NAME: FUN_004aba22 */

void __thiscall
FUN_004aba22(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,float param_5,
            float param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  FUN_004a53cc(param_2,param_3,param_4,param_5,param_6,param_7);
  iVar3 = *(int *)(param_1 + 0xc);
  iVar4 = *(int *)(param_1 + 0x24);
  param_5 = param_5 / DAT_0088f8c8;
  param_6 = param_6 / DAT_0088f8c8;
  *(float *)(iVar3 + 0x20) = param_5;
  *(float *)(iVar3 + 0x1c) = param_6;
  *(float *)(iVar4 + 0x20) = param_5;
  *(float *)(iVar4 + 0x1c) = param_6;
  iVar4 = *(int *)(param_1 + 0x28);
  *(float *)(iVar4 + 0x20) = param_5;
  uVar1 = *(undefined4 *)(iVar3 + 0x1c);
  uVar2 = *(undefined4 *)(iVar3 + 0x20);
  iVar3 = *(int *)(param_1 + 0x30);
  *(undefined4 *)(iVar4 + 0x1c) = uVar1;
  iVar4 = *(int *)(param_1 + 0x2c);
  *(undefined4 *)(iVar4 + 0x20) = uVar2;
  *(undefined4 *)(iVar4 + 0x1c) = uVar1;
  *(undefined4 *)(iVar3 + 0x1c) = param_4;
  return;
}



/* vtable 00907808 slot 4 address 004ab59e */

/* ADDRESS: 004ab59e NAME: FUN_004ab59e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004ab59e(int param_1,int *param_2,float param_3,float param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  float10 fVar5;
  float10 fVar6;
  float10 extraout_ST0;
  float fVar7;
  
  cVar3 = FUN_0046cd24();
  if (cVar3 == '\0') {
    fVar5 = (float10)FUN_004a3d60(param_3 * _DAT_0088f8b8);
    *(float *)(*(int *)(param_1 + 0x30) + 0x20) = (float)fVar5 * DAT_0088f8bc * param_4;
  }
  else {
    *(undefined4 *)(*(int *)(param_1 + 0x30) + 0x20) = 0;
  }
  cVar3 = FUN_0046cc3c();
  if (cVar3 == '\0') {
    FUN_004a9064(0,0x41600000,0x40000000);
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c) = 0x3fc90fd8;
    FUN_004a9064(0xbf800000,0x41600000,0xc0400000);
    *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x1c) =
         *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c);
    FUN_004a9064(0xbf800000,0x41400000,0x41000000);
    FUN_004a9064(0xc0200000,0x41800000,0x40e00000);
    FUN_004a9064(0x3f000000,0x41800000,0x40e00000);
    FUN_004a9064(0xc0200000,0x41800000,0xc0800000);
    FUN_004a9064(0x3f000000,0x41800000,0xc0800000);
    param_3 = param_3 * _DAT_0088f8b8;
    fVar5 = (float10)FUN_004a3d60(param_3);
    fVar7 = param_3 + _DAT_0088f8c4;
    *(float *)(*(int *)(param_1 + 0x14) + 0x1c) = DAT_0088f8bc * (float)fVar5 * param_4;
    fVar5 = (float10)FUN_004a3d60(fVar7);
    *(float *)(*(int *)(param_1 + 0x18) + 0x1c) = DAT_0088f8bc * (float)fVar5 * param_4;
    fVar5 = (float10)FUN_004a3d60(fVar7);
    *(float *)(*(int *)(param_1 + 0x1c) + 0x1c) = DAT_0088f8bc * (float)fVar5 * param_4;
    fVar5 = (float10)FUN_004a3d60(param_3);
    *(float *)(*(int *)(param_1 + 0x20) + 0x1c) = DAT_0088f8bc * (float)fVar5 * param_4;
  }
  else {
    FUN_004a9064(0xbf800000,0x41800000,0xc0400000);
    iVar1 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(iVar1 + 0x1c) = 0x3fa0d97b;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    FUN_004a9064(0,0x41900000,0);
    *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x1c) = 0x3f490fdb;
    FUN_004a9064(0xbf800000,0x41a80000,0x40c00000);
    FUN_004a9064(0xc0200000,0x41b00000,0x40000000);
    *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1c) = 0x4096cbe4;
    FUN_004a9064(0x3f000000,0x41b00000,0x40000000);
    iVar1 = *(int *)(param_1 + 0x1c);
    *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x1c) = 0x4096cbe4;
    *(undefined4 *)(iVar1 + 0x1c) = 0x40b9fb78;
    FUN_004a9064(0xc01f5c29,0x41880000,0xc0800000);
    *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x1c) = 0x40b9fb78;
    FUN_004a9064(0x3f028f5c,0x41880000,0xc0800000);
  }
  fVar5 = (float10)FUN_0046c762(param_5);
  fVar6 = (float10)FUN_0046c6b6(param_5,0);
  fVar7 = (float)fVar5 + (float)fVar6;
  iVar1 = *(int *)(param_1 + 0x34);
  *(float *)(*(int *)(param_1 + 0xc) + 0x24) = fVar7;
  *(float *)(*(int *)(param_1 + 0x24) + 0x24) = fVar7;
  *(float *)(*(int *)(param_1 + 0x28) + 0x24) = fVar7;
  *(float *)(*(int *)(param_1 + 0x2c) + 0x24) = fVar7;
  fVar5 = (float10)FUN_0046c6b6(param_5,0xbda3d70a);
  *(float *)(iVar1 + 0x24) = (float)fVar5;
  iVar1 = *(int *)(param_1 + 0x10);
  fVar5 = (float10)FUN_0046c6b6(param_5,0xbe23d70a);
  iVar2 = *(int *)(param_1 + 0x30);
  *(float *)(iVar1 + 0x24) = (float)fVar5;
  uVar4 = FUN_0046c6b6(param_5,0xbe4ccccd);
  *(float *)(iVar2 + 0x24) = (float)extraout_ST0;
  cVar3 = FUN_0046c668(uVar4,uVar4);
  if (cVar3 != '\0') {
    fVar5 = (float10)(**(code **)(*param_2 + 0x50))(param_5);
    fVar6 = (float10)FUN_0046c670(param_5);
    fVar7 = (float)fVar5 * (float)fVar6;
    (*DAT_0145d314)(fVar7,fVar7,fVar7);
  }
  return;
}


