/* Candidate RTTI class: J_ChainedFunctor
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00902718 slot 0 address 00775140 */

/* ADDRESS: 00775140 NAME: FUN_00775140 */

void FUN_00775140(void)

{
  return;
}



/* vtable 00902718 slot 1 address 00775128 */

/* ADDRESS: 00775128 NAME: FUN_00775128 */

void __fastcall FUN_00775128(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00902718 slot 2 address 00498f38 */

/* ADDRESS: 00498f38 NAME: FUN_00498f38 */

undefined4 __thiscall FUN_00498f38(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined8 uVar2;
  undefined1 local_60 [80];
  
  uVar1 = FUN_0049b694(param_2);
  if ((char)uVar1 != '\0') {
    FUN_0049b69c(*(undefined4 *)(param_1 + 4),param_2);
    uVar2 = FUN_0049b694(local_60,extraout_ECX);
    uVar1 = (undefined4)uVar2;
    FUN_00773e98((int)((ulonglong)uVar2 >> 0x20));
  }
  return uVar1;
}



/* vtable 00902718 slot 3 address 00498fa8 */

/* ADDRESS: 00498fa8 NAME: FUN_00498fa8 */

undefined4 __thiscall FUN_00498fa8(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 local_60 [80];
  
  FUN_0049b69c(*(undefined4 *)(param_2 + 4),param_3);
  uVar1 = FUN_0049b69c(*(undefined4 *)(param_2 + 8),local_60);
  FUN_00773e98(uVar1,uVar1);
  return param_1;
}



/* vtable 00902718 slot 4 address 00498dec */

/* ADDRESS: 00498dec NAME: FUN_00498dec */

undefined4 __thiscall FUN_00498dec(undefined4 param_1,int param_2)

{
  FUN_0049b73c(*(undefined4 *)(param_2 + 8));
  return param_1;
}



/* vtable 00902718 slot 5 address 00498e0e */

/* ADDRESS: 00498e0e NAME: FUN_00498e0e */

undefined4 __thiscall FUN_00498e0e(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint *local_4c;
  int local_48;
  uint local_44 [4];
  uint *local_34;
  int local_30;
  uint local_2c [7];
  
  FUN_0049b75c(*(undefined4 *)(param_2 + 8));
  FUN_0049b75c(*(undefined4 *)(param_2 + 4));
  uVar1 = FUN_00821690(", with ");
  FUN_00823120(uVar1);
  uVar2 = 0xf;
  if (local_4c != local_44) {
    uVar2 = local_44[0];
  }
  if (((uVar2 < (uint)(local_48 + local_30)) && (local_34 != local_2c)) &&
     ((uint)(local_48 + local_30) <= local_2c[0])) {
    uVar1 = FUN_00821e60(0,&local_4c);
  }
  else {
    uVar1 = FUN_00821710(&local_34);
  }
  uVar1 = FUN_00823120(uVar1);
  FUN_0081ffd0(uVar1);
  FUN_0081ffd0();
  FUN_0081ffd0();
  return param_1;
}


