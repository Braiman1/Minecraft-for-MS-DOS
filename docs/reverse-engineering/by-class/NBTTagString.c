/* Candidate RTTI class: NBTTagString
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fe274 slot 0 address 00773570 */

/* ADDRESS: 00773570 NAME: thunk_FUN_00773578 */

void thunk_FUN_00773578(void)

{
  FUN_00773578();
  return;
}



/* vtable 008fe274 slot 1 address 0077354c */

/* ADDRESS: 0077354c NAME: FUN_0077354c */

void __fastcall FUN_0077354c(void *param_1)

{
  FUN_00773578();
  free(param_1);
  return;
}



/* vtable 008fe274 slot 2 address 004af1b2 */

/* ADDRESS: 004af1b2 NAME: FUN_004af1b2 */

void __thiscall FUN_004af1b2(int param_1,undefined4 param_2)

{
  FUN_0040cab3(param_2,param_1 + 0x20);
  return;
}



/* vtable 008fe274 slot 3 address 004af1ce */

/* ADDRESS: 004af1ce NAME: FUN_004af1ce */

void __thiscall FUN_004af1ce(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 local_40;
  undefined4 *local_38;
  int local_34;
  undefined4 local_30 [4];
  undefined1 local_20;
  
  FUN_0040ceca(&local_38,param_2);
  puVar1 = *(undefined4 **)(param_1 + 0x20);
  if (local_38 == local_30) {
    if (local_34 != 0) {
      FUN_008220b0(puVar1,local_38,local_34);
    }
    *(int *)(param_1 + 0x24) = local_34;
    *(undefined1 *)(*(int *)(param_1 + 0x20) + local_34) = 0;
  }
  else {
    if (puVar1 == (undefined4 *)(param_1 + 0x28)) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      local_40 = *(undefined4 *)(param_1 + 0x28);
    }
    *(int *)(param_1 + 0x24) = local_34;
    *(undefined4 **)(param_1 + 0x20) = local_38;
    *(undefined4 *)(param_1 + 0x28) = local_30[0];
    if (puVar1 == (undefined4 *)0x0) {
      local_38 = local_30;
    }
    else {
      local_30[0] = local_40;
      local_38 = puVar1;
    }
  }
  local_34 = 0;
  *(undefined1 *)local_38 = 0;
  *(undefined1 *)(param_1 + 0x38) = local_20;
  FUN_0081ffd0();
  return;
}



/* vtable 008fe274 slot 4 address 004af184 */

/* ADDRESS: 004af184 NAME: FUN_004af184 */

undefined1 FUN_004af184(void)

{
  return 8;
}



/* vtable 008fe274 slot 5 address 004af300 */

/* ADDRESS: 004af300 NAME: FUN_004af300 */

undefined4 __fastcall FUN_004af300(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_38 [40];
  
  uVar1 = FUN_00846710(0x3c);
  FUN_004af29e(param_1 + 0x20);
  FUN_004aca52(param_1);
  uVar2 = FUN_004aca92(local_38);
  FUN_0081ffd0(uVar2);
  return uVar1;
}



/* vtable 008fe274 slot 6 address 004af188 */

/* ADDRESS: 004af188 NAME: FUN_004af188 */

int __thiscall FUN_004af188(int param_1,int param_2)

{
  FUN_008238d0(param_2 + 0x20);
  *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_2 + 0x38);
  return param_1;
}


