/* Candidate RTTI class: ContainerFurnace
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00902534 slot 0 address 004419ce */

/* ADDRESS: 004419ce NAME: FUN_004419ce */

void __fastcall FUN_004419ce(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &PTR_FUN_00902534;
  if ((*(char *)(param_1 + 0x13) != '\0') && ((int *)param_1[0x12] != (int *)0x0)) {
    (**(code **)(*(int *)param_1[0x12] + 4))(param_2);
  }
  FUN_00440d92();
  return;
}



/* vtable 00902534 slot 1 address 004419f8 */

/* ADDRESS: 004419f8 NAME: FUN_004419f8 */

void __fastcall FUN_004419f8(void *param_1)

{
  FUN_004419ce();
  free(param_1);
  return;
}



/* vtable 00902534 slot 2 address 00441d30 */

/* ADDRESS: 00441d30 NAME: FUN_00441d30 */

void __fastcall FUN_00441d30(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar5 = 0;
  FUN_00440bfe();
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x48);
    iVar2 = *(int *)(iVar1 + 0x30);
    if ((uint)(*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24) >> 2) <= uVar5) break;
    piVar3 = *(int **)(*(int *)(param_1 + 0x24) + uVar5 * 4);
    if (*(int *)(param_1 + 0x50) != iVar2) {
      (**(code **)(*piVar3 + 0xc))(param_1,0,iVar2);
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x48) + 0x28);
    if (*(int *)(param_1 + 0x54) != iVar1) {
      (**(code **)(*piVar3 + 0xc))(param_1,1,iVar1);
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x48) + 0x2c);
    if (*(int *)(param_1 + 0x58) != iVar1) {
      (**(code **)(*piVar3 + 0xc))(param_1,2,iVar1);
    }
    uVar5 = uVar5 + 1;
  }
  uVar4 = *(undefined4 *)(iVar1 + 0x28);
  *(int *)(param_1 + 0x50) = iVar2;
  *(undefined4 *)(param_1 + 0x54) = uVar4;
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0x2c);
  return;
}



/* vtable 00902534 slot 3 address 00441a1c */

/* ADDRESS: 00441a1c NAME: FUN_00441a1c */

int * __thiscall FUN_00441a1c(int param_1,int param_2)

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
  if (param_2 == 2) {
    uVar6 = 1;
LAB_00441aa8:
    uVar5 = 0x27;
  }
  else {
    if (param_2 - 3U < 0x1b) {
      uVar5 = 0x27;
      uVar6 = 0;
      uVar4 = 0x1e;
      goto LAB_00441ab8;
    }
    uVar6 = 0;
    if (8 < param_2 - 0x1eU) goto LAB_00441aa8;
    uVar5 = 0x1e;
  }
  uVar4 = 3;
LAB_00441ab8:
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



/* vtable 00902534 slot 4 address 00440cb4 */

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



/* vtable 00902534 slot 5 address 00440bc8 */

/* ADDRESS: 00440bc8 NAME: FUN_00440bc8 */

void __fastcall FUN_00440bc8(int *param_1)

{
  (**(code **)(*param_1 + 8))();
  return;
}



/* vtable 00902534 slot 6 address 00441994 */

/* ADDRESS: 00441994 NAME: FUN_00441994 */

void __thiscall FUN_00441994(int param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x30) = param_3;
  }
  else if (param_2 == 1) {
    *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x28) = param_3;
  }
  else if (param_2 == 2) {
    *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x2c) = param_3;
  }
  return;
}



/* vtable 00902534 slot 7 address 00440bdc */

/* ADDRESS: 00440bdc NAME: FUN_00440bdc */

void FUN_00440bdc(void)

{
  return;
}



/* vtable 00902534 slot 8 address 00440bdc */
/* Already included above. */

/* vtable 00902534 slot 9 address 004419c6 */

/* ADDRESS: 004419c6 NAME: FUN_004419c6 */

void __fastcall FUN_004419c6(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004419cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x48) + 0x34))();
  return;
}


