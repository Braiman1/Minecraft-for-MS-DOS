/* Candidate RTTI class: ItemBed
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00905204 slot 0 address 007771d0 */

/* ADDRESS: 007771d0 NAME: FUN_007771d0 */

void FUN_007771d0(void)

{
  return;
}



/* vtable 00905204 slot 1 address 007771b8 */

/* ADDRESS: 007771b8 NAME: FUN_007771b8 */

void __fastcall FUN_007771b8(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00905204 slot 2 address 0048f08c */

/* ADDRESS: 0048f08c NAME: FUN_0048f08c */

int __thiscall FUN_0048f08c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}



/* vtable 00905204 slot 3 address 0048f09c */

/* ADDRESS: 0048f09c NAME: FUN_0048f09c */

int __thiscall FUN_0048f09c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return param_1;
}



/* vtable 00905204 slot 4 address 0048f0ac */

/* ADDRESS: 0048f0ac NAME: FUN_0048f0ac */

int __thiscall FUN_0048f0ac(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x10) = param_3 * 0x10 + param_2;
  return param_1;
}



/* vtable 00905204 slot 5 address 0048f0c2 */

/* ADDRESS: 0048f0c2 NAME: FUN_0048f0c2 */

undefined4 __fastcall FUN_0048f0c2(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* vtable 00905204 slot 6 address 00491ab0 */

/* ADDRESS: 00491ab0 NAME: FUN_00491ab0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_00491ab0(int *param_1,int param_2,int *param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  
  iVar1 = DAT_00a062b8;
  if (param_7 != 1) {
    return '\0';
  }
  iVar3 = param_5 + 1;
  uVar4 = FUN_004a3e0c((double)((DAT_0088da50 * *(float *)(param_2 + 0x70)) / _DAT_0088da54) +
                       _DAT_0088da58);
  uVar4 = uVar4 & 3;
  if (uVar4 == 0) {
    iVar5 = 1;
  }
  else {
    if (uVar4 == 1) {
      iVar5 = 0;
      cVar7 = -1;
      goto LAB_00491b3c;
    }
    iVar5 = 0;
    if (uVar4 == 2) {
      iVar5 = -1;
      cVar7 = '\0';
      goto LAB_00491b3c;
    }
  }
  cVar7 = uVar4 == 3;
LAB_00491b3c:
  cVar2 = FUN_0050ac0e(param_4,iVar3,param_6);
  if (cVar2 != '\0') {
    iVar5 = iVar5 + param_6;
    iVar6 = cVar7 + param_4;
    cVar7 = FUN_0050ac0e(iVar6,iVar3,iVar5);
    if (((cVar7 != '\0') &&
        (cVar7 = (**(code **)(*param_3 + 0x24))(param_4,param_5,param_6), cVar7 != '\0')) &&
       (cVar7 = (**(code **)(*param_3 + 0x24))(iVar6,param_5,iVar5), cVar7 != '\0')) {
      FUN_0050b8ba(param_4,iVar3,param_6,*(undefined4 *)(iVar1 + 8),uVar4);
      FUN_0050b8ba(iVar6,iVar3,iVar5,*(undefined4 *)(iVar1 + 8),uVar4 + 8);
      *param_1 = *param_1 + -1;
      return cVar7;
    }
  }
  return '\0';
}



/* vtable 00905204 slot 7 address 0048f0ce */

/* ADDRESS: 0048f0ce NAME: FUN_0048f0ce */

float10 FUN_0048f0ce(void)

{
  return (float10)1;
}



/* vtable 00905204 slot 8 address 0048f0d4 */

/* ADDRESS: 0048f0d4 NAME: FUN_0048f0d4 */

undefined4 FUN_0048f0d4(undefined4 param_1)

{
  return param_1;
}



/* vtable 00905204 slot 9 address 0048f0de */

/* ADDRESS: 0048f0de NAME: FUN_0048f0de */

undefined4 FUN_0048f0de(void)

{
  return 0;
}



/* vtable 00905204 slot 10 address 0048f0e4 */

/* ADDRESS: 0048f0e4 NAME: FUN_0048f0e4 */

undefined4 FUN_0048f0e4(void)

{
  return 0;
}



/* vtable 00905204 slot 11 address 0048f0ea */

/* ADDRESS: 0048f0ea NAME: FUN_0048f0ea */

undefined4 FUN_0048f0ea(void)

{
  return 0;
}



/* vtable 00905204 slot 12 address 0048f0f0 */

/* ADDRESS: 0048f0f0 NAME: FUN_0048f0f0 */

undefined4 FUN_0048f0f0(void)

{
  return 1;
}



/* vtable 00905204 slot 13 address 0048f0f8 */

/* ADDRESS: 0048f0f8 NAME: FUN_0048f0f8 */

undefined4 FUN_0048f0f8(void)

{
  return 0;
}



/* vtable 00905204 slot 14 address 0048f0fe */

/* ADDRESS: 0048f0fe NAME: FUN_0048f0fe */

void FUN_0048f0fe(void)

{
  return;
}



/* vtable 00905204 slot 15 address 0048f102 */

/* ADDRESS: 0048f102 NAME: FUN_0048f102 */

undefined1 __fastcall FUN_0048f102(int param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* vtable 00905204 slot 16 address 0048f106 */

/* ADDRESS: 0048f106 NAME: FUN_0048f106 */

undefined4 FUN_0048f106(void)

{
  return 0;
}



/* vtable 00905204 slot 17 address 0048f1a6 */

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



/* vtable 00905204 slot 18 address 0048f10a */

/* ADDRESS: 0048f10a NAME: FUN_0048f10a */

undefined4 __thiscall FUN_0048f10a(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x44))(param_2);
  return param_1;
}



/* vtable 00905204 slot 19 address 0048f128 */

/* ADDRESS: 0048f128 NAME: FUN_0048f128 */

undefined4 FUN_0048f128(void)

{
  return 0xffffff;
}



/* vtable 00905204 slot 20 address 0048f130 */

/* ADDRESS: 0048f130 NAME: FUN_0048f130 */

void FUN_0048f130(void)

{
  return;
}



/* vtable 00905204 slot 21 address 0048f134 */

/* ADDRESS: 0048f134 NAME: FUN_0048f134 */

void FUN_0048f134(void)

{
  return;
}


