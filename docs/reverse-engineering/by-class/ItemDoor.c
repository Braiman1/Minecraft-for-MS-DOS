/* Candidate RTTI class: ItemDoor
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00905e34 slot 0 address 00778a98 */

/* ADDRESS: 00778a98 NAME: FUN_00778a98 */

void FUN_00778a98(void)

{
  return;
}



/* vtable 00905e34 slot 1 address 00778a80 */

/* ADDRESS: 00778a80 NAME: FUN_00778a80 */

void __fastcall FUN_00778a80(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00905e34 slot 2 address 0048f08c */

/* ADDRESS: 0048f08c NAME: FUN_0048f08c */

int __thiscall FUN_0048f08c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}



/* vtable 00905e34 slot 3 address 0048f09c */

/* ADDRESS: 0048f09c NAME: FUN_0048f09c */

int __thiscall FUN_0048f09c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return param_1;
}



/* vtable 00905e34 slot 4 address 0048f0ac */

/* ADDRESS: 0048f0ac NAME: FUN_0048f0ac */

int __thiscall FUN_0048f0ac(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x10) = param_3 * 0x10 + param_2;
  return param_1;
}



/* vtable 00905e34 slot 5 address 0048f0c2 */

/* ADDRESS: 0048f0c2 NAME: FUN_0048f0c2 */

