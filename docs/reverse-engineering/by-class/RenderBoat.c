/* Candidate RTTI class: RenderBoat
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fb52c slot 0 address 004d8a60 */

/* ADDRESS: 004d8a60 NAME: FUN_004d8a60 */

void __fastcall FUN_004d8a60(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008fb52c;
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
  }
  param_1[5] = 0;
  FUN_004c4bce();
  return;
}



/* vtable 008fb52c slot 1 address 004d8a88 */

/* ADDRESS: 004d8a88 NAME: FUN_004d8a88 */

void __fastcall FUN_004d8a88(void *param_1)

{
  FUN_004d8a60();
  free(param_1);
  return;
}



/* vtable 008fb52c slot 2 address 004d8da0 */

/* ADDRESS: 004d8da0 NAME: thunk_FUN_004d8b6c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
thunk_FUN_004d8b6c(int param_1,int param_2,double param_3,double param_4,double param_5,
                  float param_6,float param_7)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  float10 fVar2;
  float fVar3;
  undefined1 *apuStack_34 [2];
  undefined1 auStack_2c [28];
  
  (*DAT_0145d020)();
  (*DAT_0145ce94)((float)param_3,(float)param_4,(float)param_5);
  (*DAT_0145cf88)(_DAT_008925dc - param_6,0,0x3f800000,0);
  fVar3 = (float)*(int *)(param_2 + 0x1b4) - param_7;
  if (0.0 < fVar3) {
    param_7 = (float)*(int *)(param_2 + 0x1b0) - param_7;
    if (param_7 < 0.0) {
      param_7 = 0.0;
    }
    fVar2 = (float10)FUN_004a3d32(fVar3);
    (*DAT_0145cf88)(((fVar3 * (float)fVar2 * param_7) / _DAT_008925e0) *
                    (float)*(int *)(param_2 + 0x1b8),0x3f800000,0,0);
  }
  apuStack_34[0] = auStack_2c;
  uVar1 = FUN_004d8aac("/terrain.png","");
  FUN_004c4c12(apuStack_34,uVar1);
  FUN_0081ffd0(extraout_EDX);
  FUN_0076f484(_DAT_008925e4,_DAT_008925e4,_DAT_008925e4);
  FUN_0076f484(_DAT_008925e8,_DAT_008925e8,_DAT_008925e8);
  apuStack_34[0] = auStack_2c;
  FUN_004d8aac("/item/boat.png","");
  uVar1 = FUN_004c4c12(apuStack_34,extraout_ECX);
  FUN_0081ffd0(uVar1);
  FUN_0076f484(_DAT_008925ec,_DAT_008925ec,0x3f800000);
  (**(code **)(**(int **)(param_1 + 0x14) + 8))(0,0,0xbdcccccd,0,0,0x3d800000);
  (*DAT_0145d034)();
  return;
}


