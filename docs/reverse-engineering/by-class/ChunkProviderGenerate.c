/* Candidate RTTI class: ChunkProviderGenerate
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00904704 slot 0 address 00438c1a */

/* ADDRESS: 00438c1a NAME: FUN_00438c1a */

void __fastcall FUN_00438c1a(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00904704;
  if ((void *)param_1[0x3e] != (void *)0x0) {
    free((void *)param_1[0x3e]);
  }
  if ((int *)param_1[0x31] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x31] + 4))();
  }
  FUN_007f0394();
  FUN_007f0394();
  FUN_007f0394();
  FUN_007f0394();
  FUN_007f0394();
  FUN_007f0394();
  FUN_007efd44();
  FUN_007f0394();
  FUN_007f0394();
  FUN_007f0394();
  FUN_007f0394();
  FUN_00776228();
  FUN_00776228();
  FUN_00776228();
  FUN_00776228();
  FUN_00776228();
  FUN_00776228();
  FUN_00776228();
  FUN_00776228();
  return;
}



/* vtable 00904704 slot 1 address 00438d1a */

/* ADDRESS: 00438d1a NAME: FUN_00438d1a */

void __fastcall FUN_00438d1a(void *param_1)

{
  FUN_00438c1a();
  free(param_1);
  return;
}



/* vtable 00904704 slot 2 address 0043781e */

/* ADDRESS: 0043781e NAME: FUN_0043781e */

undefined1 FUN_0043781e(void)

{
  return 1;
}



/* vtable 00904704 slot 3 address 00439c30 */

/* ADDRESS: 00439c30 NAME: FUN_00439c30 */

int * __thiscall FUN_00439c30(int param_1,uint param_2,uint param_3)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  int iVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 *puStack_28;
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  
  uVar2 = (uint)((ulonglong)param_2 * 0x9939f508);
  uVar3 = (uint)((ulonglong)param_3 * 0xf1565bd5);
  FUN_0040e684(uVar2 + uVar3,
               (int)((ulonglong)param_2 * 0x9939f508 >> 0x20) +
               ((int)param_2 >> 0x1f) * -0x66c60af8 + param_2 * 0x4f +
               (int)((ulonglong)param_3 * 0xf1565bd5 >> 0x20) +
               ((int)param_3 >> 0x1f) * -0xea9a42b + param_3 * 0x1e + (uint)CARRY4(uVar2,uVar3));
  uVar10 = extraout_ECX;
  puVar4 = (undefined4 *)FUN_00846710(0x8000,extraout_ECX);
  puVar7 = *(undefined1 **)(param_1 + 0xfc);
  puVar8 = puVar4;
  for (iVar6 = 0x2000; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar8 = 0;
    puVar8 = puVar8 + 1;
  }
  piVar5 = *(int **)(param_1 + 0xc4);
  pcVar1 = *(code **)(*piVar5 + 0x1c);
  iVar6 = *(int *)(param_1 + 0x100) - (int)puVar7;
  if (iVar6 == 0) {
    puStack_40 = (undefined1 *)0x0;
  }
  else {
    puStack_40 = (undefined1 *)FUN_00846710(iVar6,uVar10);
  }
  puStack_38 = puStack_40 + iVar6;
  puStack_3c = puStack_40;
  if (iVar6 != 0) {
    puVar9 = puStack_40;
    for (; puStack_3c = puStack_38, iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar9 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar9 = puVar9 + 1;
    }
  }
  (*pcVar1)(piVar5,&puStack_40,param_2 << 4,param_3 << 4,0x10,0x10);
  puStack_28 = *(undefined4 **)(param_1 + 0xfc);
  puStack_20 = *(undefined4 **)(param_1 + 0x104);
  *(undefined4 *)(param_1 + 0xfc) = uStack_34;
  *(undefined4 *)(param_1 + 0x100) = uStack_30;
  *(undefined4 *)(param_1 + 0x104) = uStack_2c;
  uStack_34 = 0;
  uStack_2c = 0;
  FUN_007efd44();
  FUN_007efd44();
  FUN_007efd44();
  FUN_004399a6(param_2,param_3,puVar4,*(undefined4 *)(param_1 + 0xfc),
               *(undefined4 *)(*(int *)(param_1 + 0xc4) + 4));
  FUN_00438d3e(param_2,param_3,puVar4,*(undefined4 *)(param_1 + 0xfc));
  (**(code **)**(undefined4 **)(param_1 + 0xf8))
            (param_1,*(undefined4 *)(param_1 + 0xc0),param_2,param_3,puVar4);
  piVar5 = (int *)FUN_00846710(0x210);
  puStack_28 = puVar4;
  puStack_24 = puVar4 + 0x2000;
  puStack_20 = puVar4 + 0x2000;
  FUN_0043291e(*(undefined4 *)(param_1 + 0xc0),&puStack_28,param_2,param_3);
  FUN_007f0214();
  (**(code **)(*piVar5 + 0x10))();
  FUN_007f0214();
  return piVar5;
}



