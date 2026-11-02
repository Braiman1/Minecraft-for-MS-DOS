/* Candidate RTTI class: ImageBufferDownload
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00903f04 slot 0 address 00775d10 */

/* ADDRESS: 00775d10 NAME: thunk_FUN_00775d18 */

void thunk_FUN_00775d18(void)

{
  FUN_00775d18();
  return;
}



/* vtable 00903f04 slot 1 address 00775cec */

/* ADDRESS: 00775cec NAME: FUN_00775cec */

void __fastcall FUN_00775cec(void *param_1)

{
  FUN_00775d18();
  free(param_1);
  return;
}



/* vtable 00903f04 slot 2 address 0048d96e */

/* ADDRESS: 0048d96e NAME: FUN_0048d96e */

int __thiscall FUN_0048d96e(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  int local_40;
  int local_38;
  int local_34;
  
  if (param_2 != 0) {
    puVar6 = *(undefined4 **)(param_1 + 4);
    *(undefined4 *)(param_1 + 0x10) = 0x40;
    *(undefined4 *)(param_1 + 0x14) = 0x20;
    if (*(int *)(param_1 + 0xc) - (int)puVar6 < 0x2000) {
      puVar1 = (undefined4 *)FUN_00846710(0x2000);
      *(undefined4 **)(param_1 + 0xc) = puVar1 + 0x800;
      puVar6 = puVar1;
      for (iVar4 = 0x800; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      *(undefined4 **)(param_1 + 4) = puVar1;
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0xc);
      FUN_007f0494();
    }
    else {
      iVar4 = *(int *)(param_1 + 8) - (int)puVar6;
      if (iVar4 < 0x2000) {
        if (iVar4 != 0) {
          for (iVar2 = iVar4; iVar2 != 0; iVar2 = iVar2 + -1) {
            *(undefined1 *)puVar6 = 0;
            puVar6 = (undefined4 *)((int)puVar6 + 1);
          }
        }
        puVar5 = *(undefined1 **)(param_1 + 8);
        for (iVar4 = 0x2000 - iVar4; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar5 = 0;
          puVar5 = puVar5 + 1;
        }
        *(undefined1 **)(param_1 + 8) = puVar5;
      }
      else {
        puVar1 = puVar6;
        for (iVar4 = 0x800; iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar1 = 0;
          puVar1 = puVar1 + 1;
        }
        if (puVar6 + 0x800 != *(undefined4 **)(param_1 + 8)) {
          *(undefined4 **)(param_1 + 8) = puVar6 + 0x800;
        }
      }
    }
    iVar2 = FUN_0040b95c();
    iVar3 = FUN_0040b960();
    iVar4 = *(int *)(param_1 + 0x10);
    if (iVar2 <= *(int *)(param_1 + 0x10)) {
      iVar4 = iVar2;
    }
    iVar2 = *(int *)(param_1 + 0x14);
    if (iVar3 <= *(int *)(param_1 + 0x14)) {
      iVar2 = iVar3;
    }
    iVar3 = iVar4 * iVar2 * 4;
    if (iVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0084e530("cannot create std::vector larger than max_size()");
    }
    puVar5 = (undefined1 *)0x0;
    if (iVar3 != 0) {
      puVar5 = (undefined1 *)FUN_00846710(iVar3);
      *puVar5 = 0;
      puVar7 = puVar5;
      while( true ) {
        puVar7 = puVar7 + 1;
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) break;
        *puVar7 = 0;
      }
    }
    FUN_0040b968(0,0,iVar4,iVar2,puVar5);
    local_40 = 0;
    for (local_34 = 0; local_34 < iVar2; local_34 = local_34 + 1) {
      local_38 = 0;
      puVar7 = puVar5 + local_40 * 4;
      while (local_38 < iVar4) {
        iVar3 = local_34 * *(int *)(param_1 + 0x10) + local_38;
        local_38 = local_38 + 1;
        *(undefined1 *)(*(int *)(param_1 + 4) + iVar3 * 4) = *puVar7;
        *(undefined1 *)(*(int *)(param_1 + 4) + 1 + iVar3 * 4) = puVar7[1];
        *(undefined1 *)(*(int *)(param_1 + 4) + 2 + iVar3 * 4) = puVar7[2];
        *(undefined1 *)(*(int *)(param_1 + 4) + 3 + iVar3 * 4) = puVar7[3];
        puVar7 = puVar7 + 4;
      }
      local_40 = local_40 + iVar4;
    }
    FUN_0048d8a0(0,0,0x20,0x10);
    FUN_0048d910(0x20,0,0x40,0x20);
    FUN_0048d8a0(0,0x10,0x40,0x20);
    param_2 = FUN_00846710(0xc);
    FUN_0040baa0(*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    FUN_0040b9ea(0,0,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14),
                 *(undefined4 *)(param_1 + 4));
    FUN_007f0494();
  }
  return param_2;
}


