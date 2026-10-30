//==== ___local_stdio_printf_options @ 00002a10 ====

undefined8 * ___local_stdio_printf_options(void)

{
  return &`__local_stdio_printf_options'::__l2::_OptionsStorage;
}



//==== __init_dm @ 00002a20 ====

uint __init_dm(int param_1)

{
  ushort *puVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint local_4;
  
  uVar6 = 1;
  local_4 = 0;
  uVar5 = (uint)*(ushort *)(param_1 + 0xe);
  if (10 < uVar5) {
    uVar6 = uVar5 / 10;
  }
  iVar4 = 0;
  if (uVar5 != 0) {
    piVar2 = (int *)(*(int *)(param_1 + 0x14) + 8);
    local_4 = 0;
    do {
      iVar4 = iVar4 + uVar6;
      uVar3 = (piVar2[-2] << 4 | (uint)piVar2[-2] >> 0x1c) + piVar2[-1];
      uVar3 = (uVar3 * 0x10 | uVar3 >> 0x1c) + *piVar2;
      uVar3 = (uVar3 * 0x10 | uVar3 >> 0x1c) + piVar2[2];
      uVar3 = (uVar3 * 0x10 | uVar3 >> 0x1c) + piVar2[3];
      uVar3 = (uVar3 * 0x10 | uVar3 >> 0x1c) + (uint)*(ushort *)(piVar2 + 4);
      uVar3 = (uVar3 * 0x10 | uVar3 >> 0x1c) + (uint)*(ushort *)((int)piVar2 + 0x12);
      uVar3 = (uVar3 * 0x10 | uVar3 >> 0x1c) + (uint)*(ushort *)(piVar2 + 5);
      uVar3 = (uVar3 * 0x10 | uVar3 >> 0x1c) + (uint)*(ushort *)((int)piVar2 + 0x16);
      puVar1 = (ushort *)(piVar2 + 7);
      uVar3 = (uVar3 * 0x10 | uVar3 >> 0x1c) + piVar2[6];
      piVar2 = piVar2 + uVar6 * 10;
      uVar3 = (uVar3 * 0x10 | uVar3 >> 0x1c) + (uint)*puVar1;
      local_4 = local_4 + (uVar3 * 0x10 | uVar3 >> 0x1c);
      local_4 = local_4 * 0x10 | local_4 >> 0x1c;
    } while (iVar4 < (int)uVar5);
  }
  local_4 = *(int *)(param_1 + 4) + local_4;
  uVar6 = (uint)*(ushort *)(param_1 + 8) + (local_4 * 0x10 | local_4 >> 0x1c);
  uVar6 = (uVar6 * 0x10 | uVar6 >> 0x1c) + (uint)*(ushort *)(param_1 + 10);
  uVar6 = (uVar6 * 0x10 | uVar6 >> 0x1c) + (uint)*(ushort *)(param_1 + 0xc);
  uVar5 = (uVar6 * 0x10 | uVar6 >> 0x1c) + uVar5;
  return uVar5 * 0x10 | uVar5 >> 0x1c;
}



//==== __init_em @ 00002b00 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __init_em(byte *param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  int *piVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  byte *pbVar8;
  code *pcVar9;
  char *pcVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  bool bVar15;
  byte *local_8;
  
  uVar1 = __init_dm(*(undefined4 *)(param_1 + 0xe8));
  pcVar10 = param_2 + 2;
  if (__init_nl == (code *)0x0) {
    if (__init_ul == (code *)0x0) {
      pcVar9 = (code *)0x0;
      bVar15 = *pcVar10 == '3';
    }
    else {
      bVar15 = *pcVar10 == '9';
      pcVar9 = __init_ul;
    }
  }
  else {
    bVar15 = *pcVar10 == '4';
    pcVar9 = __init_nl;
  }
  iVar13 = 3;
  uVar5 = (uint)CONCAT11(*param_2,param_2[1]);
  uVar14 = (uint)!bVar15;
  if (pcVar9 != (code *)0x0) {
    iVar13 = 0;
  }
  do {
    while( true ) {
      uVar7 = uVar5;
      uVar5 = uVar7 - 1;
      bVar3 = 0;
      for (iVar2 = iVar13; iVar2 < (int)uVar5; iVar2 = iVar2 + 4) {
        bVar3 = bVar3 ^ pcVar10[iVar2];
      }
      uVar12 = uVar14 + 1;
      if (pcVar10[uVar5] == bVar3) {
        uVar12 = uVar14;
      }
      uVar14 = uVar12;
      if (pcVar9 != (code *)0x0) break;
      iVar13 = iVar13 + -1;
      if (iVar13 < 0) goto LAB_00002ba6;
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 4);
LAB_00002ba6:
  pbVar6 = (byte *)(pcVar10 + (uVar7 - 0xc));
  pbVar8 = param_2 + 0xf;
  uVar5 = *(uint *)(param_2 + 0xb) ^ *(uint *)(param_2 + 7);
  uVar14 = *(uint *)(param_2 + 7) ^ *(uint *)(param_2 + 3);
  if (__init_nl == (code *)0x0) {
    pbVar11 = pbVar8;
    local_8 = param_1;
    if (__init_ul != (code *)0x0) {
      local_8 = pbVar8;
    }
  }
  else {
    pbVar11 = pbVar8 + (uint)(byte)((pbVar6[-10] ^ *pbVar8) + 1) * 4 + 10;
    local_8 = pbVar8;
  }
  uVar7 = uVar12 + 1;
  if ((*pbVar11 ^ *pbVar6) == (pbVar11[3] ^ pbVar6[3])) {
    uVar7 = uVar12;
  }
  uVar12 = uVar7 + 1;
  if ((*pbVar11 ^ *pbVar6) == (pbVar11[8] ^ pbVar6[8])) {
    uVar12 = uVar7;
  }
  if ((uVar5 != CONCAT31(CONCAT21(CONCAT11(pbVar11[10] ^ pbVar6[10],pbVar11[9] ^ pbVar6[9]),
                                  pbVar11[7] ^ pbVar6[7]),pbVar11[6] ^ pbVar6[6])) ||
     (uVar5 != 0x30002)) {
    uVar12 = uVar12 + 1;
  }
  if ((uVar14 != CONCAT31(CONCAT21(CONCAT11(pbVar11[5] ^ pbVar6[5],pbVar11[4] ^ pbVar6[4]),
                                   pbVar11[2] ^ pbVar6[2]),pbVar11[1] ^ pbVar6[1])) ||
     (uVar14 != uVar1)) {
    uVar12 = uVar12 + 1;
  }
  uVar1 = uVar12;
  if (pcVar9 != (code *)0x0) {
    piVar4 = (int *)&_ossCriticalSection;
    pbVar8 = &_cs;
    uVar5 = 0x14;
    do {
      if (*piVar4 != *(int *)pbVar8) {
        bVar3 = (byte)*piVar4;
        bVar15 = bVar3 < *pbVar8;
        if ((((bVar3 == *pbVar8) &&
             (bVar15 = *(byte *)((int)piVar4 + 1) < pbVar8[1],
             *(byte *)((int)piVar4 + 1) == pbVar8[1])) &&
            (bVar15 = *(byte *)((int)piVar4 + 2) < pbVar8[2],
            *(byte *)((int)piVar4 + 2) == pbVar8[2])) &&
           (bVar15 = *(byte *)((int)piVar4 + 3) < pbVar8[3], *(byte *)((int)piVar4 + 3) == pbVar8[3]
           )) {
          uVar5 = 0;
        }
        else {
          uVar5 = -(uint)bVar15 | 1;
        }
        goto LAB_00002d9a;
      }
      piVar4 = piVar4 + 1;
      pbVar8 = pbVar8 + 4;
      bVar15 = 3 < uVar5;
      uVar5 = uVar5 - 4;
    } while (bVar15);
    uVar5 = 0;
LAB_00002d9a:
    if (uVar5 != 0) {
      (*___imp__EnterCriticalSection_4)(&_ossCriticalSection);
    }
    if (`_init_em'::__l10::credential_checked == 0) {
      iVar13 = (*pcVar9)(param_1,pbVar6,local_8);
      uVar1 = uVar12 + iVar13;
      if (uVar12 == uVar1) {
        `_init_em'::__l10::credential_checked = 1;
      }
    }
    if (uVar5 != 0) {
      (*___imp__LeaveCriticalSection_4)(&_ossCriticalSection);
    }
  }
  return uVar1;
}



//==== __vsnprintf_l @ 00002e00 ====

int __vsnprintf_l(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)___local_stdio_printf_options(param_1,param_2,param_3,param_4,param_5);
  iVar2 = ___stdio_common_vsprintf(*puVar1 | 1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



//==== __vsprintf_l @ 00002e40 ====

int __vsprintf_l(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)___local_stdio_printf_options(param_1,0xffffffff,param_2,param_3,param_4);
  iVar2 = ___stdio_common_vsprintf(*puVar1 | 1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



//==== ossGetMem @ 00002ea0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* __stdcall ossGetMem,4 */

void ossGetMem(undefined4 param_1)

{
  (*__mallocp)(param_1);
  return;
}



//==== ossInitPrintFunctions @ 00002eb0 ====

/* __stdcall ossInitPrintFunctions,8 */

void ossInitPrintFunctions(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0x6e4) + 4) = param_2;
  return;
}



//==== ossInitUserFunctions @ 00002ed0 ====

/* __stdcall ossInitUserFunctions,8 */

void ossInitUserFunctions(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0x6e4) + 4) = param_2;
  return;
}



//==== ossReallocMem @ 00002ef0 ====

/* __stdcall ossReallocMem,8 */

undefined4 ossReallocMem(void)

{
  return 0;
}



//==== ossReleaseMem @ 00002f00 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* __stdcall ossReleaseMem,4 */

void ossReleaseMem(undefined4 param_1)

{
  (*__freep)(param_1);
  return;
}



//==== ossSetExtParms @ 00002f10 ====

/* __stdcall ossSetExtParms,8 */

void ossSetExtParms(int param_1,int *param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)(*(int *)(param_1 + 0x6e4) + 0x40);
  *puVar1 = *puVar1 ^ (*param_2 << 4 ^ *(uint *)(*(int *)(param_1 + 0x6e4) + 0x40)) & 0xfff0;
  *(int **)(*(int *)(param_1 + 0x6e4) + 0xc0) = param_2 + 1;
  return;
}



//==== ossTerm_ed_Json @ 00002f50 ====

/* ossTerm_ed_Json */

void __cdecl ossTerm_ed_Json(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x6e4) + 0x2b4);
  if (iVar1 != 0) {
    (**(code **)(param_1 + 0x6d8))(iVar1);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x6e4) + 0x2b8);
  if (iVar1 != 0) {
    (**(code **)(param_1 + 0x6d8))(iVar1);
  }
  return;
}



//==== ossTerm_ed_Oer @ 00002f90 ====

/* ossTerm_ed_Oer */

void __cdecl ossTerm_ed_Oer(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x6e4) + 0x28c);
  if (iVar1 != 0) {
    (**(code **)(param_1 + 0x6d8))(iVar1);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x6e4) + 0x290);
  if (iVar1 != 0) {
    (**(code **)(param_1 + 0x6d8))(iVar1);
  }
  return;
}



//==== ossTerm_ed_Xer @ 00002fd0 ====

/* ossTerm_ed_Xer */

void __cdecl ossTerm_ed_Xer(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x6e4) + 0x9c);
  if (iVar1 != 0) {
    (**(code **)(param_1 + 0x6d8))(iVar1);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x6e4) + 0xa0);
  if (iVar1 != 0) {
    (**(code **)(param_1 + 0x6d8))(iVar1);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x6e4) + 0x10c);
  if (iVar1 != 0) {
    (**(code **)(param_1 + 0x6d8))(iVar1);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x6e4) + 0x110);
  if (iVar1 != 0) {
    (**(code **)(param_1 + 0x6d8))(iVar1);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x6e4) + 0x114);
  if (iVar1 != 0) {
    (**(code **)(param_1 + 0x6d8))(iVar1);
  }
  iVar1 = *(int *)(*(int *)(param_1 + 0x6e4) + 0x118);
  if (iVar1 != 0) {
    (**(code **)(param_1 + 0x6d8))(iVar1);
  }
  return;
}



//==== ossTrialMessageBox @ 00003070 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* ossTrialMessageBox */

undefined4 __cdecl ossTrialMessageBox(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  code *pcVar2;
  short *psVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined2 *puVar9;
  short *psVar10;
  int iVar11;
  char *pcVar12;
  
  iVar4 = trialMessageAlreadyDisplayed(param_3);
  if (iVar4 != 0) {
    return 1;
  }
  uVar5 = (*___imp__GetModuleHandleA_4)(0);
  iVar4 = (*___imp__GlobalAlloc_8)(0x40,0x400);
  if (iVar4 == 0) {
    return 0xffffffff;
  }
  puVar6 = (undefined4 *)(*___imp__GlobalLock_4)(iVar4);
  *puVar6 = 0x90c808c0;
  puVar6[2] = 6;
  puVar6[3] = 0x1350000;
  *(undefined2 *)(puVar6 + 4) = 0x60;
  *(undefined4 *)((int)puVar6 + 0x12) = 0;
  pcVar2 = ___imp__MultiByteToWideChar_24;
  iVar7 = (*___imp__MultiByteToWideChar_24)(0,0,param_3,0xffffffff,(int)puVar6 + 0x16,0x32);
  puVar9 = (undefined2 *)((int)puVar6 + 0x16 + iVar7 * 2);
  *puVar9 = 8;
  puVar9 = puVar9 + 1;
  pcVar12 = (char *)0x0;
  iVar7 = (*pcVar2)(0,0,s_MS_Shell_Dlg,0xffffffff,puVar9,0x32);
  puVar6 = (undefined4 *)(iVar7 * 2 + 3 + (int)puVar9 & 0xfffffffc);
  puVar6[2] = 0x4b0086;
  puVar6[3] = 0xe0032;
  *(undefined2 *)(puVar6 + 4) = 1;
  *puVar6 = 0x50000001;
  *(undefined4 *)((int)puVar6 + 0x12) = 0x80ffff;
  iVar11 = (int)puVar6 + 0x16;
  iVar7 = iVar11;
  iVar8 = (*pcVar2)(0,0,s_OK,0xffffffff,iVar11,0x32);
  puVar9 = (undefined2 *)(iVar8 * 2 + 3 + iVar11 & 0xfffffffc);
  *puVar9 = 0;
  *(undefined4 *)(puVar9 + 6) = 0x70007;
  *(undefined4 *)(puVar9 + 8) = 0x140014;
  *(undefined4 *)(puVar9 + 10) = 0xffff0096;
  *(undefined4 *)(puVar9 + 2) = 0x50000003;
  *(undefined4 *)(puVar9 + 0xc) = 0x82;
  puVar9[0xe] = 0;
  *(undefined4 *)(puVar9 + 0x14) = 0x320027;
  *(undefined4 *)(puVar9 + 0x16) = 0x1000aa;
  *(undefined4 *)(puVar9 + 0x18) = 0xffff00a0;
  *(undefined4 *)(puVar9 + 0x10) = 0x50000000;
  *(undefined4 *)(puVar9 + 0x1a) = 0x82;
  puVar9[0x1c] = 0;
  *(undefined4 *)(puVar9 + 0x22) = 0x3200db;
  *(undefined4 *)(puVar9 + 0x24) = 0x100014;
  *(undefined4 *)(puVar9 + 0x26) = 0xffff00b4;
  *(undefined4 *)(puVar9 + 0x1e) = 0x50000002;
  *(undefined4 *)(puVar9 + 0x28) = 0x82;
  puVar9[0x2a] = 0;
  *(undefined4 *)(puVar9 + 0x30) = 0x3200f5;
  *(undefined4 *)(puVar9 + 0x32) = 0x100028;
  *(undefined4 *)(puVar9 + 0x34) = 0xffff00aa;
  *(undefined4 *)(puVar9 + 0x2c) = 0x50000000;
  *(undefined4 *)(puVar9 + 0x36) = 0x82;
  puVar9[0x38] = 0;
  *(undefined4 *)(puVar9 + 0x3e) = 0x70027;
  *(undefined4 *)(puVar9 + 0x40) = 0x280107;
  *(undefined4 *)(puVar9 + 0x42) = 0xffff00be;
  *(undefined4 *)(puVar9 + 0x3a) = 0x50000000;
  puVar9[0x44] = 0x82;
  psVar3 = puVar9 + 0x45;
  do {
    psVar10 = psVar3;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
    *psVar10 = (short)cVar1;
    psVar3 = psVar10 + 1;
  } while (cVar1 != '\0');
  *(undefined2 *)((int)psVar10 + 5U & 0xfffffffc) = 0;
  (*___imp__GlobalUnlock_4)(iVar4);
  uVar5 = (*___imp__DialogBoxIndirectParamA_20)(uVar5,iVar4,iVar7,&_TrialDlgProc_16,0);
  (*___imp__GlobalFree_4)(iVar4);
  return uVar5;
}



//==== oss_free_ext_errMsg @ 000032a0 ====

/* __stdcall oss_free_ext_errMsg,4 */

void oss_free_ext_errMsg(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x6e4) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x6e4) + 0x24c), iVar1 != 0)) {
    (**(code **)(param_1 + 0x6d8))(iVar1);
    *(undefined4 *)(*(int *)(param_1 + 0x6e4) + 0x24c) = 0;
  }
  return;
}



//==== ossinit @ 000032e0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* __stdcall ossinit,8 */

int ossinit(int *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  void *__s;
  int *piVar4;
  byte *pbVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined4 *in_stack_00000018;
  int aiStack_6dc [439];
  
  iVar6 = 0;
  if (param_1 == (int *)0x0) {
    return 6;
  }
  param_1[0x180] = 0;
  if (__ossSetGlobalUserVar == 0) {
    iVar3 = param_1[8];
  }
  else {
    iVar3 = 0;
  }
  _memset(param_1,0,0x6e8);
  param_1[0x3e] = 0x200;
  param_1[0x3d] = 0x200;
  if (__ossSetGlobalUserVar == 0) {
    param_1[8] = iVar3;
  }
  param_1[0x19b] = (int)&_memMgrTbl;
  iVar3 = ossMinit(param_1);
  if (iVar3 != 0) {
    return iVar3;
  }
  param_1[0x1b5] = *param_1;
  param_1[0x1b6] = param_1[2];
  param_1[399] = (int)&_ossCriticalSection;
  __s = (void *)(*(code *)*param_1)(0x2e8);
  param_1[0x1b9] = (int)__s;
  if (__s == (void *)0x0) {
    return 8;
  }
  _memset(__s,0,0x2e8);
  if (in_stack_00000018 == (undefined4 *)0x0) {
    iVar3 = 0x14;
  }
  else {
    param_1[0x18d] = param_1[7];
    if (*(short *)(in_stack_00000018 + 2) == 0x73) {
      param_1[0x3a] = (int)in_stack_00000018;
      setDefaultAdditionalFlags(param_1);
      *(undefined4 *)(param_1[0x1b9] + 0x2c0) = 0;
      param_1[0xc1] = param_1[0xc1] | 0x8000;
      __init_nl = 0;
      __init_ul = 0;
      (*(code *)*in_stack_00000018)(param_1);
      if (__init_nl != 0) {
        if (param_1[0x15b] != 0) {
          ossTerm_ed_Xer(param_1);
          ossTerm_ed_Oer(param_1);
          ossTerm_ed_Json(param_1);
          if (*(int *)(param_1[0x1b9] + 0x23c) != 0) {
            (*(code *)param_1[0x1b6])(*(int *)(param_1[0x1b9] + 0x23c));
          }
          if (*(int *)(param_1[0x1b9] + 0x240) != 0) {
            (*(code *)param_1[0x1b6])(*(int *)(param_1[0x1b9] + 0x240));
          }
          if (*(int *)(param_1[0x1b9] + 0x2a4) != 0) {
            (*(code *)param_1[0x1b6])(*(int *)(param_1[0x1b9] + 0x2a4));
          }
          if (*(int *)(param_1[0x1b9] + 0x2a8) != 0) {
            (*(code *)param_1[0x1b6])(*(int *)(param_1[0x1b9] + 0x2a8));
          }
          iVar6 = param_1[0x1b9];
          if ((iVar6 != 0) && (*(int *)(iVar6 + 0xc) != 0)) {
            param_1[0x3a] = (int)in_stack_00000018;
            (**(code **)(iVar6 + 0xc))(param_1);
          }
          (*(code *)param_1[0x1b6])(param_1[0x1b9]);
          param_1[0x1b9] = 0;
          return param_1[0x15b];
        }
        puVar1 = (undefined4 *)param_1[0x3a];
        param_1[0x3a] = (int)in_stack_00000018;
        if (puVar1 == in_stack_00000018) {
          if ((*(ushort *)((int)in_stack_00000018 + 10) & 0x800) == 0) {
            *(ushort *)(param_1 + 0x18a) = *(ushort *)(param_1 + 0x18a) | 1;
          }
          else {
            iVar6 = 1;
          }
        }
        else {
          iVar6 = __init_em(param_1,puVar1);
          if ((iVar6 != 0) && ((char)param_1[0x40] == 'E')) {
            *(undefined1 *)(param_1 + 0x40) = 0;
            aiStack_6dc[0] = 1;
          }
        }
        setDefaultEncodingRules(param_1);
        pbVar5 = *(byte **)(param_1[0x1b9] + 0x90);
        iVar3 = *(int *)(param_1[0x1b9] + 0x88);
        if (((((0 < iVar3) && ((*pbVar5 & 2) != 0)) || ((1 < iVar3 && ((*pbVar5 & 4) != 0)))) ||
            (((0xe < iVar3 && ((char)pbVar5[1] < '\0')) || ((0xf < iVar3 && ((pbVar5[2] & 1) != 0)))
             ))) && ((*(ushort *)((int)in_stack_00000018 + 10) & 0x100) == 0)) {
          setInvertAlphabet(param_1,in_stack_00000018);
        }
        *(undefined2 *)(param_1[0x1b9] + 0x5c) = *(undefined2 *)((int)in_stack_00000018 + 10);
        iVar3 = 0;
        if (iVar6 != 0) {
          if (aiStack_6dc[0] != 0) {
            piVar4 = (int *)&_ossCriticalSection;
            pbVar5 = &_cs;
            uVar7 = 0x14;
            do {
              if (*piVar4 != *(int *)pbVar5) {
                bVar2 = (byte)*piVar4;
                bVar8 = bVar2 < *pbVar5;
                if ((((bVar2 == *pbVar5) &&
                     (bVar8 = *(byte *)((int)piVar4 + 1) < pbVar5[1],
                     *(byte *)((int)piVar4 + 1) == pbVar5[1])) &&
                    (bVar8 = *(byte *)((int)piVar4 + 2) < pbVar5[2],
                    *(byte *)((int)piVar4 + 2) == pbVar5[2])) &&
                   (bVar8 = *(byte *)((int)piVar4 + 3) < pbVar5[3],
                   *(byte *)((int)piVar4 + 3) == pbVar5[3])) {
                  uVar7 = 0;
                }
                else {
                  uVar7 = -(uint)bVar8 | 1;
                }
                goto LAB_000035fb;
              }
              piVar4 = piVar4 + 1;
              pbVar5 = pbVar5 + 4;
              bVar8 = 3 < uVar7;
              uVar7 = uVar7 - 4;
            } while (bVar8);
            uVar7 = 0;
LAB_000035fb:
            if (uVar7 != 0) {
              (*___imp__EnterCriticalSection_4)(&_ossCriticalSection);
            }
            if (__message_displayed == 0) {
              ossTrialMessageBox(param_1[400],s_R0257E__Applications_built_with_,
                                 s_OSS_ASN_1_Tools_for_C__Trial_Bui);
              __message_displayed = 1;
            }
            if (uVar7 != 0) {
              (*___imp__LeaveCriticalSection_4)(&_ossCriticalSection);
            }
            ossPrint(param_1,s_R0257E__Applications_built_with_);
          }
          (*(code *)param_1[0x1b6])(param_1[0x1b9]);
          param_1[0x1b9] = 0;
          piVar4 = aiStack_6dc;
          for (iVar6 = 0x1ba; iVar6 != 0; iVar6 = iVar6 + -1) {
            *param_1 = *piVar4;
            piVar4 = piVar4 + 1;
            param_1 = param_1 + 1;
          }
          return 0x12;
        }
        goto LAB_0000368c;
      }
    }
    iVar3 = 7;
  }
LAB_0000368c:
  *(undefined4 *)(param_1[0x1b9] + 0xd4) = 10;
  *(undefined4 *)(param_1[0x1b9] + 0xdc) = 0x40;
  *(undefined4 *)(param_1[0x1b9] + 0x138) = *(undefined4 *)(param_1[0x19b] + 0x24);
  *(undefined4 *)(param_1[0x1b9] + 0x13c) = *(undefined4 *)(param_1[0x19b] + 0x38);
  *(undefined4 *)(param_1[0x1b9] + 0x140) = *(undefined4 *)(param_1[0x19b] + 0x40);
  if (iVar3 != 0) {
    (*(code *)param_1[0x1b6])(param_1[0x1b9]);
    param_1[0x1b9] = 0;
    param_1[0x3a] = 0;
  }
  return iVar3;
}



//==== ossterm @ 00003720 ====

/* __stdcall ossterm,4 */

void ossterm(int param_1)

{
  code *pcVar1;
  int iVar2;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0xe8) != 0)) {
    if (*(FILE **)(param_1 + 0x654) != (FILE *)0x0) {
      _fclose(*(FILE **)(param_1 + 0x654));
      *(undefined4 *)(param_1 + 0x654) = 0;
      if (*(int *)(param_1 + 0x658) != 0) {
        __unlink(*(int *)(param_1 + 0x658));
        _free(*(void **)(param_1 + 0x658));
        *(undefined4 *)(param_1 + 0x658) = 0;
      }
    }
    if (*(int *)(param_1 + 0x630) != 0) {
      _fclose(*(FILE **)(param_1 + 0x18));
      *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x630);
      *(undefined4 *)(param_1 + 0x630) = 0;
    }
    if (*(int *)(param_1 + 0x634) != *(int *)(param_1 + 0x1c)) {
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x634);
    }
    if ((*(int *)(param_1 + 0x6e4) != 0) &&
       (pcVar1 = *(code **)(*(int *)(param_1 + 0x6e4) + 0xc), pcVar1 != (code *)0x0)) {
      (*pcVar1)(param_1);
    }
    if ((*(int *)(param_1 + 0x614) != 0) ||
       ((*(int *)(param_1 + 0x6e4) != 0 && (*(int *)(*(int *)(param_1 + 0x6e4) + 0x174) != 0)))) {
      ossTermIAAPI(param_1);
    }
    if ((*(int *)(param_1 + 0x6e4) != 0) && ((*(uint *)(param_1 + 0x528) & 0x20000) == 0)) {
      ossTerm_ed_Xer(param_1);
      ossTerm_ed_Oer(param_1);
      ossTerm_ed_Json(param_1);
      iVar2 = *(int *)(*(int *)(param_1 + 0x6e4) + 0x23c);
      if (iVar2 != 0) {
        (**(code **)(param_1 + 0x6d8))(iVar2);
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0x6e4) + 0x240);
      if (iVar2 != 0) {
        (**(code **)(param_1 + 0x6d8))(iVar2);
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0x6e4) + 0x2a4);
      if (iVar2 != 0) {
        (**(code **)(param_1 + 0x6d8))(iVar2);
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0x6e4) + 0x2a8);
      if (iVar2 != 0) {
        (**(code **)(param_1 + 0x6d8))(iVar2);
      }
    }
    if (*(int *)(param_1 + 0x6e4) != 0) {
      if (((*(uint *)(param_1 + 0x528) & 0x20000) == 0) &&
         (iVar2 = *(int *)(*(int *)(param_1 + 0x6e4) + 0x1e4), iVar2 != 0)) {
        (**(code **)(param_1 + 0x6d8))(iVar2);
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0x6e4) + 300);
      if (iVar2 != 0) {
        (**(code **)(param_1 + 0x6d8))(iVar2);
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0x6e4) + 0x24c);
      if (iVar2 != 0) {
        (**(code **)(param_1 + 0x6d8))(iVar2);
      }
      (**(code **)(param_1 + 0x6d8))(*(undefined4 *)(param_1 + 0x6e4));
      *(undefined4 *)(param_1 + 0x6e4) = 0;
    }
    *(undefined4 *)(param_1 + 0xf4) = *(undefined4 *)(param_1 + 0x624);
    if ((*(int *)(param_1 + 0x66c) != 0) &&
       (pcVar1 = *(code **)(*(int *)(param_1 + 0x66c) + 0xa0), pcVar1 != (code *)0x0)) {
      (*pcVar1)(param_1);
    }
    *(undefined4 *)(param_1 + 0xe8) = 0;
  }
  return;
}



//==== setDefaultAdditionalFlags @ 00003b50 ====

/* setDefaultAdditionalFlags */

void __cdecl setDefaultAdditionalFlags(int param_1)

{
  byte *pbVar1;
  ushort uVar2;
  
  pbVar1 = (byte *)(*(int *)(param_1 + 0x6e4) + 0x8c);
  *(byte **)(*(int *)(param_1 + 0x6e4) + 0x90) = pbVar1;
  uVar2 = *(ushort *)(*(int *)(param_1 + 0xe8) + 10);
  *pbVar1 = *pbVar1 | 0xf;
  if ((uVar2 & 8) != 0) {
    *pbVar1 = *pbVar1 & 0xf6;
  }
  if ((uVar2 & 4) != 0) {
    *pbVar1 = *pbVar1 & 0xf9;
  }
  if ((uVar2 & 0x40) != 0) {
    *pbVar1 = *pbVar1 & 0xfc;
  }
  if ((char)uVar2 < '\0') {
    *pbVar1 = *pbVar1 & 0xf4;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x6e4) + 0x88) = 4;
  return;
}



//==== setDefaultEncodingRules @ 00003bb0 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* setDefaultEncodingRules */

void __cdecl setDefaultEncodingRules(int param_1)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar1 = *(int *)(*(int *)(param_1 + 0x6e4) + 0x88);
  pbVar2 = *(byte **)(*(int *)(param_1 + 0x6e4) + 0x90);
  if ((((-1 < iVar1) && ((*pbVar2 & 1) != 0)) || ((2 < iVar1 && ((*pbVar2 & 8) != 0)))) ||
     ((6 < iVar1 && ((char)*pbVar2 < '\0')))) {
    uVar4 = 1;
  }
  if ((((0 < iVar1) && ((*pbVar2 & 2) != 0)) || ((1 < iVar1 && ((*pbVar2 & 4) != 0)))) ||
     (((0xe < iVar1 && ((char)pbVar2[1] < '\0')) || ((0xf < iVar1 && ((pbVar2[2] & 1) != 0)))))) {
    uVar4 = uVar4 + 1;
  }
  if (((3 < iVar1) && ((*pbVar2 & 0x10) != 0)) || ((4 < iVar1 && ((*pbVar2 & 0x20) != 0)))) {
    uVar4 = uVar4 + 1;
  }
  if ((7 < iVar1) && ((pbVar2[1] & 1) != 0)) {
    uVar4 = uVar4 + 1;
  }
  if ((9 < iVar1) && ((pbVar2[1] & 4) != 0)) {
    uVar4 = uVar4 + 1;
  }
  if (((0xb < iVar1) && ((pbVar2[1] & 0x10) != 0)) || ((0xc < iVar1 && ((pbVar2[1] & 0x20) != 0))))
  {
    uVar4 = uVar4 + 1;
  }
  if ((0xd < iVar1) && ((pbVar2[1] & 0x40) != 0)) {
    uVar4 = uVar4 + 1;
  }
  if (((1 < uVar4) && (iVar3 = ossSetEncodingRules(param_1,__ossDefaultEncodingRules), iVar3 != 0))
     || (uVar4 == 1)) {
    if ((-1 < iVar1) && ((*pbVar2 & 1) != 0)) {
      ossSetEncodingRules(param_1,0);
      return;
    }
    if ((iVar1 < 1) || ((*pbVar2 & 2) == 0)) {
      if ((0xe < iVar1) && ((char)pbVar2[1] < '\0')) {
        ossSetEncodingRules(param_1,0xc);
        return;
      }
      if ((2 < iVar1) && ((*pbVar2 & 8) != 0)) {
        ossSetEncodingRules(param_1,3);
        return;
      }
      if ((1 < iVar1) && ((*pbVar2 & 4) != 0)) {
        ossSetEncodingRules(param_1,2);
        return;
      }
      if ((0xf < iVar1) && ((pbVar2[2] & 1) != 0)) {
        ossSetEncodingRules(param_1,0xd);
        return;
      }
      if ((3 < iVar1) && ((*pbVar2 & 0x10) != 0)) {
        ossSetEncodingRules(param_1,5);
        return;
      }
      if ((4 < iVar1) && ((*pbVar2 & 0x20) != 0)) {
        ossSetEncodingRules(param_1,6);
        return;
      }
      if ((6 < iVar1) && ((char)*pbVar2 < '\0')) {
        ossSetEncodingRules(param_1,7);
        return;
      }
      if ((7 < iVar1) && ((pbVar2[1] & 1) != 0)) {
        ossSetEncodingRules(param_1,8);
        return;
      }
      if ((0xb < iVar1) && ((pbVar2[1] & 0x10) != 0)) {
        ossSetEncodingRules(param_1,9);
        return;
      }
      if ((0xc < iVar1) && ((pbVar2[1] & 0x20) != 0)) {
        ossSetEncodingRules(param_1,10);
        return;
      }
      if ((0xd < iVar1) && ((pbVar2[1] & 0x40) != 0)) {
        ossSetEncodingRules(param_1,0xb);
        return;
      }
      if (iVar1 < 10) {
        return;
      }
      if ((pbVar2[1] & 4) == 0) {
        return;
      }
    }
    ossSetEncodingRules(param_1,1);
  }
  return;
}



//==== setInvertAlphabet @ 00003dd0 ====

/* WARNING: Removing unreachable block (ram,0x00003f27) */
/* setInvertAlphabet */

void __cdecl setInvertAlphabet(undefined4 param_1,int param_2)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  short sVar9;
  short sVar10;
  int iVar11;
  short sVar12;
  short sVar13;
  int iVar14;
  uint uVar15;
  undefined4 *puVar16;
  int *piVar17;
  int local_c;
  uint local_8;
  
  local_8 = (uint)*(ushort *)(param_2 + 0xe);
  if (0 < (short)*(ushort *)(param_2 + 0xe)) {
    local_c = 0;
    do {
      iVar6 = *(int *)(param_2 + 0x14) + local_c;
      iVar4 = *(int *)(iVar6 + 0x20);
      switch(iVar4) {
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x19:
      case 0x35:
      case 0x36:
        switch(*(undefined4 *)(iVar6 + 8)) {
        case 7:
        case 0x14:
        case 0x15:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1b:
          break;
        default:
          uVar3 = (uint)*(ushort *)(iVar6 + 0x1e);
          if (*(ushort *)(iVar6 + 0x1e) != 0) {
            iVar6 = *(int *)(param_2 + 0x1c);
            uVar1 = *(ushort *)(iVar6 + uVar3 * 4);
            uVar15 = (uint)uVar1;
            if ((iVar4 == 0x35) || (iVar4 == 0x36)) {
              iVar4 = *(int *)(iVar6 + 4 + uVar3 * 4);
              iVar6 = *(int *)(iVar6 + 8 + uVar3 * 4);
              iVar11 = iVar6 + 4;
              if (*(char *)(iVar6 + 0x104) != -1) {
                iVar6 = 0;
                sVar12 = 0;
                if (uVar15 == 0) {
LAB_00003fcc:
                  uVar8 = 0x100 - iVar6;
                  iVar4 = (uVar15 & 0xff) * 0x1010101;
                  piVar17 = (int *)((short)iVar6 + iVar11);
                  for (uVar3 = (uVar8 & 0xffff) >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
                    *piVar17 = iVar4;
                    piVar17 = piVar17 + 1;
                  }
                  sVar10 = (short)iVar6 + (short)uVar8;
                  for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
                    *(char *)piVar17 = (char)iVar4;
                    piVar17 = (int *)((int)piVar17 + 1);
                  }
                }
                else {
                  iVar14 = 0;
                  do {
                    iVar7 = (int)(short)iVar6;
                    if (iVar7 < (int)(uint)*(byte *)(iVar14 + iVar4)) {
                      do {
                        iVar6 = iVar6 + 1;
                        *(char *)(iVar7 + iVar11) = (char)uVar1;
                        iVar7 = (int)(short)iVar6;
                      } while (iVar7 < (int)(uint)*(byte *)(iVar14 + iVar4));
                    }
                    iVar6 = iVar6 + 1;
                    sVar10 = (short)iVar6;
                    *(char *)((uint)*(byte *)(iVar14 + iVar4) + iVar11) = (char)sVar12;
                    sVar12 = sVar12 + 1;
                    iVar14 = (int)sVar12;
                  } while (iVar14 < (int)uVar15);
                  if (sVar10 < 0x100) goto LAB_00003fcc;
                }
                *(undefined1 *)(sVar10 + iVar11) = 0xff;
              }
            }
            else {
              iVar4 = *(int *)(iVar6 + 8 + uVar3 * 4);
              iVar6 = *(int *)(iVar6 + 4 + uVar3 * 4);
              if (*(char *)(iVar4 + 0x80) != -1) {
                sVar12 = 1;
                uVar3 = uVar15 + 0xffff;
                sVar10 = 1;
                sVar9 = 1;
                bVar5 = *(byte *)((uVar15 - 1) + iVar6);
                bVar2 = bVar5 & 0xfe;
                while (bVar2 != 0) {
                  sVar12 = sVar12 + 1;
                  bVar2 = (char)bVar5 >> ((byte)sVar12 & 0x1f);
                }
                if ((uVar3 & 0xfffe) != 0) {
                  do {
                    sVar9 = sVar10 + 1;
                    sVar10 = sVar9;
                  } while ((ushort)((ushort)uVar3 >> ((byte)sVar9 & 0x1f)) != 0);
                }
                sVar10 = 0;
                iVar14 = 0;
                iVar11 = 0;
                do {
                  iVar7 = (int)(short)iVar14;
                  if (iVar7 < (int)(uint)*(byte *)(iVar11 + iVar6)) {
                    do {
                      iVar14 = iVar14 + 1;
                      *(undefined1 *)(iVar7 + iVar4) = 0xff;
                      iVar7 = (int)(short)iVar14;
                    } while (iVar7 < (int)(uint)*(byte *)(iVar11 + iVar6));
                  }
                  if (sVar12 == sVar9) {
                    bVar5 = *(byte *)(iVar11 + iVar6);
                    bVar2 = bVar5;
                  }
                  else {
                    bVar2 = *(byte *)(iVar11 + iVar6);
                    bVar5 = (byte)sVar10;
                  }
                  *(byte *)((uint)bVar2 + iVar4) = bVar5;
                  iVar14 = iVar14 + 1;
                  sVar13 = (short)iVar14;
                  sVar10 = sVar10 + 1;
                  iVar11 = (int)sVar10;
                } while (iVar11 <= (int)(uVar3 & 0xffff));
                if (sVar13 < 0x80) {
                  uVar3 = 0x80 - iVar14;
                  puVar16 = (undefined4 *)(sVar13 + iVar4);
                  for (uVar15 = (uVar3 & 0xffff) >> 2; uVar15 != 0; uVar15 = uVar15 - 1) {
                    *puVar16 = 0xffffffff;
                    puVar16 = puVar16 + 1;
                  }
                  sVar13 = sVar13 + (short)uVar3;
                  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
                    *(undefined1 *)puVar16 = 0xff;
                    puVar16 = (undefined4 *)((int)puVar16 + 1);
                  }
                }
                *(undefined1 *)(sVar13 + iVar4) = 0xff;
              }
            }
          }
        }
      }
      local_c = local_c + 0x28;
      local_8 = local_8 - 1;
    } while (local_8 != 0);
  }
  return;
}



//==== _sprintf @ 00004070 ====

int __cdecl _sprintf(char *__s,char *__format,...)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)___local_stdio_printf_options(__s,0xffffffff,__format,0,&stack0x0000000c);
  iVar2 = ___stdio_common_vsprintf(*puVar1 | 1,puVar1[1]);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  return iVar2;
}



//==== trialMessageAlreadyDisplayed @ 000040b0 ====

/* WARNING: Removing unreachable block (ram,0x00004229) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* trialMessageAlreadyDisplayed */

void __cdecl trialMessageAlreadyDisplayed(void)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  char *pcStack_e0;
  undefined1 local_cc [4];
  undefined4 local_c8 [14];
  undefined1 auStack_90 [20];
  char local_7c [72];
  uint uStack_34;
  uint uStack_18;
  uint local_4;
  
  local_4 = ____security_cookie ^ (uint)local_cc;
  local_c8[0] = 0x20;
  pcStack_e0 = (char *)0x40e9;
  _sprintf(local_7c,s_SOFTWARE_OSS_Nokalva__Inc___s);
  pcStack_e0 = local_7c;
  uStack_e4 = 0x80000002;
  uStack_e8 = (undefined1 *)0x4108;
  iVar2 = (*___imp__RegOpenKeyExA_20)();
  if (iVar2 != 0) {
    uStack_e8 = (undefined1 *)0x0;
    iVar2 = (*___imp__RegCreateKeyExA_36)(0x80000002,auStack_90,0);
    if (iVar2 != 0) {
      uStack_e4 = 0x4148;
      __security_check_cookie(uStack_18 ^ (uint)&pcStack_e0);
      return;
    }
  }
  uStack_e8 = &stack0xffffff28;
  __time64();
  __localtime64();
  _sprintf(&stack0xffffff30,s___2d___2d___4d);
  uStack_e8 = &stack0xffffff24;
  iVar2 = (*___imp__RegQueryValueExA_24)();
  if (iVar2 == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
    local_c8[0]._0_1_ = 0;
    iVar2 = (*___imp__lstrcmpiA_8)(&uStack_e8,local_c8);
    if (iVar2 == 0) goto LAB_00004207;
  }
  pcVar3 = (char *)&uStack_e8;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  (*___imp__RegSetValueExA_24)
            (s_LastTrialMessage,s_LastTrialMessage,0,1,&uStack_e8,
             pcVar3 + (1 - ((int)&uStack_e8 + 1)));
LAB_00004207:
  (*___imp__RegCloseKey_4)(s_LastTrialMessage);
  __security_check_cookie(uStack_34 ^ (uint)&stack0xffffff04);
  return;
}



//==== ___report_rangecheckfailure @ 00005240 ====

/* WARNING: Control flow encountered bad instruction data */

void ___report_rangecheckfailure(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== _fclose @ 00005248 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _fclose(FILE *__stream)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== __unlink @ 00005250 ====

/* WARNING: Control flow encountered bad instruction data */

void __unlink(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== ___stdio_common_vsprintf @ 00005258 ====

/* WARNING: Control flow encountered bad instruction data */

void ___stdio_common_vsprintf(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== __localtime64 @ 00005260 ====

/* WARNING: Control flow encountered bad instruction data */

void __localtime64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== __time64 @ 00005268 ====

/* WARNING: Control flow encountered bad instruction data */

void __time64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== _free @ 00005328 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _free(void *__ptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== ossPrint @ 00005330 ====

/* WARNING: Control flow encountered bad instruction data */

void __cdecl ossPrint(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== ossSetEncodingRules @ 00005338 ====

/* WARNING: Control flow encountered bad instruction data */

void ossSetEncodingRules(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== ossMinit @ 00005340 ====

/* WARNING: Control flow encountered bad instruction data */

void ossMinit(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== ossTermIAAPI @ 00005348 ====

/* WARNING: Control flow encountered bad instruction data */

void ossTermIAAPI(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== __security_check_cookie @ 00005350 ====

/* WARNING: Control flow encountered bad instruction data */

void __fastcall __security_check_cookie(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== _memset @ 00005358 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _memset(void *__s,int __c,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