/* vtable 00904704 slot 4 address 00437818 */

/* ADDRESS: 00437818 NAME: FUN_00437818 */

void __fastcall FUN_00437818(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0043781a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))();
  return;
}



/* vtable 00904704 slot 5 address 00437972 */

/* ADDRESS: 00437972 NAME: FUN_00437972 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00437972(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 extraout_ECX;
  int iVar16;
  bool bVar17;
  float10 fVar18;
  double dVar19;
  undefined8 uVar20;
  longlong lVar21;
  longlong lVar22;
  int local_50;
  uint local_4c;
  int iStack_48;
  uint local_44;
  
  iVar16 = param_1 + 8;
  DAT_00a07570 = 1;
  iVar4 = param_3 * 0x10;
  iVar5 = param_4 * 0x10;
  piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0xc0) + 0x28))();
  uVar20 = (**(code **)(*piVar6 + 0xc))(iVar4 + 0x10,iVar5 + 0x10);
  uVar11 = (undefined4)((ulonglong)uVar20 >> 0x20);
  puVar7 = (undefined4 *)uVar20;
  uVar20 = FUN_0050e3d8(uVar11,uVar11);
  FUN_0040e684(uVar20);
  lVar21 = FUN_0040e85a(extraout_ECX,extraout_ECX);
  lVar22 = FUN_0040e85a();
  lVar21 = lVar21 + (ulonglong)(uint)-(int)(lVar21 >> 0x3f);
  local_44 = (uint)lVar21 | 1;
  iStack_48 = (int)((ulonglong)local_44 * (ulonglong)param_3 >> 0x20);
  local_4c = (uint)((ulonglong)local_44 * (ulonglong)param_3);
  lVar22 = lVar22 + (ulonglong)(uint)-(int)(lVar22 >> 0x3f);
  uVar8 = (uint)lVar22 | 1;
  lVar2 = (ulonglong)uVar8 * (ulonglong)param_4;
  uVar9 = (uint)lVar2;
  uVar20 = FUN_0050e3d8();
  FUN_0040e684((uint)uVar20 ^ uVar9 + local_4c,
               (uint)((ulonglong)uVar20 >> 0x20) ^
               (int)((ulonglong)lVar2 >> 0x20) +
               (int)((ulonglong)lVar22 >> 0x20) * param_4 + ((int)param_4 >> 0x1f) * uVar8 +
               iStack_48 +
               (int)((ulonglong)lVar21 >> 0x20) * param_3 + ((int)param_3 >> 0x1f) * local_44 +
               (uint)CARRY4(uVar9,local_4c));
  iVar10 = FUN_0040e7b8(4);
  if (iVar10 == 0) {
    iVar10 = FUN_0040e7b8(0x10);
    uVar11 = FUN_0040e7b8(0x80);
    iVar12 = FUN_0040e7b8(0x10);
    FUN_00517bf2(*(undefined4 *)(DAT_00a062fc + 8));
    FUN_005174b4(*(undefined4 *)(param_1 + 0xc0),iVar16,iVar4 + 8 + iVar10,uVar11,iVar5 + 8 + iVar12
                );
  }
  iVar10 = FUN_0040e7b8(8);
  if (iVar10 == 0) {
    iVar10 = FUN_0040e7b8(0x10);
    iVar12 = FUN_0040e7b8(0x78);
    iVar12 = FUN_0040e7b8(iVar12 + 8);
    iVar13 = FUN_0040e7b8(0x10);
    if (0x3f < iVar12) {
      iVar14 = FUN_0040e7b8(10);
      if (iVar14 != 0) goto LAB_00437bf8;
    }
    FUN_00517bf2(*(undefined4 *)(DAT_00a062f4 + 8));
    FUN_005174b4(*(undefined4 *)(param_1 + 0xc0),iVar16,iVar4 + 8 + iVar10,iVar12,iVar5 + 8 + iVar13
                );
  }
LAB_00437bf8:
  iVar10 = 8;
  do {
    iVar12 = FUN_0040e7b8(0x10);
    uVar11 = FUN_0040e7b8(0x80);
    iVar13 = FUN_0040e7b8(0x10);
    FUN_00516368(*(undefined4 *)(param_1 + 0xc0),iVar16,iVar4 + 8 + iVar12,uVar11,iVar5 + 8 + iVar13
                );
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  iVar10 = 10;
  do {
    iVar12 = FUN_0040e7b8(0x10);
    uVar11 = FUN_0040e7b8(0x80);
    iVar13 = FUN_0040e7b8(0x10);
    FUN_00515e54(0x20);
    FUN_00515a7c(*(undefined4 *)(param_1 + 0xc0),iVar16,iVar12 + iVar4,uVar11,iVar13 + iVar5);
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  iVar10 = 0x14;
  do {
    iVar12 = FUN_0040e7b8(0x10);
    uVar11 = FUN_0040e7b8(0x80);
    iVar13 = FUN_0040e7b8(0x10);
    FUN_0051823c(*(undefined4 *)(DAT_00a06314 + 8),0x20);
    FUN_00517e80(*(undefined4 *)(param_1 + 0xc0),iVar16,iVar12 + iVar4,uVar11,iVar13 + iVar5);
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  iVar10 = 10;
  do {
    iVar12 = FUN_0040e7b8(0x10);
    uVar11 = FUN_0040e7b8(0x80);
    iVar13 = FUN_0040e7b8(0x10);
    FUN_0051823c(*(undefined4 *)(DAT_00a062ec + 8),0x20);
    FUN_00517e80(*(undefined4 *)(param_1 + 0xc0),iVar16,iVar12 + iVar4,uVar11,iVar13 + iVar5);
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  iVar10 = 0x14;
  do {
    iVar12 = FUN_0040e7b8(0x10);
    uVar11 = FUN_0040e7b8(0x80);
    iVar13 = FUN_0040e7b8(0x10);
    FUN_0051823c(*(undefined4 *)(DAT_00a062e0 + 8),0x10);
    FUN_00517e80(*(undefined4 *)(param_1 + 0xc0),iVar16,iVar12 + iVar4,uVar11,iVar13 + iVar5);
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  iVar10 = 0x14;
  do {
    iVar12 = FUN_0040e7b8(0x10);
    uVar11 = FUN_0040e7b8(0x40);
    iVar13 = FUN_0040e7b8(0x10);
    FUN_0051823c(*(undefined4 *)(DAT_00a062e4 + 8),8);
    FUN_00517e80(*(undefined4 *)(param_1 + 0xc0),iVar16,iVar12 + iVar4,uVar11,iVar13 + iVar5);
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  iVar10 = 2;
  while( true ) {
    iVar12 = FUN_0040e7b8(0x10);
    uVar11 = FUN_0040e7b8(0x20);
    iVar13 = FUN_0040e7b8(0x10);
    FUN_0051823c(*(undefined4 *)(DAT_00a062e8 + 8),8);
    FUN_00517e80(*(undefined4 *)(param_1 + 0xc0),iVar16,iVar12 + iVar4,uVar11,iVar13 + iVar5);
    if (iVar10 == 1) break;
    iVar10 = 1;
  }
  iVar10 = 8;
  do {
    iVar12 = FUN_0040e7b8(0x10);
    uVar11 = FUN_0040e7b8(0x10);
    iVar13 = FUN_0040e7b8(0x10);
    FUN_0051823c(*(undefined4 *)(DAT_00a061fc + 8),7);
    FUN_00517e80(*(undefined4 *)(param_1 + 0xc0),iVar16,iVar12 + iVar4,uVar11,iVar13 + iVar5);
    iVar10 = iVar10 + -1;
  } while (iVar10 != 0);
  iVar10 = FUN_0040e7b8(0x10);
  uVar11 = FUN_0040e7b8(0x10);
  iVar12 = FUN_0040e7b8(0x10);
  FUN_0051823c(*(undefined4 *)(DAT_00a06240 + 8),7);
  FUN_00517e80(*(undefined4 *)(param_1 + 0xc0),iVar16,iVar10 + iVar4,uVar11,iVar5 + iVar12);
  iVar10 = FUN_0040e7b8(0x10);
  uVar11 = FUN_0040e994(0x10);
  iVar12 = FUN_0040e7b8(0x10);
  FUN_0051823c(*(undefined4 *)(DAT_00a062cc + 8),6);
  FUN_00517e80(*(undefined4 *)(param_1 + 0xc0),iVar16,iVar10 + iVar4,uVar11,iVar5 + iVar12);
  fVar18 = (float10)FUN_004b4650((double)iVar4 * DAT_00887618,(double)iVar5 * DAT_00887618);
  dVar19 = (double)fVar18 * DAT_00887620;
  fVar18 = (float10)FUN_0040e8c2();
  iVar12 = (int)(((double)fVar18 * DAT_00887628 + dVar19 + DAT_00887628) / _DAT_00887630);
  iVar10 = FUN_0040e7b8(10);
  uVar8 = (uint)(iVar10 == 0);
  if (DAT_00a06184 == puVar7) {
    uVar8 = uVar8 + 5 + iVar12;
  }
  if (DAT_00a06190 == puVar7) {
    uVar8 = uVar8 + 5 + iVar12;
  }
  if (DAT_00a06188 == puVar7) {
    uVar8 = uVar8 + 2 + iVar12;
  }
  if (DAT_00a06178 == puVar7) {
    uVar8 = uVar8 + 5 + iVar12;
  }
  if (DAT_00a06174 == puVar7) {
    uVar8 = uVar8 - 0x14;
  }
  if (DAT_00a06168 == puVar7) {
    uVar8 = uVar8 - 0x14;
  }
  if (DAT_00a06170 == puVar7) {
    uVar8 = uVar8 - 0x14;
  }
  for (iVar10 = 0; iVar10 < (int)uVar8; iVar10 = iVar10 + 1) {
    iVar12 = FUN_0040e7b8(0x10);
    iVar12 = iVar4 + 8 + iVar12;
    iVar13 = FUN_0040e7b8(0x10);
    iVar13 = iVar5 + 8 + iVar13;
    piVar6 = (int *)(**(code **)*puVar7)(iVar16);
    (**(code **)(*piVar6 + 0xc))(0,0x3ff00000);
    pcVar1 = *(code **)(*piVar6 + 8);
    uVar11 = FUN_0050bdd6(iVar12,iVar13);
    (*pcVar1)(*(undefined4 *)(param_1 + 0xc0),iVar16,iVar12,uVar11,iVar13);
    (**(code **)(*piVar6 + 4))();
  }
  iVar10 = 4;
  if (DAT_00a06188 != puVar7) {
    iVar10 = (uint)(DAT_00a06184 == puVar7) * 2;
  }
  if (DAT_00a06178 == puVar7) {
    iVar10 = 2;
  }
  if (DAT_00a06170 == puVar7) {
    iVar10 = 3;
  }
  for (iVar12 = 0; iVar10 != iVar12; iVar12 = iVar12 + 1) {
    iVar13 = FUN_0040e7b8(0x10);
    uVar11 = FUN_0040e7b8(0x80);
    iVar14 = FUN_0040e7b8(0x10);
    FUN_00516b20(*(undefined4 *)(DAT_00a0628c + 8));
    FUN_00516a0c(*(undefined4 *)(param_1 + 0xc0),iVar16,iVar4 + 8 + iVar13,uVar11,iVar5 + 8 + iVar14
                );
  }
  iVar10 = 10;
  if (DAT_00a06190 != puVar7) {
    iVar10 = (uint)(DAT_00a06184 == puVar7) * 2;
  }
  if (DAT_00a06188 == puVar7) {
    iVar10 = 2;
  }
  if (DAT_00a06178 == puVar7) {
    iVar10 = 1;
  }
  if (DAT_00a06170 == puVar7) {
    iVar10 = 10;
  }
  local_44 = 0;
  do {
    if (iVar10 == local_44) {
      bVar17 = DAT_00a06174 == puVar7;
      for (iVar10 = 0; iVar10 != (uint)bVar17 * 2; iVar10 = iVar10 + 1) {
        iVar12 = FUN_0040e7b8(0x10);
        uVar11 = FUN_0040e7b8(0x80);
        iVar13 = FUN_0040e7b8(0x10);
        FUN_00515fc6(*(undefined4 *)(DAT_00a062a0 + 8));
        FUN_00515e74(*(undefined4 *)(param_1 + 0xc0),iVar16,iVar4 + 8 + iVar12,uVar11,
                     iVar5 + 8 + iVar13);
      }
      iVar10 = FUN_0040e7b8(2);
      if (iVar10 == 0) {
        iVar10 = FUN_0040e7b8(0x10);
        uVar11 = FUN_0040e7b8(0x80);
        iVar12 = FUN_0040e7b8(0x10);
        FUN_00516b20(*(undefined4 *)(DAT_00a06288 + 8));
        FUN_00516a0c(*(undefined4 *)(param_1 + 0xc0),iVar16,iVar4 + 8 + iVar10,uVar11,
                     iVar5 + 8 + iVar12);
      }
      iVar10 = FUN_0040e7b8(4);
      if (iVar10 == 0) {
        iVar10 = FUN_0040e7b8(0x10);
        uVar11 = FUN_0040e7b8(0x80);
        iVar12 = FUN_0040e7b8(0x10);
        FUN_00516b20(*(undefined4 *)(DAT_00a06284 + 8));
        FUN_00516a0c(*(undefined4 *)(param_1 + 0xc0),iVar16,iVar4 + 8 + iVar10,uVar11,
                     iVar5 + 8 + iVar12);
      }
      iVar10 = FUN_0040e7b8(8);
      if (iVar10 == 0) {
        iVar10 = FUN_0040e7b8(0x10);
        uVar11 = FUN_0040e7b8(0x80);
        iVar12 = FUN_0040e7b8(0x10);
        FUN_00516b20(*(undefined4 *)(DAT_00a06280 + 8));
        FUN_00516a0c(*(undefined4 *)(param_1 + 0xc0),iVar16,iVar4 + 8 + iVar10,uVar11,
                     iVar5 + 8 + iVar12);
      }
      iVar10 = 10;
      do {
        iVar12 = FUN_0040e7b8(0x10);
        uVar11 = FUN_0040e7b8(0x80);
        iVar13 = FUN_0040e7b8(0x10);
        FUN_0051837c(*(undefined4 *)(param_1 + 0xc0),iVar16,iVar4 + 8 + iVar12,uVar11,
                     iVar5 + 8 + iVar13);
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      iVar10 = FUN_0040e7b8(0x20);
      if (iVar10 == 0) {
        iVar10 = FUN_0040e7b8(0x10);
        uVar11 = FUN_0040e7b8(0x80);
        iVar12 = FUN_0040e7b8(0x10);
        FUN_00518258(*(undefined4 *)(param_1 + 0xc0),iVar16,iVar4 + 8 + iVar10,uVar11,
                     iVar5 + 8 + iVar12);
      }
      if (DAT_00a06174 == puVar7) {
        for (iVar10 = 0; iVar10 != 10; iVar10 = iVar10 + 1) {
          iVar12 = FUN_0040e7b8(0x10);
          uVar11 = FUN_0040e7b8(0x80);
          iVar13 = FUN_0040e7b8(0x10);
          FUN_00515968(*(undefined4 *)(param_1 + 0xc0),iVar16,iVar4 + 8 + iVar12,uVar11,
                       iVar5 + 8 + iVar13);
        }
      }
      iVar10 = 0x32;
      do {
        iVar12 = FUN_0040e7b8(0x10);
        iVar13 = FUN_0040e7b8(0x78);
        uVar11 = FUN_0040e7b8(iVar13 + 8);
        iVar13 = FUN_0040e7b8(0x10);
        FUN_00517e6c(*(undefined4 *)(DAT_00a06300 + 8));
        FUN_00517c08(*(undefined4 *)(param_1 + 0xc0),iVar16,iVar4 + 8 + iVar12,uVar11,
                     iVar5 + 8 + iVar13);
        iVar10 = iVar10 + -1;
      } while (iVar10 != 0);
      local_44 = 0x14;
      do {
        iVar10 = FUN_0040e7b8(0x10);
        iVar12 = FUN_0040e7b8(0x70);
        iVar12 = FUN_0040e7b8(iVar12 + 8);
        uVar11 = FUN_0040e7b8(iVar12 + 8);
        iVar12 = FUN_0040e7b8(0x10);
        FUN_00517e6c(*(undefined4 *)(DAT_00a062f8 + 8));
        FUN_00517c08(*(undefined4 *)(param_1 + 0xc0),iVar16,iVar4 + 8 + iVar10,uVar11,
                     iVar5 + 8 + iVar12);
        local_44 = local_44 + -1;
      } while (local_44 != 0);
      piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0xc0) + 0x28))();
      iVar16 = iVar4 + 8;
      uVar11 = (**(code **)(*piVar6 + 0x18))(param_1 + 0x1144,iVar16,iVar5 + 8,0x10,0x10);
      FUN_00437894(uVar11);
      local_44 = 0;
      for (; iVar16 <= iVar4 + 0x17; iVar16 = iVar16 + 1) {
        local_50 = local_44 << 3;
        for (iVar10 = iVar5 + 8; iVar10 <= iVar5 + 0x17; iVar10 = iVar10 + 1) {
          iVar12 = FUN_0050c8d0(iVar16,iVar10);
          if ((*(double *)(*(int *)(param_1 + 0x1144) + local_50) -
               (double)(iVar12 + -0x40) * _DAT_00887640 * _DAT_00887648 < DAT_00887618) &&
             (uVar8 = iVar12 - 1, uVar8 < 0x7f)) {
            cVar3 = FUN_0050ac0e(iVar16,iVar12,iVar10);
            if (cVar3 != '\0') {
              piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0xc0) + 0x1c))(iVar16,uVar8,iVar10);
              cVar3 = (**(code **)(*piVar6 + 0x14))();
              if (cVar3 != '\0') {
                iVar13 = (**(code **)(**(int **)(param_1 + 0xc0) + 0x1c))(iVar16,uVar8,iVar10);
                if (DAT_00a0ae04 != iVar13) {
                  FUN_0050b858(iVar16,iVar12,iVar10,*(undefined4 *)(DAT_00a061e8 + 8));
                }
              }
            }
          }
          local_50 = local_50 + 8;
        }
        local_44 = local_44 + 0x10;
      }
      DAT_00a07570 = 0;
      return;
    }
    if (DAT_00a06190 == puVar7) {
      iVar12 = FUN_0040e7b8(3);
      uVar11 = 2;
      if (iVar12 == 0) goto LAB_004384a5;
    }
    else {
LAB_004384a5:
      uVar11 = 1;
    }
    iVar12 = FUN_0040e7b8(0x10);
    uVar15 = FUN_0040e7b8(0x80);
    iVar13 = FUN_0040e7b8(0x10);
    FUN_00518ca8(*(undefined4 *)(DAT_00a062a4 + 8),uVar11);
    FUN_00518b50(*(undefined4 *)(param_1 + 0xc0),iVar16,iVar4 + 8 + iVar12,uVar15,iVar5 + 8 + iVar13
                );
    local_44 = local_44 + 1;
  } while( true );
}



/* vtable 00904704 slot 6 address 00437824 */

