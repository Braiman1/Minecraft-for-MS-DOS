/* Candidate RTTI class: ChunkProviderClient
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00903a6c slot 0 address 00437218 */

/* ADDRESS: 00437218 NAME: FUN_00437218 */

void __fastcall FUN_00437218(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 *puVar2;
  
  *param_1 = &PTR_FUN_00903a6c;
  for (puVar2 = (undefined4 *)param_1[4]; puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    pvVar1 = (void *)puVar2[4];
    if (pvVar1 != (void *)0x0) {
      FUN_00776fdc();
      free(pvVar1);
    }
  }
  pvVar1 = (void *)param_1[1];
  if (pvVar1 != (void *)0x0) {
    FUN_00776fdc();
    free(pvVar1);
  }
  FUN_007effa0();
  FUN_007dc9d4();
  return;
}



/* vtable 00903a6c slot 1 address 00437288 */

/* ADDRESS: 00437288 NAME: FUN_00437288 */

void __fastcall FUN_00437288(void *param_1)

{
  FUN_00437218();
  free(param_1);
  return;
}



/* vtable 00903a6c slot 2 address 00436f70 */

/* ADDRESS: 00436f70 NAME: FUN_00436f70 */

undefined1 FUN_00436f70(void)

{
  return 1;
}



/* vtable 00903a6c slot 3 address 004372fa */

/* ADDRESS: 004372fa NAME: FUN_004372fa */

undefined4 __thiscall FUN_004372fa(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined8 local_24;
  int *local_18;
  
  local_24 = FUN_00433eae(param_2,param_3);
  FUN_0077f5ec(param_1 + 8,&local_24);
  if ((local_18 == (int *)0x0) || (*local_18 == 0)) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  else {
    uVar1 = *(undefined4 *)(*local_18 + 0x10);
  }
  return uVar1;
}



/* vtable 00903a6c slot 4 address 00437564 */

/* ADDRESS: 00437564 NAME: FUN_00437564 */

int __thiscall FUN_00437564(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  int local_40;
  undefined8 local_3c;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  
  local_3c = FUN_00433eae(param_2,param_3);
  FUN_0077f5ec(param_1 + 8,&local_3c);
  if ((local_28 != (int *)0x0) && (iVar6 = *local_28, iVar6 != 0)) {
    local_28 = *(int **)(iVar6 + 0x10);
    if ((local_28 != (int *)0x0) && (local_28 != *(int **)(param_1 + 4))) {
      (**(code **)(*local_28 + 0x5c))();
    }
    uVar1 = *(undefined4 *)(param_1 + 0x28);
    uVar2 = FUN_0083c8f8(*(undefined4 *)(param_1 + 0x24),uVar1,&local_28);
    FUN_0081cb5c(uVar2,uVar1);
    uVar7 = *(uint *)(iVar6 + 8) % *(uint *)(param_1 + 0xc);
    piVar5 = *(int **)(*(int *)(param_1 + 8) + uVar7 * 4);
    do {
      piVar3 = piVar5;
      piVar5 = (int *)*piVar3;
    } while ((int *)iVar6 != piVar5);
    FUN_007dc92c(uVar7,piVar3,iVar6);
    piVar5 = local_28;
    if ((*(int **)(param_1 + 4) != local_28) && (local_28 != (int *)0x0)) {
      FUN_00776fdc();
      free(piVar5);
    }
  }
  local_34 = (undefined4 *)FUN_00846710(0x8000);
  puVar4 = local_34 + 0x2000;
  puVar10 = local_34;
  for (iVar6 = 0x2000; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar10 = 0;
    puVar10 = puVar10 + 1;
  }
  local_30 = puVar4;
  local_2c = puVar4;
  iVar6 = FUN_00846710(0x210);
  puVar10 = local_34;
  iVar9 = (int)puVar4 - (int)local_34;
  if (iVar9 == 0) {
    local_28 = (int *)0x0;
  }
  else {
    local_28 = (int *)FUN_00846710(iVar9);
  }
  piVar5 = (int *)((int)local_28 + iVar9);
  local_24 = local_28;
  if (iVar9 != 0) {
    piVar3 = local_28;
    for (; local_24 = piVar5, iVar9 != 0; iVar9 = iVar9 + -1) {
      *(undefined1 *)piVar3 = *(undefined1 *)puVar10;
      puVar10 = (undefined4 *)((int)puVar10 + 1);
      piVar3 = (int *)((int)piVar3 + 1);
    }
  }
  local_20 = piVar5;
  FUN_0043291e(*(undefined4 *)(param_1 + 0x30),&local_28,param_2,param_3);
  local_40 = iVar6;
  FUN_007f01f4();
  uVar1 = local_3c._4_4_;
  uVar7 = (uint)local_3c;
  iVar9 = *(int *)(iVar6 + 0x28) - (int)*(undefined1 **)(iVar6 + 0x24);
  if (iVar9 != 0) {
    puVar11 = *(undefined1 **)(iVar6 + 0x24);
    for (; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar11 = 0xff;
      puVar11 = puVar11 + 1;
    }
  }
  piVar8 = (int *)((uint)local_3c % *(uint *)(param_1 + 0xc));
  piVar3 = (int *)FUN_00436fba(piVar8,&local_3c);
  if ((piVar3 == (int *)0x0) || (iVar9 = *piVar3, iVar9 == 0)) {
    puVar4 = (undefined4 *)FUN_00846710(0x18,piVar5);
    puVar4[2] = uVar7;
    *puVar4 = 0;
    puVar4[4] = 0;
    puVar4[3] = uVar1;
    iVar9 = FUN_007dc71c(piVar8,uVar7,puVar4,1);
    piVar5 = piVar8;
  }
  *(int *)(iVar9 + 0x10) = iVar6;
  piVar3 = *(int **)(param_1 + 0x28);
  if (piVar3 == *(int **)(param_1 + 0x2c)) {
    piVar5 = (int *)FUN_0081cab0(&local_40);
  }
  else {
    *piVar3 = local_40;
    *(int **)(param_1 + 0x28) = piVar3 + 1;
  }
  *(undefined1 *)(iVar6 + 0x10) = 1;
  FUN_007f01f4(piVar5);
  return iVar6;
}



