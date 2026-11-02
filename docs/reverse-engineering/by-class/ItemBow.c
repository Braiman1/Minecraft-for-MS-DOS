/* Candidate RTTI class: ItemBow
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00905264 slot 0 address 007771ec */

/* ADDRESS: 007771ec NAME: FUN_007771ec */

void FUN_007771ec(void)

{
  return;
}



/* vtable 00905264 slot 1 address 007771d4 */

/* ADDRESS: 007771d4 NAME: FUN_007771d4 */

void __fastcall FUN_007771d4(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00905264 slot 2 address 0048f08c */

/* ADDRESS: 0048f08c NAME: FUN_0048f08c */

int __thiscall FUN_0048f08c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}



/* vtable 00905264 slot 3 address 0048f09c */

/* ADDRESS: 0048f09c NAME: FUN_0048f09c */

int __thiscall FUN_0048f09c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return param_1;
}



/* vtable 00905264 slot 4 address 0048f0ac */

/* ADDRESS: 0048f0ac NAME: FUN_0048f0ac */

int __thiscall FUN_0048f0ac(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x10) = param_3 * 0x10 + param_2;
  return param_1;
}



/* vtable 00905264 slot 5 address 0048f0c2 */

/* ADDRESS: 0048f0c2 NAME: FUN_0048f0c2 */

undefined4 __fastcall FUN_0048f0c2(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* vtable 00905264 slot 6 address 0048f0c8 */

/* ADDRESS: 0048f0c8 NAME: FUN_0048f0c8 */

undefined4 FUN_0048f0c8(void)

{
  return 0;
}



/* vtable 00905264 slot 7 address 0048f0ce */

/* ADDRESS: 0048f0ce NAME: FUN_0048f0ce */

float10 FUN_0048f0ce(void)

{
  return (float10)1;
}



/* vtable 00905264 slot 8 address 004922a8 */

/* ADDRESS: 004922a8 NAME: FUN_004922a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004922a8(undefined4 param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 extraout_ECX;
  float10 fVar5;
  float fVar6;
  undefined1 *local_38;
  undefined4 local_34;
  undefined1 local_30 [16];
  undefined1 local_20;
  
  cVar2 = FUN_0048e944(*(undefined4 *)(DAT_00a0878c + 4));
  if (cVar2 != '\0') {
    fVar5 = (float10)FUN_0040e898(extraout_ECX);
    local_38 = local_30;
    fVar6 = DAT_0088dac4 / ((float)fVar5 * _DAT_0088dabc + _DAT_0088dac0);
    FUN_008220b0(local_38,"random.bow",10);
    local_34 = 10;
    local_38[10] = 0;
    local_20 = 0;
    FUN_0050c5ca(param_3,&local_38,0x3f800000,fVar6);
    FUN_0081ffd0();
    if ((char)param_2[0x5c] == '\0') {
      pcVar1 = *(code **)(*param_2 + 0x44);
      uVar3 = FUN_00846710(0x1d8);
      uVar4 = FUN_0044bb04(param_2,param_3);
      (*pcVar1)(uVar3,uVar4);
    }
  }
  return param_1;
}



/* vtable 00905264 slot 9 address 0048f0de */

/* ADDRESS: 0048f0de NAME: FUN_0048f0de */

undefined4 FUN_0048f0de(void)

{
  return 0;
}



/* vtable 00905264 slot 10 address 0048f0e4 */

/* ADDRESS: 0048f0e4 NAME: FUN_0048f0e4 */

undefined4 FUN_0048f0e4(void)

{
  return 0;
}



/* vtable 00905264 slot 11 address 0048f0ea */

/* ADDRESS: 0048f0ea NAME: FUN_0048f0ea */

undefined4 FUN_0048f0ea(void)

{
  return 0;
}



/* vtable 00905264 slot 12 address 0048f0f0 */

/* ADDRESS: 0048f0f0 NAME: FUN_0048f0f0 */

undefined4 FUN_0048f0f0(void)

{
  return 1;
}



/* vtable 00905264 slot 13 address 0048f0f8 */

/* ADDRESS: 0048f0f8 NAME: FUN_0048f0f8 */

undefined4 FUN_0048f0f8(void)

{
  return 0;
}



/* vtable 00905264 slot 14 address 0048f0fe */

/* ADDRESS: 0048f0fe NAME: FUN_0048f0fe */

void FUN_0048f0fe(void)

{
  return;
}



/* vtable 00905264 slot 15 address 0048f102 */

/* ADDRESS: 0048f102 NAME: FUN_0048f102 */

undefined1 __fastcall FUN_0048f102(int param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* vtable 00905264 slot 16 address 0048f106 */

/* ADDRESS: 0048f106 NAME: FUN_0048f106 */

undefined4 FUN_0048f106(void)

{
  return 0;
}



/* vtable 00905264 slot 17 address 0048f1a6 */

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



/* vtable 00905264 slot 18 address 0048f10a */

/* ADDRESS: 0048f10a NAME: FUN_0048f10a */

undefined4 __thiscall FUN_0048f10a(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x44))(param_2);
  return param_1;
}



/* vtable 00905264 slot 19 address 0048f128 */

/* ADDRESS: 0048f128 NAME: FUN_0048f128 */

undefined4 FUN_0048f128(void)

{
  return 0xffffff;
}



/* vtable 00905264 slot 20 address 0048f130 */

/* ADDRESS: 0048f130 NAME: FUN_0048f130 */

void FUN_0048f130(void)

{
  return;
}



/* vtable 00905264 slot 21 address 0048f134 */

/* ADDRESS: 0048f134 NAME: FUN_0048f134 */

void FUN_0048f134(void)

{
  return;
}