undefined4 __fastcall FUN_0048f0c2(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* vtable 00905e34 slot 6 address 00492ccc */

/* ADDRESS: 00492ccc NAME: FUN_00492ccc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte __thiscall
FUN_00492ccc(int param_1,int *param_2,int param_3,int *param_4,int param_5,int param_6,int param_7,
            int param_8)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  char cVar13;
  byte bVar14;
  byte bVar15;
  uint local_20;
  
  if (param_8 != 1) {
    return 0;
  }
  iVar1 = param_6 + 1;
  piVar12 = DAT_00a06204;
  if (*(int *)(param_1 + 0x20) == DAT_00a0ae40) {
    piVar12 = DAT_00a06220;
  }
  bVar2 = (**(code **)(*piVar12 + 0xac))(param_4,param_5,iVar1,param_7);
  if (bVar2 == 0) {
    return 0;
  }
  local_20 = FUN_004a3e0c((double)(((DAT_0088db40 + *(float *)(param_3 + 0x70)) * _DAT_0088db44) /
                                  _DAT_0088db48) - _DAT_0088db50);
  local_20 = local_20 & 3;
  if (local_20 == 0) {
    iVar11 = 1;
  }
  else {
    if (local_20 == 1) {
      iVar11 = 0;
      cVar13 = -1;
      goto LAB_00492d93;
    }
    iVar11 = 0;
    if (local_20 == 2) {
      iVar11 = -1;
      cVar13 = '\0';
      goto LAB_00492d93;
    }
  }
  cVar13 = local_20 == 3;
LAB_00492d93:
  iVar5 = param_7 - iVar11;
  iVar6 = param_5 - cVar13;
  bVar3 = (**(code **)(*param_4 + 0x24))(iVar6,iVar1,iVar5);
  param_6 = param_6 + 2;
  uVar7 = (**(code **)(*param_4 + 0x24))(iVar6,param_6,iVar5);
  iVar11 = iVar11 + param_7;
  iVar8 = cVar13 + param_5;
  bVar4 = (**(code **)(*param_4 + 0x24))(iVar8,iVar1,iVar11);
  uVar9 = (**(code **)(*param_4 + 0x24))(iVar8,param_6,iVar11);
  iVar10 = (**(code **)(*param_4 + 8))(iVar6,iVar1,iVar5);
  bVar14 = bVar2;
  if (piVar12[2] != iVar10) {
    iVar5 = (**(code **)(*param_4 + 8))(iVar6,param_6,iVar5);
    bVar14 = piVar12[2] == iVar5;
  }
  iVar5 = (**(code **)(*param_4 + 8))(iVar8,iVar1,iVar11);
  bVar15 = bVar2;
  if (piVar12[2] != iVar5) {
    iVar11 = (**(code **)(*param_4 + 8))(iVar8,param_6,iVar11);
    iVar5 = piVar12[2];
    bVar15 = iVar5 == iVar11;
  }
  if (((bVar14 & (bVar15 ^ 1)) != 0) ||
     ((uVar7 & 0xff) + (uint)bVar3 < (uVar9 & 0xff) + (uint)bVar4)) {
    local_20 = (local_20 - 1 & 3) + 4;
  }
  *(undefined1 *)(param_4 + 0x33) = 1;
  FUN_0050b8ba(param_5,iVar1,param_7,iVar5,local_20);
  FUN_0050b8ba(param_5,param_6,param_7,piVar12[2],local_20 + 8);
  iVar11 = piVar12[2];
  *(undefined1 *)(param_4 + 0x33) = 0;
  FUN_0050b73a(param_5,iVar1,param_7,iVar11);
  FUN_0050b73a(param_5,param_6,param_7,piVar12[2]);
  *param_2 = *param_2 + -1;
  return bVar2;
}



/* vtable 00905e34 slot 7 address 0048f0ce */

/* ADDRESS: 0048f0ce NAME: FUN_0048f0ce */

float10 FUN_0048f0ce(void)

{
  return (float10)1;
}



/* vtable 00905e34 slot 8 address 0048f0d4 */

/* ADDRESS: 0048f0d4 NAME: FUN_0048f0d4 */

undefined4 FUN_0048f0d4(undefined4 param_1)

{
  return param_1;
}



/* vtable 00905e34 slot 9 address 0048f0de */

/* ADDRESS: 0048f0de NAME: FUN_0048f0de */

undefined4 FUN_0048f0de(void)

{
  return 0;
}



/* vtable 00905e34 slot 10 address 0048f0e4 */

/* ADDRESS: 0048f0e4 NAME: FUN_0048f0e4 */

undefined4 FUN_0048f0e4(void)

{
  return 0;
}



/* vtable 00905e34 slot 11 address 0048f0ea */

/* ADDRESS: 0048f0ea NAME: FUN_0048f0ea */

undefined4 FUN_0048f0ea(void)

{
  return 0;
}



/* vtable 00905e34 slot 12 address 0048f0f0 */

/* ADDRESS: 0048f0f0 NAME: FUN_0048f0f0 */

undefined4 FUN_0048f0f0(void)

{
  return 1;
}



/* vtable 00905e34 slot 13 address 0048f0f8 */

/* ADDRESS: 0048f0f8 NAME: FUN_0048f0f8 */

undefined4 FUN_0048f0f8(void)

{
  return 0;
}



/* vtable 00905e34 slot 14 address 0048f0fe */

/* ADDRESS: 0048f0fe NAME: FUN_0048f0fe */

void FUN_0048f0fe(void)

{
  return;
}



/* vtable 00905e34 slot 15 address 0048f102 */

/* ADDRESS: 0048f102 NAME: FUN_0048f102 */

undefined1 __fastcall FUN_0048f102(int param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* vtable 00905e34 slot 16 address 0048f106 */

/* ADDRESS: 0048f106 NAME: FUN_0048f106 */

undefined4 FUN_0048f106(void)

{
  return 0;
}



/* vtable 00905e34 slot 17 address 0048f1a6 */

/* ADDRESS: 0048f1a6 NAME: FUN_0048f1a6 */

undefined4 __thiscall FUN_0048f1a6(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  if (iVar1 == 0) {
    FUN_0048f138(&DAT_0088d5de);
  }
  else {
    FUN_0048f138("item.");
    uVar2 = FUN_00821690(iVar1);
    FUN_00823120(uVar2);
    FUN_0081ffd0(extraout_ECX);
  }
  return param_1;
}



/* vtable 00905e34 slot 18 address 0048f10a */

/* ADDRESS: 0048f10a NAME: FUN_0048f10a */

undefined4 __thiscall FUN_0048f10a(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x44))(param_2);
  return param_1;
}



/* vtable 00905e34 slot 19 address 0048f128 */

/* ADDRESS: 0048f128 NAME: FUN_0048f128 */

undefined4 FUN_0048f128(void)

{
  return 0xffffff;
}



/* vtable 00905e34 slot 20 address 0048f130 */

/* ADDRESS: 0048f130 NAME: FUN_0048f130 */

void FUN_0048f130(void)

{
  return;
}



/* vtable 00905e34 slot 21 address 0048f134 */

/* ADDRESS: 0048f134 NAME: FUN_0048f134 */

void FUN_0048f134(void)

{
  return;
}


