/* Candidate RTTI class: RenderGlobal
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008fe2cc slot 0 address 004e27de */

/* ADDRESS: 004e27de NAME: FUN_004e27de */

void __fastcall FUN_004e27de(undefined4 *param_1)

{
  void *extraout_ECX;
  int iVar1;
  void *_Memory;
  void *pvVar2;
  
  iVar1 = 0;
  *param_1 = &PTR_FUN_008fe2cc;
  FUN_004e270e(0);
  pvVar2 = extraout_ECX;
  do {
    _Memory = *(void **)((int)param_1 + iVar1 + 0x108);
    if (_Memory != (void *)0x0) {
      FUN_007f0644(pvVar2);
      free(_Memory);
      pvVar2 = _Memory;
    }
    *(undefined4 *)((int)param_1 + iVar1 + 0x108) = 0;
    iVar1 = iVar1 + 4;
  } while (iVar1 != 0x10);
  FUN_007efe00();
  FUN_007f0644(pvVar2);
  FUN_007f0644();
  FUN_007f0644();
  FUN_007efe00();
  FUN_007efe00();
  FUN_007db740();
  FUN_007efe00();
  FUN_007efcb0();
  return;
}



/* vtable 008fe2cc slot 1 address 004e288c */

/* ADDRESS: 004e288c NAME: FUN_004e288c */

void __fastcall FUN_004e288c(void *param_1)

{
  FUN_004e27de();
  free(param_1);
  return;
}



/* vtable 008fe2cc slot 2 address 004e1ba8 */

/* ADDRESS: 004e1ba8 NAME: FUN_004e1ba8 */

void FUN_004e1ba8(int param_1,int param_2,int param_3)

{
  FUN_004e1a76(param_1 + -1,param_2 + -1,param_3 + -1,param_1 + 1,param_2 + 1,param_3 + 1);
  return;
}



/* vtable 008fe2cc slot 3 address 004e1bf2 */

/* ADDRESS: 004e1bf2 NAME: FUN_004e1bf2 */

void FUN_004e1bf2(void)

{
  FUN_004e1a76();
  return;
}



/* vtable 008fe2cc slot 4 address 004dc68a */

/* ADDRESS: 004dc68a NAME: FUN_004dc68a */

void FUN_004dc68a(undefined4 param_1,double param_2,double param_3,double param_4,float param_5,
                 undefined4 param_6)

{
  float10 fVar1;
  float fVar2;
  
  fVar2 = DAT_00892a6c;
  if (DAT_00892a70 < param_5) {
    fVar2 = DAT_00892a6c * param_5;
  }
  fVar1 = (float10)FUN_0044a04a(param_2,param_3,param_4);
  if ((float)fVar1 < fVar2 * fVar2) {
    FUN_004f496a(param_1,(float)param_2,(float)param_3,(float)param_4,param_5,param_6);
  }
  return;
}



/* vtable 008fe2cc slot 5 address 004e0100 */

