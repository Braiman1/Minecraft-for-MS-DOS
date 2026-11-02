/* Candidate RTTI class: JavaNetwork::(anonymous namespace)::SdlNetSocket
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 008831bc slot 0 address 0040d51a */

/* ADDRESS: 0040d51a NAME: FUN_0040d51a */

void __fastcall FUN_0040d51a(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008831bc;
  FUN_0040d4f6();
  FUN_0081ffd0();
  return;
}



/* vtable 008831bc slot 1 address 0040d538 */

/* ADDRESS: 0040d538 NAME: FUN_0040d538 */

void __fastcall FUN_0040d538(void *param_1)

{
  FUN_0040d51a();
  free(param_1);
  return;
}



/* vtable 008831bc slot 2 address 0040d826 */

/* ADDRESS: 0040d826 NAME: FUN_0040d826 */

bool __thiscall FUN_0040d826(int param_1,undefined4 *param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 extraout_ECX;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  uint local_120;
  uint *local_118;
  int local_114;
  uint local_110 [4];
  uint *local_100;
  int local_fc;
  uint local_f8 [4];
  char local_e8 [216];
  
  iVar9 = 1;
  uVar4 = -param_3;
  local_120 = uVar4;
  if ((int)uVar4 < 0) {
    uVar4 = param_3;
    local_120 = param_3;
  }
  do {
    if (uVar4 < 10) {
LAB_0040d885:
      local_100 = local_f8;
      local_f8[0] = local_f8[0] & 0xffffff00;
      local_fc = 0;
      iVar1 = -((int)param_3 >> 0x1f) + iVar9;
      FUN_00822a40(iVar1);
      puVar2 = local_100;
      *(undefined1 *)local_100 = 0x2d;
      pcVar5 = (char *)((int)puVar2 + (-((int)param_3 >> 0x1f) & 0xffU));
      pcVar10 = 
      "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
      ;
      pcVar11 = local_e8;
      for (iVar8 = 0xc9; iVar8 != 0; iVar8 = iVar8 + -1) {
        *pcVar11 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar11 = pcVar11 + 1;
      }
      pcVar10 = pcVar5 + iVar9;
      while (99 < local_120) {
        iVar9 = (local_120 % 100) * 2;
        pcVar10[-1] = local_e8[iVar9 + 1];
        pcVar10[-2] = local_e8[iVar9];
        pcVar10 = pcVar10 + -2;
        local_120 = local_120 / 100;
      }
      cVar3 = (char)local_120 + '0';
      if (9 < local_120) {
        pcVar5[1] = local_e8[local_120 * 2 + 1];
        cVar3 = local_e8[local_120 * 2];
      }
      *pcVar5 = cVar3;
      *(undefined1 *)((int)local_100 + iVar1) = 0;
      local_110[0] = local_110[0] & 0xffffff00;
      iVar9 = param_2[1];
      uVar6 = *param_2;
      local_118 = local_110;
      local_114 = 0;
      local_fc = iVar1;
      FUN_00822a40(iVar9 + 1);
      FUN_008216e0(uVar6,iVar9);
      uVar6 = FUN_008216e0(&DAT_00882ef5,1);
      uVar4 = 0xf;
      if (local_118 != local_110) {
        uVar4 = local_110[0];
      }
      if (((uVar4 < (uint)(local_114 + local_fc)) && (local_100 != local_f8)) &&
         ((uint)(local_114 + local_fc) <= local_f8[0])) {
        uVar7 = FUN_00821e60(0,&local_118);
        uVar6 = extraout_ECX;
      }
      else {
        uVar7 = FUN_00821710(&local_100);
      }
      FUN_00823120(uVar7);
      uVar7 = FUN_0040d75a(local_e8);
      FUN_0081ffd0(uVar7,uVar6);
      FUN_0081ffd0();
      FUN_0081ffd0();
      iVar9 = FUN_0040d617();
      *(int *)(param_1 + 4) = iVar9;
      return iVar9 != 0;
    }
    if (uVar4 < 100) {
      iVar9 = iVar9 + 1;
      goto LAB_0040d885;
    }
    if (uVar4 < 1000) {
      iVar9 = iVar9 + 2;
      goto LAB_0040d885;
    }
    if (uVar4 < 10000) {
      iVar9 = iVar9 + 3;
      goto LAB_0040d885;
    }
    iVar9 = iVar9 + 4;
    uVar4 = uVar4 / 10000;
  } while( true );
}



/* vtable 008831bc slot 3 address 0040d596 */

/* ADDRESS: 0040d596 NAME: FUN_0040d596 */

undefined4 __thiscall FUN_0040d596(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if ((param_3 < 1) || (*(int *)(param_1 + 4) == 0)) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = FUN_007356f0(*(int *)(param_1 + 4),param_2,param_3);
  }
  return uVar1;
}



/* vtable 008831bc slot 4 address 0040d55c */

/* ADDRESS: 0040d55c NAME: FUN_0040d55c */

bool __thiscall FUN_0040d55c(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((*(int *)(param_1 + 4) != 0) && (bVar2 = true, 0 < param_3)) {
    iVar1 = FUN_00735660(*(int *)(param_1 + 4),param_2,param_3);
    bVar2 = param_3 == iVar1;
  }
  return bVar2;
}



/* vtable 008831bc slot 5 address 0040d418 */

/* ADDRESS: 0040d418 NAME: FUN_0040d418 */

bool __fastcall FUN_0040d418(int param_1)

{
  return *(int *)(param_1 + 4) != 0;
}



/* vtable 008831bc slot 6 address 0040d4f6 */

/* ADDRESS: 0040d4f6 NAME: FUN_0040d4f6 */

void __fastcall FUN_0040d4f6(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  FUN_00735770(*(int *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



/* vtable 008831bc slot 7 address 0040d464 */

/* ADDRESS: 0040d464 NAME: FUN_0040d464 */

undefined4 __thiscall FUN_0040d464(undefined4 param_1,int param_2)

{
  FUN_00823370(param_2 + 8);
  return param_1;
}


