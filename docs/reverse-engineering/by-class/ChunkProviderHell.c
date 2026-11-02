/* Candidate RTTI class: ChunkProviderHell
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00902e50 slot 0 address 0043a3dc */

/* ADDRESS: 0043a3dc NAME: FUN_0043a3dc */

void __fastcall FUN_0043a3dc(int param_1)

{
  if (*(void **)(param_1 + 0xe0) != (void *)0x0) {
    free(*(void **)(param_1 + 0xe0));
  }
  FUN_007f03b4();
  FUN_007f03b4();
  FUN_007f03b4();
  FUN_007f03b4();
  FUN_007f03b4();
  FUN_007f03b4();
  FUN_007f03b4();
  FUN_007f03b4();
  FUN_007f03b4();
  FUN_0077624c();
  FUN_0077624c();
  FUN_0077624c();
  FUN_0077624c();
  FUN_0077624c();
  FUN_0077624c();
  FUN_0077624c();
  return;
}



/* vtable 00902e50 slot 1 address 0043a4a6 */

/* ADDRESS: 0043a4a6 NAME: FUN_0043a4a6 */

void __fastcall FUN_0043a4a6(void *param_1)

{
  FUN_0043a3dc();
  free(param_1);
  return;
}



/* vtable 00902e50 slot 2 address 00439ece */

/* ADDRESS: 00439ece NAME: FUN_00439ece */

undefined1 FUN_00439ece(void)

{
  return 1;
}



/* vtable 00902e50 slot 3 address 0043b23e */

/* ADDRESS: 0043b23e NAME: FUN_0043b23e */