/* ADDRESS: 004e0100 NAME: FUN_004e0100 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004e0100(int param_1,undefined4 param_2,double param_3,double param_4,double param_5,
            double param_6,double param_7,double param_8)

{
  int iVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  
  iVar1 = *(int *)(param_1 + 0x78);
  if ((((iVar1 != 0) && (iVar2 = *(int *)(iVar1 + 0x1c), iVar2 != 0)) &&
      (*(int *)(iVar1 + 0x20) != 0)) &&
     (dVar5 = *(double *)(iVar2 + 0x40) - param_3, dVar7 = *(double *)(iVar2 + 0x48) - param_4,
     dVar6 = *(double *)(iVar2 + 0x50) - param_5,
     dVar5 * dVar5 + dVar7 * dVar7 + dVar6 * dVar6 <= _DAT_00892b90)) {
    cVar3 = FUN_00843720(param_2,"bubble");
    uVar14 = SUB84(param_6,0);
    uVar15 = (undefined4)((ulonglong)param_6 >> 0x20);
    uVar12 = SUB84(param_5,0);
    uVar13 = (undefined4)((ulonglong)param_5 >> 0x20);
    uVar10 = SUB84(param_4,0);
    uVar11 = (undefined4)((ulonglong)param_4 >> 0x20);
    uVar8 = SUB84(param_3,0);
    uVar9 = (undefined4)((ulonglong)param_3 >> 0x20);
    if (cVar3 == '\0') {
      cVar3 = FUN_00843720(param_2,"smoke");
      if (cVar3 == '\0') {
        cVar3 = FUN_00843720(param_2,&DAT_00892952);
        if (cVar3 == '\0') {
          cVar3 = FUN_00843720(param_2,"portal");
          if (cVar3 == '\0') {
            cVar3 = FUN_00843720(param_2,"explode");
            if (cVar3 == '\0') {
              cVar3 = FUN_00843720(param_2,"flame");
              if (cVar3 == '\0') {
                cVar3 = FUN_00843720(param_2,&DAT_0089296c);
                if (cVar3 == '\0') {
                  cVar3 = FUN_00843720(param_2,"footstep");
                  if (cVar3 == '\0') {
                    cVar3 = FUN_00843720(param_2,"splash");
                    if (cVar3 == '\0') {
                      cVar3 = FUN_00843720(param_2,"largesmoke");
                      if (cVar3 == '\0') {
                        cVar3 = FUN_00843720(param_2,"reddust");
                        if (cVar3 == '\0') {
                          cVar3 = FUN_00843720(param_2,"snowballpoof");
                          if (cVar3 == '\0') {
                            cVar3 = FUN_00843720(param_2,"snowshovel");
                            if (cVar3 == '\0') {
                              cVar3 = FUN_00843720(param_2,"slime");
                              if (cVar3 == '\0') {
                                cVar3 = FUN_00843720(param_2,"heart");
                                if (cVar3 == '\0') {
                                  return;
                                }
                                uVar4 = FUN_00846710(0x1e0);
                                FUN_004563bc(*(undefined4 *)(param_1 + 0x14),uVar8,uVar9,uVar10,
                                             uVar11,uVar12,uVar13,uVar14,uVar15,param_7,param_8);
                              }
                              else {
                                uVar4 = FUN_00846710(0x1d8);
                                FUN_00469412(*(undefined4 *)(param_1 + 0x14),uVar8,uVar9,uVar10,
                                             uVar11,uVar12,uVar13,DAT_00a08650);
                              }
                            }
                            else {
                              uVar4 = FUN_00846710(0x1e0);
                              FUN_00469b6a(*(undefined4 *)(param_1 + 0x14),uVar8,uVar9,uVar10,uVar11
                                           ,uVar12,uVar13,uVar14,uVar15,param_7,param_8);
                            }
                          }
                          else {
                            uVar4 = FUN_00846710(0x1d8);
                            FUN_00469412(*(undefined4 *)(param_1 + 0x14),uVar8,uVar9,uVar10,uVar11,
                                         uVar12,uVar13,DAT_00a08674);
                          }
                        }
                        else {
                          uVar4 = FUN_00846710(0x1e0);
                          FUN_004639e2(*(undefined4 *)(param_1 + 0x14),uVar8,uVar9,uVar10,uVar11,
                                       uVar12,uVar13,(float)param_6,(float)param_7,(float)param_8);
                        }
                      }
                      else {
                        uVar4 = FUN_00846710(0x1e0);
                        FUN_0046969c(*(undefined4 *)(param_1 + 0x14),uVar8,uVar9,uVar10,uVar11,
                                     uVar12,uVar13,uVar14,uVar15,param_7,param_8,0x40200000);
                      }
                    }
                    else {
                      uVar4 = FUN_00846710(0x1d8);
                      FUN_0046b3d4(*(undefined4 *)(param_1 + 0x14),uVar8,uVar9,uVar10,uVar11,uVar12,
                                   uVar13,uVar14,uVar15,param_7,param_8);
                    }
                  }
                  else {
                    uVar4 = FUN_00846710(0x1e8);
                    FUN_00455566(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x14),
                                 uVar8,uVar9,uVar10,uVar11,uVar12,uVar13);
                  }
                }
                else {
                  uVar4 = FUN_00846710(0x1e0);
                  FUN_00456f66(*(undefined4 *)(param_1 + 0x14),uVar8,uVar9,uVar10,uVar11,uVar12,
                               uVar13);
                }
              }
              else {
                uVar4 = FUN_00846710(0x1e0);
                FUN_00454d32(*(undefined4 *)(param_1 + 0x14),uVar8,uVar9,uVar10,uVar11,uVar12,uVar13
                             ,uVar14,uVar15,param_7,param_8);
              }
            }
            else {
              uVar4 = FUN_00846710(0x1d8);
              FUN_004512dc(*(undefined4 *)(param_1 + 0x14),uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,
                           uVar14,uVar15,param_7,param_8);
            }
          }
          else {
            uVar4 = FUN_00846710(0x1f8);
            FUN_00463126(*(undefined4 *)(param_1 + 0x14),uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,
                         uVar14,uVar15,param_7,param_8);
          }
        }
        else {
          uVar4 = FUN_00846710(0x1e0);
          FUN_0045d638(*(undefined4 *)(param_1 + 0x14),uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,
                       uVar14,uVar15,param_7,param_8);
        }
      }
      else {
        uVar4 = FUN_00846710(0x1e0);
        FUN_00469810(*(undefined4 *)(param_1 + 0x14),uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,
                     uVar15,param_7,param_8);
      }
    }
    else {
      uVar4 = FUN_00846710(0x1d8);
      FUN_0044d9ee(*(undefined4 *)(param_1 + 0x14),uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,
                   uVar15,param_7,param_8);
    }
    FUN_004470be(uVar4);
  }
  return;
}



/* vtable 008fe2cc slot 6 address 004dc578 */

