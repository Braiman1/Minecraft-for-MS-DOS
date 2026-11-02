/* Candidate RTTI class: ItemShears
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fb3e0 slot 0 address 007713fc */

/* ADDRESS: 007713fc NAME: FUN_007713fc */

void FUN_007713fc(void)

{
  return;
}



/* vtable 008fb3e0 slot 1 address 007713e4 */

/* ADDRESS: 007713e4 NAME: FUN_007713e4 */

void __fastcall FUN_007713e4(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 008fb3e0 slot 2 address 0048f08c */

/* ADDRESS: 0048f08c NAME: FUN_0048f08c */

int __thiscall FUN_0048f08c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  return param_1;
}



/* vtable 008fb3e0 slot 3 address 0048f09c */

/* ADDRESS: 0048f09c NAME: FUN_0048f09c */

int __thiscall FUN_0048f09c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 8) = param_2;
  return param_1;
}



/* vtable 008fb3e0 slot 4 address 0048f0ac */

/* ADDRESS: 0048f0ac NAME: FUN_0048f0ac */

int __thiscall FUN_0048f0ac(int param_1,int param_2,int param_3)

{
  *(int *)(param_1 + 0x10) = param_3 * 0x10 + param_2;
  return param_1;
}



/* vtable 008fb3e0 slot 5 address 0048f0c2 */

/* ADDRESS: 0048f0c2 NAME: FUN_0048f0c2 */

undefined4 __fastcall FUN_0048f0c2(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}



/* vtable 008fb3e0 slot 6 address 0048f0c8 */

/* ADDRESS: 0048f0c8 NAME: FUN_0048f0c8 */

undefined4 FUN_0048f0c8(void)

{
  return 0;
}



/* vtable 008fb3e0 slot 7 address 00497b82 */

/* ADDRESS: 00497b82 NAME: FUN_00497b82 */

float10 FUN_00497b82(undefined4 param_1,int param_2)

{
  int iVar1;
  float10 fVar2;
  float fVar3;
  
  iVar1 = *(int *)(param_2 + 8);
  if ((iVar1 == *(int *)(DAT_00a062a8 + 8)) || (iVar1 == *(int *)(DAT_00a062d8 + 8))) {
    fVar3 = DAT_0088ded0;
  }
  else {
    if (iVar1 != *(int *)(DAT_00a06294 + 8)) {
      fVar2 = (float10)FUN_0048f0ce();
      return fVar2;
    }
    fVar3 = DAT_0088ded4;
  }
  return (float10)fVar3;
}



/* vtable 008fb3e0 slot 8 address 0048f0d4 */

/* ADDRESS: 0048f0d4 NAME: FUN_0048f0d4 */

undefined4 FUN_0048f0d4(undefined4 param_1)

{
  return param_1;
}



/* vtable 008fb3e0 slot 9 address 0048f0de */

/* ADDRESS: 0048f0de NAME: FUN_0048f0de */

undefined4 FUN_0048f0de(void)

{
  return 0;
}



/* vtable 008fb3e0 slot 10 address 0048f0e4 */

/* ADDRESS: 0048f0e4 NAME: FUN_0048f0e4 */

undefined4 FUN_0048f0e4(void)

{
  return 0;
}



/* vtable 008fb3e0 slot 11 address 00497b06 */

/* ADDRESS: 00497b06 NAME: FUN_00497b06 */

void FUN_00497b06(undefined4 param_1,int param_2)

{
  undefined4 in_stack_00000018;
  
  if ((*(int *)(DAT_00a062d8 + 8) == param_2) || (*(int *)(DAT_00a062a8 + 8) == param_2)) {
    FUN_0049873c(1,in_stack_00000018);
  }
  FUN_0048f0ea();
  return;
}



/* vtable 008fb3e0 slot 12 address 0048f0f0 */

/* ADDRESS: 0048f0f0 NAME: FUN_0048f0f0 */

undefined4 FUN_0048f0f0(void)

{
  return 1;
}



/* vtable 008fb3e0 slot 13 address 00497aec */

/* ADDRESS: 00497aec NAME: FUN_00497aec */

undefined4 FUN_00497aec(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 8) >> 8),
                  *(int *)(DAT_00a062a8 + 8) == *(int *)(param_1 + 8));
}



/* vtable 008fb3e0 slot 14 address 0048f0fe */

/* ADDRESS: 0048f0fe NAME: FUN_0048f0fe */

void FUN_0048f0fe(void)

{
  return;
}



/* vtable 008fb3e0 slot 15 address 0048f102 */

/* ADDRESS: 0048f102 NAME: FUN_0048f102 */

undefined1 __fastcall FUN_0048f102(int param_1)

{
  return *(undefined1 *)(param_1 + 0x14);
}



/* vtable 008fb3e0 slot 16 address 0048f106 */

/* ADDRESS: 0048f106 NAME: FUN_0048f106 */

undefined4 FUN_0048f106(void)

{
  return 0;
}



/* vtable 008fb3e0 slot 17 address 0048f1a6 */

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



/* vtable 008fb3e0 slot 18 address 0048f10a */

/* ADDRESS: 0048f10a NAME: FUN_0048f10a */

undefined4 __thiscall FUN_0048f10a(undefined4 param_1,int *param_2)

{
  (**(code **)(*param_2 + 0x44))(param_2);
  return param_1;
}



/* vtable 008fb3e0 slot 19 address 0048f128 */

/* ADDRESS: 0048f128 NAME: FUN_0048f128 */

undefined4 FUN_0048f128(void)

{
  return 0xffffff;
}



/* vtable 008fb3e0 slot 20 address 0048f130 */

/* ADDRESS: 0048f130 NAME: FUN_0048f130 */

void FUN_0048f130(void)

{
  return;
}



/* vtable 008fb3e0 slot 21 address 0048f134 */

/* ADDRESS: 0048f134 NAME: FUN_0048f134 */

void FUN_0048f134(void)

{
  return;
}


