/* Candidate RTTI class: SlotArmor
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009078ec slot 0 address 00779620 */

/* ADDRESS: 00779620 NAME: FUN_00779620 */

void FUN_00779620(void)

{
  return;
}



/* vtable 009078ec slot 1 address 00779608 */

/* ADDRESS: 00779608 NAME: FUN_00779608 */

void __fastcall FUN_00779608(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 009078ec slot 2 address 004f3718 */

/* ADDRESS: 004f3718 NAME: FUN_004f3718 */

void __fastcall FUN_004f3718(int *param_1)

{
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* vtable 009078ec slot 3 address 004f37f6 */

/* ADDRESS: 004f37f6 NAME: FUN_004f37f6 */

bool __thiscall FUN_004f37f6(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  if (((param_2 == 0) || (cVar1 = FUN_00498352(), cVar1 == '\0')) ||
     (iVar2 = FUN_004983a6(), iVar2 == 0)) {
    return false;
  }
  iVar3 = FUN_00846ef0(iVar2,&PTR_PTR_008f1968,&PTR_PTR_008f1c9c,0);
  if (iVar3 == 0) {
    if (*(int *)(iVar2 + 4) != *(int *)(DAT_00a061c8 + 8)) {
      return false;
    }
    bVar4 = *(int *)(param_1 + 0x18) == 0;
  }
  else {
    bVar4 = *(int *)(iVar3 + 0x24) == *(int *)(param_1 + 0x18);
  }
  return bVar4;
}



/* vtable 009078ec slot 4 address 004f372e */

/* ADDRESS: 004f372e NAME: FUN_004f372e */

void __fastcall FUN_004f372e(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x004f3733. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 8) + 0x20))();
  return;
}



/* vtable 009078ec slot 5 address 004f37f0 */

/* ADDRESS: 004f37f0 NAME: FUN_004f37f0 */

undefined4 FUN_004f37f0(void)

{
  return 1;
}



/* vtable 009078ec slot 6 address 004f373e */

/* ADDRESS: 004f373e NAME: FUN_004f373e */

undefined4 FUN_004f373e(void)

{
  return 0xffffffff;
}


