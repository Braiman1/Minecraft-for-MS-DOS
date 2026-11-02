/* Candidate RTTI class: ContainerChest
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00900018 slot 0 address 004414fc */

/* ADDRESS: 004414fc NAME: FUN_004414fc */

void __fastcall FUN_004414fc(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00900018;
  if ((*(char *)(param_1 + 0x13) != '\0') && ((int *)param_1[0x12] != (int *)0x0)) {
    (**(code **)(*(int *)param_1[0x12] + 4))(param_2);
  }
  FUN_00440d92();
  return;
}



/* vtable 00900018 slot 1 address 00441526 */

/* ADDRESS: 00441526 NAME: FUN_00441526 */

void __fastcall FUN_00441526(void *param_1)

{
  FUN_004414fc();
  free(param_1);
  return;
}



/* vtable 00900018 slot 2 address 00440bfe */

/* ADDRESS: 00440bfe NAME: FUN_00440bfe */

void __fastcall FUN_00440bfe(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *_Memory;
  int iVar7;
  
  for (uVar5 = 0; uVar5 < (uint)(*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2);
      uVar5 = uVar5 + 1) {
    iVar2 = FUN_004f376e();
    _Memory = *(void **)(*(int *)(param_1 + 4) + uVar5 * 4);
    pvVar6 = _Memory;
    iVar7 = iVar2;
    cVar1 = FUN_00498958(_Memory,iVar2);
    if (cVar1 == '\0') {
      if (_Memory != (void *)0x0) {
        iVar7 = 0x10;
        free(_Memory);
        pvVar6 = _Memory;
      }
      uVar3 = 0;
      if (iVar2 != 0) {
        uVar3 = FUN_004988fe(pvVar6,iVar7);
      }
      *(undefined4 *)(*(int *)(param_1 + 4) + uVar5 * 4) = uVar3;
      uVar4 = 0;
      while( true ) {
        if ((uint)(*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24) >> 2) <= uVar4) break;
        (**(code **)(**(int **)(*(int *)(param_1 + 0x24) + uVar4 * 4) + 8))(param_1,uVar5,uVar3);
        uVar4 = uVar4 + 1;
      }
    }
  }
  return;
}



/* vtable 00900018 slot 3 address 0044154a */

/* ADDRESS: 0044154a NAME: FUN_0044154a */

undefined4 __thiscall FUN_0044154a(int param_1,int param_2)

{
  int *piVar1;
  bool bVar2;
  char cVar3;
  int *_Memory;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x10) + param_2 * 4);
  if ((piVar1 == (int *)0x0) || (cVar3 = FUN_004f3788(), cVar3 == '\0')) {
    return 0;
  }
  _Memory = (int *)FUN_004f376e();
  uVar4 = FUN_004988fe();
  iVar5 = *(int *)(param_1 + 0x50) * 9;
  bVar2 = iVar5 <= param_2;
  if (bVar2) {
    iVar6 = 0;
  }
  else {
    iVar6 = iVar5;
    iVar5 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 2;
  }
  FUN_00441308(_Memory,iVar6,iVar5,!bVar2);
  if (*_Memory == 0) {
    FUN_004f379a(0);
    free(_Memory);
    return uVar4;
  }
  (**(code **)(*piVar1 + 0x10))();
  return uVar4;
}



/* vtable 00900018 slot 4 address 00440cb4 */

/* ADDRESS: 00440cb4 NAME: FUN_00440cb4 */

void FUN_00440cb4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0048efa6();
  if (iVar1 == 0) {
    return;
  }
  uVar2 = FUN_0048efa6();
  FUN_00460950(uVar2);
  FUN_0048ef84();
  return;
}



/* vtable 00900018 slot 5 address 00440bc8 */

/* ADDRESS: 00440bc8 NAME: FUN_00440bc8 */

void __fastcall FUN_00440bc8(int *param_1)

{
  (**(code **)(*param_1 + 8))();
  return;
}



/* vtable 00900018 slot 6 address 00440bd8 */

/* ADDRESS: 00440bd8 NAME: FUN_00440bd8 */

void FUN_00440bd8(void)

{
  return;
}



/* vtable 00900018 slot 7 address 00440bdc */

/* ADDRESS: 00440bdc NAME: FUN_00440bdc */

void FUN_00440bdc(void)

{
  return;
}



/* vtable 00900018 slot 8 address 00440bdc */
/* Already included above. */

/* vtable 00900018 slot 9 address 004414f4 */

/* ADDRESS: 004414f4 NAME: FUN_004414f4 */

void __fastcall FUN_004414f4(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004414f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x48) + 0x24))();
  return;
}