/* ADDRESS: 00437824 NAME: FUN_00437824 */

undefined1 FUN_00437824(void)

{
  return 1;
}



/* vtable 00904704 slot 7 address 0043782a */

/* ADDRESS: 0043782a NAME: FUN_0043782a */

undefined4 FUN_0043782a(void)

{
  return 0;
}



/* vtable 00904704 slot 8 address 0043782e */

/* ADDRESS: 0043782e NAME: FUN_0043782e */

undefined1 FUN_0043782e(void)

{
  return 1;
}



/* vtable 00904704 slot 9 address 00437832 */

/* ADDRESS: 00437832 NAME: FUN_00437832 */

int * __fastcall FUN_00437832(int *param_1)

{
  int iVar1;
  int aiStack_10 [2];
  
  *param_1 = (int)(param_1 + 2);
  aiStack_10[0] = 0x11;
  iVar1 = FUN_00822e70(aiStack_10,0);
  *param_1 = iVar1;
  param_1[2] = aiStack_10[0];
  FUN_008220b0(iVar1,"RandomLevelSource",0x11);
  param_1[1] = aiStack_10[0];
  *(undefined1 *)(*param_1 + aiStack_10[0]) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  return param_1;
}



/* vtable 00904704 slot 10 address 0077ca34 */

/* ADDRESS: 0077ca34 NAME: FUN_0077ca34 */

undefined4 FUN_0077ca34(void)

{
  return 0xffffffff;
}



/* vtable 00904704 slot 11 address 00774350 */

/* ADDRESS: 00774350 NAME: FUN_00774350 */

void FUN_00774350(void)

{
  return;
}


