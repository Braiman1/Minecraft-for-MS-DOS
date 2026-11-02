/* Candidate RTTI class: J_JsonListenerToJdomAdapter
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904c64 slot 0 address 00776b08 */

/* ADDRESS: 00776b08 NAME: thunk_FUN_00776b10 */

void thunk_FUN_00776b10(void)

{
  FUN_00776b10();
  return;
}



/* vtable 00904c64 slot 1 address 00776ae4 */

/* ADDRESS: 00776ae4 NAME: FUN_00776ae4 */

void __fastcall FUN_00776ae4(void *param_1)

{
  FUN_00776b10();
  free(param_1);
  return;
}



/* vtable 00904c64 slot 2 address 0049a310 */

/* ADDRESS: 0049a310 NAME: FUN_0049a310 */

void FUN_0049a310(void)

{
  return;
}



/* vtable 00904c64 slot 3 address 0049a310 */
/* Already included above. */

/* vtable 00904c64 slot 4 address 0049a852 */

/* ADDRESS: 0049a852 NAME: FUN_0049a852 */

void __fastcall FUN_0049a852(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 auStack_20 [4];
  
  puVar1 = (undefined4 *)FUN_00846710(0x10);
  *puVar1 = &PTR_LAB_009048b4;
  puVar1[2] = puVar1 + 1;
  puVar1[1] = puVar1 + 1;
  puVar1[3] = 0;
  FUN_0049a51e(puVar1);
  uVar2 = FUN_00846710(0xc);
  FUN_00498dd0(param_1,puVar1);
  auStack_20[0] = uVar2;
  FUN_0049a59a(auStack_20);
  return;
}



/* vtable 00904c64 slot 5 address 0049a53a */

/* ADDRESS: 0049a53a NAME: FUN_0049a53a */

void __fastcall FUN_0049a53a(int param_1)

{
  void *_Memory;
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)FUN_00815b10();
  if ((int *)*piVar2 != (int *)0x0) {
    (**(code **)(*(int *)*piVar2 + 4))();
  }
  _Memory = *(void **)(param_1 + 0x1c);
  if (_Memory == *(void **)(param_1 + 0x20)) {
    free(_Memory);
    iVar1 = *(int *)(*(int *)(param_1 + 0x28) + -4);
    *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + -4;
    *(int *)(param_1 + 0x20) = iVar1;
    iVar3 = iVar1 + 0x1fc;
    *(int *)(param_1 + 0x24) = iVar1 + 0x200;
  }
  else {
    iVar3 = (int)_Memory + -4;
  }
  *(int *)(param_1 + 0x1c) = iVar3;
  return;
}



/* vtable 00904c64 slot 6 address 0049a7c8 */

/* ADDRESS: 0049a7c8 NAME: FUN_0049a7c8 */

void __fastcall FUN_0049a7c8(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 auStack_20 [4];
  
  puVar1 = (undefined4 *)FUN_00846710(0x10);
  *puVar1 = &PTR_LAB_00904a78;
  puVar1[2] = puVar1 + 1;
  puVar1[1] = puVar1 + 1;
  puVar1[3] = 0;
  FUN_0049a51e(puVar1);
  uVar2 = FUN_00846710(0xc);
  FUN_0049caf0(param_1,puVar1);
  auStack_20[0] = uVar2;
  FUN_0049a59a(auStack_20);
  return;
}



/* vtable 00904c64 slot 7 address 0049a53a */
/* Already included above. */

/* vtable 00904c64 slot 8 address 0049a732 */

/* ADDRESS: 0049a732 NAME: FUN_0049a732 */

void __thiscall FUN_0049a732(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  undefined4 local_20 [4];
  
  FUN_0049a0ac();
  uVar1 = FUN_00775a54(param_2);
  uVar1 = FUN_0049a0c8(uVar1);
  puVar2 = (undefined4 *)FUN_00815b10(extraout_ECX);
  (**(code **)(*(int *)*puVar2 + 0xc))(uVar1);
  uVar3 = FUN_00846710(0xc);
  FUN_00499528(param_1,uVar1);
  local_20[0] = uVar3;
  FUN_0049a59a(local_20);
  return;
}



/* vtable 00904c64 slot 9 address 0049a53a */
/* Already included above. */

/* vtable 00904c64 slot 10 address 0049a4a2 */

/* ADDRESS: 0049a4a2 NAME: FUN_0049a4a2 */

void FUN_0049a4a2(undefined4 param_1)

{
  FUN_00775a54(param_1);
  FUN_0049a40e();
  return;
}



/* vtable 00904c64 slot 11 address 0049a426 */

/* ADDRESS: 0049a426 NAME: FUN_0049a426 */

void FUN_0049a426(undefined4 param_1)

{
  FUN_00846710(8);
  FUN_0049be84(param_1);
  FUN_0049a40e();
  return;
}



/* vtable 00904c64 slot 12 address 0049a476 */

/* ADDRESS: 0049a476 NAME: FUN_0049a476 */

void FUN_0049a476(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00846710(4);
  *puVar1 = &PTR_LAB_00904750;
  FUN_0049a40e(puVar1);
  return;
}



/* vtable 00904c64 slot 13 address 0049a4c6 */

/* ADDRESS: 0049a4c6 NAME: FUN_0049a4c6 */

void FUN_0049a4c6(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00846710(4);
  *puVar1 = &PTR_LAB_009048c8;
  FUN_0049a40e(puVar1);
  return;
}



/* vtable 00904c64 slot 14 address 0049a4f2 */

/* ADDRESS: 0049a4f2 NAME: FUN_0049a4f2 */

void FUN_0049a4f2(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00846710(4);
  *puVar1 = &PTR_LAB_0090473c;
  FUN_0049a40e(puVar1);
  return;
}


