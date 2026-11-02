/* Candidate RTTI class: J_JsonArrayNodeSelector
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904a1c slot 0 address 00776598 */

/* ADDRESS: 00776598 NAME: FUN_00776598 */

void FUN_00776598(void)

{
  return;
}



/* vtable 00904a1c slot 1 address 00776580 */

/* ADDRESS: 00776580 NAME: FUN_00776580 */

void __fastcall FUN_00776580(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00904a1c slot 2 address 00499844 */

/* ADDRESS: 00499844 NAME: FUN_00499844 */

undefined4 FUN_00499844(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if ((*param_1 == 0) && ((int *)param_1[1] != (int *)0x0)) {
    iVar2 = (**(code **)(*(int *)param_1[1] + 8))();
    uVar1 = CONCAT31((int3)((uint)(iVar2 + -1) >> 8),iVar2 + -1 == 0);
  }
  return uVar1;
}



/* vtable 00904a1c slot 3 address 0049ca68 */

/* ADDRESS: 0049ca68 NAME: FUN_0049ca68 */

undefined4 __thiscall FUN_0049ca68(undefined4 param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = (**(code **)(*param_2 + 8))(param_3);
  if (cVar1 == '\0') {
    uVar2 = FUN_00846950(0x18);
    FUN_0049ad34(uVar2,param_2);
                    /* WARNING: Subroutine does not return */
    FUN_00846ea0(uVar2,&PTR_PTR_008f1978,&LAB_00776d70);
  }
  (**(code **)(*param_2 + 0x18))(param_2,param_3);
  return param_1;
}



/* vtable 00904a1c slot 4 address 004998f4 */

/* ADDRESS: 004998f4 NAME: FUN_004998f4 */

int * __fastcall FUN_004998f4(int *param_1)

{
  *param_1 = (int)(param_1 + 2);
  FUN_00499868("A short form array","");
  return param_1;
}



/* vtable 00904a1c slot 5 address 004998c6 */

/* ADDRESS: 004998c6 NAME: FUN_004998c6 */

int * __fastcall FUN_004998c6(int *param_1)

{
  *param_1 = (int)(param_1 + 2);
  FUN_00499868("an array","");
  return param_1;
}



/* vtable 00904a1c slot 6 address 00499922 */

/* ADDRESS: 00499922 NAME: FUN_00499922 */

undefined4 * __thiscall FUN_00499922(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *local_28;
  int local_24;
  
  (**(code **)(**(int **)(param_3 + 4) + 0x14))(*(int **)(param_3 + 4));
  param_1[2] = param_1 + 4;
  param_1[3] = 0;
  *param_1 = 2;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  iVar2 = local_24 - (int)local_28;
  if (iVar2 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = (undefined1 *)FUN_00846710(iVar2);
  }
  param_1[8] = puVar1;
  param_1[9] = puVar1;
  param_1[10] = puVar1 + iVar2;
  if (iVar2 != 0) {
    puVar3 = local_28;
    for (; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar1 = puVar1 + 1;
    }
  }
  param_1[9] = puVar1;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = param_1 + 0xc;
  param_1[0xf] = param_1 + 0xc;
  param_1[0x10] = 0;
  if (local_28 != (undefined1 *)0x0) {
    free(local_28);
  }
  return param_1;
}


