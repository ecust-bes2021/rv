//==== __init_em @ 00002300 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __init_em(int param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  bool bVar8;
  int iStack_ec;
  int iStack_e8;
  byte *pbStack_e4;
  byte *pbStack_e0;
  uint uStack_dc;
  undefined1 auStack_c8 [3];
  byte bStack_c5;
  undefined4 uStack_c4;
  byte *pbStack_c0;
  int iStack_bc;
  int iStack_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  byte abStack_a4 [160];
  uint uStack_4;
  
  uStack_4 = ____security_cookie ^ (uint)auStack_c8;
  uStack_ac._0_4_ = (uint)(param_1 == 0);
  uStack_c4 = param_1;
  uStack_b0 = (byte *)(uint)(byte)((param_2[-10] ^ *param_3) + 1);
  pbVar7 = param_3 + 1;
  bStack_c5 = param_3[(int)uStack_b0 * 4 + 10] ^ *param_2;
  iStack_b4 = (int)uStack_b0 * 4;
  iVar6 = (int)param_2 - ((int)uStack_b0 * 4 + 10);
  pbStack_c0 = pbVar7;
  if (uStack_b0 != (byte *)0x0) {
    pbStack_e0 = abStack_a4;
    uStack_dc = 0xa0;
    pbStack_e4 = (byte *)0x238e;
    oss_gethostname();
    pbStack_e4 = (byte *)(param_1 + 0xec);
    iStack_e8 = 0x239a;
    iStack_ec = gethostidex();
    uVar5 = 0;
    if (abStack_a4[0] != 0) {
      pbVar4 = abStack_a4;
      do {
        bVar1 = *pbVar4;
        if ((bVar1 < 0x80) && (((&__ossCharFlags)[(uint)bVar1 * 2] & 8) != 0)) {
          bVar1 = bVar1 & 0xdf;
        }
        pbVar4 = pbVar4 + 1;
        uVar5 = (bVar1 + uVar5) * 0x10 | bVar1 + uVar5 >> 0x1c;
      } while (*pbVar4 != 0);
    }
    pbStack_e0 = uStack_b0;
    iStack_e8 = iVar6;
    pbStack_e4 = pbVar7;
    uStack_dc = uVar5;
    iStack_bc = iStack_ec;
    iVar2 = __init_h();
    if (iVar2 == 0) {
      do {
        pbStack_e0 = abStack_a4;
        uStack_dc = 0xa0;
        pbStack_e4 = (byte *)0x2402;
        oss_gethostname();
        pbStack_e4 = (byte *)(uStack_c4 + 0xec);
        iStack_e8 = 0x2411;
        iVar2 = gethostidex();
        if (iVar2 == 0) break;
        pbStack_e0 = uStack_b0;
        iStack_ec = iVar2;
        iStack_e8 = iVar6;
        pbStack_e4 = pbVar7;
        uStack_dc = uVar5;
        iVar3 = __init_h();
      } while (iVar3 == 0);
      if (((iVar2 == 0) && (uStack_c4 != 0)) && (*(char *)(uStack_c4 + 0x100) == '\0')) {
        *(undefined1 *)(uStack_c4 + 0x100) = 0x45;
      }
    }
  }
  if (bStack_c5 == 0x99) {
    uStack_dc = 0;
    pbStack_e0 = (byte *)0x246f;
    uStack_ac = __time64();
    pbStack_e0 = (byte *)&uStack_ac;
    pbStack_e4 = (byte *)0x2481;
    __gmtime64();
    _strncpy((char *)&iStack_ec,&stack0xffffff2c,3);
    pbStack_e0 = (byte *)((uint)pbStack_e0 & 0xffffff);
    iVar6 = _atoi((char *)&pbStack_e0);
    _strncpy((char *)&uStack_dc,(char *)((int)&uStack_c4 + 3),3);
    _atoi(&stack0xffffff30);
    _strncpy(&stack0xffffff34,(char *)((int)&uStack_b0 + 2),3);
    _atoi((char *)&pbStack_c0);
    uVar5 = iVar6 + 0x76cU & 0x80000003;
    bVar8 = uVar5 == 0;
    if ((int)uVar5 < 0) {
      bVar8 = (uVar5 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (bVar8) {
      iStack_b4 = 100;
    }
  }
  __security_check_cookie(uStack_4 ^ (uint)auStack_c8);
  return;
}



//==== FUN_000023b0 @ 000023b0 ====

void __fastcall
FUN_000023b0(undefined4 param_1,byte *param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,int param_7,int param_8,int param_9,undefined4 param_10,
            undefined4 param_11,undefined4 *param_12,undefined4 param_13,undefined4 param_14)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  bool bVar5;
  uint in_stack_000000d4;
  int iStack_14;
  undefined4 *puStack_8;
  uint uStack_4;
  
  do {
    bVar1 = *param_2;
    if ((bVar1 < 0x80) && (((&__ossCharFlags)[(uint)bVar1 * 2] & 8) != 0)) {
      bVar1 = bVar1 & 0xdf;
    }
    param_2 = param_2 + 1;
    unaff_EBX = (bVar1 + unaff_EBX) * 0x10 | bVar1 + unaff_EBX >> 0x1c;
  } while (*param_2 != 0);
  puStack_8 = param_12;
  iStack_14 = param_9;
  uStack_4 = unaff_EBX;
  iVar2 = __init_h();
  if (iVar2 == 0) {
    do {
      puStack_8 = (undefined4 *)&stack0x00000034;
      uStack_4 = 0xa0;
      oss_gethostname();
      iVar2 = gethostidex();
      if (iVar2 == 0) break;
      puStack_8 = param_12;
      iStack_14 = iVar2;
      uStack_4 = unaff_EBX;
      iVar3 = __init_h();
    } while (iVar3 == 0);
    unaff_EDI = param_8;
    if (((iVar2 == 0) && (param_7 != 0)) && (*(char *)(param_7 + 0x100) == '\0')) {
      *(undefined1 *)(param_7 + 0x100) = 0x45;
    }
  }
  if (param_6._3_1_ == -0x67) {
    uStack_4 = 0;
    puStack_8 = (undefined4 *)0x246f;
    _param_13 = __time64();
    puStack_8 = &param_13;
    __gmtime64();
    param_3 = CONCAT13(*(byte *)(unaff_EBP + 0x2485) ^ *(byte *)(unaff_EDI + 0x2484),
                       CONCAT12(*(byte *)(unaff_EBP + 0x2484) ^ *(byte *)(unaff_EDI + 0x2483),
                                CONCAT11(*(byte *)(unaff_EBP + 0x2483) ^
                                         *(byte *)(unaff_EDI + 0x2482),
                                         *(byte *)(unaff_EDI + 0x2481) ^
                                         *(byte *)(unaff_EBP + 0x2482))));
    param_4._0_1_ = *(byte *)(unaff_EBP + 0x2486) ^ *(byte *)(unaff_EDI + 0x2485);
    param_4._1_1_ = *(byte *)(unaff_EBP + 0x2487) ^ *(byte *)(unaff_EDI + 0x2486);
    param_4._2_1_ = *(byte *)(unaff_EBP + 0x2488) ^ *(byte *)(unaff_EDI + 0x2487);
    param_4._3_1_ = *(byte *)(unaff_EBP + 0x2489) ^ *(byte *)(unaff_EDI + 0x2488);
    param_5 = CONCAT31(param_5._1_3_,*(byte *)(unaff_EBP + 0x248a) ^ *(byte *)(unaff_EDI + 0x2489));
    _strncpy((char *)&iStack_14,(char *)&param_3,3);
    puStack_8 = (undefined4 *)((uint)puStack_8 & 0xffffff);
    iVar2 = _atoi((char *)&puStack_8);
    _strncpy((char *)&uStack_4,(char *)((int)&param_7 + 3),3);
    param_3 = _atoi((char *)&param_4);
    _strncpy((char *)&param_5,(char *)((int)&param_12 + 2),3);
    _atoi((char *)&param_8);
    uVar4 = iVar2 + 0x76cU & 0x80000003;
    bVar5 = uVar4 == 0;
    if ((int)uVar4 < 0) {
      bVar5 = (uVar4 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (bVar5) {
      param_11 = 100;
    }
  }
  param_5 = 0x25ed;
  __security_check_cookie(in_stack_000000d4 ^ (uint)&param_6);
  return;
}



//==== FUN_000023c5 @ 000023c5 ====

void __fastcall
FUN_000023c5(undefined4 param_1,byte *param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,int param_7,int param_8,int param_9,undefined4 param_10,
            undefined4 param_11,undefined4 *param_12,undefined4 param_13,undefined4 param_14)

{
  byte in_AL;
  int iVar1;
  int iVar2;
  uint uVar3;
  uint unaff_EBX;
  int unaff_EBP;
  int unaff_EDI;
  bool bVar4;
  uint in_stack_000000d4;
  int iStack_14;
  undefined4 *puStack_8;
  uint uStack_4;
  
  while( true ) {
    param_2 = param_2 + 1;
    unaff_EBX = (in_AL + unaff_EBX) * 0x10 | in_AL + unaff_EBX >> 0x1c;
    if (*param_2 == 0) break;
    in_AL = *param_2;
    if ((in_AL < 0x80) && (((&__ossCharFlags)[(uint)in_AL * 2] & 8) != 0)) {
      in_AL = in_AL & 0xdf;
    }
  }
  puStack_8 = param_12;
  iStack_14 = param_9;
  uStack_4 = unaff_EBX;
  iVar1 = __init_h();
  if (iVar1 == 0) {
    do {
      puStack_8 = (undefined4 *)&stack0x00000034;
      uStack_4 = 0xa0;
      oss_gethostname();
      iVar1 = gethostidex();
      if (iVar1 == 0) break;
      puStack_8 = param_12;
      iStack_14 = iVar1;
      uStack_4 = unaff_EBX;
      iVar2 = __init_h();
    } while (iVar2 == 0);
    unaff_EDI = param_8;
    if (((iVar1 == 0) && (param_7 != 0)) && (*(char *)(param_7 + 0x100) == '\0')) {
      *(undefined1 *)(param_7 + 0x100) = 0x45;
    }
  }
  if (param_6._3_1_ == -0x67) {
    uStack_4 = 0;
    puStack_8 = (undefined4 *)0x246f;
    _param_13 = __time64();
    puStack_8 = &param_13;
    __gmtime64();
    param_3 = CONCAT13(*(byte *)(unaff_EBP + 0x2485) ^ *(byte *)(unaff_EDI + 0x2484),
                       CONCAT12(*(byte *)(unaff_EBP + 0x2484) ^ *(byte *)(unaff_EDI + 0x2483),
                                CONCAT11(*(byte *)(unaff_EBP + 0x2483) ^
                                         *(byte *)(unaff_EDI + 0x2482),
                                         *(byte *)(unaff_EDI + 0x2481) ^
                                         *(byte *)(unaff_EBP + 0x2482))));
    param_4._0_1_ = *(byte *)(unaff_EBP + 0x2486) ^ *(byte *)(unaff_EDI + 0x2485);
    param_4._1_1_ = *(byte *)(unaff_EBP + 0x2487) ^ *(byte *)(unaff_EDI + 0x2486);
    param_4._2_1_ = *(byte *)(unaff_EBP + 0x2488) ^ *(byte *)(unaff_EDI + 0x2487);
    param_4._3_1_ = *(byte *)(unaff_EBP + 0x2489) ^ *(byte *)(unaff_EDI + 0x2488);
    param_5 = CONCAT31(param_5._1_3_,*(byte *)(unaff_EBP + 0x248a) ^ *(byte *)(unaff_EDI + 0x2489));
    _strncpy((char *)&iStack_14,(char *)&param_3,3);
    puStack_8 = (undefined4 *)((uint)puStack_8 & 0xffffff);
    iVar1 = _atoi((char *)&puStack_8);
    _strncpy((char *)&uStack_4,(char *)((int)&param_7 + 3),3);
    param_3 = _atoi((char *)&param_4);
    _strncpy((char *)&param_5,(char *)((int)&param_12 + 2),3);
    _atoi((char *)&param_8);
    uVar3 = iVar1 + 0x76cU & 0x80000003;
    bVar4 = uVar3 == 0;
    if ((int)uVar3 < 0) {
      bVar4 = (uVar3 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (bVar4) {
      param_11 = 100;
    }
  }
  param_5 = 0x25ed;
  __security_check_cookie(in_stack_000000d4 ^ (uint)&param_6);
  return;
}



//==== FUN_000023d9 @ 000023d9 ====

void FUN_000023d9(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 *param_10,undefined4 param_11,undefined4 param_12)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  int unaff_EDI;
  bool bVar4;
  uint in_stack_000000d4;
  int iStack_14;
  undefined4 *puStack_8;
  
  puStack_8 = param_10;
  iStack_14 = in_EAX;
  iVar1 = __init_h();
  if (iVar1 == 0) {
    do {
      puStack_8 = (undefined4 *)&stack0x00000034;
      oss_gethostname();
      iVar1 = gethostidex();
      if (iVar1 == 0) break;
      puStack_8 = param_10;
      iStack_14 = iVar1;
      iVar2 = __init_h();
    } while (iVar2 == 0);
    unaff_EDI = param_6;
    if (((iVar1 == 0) && (param_5 != 0)) && (*(char *)(param_5 + 0x100) == '\0')) {
      *(undefined1 *)(param_5 + 0x100) = 0x45;
    }
  }
  if (param_4._3_1_ == -0x67) {
    puStack_8 = (undefined4 *)0x246f;
    _param_11 = __time64();
    puStack_8 = &param_11;
    __gmtime64();
    param_1 = CONCAT13(*(byte *)(unaff_EBP + 0x2485) ^ *(byte *)(unaff_EDI + 0x2484),
                       CONCAT12(*(byte *)(unaff_EBP + 0x2484) ^ *(byte *)(unaff_EDI + 0x2483),
                                CONCAT11(*(byte *)(unaff_EBP + 0x2483) ^
                                         *(byte *)(unaff_EDI + 0x2482),
                                         *(byte *)(unaff_EDI + 0x2481) ^
                                         *(byte *)(unaff_EBP + 0x2482))));
    param_2._0_1_ = *(byte *)(unaff_EBP + 0x2486) ^ *(byte *)(unaff_EDI + 0x2485);
    param_2._1_1_ = *(byte *)(unaff_EBP + 0x2487) ^ *(byte *)(unaff_EDI + 0x2486);
    param_2._2_1_ = *(byte *)(unaff_EBP + 0x2488) ^ *(byte *)(unaff_EDI + 0x2487);
    param_2._3_1_ = *(byte *)(unaff_EBP + 0x2489) ^ *(byte *)(unaff_EDI + 0x2488);
    param_3 = CONCAT31(param_3._1_3_,*(byte *)(unaff_EBP + 0x248a) ^ *(byte *)(unaff_EDI + 0x2489));
    _strncpy((char *)&iStack_14,(char *)&param_1,3);
    puStack_8 = (undefined4 *)((uint)puStack_8 & 0xffffff);
    iVar1 = _atoi((char *)&puStack_8);
    _strncpy(&stack0xfffffffc,(char *)((int)&param_5 + 3),3);
    param_1 = _atoi((char *)&param_2);
    _strncpy((char *)&param_3,(char *)((int)&param_10 + 2),3);
    _atoi((char *)&param_6);
    uVar3 = iVar1 + 0x76cU & 0x80000003;
    bVar4 = uVar3 == 0;
    if ((int)uVar3 < 0) {
      bVar4 = (uVar3 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (bVar4) {
      param_9 = 100;
    }
  }
  param_3 = 0x25ed;
  __security_check_cookie(in_stack_000000d4 ^ (uint)&param_4);
  return;
}



//==== FUN_000023f3 @ 000023f3 ====

void FUN_000023f3(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 *param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int unaff_EBP;
  bool bVar4;
  uint in_stack_000000d4;
  int iStack_14;
  undefined4 *puStack_8;
  
  do {
    puStack_8 = (undefined4 *)&stack0x00000034;
    oss_gethostname();
    iVar1 = gethostidex();
    if (iVar1 == 0) break;
    puStack_8 = param_10;
    iStack_14 = iVar1;
    iVar2 = __init_h();
  } while (iVar2 == 0);
  iVar2 = param_6;
  if (((iVar1 == 0) && (param_5 != 0)) && (*(char *)(param_5 + 0x100) == '\0')) {
    *(undefined1 *)(param_5 + 0x100) = 0x45;
  }
  if (param_4._3_1_ == -0x67) {
    puStack_8 = (undefined4 *)0x246f;
    _param_11 = __time64();
    puStack_8 = &param_11;
    __gmtime64();
    param_1 = CONCAT13(*(byte *)(unaff_EBP + 0x2485) ^ *(byte *)(iVar2 + 0x2484),
                       CONCAT12(*(byte *)(unaff_EBP + 0x2484) ^ *(byte *)(iVar2 + 0x2483),
                                CONCAT11(*(byte *)(unaff_EBP + 0x2483) ^ *(byte *)(iVar2 + 0x2482),
                                         *(byte *)(iVar2 + 0x2481) ^ *(byte *)(unaff_EBP + 0x2482)))
                      );
    param_2._0_1_ = *(byte *)(unaff_EBP + 0x2486) ^ *(byte *)(iVar2 + 0x2485);
    param_2._1_1_ = *(byte *)(unaff_EBP + 0x2487) ^ *(byte *)(iVar2 + 0x2486);
    param_2._2_1_ = *(byte *)(unaff_EBP + 0x2488) ^ *(byte *)(iVar2 + 0x2487);
    param_2._3_1_ = *(byte *)(unaff_EBP + 0x2489) ^ *(byte *)(iVar2 + 0x2488);
    param_3 = CONCAT31(param_3._1_3_,*(byte *)(unaff_EBP + 0x248a) ^ *(byte *)(iVar2 + 0x2489));
    _strncpy((char *)&iStack_14,(char *)&param_1,3);
    puStack_8 = (undefined4 *)((uint)puStack_8 & 0xffffff);
    iVar1 = _atoi((char *)&puStack_8);
    _strncpy(&stack0xfffffffc,(char *)((int)&param_5 + 3),3);
    param_1 = _atoi((char *)&param_2);
    _strncpy((char *)&param_3,(char *)((int)&param_10 + 2),3);
    _atoi((char *)&param_6);
    uVar3 = iVar1 + 0x76cU & 0x80000003;
    bVar4 = uVar3 == 0;
    if ((int)uVar3 < 0) {
      bVar4 = (uVar3 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (bVar4) {
      param_9 = 100;
    }
  }
  param_3 = 0x25ed;
  __security_check_cookie(in_stack_000000d4 ^ (uint)&param_4);
  return;
}



//==== FUN_0000242e @ 0000242e ====

void FUN_0000242e(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int unaff_EDI;
  bool bVar3;
  uint in_stack_000000d4;
  char acStack_14 [8];
  int iStack_c;
  undefined4 *puStack_8;
  char acStack_4 [4];
  
  iVar1 = param_6;
  if (((unaff_EDI == 0) && (param_5 != 0)) && (*(char *)(param_5 + 0x100) == '\0')) {
    *(undefined1 *)(param_5 + 0x100) = 0x45;
  }
  if (param_4._3_1_ == -0x67) {
    acStack_4[0] = '\0';
    acStack_4[1] = '\0';
    acStack_4[2] = '\0';
    acStack_4[3] = '\0';
    puStack_8 = (undefined4 *)0x246f;
    _param_11 = __time64();
    puStack_8 = &param_11;
    iStack_c = 0x2481;
    __gmtime64();
    param_1 = CONCAT13(*(byte *)(iStack_c + 4 + unaff_EBP) ^ *(byte *)(iVar1 + 3 + iStack_c),
                       CONCAT12(*(byte *)(iStack_c + 3 + unaff_EBP) ^
                                *(byte *)(iVar1 + 2 + iStack_c),
                                CONCAT11(*(byte *)(iStack_c + 2 + unaff_EBP) ^
                                         *(byte *)(iVar1 + 1 + iStack_c),
                                         *(byte *)(iVar1 + iStack_c) ^
                                         *(byte *)(iStack_c + 1 + unaff_EBP))));
    param_2._0_1_ = *(byte *)(iStack_c + 5 + unaff_EBP) ^ *(byte *)(iVar1 + 4 + iStack_c);
    param_2._1_1_ = *(byte *)(iStack_c + 6 + unaff_EBP) ^ *(byte *)(iVar1 + 5 + iStack_c);
    param_2._2_1_ = *(byte *)(iStack_c + 7 + unaff_EBP) ^ *(byte *)(iVar1 + 6 + iStack_c);
    param_2._3_1_ = *(byte *)(iStack_c + 8 + unaff_EBP) ^ *(byte *)(iVar1 + 7 + iStack_c);
    param_3 = CONCAT31(param_3._1_3_,
                       *(byte *)(iStack_c + 9 + unaff_EBP) ^ *(byte *)(iVar1 + 8 + iStack_c));
    _strncpy(acStack_14,(char *)&param_1,3);
    puStack_8 = (undefined4 *)((uint)puStack_8 & 0xffffff);
    iVar1 = _atoi((char *)&puStack_8);
    _strncpy(acStack_4,(char *)((int)&param_5 + 3),3);
    param_1 = _atoi((char *)&param_2);
    _strncpy((char *)&param_3,(char *)((int)register0x00000010 + 0x2a),3);
    _atoi((char *)&param_6);
    uVar2 = iVar1 + 0x76cU & 0x80000003;
    bVar3 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar3 = (uVar2 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (bVar3) {
      param_9 = 100;
    }
  }
  param_3 = 0x25ed;
  __security_check_cookie(in_stack_000000d4 ^ (uint)&param_4);
  return;
}



//==== FUN_00002459 @ 00002459 ====

void FUN_00002459(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  bool bVar3;
  uint in_stack_000000d4;
  char acStack_14 [8];
  int iStack_c;
  undefined4 *puStack_8;
  char acStack_4 [4];
  
  iVar1 = param_6;
  if (param_4._3_1_ == -0x67) {
    acStack_4[0] = '\0';
    acStack_4[1] = '\0';
    acStack_4[2] = '\0';
    acStack_4[3] = '\0';
    puStack_8 = (undefined4 *)0x246f;
    _param_11 = __time64();
    puStack_8 = &param_11;
    iStack_c = 0x2481;
    __gmtime64();
    param_1 = CONCAT13(*(byte *)(iStack_c + 4 + unaff_EBP) ^ *(byte *)(iVar1 + 3 + iStack_c),
                       CONCAT12(*(byte *)(iStack_c + 3 + unaff_EBP) ^
                                *(byte *)(iVar1 + 2 + iStack_c),
                                CONCAT11(*(byte *)(iStack_c + 2 + unaff_EBP) ^
                                         *(byte *)(iVar1 + 1 + iStack_c),
                                         *(byte *)(iVar1 + iStack_c) ^
                                         *(byte *)(iStack_c + 1 + unaff_EBP))));
    param_2._0_1_ = *(byte *)(iStack_c + 5 + unaff_EBP) ^ *(byte *)(iVar1 + 4 + iStack_c);
    param_2._1_1_ = *(byte *)(iStack_c + 6 + unaff_EBP) ^ *(byte *)(iVar1 + 5 + iStack_c);
    param_2._2_1_ = *(byte *)(iStack_c + 7 + unaff_EBP) ^ *(byte *)(iVar1 + 6 + iStack_c);
    param_2._3_1_ = *(byte *)(iStack_c + 8 + unaff_EBP) ^ *(byte *)(iVar1 + 7 + iStack_c);
    param_3 = CONCAT31(param_3._1_3_,
                       *(byte *)(iStack_c + 9 + unaff_EBP) ^ *(byte *)(iVar1 + 8 + iStack_c));
    _strncpy(acStack_14,(char *)&param_1,3);
    puStack_8 = (undefined4 *)((uint)puStack_8 & 0xffffff);
    iVar1 = _atoi((char *)&puStack_8);
    _strncpy(acStack_4,(char *)((int)&param_5 + 3),3);
    param_1 = _atoi((char *)&param_2);
    _strncpy((char *)&param_3,(char *)((int)register0x00000010 + 0x2a),3);
    _atoi((char *)&param_6);
    uVar2 = iVar1 + 0x76cU & 0x80000003;
    bVar3 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar3 = (uVar2 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (bVar3) {
      param_9 = 100;
    }
  }
  param_3 = 0x25ed;
  __security_check_cookie(in_stack_000000d4 ^ (uint)&param_4);
  return;
}



//==== FUN_0000245d @ 0000245d ====

void FUN_0000245d(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  int unaff_EBP;
  int unaff_EDI;
  bool bVar3;
  undefined4 in_stack_00000024;
  undefined4 in_stack_0000002c;
  undefined4 in_stack_00000030;
  uint in_stack_000000d4;
  char acStack_14 [8];
  int iStack_c;
  undefined4 *puStack_8;
  char acStack_4 [4];
  
  if (param_4._3_1_ == -0x67) {
    acStack_4[0] = '\0';
    acStack_4[1] = '\0';
    acStack_4[2] = '\0';
    acStack_4[3] = '\0';
    puStack_8 = (undefined4 *)0x246f;
    _in_stack_0000002c = __time64();
    puStack_8 = &stack0x0000002c;
    iStack_c = 0x2481;
    __gmtime64();
    param_1 = CONCAT13(*(byte *)(iStack_c + 4 + unaff_EBP) ^ *(byte *)(unaff_EDI + 3 + iStack_c),
                       CONCAT12(*(byte *)(iStack_c + 3 + unaff_EBP) ^
                                *(byte *)(unaff_EDI + 2 + iStack_c),
                                CONCAT11(*(byte *)(iStack_c + 2 + unaff_EBP) ^
                                         *(byte *)(unaff_EDI + 1 + iStack_c),
                                         *(byte *)(unaff_EDI + iStack_c) ^
                                         *(byte *)(iStack_c + 1 + unaff_EBP))));
    param_2._0_1_ = *(byte *)(iStack_c + 5 + unaff_EBP) ^ *(byte *)(unaff_EDI + 4 + iStack_c);
    param_2._1_1_ = *(byte *)(iStack_c + 6 + unaff_EBP) ^ *(byte *)(unaff_EDI + 5 + iStack_c);
    param_2._2_1_ = *(byte *)(iStack_c + 7 + unaff_EBP) ^ *(byte *)(unaff_EDI + 6 + iStack_c);
    param_2._3_1_ = *(byte *)(iStack_c + 8 + unaff_EBP) ^ *(byte *)(unaff_EDI + 7 + iStack_c);
    param_3 = CONCAT31(param_3._1_3_,
                       *(byte *)(iStack_c + 9 + unaff_EBP) ^ *(byte *)(unaff_EDI + 8 + iStack_c));
    _strncpy(acStack_14,(char *)&param_1,3);
    puStack_8 = (undefined4 *)((uint)puStack_8 & 0xffffff);
    iVar1 = _atoi((char *)&puStack_8);
    _strncpy(acStack_4,(char *)((int)&param_5 + 3),3);
    param_1 = _atoi((char *)&param_2);
    _strncpy((char *)&param_3,&stack0x0000002a,3);
    _atoi(&stack0x00000018);
    uVar2 = iVar1 + 0x76cU & 0x80000003;
    bVar3 = uVar2 == 0;
    if ((int)uVar2 < 0) {
      bVar3 = (uVar2 - 1 | 0xfffffffc) == 0xffffffff;
    }
    if (bVar3) {
      in_stack_00000024 = 100;
    }
  }
  param_3 = 0x25ed;
  __security_check_cookie(in_stack_000000d4 ^ (uint)&param_4);
  return;
}



//==== FUN_0000256e @ 0000256e ====

void FUN_0000256e(void)

{
  bool in_ZF;
  undefined4 uStack0000000c;
  undefined4 in_stack_00000014;
  undefined4 in_stack_00000024;
  uint in_stack_000000d4;
  
  if (in_ZF) {
    in_stack_00000024 = 100;
  }
  uStack0000000c = 0x25ed;
  __security_check_cookie(in_stack_000000d4 ^ (uint)&stack0x00000010);
  return;
}



//==== FUN_00002599 @ 00002599 ====

void FUN_00002599(void)

{
  undefined4 uStack0000000c;
  undefined4 in_stack_00000014;
  uint in_stack_000000d4;
  
  uStack0000000c = 0x25ed;
  __security_check_cookie(in_stack_000000d4 ^ (uint)&stack0x00000010);
  return;
}



//==== FUN_000025a0 @ 000025a0 ====

void FUN_000025a0(void)

{
  undefined4 uStack0000000c;
  undefined4 in_stack_00000014;
  uint in_stack_000000d4;
  
  uStack0000000c = 0x25ed;
  __security_check_cookie(in_stack_000000d4 ^ (uint)&stack0x00000010);
  return;
}



//==== FUN_000025a5 @ 000025a5 ====

void FUN_000025a5(void)

{
  undefined4 uStack0000000c;
  undefined4 in_stack_00000014;
  uint in_stack_000000d4;
  
  uStack0000000c = 0x25ed;
  __security_check_cookie(in_stack_000000d4 ^ (uint)&stack0x00000010);
  return;
}



//==== FUN_000025c2 @ 000025c2 ====

void FUN_000025c2(void)

{
  undefined4 uStack0000000c;
  undefined4 in_stack_00000014;
  uint in_stack_000000d4;
  
  uStack0000000c = 0x25ed;
  __security_check_cookie(in_stack_000000d4 ^ (uint)&stack0x00000010);
  return;
}



//==== FUN_000025d4 @ 000025d4 ====

void FUN_000025d4(void)

{
  undefined4 uStack0000000c;
  uint in_stack_000000d4;
  
  uStack0000000c = 0x25ed;
  __security_check_cookie(in_stack_000000d4 ^ (uint)&stack0x00000010);
  return;
}



//==== FUN_000025d9 @ 000025d9 ====

void FUN_000025d9(void)

{
  undefined4 uStack0000000c;
  uint in_stack_000000d4;
  
  uStack0000000c = 0x25ed;
  __security_check_cookie(in_stack_000000d4 ^ (uint)&stack0x00000010);
  return;
}



//==== FUN_000025db @ 000025db ====

void FUN_000025db(void)

{
  undefined4 uStack0000000c;
  uint in_stack_000000d4;
  
  uStack0000000c = 0x25ed;
  __security_check_cookie(in_stack_000000d4 ^ (uint)&stack0x00000010);
  return;
}



//==== __init_h @ 00002600 ====

undefined4 __init_h(int param_1,int param_2,byte *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_4) {
    iVar1 = param_2 - (int)param_3;
    iVar2 = param_2 - (int)param_3;
    iVar3 = param_2 - (int)param_3;
    param_2 = param_2 - (int)param_3;
    do {
      if (CONCAT31(CONCAT21(CONCAT11(param_3[iVar1] ^ *param_3,param_3[1] ^ param_3[iVar2 + 1]),
                            param_3[2] ^ param_3[iVar3 + 2]),param_3[3] ^ param_3[param_2 + 3]) ==
          ((param_5 + param_1) * 0x10 | (uint)(param_5 + param_1) >> 0x1c)) {
        return 1;
      }
      iVar4 = iVar4 + 1;
      param_3 = param_3 + 4;
    } while (iVar4 < param_4);
  }
  return 0;
}



//==== FUN_00002651 @ 00002651 ====

undefined4 FUN_00002651(void)

{
  byte *in_EAX;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int unaff_EDI;
  int in_stack_00000010;
  int in_stack_00000018;
  int in_stack_00000024;
  int in_stack_00000028;
  
  do {
    if (CONCAT31(CONCAT21(CONCAT11(in_EAX[in_stack_00000018] ^ *in_EAX,
                                   in_EAX[unaff_ESI] ^ in_EAX[in_stack_00000028]),
                          in_EAX[2] ^ in_EAX[in_stack_00000024]),
                 in_EAX[3] ^ in_EAX[in_stack_00000010]) == unaff_EBP) {
      return 1;
    }
    unaff_EDI = unaff_EDI + 1;
    in_EAX = in_EAX + 4;
    unaff_ESI = 1;
  } while (unaff_EDI < unaff_EBX);
  return 0;
}



//==== FUN_000026b2 @ 000026b2 ====

undefined4 FUN_000026b2(void)

{
  return 0;
}



//==== FUN_000026ba @ 000026ba ====

undefined4 FUN_000026ba(void)

{
  return 1;
}



//==== __init_hi @ 000026d0 ====

void __init_hi(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  oss_gethostname(param_3,param_4);
  uVar1 = gethostidex(param_1 + 0xec);
  *param_2 = uVar1;
  return;
}



//==== __init_nd @ 00002700 ====

uint __init_nd(byte *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = 0;
  bVar1 = *param_1;
  while (bVar1 != 0) {
    if (((param_2 != 0) && (bVar1 < 0x80)) && (((&__ossCharFlags)[(uint)bVar1 * 2] & 8) != 0)) {
      bVar1 = bVar1 & 0xdf;
    }
    param_1 = param_1 + 1;
    uVar2 = (bVar1 + uVar2) * 0x10 | bVar1 + uVar2 >> 0x1c;
    bVar1 = *param_1;
  }
  return uVar2;
}



//==== FUN_00002712 @ 00002712 ====

uint __fastcall FUN_00002712(undefined4 param_1,byte *param_2)

{
  byte in_AL;
  uint unaff_ESI;
  int unaff_EDI;
  
  do {
    if (((unaff_EDI != 0) && (in_AL < 0x80)) && (((&__ossCharFlags)[(uint)in_AL * 2] & 8) != 0)) {
      in_AL = in_AL & 0xdf;
    }
    param_2 = param_2 + 1;
    unaff_ESI = (in_AL + unaff_ESI) * 0x10 | in_AL + unaff_ESI >> 0x1c;
    in_AL = *param_2;
  } while (in_AL != 0);
  return unaff_ESI;
}



//==== FUN_00002729 @ 00002729 ====

uint __fastcall FUN_00002729(undefined4 param_1,byte *param_2)

{
  byte in_AL;
  uint unaff_ESI;
  int unaff_EDI;
  
  while( true ) {
    param_2 = param_2 + 1;
    unaff_ESI = (in_AL + unaff_ESI) * 0x10 | in_AL + unaff_ESI >> 0x1c;
    in_AL = *param_2;
    if (in_AL == 0) break;
    if (((unaff_EDI != 0) && (in_AL < 0x80)) && (((&__ossCharFlags)[(uint)in_AL * 2] & 8) != 0)) {
      in_AL = in_AL & 0xdf;
    }
  }
  return unaff_ESI;
}



//==== FUN_0000273b @ 0000273b ====

void FUN_0000273b(void)

{
  return;
}



//==== _gmtime @ 00002740 ====

/* WARNING: Control flow encountered bad instruction data */

void _gmtime(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== ossInitRootContext1 @ 00002750 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* __stdcall ossInitRootContext1,8 */

void ossInitRootContext1(undefined4 param_1,undefined4 param_2)

{
  ossInitRootContext(param_1,param_2);
  ___init_nl = __init_em;
  return;
}



//==== _time @ 00002770 ====

/* WARNING: Control flow encountered bad instruction data */

void _time(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== _atoi @ 00003778 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int _atoi(char *__nptr)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== _strncpy @ 00003780 ====

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

char * _strncpy(char *__dest,char *__src,size_t __n)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== __gmtime64 @ 00003788 ====

/* WARNING: Control flow encountered bad instruction data */

void __gmtime64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== __time64 @ 00003790 ====

/* WARNING: Control flow encountered bad instruction data */

void __time64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== ossInitRootContext @ 00003798 ====

/* WARNING: Control flow encountered bad instruction data */

void ossInitRootContext(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== oss_gethostname @ 000037a0 ====

/* WARNING: Control flow encountered bad instruction data */

void __cdecl oss_gethostname(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== gethostidex @ 000037a8 ====

/* WARNING: Control flow encountered bad instruction data */

void __cdecl gethostidex(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== __security_check_cookie @ 000037b0 ====

/* WARNING: Control flow encountered bad instruction data */

void __fastcall __security_check_cookie(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