/* ADDRESS: 004dc578 NAME: FUN_004dc578 */

void FUN_004dc578(int *param_1)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0xc4))();
  if (param_1[0x4f] != 0) {
    uVar1 = FUN_00846710(0x18);
    FUN_0048d888();
    FUN_004db5a8(param_1 + 0x4e,uVar1);
  }
  if (param_1[0x56] != 0) {
    uVar1 = FUN_00846710(0x18);
    FUN_0048d888();
    FUN_004db5a8(param_1 + 0x55,uVar1);
  }
  return;
}



/* vtable 008fe2cc slot 7 address 004dc638 */

/* ADDRESS: 004dc638 NAME: FUN_004dc638 */

void FUN_004dc638(int param_1)

{
  if (*(int *)(param_1 + 0x13c) != 0) {
    FUN_004da746(param_1 + 0x138);
  }
  if (*(int *)(param_1 + 0x158) == 0) {
    return;
  }
  FUN_004da746();
  return;
}



/* vtable 008fe2cc slot 8 address 004e1c0e */

/* ADDRESS: 004e1c0e NAME: FUN_004e1c0e */

void __fastcall FUN_004e1c0e(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar1 = *(int *)(param_1 + 100);
  iVar2 = *(int *)(param_1 + 0x68);
  iVar3 = *(int *)(param_1 + 0x6c);
  for (iVar6 = 0; iVar6 < iVar1 * iVar2 * iVar3; iVar6 = iVar6 + 1) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x60) + iVar6 * 4);
    if ((*(char *)(iVar4 + 5) != '\0') && (*(char *)(iVar4 + 4) == '\0')) {
      uVar5 = FUN_004e1884(iVar4);
      FUN_0051a2fc(uVar5);
    }
  }
  return;
}



/* vtable 008fe2cc slot 9 address 004dc840 */

/* ADDRESS: 004dc840 NAME: FUN_004dc840 */

void FUN_004dc840(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined1 local_6c [24];
  undefined1 local_54 [24];
  undefined1 local_3c;
  undefined1 local_38 [24];
  undefined1 local_20;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_004dc7d2("C418 - ");
    local_20 = 0;
    FUN_00823370(local_38);
    FUN_00821710(param_1);
    FUN_00823680(local_6c);
    local_3c = 0;
    FUN_0081ffd0(extraout_ECX);
    FUN_0081ffd0();
    uVar1 = FUN_0047f21a(local_54);
    FUN_0081ffd0(uVar1);
  }
  FUN_004f4a58(param_1,(float)param_2,(float)param_3,(float)param_4,DAT_00892a70,DAT_00892a70);
  return;
}