undefined4 __thiscall FUN_0043b23e(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  
  uVar1 = (uint)((ulonglong)param_2 * 0x9939f508);
  uVar2 = (uint)((ulonglong)param_3 * 0xf1565bd5);
  uVar3 = FUN_0040e684(uVar2 + uVar1,
                       (int)((ulonglong)param_3 * 0xf1565bd5 >> 0x20) +
                       ((int)param_3 >> 0x1f) * -0xea9a42b + param_3 * 0x1e +
                       (int)((ulonglong)param_2 * 0x9939f508 >> 0x20) +
                       ((int)param_2 >> 0x1f) * -0x66c60af8 + param_2 * 0x4f +
                       (uint)CARRY4(uVar2,uVar1));
  puVar4 = (undefined4 *)FUN_00846710(0x8000,uVar3);
  puVar6 = puVar4;
  for (iVar5 = 0x2000; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  FUN_0043aff8(param_2,param_3,puVar4);
  FUN_0043a4ca(param_2,param_3,puVar4);
  (**(code **)**(undefined4 **)(param_1 + 0xe0))
            (param_1,*(undefined4 *)(param_1 + 0xac),param_2,param_3,puVar4);
  uVar3 = FUN_00846710(0x210);
  puStack_28 = (undefined4 *)FUN_00846710(0x8000);
  puStack_24 = puStack_28 + 0x2000;
  puVar6 = puStack_28;
  for (iVar5 = 0x2000; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar6 = puVar6 + 1;
  }
  puStack_20 = puStack_24;
  FUN_0043291e(*(undefined4 *)(param_1 + 0xac),&puStack_28,param_2,param_3);
  FUN_007f0234();
  FUN_007f0234();
  return uVar3;
}



/* vtable 00902e50 slot 4 address 00439ec8 */

/* ADDRESS: 00439ec8 NAME: FUN_00439ec8 */

void __fastcall FUN_00439ec8(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00439eca. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}



/* vtable 00902e50 slot 5 address 00439ee2 */

/* ADDRESS: 00439ee2 NAME: FUN_00439ee2 */

void __thiscall FUN_00439ee2(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar7 = 8;
  DAT_00a07570 = 1;
  param_3 = param_3 * 0x10;
  param_4 = param_4 * 0x10;
  do {
    iVar1 = param_1 + 8;
    iVar2 = FUN_0040e7b8(0x10);
    iVar3 = FUN_0040e7b8(0x78);
    iVar4 = FUN_0040e7b8(0x10);
    FUN_005174a0(*(undefined4 *)(DAT_00a062f8 + 8));
    FUN_00517210(*(undefined4 *)(param_1 + 0xac),iVar1,param_3 + 8 + iVar2,iVar3 + 4,
                 param_4 + 8 + iVar4);
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = FUN_0040e7b8(10);
  iVar7 = FUN_0040e7b8(iVar7 + 1);
  for (iVar2 = 0; iVar2 < iVar7 + 1; iVar2 = iVar2 + 1) {
    iVar3 = FUN_0040e7b8(0x10);
    iVar4 = FUN_0040e7b8(0x78);
    iVar5 = FUN_0040e7b8(0x10);
    FUN_00516934(*(undefined4 *)(param_1 + 0xac),iVar1,param_3 + 8 + iVar3,iVar4 + 4,
                 param_4 + 8 + iVar5);
  }
  iVar7 = FUN_0040e7b8(10);
  iVar7 = FUN_0040e7b8(iVar7 + 1);
  for (iVar2 = 0; iVar2 < iVar7; iVar2 = iVar2 + 1) {
    iVar3 = FUN_0040e7b8(0x10);
    iVar4 = FUN_0040e7b8(0x78);
    iVar5 = FUN_0040e7b8(0x10);
    FUN_00516e10(*(undefined4 *)(param_1 + 0xac),iVar1,param_3 + 8 + iVar3,iVar4 + 4,
                 param_4 + 8 + iVar5);
  }
  iVar7 = 10;
  do {
    iVar2 = FUN_0040e7b8(0x10);
    uVar6 = FUN_0040e7b8(0x80);
    iVar3 = FUN_0040e7b8(0x10);
    FUN_00517010(*(undefined4 *)(param_1 + 0xac),iVar1,param_3 + 8 + iVar2,uVar6,param_4 + 8 + iVar3
                );
    iVar7 = iVar7 + -1;
  } while (iVar7 != 0);
  iVar7 = FUN_0040e7b8(1);
  if (iVar7 == 0) {
    iVar7 = FUN_0040e7b8(0x10);
    uVar6 = FUN_0040e7b8(0x80);
    iVar2 = FUN_0040e7b8(0x10);
    FUN_00516b20(*(undefined4 *)(DAT_00a06284 + 8));
    FUN_00516a0c(*(undefined4 *)(param_1 + 0xac),iVar1,param_3 + 8 + iVar7,uVar6,param_4 + 8 + iVar2
                );
  }
  iVar7 = FUN_0040e7b8(1);
  if (iVar7 == 0) {
    iVar7 = FUN_0040e7b8(0x10);
    uVar6 = FUN_0040e7b8(0x80);
    iVar2 = FUN_0040e7b8(0x10);
    FUN_00516b20(*(undefined4 *)(DAT_00a06280 + 8));
    FUN_00516a0c(*(undefined4 *)(param_1 + 0xac),iVar1,param_3 + 8 + iVar7,uVar6,param_4 + 8 + iVar2
                );
  }
  DAT_00a07570 = 0;
  return;
}



/* vtable 00902e50 slot 6 address 00439ed4 */

/* ADDRESS: 00439ed4 NAME: FUN_00439ed4 */

undefined1 FUN_00439ed4(void)

{
  return 1;
}



/* vtable 00902e50 slot 7 address 00439eda */

/* ADDRESS: 00439eda NAME: FUN_00439eda */

undefined4 FUN_00439eda(void)

{
  return 0;
}



/* vtable 00902e50 slot 8 address 00439ede */

/* ADDRESS: 00439ede NAME: FUN_00439ede */

undefined1 FUN_00439ede(void)

{
  return 1;
}



/* vtable 00902e50 slot 9 address 0043a29c */

/* ADDRESS: 0043a29c NAME: FUN_0043a29c */

int * __fastcall FUN_0043a29c(int *param_1)

{
  int iVar1;
  int aiStack_10 [2];
  
  *param_1 = (int)(param_1 + 2);
  aiStack_10[0] = 0x15;
  iVar1 = FUN_00822e70(aiStack_10,0);
  *param_1 = iVar1;
  param_1[2] = aiStack_10[0];
  FUN_008220b0(iVar1,"HellRandomLevelSource",0x15);
  param_1[1] = aiStack_10[0];
  *(undefined1 *)(*param_1 + aiStack_10[0]) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}



/* vtable 00902e50 slot 10 address 0077ca34 */

/* ADDRESS: 0077ca34 NAME: FUN_0077ca34 */

undefined4 FUN_0077ca34(void)

{
  return 0xffffffff;
}



/* vtable 00902e50 slot 11 address 00774350 */

/* ADDRESS: 00774350 NAME: FUN_00774350 */

void FUN_00774350(void)

{
  return;
}


