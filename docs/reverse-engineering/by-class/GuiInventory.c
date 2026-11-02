/* Candidate RTTI class: GuiInventory
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fdfb8 slot 0 address 0077338c */

/* ADDRESS: 0077338c NAME: thunk_FUN_00773394 */

void thunk_FUN_00773394(void)

{
  FUN_00773394();
  return;
}



/* vtable 008fdfb8 slot 1 address 00773368 */

/* ADDRESS: 00773368 NAME: FUN_00773368 */

void __fastcall FUN_00773368(void *param_1)

{
  FUN_00773394();
  free(param_1);
  return;
}



/* vtable 008fdfb8 slot 2 address 004818e8 */

/* ADDRESS: 004818e8 NAME: FUN_004818e8 */

void __thiscall FUN_004818e8(int param_1,int param_2,int param_3,undefined4 param_4)

{
  FUN_0047a1ba(param_2,param_3,param_4);
  *(float *)(param_1 + 0x40) = (float)param_2;
  *(float *)(param_1 + 0x44) = (float)param_3;
  return;
}



/* vtable 008fdfb8 slot 3 address 00479ec2 */

/* ADDRESS: 00479ec2 NAME: FUN_00479ec2 */

void __thiscall FUN_00479ec2(int param_1,undefined4 param_2,int param_3)

{
  if ((param_3 == 1) ||
     (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x94) + 0x4c) + 0x18) == param_3)) {
    (**(code **)(**(int **)(*(int *)(param_1 + 8) + 0x18) + 0x164))();
  }
  return;
}



/* vtable 008fdfb8 slot 4 address 0047a674 */

/* ADDRESS: 0047a674 NAME: FUN_0047a674 */

void __thiscall FUN_0047a674(int param_1,int param_2,int param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  
  FUN_0048536a(param_2,param_3,param_4);
  if (1 < param_4) {
    return;
  }
  iVar2 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x30)) / 2;
  iVar4 = *(int *)(param_1 + 0x34);
  iVar3 = (*(int *)(param_1 + 0x10) - iVar4) / 2;
  if (param_2 < iVar2 || param_3 < iVar3) {
    iVar4 = -999;
    cVar1 = '\0';
  }
  else {
    if (param_2 < *(int *)(param_1 + 0x30) + iVar2) {
      uVar5 = FUN_0047a140(param_2,param_3);
      uVar6 = (undefined4)((ulonglong)uVar5 >> 0x20);
      cVar1 = '\0';
      iVar4 = iVar4 + iVar3;
      if ((int)uVar5 == 0) {
        if (param_3 < iVar4) {
          return;
        }
      }
      else if (param_3 < iVar4) {
        iVar4 = *(int *)((int)uVar5 + 0xc);
        if (iVar4 == -1) {
          return;
        }
        if ((iVar4 != -999) && (cVar1 = FUN_00568dcd(0x2a,uVar6), cVar1 == '\0')) {
          cVar1 = FUN_00568dcd(0x36,uVar6);
        }
        goto LAB_0047a74e;
      }
    }
    cVar1 = '\0';
    iVar4 = -999;
  }
LAB_0047a74e:
  (**(code **)(**(int **)(*(int *)(param_1 + 8) + 4) + 0x50))
            (*(undefined4 *)(*(int *)(param_1 + 0x38) + 0x1c),iVar4,param_4,cVar1,
             *(undefined4 *)(*(int *)(param_1 + 8) + 0x18));
  return;
}



/* vtable 008fdfb8 slot 5 address 00479e8a */

/* ADDRESS: 00479e8a NAME: FUN_00479e8a */

void FUN_00479e8a(void)

{
  return;
}



/* vtable 008fdfb8 slot 6 address 00481364 */

/* ADDRESS: 00481364 NAME: FUN_00481364 */

void __thiscall FUN_00481364(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_2 + 0x30) == 0) {
    iVar1 = *(int *)(param_1 + 8);
    uVar2 = FUN_00846710(0x78);
    FUN_004765ae(*(undefined4 *)(iVar1 + 0xa4));
    FUN_0051d808(uVar2);
  }
  if (*(int *)(param_2 + 0x30) == 1) {
    iVar1 = *(int *)(param_1 + 8);
    FUN_00846710(0x60);
    FUN_0048a1f0(param_1,*(undefined4 *)(iVar1 + 0xa4));
    FUN_0051d808();
    return;
  }
  return;
}



/* vtable 008fdfb8 slot 7 address 00481358 */

/* ADDRESS: 00481358 NAME: FUN_00481358 */

void __fastcall FUN_00481358(int param_1)

{
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  return;
}



/* vtable 008fdfb8 slot 8 address 0047a788 */

/* ADDRESS: 0047a788 NAME: FUN_0047a788 */

undefined4 __fastcall FUN_0047a788(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 unaff_EBX;
  
  FUN_00485280();
  cVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 8) + 0x18) + 0x88))();
  piVar1 = *(int **)(*(int *)(param_1 + 8) + 0x18);
  if ((cVar2 == '\0') || (*(char *)((int)piVar1 + 0xbb) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0047a7c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*piVar1 + 0x164))();
    return uVar3;
  }
  return unaff_EBX;
}



