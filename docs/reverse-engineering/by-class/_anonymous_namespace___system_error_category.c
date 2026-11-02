/* Candidate RTTI class: (anonymous namespace)::system_error_category
   Pseudocode grouped by vtable evidence. This is NOT a recovered C++ class declaration.
   Slot numbers are ABI positions, not original method names. Shared code may occur in multiple classes. */

/* vtable 00907ac8 slot 0 address 007737a0 */

/* ADDRESS: 007737a0 NAME: FUN_007737a0 */

void FUN_007737a0(void)

{
  return;
}



/* vtable 00907ac8 slot 1 address 00773790 */

/* ADDRESS: 00773790 NAME: FUN_00773790 */

void __fastcall FUN_00773790(void *param_1)

{
  free(param_1);
  return;
}



/* vtable 00907ac8 slot 2 address 0077c820 */

/* ADDRESS: 0077c820 NAME: FUN_0077c820 */

char * FUN_0077c820(void)

{
  return "system";
}



/* vtable 00907ac8 slot 3 address 007880e0 */

/* ADDRESS: 007880e0 NAME: FUN_007880e0 */

undefined4 __thiscall FUN_007880e0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  undefined1 *local_28;
  undefined4 local_24;
  undefined1 local_20 [16];
  int local_10;
  
  local_10 = DAT_0145f3d0;
  (**(code **)(*param_2 + 0x10))(param_2,param_3);
  FUN_007f0df0(local_28,local_24);
  if (local_28 != local_20) {
    free(local_28);
  }
  if (local_10 != DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00757230();
  }
  return param_1;
}



/* vtable 00907ac8 slot 4 address 0077c830 */

/* ADDRESS: 0077c830 NAME: FUN_0077c830 */

int * __thiscall FUN_0077c830(int *param_1,undefined4 param_2,DWORD param_3)

{
  short *psVar1;
  HLOCAL hMem;
  DWORD DVar2;
  HLOCAL local_14;
  int local_10;
  
  local_14 = (HLOCAL)0x0;
  local_10 = DAT_0145f3d0;
  DVar2 = FormatMessageA(0x1100,(LPCVOID)0x0,param_3,0x400,(LPSTR)&local_14,0,(va_list *)0x0);
  hMem = local_14;
  if (DVar2 == 0) {
    *param_1 = (int)(param_1 + 2);
    FUN_008208b0("Unknown error code","");
  }
  else {
    if (3 < DVar2) {
      psVar1 = (short *)((int)local_14 + (DVar2 - 3));
      if ((*psVar1 == 0xd2e) && ((char)psVar1[1] == '\n')) {
        DVar2 = DVar2 - 3;
      }
    }
    *param_1 = (int)(param_1 + 2);
    if (local_14 == (HLOCAL)0x0) {
      if (local_10 == DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
        FUN_0084e440("basic_string: construction from null is not valid");
      }
                    /* WARNING: Subroutine does not return */
      FUN_00757230();
    }
    FUN_008208b0(local_14,DVar2 + (int)local_14);
    LocalFree(hMem);
  }
  if (local_10 != DAT_0145f3d0) {
                    /* WARNING: Subroutine does not return */
    FUN_00757230();
  }
  return param_1;
}



/* vtable 00907ac8 slot 5 address 0077c420 */

/* ADDRESS: 0077c420 NAME: FUN_0077c420 */

