/* Candidate RTTI class: J_JsonArrayNodeBuilder
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 009048b4 slot 0 address 007763ec */

/* ADDRESS: 007763ec NAME: thunk_FUN_007763f4 */

void thunk_FUN_007763f4(void)

{
  FUN_007763f4();
  return;
}



/* vtable 009048b4 slot 1 address 007763c8 */

/* ADDRESS: 007763c8 NAME: FUN_007763c8 */

void __fastcall FUN_007763c8(void *param_1)

{
  FUN_007763f4();
  free(param_1);
  return;
}



/* vtable 009048b4 slot 2 address 0049983e */

/* ADDRESS: 0049983e NAME: thunk_FUN_00499702 */

undefined4 __fastcall thunk_FUN_00499702(int param_1)

{
  undefined1 *_Memory;
  undefined4 uVar1;
  int iVar2;
  int iVar4;
  uint uVar3;
  undefined1 *puVar5;
  int iVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined4 *puStack_34;
  undefined1 *puStack_28;
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  
  puStack_28 = (undefined1 *)0x0;
  puStack_24 = (undefined4 *)0x0;
  puStack_20 = (undefined4 *)0x0;
  puStack_34 = *(undefined4 **)(param_1 + 4);
  do {
    if ((undefined4 *)(param_1 + 4) == puStack_34) {
      uVar1 = FUN_0049b536(&puStack_28);
      if (puStack_28 != (undefined1 *)0x0) {
        free(puStack_28);
      }
      return uVar1;
    }
    uVar1 = (**(code **)(*(int *)puStack_34[2] + 8))();
    _Memory = puStack_28;
    if (puStack_24 == puStack_20) {
      iVar2 = (int)puStack_24 - (int)puStack_28;
      iVar6 = iVar2 >> 2;
      if (iVar6 == 0x1fffffff) {
                    /* WARNING: Subroutine does not return */
        FUN_0084e530("vector::_M_realloc_append");
      }
      iVar4 = 1;
      if (iVar6 != 0) {
        iVar4 = iVar6;
      }
      uVar3 = iVar4 + iVar6;
      if (0x1fffffff < uVar3) {
        uVar3 = 0x1fffffff;
      }
      puVar5 = (undefined1 *)FUN_00846710(uVar3 * 4);
      *(undefined4 *)(puVar5 + iVar2) = uVar1;
      if (iVar2 != 0) {
        puVar7 = _Memory;
        puVar8 = puVar5;
        for (iVar6 = iVar2; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar8 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar8 = puVar8 + 1;
        }
      }
      if (_Memory != (undefined1 *)0x0) {
        free(_Memory);
      }
      puStack_20 = (undefined4 *)(puVar5 + uVar3 * 4);
      puStack_28 = puVar5;
      puStack_24 = (undefined4 *)(puVar5 + iVar2 + 4);
    }
    else {
      *puStack_24 = uVar1;
      puStack_24 = puStack_24 + 1;
    }
    puStack_34 = (undefined4 *)*puStack_34;
  } while( true );
}


