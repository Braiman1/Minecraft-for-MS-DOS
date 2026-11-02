/* Candidate RTTI class: InventoryCraftResult
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904398 slot 0 address 0048deea */

/* ADDRESS: 0048deea NAME: FUN_0048deea */

void __fastcall FUN_0048deea(int param_1)

{
  if ((void *)**(undefined4 **)(param_1 + 4) != (void *)0x0) {
    free((void *)**(undefined4 **)(param_1 + 4));
  }
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    free(*(void **)(param_1 + 4));
  }
  return;
}



/* vtable 00904398 slot 1 address 0048df22 */

/* ADDRESS: 0048df22 NAME: FUN_0048df22 */

void __fastcall FUN_0048df22(void *param_1)

{
  FUN_0048deea();
  free(param_1);
  return;
}



/* vtable 00904398 slot 2 address 0048de98 */

/* ADDRESS: 0048de98 NAME: FUN_0048de98 */

undefined4 FUN_0048de98(void)

{
  return 1;
}



/* vtable 00904398 slot 3 address 0048de9e */

/* ADDRESS: 0048de9e NAME: FUN_0048de9e */

undefined4 __thiscall FUN_0048de9e(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4);
}



/* vtable 00904398 slot 4 address 0048deae */

/* ADDRESS: 0048deae NAME: FUN_0048deae */

void __thiscall FUN_0048deae(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)(param_1 + 4) + param_2 * 4);
  if (*piVar1 != 0) {
    *piVar1 = 0;
  }
  return;
}



/* vtable 00904398 slot 5 address 0048dec8 */

/* ADDRESS: 0048dec8 NAME: FUN_0048dec8 */

void __thiscall FUN_0048dec8(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4) = param_3;
  return;
}



/* vtable 00904398 slot 6 address 0048df46 */

/* ADDRESS: 0048df46 NAME: FUN_0048df46 */

int * __fastcall FUN_0048df46(int *param_1)

{
  *param_1 = (int)(param_1 + 2);
  FUN_008220b0(param_1 + 2,"Result",6);
  param_1[1] = 6;
  *(undefined1 *)(*param_1 + 6) = 0;
  return param_1;
}



/* vtable 00904398 slot 7 address 0048dedc */

/* ADDRESS: 0048dedc NAME: FUN_0048dedc */

undefined4 FUN_0048dedc(void)

{
  return 0x40;
}



/* vtable 00904398 slot 8 address 0048dee2 */

/* ADDRESS: 0048dee2 NAME: FUN_0048dee2 */

void FUN_0048dee2(void)

{
  return;
}



/* vtable 00904398 slot 9 address 0048dee4 */

/* ADDRESS: 0048dee4 NAME: FUN_0048dee4 */

undefined1 FUN_0048dee4(void)

{
  return 1;
}


