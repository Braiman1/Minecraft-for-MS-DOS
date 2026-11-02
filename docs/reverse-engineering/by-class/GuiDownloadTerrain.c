/* Candidate RTTI class: GuiDownloadTerrain
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009037b8 slot 0 address 0077598c */

/* ADDRESS: 0077598c NAME: thunk_FUN_00775994 */

void thunk_FUN_00775994(void)

{
  FUN_00775994();
  return;
}



/* vtable 009037b8 slot 1 address 00775968 */

/* ADDRESS: 00775968 NAME: FUN_00775968 */

void __fastcall FUN_00775968(void *param_1)

{
  FUN_00775994();
  free(param_1);
  return;
}



/* vtable 009037b8 slot 2 address 0047d2a2 */

/* ADDRESS: 0047d2a2 NAME: FUN_0047d2a2 */

void __fastcall FUN_0047d2a2(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  int *piStack_4c;
  int iStack_48;
  int aiStack_44 [4];
  int aiStack_34 [9];
  
  FUN_00485726(0);
  uVar3 = FUN_004fc82e(extraout_ECX);
  aiStack_34[0] = 0x1e;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0xc);
  piStack_4c = aiStack_44;
  piStack_4c = (int *)FUN_00822e70(aiStack_34,0);
  aiStack_44[0] = aiStack_34[0];
  FUN_008220b0(piStack_4c,"multiplayer.downloadingTerrain",0x1e);
  iStack_48 = aiStack_34[0];
  *(undefined1 *)((int)piStack_4c + aiStack_34[0]) = 0;
  FUN_004fbdd2(uVar3,&piStack_4c);
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),aiStack_34,iVar2 / 2,iVar1 / 2 + -0x32,0xffffff);
  FUN_0081ffd0();
  FUN_0081ffd0();
  FUN_0048528a();
  return;
}



/* vtable 009037b8 slot 3 address 0047d1d4 */

/* ADDRESS: 0047d1d4 NAME: FUN_0047d1d4 */

void FUN_0047d1d4(void)

{
  return;
}



/* vtable 009037b8 slot 4 address 0048536a */

/* ADDRESS: 0048536a NAME: FUN_0048536a */

void __thiscall FUN_0048536a(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  char cVar2;
  undefined1 local_38 [24];
  undefined1 local_20;
  
  if (param_4 == 0) {
    for (; param_4 < param_1[6] - param_1[5] >> 2; param_4 = param_4 + 1) {
      piVar1 = *(int **)(param_1[5] + param_4 * 4);
      cVar2 = (**(code **)(*piVar1 + 0x18))(param_1[2],param_2,param_3);
      if (cVar2 != '\0') {
        param_1[0xb] = (int)piVar1;
        FUN_004852fc("random.click");
        local_20 = 0;
        FUN_004f4888(local_38,DAT_0088c87c,DAT_0088c87c);
        FUN_0081ffd0();
        (**(code **)(*param_1 + 0x18))(piVar1);
      }
    }
  }
  return;
}



/* vtable 009037b8 slot 5 address 00485244 */

/* ADDRESS: 00485244 NAME: FUN_00485244 */

void __thiscall FUN_00485244(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(param_2,param_3);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* vtable 009037b8 slot 6 address 0047d1d8 */

/* ADDRESS: 0047d1d8 NAME: FUN_0047d1d8 */

void FUN_0047d1d8(void)

{
  return;
}



/* vtable 009037b8 slot 7 address 0047d1dc */

/* ADDRESS: 0047d1dc NAME: FUN_0047d1dc */

void __fastcall FUN_0047d1dc(int param_1)

{
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  return;
}



/* vtable 009037b8 slot 8 address 0047d1e8 */

/* ADDRESS: 0047d1e8 NAME: FUN_0047d1e8 */

/* WARNING: Unable to track spacebase fully for stack */

int __fastcall FUN_0047d1e8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 0x34) + 1;
  *(int *)(param_1 + 0x34) = iVar1;
  iVar2 = iVar1 / 0x14;
  if (iVar1 % 0x14 == 0) {
    puVar3 = (undefined4 *)FUN_00846710(0x10);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    FUN_004b6002();
    *puVar3 = &PTR_LAB_00902858;
    iVar2 = FUN_004b02f2(puVar3);
  }
  if (*(int *)(param_1 + 0x30) == 0) {
    return iVar2;
  }
  iVar1 = FUN_004af6da();
  return iVar1;
}



/* vtable 009037b8 slot 9 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}



/* vtable 009037b8 slot 10 address 00485282 */

/* ADDRESS: 00485282 NAME: FUN_00485282 */

undefined1 FUN_00485282(void)

{
  return 1;
}



/* vtable 009037b8 slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 009037b8 slot 12 address 00485280 */
/* Already included above. */
