/* Candidate RTTI class: TexturePortalFX
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009021b0 slot 0 address 00774cc8 */

/* ADDRESS: 00774cc8 NAME: FUN_00774cc8 */

void FUN_00774cc8(void)

{
  return;
}



/* vtable 009021b0 slot 1 address 00774cb0 */

/* ADDRESS: 00774cb0 NAME: FUN_00774cb0 */

void __fastcall FUN_00774cb0(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 009021b0 slot 2 address 00500acc */

/* ADDRESS: 00500acc NAME: FUN_00500acc */

void __fastcall FUN_00500acc(int param_1)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte local_1c;
  byte local_18;
  byte local_14;
  
  uVar4 = *(int *)(param_1 + 0x418) + 1;
  *(uint *)(param_1 + 0x418) = uVar4;
  iVar1 = param_1 + 0x41c + (uVar4 & 0x1f) * 0x400;
  cVar2 = *(char *)(param_1 + 0x408);
  iVar6 = 0;
  do {
    local_1c = *(byte *)(iVar1 + iVar6 * 4);
    uVar4 = (uint)local_1c;
    local_14 = *(byte *)(iVar1 + 1 + iVar6 * 4);
    local_18 = *(byte *)(iVar1 + 2 + iVar6 * 4);
    uVar3 = *(undefined1 *)(iVar1 + 3 + iVar6 * 4);
    if (cVar2 != '\0') {
      iVar5 = uVar4 * 0x1e + (uint)local_14 * 0x3b;
      local_1c = (byte)(((uint)local_18 * 0xb + iVar5) / 100);
      local_14 = (byte)(((uint)local_14 * 0xb + iVar5) / 100);
      local_18 = (byte)(((uint)local_18 * 0x46 + uVar4 * 0x1e) / 100);
    }
    *(byte *)(param_1 + 4 + iVar6 * 4) = local_1c;
    *(byte *)(param_1 + 5 + iVar6 * 4) = local_14;
    *(byte *)(param_1 + 6 + iVar6 * 4) = local_18;
    *(undefined1 *)(param_1 + 7 + iVar6 * 4) = uVar3;
    iVar6 = iVar6 + 1;
  } while (iVar6 != 0x100);
  return;
}



/* vtable 009021b0 slot 3 address 004fecd8 */

/* ADDRESS: 004fecd8 NAME: FUN_004fecd8 */

void __fastcall FUN_004fecd8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined1 *local_24 [2];
  undefined1 local_1c [16];
  
  if (*(int *)(param_1 + 0x414) == 0) {
    local_24[0] = local_1c;
    uVar1 = FUN_004fec7a("/terrain.png","");
    uVar2 = FUN_004db2c6(local_24);
    FUN_0076f878(uVar2,uVar1);
  }
  else {
    if (*(int *)(param_1 + 0x414) != 1) {
      return;
    }
    local_24[0] = local_1c;
    FUN_004fec7a("/gui/items.png","");
    uVar1 = extraout_ECX;
    uVar2 = FUN_004db2c6(local_24);
    FUN_0076f878(uVar2,uVar1);
  }
  FUN_0081ffd0();
  return;
}


