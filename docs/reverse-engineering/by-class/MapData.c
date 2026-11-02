/* Candidate RTTI class: MapData
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009054a4 slot 0 address 0049ffa2 */

/* ADDRESS: 0049ffa2 NAME: FUN_0049ffa2 */

void __fastcall FUN_0049ffa2(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_009054a4;
  puVar1 = (undefined4 *)param_1[0x1010];
  for (puVar2 = (undefined4 *)param_1[0x100f]; puVar2 != puVar1; puVar2 = puVar2 + 1) {
    if ((void *)*puVar2 != (void *)0x0) {
      free((void *)*puVar2);
    }
  }
  puVar1 = (undefined4 *)param_1[0x100d];
  for (puVar2 = (undefined4 *)param_1[0x100c]; puVar1 != puVar2; puVar2 = puVar2 + 1) {
    if ((void *)*puVar2 != (void *)0x0) {
      free((void *)*puVar2);
    }
  }
  FUN_0049fb2a();
  param_1[0x1014] = 0;
  param_1[0x1015] = param_1 + 0x1013;
  param_1[0x1016] = param_1 + 0x1013;
  FUN_0049fb2a();
  if ((void *)param_1[0x100f] != (void *)0x0) {
    free((void *)param_1[0x100f]);
  }
  if ((void *)param_1[0x100c] != (void *)0x0) {
    free((void *)param_1[0x100c]);
  }
  FUN_00772994();
  return;
}



/* vtable 009054a4 slot 1 address 004a0080 */

/* ADDRESS: 004a0080 NAME: FUN_004a0080 */

void __fastcall FUN_004a0080(void *param_1)

{
  FUN_0049ffa2();
  free(param_1);
  return;
}



/* vtable 009054a4 slot 2 address 0049fb5e */

/* ADDRESS: 0049fb5e NAME: FUN_0049fb5e */

void __thiscall FUN_0049fb5e(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  short sVar2;
  short sVar3;
  undefined4 uVar4;
  size_t _Size;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar8;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  uint uVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  int local_54;
  undefined1 *local_44;
  int local_40;
  undefined1 local_38 [40];
  
  FUN_00778320("dimension");
  uVar1 = FUN_004ad7f2(local_38);
  *(undefined1 *)(param_1 + 0x28) = uVar1;
  FUN_0081ffd0(extraout_EDX);
  FUN_00778320("xCenter");
  uVar11 = FUN_004ad8fe(local_38);
  *(int *)(param_1 + 0x20) = (int)uVar11;
  FUN_0081ffd0((int)((ulonglong)uVar11 >> 0x20));
  FUN_00778320("zCenter");
  uVar4 = FUN_004ad8fe(local_38);
  *(undefined4 *)(param_1 + 0x24) = uVar4;
  FUN_0081ffd0(extraout_ECX);
  FUN_00778320("scale");
  uVar1 = FUN_004ad7f2(local_38);
  *(undefined1 *)(param_1 + 0x29) = uVar1;
  FUN_0081ffd0(extraout_EDX_00);
  if (*(char *)(param_1 + 0x29) < '\0') {
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  else if ('\x04' < *(char *)(param_1 + 0x29)) {
    *(undefined1 *)(param_1 + 0x29) = 4;
  }
  FUN_00778320("width");
  sVar2 = FUN_004ad886(local_38);
  FUN_0081ffd0(extraout_ECX_00);
  FUN_00778320("height");
  sVar3 = FUN_004ad886(local_38);
  FUN_0081ffd0(extraout_EDX_01);
  if ((sVar2 == 0x80) && (sVar3 == 0x80)) {
    FUN_00778320("colors");
    uVar4 = FUN_004adcf8(param_2,local_38);
    FUN_0081ffd0(uVar4,uVar4);
    _Size = local_40 - (int)local_44;
    if (_Size != 0) {
      if (_Size == 1) {
        *(undefined1 *)(param_1 + 0x2a) = *local_44;
      }
      else {
        if (0x4000 < _Size) {
          _Size = 0x4000;
        }
        memmove((void *)(param_1 + 0x2a),local_44,_Size);
      }
    }
  }
  else {
    FUN_00778320("colors");
    uVar4 = FUN_004adcf8(param_2,local_38);
    FUN_0081ffd0(uVar4,uVar4);
    puVar10 = (undefined4 *)(param_1 + 0x2a);
    for (iVar8 = 0x1000; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
    }
    iVar8 = (int)sVar2;
    iVar5 = (0x80 - iVar8) / 2;
    local_54 = 0;
    uVar6 = (0x80 - sVar3) / 2;
    for (uVar9 = uVar6; (int)(uVar9 - uVar6) < (int)sVar3; uVar9 = uVar9 + 1) {
      if (uVar9 < 0x80) {
        for (iVar7 = 0; iVar7 < iVar8; iVar7 = iVar7 + 1) {
          if (((uint)(iVar5 + iVar7) < 0x80) &&
             ((uint)(local_54 + iVar7) < (uint)(local_40 - (int)local_44))) {
            *(undefined1 *)(uVar9 * 0x80 + iVar5 + param_1 + 0x2a + iVar7) =
                 local_44[iVar7 + local_54];
          }
        }
      }
      local_54 = local_54 + iVar8;
    }
  }
  FUN_007f0294();
  return;
}



/* vtable 009054a4 slot 3 address 0049fde6 */

/* ADDRESS: 0049fde6 NAME: FUN_0049fde6 */

void __fastcall FUN_0049fde6(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puStack_44;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  undefined1 auStack_38 [40];
  
  cVar1 = *(char *)(param_1 + 0x28);
  FUN_00778320("dimension");
  uVar2 = FUN_004ae30e(auStack_38,(int)cVar1);
  FUN_0081ffd0(uVar2,uVar2);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  FUN_00778320("xCenter");
  FUN_004ae3da(auStack_38,uVar2);
  FUN_0081ffd0(extraout_ECX,extraout_ECX);
  uVar2 = *(undefined4 *)(param_1 + 0x24);
  FUN_00778320("zCenter");
  uVar2 = FUN_004ae3da(auStack_38,uVar2);
  FUN_0081ffd0(uVar2,uVar2);
  cVar1 = *(char *)(param_1 + 0x29);
  FUN_00778320("scale");
  uVar2 = FUN_004ae30e(auStack_38,(int)cVar1);
  FUN_0081ffd0(uVar2,uVar2);
  FUN_00778320("width");
  uVar2 = FUN_004ae37c(auStack_38,0x80);
  FUN_0081ffd0(uVar2,uVar2);
  FUN_00778320("height");
  FUN_004ae37c(auStack_38,0x80);
  FUN_0081ffd0(extraout_ECX_00,extraout_ECX_00);
  puStack_44 = (undefined4 *)0x0;
  puStack_3c = (undefined4 *)0x0;
  puStack_44 = (undefined4 *)FUN_00846710(0x4000);
  puStack_40 = puStack_44 + 0x1000;
  puVar4 = (undefined4 *)(param_1 + 0x2a);
  puVar5 = puStack_44;
  for (iVar3 = 0x1000; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  puStack_3c = puStack_40;
  FUN_00778320("colors");
  uVar2 = FUN_004ae5c8(auStack_38,&puStack_44);
  FUN_0081ffd0(uVar2,uVar2);
  FUN_007f0294();
  return;
}


