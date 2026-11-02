/* Candidate RTTI class: ContainerWorkbench
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00903648 slot 0 address 004422d0 */

/* ADDRESS: 004422d0 NAME: FUN_004422d0 */

void __fastcall FUN_004422d0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00903648;
  if ((int *)param_1[0x12] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x12] + 4))(param_2);
  }
  if ((int *)param_1[0x13] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x13] + 4))();
  }
  FUN_00440d92();
  return;
}



/* vtable 00903648 slot 1 address 00442300 */

/* ADDRESS: 00442300 NAME: FUN_00442300 */

void __fastcall FUN_00442300(void *param_1)

{
  FUN_004422d0();
  free(param_1);
  return;
}



/* vtable 00903648 slot 2 address 00440bfe */

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



/* vtable 00903648 slot 3 address 0044238a */

/* ADDRESS: 0044238a NAME: FUN_0044238a */

int * __thiscall FUN_0044238a(int param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  int *_Memory;
  int *_Memory_00;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x10) + param_2 * 4);
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  cVar2 = FUN_004f3788();
  if (cVar2 == '\0') {
    return (int *)0x0;
  }
  piVar3 = (int *)FUN_004f376e();
  _Memory = (int *)FUN_004988fe();
  if (param_2 == 0) {
    uVar6 = 1;
LAB_00442416:
    uVar5 = 0x2e;
  }
  else {
    if (param_2 - 10U < 0x1b) {
      uVar5 = 0x2e;
      uVar6 = 0;
      uVar4 = 0x25;
      goto LAB_00442426;
    }
    uVar6 = 0;
    if (8 < param_2 - 0x25U) goto LAB_00442416;
    uVar5 = 0x25;
  }
  uVar4 = 10;
LAB_00442426:
  FUN_00441308(piVar3,uVar4,uVar5,uVar6);
  if (*piVar3 == 0) {
    FUN_004f379a(0);
    _Memory_00 = piVar3;
  }
  else {
    (**(code **)(*piVar1 + 0x10))();
    _Memory_00 = (int *)0x0;
  }
  if (*piVar3 == *_Memory) {
    free(_Memory);
    return (int *)0x0;
  }
  (**(code **)(*piVar1 + 8))(piVar3);
  if (_Memory_00 == (int *)0x0) {
    return _Memory;
  }
  free(_Memory_00);
  return _Memory;
}



/* vtable 00903648 slot 4 address 0044277c */

/* ADDRESS: 0044277c NAME: FUN_0044277c */

void __thiscall FUN_0044277c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_00440cb4(param_2);
  if (*(char *)(*(int *)(param_1 + 0x50) + 0x170) == '\0') {
    iVar2 = 0;
    do {
      iVar1 = (**(code **)(**(int **)(param_1 + 0x48) + 0xc))(iVar2);
      if (iVar1 != 0) {
        FUN_00460950(iVar1);
        (**(code **)(**(int **)(param_1 + 0x48) + 0x14))(iVar2,0);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 9);
  }
  return;
}



/* vtable 00903648 slot 5 address 00442324 */

/* ADDRESS: 00442324 NAME: FUN_00442324 */

void __fastcall FUN_00442324(int param_1)

{
  void *_Memory;
  void *pvVar1;
  undefined4 extraout_ECX;
  
  _Memory = (void *)(**(code **)(**(int **)(param_1 + 0x4c) + 0xc))(0);
  FUN_00445888(extraout_ECX);
  pvVar1 = (void *)FUN_004427e6(*(undefined4 *)(param_1 + 0x48));
  (**(code **)(**(int **)(param_1 + 0x4c) + 0x14))(0,pvVar1);
  if ((_Memory != (void *)0x0) && (_Memory != pvVar1)) {
    free(_Memory);
  }
  return;
}



/* vtable 00903648 slot 6 address 00440bd8 */

/* ADDRESS: 00440bd8 NAME: FUN_00440bd8 */

void FUN_00440bd8(void)

{
  return;
}



/* vtable 00903648 slot 7 address 00440bdc */

/* ADDRESS: 00440bdc NAME: FUN_00440bdc */

void FUN_00440bdc(void)

{
  return;
}



/* vtable 00903648 slot 8 address 00440bdc */
/* Already included above. */

/* vtable 00903648 slot 9 address 0044249e */

/* ADDRESS: 0044249e NAME: FUN_0044249e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_0044249e(int param_1)

{
  bool bVar1;
  int iVar2;
  float10 extraout_ST0;
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0x50) + 8))();
  bVar1 = false;
  if (*(int *)(DAT_00a06238 + 8) == iVar2) {
    FUN_0044a04a((double)*(int *)(param_1 + 0x54) + DAT_00887ba8,
                 (double)*(int *)(param_1 + 0x58) + DAT_00887ba8,
                 (double)*(int *)(param_1 + 0x5c) + DAT_00887ba8);
    bVar1 = (double)extraout_ST0 <= _DAT_00887bb0;
  }
  return bVar1;
}


