/* Candidate RTTI class: TileEntityFurnace
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009032d4 slot 0 address 00506290 */

/* ADDRESS: 00506290 NAME: FUN_00506290 */

void __fastcall FUN_00506290(int param_1)

{
  void *_Memory;
  int iVar1;
  
  iVar1 = 0;
  do {
    _Memory = *(void **)(param_1 + 0x1c + iVar1 * 4);
    if (_Memory != (void *)0x0) {
      free(_Memory);
    }
    *(undefined4 *)(param_1 + 0x1c + iVar1 * 4) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 3);
  return;
}



/* vtable 009032d4 slot 1 address 005062cc */

/* ADDRESS: 005062cc NAME: FUN_005062cc */

void __fastcall FUN_005062cc(void *param_1)

{
  FUN_00506290();
  free(param_1);
  return;
}



/* vtable 009032d4 slot 2 address 00506974 */

/* ADDRESS: 00506974 NAME: FUN_00506974 */

void __thiscall FUN_00506974(int *param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 extraout_ECX;
  void *extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar6;
  undefined8 uVar7;
  void *_Memory;
  undefined1 local_38 [24];
  undefined1 local_20;
  
  FUN_0050538c(param_2);
  FUN_00506414("Items");
  local_20 = 0;
  FUN_004adc4c(local_38);
  iVar6 = 0;
  pvVar5 = extraout_EDX;
  FUN_0081ffd0(extraout_EDX);
  while( true ) {
    iVar2 = (**(code **)(*param_1 + 0x1c))();
    if (iVar2 <= iVar6) break;
    _Memory = (void *)param_1[iVar6 + 7];
    if (_Memory != (void *)0x0) {
      free(_Memory);
      pvVar5 = _Memory;
    }
    param_1[iVar6 + 7] = 0;
    iVar6 = iVar6 + 1;
  }
  iVar6 = 0;
  while( true ) {
    iVar2 = FUN_004aed18(pvVar5);
    if (iVar2 <= iVar6) break;
    uVar3 = FUN_004aed08(iVar6);
    FUN_00506414(&DAT_0089657a);
    local_20 = 0;
    uVar7 = FUN_004ad7f2(local_38);
    pvVar5 = (void *)((ulonglong)uVar7 >> 0x20);
    uVar4 = (uint)uVar7 & 0xff;
    FUN_0081ffd0();
    iVar2 = (**(code **)(*param_1 + 0x1c))();
    if ((int)uVar4 < iVar2) {
      iVar2 = FUN_00846710(0x10);
      pvVar5 = (void *)FUN_00498656(uVar3);
      param_1[uVar4 + 7] = iVar2;
    }
    iVar6 = iVar6 + 1;
  }
  FUN_00506414("BurnTime");
  local_20 = 0;
  sVar1 = FUN_004ad886(local_38);
  param_1[10] = (int)sVar1;
  FUN_0081ffd0(extraout_ECX);
  FUN_00506414("CookTime");
  local_20 = 0;
  sVar1 = FUN_004ad886(local_38);
  param_1[0xc] = (int)sVar1;
  FUN_0081ffd0(extraout_EDX_00);
  iVar6 = FUN_005067da(param_1[8]);
  param_1[0xb] = iVar6;
  return;
}



/* vtable 009032d4 slot 3 address 005064b4 */

/* ADDRESS: 005064b4 NAME: FUN_005064b4 */

void __thiscall FUN_005064b4(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_ECX;
  int iVar3;
  undefined4 uVar4;
  undefined1 local_38 [24];
  undefined1 local_20;
  
  FUN_005054da(param_2);
  iVar3 = param_1[10];
  FUN_00506414("BurnTime");
  local_20 = 0;
  uVar1 = FUN_004ae37c(local_38,(int)(short)iVar3);
  FUN_0081ffd0(uVar1,uVar1);
  iVar3 = param_1[0xc];
  FUN_00506414("CookTime");
  local_20 = 0;
  uVar1 = FUN_004ae37c(local_38,(int)(short)iVar3);
  FUN_0081ffd0(uVar1,uVar1);
  uVar4 = 0x30;
  uVar1 = FUN_00846710(0x30);
  FUN_004aec4a();
  iVar3 = 0;
  while( true ) {
    iVar2 = (**(code **)(*param_1 + 0x1c))(uVar4);
    if (iVar2 <= iVar3) break;
    if (param_1[iVar3 + 7] != 0) {
      uVar4 = FUN_00846710(0x5c);
      FUN_004ad754();
      FUN_00506414(&DAT_0089657a);
      local_20 = 0;
      FUN_004ae30e(local_38,iVar3);
      FUN_0081ffd0(extraout_ECX,extraout_ECX);
      FUN_004984ee(uVar4);
      uVar4 = FUN_004aee34(uVar4);
    }
    iVar3 = iVar3 + 1;
  }
  FUN_00506414("Items");
  local_20 = 0;
  uVar1 = FUN_004adf58(local_38,uVar1);
  FUN_0081ffd0(uVar1,uVar1);
  return;
}



