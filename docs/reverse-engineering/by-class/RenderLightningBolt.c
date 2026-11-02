/* Candidate RTTI class: RenderLightningBolt
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904038 slot 0 address 00775ed8 */

/* ADDRESS: 00775ed8 NAME: thunk_FUN_00775ee0 */

void thunk_FUN_00775ee0(void)

{
  FUN_00775ee0();
  return;
}



/* vtable 00904038 slot 1 address 00775eb4 */

/* ADDRESS: 00775eb4 NAME: FUN_00775eb4 */

void __fastcall FUN_00775eb4(void *param_1)

{
  FUN_00775ee0();
  free(param_1);
  return;
}



/* vtable 00904038 slot 2 address 004e5140 */

/* ADDRESS: 004e5140 NAME: thunk_FUN_004e4c5e */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_004e4c5e(int param_1,double param_2,double param_3,double param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  int iStack_100;
  double dStack_f4;
  double dStack_ec;
  double dStack_e4;
  double dStack_dc;
  double dStack_d4;
  double adStack_9c [5];
  double adStack_74 [3];
  double adStack_5c [5];
  double adStack_34 [4];
  
  (*DAT_0145d26c)();
  iVar4 = 7;
  (*DAT_0145d26c)(0xb50);
  (*DAT_0145d248)();
  (*DAT_0145d34c)(0x302,1);
  thunk_FUN_0040e684(*(undefined4 *)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0x1bc));
  dStack_dc = 0.0;
  dStack_d4 = 0.0;
  do {
    adStack_9c[iVar4] = dStack_d4;
    adStack_5c[iVar4] = dStack_dc;
    iVar1 = FUN_0040e7b8(0xb);
    dStack_d4 = (double)(iVar1 + -5) + dStack_d4;
    iVar1 = FUN_0040e7b8(0xb);
    dStack_dc = (double)(iVar1 + -5) + dStack_dc;
    bVar7 = iVar4 != 0;
    iVar4 = iVar4 + -1;
  } while (bVar7);
  iVar4 = 0;
  do {
    iVar1 = 7;
    thunk_FUN_0040e684(*(undefined4 *)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0x1bc));
    iVar5 = 0;
    iStack_100 = 0;
    while( true ) {
      dStack_ec = adStack_9c[iVar1] - dStack_d4;
      dStack_e4 = adStack_5c[iVar1] - dStack_dc;
      while( true ) {
        if (iVar5 == 0) {
          iVar2 = FUN_0040e7b8(0xb);
          iVar2 = iVar2 + -5;
          iVar3 = FUN_0040e7b8(0xb);
          iVar3 = iVar3 + -5;
        }
        else {
          iVar2 = FUN_0040e7b8(0x1f);
          iVar2 = iVar2 + -0xf;
          iVar3 = FUN_0040e7b8(0x1f);
          iVar3 = iVar3 + -0xf;
        }
        dStack_f4 = (double)iVar2 + dStack_ec;
        FUN_004fe34a(5);
        FUN_004fe47e(DAT_00892d20,DAT_00892d20,0x3f000000,0x3e99999a);
        iVar2 = iVar1 + -1;
        dVar8 = (double)iVar4 * _DAT_00892d28 + _DAT_00892d30;
        dVar9 = dVar8;
        if (iVar5 == 0) {
          dVar9 = ((double)iVar1 * _DAT_00892d30 + DAT_00892d38) * dVar8;
          dVar8 = dVar8 * ((double)iVar2 * _DAT_00892d30 + DAT_00892d38);
        }
        uVar6 = 0xffffffff;
        do {
          dVar12 = (_DAT_00892d40 + param_2) - dVar9;
          dVar13 = (_DAT_00892d40 + param_4) - dVar9;
          if (uVar6 < 2) {
            dVar12 = dVar12 + dVar9 + dVar9;
          }
          if (uVar6 - 1 < 2) {
            dVar13 = dVar13 + dVar9 + dVar9;
          }
          dVar10 = (_DAT_00892d40 + param_2) - dVar8;
          dVar11 = (_DAT_00892d40 + param_4) - dVar8;
          if (uVar6 < 2) {
            dVar10 = dVar10 + dVar8 + dVar8;
          }
          if (uVar6 - 1 < 2) {
            dVar11 = dVar11 + dVar8 + dVar8;
          }
          uVar6 = uVar6 + 1;
          FUN_004fe534(dVar10 + dStack_f4,(double)(iVar2 * 0x10 + 0x10) + param_3,
                       dVar11 + (double)iVar3 + dStack_e4);
          FUN_004fe534(dVar12 + dStack_ec,(double)(iVar2 * 0x10 + 0x20) + param_3,dVar13 + dStack_e4
                      );
        } while (uVar6 != 4);
        FUN_004fe0c4();
        if (iVar2 < iStack_100) break;
        dStack_ec = dStack_f4;
        iVar1 = iVar2;
        dStack_e4 = (double)iVar3 + dStack_e4;
      }
      iVar5 = iVar5 + 1;
      if (iVar5 == 3) break;
      iStack_100 = 5 - iVar5;
      iVar1 = 7 - iVar5;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  (*DAT_0145d26c)(0xbe2);
  (*DAT_0145d248)(0xb50);
  (*DAT_0145d248)(0xde1);
  return;
}


