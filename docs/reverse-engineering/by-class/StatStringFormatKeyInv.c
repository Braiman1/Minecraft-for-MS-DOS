/* Candidate RTTI class: StatStringFormatKeyInv
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009049cc slot 0 address 00776560 */

/* ADDRESS: 00776560 NAME: FUN_00776560 */

void FUN_00776560(void)

{
  return;
}



/* vtable 009049cc slot 1 address 00776548 */

/* ADDRESS: 00776548 NAME: FUN_00776548 */

void __fastcall FUN_00776548(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 009049cc slot 2 address 004f9ca0 */

/* ADDRESS: 004f9ca0 NAME: FUN_004f9ca0 */

int __thiscall FUN_004f9ca0(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  uint extraout_ECX;
  uint uVar2;
  uint uVar3;
  undefined4 local_50;
  undefined4 local_4c;
  undefined1 *local_38;
  uint local_34;
  undefined1 local_30 [32];
  
  FUN_00568d0b(&local_38,
               *(undefined4 *)(*(int *)(*(int *)(*(int *)(param_2 + 4) + 0x94) + 0x4c) + 0x18));
  FUN_00823120(&local_38);
  FUN_0081ffd0();
  FUN_00823370(param_3);
  local_38 = local_30;
  FUN_008220b0(local_38,&DAT_008955c4,4);
  local_34 = 4;
  local_38[4] = 0;
  uVar1 = FUN_0078c490(&local_38,0);
  uVar3 = extraout_ECX;
  uVar2 = extraout_ECX;
  if (uVar1 != 0xffffffff) {
    uVar3 = *(uint *)(param_1 + 4);
    uVar2 = uVar3 - uVar1;
    if (local_34 < uVar3 - uVar1) {
      uVar2 = local_34;
    }
    if (uVar3 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_0084e5d0("%s: __pos (which is %zu) > this->size() (which is %zu)","basic_string::replace",
                   uVar1,uVar3);
    }
    FUN_00820000(uVar1,uVar2,local_50,local_4c);
    uVar3 = uVar1;
  }
  FUN_0081ffd0(uVar3,uVar2);
  FUN_0081ffd0();
  return param_1;
}