undefined8 __thiscall FUN_0077c420(undefined **param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined **ppuVar3;
  
  if (param_2 < 0x218) {
    switch(param_2) {
    case 0:
      iVar1 = 0;
      ppuVar3 = &PTR_PTR_00880988;
      break;
    default:
      goto switchD_0077c441_caseD_1;
    case 2:
    case 3:
    case 0x35:
    case 0x37:
    case 0x40:
    case 0x43:
    case 0x7b:
    case 0x7e:
    case 0xa1:
      iVar1 = 2;
      ppuVar3 = &PTR_PTR_00880988;
      break;
    case 4:
      iVar1 = 0x18;
      ppuVar3 = &PTR_PTR_00880988;
      break;
    case 5:
      iVar1 = 0xd;
      ppuVar3 = &PTR_PTR_00880988;
      break;
    case 6:
      iVar1 = 9;
      ppuVar3 = &PTR_PTR_00880988;
      break;
    case 8:
    case 0xe:
      iVar1 = 0xc;
      ppuVar3 = &PTR_PTR_00880988;
      break;
    case 0xd:
    case 0x19:
    case 0x1b:
    case 0x57:
    case 0x83:
    case 0xd0:
    case 0xd1:
    case 0xd2:
    case 0xe6:
    case 0xfe:
    case 0x1e7:
switchD_0077c441_caseD_d:
      iVar1 = 0x16;
      ppuVar3 = &PTR_PTR_00880988;
      break;
    case 0xf:
    case 0x14:
switchD_0077c441_caseD_f:
      iVar1 = 0x13;
      ppuVar3 = &PTR_PTR_00880988;
      break;
    case 0x11:
      iVar1 = 0x12;
      ppuVar3 = &PTR_PTR_00880988;
      break;
    case 0x13:
      iVar1 = 0x1e;
      ppuVar3 = &PTR_PTR_00880988;
      break;
    case 0x17:
    case 0x3b:
    case 0x6e:
    case 0x9c:
    case 0xcd:
switchD_0077c441_caseD_17:
      return 0x88098800000005;
    case 0x20:
    case 0x21:
    case 0x81:
    case 0xa2:
    case 0xaa:
    case 0xe7:
    case 0x217:
switchD_0077c441_caseD_20:
      iVar1 = 0x10;
      ppuVar3 = &PTR_PTR_00880988;
      break;
    case 0x24:
      iVar1 = 0x27;
      ppuVar3 = &PTR_PTR_00880988;
      break;
    case 0x27:
    case 0x70:
switchD_0077c441_caseD_27:
      iVar1 = 0x1c;
      ppuVar3 = &PTR_PTR_00880988;
      break;
    case 0x32:
    case 0x3a:
    case 0x78:
      iVar1 = 0x28;
      ppuVar3 = &PTR_PTR_00880988;
      break;
    case 0x50:
    case 0xb7:
switchD_0077c441_caseD_50:
      iVar1 = 0x11;
      ppuVar3 = &PTR_PTR_00880988;
      break;
    case 0x52:
    case 0x120:
switchD_0077c441_caseD_52:
      iVar1 = 1;
      ppuVar3 = &PTR_PTR_00880988;
      break;
    case 0x59:
    case 0xa4:
      goto switchD_0077c441_caseD_59;
    case 0x68:
switchD_0077c441_caseD_68:
      iVar1 = 4;
      ppuVar3 = &PTR_PTR_00880988;
      break;
    case 0x6d:
    case 0xe8:
      iVar1 = 0x20;
      ppuVar3 = &PTR_PTR_00880988;
      break;
    case 0x71:
      iVar1 = 0x17;
      ppuVar3 = &PTR_PTR_00880988;
      break;
    case 0x7f:
      iVar1 = 3;
      ppuVar3 = &PTR_PTR_00880988;
      break;
    case 0x91:
      iVar1 = 0x29;
      ppuVar3 = &PTR_PTR_00880988;
      break;
    case 0xbf:
    case 0xc0:
    case 0xc1:
    case 0xc5:
    case 0xd8:
      iVar1 = 8;
      ppuVar3 = &PTR_PTR_00880988;
      break;
    case 0xce:
      iVar1 = 0x26;
      ppuVar3 = &PTR_PTR_00880988;
      break;
    case 0xea:
      iVar1 = 0x73;
      ppuVar3 = &PTR_PTR_00880988;
      break;
    case 0x10b:
      iVar1 = 0x14;
      ppuVar3 = &PTR_PTR_00880988;
    }
  }
  else {
    if (param_2 == 0x4b0) goto switchD_0077c441_caseD_f;
    if (param_2 < 0x4b1) {
      if (param_2 == 0x44f) {
        return 0x88098800000005;
      }
      if (param_2 < 0x450) {
        if (param_2 == 0x3f0) goto switchD_0077c441_caseD_d;
        if (param_2 < 0x3f1) {
          if (param_2 == 0x3e6) {
            iVar1 = 0xe;
            ppuVar3 = &PTR_PTR_00880988;
            goto LAB_0077c4f1;
          }
          if (param_2 < 999) {
            if (param_2 - 0x3e4U < 2) {
              return 0x8809880000000b;
            }
          }
          else {
            iVar1 = 6;
            ppuVar3 = &PTR_PTR_00880988;
            if (param_2 == 0x3ee) goto LAB_0077c4f1;
          }
        }
        else {
          if (param_2 == 0x44c) goto switchD_0077c441_caseD_27;
          if (0x44c < param_2) {
            return 0x88098800000005;
          }
          if (param_2 == 0x41d) goto switchD_0077c441_caseD_20;
          iVar1 = 0xe;
          ppuVar3 = &PTR_PTR_00880988;
          if (param_2 == 0x42b) goto LAB_0077c4f1;
        }
      }
      else if (param_2 < 0x46c) {
        uVar2 = 1 << ((char)param_2 + 0xb0U & 0x1f);
        if ((uVar2 & 0x2002084) != 0) {
          return 0x88098800000005;
        }
        if (param_2 == 0x46b) {
          iVar1 = 0x24;
          ppuVar3 = &PTR_PTR_00880988;
          goto LAB_0077c4f1;
        }
        if ((uVar2 & 1) != 0) {
          return 0x88098800000005;
        }
      }
      else {
        if (param_2 == 0x476) {
          iVar1 = 0x1f;
          ppuVar3 = &PTR_PTR_00880988;
          goto LAB_0077c4f1;
        }
        if (param_2 - 0x48dU < 2) {
          return 0x88098800000005;
        }
      }
    }
    else if (param_2 < 0x5b5) {
      if (param_2 < 0x570) {
        if (param_2 == 0x522) goto switchD_0077c441_caseD_52;
        if (param_2 < 0x523) {
          if (param_2 == 0x4c7) goto switchD_0077c441_caseD_68;
          iVar1 = 0x6b;
          ppuVar3 = &PTR_PTR_00880988;
          if (param_2 == 0x4c9) goto LAB_0077c4f1;
        }
        else if (param_2 == 0x534) goto switchD_0077c441_caseD_d;
      }
      else {
        switch(param_2) {
        case 0x570:
          goto switchD_0077c441_caseD_50;
        case 0x571:
          goto switchD_0077c441_caseD_17;
        case 0x5aa:
          iVar1 = 0x1b;
          ppuVar3 = &PTR_PTR_00880988;
          goto LAB_0077c4f1;
        case 0x5ab:
        case 0x5ac:
        case 0x5ad:
        case 0x5ae:
        case 0x5af:
          goto switchD_0077c441_caseD_59;
        case 0x5b4:
          goto switchD_0077c441_caseD_20;
        }
      }
    }
    else {
      if (param_2 == 0x961) {
switchD_0077c441_caseD_59:
        return 0x8809880000000b;
      }
      if (param_2 < 0x962) {
        if (param_2 == 0x718) {
          return 0x88098800000005;
        }
        if (param_2 == 0x89a) goto switchD_0077c441_caseD_d;
      }
      else {
        if (param_2 == 0x964) {
          return 0x8809880000000b;
        }
        if (param_2 == 0x2095) {
          return 0x88098800000005;
        }
        iVar1 = 0xb;
        ppuVar3 = &PTR_PTR_00880988;
        if (param_2 == 0x962) goto LAB_0077c4f1;
      }
    }
switchD_0077c441_caseD_1:
    iVar1 = param_2;
    ppuVar3 = param_1;
  }
LAB_0077c4f1:
  return CONCAT44(ppuVar3,iVar1);
}



/* vtable 00907ac8 slot 6 address 0077c3e0 */

/* ADDRESS: 0077c3e0 NAME: FUN_0077c3e0 */

bool FUN_0077c3e0(undefined4 param_1,int *param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0077c420(param_1);
  if (param_2[1] == (int)((ulonglong)uVar1 >> 0x20)) {
    return *param_2 == (int)uVar1;
  }
  return false;
}



/* vtable 00907ac8 slot 7 address 00788160 */

/* ADDRESS: 00788160 NAME: FUN_00788160 */

bool __thiscall FUN_00788160(int param_1,int *param_2,int param_3)

{
  if (param_1 == param_2[1]) {
    return *param_2 == param_3;
  }
  return false;
}


