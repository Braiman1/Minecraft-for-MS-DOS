/* Candidate RTTI class: ItemMap
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00905444 slot 0 address 00777278 */

/* ADDRESS: 00777278 NAME: FUN_00777278 */

void FUN_00777278(void)

{
  return;
}



/* vtable 00905444 slot 1 address 00777260 */

/* ADDRESS: 00777260 NAME: FUN_00777260 */

void __fastcall FUN_00777260(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00905444 slot 2 address 0048f08c */

/* ADDRESS: 0048f08c NAME: FUN_0048f08c */

int __thiscall FUN_0048f08c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}



/* vtable 00905444 slot 3 address 0048f09c */

/* ADDRESS: 0048f09c NAME: FUN_0048f09c */

int __thiscall FUN_0048f09c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return param_1;
}



/* vtable 00905444 slot 4 address 0048f0ac */

/* ADDRESS: 0048f0ac NAME: FUN_0048f0ac */

int __thiscall FUN_0048f0ac(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x10) = param_3 * 0x10 + param_2;
  return param_1;
}



/* vtable 00905444 slot 5 address 0048f0c2 */

/* ADDRESS: 0048f0c2 NAME: FUN_0048f0c2 */

undefined4 __fastcall FUN_0048f0c2(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* vtable 00905444 slot 6 address 0048f0c8 */

/* ADDRESS: 0048f0c8 NAME: FUN_0048f0c8 */

undefined4 FUN_0048f0c8(void)

{
  return 0;
}



/* vtable 00905444 slot 7 address 0048f0ce */

/* ADDRESS: 0048f0ce NAME: FUN_0048f0ce */

float10 FUN_0048f0ce(void)

{
  return (float10)1;
}



/* vtable 00905444 slot 8 address 0048f0d4 */

/* ADDRESS: 0048f0d4 NAME: FUN_0048f0d4 */

undefined4 FUN_0048f0d4(undefined4 param_1)

{
  return param_1;
}



/* vtable 00905444 slot 9 address 0048f0de */

/* ADDRESS: 0048f0de NAME: FUN_0048f0de */

undefined4 FUN_0048f0de(void)

{
  return 0;
}



/* vtable 00905444 slot 10 address 0048f0e4 */

/* ADDRESS: 0048f0e4 NAME: FUN_0048f0e4 */

undefined4 FUN_0048f0e4(void)

{
  return 0;
}



/* vtable 00905444 slot 11 address 0048f0ea */

/* ADDRESS: 0048f0ea NAME: FUN_0048f0ea */

undefined4 FUN_0048f0ea(void)

{
  return 0;
}



/* vtable 00905444 slot 12 address 0048f0f0 */

/* ADDRESS: 0048f0f0 NAME: FUN_0048f0f0 */

undefined4 FUN_0048f0f0(void)

{
  return 1;
}



/* vtable 00905444 slot 13 address 0048f0f8 */

/* ADDRESS: 0048f0f8 NAME: FUN_0048f0f8 */

undefined4 FUN_0048f0f8(void)

{
  return 0;
}



/* vtable 00905444 slot 14 address 0048f0fe */

/* ADDRESS: 0048f0fe NAME: FUN_0048f0fe */

void FUN_0048f0fe(void)

{
  return;
}



/* vtable 00905444 slot 15 address 0048f102 */

/* ADDRESS: 0048f102 NAME: FUN_0048f102 */

undefined1 __fastcall FUN_0048f102(int param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* vtable 00905444 slot 16 address 0048f106 */

/* ADDRESS: 0048f106 NAME: FUN_0048f106 */

undefined4 FUN_0048f106(void)

{
  return 0;
}



/* vtable 00905444 slot 17 address 0048f1a6 */

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



/* vtable 00905444 slot 18 address 0048f10a */

/* ADDRESS: 0048f10a NAME: FUN_0048f10a */

undefined4 __thiscall FUN_0048f10a(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x44))(param_2);
  return param_1;
}



/* vtable 00905444 slot 19 address 0048f128 */

/* ADDRESS: 0048f128 NAME: FUN_0048f128 */

undefined4 FUN_0048f128(void)

{
  return 0xffffff;
}



/* vtable 00905444 slot 20 address 0049470c */

/* ADDRESS: 0049470c NAME: FUN_0049470c */

void FUN_0049470c(undefined4 param_1,int param_2,int *param_3,undefined4 param_4,char param_5)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_2 + 0x170) == '\0') {
    uVar3 = FUN_00494532(param_1,param_2);
    uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    cVar1 = (**(code **)(*param_3 + 0xdc))(uVar2,uVar2);
    if (cVar1 != '\0') {
      FUN_004a019e(param_3,param_1);
    }
    if (param_5 != '\0') {
      FUN_004942c6(param_2,param_3,(int)uVar3);
    }
  }
  return;
}



/* vtable 00905444 slot 21 address 00494788 */

/* ADDRESS: 00494788 NAME: FUN_00494788 */

void FUN_00494788(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 unaff_EDI;
  undefined8 in_stack_ffffff84;
  undefined4 uVar4;
  undefined8 uVar3;
  undefined1 local_50 [24];
  undefined1 local_38 [24];
  undefined1 local_20;
  
  uVar4 = (undefined4)((ulonglong)in_stack_ffffff84 >> 0x20);
  FUN_0049425a();
  uVar1 = FUN_0050ef86(local_38);
  FUN_00498712(uVar1);
  uVar3 = CONCAT44(uVar4,unaff_EDI);
  FUN_0081ffd0();
  uVar1 = FUN_0049870e(uVar3);
  FUN_00835f50(local_38,uVar1);
  FUN_00843fc4(local_50,&DAT_0088dd45,local_38);
  FUN_0081ffd0();
  iVar2 = FUN_00846710(0x4060);
  FUN_004a00a4(local_50);
  FUN_008238d0(local_50);
  local_20 = 0;
  uVar1 = FUN_0050ef6e(local_38,iVar2);
  FUN_0081ffd0(uVar1,uVar1);
  uVar1 = FUN_004a3e0c(*(undefined8 *)(param_3 + 0x40));
  *(undefined4 *)(iVar2 + 0x20) = uVar1;
  uVar1 = FUN_004a3e0c(*(undefined8 *)(param_3 + 0x50));
  *(undefined4 *)(iVar2 + 0x24) = uVar1;
  *(undefined1 *)(iVar2 + 0x29) = 3;
  *(char *)(iVar2 + 0x28) = (char)*(undefined4 *)(*(int *)(param_2 + 0x104) + 0x50);
  FUN_004a07c2();
  FUN_0081ffd0();
  return;
}