/* vtable 008fdfb8 slot 9 address 00479e8e */

/* ADDRESS: 00479e8e NAME: FUN_00479e8e */

void __fastcall FUN_00479e8e(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x18);
  if (iVar1 == 0) {
    return;
  }
  (**(code **)(**(int **)(*(int *)(param_1 + 8) + 4) + 0x54))
            (*(undefined4 *)(*(int *)(param_1 + 0x38) + 0x1c),iVar1);
  return;
}



/* vtable 008fdfb8 slot 10 address 00479ebe */

/* ADDRESS: 00479ebe NAME: FUN_00479ebe */

undefined4 FUN_00479ebe(void)

{
  return 0;
}



/* vtable 008fdfb8 slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 008fdfb8 slot 12 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}



/* vtable 008fdfb8 slot 13 address 00481478 */

/* ADDRESS: 00481478 NAME: FUN_00481478 */

void FUN_00481478(void)

{
  undefined1 *local_24 [2];
  undefined1 local_1c [16];
  
  local_24[0] = local_1c;
  FUN_0048141a("Crafting","");
  FUN_0046feda(local_24,0x56,0x10,0x404040);
  FUN_0081ffd0();
  return;
}



/* vtable 008fdfb8 slot 14 address 004814e8 */

/* ADDRESS: 004814e8 NAME: FUN_004814e8 */

/* WARNING: Unable to track spacebase fully for stack */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004814e8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_ECX;
  float10 fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined8 uVar10;
  undefined1 *apuStack_48 [2];
  undefined1 auStack_40 [28];
  
  apuStack_48[0] = auStack_40;
  FUN_0048141a("/gui/inventory.png","");
  uVar5 = extraout_ECX;
  uVar10 = FUN_004db2c6(apuStack_48);
  FUN_0081ffd0((int)((ulonglong)uVar10 >> 0x20),uVar5);
  (*DAT_0145d2d4)(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  FUN_004d9876((int)uVar10);
  iVar3 = (*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x30)) / 2;
  iVar4 = (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x34)) / 2;
  FUN_00475a74(iVar3,iVar4,0,0,*(undefined4 *)(param_1 + 0x30),*(int *)(param_1 + 0x34));
  (*DAT_0145d248)(0x803a);
  (*DAT_0145d248)(0xb57);
  (*DAT_0145d340)(0x100);
  uVar5 = (*DAT_0145d248)(0xb71);
  (*DAT_0145d020)(uVar5);
  fVar9 = (float)(iVar3 + 0x33);
  (*DAT_0145ce94)(fVar9,(float)(iVar4 + 0x4b),0x42480000);
  (*DAT_0145cf80)(0xc1f00000,DAT_0088c19c,DAT_0088c19c);
  FUN_0076f4b8(0x43340000,0,0,0x3f800000);
  fVar7 = *(float *)(param_1 + 0x44);
  fVar8 = *(float *)(param_1 + 0x40);
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x18);
  uVar5 = *(undefined4 *)(iVar3 + 0x1bc);
  uVar1 = *(undefined4 *)(iVar3 + 0x70);
  uVar2 = *(undefined4 *)(iVar3 + 0x74);
  FUN_0076f4b8(0x43070000,0,0x3f800000,0);
  FUN_004e329a();
  FUN_0076f4b8(0xc3070000,0,0x3f800000,0);
  fVar6 = (float10)FUN_00766410(((float)(iVar4 + 0x19) - fVar7) / _DAT_0088c1a0);
  fVar7 = (float)((uint)(float)fVar6 ^ _DAT_0088c1b0) * DAT_0088c1c0;
  FUN_0076f4b8(fVar7,0x3f800000,0,0);
  fVar6 = (float10)FUN_00766410((fVar9 - fVar8) / _DAT_0088c1a0);
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x18);
  fVar9 = DAT_0088c1c0 * (float)fVar6;
  fVar8 = (float)fVar6 * _DAT_0088c1a0;
  *(float *)(iVar3 + 0x74) = fVar7;
  *(undefined4 *)(iVar3 + 0x178) = 0x3f800000;
  *(float *)(iVar3 + 0x1bc) = fVar9;
  *(float *)(iVar3 + 0x70) = fVar8;
  (*DAT_0145ce94)(0,*(undefined4 *)(iVar3 + 0xbc),0);
  *(undefined4 *)(DAT_00a4c1e0 + 0x2c) = 0x43340000;
  FUN_004e7b5e(*(undefined4 *)(*(int *)(param_1 + 8) + 0x18),0,0,0,0,0,0,0,0x3f800000);
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x18);
  *(undefined4 *)(iVar3 + 0x178) = 0;
  *(undefined4 *)(iVar3 + 0x1bc) = uVar5;
  *(undefined4 *)(iVar3 + 0x70) = uVar1;
  *(undefined4 *)(iVar3 + 0x74) = uVar2;
  (*DAT_0145d034)();
  FUN_004e31c4();
                    /* WARNING: Could not recover jumptable at 0x0048185e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_0145d26c)();
  return;
}


