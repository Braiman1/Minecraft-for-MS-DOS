/* Candidate RTTI class: ItemFishingRod
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009010c0 slot 0 address 0077436c */

/* ADDRESS: 0077436c NAME: FUN_0077436c */

void FUN_0077436c(void)

{
  return;
}



/* vtable 009010c0 slot 1 address 00774354 */

/* ADDRESS: 00774354 NAME: FUN_00774354 */

void __fastcall FUN_00774354(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 009010c0 slot 2 address 0048f08c */

/* ADDRESS: 0048f08c NAME: FUN_0048f08c */

int __thiscall FUN_0048f08c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}



/* vtable 009010c0 slot 3 address 0048f09c */

/* ADDRESS: 0048f09c NAME: FUN_0048f09c */

int __thiscall FUN_0048f09c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return param_1;
}



/* vtable 009010c0 slot 4 address 0048f0ac */

/* ADDRESS: 0048f0ac NAME: FUN_0048f0ac */

int __thiscall FUN_0048f0ac(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x10) = param_3 * 0x10 + param_2;
  return param_1;
}



/* vtable 009010c0 slot 5 address 0048f0c2 */

/* ADDRESS: 0048f0c2 NAME: FUN_0048f0c2 */

undefined4 __fastcall FUN_0048f0c2(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* vtable 009010c0 slot 6 address 0048f0c8 */

/* ADDRESS: 0048f0c8 NAME: FUN_0048f0c8 */

undefined4 FUN_0048f0c8(void)

{
  return 0;
}



/* vtable 009010c0 slot 7 address 0048f0ce */

/* ADDRESS: 0048f0ce NAME: FUN_0048f0ce */

float10 FUN_0048f0ce(void)

{
  return (float10)1;
}



/* vtable 009010c0 slot 8 address 00493530 */

/* ADDRESS: 00493530 NAME: FUN_00493530 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00493530(undefined4 param_1,int *param_2,undefined1 **param_3)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined1 **ppuVar3;
  undefined1 **extraout_ECX;
  undefined1 **extraout_EDX;
  float10 fVar4;
  float fVar5;
  undefined1 **ppuVar6;
  undefined1 *local_38;
  undefined4 local_34;
  undefined1 local_30 [16];
  undefined1 local_20;
  
  if (param_3[0xe5] == (undefined1 *)0x0) {
    ppuVar3 = &local_38;
    fVar4 = (float10)FUN_0040e898();
    local_38 = local_30;
    fVar5 = DAT_0088dc40 / ((float)fVar4 * DAT_0088dc40 + _DAT_0088dc44);
    FUN_008220b0(local_38,"random.bow",10);
    local_34 = 10;
    local_38[10] = 0;
    local_20 = 0;
    ppuVar6 = param_3;
    FUN_0050c5ca(param_3,ppuVar3,0x3f000000,fVar5);
    FUN_0081ffd0();
    if ((char)param_2[0x5c] == '\0') {
      pcVar1 = *(code **)(*param_2 + 0x44);
      uVar2 = FUN_00846710(0x220);
      ppuVar3 = (undefined1 **)FUN_0045376e(param_2,param_3);
      (*pcVar1)(uVar2,ppuVar3);
      ppuVar6 = extraout_EDX;
    }
  }
  else {
    uVar2 = FUN_00453af6();
    FUN_0049873c(uVar2,param_3);
    ppuVar6 = extraout_ECX;
    ppuVar3 = extraout_ECX;
  }
  (**(code **)(*param_3 + 0x194))(ppuVar6,ppuVar3);
  return param_1;
}



/* vtable 009010c0 slot 9 address 0048f0de */

/* ADDRESS: 0048f0de NAME: FUN_0048f0de */

undefined4 FUN_0048f0de(void)

{
  return 0;
}



/* vtable 009010c0 slot 10 address 0048f0e4 */

/* ADDRESS: 0048f0e4 NAME: FUN_0048f0e4 */

undefined4 FUN_0048f0e4(void)

{
  return 0;
}



/* vtable 009010c0 slot 11 address 0048f0ea */

/* ADDRESS: 0048f0ea NAME: FUN_0048f0ea */

undefined4 FUN_0048f0ea(void)

{
  return 0;
}



/* vtable 009010c0 slot 12 address 0048f0f0 */

/* ADDRESS: 0048f0f0 NAME: FUN_0048f0f0 */

undefined4 FUN_0048f0f0(void)

{
  return 1;
}



/* vtable 009010c0 slot 13 address 0048f0f8 */

/* ADDRESS: 0048f0f8 NAME: FUN_0048f0f8 */

undefined4 FUN_0048f0f8(void)

{
  return 0;
}



/* vtable 009010c0 slot 14 address 0048f0fe */

/* ADDRESS: 0048f0fe NAME: FUN_0048f0fe */

void FUN_0048f0fe(void)

{
  return;
}



/* vtable 009010c0 slot 15 address 0049352c */

/* ADDRESS: 0049352c NAME: FUN_0049352c */

undefined1 FUN_0049352c(void)

{
  return 1;
}



/* vtable 009010c0 slot 16 address 0049352c */
/* Already included above. */

/* vtable 009010c0 slot 17 address 0048f1a6 */

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



/* vtable 009010c0 slot 18 address 0048f10a */

/* ADDRESS: 0048f10a NAME: FUN_0048f10a */

undefined4 __thiscall FUN_0048f10a(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x44))(param_2);
  return param_1;
}



/* vtable 009010c0 slot 19 address 0048f128 */

/* ADDRESS: 0048f128 NAME: FUN_0048f128 */

undefined4 FUN_0048f128(void)

{
  return 0xffffff;
}



/* vtable 009010c0 slot 20 address 0048f130 */

/* ADDRESS: 0048f130 NAME: FUN_0048f130 */

void FUN_0048f130(void)

{
  return;
}



/* vtable 009010c0 slot 21 address 0048f134 */

/* ADDRESS: 0048f134 NAME: FUN_0048f134 */

void FUN_0048f134(void)

{
  return;
}


