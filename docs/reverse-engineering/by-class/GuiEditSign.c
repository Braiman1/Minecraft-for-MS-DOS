/* Candidate RTTI class: GuiEditSign
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fc7d4 slot 0 address 00772368 */

/* ADDRESS: 00772368 NAME: thunk_FUN_00772370 */

void thunk_FUN_00772370(void)

{
  FUN_00772370();
  return;
}



/* vtable 008fc7d4 slot 1 address 00772344 */

/* ADDRESS: 00772344 NAME: FUN_00772344 */

void __fastcall FUN_00772344(void *param_1)

{
  FUN_00772370();
  free(param_1);
  return;
}



/* vtable 008fc7d4 slot 2 address 0047d826 */

/* ADDRESS: 0047d826 NAME: FUN_0047d826 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_0047d826(int param_1)

{
  code *pcVar1;
  int iVar2;
  float fVar3;
  
  FUN_0048597e();
  FUN_004759fa(*(undefined4 *)(param_1 + 0x24),param_1 + 0x30,*(int *)(param_1 + 0xc) / 2,0x28,
               0xffffff);
  (*DAT_0145d020)();
  FUN_0076f818((float)(*(int *)(param_1 + 0xc) / 2),0,0x42480000);
  (*DAT_0145cf80)(DAT_0088bbc8,DAT_0088bbc8,DAT_0088bbc8);
  (*DAT_0145cf88)(0x43340000,0,0x3f800000,0);
  iVar2 = FUN_005054a6();
  pcVar1 = *(code **)(**(int **)(param_1 + 0x48) + 0x14);
  if (DAT_00a06224 == iVar2) {
    iVar2 = (*pcVar1)();
    fVar3 = (float)(iVar2 * 0x168) * _DAT_0088bbcc;
  }
  else {
    iVar2 = (*pcVar1)();
    fVar3 = DAT_0088bbc4;
    if (((iVar2 != 2) && (fVar3 = DAT_0088bbc0, iVar2 != 4)) && (fVar3 = DAT_0088bbbc, iVar2 != 5))
    {
      fVar3 = 0.0;
    }
  }
  (*DAT_0145cf88)(fVar3,0x3f80000000000000,0);
  FUN_0076f818(0,0xbf880000,0);
  iVar2 = *(int *)(param_1 + 0x48);
  if ((*(int *)(param_1 + 0x4c) / 6 & 1U) == 0) {
    *(undefined4 *)(iVar2 + 0x88) = *(undefined4 *)(param_1 + 0x50);
  }
  FUN_005087bc(iVar2,DAT_0088bbd0,0,0xbfe80000,DAT_0088bbd0,0);
  *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x88) = 0xffffffff;
  (*DAT_0145d034)();
  FUN_0048528a();
  return;
}



/* vtable 008fc7d4 slot 3 address 0047d466 */

/* ADDRESS: 0047d466 NAME: FUN_0047d466 */

void __thiscall FUN_0047d466(int param_1,undefined2 param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_44;
  undefined4 *local_38;
  int local_34;
  undefined4 local_30 [4];
  undefined1 local_20;
  
  if (param_3 == 200) {
    uVar3 = *(int *)(param_1 + 0x50) - 1;
  }
  else {
    if ((param_3 != 0xd0) && (param_3 != 0x1c)) {
      if (param_3 == 0xe) {
        iVar5 = *(int *)(param_1 + 0x50) * 0x1c;
        if (*(int *)(*(int *)(param_1 + 0x48) + 0x1c + iVar5) != 0) {
          FUN_004109cc(&local_38,*(int *)(param_1 + 0x48) + 0x18 + iVar5);
          iVar5 = *(int *)(param_1 + 0x50);
          iVar1 = *(int *)(param_1 + 0x48);
          iVar4 = iVar5 * 0x1c;
          puVar6 = *(undefined4 **)(iVar1 + iVar4 + 0x18);
          if (local_38 == local_30) {
            if (&local_38 != (undefined4 **)(iVar1 + 0x18 + iVar4)) {
              if (local_34 != 0) {
                FUN_008220b0(puVar6,local_38,local_34);
              }
              *(int *)(iVar1 + 0x1c + iVar5 * 0x1c) = local_34;
              *(undefined1 *)(*(int *)(iVar1 + 0x18 + iVar5 * 0x1c) + local_34) = 0;
            }
          }
          else {
            if (puVar6 == (undefined4 *)(iVar1 + 0x20 + iVar4)) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              local_44 = *(undefined4 *)(iVar1 + iVar4 + 0x20);
            }
            iVar4 = iVar5 * 0x1c;
            *(undefined4 **)(iVar1 + 0x18 + iVar4) = local_38;
            *(int *)(iVar1 + 0x1c + iVar4) = local_34;
            *(undefined4 *)(iVar1 + 0x20 + iVar4) = local_30[0];
            if (puVar6 == (undefined4 *)0x0) {
              local_38 = local_30;
            }
            else {
              local_30[0] = local_44;
              local_38 = puVar6;
            }
          }
          local_34 = 0;
          *(undefined1 *)local_38 = 0;
          *(undefined1 *)(iVar1 + 0x30 + iVar5 * 0x1c) = local_20;
          FUN_0081ffd0();
        }
      }
      goto LAB_0047d587;
    }
    uVar3 = *(int *)(param_1 + 0x50) + 1;
  }
  *(uint *)(param_1 + 0x50) = uVar3 & 3;