/* vtable 009032d4 slot 4 address 00506866 */

/* ADDRESS: 00506866 NAME: FUN_00506866 */

void __fastcall FUN_00506866(int *param_1)

{
  int iVar1;
  int *_Memory;
  char cVar2;
  int iVar3;
  char cVar4;
  
  iVar1 = param_1[10];
  if (0 < iVar1) {
    param_1[10] = iVar1 + -1;
  }
  if (*(char *)(param_1[1] + 0x170) != '\0') {
    return;
  }
  cVar4 = '\0';
  if ((param_1[10] == 0) && (cVar2 = FUN_005066b6(), cVar2 != '\0')) {
    iVar3 = FUN_005067da(param_1[8]);
    param_1[10] = iVar3;
    param_1[0xb] = iVar3;
    if ((iVar3 != 0) && (_Memory = (int *)param_1[8], cVar4 = cVar2, _Memory != (int *)0x0)) {
      if (*_Memory + -1 == 0) {
        free(_Memory);
        param_1[8] = 0;
      }
      else {
        *_Memory = *_Memory + -1;
      }
    }
  }
  if ((param_1[10] < 1) || (cVar2 = FUN_005066b6(), cVar2 == '\0')) {
    param_1[0xc] = 0;
  }
  else if (param_1[0xc] == 199) {
    param_1[0xc] = 0;
    FUN_0050675a();
    cVar4 = cVar2;
  }
  else {
    param_1[0xc] = param_1[0xc] + 1;
  }
  if (0 < param_1[10] == 0 < iVar1) {
    if (cVar4 == '\0') {
      return;
    }
  }
  else {
    FUN_00423606(0 < param_1[10],param_1[1],param_1[2],param_1[3],param_1[4]);
  }
                    /* WARNING: Could not recover jumptable at 0x00506969. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}



/* vtable 009032d4 slot 5 address 005051fe */

/* ADDRESS: 005051fe NAME: FUN_005051fe */

void __fastcall FUN_005051fe(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x18))
            (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),
             *(undefined4 *)(param_1 + 0x10));
  return;
}



/* vtable 009032d4 slot 6 address 0077582c */

/* ADDRESS: 0077582c NAME: thunk_FUN_0050522c */

void thunk_FUN_0050522c(void)

{
  FUN_0050522c();
  return;
}



/* vtable 009032d4 slot 7 address 00506270 */

/* ADDRESS: 00506270 NAME: FUN_00506270 */

undefined4 FUN_00506270(void)

{
  return 3;
}



/* vtable 009032d4 slot 8 address 00506276 */

/* ADDRESS: 00506276 NAME: FUN_00506276 */

undefined4 __thiscall FUN_00506276(int param_1,int param_2)

{
  return *(undefined4 *)(param_1 + 0x1c + param_2 * 4);
}



/* vtable 009032d4 slot 9 address 005062f6 */

/* ADDRESS: 005062f6 NAME: FUN_005062f6 */

void __thiscall FUN_005062f6(int param_1,int param_2,int param_3)

{
  int *piVar1;
  
  param_2 = param_2 + 4;
  piVar1 = *(int **)(param_1 + 0xc + param_2 * 4);
  if (piVar1 != (int *)0x0) {
    if (param_3 < *piVar1) {
      FUN_0049836e(param_3);
      if (**(int **)(param_1 + 0xc + param_2 * 4) == 0) {
        *(undefined4 *)(param_1 + 0xc + param_2 * 4) = 0;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xc + param_2 * 4) = 0;
    }
  }
  return;
}



