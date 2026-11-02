/* Candidate RTTI class: RenderSnowball
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00901278 slot 0 address 00774764 */

/* ADDRESS: 00774764 NAME: thunk_FUN_0077476c */

void thunk_FUN_0077476c(void)

{
  FUN_0077476c();
  return;
}



/* vtable 00901278 slot 1 address 00774740 */

/* ADDRESS: 00774740 NAME: FUN_00774740 */

void __fastcall FUN_00774740(void *param_1)

{
  FUN_0077476c();
  free(param_1);
  return;
}



/* vtable 00901278 slot 2 address 004ea9d4 */

/* ADDRESS: 004ea9d4 NAME: FUN_004ea9d4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004ea9d4(int param_1,undefined4 param_2,double param_3,double param_4,double param_5)

{
  undefined4 uVar1;
  int iVar2;
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
  (*DAT_0145cf80)(_DAT_00893070,_DAT_00893070,_DAT_00893070);
  puStack_48 = auStack_40;
  uVar13 = 0xe;
  pcVar12 = "/gui/items.png";
  FUN_008220b0();
  uStack_44 = 0xe;
  puStack_48[0xe] = 0;
  uVar1 = FUN_004c4c12();
  FUN_0081ffd0(uVar1,ppuVar11,pcVar12,uVar13);
  iVar3 = *(int *)(param_1 + 0x14) % 0x10;
  iVar2 = *(int *)(param_1 + 0x14) - iVar3;
  iVar3 = iVar3 * 0x10;
  fVar7 = (float)iVar2 * _DAT_00893074;
  fVar5 = (float)iVar3 * _DAT_00893074;
  fVar9 = (float)(iVar3 + 0x10) * _DAT_00893074;
  fVar4 = (float)(iVar2 + 0x10) * _DAT_00893074;
  (*DAT_0145cf88)(_DAT_00893078 - *(float *)(*(int *)(param_1 + 0x10) + 0x2c),0,0x3f800000,0);
  (*DAT_0145cf88)(*(uint *)(*(int *)(param_1 + 0x10) + 0x30) ^ _DAT_00893080,0x3f800000,0,0);
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
  uVar1 = (*DAT_0145d26c)(0x803a);
  (*DAT_0145d034)(uVar1);
  return;
}