/* vtable 00903a6c slot 5 address 00436f80 */

/* ADDRESS: 00436f80 NAME: FUN_00436f80 */

void FUN_00436f80(void)

{
  return;
}



/* vtable 00903a6c slot 6 address 00436f76 */

/* ADDRESS: 00436f76 NAME: FUN_00436f76 */

undefined1 FUN_00436f76(void)

{
  return 1;
}



/* vtable 00903a6c slot 7 address 00436f7c */

/* ADDRESS: 00436f7c NAME: FUN_00436f7c */

undefined4 FUN_00436f7c(void)

{
  return 0;
}



/* vtable 00903a6c slot 8 address 00436f7c */
/* Already included above. */

/* vtable 00903a6c slot 9 address 00437012 */

/* ADDRESS: 00437012 NAME: FUN_00437012 */

int __thiscall FUN_00437012(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  int local_6c;
  int local_68;
  undefined4 local_54;
  uint local_50;
  int *local_38;
  int local_34;
  int local_30 [4];
  undefined1 local_20;
  
  FUN_0040f327(&local_54,*(undefined4 *)(param_2 + 0x14),10);
  local_38 = local_30;
  local_6c = 0x17;
  local_38 = (int *)FUN_00822e70(&local_6c,0);
  local_30[0] = local_6c;
  FUN_008220b0(local_38,"MultiplayerChunkCache: ",0x17);
  local_34 = local_6c;
  *(undefined1 *)((int)local_38 + local_6c) = 0;
  local_20 = 0;
  FUN_00823370(&local_38);
  if (0x7ffffffeU - local_68 < local_50) {
                    /* WARNING: Subroutine does not return */
    FUN_0084e530("basic_string::append");
  }
  uVar1 = FUN_00822ca0(local_54,local_50);
  FUN_00823680(&local_6c);
  *(undefined1 *)(param_1 + 0x18) = 0;
  FUN_0081ffd0(extraout_EDX,uVar1);
  FUN_0081ffd0();
  FUN_0081ffd0();
  return param_1;
}



/* vtable 00903a6c slot 10 address 0077ca44 */

/* ADDRESS: 0077ca44 NAME: FUN_0077ca44 */

undefined4 __fastcall FUN_0077ca44(int param_1)

{
  return *(undefined4 *)(param_1 + 0x14);
}



/* vtable 00903a6c slot 11 address 00436f84 */

/* ADDRESS: 00436f84 NAME: FUN_00436f84 */

void __thiscall FUN_00436f84(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  for (puVar2 = *(undefined4 **)(param_1 + 0x10); puVar2 != (undefined4 *)0x0;
      puVar2 = (undefined4 *)*puVar2) {
    piVar1 = (int *)puVar2[4];
    if ((piVar1 != (int *)0x0) && (*(int **)(param_1 + 4) != piVar1)) {
      (**(code **)(*piVar1 + 0x3c))(param_2);
    }
  }
  return;
}