/* vtable 008fe2cc slot 10 address 004e1e80 */

/* ADDRESS: 004e1e80 NAME: FUN_004e1e80 */

void __thiscall FUN_004e1e80(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uStack00000010;
  
  if (uStack00000010 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 8);
    uVar6 = FUN_0083c8c0(*(undefined4 *)(param_1 + 4),uVar1,&uStack00000010);
    FUN_0081b6e8(uVar6,uVar1);
    if (*(int *)(param_1 + 0x60) != 0) {
      iVar2 = *(int *)(param_1 + 100);
      iVar3 = *(int *)(param_1 + 0x68);
      iVar4 = *(int *)(param_1 + 0x6c);
      for (iVar7 = 0; iVar7 < iVar2 * iVar3 * iVar4; iVar7 = iVar7 + 1) {
        iVar5 = *(int *)(*(int *)(param_1 + 0x60) + iVar7 * 4);
        if (iVar5 != 0) {
          uVar1 = *(undefined4 *)(iVar5 + 0x5c);
          uVar6 = FUN_0083c8c0(*(undefined4 *)(iVar5 + 0x58),uVar1,&uStack00000010);
          FUN_0081b6e8(uVar6,uVar1);
        }
      }
    }
  }
  return;
}



/* vtable 008fe2cc slot 11 address 004dc950 */

