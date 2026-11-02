/* Candidate RTTI class: ItemFlintAndSteel
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00903180 slot 0 address 007756a8 */

/* ADDRESS: 007756a8 NAME: FUN_007756a8 */

void FUN_007756a8(void)

{
  return;
}



/* vtable 00903180 slot 1 address 00775690 */

/* ADDRESS: 00775690 NAME: FUN_00775690 */

void __fastcall FUN_00775690(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00903180 slot 2 address 0048f08c */

/* ADDRESS: 0048f08c NAME: FUN_0048f08c */

int __thiscall FUN_0048f08c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}



/* vtable 00903180 slot 3 address 0048f09c */

/* ADDRESS: 0048f09c NAME: FUN_0048f09c */

int __thiscall FUN_0048f09c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return param_1;
}



/* vtable 00903180 slot 4 address 0048f0ac */

/* ADDRESS: 0048f0ac NAME: FUN_0048f0ac */

int __thiscall FUN_0048f0ac(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x10) = param_3 * 0x10 + param_2;
  return param_1;
}



/* vtable 00903180 slot 5 address 0048f0c2 */

/* ADDRESS: 0048f0c2 NAME: FUN_0048f0c2 */

undefined4 __fastcall FUN_0048f0c2(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* vtable 00903180 slot 6 address 004936a4 */

/* ADDRESS: 004936a4 NAME: FUN_004936a4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_004936a4(undefined4 param_1,undefined4 param_2,int *param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  double dVar1;
  int iVar2;
  float10 fVar3;
  float fVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [16];
  undefined1 uStack_20;
  
  if (param_7 == 0) {
    param_5 = param_5 + -1;
  }
  else if (param_7 == 1) {
    param_5 = param_5 + 1;
  }
  else if (param_7 == 2) {
    param_6 = param_6 + -1;
  }
  else if (param_7 == 3) {
    param_6 = param_6 + 1;
  }
  else if (param_7 == 4) {
    param_4 = param_4 + -1;
  }
  else if (param_7 == 5) {
    param_4 = param_4 + 1;
  }
  uVar6 = CONCAT44(param_6,param_5);
  iVar5 = param_4;
  iVar2 = (**(code **)(*param_3 + 8))();
  if (iVar2 == 0) {
    fVar3 = (float10)FUN_0040e898();
    puStack_38 = auStack_30;
    fVar4 = (float)fVar3 * _DAT_0088dc54 + _DAT_0088dc58;
    FUN_008220b0(puStack_38,"fire.ignite",0xb,iVar5,uVar6);
    dVar1 = DAT_0088dc60;
    uStack_34 = 0xb;
    puStack_38[0xb] = 0;
    uStack_20 = 0;
    FUN_0050c650((double)param_4 + dVar1,(double)param_5 + dVar1,(double)param_6 + dVar1,&puStack_38
                 ,0x3f800000,fVar4);
    FUN_0081ffd0();
    FUN_0050b858(param_4,param_5,param_6,*(undefined4 *)(DAT_00a06254 + 8));
  }
  FUN_0049873c(1,param_2);
  return 1;
}



/* vtable 00903180 slot 7 address 0048f0ce */

/* ADDRESS: 0048f0ce NAME: FUN_0048f0ce */

float10 FUN_0048f0ce(void)

{
  return (float10)1;
}



/* vtable 00903180 slot 8 address 0048f0d4 */

/* ADDRESS: 0048f0d4 NAME: FUN_0048f0d4 */

undefined4 FUN_0048f0d4(undefined4 param_1)

{
  return param_1;
}



/* vtable 00903180 slot 9 address 0048f0de */

/* ADDRESS: 0048f0de NAME: FUN_0048f0de */

undefined4 FUN_0048f0de(void)

{
  return 0;
}



/* vtable 00903180 slot 10 address 0048f0e4 */

/* ADDRESS: 0048f0e4 NAME: FUN_0048f0e4 */

undefined4 FUN_0048f0e4(void)

{
  return 0;
}



/* vtable 00903180 slot 11 address 0048f0ea */

/* ADDRESS: 0048f0ea NAME: FUN_0048f0ea */

undefined4 FUN_0048f0ea(void)

{
  return 0;
}



/* vtable 00903180 slot 12 address 0048f0f0 */

/* ADDRESS: 0048f0f0 NAME: FUN_0048f0f0 */

undefined4 FUN_0048f0f0(void)

{
  return 1;
}



/* vtable 00903180 slot 13 address 0048f0f8 */

/* ADDRESS: 0048f0f8 NAME: FUN_0048f0f8 */

undefined4 FUN_0048f0f8(void)

{
  return 0;
}



/* vtable 00903180 slot 14 address 0048f0fe */

/* ADDRESS: 0048f0fe NAME: FUN_0048f0fe */

void FUN_0048f0fe(void)

{
  return;
}



/* vtable 00903180 slot 15 address 0048f102 */

/* ADDRESS: 0048f102 NAME: FUN_0048f102 */

undefined1 __fastcall FUN_0048f102(int param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* vtable 00903180 slot 16 address 0048f106 */

/* ADDRESS: 0048f106 NAME: FUN_0048f106 */

undefined4 FUN_0048f106(void)

{
  return 0;
}



/* vtable 00903180 slot 17 address 0048f1a6 */

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



/* vtable 00903180 slot 18 address 0048f10a */

/* ADDRESS: 0048f10a NAME: FUN_0048f10a */

undefined4 __thiscall FUN_0048f10a(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x44))(param_2);
  return param_1;
}



/* vtable 00903180 slot 19 address 0048f128 */

/* ADDRESS: 0048f128 NAME: FUN_0048f128 */

undefined4 FUN_0048f128(void)

{
  return 0xffffff;
}



/* vtable 00903180 slot 20 address 0048f130 */

/* ADDRESS: 0048f130 NAME: FUN_0048f130 */

void FUN_0048f130(void)

{
  return;
}



/* vtable 00903180 slot 21 address 0048f134 */

/* ADDRESS: 0048f134 NAME: FUN_0048f134 */

void FUN_0048f134(void)

{
  return;
}


