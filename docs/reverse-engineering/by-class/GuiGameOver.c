/* Candidate RTTI class: GuiGameOver
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fc810 slot 0 address 007723b4 */

/* ADDRESS: 007723b4 NAME: thunk_FUN_007723bc */

void thunk_FUN_007723bc(void)

{
  FUN_007723bc();
  return;
}



/* vtable 008fc810 slot 1 address 00772390 */

/* ADDRESS: 00772390 NAME: FUN_00772390 */

void __fastcall FUN_00772390(void *param_1)

{
  FUN_007723bc();
  free(param_1);
  return;
}



/* vtable 008fc810 slot 2 address 0047e3bc */

/* ADDRESS: 0047e3bc NAME: FUN_0047e3bc */

void __fastcall FUN_0047e3bc(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar4;
  uint uVar3;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint local_58;
  undefined1 local_34 [36];
  
  FUN_00475794(0,0,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),0x60500000,
               0xa0803030);
  (*DAT_0145d020)();
  (*DAT_0145cf80)(DAT_0088be50,DAT_0088be50,DAT_0088be50);
  iVar1 = *(int *)(param_1 + 0xc);
  FUN_0047e1b6("Game over!");
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),local_34,iVar1 / 4,0x1e,0xffffff);
  FUN_0081ffd0();
  (*DAT_0145d034)();
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = FUN_0046058c();
  iVar6 = 1;
  uVar7 = -uVar2;
  uVar3 = uVar2;
  uVar4 = uVar2;
  if (-1 < (int)uVar7) {
    uVar3 = uVar7;
    uVar4 = uVar7;
  }
  do {
    if (uVar3 < 10) {
LAB_0047e4eb:
      local_58 = -((int)uVar2 >> 0x1f) & 0xff;
      FUN_00820ec0(-((int)uVar2 >> 0x1f) + iVar6,local_58,iVar6,uVar4);
      uVar5 = FUN_00821d90(0,"Score: &e");
      FUN_00823120(uVar5);
      FUN_004759fa(*(undefined4 *)(param_1 + 0x24),local_34,iVar1 / 2,100,0xffffff);
      FUN_0081ffd0();
      FUN_0081ffd0();
      FUN_0048528a();
      return;
    }
    if (uVar3 < 100) {
      iVar6 = iVar6 + 1;
      goto LAB_0047e4eb;
    }
    if (uVar3 < 1000) {
      iVar6 = iVar6 + 2;
      goto LAB_0047e4eb;
    }
    if (uVar3 < 10000) {
      iVar6 = iVar6 + 3;
      goto LAB_0047e4eb;
    }
    iVar6 = iVar6 + 4;
    uVar3 = uVar3 / 10000;
  } while( true );
}



/* vtable 008fc810 slot 3 address 0047e120 */

/* ADDRESS: 0047e120 NAME: FUN_0047e120 */

void FUN_0047e120(void)

{
  return;
}



/* vtable 008fc810 slot 4 address 0048536a */

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



/* vtable 008fc810 slot 5 address 00485244 */

/* ADDRESS: 00485244 NAME: FUN_00485244 */

void __thiscall FUN_00485244(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(param_2,param_3);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* vtable 008fc810 slot 6 address 0047e128 */

/* ADDRESS: 0047e128 NAME: FUN_0047e128 */

void __thiscall FUN_0047e128(int param_1,int param_2)

{
  if (*(int *)(param_2 + 0x30) == 1) {
    (**(code **)(**(int **)(*(int *)(param_1 + 8) + 0x18) + 0x198))();
    FUN_0051d808(0);
  }
  if (*(int *)(param_2 + 0x30) == 2) {
    FUN_0051f524(0);
    FUN_00846710(0x50);
    FUN_00481b3c();
    FUN_0051d808();
    return;
  }
  return;
}



/* vtable 008fc810 slot 7 address 0047e23a */

/* ADDRESS: 0047e23a NAME: FUN_0047e23a */

void __fastcall FUN_0047e23a(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  undefined4 uVar3;
  undefined4 uStack_38;
  undefined1 auStack_34 [36];
  
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  uVar2 = FUN_00846710(0x38);
  FUN_0047e1b6("Respawn");
  uVar3 = 1;
  FUN_004786b8(1,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 4 + 0x48,auStack_34);
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  uStack_38 = uVar2;
  if (puVar1 == *(undefined4 **)(param_1 + 0x1c)) {
    FUN_0081d2a4(&uStack_38);
    uVar3 = extraout_ECX;
  }
  else {
    *puVar1 = uVar2;
    *(undefined4 **)(param_1 + 0x18) = puVar1 + 1;
  }
  FUN_0081ffd0(uVar3);
  uVar3 = FUN_00846710(0x38);
  FUN_0047e1b6("Title menu");
  uVar2 = 2;
  FUN_004786b8(2,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 4 + 0x60,auStack_34);
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  uStack_38 = uVar3;
  if (puVar1 == *(undefined4 **)(param_1 + 0x1c)) {
    uVar2 = FUN_0081d2a4(&uStack_38);
  }
  else {
    *puVar1 = uVar3;
    *(undefined4 **)(param_1 + 0x18) = puVar1 + 1;
  }
  FUN_0081ffd0(uVar2);
  if (*(int *)(*(int *)(param_1 + 8) + 0x24) == 0) {
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x14) + 4) + 0x34) = 0;
  }
  return;
}



/* vtable 008fc810 slot 8 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}



/* vtable 008fc810 slot 9 address 00485280 */
/* Already included above. */

/* vtable 008fc810 slot 10 address 0047e124 */

/* ADDRESS: 0047e124 NAME: FUN_0047e124 */

undefined4 FUN_0047e124(void)

{
  return 0;
}



/* vtable 008fc810 slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 008fc810 slot 12 address 00485280 */
/* Already included above. */
