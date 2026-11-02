/* Candidate RTTI class: ItemSword
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00907764 slot 0 address 007794e8 */

/* ADDRESS: 007794e8 NAME: FUN_007794e8 */

void FUN_007794e8(void)

{
  return;
}



/* vtable 00907764 slot 1 address 007794d0 */

/* ADDRESS: 007794d0 NAME: FUN_007794d0 */

void __fastcall FUN_007794d0(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00907764 slot 2 address 0048f08c */

/* ADDRESS: 0048f08c NAME: FUN_0048f08c */

int __thiscall FUN_0048f08c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}



/* vtable 00907764 slot 3 address 0048f09c */

/* ADDRESS: 0048f09c NAME: FUN_0048f09c */

int __thiscall FUN_0048f09c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return param_1;
}



/* vtable 00907764 slot 4 address 0048f0ac */

/* ADDRESS: 0048f0ac NAME: FUN_0048f0ac */

int __thiscall FUN_0048f0ac(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x10) = param_3 * 0x10 + param_2;
  return param_1;
}



/* vtable 00907764 slot 5 address 0048f0c2 */

/* ADDRESS: 0048f0c2 NAME: FUN_0048f0c2 */

undefined4 __fastcall FUN_0048f0c2(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* vtable 00907764 slot 6 address 0048f0c8 */

/* ADDRESS: 0048f0c8 NAME: FUN_0048f0c8 */

undefined4 FUN_0048f0c8(void)

{
  return 0;
}



/* vtable 00907764 slot 7 address 00498bd8 */

/* ADDRESS: 00498bd8 NAME: FUN_00498bd8 */

float10 FUN_00498bd8(undefined4 param_1,int param_2)

{
  float fVar1;
  
  fVar1 = DAT_0088df44;
  if (*(int *)(param_2 + 8) != *(int *)(DAT_00a062a8 + 8)) {
    fVar1 = DAT_0088df48;
  }
  return (float10)fVar1;
}



/* vtable 00907764 slot 8 address 0048f0d4 */

/* ADDRESS: 0048f0d4 NAME: FUN_0048f0d4 */

undefined4 FUN_0048f0d4(undefined4 param_1)

{
  return param_1;
}



/* vtable 00907764 slot 9 address 0048f0de */

/* ADDRESS: 0048f0de NAME: FUN_0048f0de */

undefined4 FUN_0048f0de(void)

{
  return 0;
}



/* vtable 00907764 slot 10 address 00498c2c */

/* ADDRESS: 00498c2c NAME: FUN_00498c2c */

undefined4 FUN_00498c2c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0049873c(1,param_3);
  return 1;
}



/* vtable 00907764 slot 11 address 00498c50 */

/* ADDRESS: 00498c50 NAME: FUN_00498c50 */

undefined4 FUN_00498c50(void)

{
  undefined4 in_stack_00000018;
  
  FUN_0049873c(2,in_stack_00000018);
  return 1;
}



/* vtable 00907764 slot 12 address 00498c08 */

/* ADDRESS: 00498c08 NAME: FUN_00498c08 */

undefined4 __fastcall FUN_00498c08(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}



/* vtable 00907764 slot 13 address 00498c12 */

/* ADDRESS: 00498c12 NAME: FUN_00498c12 */

undefined4 FUN_00498c12(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 8) >> 8),
                  *(int *)(DAT_00a062a8 + 8) == *(int *)(param_1 + 8));
}



/* vtable 00907764 slot 14 address 0048f0fe */

/* ADDRESS: 0048f0fe NAME: FUN_0048f0fe */

void FUN_0048f0fe(void)

{
  return;
}



/* vtable 00907764 slot 15 address 00498c0e */

/* ADDRESS: 00498c0e NAME: FUN_00498c0e */

undefined1 FUN_00498c0e(void)

{
  return 1;
}



/* vtable 00907764 slot 16 address 0048f106 */

/* ADDRESS: 0048f106 NAME: FUN_0048f106 */

undefined4 FUN_0048f106(void)

{
  return 0;
}



/* vtable 00907764 slot 17 address 0048f1a6 */

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



/* vtable 00907764 slot 18 address 0048f10a */

/* ADDRESS: 0048f10a NAME: FUN_0048f10a */

undefined4 __thiscall FUN_0048f10a(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x44))(param_2);
  return param_1;
}



/* vtable 00907764 slot 19 address 0048f128 */

/* ADDRESS: 0048f128 NAME: FUN_0048f128 */

undefined4 FUN_0048f128(void)

{
  return 0xffffff;
}



/* vtable 00907764 slot 20 address 0048f130 */

/* ADDRESS: 0048f130 NAME: FUN_0048f130 */

void FUN_0048f130(void)

{
  return;
}



/* vtable 00907764 slot 21 address 0048f134 */

/* ADDRESS: 0048f134 NAME: FUN_0048f134 */

void FUN_0048f134(void)

{
  return;
}


