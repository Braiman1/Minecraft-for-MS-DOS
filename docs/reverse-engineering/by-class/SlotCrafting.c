/* Candidate RTTI class: SlotCrafting
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fe3dc slot 0 address 007736b0 */

/* ADDRESS: 007736b0 NAME: FUN_007736b0 */

void FUN_007736b0(void)

{
  return;
}



/* vtable 008fe3dc slot 1 address 00773698 */

/* ADDRESS: 00773698 NAME: FUN_00773698 */

void __fastcall FUN_00773698(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 008fe3dc slot 2 address 004f38b6 */

/* ADDRESS: 004f38b6 NAME: FUN_004f38b6 */

void __thiscall FUN_004f38b6(int param_1,int param_2)

{
  code *pcVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  int *_Memory;
  undefined4 uVar5;
  undefined4 uVar6;
  int *extraout_ECX;
  int *extraout_EDX;
  int *piVar7;
  int *unaff_EDI;
  int *piVar8;
  
  piVar3 = (int *)FUN_00498a58(*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x24),
                               *(int *)(param_1 + 0x1c));
  iVar4 = *(int *)(param_2 + 8);
  if (iVar4 == *(int *)(DAT_00a06238 + 8)) {
    iVar4 = **(int **)(param_1 + 0x1c);
    uVar5 = DAT_009f609c;
  }
  else if (iVar4 == *(int *)(DAT_00a0876c + 4)) {
    iVar4 = **(int **)(param_1 + 0x1c);
    uVar5 = DAT_009f6098;
  }
  else if (iVar4 == *(int *)(DAT_00a0622c + 8)) {
    iVar4 = **(int **)(param_1 + 0x1c);
    uVar5 = DAT_009f6094;
  }
  else if (iVar4 == *(int *)(DAT_00a0871c + 4)) {
    iVar4 = **(int **)(param_1 + 0x1c);
    uVar5 = DAT_009f608c;
  }
  else if (iVar4 == *(int *)(DAT_00a08700 + 4)) {
    iVar4 = **(int **)(param_1 + 0x1c);
    uVar5 = DAT_009f6088;
  }
  else if (iVar4 == *(int *)(DAT_00a0861c + 4)) {
    iVar4 = **(int **)(param_1 + 0x1c);
    uVar5 = DAT_009f6084;
  }
  else if (iVar4 == *(int *)(DAT_00a0875c + 4)) {
    iVar4 = **(int **)(param_1 + 0x1c);
    uVar5 = DAT_009f6080;
  }
  else {
    if (iVar4 != *(int *)(DAT_00a08774 + 4)) goto LAB_004f3926;
    iVar4 = **(int **)(param_1 + 0x1c);
    uVar5 = DAT_009f6074;
  }
  piVar3 = (int *)(**(code **)(iVar4 + 0x1a8))(uVar5,1);
LAB_004f3926:
  piVar7 = (int *)0x0;
  piVar8 = piVar3;
  while( true ) {
    iVar4 = (**(code **)(**(int **)(param_1 + 0x18) + 8))(piVar3,piVar8);
    if (iVar4 <= (int)piVar7) break;
    piVar8 = piVar7;
    iVar4 = (**(code **)(**(int **)(param_1 + 0x18) + 0xc))();
    piVar3 = unaff_EDI;
    if (iVar4 != 0) {
      iVar4 = FUN_004983a6();
      _Memory = (int *)(**(code **)(**(int **)(param_1 + 0x18) + 0x10))(piVar7,1);
      piVar3 = extraout_ECX;
      piVar8 = extraout_ECX;
      if (iVar4 != 0) {
        cVar2 = FUN_0048f37a();
        if (cVar2 != '\0') {
          unaff_EDI = *(int **)(param_1 + 0x18);
          pcVar1 = *(code **)(*unaff_EDI + 0x14);
          uVar5 = FUN_00846710(0x10);
          uVar6 = FUN_0048f376();
          FUN_004982b6(uVar6);
          (*pcVar1)(piVar7,uVar5);
          piVar3 = extraout_EDX;
          piVar8 = extraout_EDX;
        }
      }
      if (_Memory != (int *)0x0) {
        piVar8 = (int *)0x10;
        free(_Memory);
        piVar3 = _Memory;
      }
    }
    piVar7 = (int *)((int)piVar7 + 1);
  }
  return;
}



/* vtable 008fe3dc slot 3 address 004f38b0 */

/* ADDRESS: 004f38b0 NAME: FUN_004f38b0 */

undefined4 FUN_004f38b0(void)

{
  return 0;
}



/* vtable 008fe3dc slot 4 address 004f372e */

/* ADDRESS: 004f372e NAME: FUN_004f372e */

void __fastcall FUN_004f372e(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004f3733. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 8) + 0x20))();
  return;
}



/* vtable 008fe3dc slot 5 address 004f3736 */

/* ADDRESS: 004f3736 NAME: FUN_004f3736 */

void __fastcall FUN_004f3736(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004f373b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 8) + 0x1c))();
  return;
}



/* vtable 008fe3dc slot 6 address 004f373e */

/* ADDRESS: 004f373e NAME: FUN_004f373e */

undefined4 FUN_004f373e(void)

{
  return 0xffffffff;
}


