/* Candidate RTTI class: RenderArrow
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fcaf8 slot 0 address 00772c08 */

/* ADDRESS: 00772c08 NAME: thunk_FUN_00772c10 */

void thunk_FUN_00772c10(void)

{
  FUN_00772c10();
  return;
}



/* vtable 008fcaf8 slot 1 address 00772be4 */

/* ADDRESS: 00772be4 NAME: FUN_00772be4 */

void __fastcall FUN_00772be4(void *param_1)

{
  FUN_00772c10();
  free(param_1);
  return;
}



/* vtable 008fcaf8 slot 2 address 004c69e8 */

/* ADDRESS: 004c69e8 NAME: thunk_FUN_004c6342 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
thunk_FUN_004c6342(undefined4 param_1,int param_2,double param_3,double param_4,double param_5,
                  undefined4 param_6,float param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float10 fVar4;
  int iStack_4c;
  int *piStack_48;
  int iStack_44;
  int aiStack_40 [7];
  
  if ((*(float *)(param_2 + 0x78) != 0.0) || (*(float *)(param_2 + 0x7c) != 0.0)) {
    piStack_48 = aiStack_40;
    iStack_4c = 0x10;
    piStack_48 = (int *)FUN_00822e70(&iStack_4c,0);
    aiStack_40[0] = iStack_4c;
    FUN_008220b0(piStack_48,"/item/arrows.png",0x10);
    iStack_44 = iStack_4c;
    *(undefined1 *)((int)piStack_48 + iStack_4c) = 0;
    FUN_004c4c12(&piStack_48);
    FUN_0081ffd0(param_1);
    (*DAT_0145d020)();
    (*DAT_0145ce94)((float)param_3,(float)param_4,(float)param_5);
    uVar2 = _DAT_00892304;
    FUN_0076f4b8(((*(float *)(param_2 + 0x70) - *(float *)(param_2 + 0x78)) * param_7 +
                 *(float *)(param_2 + 0x78)) - _DAT_00892308,0,_DAT_00892304,0);
    FUN_0076f4b8((*(float *)(param_2 + 0x74) - *(float *)(param_2 + 0x7c)) * param_7 +
                 *(float *)(param_2 + 0x7c),0,0,uVar2);
    (*DAT_0145d248)(0x803a);
    param_7 = (float)*(int *)(param_2 + 0x1c8) - param_7;
    if (0.0 < param_7) {
      fVar4 = (float10)FUN_004a3d32(param_7 * _DAT_0089230c);
      FUN_0076f4b8((float)((uint)(float)fVar4 ^ _DAT_00892310) * param_7,0,0,uVar2);
    }
    FUN_0076f4b8(0x42340000,uVar2,0,0);
    uVar1 = _DAT_00892320;
    (*DAT_0145cf80)(_DAT_00892320,_DAT_00892320,_DAT_00892320);
    (*DAT_0145ce94)(0xc0800000,0,0);
    FUN_0076f640(uVar1,0,0);
    FUN_004fe3cc();
    FUN_004fe6a6(0,0xc01c0000,0,0xc0000000,0,0xc0000000,0,0,0,0x3fc40000);
    FUN_004fe6a6(0,0xc01c0000,0,0xc0000000,0,0x40000000,0,0x3fc40000,0,0x3fc40000);
    FUN_004fe6a6(0,0xc01c0000,0,0x40000000,0,0x40000000,0,0x3fc40000,0,0x3fd40000);
    FUN_004fe6a6(0,0xc01c0000,0,0x40000000,0,0xc0000000,0,0,0,0x3fd40000);
    FUN_004fe0c4();
    FUN_0076f640(0xbd666666,0,0);
    FUN_004fe3cc();
    FUN_004fe6a6(0,0xc01c0000,0,0x40000000,0,0xc0000000,0,0,0,0x3fc40000);
    FUN_004fe6a6(0,0xc01c0000,0,0x40000000,0,0x40000000,0,0x3fc40000,0,0x3fc40000);
    iVar3 = 4;
    FUN_004fe6a6(0,0xc01c0000,0,0xc0000000,0,0x40000000,0,0x3fc40000,0,0x3fd40000);
    FUN_004fe6a6(0,0xc01c0000,0,0xc0000000,0,0xc0000000,0,0,0,0x3fd40000);
    FUN_004fe0c4();
    do {
      FUN_0076f4b8(0x42b40000,uVar2,0,0);
      FUN_0076f640(0,0,uVar1);
      FUN_004fe3cc();
      FUN_004fe6a6(0,0xc0200000,0,0xc0000000,0,0,0,0,0,0);
      FUN_004fe6a6(0,0x40200000,0,0xc0000000,0,0,0,0x3fe00000,0,0);
      FUN_004fe6a6(0,0x40200000,0,0x40000000,0,0,0,0x3fe00000,0,0x3fc40000);
      FUN_004fe6a6(0,0xc0200000,0,0x40000000,0,0,0,0,0,0x3fc40000);
      FUN_004fe0c4();
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    uVar2 = (*DAT_0145d26c)(0x803a);
    (*DAT_0145d034)(uVar2);
  }
  return;
}