/* vtable 009032d4 slot 10 address 00506346 */

/* ADDRESS: 00506346 NAME: FUN_00506346 */

void __thiscall FUN_00506346(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  param_1[param_2 + 7] = (int)param_3;
  if (param_3 != (int *)0x0) {
    iVar2 = *param_3;
    iVar1 = (**(code **)(*param_1 + 0x30))();
    if (iVar1 < iVar2) {
      iVar2 = (**(code **)(*param_1 + 0x30))();
      *param_3 = iVar2;
    }
  }
  return;
}



/* vtable 009032d4 slot 11 address 00506482 */

/* ADDRESS: 00506482 NAME: FUN_00506482 */

undefined4 __fastcall FUN_00506482(undefined4 param_1)

{
  FUN_00506414("Furnace");
  return param_1;
}



/* vtable 009032d4 slot 12 address 0050628a */

/* ADDRESS: 0050628a NAME: FUN_0050628a */

undefined4 FUN_0050628a(void)

{
  return 0x40;
}



/* vtable 009032d4 slot 13 address 00506382 */

/* ADDRESS: 00506382 NAME: FUN_00506382 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_00506382(int param_1)

{
  bool bVar1;
  int iVar2;
  float10 extraout_ST0;
  
  iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0xc))();
  if (param_1 == iVar2) {
    FUN_0044a04a((double)*(int *)(param_1 + 8) + DAT_00896588,
                 (double)*(int *)(param_1 + 0xc) + DAT_00896588,
                 (double)*(int *)(param_1 + 0x10) + DAT_00896588);
    bVar1 = (double)extraout_ST0 <= _DAT_00896590;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* vtable 00903314 slot 0 address 005062c7 */

/* ADDRESS: 005062c7 NAME: FUN_005062c7 */

void FUN_005062c7(void)

{
  FUN_00506290();
  return;
}



/* vtable 00903314 slot 1 address 005062f0 */

/* ADDRESS: 005062f0 NAME: FUN_005062f0 */

void __fastcall FUN_005062f0(int param_1)

{
  FUN_00506290();
  free((void *)(param_1 + -0x18));
  return;
}



/* vtable 00903314 slot 2 address 005064a8 */

/* ADDRESS: 005064a8 NAME: FUN_005064a8 */

undefined4 FUN_005064a8(void)

{
  return 3;
}



/* vtable 00903314 slot 3 address 00506284 */

/* ADDRESS: 00506284 NAME: FUN_00506284 */

void FUN_00506284(void)

{
  FUN_00506276();
  return;
}



/* vtable 00903314 slot 4 address 00506340 */

/* ADDRESS: 00506340 NAME: FUN_00506340 */

void FUN_00506340(void)

{
  FUN_005062f6();
  return;
}



/* vtable 00903314 slot 5 address 0050637d */

/* ADDRESS: 0050637d NAME: FUN_0050637d */

void FUN_0050637d(void)

{
  FUN_00506346();
  return;
}



/* vtable 00903314 slot 6 address 005064a1 */

/* ADDRESS: 005064a1 NAME: FUN_005064a1 */

void FUN_005064a1(void)

{
  FUN_00506482();
  return;
}



/* vtable 00903314 slot 7 address 005064ae */

/* ADDRESS: 005064ae NAME: FUN_005064ae */

undefined4 FUN_005064ae(void)

{
  return 0x40;
}



/* vtable 00903314 slot 8 address 00845200 */

/* ADDRESS: 00845200 NAME: FUN_00845200 */

void FUN_00845200(void)

{
  FUN_0050522c();
  return;
}



/* vtable 00903314 slot 9 address 0050640b */

/* ADDRESS: 0050640b NAME: FUN_0050640b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __fastcall FUN_0050640b(int param_1)

{
  bool bVar1;
  int iVar2;
  float10 extraout_ST0;
  
  iVar2 = (**(code **)(**(int **)(param_1 + -0x14) + 0xc))();
  if (param_1 + -0x18 == iVar2) {
    FUN_0044a04a((double)*(int *)(param_1 + -0x10) + DAT_00896588,
                 (double)*(int *)(param_1 + -0xc) + DAT_00896588,
                 (double)*(int *)(param_1 + -8) + DAT_00896588);
    bVar1 = (double)extraout_ST0 <= _DAT_00896590;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


