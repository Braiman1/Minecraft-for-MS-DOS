/* Candidate RTTI class: __cxxabiv1::__pbase_type_info
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009079ac slot 0 address 00771ea0 */

/* ADDRESS: 00771ea0 NAME: FUN_00771ea0 */

void __fastcall FUN_00771ea0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_009079ac;
  FUN_0083c7f0();
  return;
}



/* vtable 009079ac slot 1 address 00771e70 */

/* ADDRESS: 00771e70 NAME: FUN_00771e70 */

void __fastcall FUN_00771e70(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_009079ac;
  FUN_0083c7f0();
  free(param_1);
  return;
}



/* vtable 009079ac slot 2 address 007ce5f0 */

/* ADDRESS: 007ce5f0 NAME: FUN_007ce5f0 */

undefined4 FUN_007ce5f0(void)

{
  return 0;
}



/* vtable 009079ac slot 3 address 007ce5f0 */
/* Already included above. */

/* vtable 009079ac slot 4 address 0077b1f0 */

/* ADDRESS: 0077b1f0 NAME: FUN_0077b1f0 */

undefined4 __thiscall FUN_0077b1f0(int *param_1,int *param_2,undefined4 *param_3,uint param_4)

{
  uint uVar1;
  char cVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  
  uVar3 = FUN_007ce660(param_2);
  if ((char)uVar3 == '\0') {
    cVar2 = FUN_007ce660(&PTR_PTR_008f1dcc);
    if (cVar2 == '\0') {
LAB_0077b270:
      cVar2 = FUN_007ce660(*(undefined4 *)(*param_2 + -4));
      if (cVar2 == '\0') {
        return 0;
      }
      if ((param_4 & 1) == 0) {
        return uVar3;
      }
      uVar1 = param_2[2];
      uVar5 = param_1[2] & 0x60;
      uVar6 = uVar1;
      if ((~uVar5 & uVar1 & 0x60) != 0) {
        uVar6 = uVar1 & uVar5;
      }
      if ((~param_1[2] & uVar6) != 0 || (~(uVar1 & 0x60) & uVar5) != 0) {
        return uVar3;
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x18);
      if (UNRECOVERED_JUMPTABLE == (code *)&LAB_0077b390) {
        UNRECOVERED_JUMPTABLE = *(code **)(*(int *)param_1[3] + 0x10);
      }
                    /* WARNING: Could not recover jumptable at 0x0077b317. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (*UNRECOVERED_JUMPTABLE)();
      return uVar3;
    }
    cVar2 = FUN_007ce660(&PTR_PTR_008f1e14);
    if (cVar2 == '\0') {
      cVar2 = FUN_007ce660(&PTR_PTR_008f1e50);
      if (cVar2 == '\0') goto LAB_0077b270;
      cVar2 = (**(code **)(*(int *)param_1[3] + 0xc))();
      puVar4 = &DAT_009099c0;
      if (cVar2 != '\0') {
        puVar4 = &DAT_009099c4;
      }
      *param_3 = puVar4;
    }
    else {
      *param_3 = 0;
    }
  }
  return 1;
}



/* vtable 009079ac slot 5 address 007ce5e0 */

/* ADDRESS: 007ce5e0 NAME: FUN_007ce5e0 */

undefined4 FUN_007ce5e0(void)

{
  return 0;
}



/* vtable 009079ac slot 6 address 0077b390 */

/* ADDRESS: 0077b390 NAME: FUN_0077b390 */

void __fastcall FUN_0077b390(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077b3a5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0xc) + 0x10))();
  return;
}


