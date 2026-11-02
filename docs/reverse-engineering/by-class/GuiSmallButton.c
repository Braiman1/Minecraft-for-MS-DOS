/* Candidate RTTI class: GuiSmallButton
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 0090106c slot 0 address 0077433c */

/* ADDRESS: 0077433c NAME: thunk_FUN_00774344 */

void thunk_FUN_00774344(void)

{
  FUN_00774344();
  return;
}



/* vtable 0090106c slot 1 address 00774318 */

/* ADDRESS: 00774318 NAME: FUN_00774318 */

void __fastcall FUN_00774318(void *param_1)

{
  FUN_00774344();
  free(param_1);
  return;
}



/* vtable 0090106c slot 2 address 0047842c */

/* ADDRESS: 0047842c NAME: FUN_0047842c */

int __thiscall FUN_0047842c(int param_1,byte param_2)

{
  if (*(char *)(param_1 + 0x34) == '\0') {
    return 0;
  }
  return param_2 + 1;
}



/* vtable 0090106c slot 3 address 00478486 */

/* ADDRESS: 00478486 NAME: FUN_00478486 */

void __thiscall FUN_00478486(int *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  bool bStack_3d;
  undefined1 *puStack_34;
  undefined4 uStack_30;
  undefined1 auStack_2c [28];
  
  if (*(char *)((int)param_1 + 0x35) == '\0') {
    return;
  }
  uVar1 = *(undefined4 *)(param_2 + 0x48);
  uVar2 = *(undefined4 *)(param_2 + 0x44);
  puStack_34 = auStack_2c;
  FUN_008220b0(puStack_34,"/gui/gui.png",0xc);
  uStack_30 = 0xc;
  puStack_34[0xc] = 0;
  uVar3 = FUN_004db2c6(&puStack_34);
  (*DAT_0145d354)(0xde1,uVar3);
  FUN_0081ffd0(uVar2,uVar2);
  (*DAT_0145d2d4)(DAT_0088b204,DAT_0088b204,DAT_0088b204,DAT_0088b204);
  bStack_3d = false;
  if (((param_1[4] <= param_3) && (param_1[5] <= param_4)) && (param_3 < param_1[4] + param_1[2])) {
    bStack_3d = param_4 < param_1[5] + param_1[3];
  }
  iVar4 = (**(code **)(*param_1 + 8))(bStack_3d);
  iVar5 = iVar4 * 0x14 + 0x2e;
  FUN_00475a74(param_1[4],param_1[5],0,iVar5,param_1[2] / 2,param_1[3]);
  iVar4 = param_1[2] / 2;
  FUN_00475a74(iVar4 + param_1[4],param_1[5],200 - iVar4,iVar5,iVar4,param_1[3]);
  (**(code **)(*param_1 + 0x10))(param_2,param_3,param_4);
  if ((char)param_1[0xd] == '\0') {
    puVar6 = (undefined *)0xffa0a0a0;
  }
  else if (bStack_3d == false) {
    puVar6 = &DAT_00e0e0e0;
  }
  else {
    puVar6 = &DAT_00ffffa0;
  }
  FUN_004759fa(uVar1,param_1 + 6,param_1[2] / 2 + param_1[4],(param_1[3] + -8) / 2 + param_1[5],
               puVar6);
  return;
}



/* vtable 0090106c slot 4 address 00478444 */

/* ADDRESS: 00478444 NAME: FUN_00478444 */

void FUN_00478444(void)

{
  return;
}



/* vtable 0090106c slot 5 address 00478448 */

/* ADDRESS: 00478448 NAME: FUN_00478448 */

void FUN_00478448(void)

{
  return;
}



/* vtable 0090106c slot 6 address 0047844c */

/* ADDRESS: 0047844c NAME: FUN_0047844c */

bool __thiscall FUN_0047844c(int param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(char *)(param_1 + 0x34) != '\0') {
    bVar1 = false;
    if (((*(int *)(param_1 + 0x10) <= param_3) && (*(int *)(param_1 + 0x14) <= param_4)) &&
       (param_3 < *(int *)(param_1 + 0x10) + *(int *)(param_1 + 8))) {
      bVar1 = param_4 < *(int *)(param_1 + 0x14) + *(int *)(param_1 + 0xc);
    }
  }
  return bVar1;
}


