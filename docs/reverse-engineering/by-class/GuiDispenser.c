/* Candidate RTTI class: GuiDispenser
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fdf74 slot 0 address 00773354 */

/* ADDRESS: 00773354 NAME: thunk_FUN_0077335c */

void thunk_FUN_0077335c(void)

{
  FUN_0077335c();
  return;
}



/* vtable 008fdf74 slot 1 address 00773330 */

/* ADDRESS: 00773330 NAME: FUN_00773330 */

void __fastcall FUN_00773330(void *param_1)

{
  FUN_0077335c();
  free(param_1);
  return;
}



/* vtable 008fdf74 slot 2 address 0047a1ba */

/* ADDRESS: 0047a1ba NAME: FUN_0047a1ba */

void __thiscall FUN_0047a1ba(int *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  int iVar8;
  int local_a0;
  undefined1 local_9c [4];
  int local_98;
  undefined1 local_84 [24];
  undefined1 local_6c [24];
  undefined1 local_54 [24];
  undefined1 local_3c;
  undefined1 local_38 [40];
  
  iVar8 = 0;
  FUN_0048597e();
  iVar3 = (param_1[3] - param_1[0xc]) / 2;
  iVar4 = (param_1[4] - param_1[0xd]) / 2;
  (**(code **)(*param_1 + 0x38))(param_4);
  (*DAT_0145d020)(extraout_EDX);
  (*DAT_0145cf88)(0x42f00000,DAT_0088b3f4,0,0);
  FUN_004e329a();
  (*DAT_0145d034)();
  (*DAT_0145d020)();
  (*DAT_0145ce94)((float)iVar3,(float)iVar4,0);
  (*DAT_0145d2d4)(DAT_0088b3f4,DAT_0088b3f4,DAT_0088b3f4,DAT_0088b3f4);
  (*DAT_0145d248)(0x803a);
  local_a0 = 0;
  iVar5 = extraout_ECX;
  while( true ) {
    iVar1 = *(int *)(param_1[0xe] + 0x10);
    if (*(int *)(param_1[0xe] + 0x14) - iVar1 >> 2 <= iVar8) break;
    iVar1 = *(int *)(iVar1 + iVar8 * 4);
    FUN_00479f7a(iVar1);
    iVar5 = iVar1;
    cVar2 = FUN_0047a0e0(iVar1,param_2,param_3);
    if (cVar2 != '\0') {
      (*DAT_0145d26c)(0xb50);
      (*DAT_0145d26c)(0xb71);
      FUN_00475794(*(int *)(iVar1 + 0x10),*(int *)(iVar1 + 0x14),*(int *)(iVar1 + 0x10) + 0x10,
                   *(int *)(iVar1 + 0x14) + 0x10,0x80ffffff,0x80ffffff);
      (*DAT_0145d248)(0xb50);
      iVar5 = (*DAT_0145d248)(0xb71);
      local_a0 = iVar1;
    }
    iVar8 = iVar8 + 1;
  }
  iVar5 = FUN_0048efa6(iVar5);
  if (iVar5 != 0) {
    (*DAT_0145ce94)(0,0,0x42000000);
    iVar8 = (param_2 - iVar3) + -8;
    iVar5 = (param_3 - iVar4) + -8;
    uVar6 = FUN_0048efa6();
    FUN_004e4bdc(param_1[9],*(undefined4 *)(param_1[2] + 0x44),uVar6,iVar8,iVar5);
    uVar6 = FUN_0048efa6();
    FUN_004e4436(param_1[9],*(undefined4 *)(param_1[2] + 0x44),uVar6,iVar8,iVar5);
  }
  uVar6 = (*DAT_0145d26c)(0x803a);
  FUN_004e31c4(uVar6);
  (*DAT_0145d26c)(0xb50);
  (*DAT_0145d26c)(0xb71);
  (**(code **)(*param_1 + 0x34))(extraout_ECX_00);
  iVar5 = FUN_0048efa6();
  if ((iVar5 == 0) && (local_a0 != 0)) {
    cVar2 = FUN_004f3788();
    if (cVar2 != '\0') {
      uVar6 = FUN_004fc82e();
      uVar7 = FUN_004f376e();
      FUN_004989a8(uVar7);
      FUN_004fc252(uVar6,local_84);
      FUN_00823680(local_6c);
      local_3c = 0;
      FUN_00410a19(local_38,local_54);
      uVar6 = FUN_00823120(local_38);
      FUN_0081ffd0(uVar6);
      FUN_0081ffd0();
      FUN_0081ffd0();
      FUN_0081ffd0();
      if (local_98 != 0) {
        iVar3 = param_2 - iVar3;
        iVar4 = param_3 - iVar4;
        iVar5 = FUN_0046f612(local_9c);
        FUN_00475794(iVar3 + 9,iVar4 + -0xf,iVar3 + 0xf + iVar5,iVar4 + -1,0xc0000000,0xc0000000);
        FUN_0047046a(local_9c,iVar3 + 0xc,iVar4 + -0xc,0xffffffff);
      }
      FUN_0081ffd0();
    }
  }
  (*DAT_0145d034)();
  FUN_0048528a(param_2,param_3,param_4);
  (*DAT_0145d248)(0xb50);
  (*DAT_0145d248)(0xb71);
  return;
}



