/* Candidate RTTI class: J_JsonStringNodeSelector
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904b18 slot 0 address 007769ac */

/* ADDRESS: 007769ac NAME: FUN_007769ac */

void FUN_007769ac(void)

{
  return;
}



/* vtable 00904b18 slot 1 address 00776994 */

/* ADDRESS: 00776994 NAME: FUN_00776994 */

void __fastcall FUN_00776994(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00904b18 slot 2 address 0049c910 */

/* ADDRESS: 0049c910 NAME: FUN_0049c910 */

bool FUN_0049c910(int *param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((*param_1 == 0) && ((int *)param_1[1] != (int *)0x0)) {
    iVar1 = (**(code **)(*(int *)param_1[1] + 8))();
    bVar2 = iVar1 == 2;
  }
  return bVar2;
}



/* vtable 00904b18 slot 3 address 0049ca68 */

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



/* vtable 00904b18 slot 4 address 0049ca3a */

/* ADDRESS: 0049ca3a NAME: FUN_0049ca3a */

int * __fastcall FUN_0049ca3a(int *param_1)

{
  *param_1 = (int)(param_1 + 2);
  FUN_0049c9ae("A short form string","");
  return param_1;
}



/* vtable 00904b18 slot 5 address 0049ca0c */

/* ADDRESS: 0049ca0c NAME: FUN_0049ca0c */

int * __fastcall FUN_0049ca0c(int *param_1)

{
  *param_1 = (int)(param_1 + 2);
  FUN_0049c9ae("a value that is a string","");
  return param_1;
}



/* vtable 00904b18 slot 6 address 0049c936 */

/* ADDRESS: 0049c936 NAME: FUN_0049c936 */

undefined4 * __thiscall FUN_0049c936(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 local_24 [24];
  
  (**(code **)(**(int **)(param_3 + 4) + 0xc))(*(int **)(param_3 + 4));
  *param_1 = 1;
  param_1[1] = 0;
  uVar1 = FUN_00823370(local_24);
  param_1[0xe] = param_1 + 0xc;
  param_1[0xf] = param_1 + 0xc;
  param_1[0x10] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_0081ffd0(uVar1);
  return param_1;
}


