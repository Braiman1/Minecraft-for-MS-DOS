/* Candidate RTTI class: ShapedRecipes
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008ff50c slot 0 address 004f3148 */

/* ADDRESS: 004f3148 NAME: FUN_004f3148 */

void __fastcall FUN_004f3148(int param_1)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  
  if (*(void **)(param_1 + 0x14) != (void *)0x0) {
    free(*(void **)(param_1 + 0x14));
  }
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  for (iVar4 = 0; pvVar3 = *(void **)(param_1 + 0x10), iVar4 < iVar1 * iVar2; iVar4 = iVar4 + 1) {
    pvVar3 = *(void **)((int)pvVar3 + iVar4 * 4);
    if (pvVar3 != (void *)0x0) {
      free(pvVar3);
    }
  }
  if (pvVar3 != (void *)0x0) {
    free(pvVar3);
  }
  return;
}



/* vtable 008ff50c slot 1 address 004f31a8 */

/* ADDRESS: 004f31a8 NAME: FUN_004f31a8 */

void __fastcall FUN_004f31a8(void *param_1)

{
  FUN_004f3148();
  free(param_1);
  return;
}



/* vtable 008ff50c slot 2 address 004f3344 */

/* ADDRESS: 004f3344 NAME: FUN_004f3344 */

undefined4 __thiscall FUN_004f3344(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    if (3 - *(int *)(param_1 + 8) < iVar2) {
      return 0;
    }
    for (iVar3 = 0; iVar3 <= 3 - *(int *)(param_1 + 0xc); iVar3 = iVar3 + 1) {
      cVar1 = FUN_004f325c(param_2,iVar2,iVar3,1);
      if ((cVar1 != '\0') || (cVar1 = FUN_004f325c(param_2,iVar2,iVar3,0), cVar1 != '\0')) {
        return 1;
      }
    }
    iVar2 = iVar2 + 1;
  } while( true );
}



/* vtable 008ff50c slot 3 address 004f31cc */

/* ADDRESS: 004f31cc NAME: FUN_004f31cc */

undefined4 __fastcall FUN_004f31cc(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_00846710(0x10);
  uVar2 = FUN_0049870e();
  FUN_00498316((*(undefined4 **)(param_1 + 0x14))[2],**(undefined4 **)(param_1 + 0x14),uVar2);
  return uVar1;
}



/* vtable 008ff50c slot 4 address 004f3140 */

/* ADDRESS: 004f3140 NAME: FUN_004f3140 */

int __fastcall FUN_004f3140(int param_1)

{
  return *(int *)(param_1 + 8) * *(int *)(param_1 + 0xc);
}



/* vtable 008ff50c slot 5 address 004f313c */

/* ADDRESS: 004f313c NAME: FUN_004f313c */

undefined4 __fastcall FUN_004f313c(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}