/* vtable 008fdf74 slot 3 address 00479ec2 */

/* ADDRESS: 00479ec2 NAME: FUN_00479ec2 */

void __thiscall FUN_00479ec2(int param_1,undefined4 param_2,int param_3)

{
  if ((param_3 == 1) ||
     (*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x94) + 0x4c) + 0x18) == param_3)) {
    (**(code **)(**(int **)(*(int *)(param_1 + 8) + 0x18) + 0x164))();
  }
  return;
}



/* vtable 008fdf74 slot 4 address 0047a674 */

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



/* vtable 008fdf74 slot 5 address 00479e8a */

/* ADDRESS: 00479e8a NAME: FUN_00479e8a */

void FUN_00479e8a(void)

{
  return;
}



/* vtable 008fdf74 slot 6 address 0048527c */
/* No matching successful function export. Inspect address in Ghidra. */

/* vtable 008fdf74 slot 7 address 0047a19a */

/* ADDRESS: 0047a19a NAME: FUN_0047a19a */

void __fastcall FUN_0047a19a(int param_1)

{
  FUN_00485280();
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 8) + 0x18) + 0x2d4) = *(undefined4 *)(param_1 + 0x38);
  return;
}



/* vtable 008fdf74 slot 8 address 0047a788 */

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



/* vtable 008fdf74 slot 9 address 00479e8e */

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



/* vtable 008fdf74 slot 10 address 00479ebe */

/* ADDRESS: 00479ebe NAME: FUN_00479ebe */

undefined4 FUN_00479ebe(void)

{
  return 0;
}



/* vtable 008fdf74 slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 008fdf74 slot 12 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}



/* vtable 008fdf74 slot 13 address 0047d0be */

/* ADDRESS: 0047d0be NAME: FUN_0047d0be */

void __fastcall FUN_0047d0be(int param_1)

{
  int iVar1;
  undefined1 local_34 [36];
  
  FUN_0047cf88("Dispenser");
  FUN_0046feda(local_34,0x3c,6,0x404040);
  FUN_0081ffd0();
  iVar1 = *(int *)(param_1 + 0x34);
  FUN_0047cf88("Inventory");
  FUN_0046feda(local_34,8,iVar1 + -0x5e,0x404040);
  FUN_0081ffd0();
  return;
}



/* vtable 008fdf74 slot 14 address 0047cff6 */

/* ADDRESS: 0047cff6 NAME: FUN_0047cff6 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0047cff6(int param_1)

{
  undefined8 uVar1;
  undefined1 local_34 [36];
  
  FUN_0047cf88("/gui/trap.png");
  uVar1 = FUN_004db2c6(local_34);
  FUN_0081ffd0((int)((ulonglong)uVar1 >> 0x20));
  (*DAT_0145d2d4)(_DAT_0088bb60,_DAT_0088bb60,_DAT_0088bb60,_DAT_0088bb60);
  FUN_004d9876((int)uVar1);
  FUN_00475a74((*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x30)) / 2,
               (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x34)) / 2,0,0,
               *(int *)(param_1 + 0x30),*(int *)(param_1 + 0x34));
  return;
}


