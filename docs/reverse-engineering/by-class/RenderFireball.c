/* Candidate RTTI class: RenderFireball
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 0090123c slot 0 address 007746f4 */

/* ADDRESS: 007746f4 NAME: thunk_FUN_007746fc */

void thunk_FUN_007746fc(void)

{
  FUN_007746fc();
  return;
}



/* vtable 0090123c slot 1 address 007746d0 */

/* ADDRESS: 007746d0 NAME: FUN_007746d0 */

void __fastcall FUN_007746d0(void *param_1)

{
  FUN_007746fc();
  free(param_1);
  return;
}



/* vtable 0090123c slot 2 address 004dbcb8 */

/* ADDRESS: 004dbcb8 NAME: thunk_FUN_004db97a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
thunk_FUN_004db97a(int param_1,undefined4 param_2,double param_3,double param_4,double param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  float fVar7;
  double dVar8;
  float fVar9;
  double dVar10;
  undefined1 **ppuVar11;
  char *pcVar12;
  undefined4 uVar13;
  undefined1 *puStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [28];
  
  ppuVar11 = &puStack_48;
  (*DAT_0145d020)();
  (*DAT_0145ce94)((float)param_3,(float)param_4,(float)param_5);
  (*DAT_0145d248)(0x803a);
  (*DAT_0145cf80)(_DAT_008926b0,_DAT_008926b0,_DAT_008926b0);
  iVar1 = (**(code **)(*DAT_00a08674 + 0x14))(0);
  puStack_48 = auStack_40;
  uVar13 = 0xe;
  pcVar12 = "/gui/items.png";
  FUN_008220b0();
  uStack_44 = 0xe;
  puStack_48[0xe] = 0;
  uVar2 = FUN_004c4c12();
  FUN_0081ffd0(uVar2,ppuVar11,pcVar12,uVar13);
  iVar3 = iVar1 - iVar1 % 0x10;
  iVar1 = (iVar1 % 0x10) * 0x10;
  fVar7 = (float)iVar3 * _DAT_008926b4;
  fVar5 = (float)iVar1 * _DAT_008926b4;
  fVar9 = (float)(iVar1 + 0x10) * _DAT_008926b4;
  fVar4 = (float)(iVar3 + 0x10) * _DAT_008926b4;
  (*DAT_0145cf88)(_DAT_008926b8 - *(float *)(*(int *)(param_1 + 0x10) + 0x2c),0,0x3f800000,0);
  (*DAT_0145cf88)(*(uint *)(*(int *)(param_1 + 0x10) + 0x30) ^ _DAT_008926c0,0x3f800000,0,0);
  FUN_004fe3cc();
  FUN_004fe756(0,0x3f800000,0);
  dVar6 = (double)fVar5;
  dVar8 = (double)fVar4;
  FUN_004fe6a6(0,0xbfe00000,0,0xbfd00000,0,0,dVar6,dVar8);
  dVar10 = (double)fVar9;
  FUN_004fe6a6(0,0x3fe00000,0,0xbfd00000,0,0,dVar10,dVar8);
  dVar8 = (double)fVar7;
  FUN_004fe6a6(0,0x3fe00000,0,0x3fe80000,0,0,dVar10,dVar8);
  FUN_004fe6a6(0,0xbfe00000,0,0x3fe80000,0,0,dVar6,dVar8);
  FUN_004fe0c4();
  uVar2 = (*DAT_0145d26c)(0x803a);
  (*DAT_0145d034)(uVar2);
  return;
}