/* ADDRESS: 004dc950 NAME: FUN_004dc950 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_004dc950(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
            uint param_7)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  float fVar17;
  double dVar18;
  float fVar19;
  double dVar20;
  float fVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  undefined1 local_38 [24];
  undefined1 local_20;
  
  if (param_3 < 0x3ee) {
    if (999 < param_3) {
      switch(param_3) {
      case 0x3e9:
        FUN_004dc7d2("random.click");
        local_20 = 0;
        FUN_0050c650((double)param_4,(double)param_5,(double)param_6,local_38,0x3f800000,0x3f99999a)
        ;
        break;
      case 0x3ea:
        FUN_004dc7d2("random.bow");
        local_20 = 0;
        FUN_0050c650((double)param_4,(double)param_5,(double)param_6,local_38,0x3f800000,0x3f99999a)
        ;
        break;
      case 0x3eb:
        fVar11 = (float10)FUN_0040e620();
        if (DAT_00892a80 <= (double)fVar11) {
          fVar11 = (float10)FUN_0040e898();
          fVar12 = DAT_00892aa8 * (float)fVar11 + DAT_00892aac;
          FUN_004dc7d2("random.door_close");
          local_20 = 0;
          FUN_0050c650(DAT_00892a80 + (double)param_4,(double)param_5 + DAT_00892a80,
                       (double)param_6 + DAT_00892a80,local_38,0x3f800000,fVar12);
        }
        else {
          fVar11 = (float10)FUN_0040e898();
          fVar12 = DAT_00892aa8 * (float)fVar11 + DAT_00892aac;
          FUN_004dc7d2("random.door_open");
          local_20 = 0;
          FUN_0050c650(DAT_00892a80 + (double)param_4,(double)param_5 + DAT_00892a80,
                       (double)param_6 + DAT_00892a80,local_38,0x3f800000,fVar12);
        }
        break;
      case 0x3ec:
        fVar11 = (float10)FUN_0040e9c4();
        fVar12 = (float)fVar11 * DAT_00892aa0 + _DAT_00892ab0;
        FUN_004dc7d2("random.fizz");
        local_20 = 0;
        FUN_0050c650((double)((float)param_4 + DAT_00892aa4),(double)((float)param_5 + DAT_00892aa4)
                     ,(double)((float)param_6 + DAT_00892aa4),local_38,DAT_00892aa4,fVar12);
        break;
      case 0x3ed:
        iVar10 = (&DAT_00a087c0)[param_7];
        if ((iVar10 == 0) ||
           (iVar8 = FUN_00846ef0(iVar10,&PTR_PTR_008f1968,&PTR_PTR_008f0614,0), iVar8 == 0)) {
          FUN_004dc7d2(&DAT_008927a5);
          local_20 = 0;
          FUN_0050c6e4(local_38,param_4,param_5,param_6);
        }
        else {
          FUN_008238d0(iVar10 + 0x20);
          local_20 = 0;
          FUN_0050c6e4(local_38,param_4,param_5,param_6);
        }
        break;
      default:
        FUN_004dc7d2("random.click");
        local_20 = 0;
        FUN_0050c650((double)param_4,(double)param_5,(double)param_6,local_38,DAT_00892a70,
                     DAT_00892a70);
      }
      FUN_0081ffd0();
    }
  }
  else if (param_3 == 2000) {
    iVar10 = 10;
    dVar23 = (double)((int)param_7 % 3 + -1);
    dVar14 = (double)param_4 + dVar23 * DAT_00892a78 + DAT_00892a80;
    dVar24 = (double)(((int)param_7 / 3) % 3 + -1);
    dVar15 = (double)param_5 + DAT_00892a80;
    dVar2 = DAT_00892a78 * dVar24 + (double)param_6 + DAT_00892a80;
    do {
      fVar11 = (float10)FUN_0040e8c2();
      dVar3 = DAT_00892a88 * (double)fVar11 + DAT_00892a90;
      dVar4 = DAT_00892a90 * dVar23;
      fVar11 = (float10)FUN_0040e8c2();
      dVar16 = ((double)fVar11 - DAT_00892a80) * dVar24 * DAT_00892a80;
      fVar11 = (float10)FUN_0040e8c2();
      dVar5 = DAT_00892a90 * dVar24;
      dVar7 = ((double)fVar11 - DAT_00892a80) * DAT_00892a80;
      fVar11 = (float10)FUN_0040e8c2();
      dVar6 = ((double)fVar11 - DAT_00892a80) * dVar23 * DAT_00892a80;
      fVar11 = (float10)FUN_0040eae4();
      dVar18 = DAT_00892a90 * (double)fVar11;
      fVar11 = (float10)FUN_0040eae4();
      dVar20 = DAT_00892a90 * (double)fVar11 - _DAT_00892a98;
      fVar11 = (float10)FUN_0040eae4();
      dVar22 = DAT_00892a90 * (double)fVar11;
      pcVar1 = *(code **)(*param_1 + 0x14);
      FUN_004dc7d2("smoke");
      local_20 = 0;
      (*pcVar1)(local_38,dVar16 + dVar4 + dVar14,dVar7 + dVar15,dVar6 + dVar5 + dVar2,
                dVar18 + dVar23 * dVar3,dVar20,dVar22 + dVar3 * dVar24);
      FUN_0081ffd0();
      iVar10 = iVar10 + -1;
    } while (iVar10 != 0);
  }
  else if (param_3 == 0x7d1) {
    uVar9 = param_7 & 0xff;
    if (uVar9 != 0) {
      iVar10 = (&DAT_00a07120)[uVar9];
      fVar11 = (float10)(**(code **)(**(int **)(iVar10 + 0x48) + 0xc))();
      fVar21 = (float)fVar11 * DAT_00892aa0;
      fVar11 = (float10)(**(code **)(**(int **)(iVar10 + 0x48) + 8))();
      fVar19 = (float)param_6 + DAT_00892aa4;
      fVar17 = (float)param_5 + DAT_00892aa4;
      fVar12 = ((float)fVar11 + DAT_00892a70) * DAT_00892aa4;
      fVar13 = DAT_00892aa4 + (float)param_4;
      (**(code **)(**(int **)(iVar10 + 0x48) + 0x10))(*(int **)(iVar10 + 0x48));
      FUN_004f496a(local_38,fVar13,fVar17,fVar19,fVar12,fVar21);
      FUN_0081ffd0();
    }
    if (*(int *)(param_1[0x1e] + 0x20) != 0) {
      FUN_00447128(param_4,param_5,param_6,uVar9,param_7 >> 8 & 0xff);
    }
  }
  return;
}


