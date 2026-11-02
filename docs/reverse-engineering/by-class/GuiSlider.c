/* Candidate RTTI class: GuiSlider
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00907524 slot 0 address 007793dc */

/* ADDRESS: 007793dc NAME: thunk_FUN_007793e4 */

void thunk_FUN_007793e4(void)

{
  FUN_007793e4();
  return;
}



/* vtable 00907524 slot 1 address 007793b8 */

/* ADDRESS: 007793b8 NAME: FUN_007793b8 */

void __fastcall FUN_007793b8(void *param_1)

{
  FUN_007793e4();
  free(param_1);
  return;
}



/* vtable 00907524 slot 2 address 004871a8 */

/* ADDRESS: 004871a8 NAME: FUN_004871a8 */

undefined4 FUN_004871a8(void)

{
  return 0;
}



/* vtable 00907524 slot 3 address 00478486 */

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



/* vtable 00907524 slot 4 address 0048730a */

/* ADDRESS: 0048730a NAME: FUN_0048730a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0048730a(int param_1,int param_2,int param_3)

{
  undefined4 extraout_ECX;
  float fVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 local_34 [36];
  
  if (*(char *)(param_1 + 0x35) != '\0') {
    if (*(char *)(param_1 + 0x3c) != '\0') {
      fVar1 = (float)((param_3 - *(int *)(param_1 + 0x10)) + -4) /
              (float)(*(int *)(param_1 + 8) + -8);
      if (fVar1 < 0.0) {
        fVar1 = 0.0;
      }
      uVar2 = ~-(uint)(_DAT_0088cab8 < fVar1) & (uint)fVar1 |
              (uint)_DAT_0088cab8 & -(uint)(_DAT_0088cab8 < fVar1);
      *(uint *)(param_1 + 0x38) = uVar2;
      FUN_00471c42(*(undefined4 *)(param_1 + 0x40),uVar2);
      FUN_00471dcc(*(undefined4 *)(param_2 + 0x94),*(undefined4 *)(param_1 + 0x40));
      uVar3 = extraout_ECX;
      FUN_004871b6(local_34);
      FUN_0081ffd0(param_2,uVar3);
    }
    (*DAT_0145d2d4)(_DAT_0088cab8,_DAT_0088cab8,_DAT_0088cab8,_DAT_0088cab8);
    FUN_00475a74((int)((float)(*(int *)(param_1 + 8) + -8) * *(float *)(param_1 + 0x38)) +
                 *(int *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),0,0x42,4,0x14);
    FUN_00475a74((int)((float)(*(int *)(param_1 + 8) + -8) * *(float *)(param_1 + 0x38)) +
                 *(int *)(param_1 + 0x10) + 4,*(undefined4 *)(param_1 + 0x14),0xc4,0x42,4,0x14);
  }
  return;
}



/* vtable 00907524 slot 5 address 004871ae */

/* ADDRESS: 004871ae NAME: FUN_004871ae */

void __fastcall FUN_004871ae(int param_1)

{
  *(undefined1 *)(param_1 + 0x3c) = 0;
  return;
}



/* vtable 00907524 slot 6 address 0048723e */

/* ADDRESS: 0048723e NAME: FUN_0048723e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char __thiscall FUN_0048723e(int param_1,int param_2,int param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  float fVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 local_34 [36];
  
  cVar1 = FUN_0047844c(param_2,param_3,param_4);
  if (cVar1 != '\0') {
    fVar2 = (float)((param_3 - *(int *)(param_1 + 0x10)) + -4) / (float)(*(int *)(param_1 + 8) + -8)
    ;
    if (fVar2 < 0.0) {
      fVar2 = 0.0;
    }
    uVar3 = ~-(uint)(_DAT_0088cab8 < fVar2) & (uint)fVar2 |
            (uint)_DAT_0088cab8 & -(uint)(_DAT_0088cab8 < fVar2);
    *(uint *)(param_1 + 0x38) = uVar3;
    FUN_00471c42(*(undefined4 *)(param_1 + 0x40),uVar3);
    FUN_00471dcc(*(undefined4 *)(param_2 + 0x94),*(undefined4 *)(param_1 + 0x40));
    uVar4 = extraout_EDX;
    FUN_004871b6(local_34);
    FUN_0081ffd0(extraout_ECX,uVar4);
    *(undefined1 *)(param_1 + 0x3c) = 1;
  }
  return cVar1;
}


