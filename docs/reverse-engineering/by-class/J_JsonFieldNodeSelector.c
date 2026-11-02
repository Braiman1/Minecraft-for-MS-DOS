/* Candidate RTTI class: J_JsonFieldNodeSelector
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904a40 slot 0 address 007765c0 */

/* ADDRESS: 007765c0 NAME: thunk_FUN_007765c8 */

void thunk_FUN_007765c8(void)

{
  FUN_007765c8();
  return;
}



/* vtable 00904a40 slot 1 address 0077659c */

/* ADDRESS: 0077659c NAME: FUN_0077659c */

void __fastcall FUN_0077659c(void *param_1)

{
  FUN_007765c8();
  free(param_1);
  return;
}



/* vtable 00904a40 slot 2 address 0049a11e */

/* ADDRESS: 0049a11e NAME: FUN_0049a11e */

undefined4 __thiscall FUN_0049a11e(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int *piVar6;
  undefined8 uVar7;
  
  uVar4 = 0;
  if (*param_2 == 3) {
    piVar1 = param_2 + 0xc;
    piVar6 = (int *)param_2[0xd];
    param_1 = param_1 + 4;
    piVar5 = piVar1;
    while (piVar6 != (int *)0x0) {
      iVar3 = FUN_0078c7c0(param_1);
      piVar2 = (int *)piVar6[3];
      if (-1 < iVar3) {
        piVar5 = piVar6;
        piVar2 = (int *)piVar6[2];
      }
      piVar6 = piVar2;
    }
    if ((piVar1 != piVar5) &&
       (uVar7 = FUN_0078c7c0(piVar5 + 4), param_1 = (int)((ulonglong)uVar7 >> 0x20), (int)uVar7 < 0)
       ) {
      piVar5 = piVar1;
    }
    uVar4 = CONCAT31((int3)((uint)param_1 >> 8),piVar1 != piVar5);
  }
  return uVar4;
}



/* vtable 00904a40 slot 3 address 0049ca68 */

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



/* vtable 00904a40 slot 4 address 0049a248 */

/* ADDRESS: 0049a248 NAME: FUN_0049a248 */

undefined4 __thiscall FUN_0049a248(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined1 auStack_24 [24];
  
  FUN_00843ff4(auStack_24,&DAT_0088e30d,param_2 + 4);
  uVar1 = FUN_00821690(&DAT_0088e30d);
  FUN_00823120(uVar1);
  FUN_0081ffd0(extraout_ECX);
  return param_1;
}



/* vtable 00904a40 slot 5 address 0049a2ac */

/* ADDRESS: 0049a2ac NAME: FUN_0049a2ac */

undefined4 __thiscall FUN_0049a2ac(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined1 auStack_24 [24];
  
  FUN_00843ff4(auStack_24,"a field called [\"",param_2 + 4);
  uVar1 = FUN_00821690(&DAT_0088e321);
  FUN_00823120(uVar1);
  FUN_0081ffd0(extraout_ECX);
  return param_1;
}



/* vtable 00904a40 slot 6 address 0049a18a */

/* ADDRESS: 0049a18a NAME: FUN_0049a18a */

undefined4 * __thiscall FUN_0049a18a(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_3 + 0x34);
  iVar5 = param_3 + 0x30;
  while (iVar4 != 0) {
    iVar3 = FUN_0078c7c0(param_2 + 4);
    iVar2 = *(int *)(iVar4 + 0xc);
    if (-1 < iVar3) {
      iVar5 = iVar4;
      iVar2 = *(int *)(iVar4 + 8);
    }
    iVar4 = iVar2;
  }
  if ((param_3 + 0x30 == iVar5) || (iVar4 = FUN_0078c7c0(iVar5 + 0x10), iVar4 < 0)) {
    FUN_0084e580("map::at");
  }
  uVar1 = *(undefined4 *)(iVar5 + 0x28);
  *param_1 = 0;
  param_1[1] = uVar1;
  param_1[2] = param_1 + 4;
  param_1[0xe] = param_1 + 0xc;
  param_1[0xf] = param_1 + 0xc;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  return param_1;
}


