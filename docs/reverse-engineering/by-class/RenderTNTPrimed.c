/* Candidate RTTI class: RenderTNTPrimed
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 0090215c slot 0 address 00774bb8 */

/* ADDRESS: 00774bb8 NAME: thunk_FUN_00774bc0 */

void thunk_FUN_00774bc0(void)

{
  FUN_00774bc0();
  return;
}



/* vtable 0090215c slot 1 address 00774b94 */

/* ADDRESS: 00774b94 NAME: FUN_00774b94 */

void __fastcall FUN_00774b94(void *param_1)

{
  FUN_00774bc0();
  free(param_1);
  return;
}



/* vtable 0090215c slot 2 address 004ebd12 */

/* ADDRESS: 004ebd12 NAME: thunk_FUN_004ebadc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_004ebadc(int param_1,double param_2,double param_3,double param_4,undefined4 param_5,
                       float param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  
  (*DAT_0145d020)();
  (*DAT_0145ce94)((float)param_2,(float)param_3,(float)param_4);
  fVar4 = ((float)*(int *)(param_1 + 0x1b0) - param_6) + DAT_008930dc;
  if (fVar4 < DAT_008930e0) {
    fVar4 = DAT_008930dc - fVar4 / DAT_008930e0;
    uVar3 = -(uint)(DAT_008930dc < fVar4);
    fVar4 = (float)(~uVar3 & (uint)fVar4 | (uint)DAT_008930dc & uVar3);
    fVar4 = fVar4 * fVar4;
    fVar4 = fVar4 * fVar4 * _DAT_008930e4 + DAT_008930dc;
    (*DAT_0145cf80)(fVar4,fVar4,fVar4);
  }
  iVar1 = *(int *)(param_1 + 0x1b0);
  iVar2 = param_1;
  FUN_004eb1aa(param_1,param_5,param_6);
  if (((float)*(int *)(param_1 + 0x1b0) - param_6) + DAT_008930dc < DAT_008930e0) {
    fVar4 = (DAT_008930dc - (((float)iVar1 - param_6) + DAT_008930dc) / _DAT_008930e8) *
            _DAT_008930ec;
    (*DAT_0145d26c)(0xde1);
    (*DAT_0145d26c)(0xb50);
    (*DAT_0145d248)(0xbe2);
    (*DAT_0145d34c)(0x302,1);
    (*DAT_0145d2d4)(DAT_008930dc,DAT_008930dc,DAT_008930dc,fVar4);
    FUN_004eb1aa(param_1,param_5,param_6);
    (*DAT_0145d2d4)(DAT_008930dc,DAT_008930dc,DAT_008930dc,DAT_008930dc);
    (*DAT_0145d26c)(0xbe2);
    (*DAT_0145d248)(0xb50);
    iVar2 = (*DAT_0145d248)(0xde1);
  }
  (*DAT_0145d034)(iVar2);
  return;
}