LAB_0047d587:
  FUN_008238d0(&DAT_00a07600);
  local_20 = 0;
  iVar5 = FUN_0040fb38(&local_38,param_2);
  bVar2 = false;
  if (-1 < iVar5) {
    iVar5 = FUN_0040f9d7(*(int *)(param_1 + 0x48) + 0x18 + *(int *)(param_1 + 0x50) * 0x1c);
    bVar2 = iVar5 < 0xf;
  }
  FUN_0081ffd0();
  if (bVar2) {
    FUN_0040fa09(*(int *)(param_1 + 0x48) + 0x18 + *(int *)(param_1 + 0x50) * 0x1c,param_2);
  }
  return;
}



/* vtable 008fc7d4 slot 4 address 0048536a */

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



/* vtable 008fc7d4 slot 5 address 00485244 */

/* ADDRESS: 00485244 NAME: FUN_00485244 */

void __thiscall FUN_00485244(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  if ((param_4 == 0) && (*(int **)(param_1 + 0x2c) != (int *)0x0)) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))(param_2,param_3);
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  return;
}



/* vtable 008fc7d4 slot 6 address 0047d3d4 */

/* ADDRESS: 0047d3d4 NAME: FUN_0047d3d4 */

undefined4 __thiscall FUN_0047d3d4(int param_1,int param_2)

{
  undefined4 in_EAX;
  undefined4 uVar1;
  
  if ((*(char *)(param_2 + 0x34) == '\0') || (*(int *)(param_2 + 0x30) != 0)) {
    return in_EAX;
  }
  (**(code **)(**(int **)(param_1 + 0x48) + 0x18))();
  uVar1 = FUN_0051d808();
  return uVar1;
}



/* vtable 008fc7d4 slot 7 address 0047d732 */

/* ADDRESS: 0047d732 NAME: FUN_0047d732 */

void __fastcall FUN_0047d732(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uStack_38;
  undefined1 *apuStack_34 [2];
  undefined1 auStack_2c [28];
  
  if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) {
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x14);
  }
  FUN_00568da8(1);
  uVar2 = FUN_00846710(0x38);
  apuStack_34[0] = auStack_2c;
  FUN_0047d408(&DAT_0088bbb5,&DAT_0088bbb9);
  uVar3 = 0;
  FUN_004786b8(0,*(int *)(param_1 + 0xc) / 2 + -100,*(int *)(param_1 + 0x10) / 4 + 0x78,apuStack_34)
  ;
  puVar1 = *(undefined4 **)(param_1 + 0x18);
  uStack_38 = uVar2;
  if (puVar1 == *(undefined4 **)(param_1 + 0x1c)) {
    uVar3 = FUN_0081d2a4(&uStack_38);
  }
  else {
    *puVar1 = uVar2;
    *(undefined4 **)(param_1 + 0x18) = puVar1 + 1;
  }
  FUN_0081ffd0(uVar3);
  return;
}



/* vtable 008fc7d4 slot 8 address 0047d3d0 */

/* ADDRESS: 0047d3d0 NAME: FUN_0047d3d0 */

void __fastcall FUN_0047d3d0(int param_1)

{
  *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
  return;
}



/* vtable 008fc7d4 slot 9 address 0047d610 */

/* ADDRESS: 0047d610 NAME: FUN_0047d610 */

void __fastcall FUN_0047d610(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 extraout_EDX;
  
  FUN_00568da8(0);
  if (*(char *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + 0x170) != '\0') {
    iVar3 = FUN_00846710(0x90);
    FUN_004b9ab8();
    iVar1 = *(int *)(param_1 + 0x48);
    *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(iVar1 + 0x10);
    iVar4 = 0;
    iVar1 = iVar3;
    do {
      iVar5 = iVar4 * 0x1c;
      iVar2 = *(int *)(param_1 + 0x48);
      FUN_00822d70(iVar2 + 0x18 + iVar5);
      iVar4 = iVar4 + 1;
      *(undefined1 *)(iVar1 + 0x34) = *(undefined1 *)(iVar2 + 0x30 + iVar5);
      iVar1 = iVar1 + 0x1c;
    } while (iVar4 != 4);
    FUN_0051d082(extraout_EDX);
    FUN_004b02f2(iVar3);
  }
  return;
}



/* vtable 008fc7d4 slot 10 address 00485282 */

/* ADDRESS: 00485282 NAME: FUN_00485282 */

undefined1 FUN_00485282(void)

{
  return 1;
}



/* vtable 008fc7d4 slot 11 address 00485286 */

/* ADDRESS: 00485286 NAME: FUN_00485286 */

void FUN_00485286(void)

{
  return;
}



/* vtable 008fc7d4 slot 12 address 00485280 */

/* ADDRESS: 00485280 NAME: FUN_00485280 */

void FUN_00485280(void)

{
  return;
}


