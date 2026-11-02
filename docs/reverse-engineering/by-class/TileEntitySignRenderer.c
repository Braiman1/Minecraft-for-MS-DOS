/* Candidate RTTI class: TileEntitySignRenderer
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904a04 slot 0 address 005091b4 */

/* ADDRESS: 005091b4 NAME: FUN_005091b4 */

void __fastcall FUN_005091b4(undefined4 *param_1)

{
  void *_Memory;
  
  _Memory = (void *)param_1[2];
  *param_1 = &PTR_FUN_00904a04;
  if (_Memory != (void *)0x0) {
    FUN_004f369e();
    free(_Memory);
  }
  return;
}



/* vtable 00904a04 slot 1 address 005091e6 */

/* ADDRESS: 005091e6 NAME: FUN_005091e6 */

void __fastcall FUN_005091e6(void *param_1)

{
  FUN_005091b4();
  free(param_1);
  return;
}



/* vtable 00904a04 slot 2 address 00509708 */

/* ADDRESS: 00509708 NAME: thunk_FUN_0050927e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
thunk_FUN_0050927e(int param_1,int *param_2,double param_3,double param_4,double param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *extraout_ECX;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 uStack_9c;
  int *piStack_88;
  undefined4 *puStack_78;
  undefined4 *puStack_74;
  undefined4 auStack_70 [4];
  undefined1 *puStack_60;
  undefined4 uStack_5c;
  undefined1 auStack_58 [16];
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  undefined4 auStack_40 [7];
  
  iVar1 = FUN_005054a6();
  (*DAT_0145d020)();
  if (DAT_00a06224 == iVar1) {
    FUN_0076f818((float)param_3 + DAT_008966b8,(float)param_4 + DAT_008966b8,
                 (float)param_5 + DAT_008966b8);
    iVar1 = (**(code **)(*param_2 + 0x14))();
    (*DAT_0145cf88)((uint)((float)(iVar1 * 0x168) * _DAT_008966c0) ^ _DAT_008966d0,0,0x3f800000,0);
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 4) + 0x31) = 1;
  }
  else {
    iVar1 = (**(code **)(*param_2 + 0x14))();
    uVar5 = DAT_008966b4;
    if (((iVar1 != 2) && (uVar5 = DAT_008966b0, iVar1 != 4)) && (uVar5 = DAT_008966ac, iVar1 != 5))
    {
      uVar5 = 0;
    }
    FUN_0076f818((float)param_3 + DAT_008966b8,(float)param_4 + DAT_008966b8,
                 (float)param_5 + DAT_008966b8);
    (*DAT_0145cf88)(uVar5 ^ _DAT_008966d0,0,0x3f800000,0);
    FUN_0076f818(0,0xbea00000,0xbee00000);
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 8) + 4) + 0x31) = 0;
  }
  puStack_48 = auStack_40;
  FUN_008220b0(puStack_48,"/item/sign.png",0xe);
  puStack_44 = (undefined4 *)0xe;
  *(undefined1 *)((int)puStack_48 + 0xe) = 0;
  uVar2 = FUN_00509732(&puStack_48);
  iVar1 = 0;
  FUN_0081ffd0(uVar2);
  (*DAT_0145d020)();
  (*DAT_0145cf80)(0x3f2aaaab,DAT_008966e0,DAT_008966e0);
  FUN_004f36ea();
  (*DAT_0145d034)();
  FUN_0050972a();
  FUN_0076f818(0,0x3eaaaaab,0x3d3f258c);
  (*DAT_0145cf80)(DAT_008966e4,0xbc360b63,DAT_008966e4);
  (*DAT_0145d090)(0,0,0xbc360b63);
  (*DAT_0145d274)(0);
  piStack_88 = param_2 + 6;
  do {
    FUN_00823370(piStack_88);
    puVar7 = puStack_74;
    puVar6 = puStack_78;
    if (param_2[0x22] == iVar1) {
      auStack_58[0] = 0;
      puStack_60 = auStack_58;
      uStack_5c = 0;
      FUN_00822a40((undefined1 *)((int)puStack_74 + 2));
      FUN_0050920a(&DAT_008966a4,2);
      FUN_0050920a(puVar6,puVar7);
      uVar2 = FUN_00821690(&DAT_008966a7);
      FUN_00823120(uVar2);
      puVar6 = extraout_ECX;
      if (puStack_48 == auStack_40) {
        if (puStack_44 != (undefined4 *)0x0) {
          puVar6 = puStack_78;
          puVar7 = puStack_48;
          FUN_008220b0(puStack_78,puStack_48,puStack_44);
        }
        puStack_74 = puStack_44;
        *(undefined1 *)((int)puStack_78 + (int)puStack_44) = 0;
      }
      else {
        if (puStack_78 == auStack_70) {
          puVar3 = (undefined4 *)0x0;
        }
        else {
          uStack_9c = auStack_70[0];
          puVar3 = puStack_78;
        }
        puStack_74 = puStack_44;
        puStack_78 = puStack_48;
        auStack_70[0] = auStack_40[0];
        if (puVar3 == (undefined4 *)0x0) {
          puStack_48 = auStack_40;
        }
        else {
          auStack_40[0] = uStack_9c;
          puStack_48 = puVar3;
        }
      }
      puStack_44 = (undefined4 *)0x0;
      *(undefined1 *)puStack_48 = 0;
      FUN_0081ffd0(puVar6,puVar7);
      FUN_0081ffd0();
    }
    iVar4 = FUN_0046f612(&puStack_78);
    FUN_0046feda(&puStack_78,-(iVar4 / 2),(iVar1 + -2) * 10,0);
    iVar1 = iVar1 + 1;
    FUN_0081ffd0();
    piStack_88 = piStack_88 + 7;
  } while (iVar1 != 4);
  (*DAT_0145d274)(1);
  (*DAT_0145d2d4)(DAT_008966bc,DAT_008966bc,DAT_008966bc,DAT_008966bc);
  (*DAT_0145d034)();
  return;
}



/* vtable 00904a04 slot 3 address 00776ac4 */

/* ADDRESS: 00776ac4 NAME: FUN_00776ac4 */

void FUN_00776ac4(void)

{
  return;
}


