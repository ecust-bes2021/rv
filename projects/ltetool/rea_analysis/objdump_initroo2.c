//==== __init_em @ 00002300 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __init_em(int param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  undefined1 auStack_f8 [3];
  byte bStack_f5;
  byte *pbStack_f4;
  byte *pbStack_f0;
  uint uStack_ec;
  byte bStack_e5;
  int iStack_e4;
  uint uStack_e0;
  int iStack_dc;
  undefined4 uStack_d8;
  undefined8 uStack_d4;
  uint uStack_cc;
  uint uStack_c8;
  int iStack_c4;
  uint *puStack_c0;
  uint auStack_bc [6];
  byte abStack_a4 [160];
  uint uStack_4;
  
  uStack_4 = ____security_cookie ^ (uint)auStack_f8;
  iStack_e4 = param_1;
  bStack_f5 = *param_3 ^ *param_2;
  pbStack_f4 = param_2 + -2;
  uStack_d8 = 0;
  pbVar10 = param_3 + 0xd;
  uStack_e0 = (uint)CONCAT11(param_2[-1] ^ param_3[0xc],param_3[0xb] ^ *pbStack_f4);
  pbVar9 = (byte *)uStack_d4;
  pbVar12 = (byte *)uStack_d4;
  if (uStack_e0 != 0) {
    pbVar12 = pbStack_f4 + uStack_e0 * -4;
    iVar6 = ((int)((uStack_e0 - 1) + ((int)(uStack_e0 - 1) >> 0x1f & 3U)) >> 2) + 1;
    pbStack_f4 = pbVar12 + -iVar6;
    pbVar9 = pbVar10 + iVar6;
  }
  pbStack_f0 = pbVar10;
  if (bStack_f5 == 0x99) {
    uStack_d4 = __time64(0);
    iVar6 = __gmtime64(&uStack_d4);
    uVar11 = (uint)CONCAT11(pbStack_f0[1] ^ pbStack_f4[-3],*pbVar10 ^ pbStack_f4[-4]);
    bVar5 = pbStack_f0[2];
    bVar1 = pbStack_f4[-2];
    pbVar10 = pbStack_f0 + 3;
    pbStack_f0 = pbStack_f0 + 4;
    bVar2 = *pbVar10;
    bVar3 = pbStack_f4[-1];
    uVar7 = *(int *)(iVar6 + 0x14) + 0x76c;
    *(uint *)(iVar6 + 0x14) = uVar7;
    if (((int)uVar11 < (int)uVar7) ||
       ((uVar7 == uVar11 &&
        ((int)(uint)CONCAT11(bVar2 ^ bVar3,bVar5 ^ bVar1) <= *(int *)(iVar6 + 0x1c))))) {
      uStack_d8 = 1;
    }
    pbVar9 = pbVar9 + 4;
  }
  if (uStack_e0 != 0) {
    uVar7 = 0;
    uStack_cc = 0;
    auStack_bc[3] = 0;
    uStack_ec = 0;
    auStack_bc[4] = 0;
    auStack_bc[5] = 0;
    auStack_bc[0] = 0;
    uStack_c8 = 0;
    auStack_bc[1] = 0;
    auStack_bc[2] = 0;
    iStack_dc = 0;
    bStack_f5 = 0;
    if (uStack_e0 != 0) {
      do {
        uVar11 = 0;
        iVar6 = 4;
        do {
          bVar5 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          bVar1 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          uVar11 = uVar11 << 8 | (uint)(bVar5 ^ bVar1);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        if (bStack_f5 == 0) {
          bStack_f5 = *pbStack_f0;
          pbStack_f0 = pbStack_f0 + 1;
          bStack_f5 = bStack_f5 ^ *pbStack_f4;
          pbStack_f4 = pbStack_f4 + 1;
        }
        bStack_e5 = bStack_f5 & 3;
        iStack_c4 = (uint)(byte)(bStack_e5 - 1) * 4;
        puStack_c0 = auStack_bc + (byte)(bStack_e5 - 1) + 3;
        if (*puStack_c0 == 0) {
          iVar6 = iStack_e4;
          uVar4 = uStack_d4;
          if (((bStack_f5 & 2) != 0) && (uVar7 == 0)) {
            pbVar10 = (byte *)ossGetUserNameR(iStack_e4);
            iVar6 = iStack_e4;
            uVar4 = CONCAT44(uStack_d4._4_4_,pbVar10);
            if (pbVar10 != (byte *)0x0) {
              uStack_ec = 0;
              if (*pbVar10 != 0) {
                bVar5 = *pbVar10;
                uStack_ec = 0;
                pbVar8 = pbVar10;
                do {
                  uVar7 = (uint)bVar5;
                  pbVar8 = pbVar8 + 1;
                  bVar5 = *pbVar8;
                  uStack_ec = (uStack_ec + uVar7) * 0x10 | uStack_ec + uVar7 >> 0x1c;
                } while (bVar5 != 0);
              }
              uStack_d4._0_4_ = pbVar10;
              auStack_bc[4] = uStack_ec;
              (**(code **)(iStack_e4 + 8))(pbVar10);
              uStack_c8 = uStack_ec;
              auStack_bc[1] = uStack_ec;
              uVar4 = CONCAT44(uStack_d4._4_4_,(byte *)uStack_d4);
            }
          }
          uStack_d4 = uVar4;
          if (((bStack_f5 & 1) != 0) && (uStack_cc == 0)) {
            oss_gethostname(abStack_a4,0xa0);
            iVar6 = gethostidex(iVar6 + 0xec);
            uStack_d4 = CONCAT44(uStack_d4._4_4_,iVar6);
            auStack_bc[0] = 0;
            if (abStack_a4[0] != 0) {
              pbVar10 = abStack_a4;
              do {
                bVar5 = *pbVar10;
                if ((bVar5 < 0x80) && (((&__ossCharFlags)[(uint)bVar5 * 2] & 8) != 0)) {
                  bVar5 = bVar5 & 0xdf;
                }
                pbVar10 = pbVar10 + 1;
                auStack_bc[0] = (bVar5 + auStack_bc[0]) * 0x10 | bVar5 + auStack_bc[0] >> 0x1c;
              } while (*pbVar10 != 0);
            }
            uStack_cc = (iVar6 + auStack_bc[0]) * 0x10 | iVar6 + auStack_bc[0] >> 0x1c;
            auStack_bc[3] = uStack_cc;
          }
          uVar7 = uStack_ec;
          if (bStack_e5 == 3) {
            *puStack_c0 = uStack_ec;
            *puStack_c0 = (auStack_bc[4] + auStack_bc[3]) * 0x10 |
                          auStack_bc[4] + auStack_bc[3] >> 0x1c;
            *(uint *)((int)auStack_bc + iStack_c4) = uStack_c8;
            *(uint *)((int)auStack_bc + iStack_c4) =
                 (auStack_bc[1] + auStack_bc[0]) * 0x10 | auStack_bc[1] + auStack_bc[0] >> 0x1c;
            uStack_cc = auStack_bc[3];
            uStack_ec = auStack_bc[4];
            uStack_c8 = auStack_bc[1];
            uVar7 = auStack_bc[4];
          }
        }
        if ((uVar11 == *puStack_c0) || (uVar11 == *(uint *)((int)auStack_bc + iStack_c4))) break;
        iStack_dc = iStack_dc + 1;
        bStack_f5 = bStack_f5 >> 2;
      } while (iStack_dc < (int)uStack_e0);
    }
  }
  __security_check_cookie(uStack_4 ^ (uint)auStack_f8);
  return;
}



//==== FUN_00002394 @ 00002394 ====

void FUN_00002394(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *unaff_ESI;
  uint uVar13;
  undefined4 in_stack_00000010;
  byte *in_stack_00000014;
  byte *in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  undefined4 in_stack_00000030;
  byte *in_stack_00000034;
  undefined4 in_stack_00000038;
  uint in_stack_0000003c;
  uint in_stack_00000040;
  int in_stack_00000044;
  uint *in_stack_00000048;
  uint in_stack_0000004c;
  uint in_stack_00000050;
  undefined4 in_stack_00000054;
  uint in_stack_00000058;
  uint in_stack_0000005c;
  undefined4 in_stack_00000060;
  byte in_stack_00000064;
  uint in_stack_00000104;
  
  pbVar12 = in_stack_00000034;
  pbVar7 = in_stack_00000034;
  if (in_stack_00000010._3_1_ == 0x99) {
    _in_stack_00000034 = __time64(0);
    iVar6 = __gmtime64(&stack0x00000034);
    uVar13 = (uint)CONCAT11(in_stack_00000018[1] ^ in_stack_00000014[-3],
                            *unaff_ESI ^ in_stack_00000014[-4]);
    bVar5 = in_stack_00000018[2];
    bVar1 = in_stack_00000014[-2];
    pbVar7 = in_stack_00000018 + 3;
    in_stack_00000018 = in_stack_00000018 + 4;
    bVar2 = *pbVar7;
    bVar3 = in_stack_00000014[-1];
    uVar8 = *(int *)(iVar6 + 0x14) + 0x76c;
    *(uint *)(iVar6 + 0x14) = uVar8;
    if (((int)uVar13 < (int)uVar8) ||
       ((uVar8 == uVar13 &&
        ((int)(uint)CONCAT11(bVar2 ^ bVar3,bVar5 ^ bVar1) <= *(int *)(iVar6 + 0x1c))))) {
      in_stack_00000030 = 1;
    }
    pbVar7 = pbVar12 + 4;
  }
  if (in_stack_00000028 != 0) {
    uVar8 = 0;
    in_stack_0000003c = 0;
    in_stack_00000058 = 0;
    in_stack_0000001c = 0;
    in_stack_0000005c = 0;
    in_stack_00000060 = 0;
    in_stack_0000004c = 0;
    in_stack_00000040 = 0;
    in_stack_00000050 = 0;
    in_stack_00000054 = 0;
    in_stack_0000002c = 0;
    in_stack_00000010._3_1_ = 0;
    if (in_stack_00000028 != 0) {
      do {
        uVar13 = 0;
        iVar6 = 4;
        do {
          bVar5 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          bVar1 = *pbVar12;
          pbVar12 = pbVar12 + 1;
          uVar13 = uVar13 << 8 | (uint)(bVar5 ^ bVar1);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        if (in_stack_00000010._3_1_ == 0) {
          in_stack_00000010._3_1_ = *in_stack_00000018 ^ *in_stack_00000014;
          in_stack_00000018 = in_stack_00000018 + 1;
          in_stack_00000014 = in_stack_00000014 + 1;
        }
        in_stack_00000020._3_1_ = in_stack_00000010._3_1_ & 3;
        uVar9 = (uint)(byte)((in_stack_00000010._3_1_ & 3) - 1);
        in_stack_00000044 = uVar9 * 4;
        in_stack_00000048 = &stack0x00000058 + uVar9;
        if ((&stack0x00000058)[uVar9] == 0) {
          iVar6 = in_stack_00000024;
          uVar4 = _in_stack_00000034;
          if (((in_stack_00000010._3_1_ & 2) != 0) && (uVar8 == 0)) {
            pbVar10 = (byte *)ossGetUserNameR(in_stack_00000024);
            iVar6 = in_stack_00000024;
            in_stack_00000034 = pbVar10;
            uVar4 = CONCAT44(in_stack_00000038,pbVar10);
            if (pbVar10 != (byte *)0x0) {
              in_stack_0000001c = 0;
              if (*pbVar10 != 0) {
                bVar5 = *pbVar10;
                in_stack_0000001c = 0;
                pbVar11 = pbVar10;
                do {
                  uVar8 = (uint)bVar5;
                  pbVar11 = pbVar11 + 1;
                  bVar5 = *pbVar11;
                  in_stack_0000001c =
                       (in_stack_0000001c + uVar8) * 0x10 | in_stack_0000001c + uVar8 >> 0x1c;
                } while (bVar5 != 0);
              }
              in_stack_0000005c = in_stack_0000001c;
              (**(code **)(in_stack_00000024 + 8))(pbVar10);
              in_stack_00000040 = in_stack_0000001c;
              in_stack_00000050 = in_stack_0000001c;
              uVar4 = CONCAT44(in_stack_00000038,in_stack_00000034);
            }
          }
          _in_stack_00000034 = uVar4;
          if (((in_stack_00000010._3_1_ & 1) != 0) && (in_stack_0000003c == 0)) {
            oss_gethostname(&stack0x00000064,0xa0);
            iVar6 = gethostidex(iVar6 + 0xec);
            in_stack_00000034 = (byte *)iVar6;
            _in_stack_00000034 = CONCAT44(in_stack_00000038,iVar6);
            in_stack_0000004c = 0;
            if (in_stack_00000064 != 0) {
              pbVar10 = &stack0x00000064;
              do {
                bVar5 = *pbVar10;
                if ((bVar5 < 0x80) && (((&__ossCharFlags)[(uint)bVar5 * 2] & 8) != 0)) {
                  bVar5 = bVar5 & 0xdf;
                }
                pbVar10 = pbVar10 + 1;
                in_stack_0000004c =
                     (bVar5 + in_stack_0000004c) * 0x10 | bVar5 + in_stack_0000004c >> 0x1c;
              } while (*pbVar10 != 0);
            }
            in_stack_0000003c =
                 (iVar6 + in_stack_0000004c) * 0x10 | iVar6 + in_stack_0000004c >> 0x1c;
            in_stack_00000058 = in_stack_0000003c;
          }
          uVar8 = in_stack_0000001c;
          if (in_stack_00000020._3_1_ == 3) {
            *in_stack_00000048 = in_stack_0000001c;
            *in_stack_00000048 =
                 (in_stack_0000005c + in_stack_00000058) * 0x10 |
                 in_stack_0000005c + in_stack_00000058 >> 0x1c;
            *(uint *)((int)&stack0x0000004c + in_stack_00000044) = in_stack_00000040;
            *(uint *)((int)&stack0x0000004c + in_stack_00000044) =
                 (in_stack_00000050 + in_stack_0000004c) * 0x10 |
                 in_stack_00000050 + in_stack_0000004c >> 0x1c;
            in_stack_0000003c = in_stack_00000058;
            in_stack_0000001c = in_stack_0000005c;
            in_stack_00000040 = in_stack_00000050;
            uVar8 = in_stack_0000001c;
          }
        }
        if ((uVar13 == *in_stack_00000048) ||
           (uVar13 == *(uint *)((int)&stack0x0000004c + in_stack_00000044))) break;
        in_stack_0000002c = in_stack_0000002c + 1;
        in_stack_00000010._3_1_ = in_stack_00000010._3_1_ >> 2;
      } while (in_stack_0000002c < in_stack_00000028);
    }
  }
  __security_check_cookie(in_stack_00000104 ^ (uint)&stack0x00000010);
  return;
}



//==== FUN_0000239c @ 0000239c ====

void FUN_0000239c(void)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  byte bVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *unaff_EBX;
  byte *unaff_EBP;
  byte *unaff_ESI;
  uint uVar11;
  undefined4 in_stack_00000010;
  byte *in_stack_00000014;
  byte *in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  undefined4 in_stack_00000030;
  byte *in_stack_00000034;
  undefined4 in_stack_00000038;
  uint in_stack_0000003c;
  uint in_stack_00000040;
  int in_stack_00000044;
  uint *in_stack_00000048;
  uint in_stack_0000004c;
  uint in_stack_00000050;
  undefined4 in_stack_00000054;
  uint in_stack_00000058;
  uint in_stack_0000005c;
  undefined4 in_stack_00000060;
  byte in_stack_00000064;
  uint in_stack_00000104;
  
  if (in_stack_00000010._3_1_ == 0x99) {
    _in_stack_00000034 = __time64(0);
    iVar6 = __gmtime64(&stack0x00000034);
    uVar11 = (uint)CONCAT11(in_stack_00000018[1] ^ in_stack_00000014[-3],
                            *unaff_ESI ^ in_stack_00000014[-4]);
    bVar5 = in_stack_00000018[2];
    bVar1 = in_stack_00000014[-2];
    pbVar7 = in_stack_00000018 + 3;
    in_stack_00000018 = in_stack_00000018 + 4;
    bVar2 = *pbVar7;
    bVar3 = in_stack_00000014[-1];
    uVar8 = *(int *)(iVar6 + 0x14) + 0x76c;
    *(uint *)(iVar6 + 0x14) = uVar8;
    if (((int)uVar11 < (int)uVar8) ||
       ((uVar8 == uVar11 &&
        ((int)(uint)CONCAT11(bVar2 ^ bVar3,bVar5 ^ bVar1) <= *(int *)(iVar6 + 0x1c))))) {
      in_stack_00000030 = 1;
    }
    unaff_EBX = unaff_EBX + 4;
  }
  if (in_stack_00000028 != 0) {
    uVar8 = 0;
    in_stack_0000003c = 0;
    in_stack_00000058 = 0;
    in_stack_0000001c = 0;
    in_stack_0000005c = 0;
    in_stack_00000060 = 0;
    in_stack_0000004c = 0;
    in_stack_00000040 = 0;
    in_stack_00000050 = 0;
    in_stack_00000054 = 0;
    in_stack_0000002c = 0;
    in_stack_00000010._3_1_ = 0;
    if (in_stack_00000028 != 0) {
      do {
        uVar11 = 0;
        iVar6 = 4;
        do {
          bVar5 = *unaff_EBX;
          unaff_EBX = unaff_EBX + 1;
          bVar1 = *unaff_EBP;
          unaff_EBP = unaff_EBP + 1;
          uVar11 = uVar11 << 8 | (uint)(bVar5 ^ bVar1);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
        if (in_stack_00000010._3_1_ == 0) {
          in_stack_00000010._3_1_ = *in_stack_00000018 ^ *in_stack_00000014;
          in_stack_00000018 = in_stack_00000018 + 1;
          in_stack_00000014 = in_stack_00000014 + 1;
        }
        in_stack_00000020._3_1_ = in_stack_00000010._3_1_ & 3;
        uVar9 = (uint)(byte)((in_stack_00000010._3_1_ & 3) - 1);
        in_stack_00000044 = uVar9 * 4;
        in_stack_00000048 = &stack0x00000058 + uVar9;
        if ((&stack0x00000058)[uVar9] == 0) {
          iVar6 = in_stack_00000024;
          uVar4 = _in_stack_00000034;
          if (((in_stack_00000010._3_1_ & 2) != 0) && (uVar8 == 0)) {
            pbVar7 = (byte *)ossGetUserNameR(in_stack_00000024);
            iVar6 = in_stack_00000024;
            in_stack_00000034 = pbVar7;
            uVar4 = CONCAT44(in_stack_00000038,pbVar7);
            if (pbVar7 != (byte *)0x0) {
              in_stack_0000001c = 0;
              if (*pbVar7 != 0) {
                bVar5 = *pbVar7;
                in_stack_0000001c = 0;
                pbVar10 = pbVar7;
                do {
                  uVar8 = (uint)bVar5;
                  pbVar10 = pbVar10 + 1;
                  bVar5 = *pbVar10;
                  in_stack_0000001c =
                       (in_stack_0000001c + uVar8) * 0x10 | in_stack_0000001c + uVar8 >> 0x1c;
                } while (bVar5 != 0);
              }
              in_stack_0000005c = in_stack_0000001c;
              (**(code **)(in_stack_00000024 + 8))(pbVar7);
              in_stack_00000040 = in_stack_0000001c;
              in_stack_00000050 = in_stack_0000001c;
              uVar4 = CONCAT44(in_stack_00000038,in_stack_00000034);
            }
          }
          _in_stack_00000034 = uVar4;
          if (((in_stack_00000010._3_1_ & 1) != 0) && (in_stack_0000003c == 0)) {
            oss_gethostname(&stack0x00000064,0xa0);
            iVar6 = gethostidex(iVar6 + 0xec);
            in_stack_00000034 = (byte *)iVar6;
            _in_stack_00000034 = CONCAT44(in_stack_00000038,iVar6);
            in_stack_0000004c = 0;
            if (in_stack_00000064 != 0) {
              pbVar7 = &stack0x00000064;
              do {
                bVar5 = *pbVar7;
                if ((bVar5 < 0x80) && (((&__ossCharFlags)[(uint)bVar5 * 2] & 8) != 0)) {
                  bVar5 = bVar5 & 0xdf;
                }
                pbVar7 = pbVar7 + 1;
                in_stack_0000004c =
                     (bVar5 + in_stack_0000004c) * 0x10 | bVar5 + in_stack_0000004c >> 0x1c;
              } while (*pbVar7 != 0);
            }
            in_stack_0000003c =
                 (iVar6 + in_stack_0000004c) * 0x10 | iVar6 + in_stack_0000004c >> 0x1c;
            in_stack_00000058 = in_stack_0000003c;
          }
          uVar8 = in_stack_0000001c;
          if (in_stack_00000020._3_1_ == 3) {
            *in_stack_00000048 = in_stack_0000001c;
            *in_stack_00000048 =
                 (in_stack_0000005c + in_stack_00000058) * 0x10 |
                 in_stack_0000005c + in_stack_00000058 >> 0x1c;
            *(uint *)((int)&stack0x0000004c + in_stack_00000044) = in_stack_00000040;
            *(uint *)((int)&stack0x0000004c + in_stack_00000044) =
                 (in_stack_00000050 + in_stack_0000004c) * 0x10 |
                 in_stack_00000050 + in_stack_0000004c >> 0x1c;
            in_stack_0000003c = in_stack_00000058;
            in_stack_0000001c = in_stack_0000005c;
            in_stack_00000040 = in_stack_00000050;
            uVar8 = in_stack_0000001c;
          }
        }
        if ((uVar11 == *in_stack_00000048) ||
           (uVar11 == *(uint *)((int)&stack0x0000004c + in_stack_00000044))) break;
        in_stack_0000002c = in_stack_0000002c + 1;
        in_stack_00000010._3_1_ = in_stack_00000010._3_1_ >> 2;
      } while (in_stack_0000002c < in_stack_00000028);
    }
  }
  __security_check_cookie(in_stack_00000104 ^ (uint)&stack0x00000010);
  return;
}



//==== FUN_00002442 @ 00002442 ====

void FUN_00002442(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int unaff_EBX;
  byte *pbVar6;
  byte *unaff_EBP;
  uint uVar7;
  uint uVar8;
  undefined4 in_stack_00000010;
  byte *in_stack_00000014;
  byte *in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  undefined4 uStack00000030;
  byte *in_stack_00000034;
  uint in_stack_0000003c;
  uint in_stack_00000040;
  int in_stack_00000044;
  uint *in_stack_00000048;
  uint in_stack_0000004c;
  uint in_stack_00000050;
  undefined4 in_stack_00000054;
  uint in_stack_00000058;
  uint in_stack_0000005c;
  undefined4 in_stack_00000060;
  byte in_stack_00000064;
  uint in_stack_00000104;
  
  uStack00000030 = 1;
  pbVar6 = (byte *)(unaff_EBX + 4);
  if (in_stack_00000028 != 0) {
    uVar8 = 0;
    in_stack_0000003c = 0;
    in_stack_00000058 = 0;
    in_stack_0000001c = 0;
    in_stack_0000005c = 0;
    in_stack_00000060 = 0;
    in_stack_0000004c = 0;
    in_stack_00000040 = 0;
    in_stack_00000050 = 0;
    in_stack_00000054 = 0;
    in_stack_0000002c = 0;
    in_stack_00000010._3_1_ = 0;
    if (in_stack_00000028 != 0) {
      do {
        uVar7 = 0;
        iVar4 = 4;
        do {
          bVar2 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          bVar1 = *unaff_EBP;
          unaff_EBP = unaff_EBP + 1;
          uVar7 = uVar7 << 8 | (uint)(bVar2 ^ bVar1);
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        if (in_stack_00000010._3_1_ == 0) {
          in_stack_00000010._3_1_ = *in_stack_00000018 ^ *in_stack_00000014;
          in_stack_00000018 = in_stack_00000018 + 1;
          in_stack_00000014 = in_stack_00000014 + 1;
        }
        in_stack_00000020._3_1_ = in_stack_00000010._3_1_ & 3;
        uVar3 = (uint)(byte)((in_stack_00000010._3_1_ & 3) - 1);
        in_stack_00000044 = uVar3 * 4;
        in_stack_00000048 = &stack0x00000058 + uVar3;
        if ((&stack0x00000058)[uVar3] == 0) {
          iVar4 = in_stack_00000024;
          if (((in_stack_00000010._3_1_ & 2) != 0) && (uVar8 == 0)) {
            in_stack_00000034 = (byte *)ossGetUserNameR(in_stack_00000024);
            iVar4 = in_stack_00000024;
            if (in_stack_00000034 != (byte *)0x0) {
              in_stack_0000001c = 0;
              if (*in_stack_00000034 != 0) {
                bVar2 = *in_stack_00000034;
                in_stack_0000001c = 0;
                pbVar5 = in_stack_00000034;
                do {
                  uVar8 = (uint)bVar2;
                  pbVar5 = pbVar5 + 1;
                  bVar2 = *pbVar5;
                  in_stack_0000001c =
                       (in_stack_0000001c + uVar8) * 0x10 | in_stack_0000001c + uVar8 >> 0x1c;
                } while (bVar2 != 0);
              }
              in_stack_0000005c = in_stack_0000001c;
              (**(code **)(in_stack_00000024 + 8))(in_stack_00000034);
              in_stack_00000040 = in_stack_0000001c;
              in_stack_00000050 = in_stack_0000001c;
            }
          }
          if (((in_stack_00000010._3_1_ & 1) != 0) && (in_stack_0000003c == 0)) {
            oss_gethostname(&stack0x00000064,0xa0);
            in_stack_00000034 = (byte *)gethostidex(iVar4 + 0xec);
            in_stack_0000004c = 0;
            if (in_stack_00000064 != 0) {
              pbVar5 = &stack0x00000064;
              do {
                bVar2 = *pbVar5;
                if ((bVar2 < 0x80) && (((&__ossCharFlags)[(uint)bVar2 * 2] & 8) != 0)) {
                  bVar2 = bVar2 & 0xdf;
                }
                pbVar5 = pbVar5 + 1;
                in_stack_0000004c =
                     (bVar2 + in_stack_0000004c) * 0x10 | bVar2 + in_stack_0000004c >> 0x1c;
              } while (*pbVar5 != 0);
            }
            in_stack_0000003c =
                 (int)(in_stack_00000034 + in_stack_0000004c) * 0x10 |
                 (uint)(in_stack_00000034 + in_stack_0000004c) >> 0x1c;
            in_stack_00000058 = in_stack_0000003c;
          }
          uVar8 = in_stack_0000001c;
          if (in_stack_00000020._3_1_ == 3) {
            *in_stack_00000048 = in_stack_0000001c;
            *in_stack_00000048 =
                 (in_stack_0000005c + in_stack_00000058) * 0x10 |
                 in_stack_0000005c + in_stack_00000058 >> 0x1c;
            *(uint *)((int)&stack0x0000004c + in_stack_00000044) = in_stack_00000040;
            *(uint *)((int)&stack0x0000004c + in_stack_00000044) =
                 (in_stack_00000050 + in_stack_0000004c) * 0x10 |
                 in_stack_00000050 + in_stack_0000004c >> 0x1c;
            in_stack_0000003c = in_stack_00000058;
            in_stack_0000001c = in_stack_0000005c;
            in_stack_00000040 = in_stack_00000050;
            uVar8 = in_stack_0000001c;
          }
        }
        if ((uVar7 == *in_stack_00000048) ||
           (uVar7 == *(uint *)((int)&stack0x0000004c + in_stack_00000044))) break;
        in_stack_0000002c = in_stack_0000002c + 1;
        in_stack_00000010._3_1_ = in_stack_00000010._3_1_ >> 2;
      } while (in_stack_0000002c < in_stack_00000028);
    }
  }
  __security_check_cookie(in_stack_00000104 ^ (uint)&stack0x00000010);
  return;
}



//==== FUN_0000244a @ 0000244a ====

void FUN_0000244a(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int unaff_EBX;
  byte *pbVar6;
  byte *unaff_EBP;
  uint uVar7;
  uint uVar8;
  undefined4 in_stack_00000010;
  byte *in_stack_00000014;
  byte *in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  byte *in_stack_00000034;
  uint in_stack_0000003c;
  uint in_stack_00000040;
  int in_stack_00000044;
  uint *in_stack_00000048;
  uint in_stack_0000004c;
  uint in_stack_00000050;
  undefined4 in_stack_00000054;
  uint in_stack_00000058;
  uint in_stack_0000005c;
  undefined4 in_stack_00000060;
  byte in_stack_00000064;
  uint in_stack_00000104;
  
  pbVar6 = (byte *)(unaff_EBX + 4);
  if (in_stack_00000028 != 0) {
    uVar8 = 0;
    in_stack_0000003c = 0;
    in_stack_00000058 = 0;
    in_stack_0000001c = 0;
    in_stack_0000005c = 0;
    in_stack_00000060 = 0;
    in_stack_0000004c = 0;
    in_stack_00000040 = 0;
    in_stack_00000050 = 0;
    in_stack_00000054 = 0;
    in_stack_0000002c = 0;
    in_stack_00000010._3_1_ = 0;
    if (in_stack_00000028 != 0) {
      do {
        uVar7 = 0;
        iVar4 = 4;
        do {
          bVar2 = *pbVar6;
          pbVar6 = pbVar6 + 1;
          bVar1 = *unaff_EBP;
          unaff_EBP = unaff_EBP + 1;
          uVar7 = uVar7 << 8 | (uint)(bVar2 ^ bVar1);
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        if (in_stack_00000010._3_1_ == 0) {
          in_stack_00000010._3_1_ = *in_stack_00000018 ^ *in_stack_00000014;
          in_stack_00000018 = in_stack_00000018 + 1;
          in_stack_00000014 = in_stack_00000014 + 1;
        }
        in_stack_00000020._3_1_ = in_stack_00000010._3_1_ & 3;
        uVar3 = (uint)(byte)((in_stack_00000010._3_1_ & 3) - 1);
        in_stack_00000044 = uVar3 * 4;
        in_stack_00000048 = &stack0x00000058 + uVar3;
        if ((&stack0x00000058)[uVar3] == 0) {
          iVar4 = in_stack_00000024;
          if (((in_stack_00000010._3_1_ & 2) != 0) && (uVar8 == 0)) {
            in_stack_00000034 = (byte *)ossGetUserNameR(in_stack_00000024);
            iVar4 = in_stack_00000024;
            if (in_stack_00000034 != (byte *)0x0) {
              in_stack_0000001c = 0;
              if (*in_stack_00000034 != 0) {
                bVar2 = *in_stack_00000034;
                in_stack_0000001c = 0;
                pbVar5 = in_stack_00000034;
                do {
                  uVar8 = (uint)bVar2;
                  pbVar5 = pbVar5 + 1;
                  bVar2 = *pbVar5;
                  in_stack_0000001c =
                       (in_stack_0000001c + uVar8) * 0x10 | in_stack_0000001c + uVar8 >> 0x1c;
                } while (bVar2 != 0);
              }
              in_stack_0000005c = in_stack_0000001c;
              (**(code **)(in_stack_00000024 + 8))(in_stack_00000034);
              in_stack_00000040 = in_stack_0000001c;
              in_stack_00000050 = in_stack_0000001c;
            }
          }
          if (((in_stack_00000010._3_1_ & 1) != 0) && (in_stack_0000003c == 0)) {
            oss_gethostname(&stack0x00000064,0xa0);
            in_stack_00000034 = (byte *)gethostidex(iVar4 + 0xec);
            in_stack_0000004c = 0;
            if (in_stack_00000064 != 0) {
              pbVar5 = &stack0x00000064;
              do {
                bVar2 = *pbVar5;
                if ((bVar2 < 0x80) && (((&__ossCharFlags)[(uint)bVar2 * 2] & 8) != 0)) {
                  bVar2 = bVar2 & 0xdf;
                }
                pbVar5 = pbVar5 + 1;
                in_stack_0000004c =
                     (bVar2 + in_stack_0000004c) * 0x10 | bVar2 + in_stack_0000004c >> 0x1c;
              } while (*pbVar5 != 0);
            }
            in_stack_0000003c =
                 (int)(in_stack_00000034 + in_stack_0000004c) * 0x10 |
                 (uint)(in_stack_00000034 + in_stack_0000004c) >> 0x1c;
            in_stack_00000058 = in_stack_0000003c;
          }
          uVar8 = in_stack_0000001c;
          if (in_stack_00000020._3_1_ == 3) {
            *in_stack_00000048 = in_stack_0000001c;
            *in_stack_00000048 =
                 (in_stack_0000005c + in_stack_00000058) * 0x10 |
                 in_stack_0000005c + in_stack_00000058 >> 0x1c;
            *(uint *)((int)&stack0x0000004c + in_stack_00000044) = in_stack_00000040;
            *(uint *)((int)&stack0x0000004c + in_stack_00000044) =
                 (in_stack_00000050 + in_stack_0000004c) * 0x10 |
                 in_stack_00000050 + in_stack_0000004c >> 0x1c;
            in_stack_0000003c = in_stack_00000058;
            in_stack_0000001c = in_stack_0000005c;
            in_stack_00000040 = in_stack_00000050;
            uVar8 = in_stack_0000001c;
          }
        }
        if ((uVar7 == *in_stack_00000048) ||
           (uVar7 == *(uint *)((int)&stack0x0000004c + in_stack_00000044))) break;
        in_stack_0000002c = in_stack_0000002c + 1;
        in_stack_00000010._3_1_ = in_stack_00000010._3_1_ >> 2;
      } while (in_stack_0000002c < in_stack_00000028);
    }
  }
  __security_check_cookie(in_stack_00000104 ^ (uint)&stack0x00000010);
  return;
}



//==== FUN_0000244d @ 0000244d ====

void FUN_0000244d(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *unaff_EBX;
  byte *unaff_EBP;
  uint uVar6;
  uint uVar7;
  undefined4 in_stack_00000010;
  byte *in_stack_00000014;
  byte *in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  byte *in_stack_00000034;
  uint in_stack_0000003c;
  uint in_stack_00000040;
  int in_stack_00000044;
  uint *in_stack_00000048;
  uint in_stack_0000004c;
  uint in_stack_00000050;
  undefined4 in_stack_00000054;
  uint in_stack_00000058;
  uint in_stack_0000005c;
  undefined4 in_stack_00000060;
  byte in_stack_00000064;
  uint in_stack_00000104;
  
  if (in_stack_00000028 != 0) {
    uVar7 = 0;
    in_stack_0000003c = 0;
    in_stack_00000058 = 0;
    in_stack_0000001c = 0;
    in_stack_0000005c = 0;
    in_stack_00000060 = 0;
    in_stack_0000004c = 0;
    in_stack_00000040 = 0;
    in_stack_00000050 = 0;
    in_stack_00000054 = 0;
    in_stack_0000002c = 0;
    in_stack_00000010._3_1_ = 0;
    if (in_stack_00000028 != 0) {
      do {
        uVar6 = 0;
        iVar4 = 4;
        do {
          bVar2 = *unaff_EBX;
          unaff_EBX = unaff_EBX + 1;
          bVar1 = *unaff_EBP;
          unaff_EBP = unaff_EBP + 1;
          uVar6 = uVar6 << 8 | (uint)(bVar2 ^ bVar1);
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        if (in_stack_00000010._3_1_ == 0) {
          in_stack_00000010._3_1_ = *in_stack_00000018 ^ *in_stack_00000014;
          in_stack_00000018 = in_stack_00000018 + 1;
          in_stack_00000014 = in_stack_00000014 + 1;
        }
        in_stack_00000020._3_1_ = in_stack_00000010._3_1_ & 3;
        uVar3 = (uint)(byte)((in_stack_00000010._3_1_ & 3) - 1);
        in_stack_00000044 = uVar3 * 4;
        in_stack_00000048 = &stack0x00000058 + uVar3;
        if ((&stack0x00000058)[uVar3] == 0) {
          iVar4 = in_stack_00000024;
          if (((in_stack_00000010._3_1_ & 2) != 0) && (uVar7 == 0)) {
            in_stack_00000034 = (byte *)ossGetUserNameR(in_stack_00000024);
            iVar4 = in_stack_00000024;
            if (in_stack_00000034 != (byte *)0x0) {
              in_stack_0000001c = 0;
              if (*in_stack_00000034 != 0) {
                bVar2 = *in_stack_00000034;
                in_stack_0000001c = 0;
                pbVar5 = in_stack_00000034;
                do {
                  uVar7 = (uint)bVar2;
                  pbVar5 = pbVar5 + 1;
                  bVar2 = *pbVar5;
                  in_stack_0000001c =
                       (in_stack_0000001c + uVar7) * 0x10 | in_stack_0000001c + uVar7 >> 0x1c;
                } while (bVar2 != 0);
              }
              in_stack_0000005c = in_stack_0000001c;
              (**(code **)(in_stack_00000024 + 8))(in_stack_00000034);
              in_stack_00000040 = in_stack_0000001c;
              in_stack_00000050 = in_stack_0000001c;
            }
          }
          if (((in_stack_00000010._3_1_ & 1) != 0) && (in_stack_0000003c == 0)) {
            oss_gethostname(&stack0x00000064,0xa0);
            in_stack_00000034 = (byte *)gethostidex(iVar4 + 0xec);
            in_stack_0000004c = 0;
            if (in_stack_00000064 != 0) {
              pbVar5 = &stack0x00000064;
              do {
                bVar2 = *pbVar5;
                if ((bVar2 < 0x80) && (((&__ossCharFlags)[(uint)bVar2 * 2] & 8) != 0)) {
                  bVar2 = bVar2 & 0xdf;
                }
                pbVar5 = pbVar5 + 1;
                in_stack_0000004c =
                     (bVar2 + in_stack_0000004c) * 0x10 | bVar2 + in_stack_0000004c >> 0x1c;
              } while (*pbVar5 != 0);
            }
            in_stack_0000003c =
                 (int)(in_stack_00000034 + in_stack_0000004c) * 0x10 |
                 (uint)(in_stack_00000034 + in_stack_0000004c) >> 0x1c;
            in_stack_00000058 = in_stack_0000003c;
          }
          uVar7 = in_stack_0000001c;
          if (in_stack_00000020._3_1_ == 3) {
            *in_stack_00000048 = in_stack_0000001c;
            *in_stack_00000048 =
                 (in_stack_0000005c + in_stack_00000058) * 0x10 |
                 in_stack_0000005c + in_stack_00000058 >> 0x1c;
            *(uint *)((int)&stack0x0000004c + in_stack_00000044) = in_stack_00000040;
            *(uint *)((int)&stack0x0000004c + in_stack_00000044) =
                 (in_stack_00000050 + in_stack_0000004c) * 0x10 |
                 in_stack_00000050 + in_stack_0000004c >> 0x1c;
            in_stack_0000003c = in_stack_00000058;
            in_stack_0000001c = in_stack_0000005c;
            in_stack_00000040 = in_stack_00000050;
            uVar7 = in_stack_0000001c;
          }
        }
        if ((uVar6 == *in_stack_00000048) ||
           (uVar6 == *(uint *)((int)&stack0x0000004c + in_stack_00000044))) break;
        in_stack_0000002c = in_stack_0000002c + 1;
        in_stack_00000010._3_1_ = in_stack_00000010._3_1_ >> 2;
      } while (in_stack_0000002c < in_stack_00000028);
    }
  }
  __security_check_cookie(in_stack_00000104 ^ (uint)&stack0x00000010);
  return;
}



//==== FUN_00002491 @ 00002491 ====

void FUN_00002491(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *unaff_EBX;
  byte *unaff_EBP;
  uint uVar6;
  uint unaff_EDI;
  undefined4 in_stack_00000010;
  byte *in_stack_00000014;
  byte *in_stack_00000018;
  uint in_stack_0000001c;
  byte bStack00000023;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  byte *in_stack_00000034;
  uint in_stack_0000003c;
  uint in_stack_00000040;
  int iStack00000044;
  uint *puStack00000048;
  uint in_stack_0000004c;
  uint in_stack_00000050;
  uint in_stack_00000058;
  uint in_stack_0000005c;
  byte in_stack_00000064;
  uint in_stack_00000104;
  
  do {
    uVar6 = 0;
    iVar4 = 4;
    do {
      bVar2 = *unaff_EBX;
      unaff_EBX = unaff_EBX + 1;
      bVar1 = *unaff_EBP;
      unaff_EBP = unaff_EBP + 1;
      uVar6 = uVar6 << 8 | (uint)(bVar2 ^ bVar1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (in_stack_00000010._3_1_ == 0) {
      in_stack_00000010._3_1_ = *in_stack_00000018 ^ *in_stack_00000014;
      in_stack_00000018 = in_stack_00000018 + 1;
      in_stack_00000014 = in_stack_00000014 + 1;
    }
    bStack00000023 = in_stack_00000010._3_1_ & 3;
    uVar3 = (uint)(byte)((in_stack_00000010._3_1_ & 3) - 1);
    iStack00000044 = uVar3 * 4;
    puStack00000048 = &stack0x00000058 + uVar3;
    if ((&stack0x00000058)[uVar3] == 0) {
      iVar4 = in_stack_00000024;
      if (((in_stack_00000010._3_1_ & 2) != 0) && (unaff_EDI == 0)) {
        in_stack_00000034 = (byte *)ossGetUserNameR(in_stack_00000024);
        iVar4 = in_stack_00000024;
        if (in_stack_00000034 != (byte *)0x0) {
          in_stack_0000001c = 0;
          if (*in_stack_00000034 != 0) {
            bVar2 = *in_stack_00000034;
            in_stack_0000001c = 0;
            pbVar5 = in_stack_00000034;
            do {
              uVar3 = (uint)bVar2;
              pbVar5 = pbVar5 + 1;
              bVar2 = *pbVar5;
              in_stack_0000001c =
                   (in_stack_0000001c + uVar3) * 0x10 | in_stack_0000001c + uVar3 >> 0x1c;
            } while (bVar2 != 0);
          }
          in_stack_0000005c = in_stack_0000001c;
          (**(code **)(in_stack_00000024 + 8))(in_stack_00000034);
          in_stack_00000040 = in_stack_0000001c;
          in_stack_00000050 = in_stack_0000001c;
        }
      }
      if (((in_stack_00000010._3_1_ & 1) != 0) && (in_stack_0000003c == 0)) {
        oss_gethostname(&stack0x00000064,0xa0);
        in_stack_00000034 = (byte *)gethostidex(iVar4 + 0xec);
        in_stack_0000004c = 0;
        if (in_stack_00000064 != 0) {
          pbVar5 = &stack0x00000064;
          do {
            bVar2 = *pbVar5;
            if ((bVar2 < 0x80) && (((&__ossCharFlags)[(uint)bVar2 * 2] & 8) != 0)) {
              bVar2 = bVar2 & 0xdf;
            }
            pbVar5 = pbVar5 + 1;
            in_stack_0000004c =
                 (bVar2 + in_stack_0000004c) * 0x10 | bVar2 + in_stack_0000004c >> 0x1c;
          } while (*pbVar5 != 0);
        }
        in_stack_0000003c =
             (int)(in_stack_00000034 + in_stack_0000004c) * 0x10 |
             (uint)(in_stack_00000034 + in_stack_0000004c) >> 0x1c;
        in_stack_00000058 = in_stack_0000003c;
      }
      unaff_EDI = in_stack_0000001c;
      if (bStack00000023 == 3) {
        *puStack00000048 = in_stack_0000001c;
        *puStack00000048 =
             (in_stack_0000005c + in_stack_00000058) * 0x10 |
             in_stack_0000005c + in_stack_00000058 >> 0x1c;
        *(uint *)((int)&stack0x0000004c + iStack00000044) = in_stack_00000040;
        *(uint *)((int)&stack0x0000004c + iStack00000044) =
             (in_stack_00000050 + in_stack_0000004c) * 0x10 |
             in_stack_00000050 + in_stack_0000004c >> 0x1c;
        in_stack_0000003c = in_stack_00000058;
        in_stack_0000001c = in_stack_0000005c;
        in_stack_00000040 = in_stack_00000050;
        unaff_EDI = in_stack_0000001c;
      }
    }
    if ((uVar6 == *puStack00000048) || (uVar6 == *(uint *)((int)&stack0x0000004c + iStack00000044)))
    break;
    in_stack_0000002c = in_stack_0000002c + 1;
    in_stack_00000010._3_1_ = in_stack_00000010._3_1_ >> 2;
  } while (in_stack_0000002c < in_stack_00000028);
  __security_check_cookie(in_stack_00000104 ^ (uint)&stack0x00000010);
  return;
}



//==== FUN_00002496 @ 00002496 ====

void __fastcall FUN_00002496(undefined4 param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *unaff_EBX;
  byte *unaff_EBP;
  uint unaff_ESI;
  uint unaff_EDI;
  int iVar5;
  undefined4 in_stack_00000010;
  byte *in_stack_00000014;
  byte *in_stack_00000018;
  uint in_stack_0000001c;
  byte bStack00000023;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  byte *in_stack_00000034;
  uint in_stack_0000003c;
  uint in_stack_00000040;
  int iStack00000044;
  uint *puStack00000048;
  uint in_stack_0000004c;
  uint in_stack_00000050;
  uint in_stack_00000058;
  uint in_stack_0000005c;
  byte in_stack_00000064;
  uint in_stack_00000104;
  
  while( true ) {
    do {
      bVar2 = *unaff_EBX;
      unaff_EBX = unaff_EBX + 1;
      bVar1 = *unaff_EBP;
      unaff_EBP = unaff_EBP + 1;
      unaff_ESI = unaff_ESI << 8 | (uint)(bVar2 ^ bVar1);
      param_2 = param_2 + -1;
    } while (param_2 != 0);
    if (in_stack_00000010._3_1_ == 0) {
      in_stack_00000010._3_1_ = *in_stack_00000018 ^ *in_stack_00000014;
      in_stack_00000018 = in_stack_00000018 + 1;
      in_stack_00000014 = in_stack_00000014 + 1;
    }
    bStack00000023 = in_stack_00000010._3_1_ & 3;
    uVar3 = (uint)(byte)((in_stack_00000010._3_1_ & 3) - 1);
    iStack00000044 = uVar3 * 4;
    puStack00000048 = &stack0x00000058 + uVar3;
    if ((&stack0x00000058)[uVar3] == 0) {
      iVar5 = in_stack_00000024;
      if (((in_stack_00000010._3_1_ & 2) != 0) && (unaff_EDI == 0)) {
        in_stack_00000034 = (byte *)ossGetUserNameR(in_stack_00000024);
        iVar5 = in_stack_00000024;
        if (in_stack_00000034 != (byte *)0x0) {
          in_stack_0000001c = 0;
          if (*in_stack_00000034 != 0) {
            bVar2 = *in_stack_00000034;
            in_stack_0000001c = 0;
            pbVar4 = in_stack_00000034;
            do {
              uVar3 = (uint)bVar2;
              pbVar4 = pbVar4 + 1;
              bVar2 = *pbVar4;
              in_stack_0000001c =
                   (in_stack_0000001c + uVar3) * 0x10 | in_stack_0000001c + uVar3 >> 0x1c;
            } while (bVar2 != 0);
          }
          in_stack_0000005c = in_stack_0000001c;
          (**(code **)(in_stack_00000024 + 8))(in_stack_00000034);
          in_stack_00000040 = in_stack_0000001c;
          in_stack_00000050 = in_stack_0000001c;
        }
      }
      if (((in_stack_00000010._3_1_ & 1) != 0) && (in_stack_0000003c == 0)) {
        oss_gethostname(&stack0x00000064,0xa0);
        in_stack_00000034 = (byte *)gethostidex(iVar5 + 0xec);
        in_stack_0000004c = 0;
        if (in_stack_00000064 != 0) {
          pbVar4 = &stack0x00000064;
          do {
            bVar2 = *pbVar4;
            if ((bVar2 < 0x80) && (((&__ossCharFlags)[(uint)bVar2 * 2] & 8) != 0)) {
              bVar2 = bVar2 & 0xdf;
            }
            pbVar4 = pbVar4 + 1;
            in_stack_0000004c =
                 (bVar2 + in_stack_0000004c) * 0x10 | bVar2 + in_stack_0000004c >> 0x1c;
          } while (*pbVar4 != 0);
        }
        in_stack_0000003c =
             (int)(in_stack_00000034 + in_stack_0000004c) * 0x10 |
             (uint)(in_stack_00000034 + in_stack_0000004c) >> 0x1c;
        in_stack_00000058 = in_stack_0000003c;
      }
      unaff_EDI = in_stack_0000001c;
      if (bStack00000023 == 3) {
        *puStack00000048 = in_stack_0000001c;
        *puStack00000048 =
             (in_stack_0000005c + in_stack_00000058) * 0x10 |
             in_stack_0000005c + in_stack_00000058 >> 0x1c;
        *(uint *)((int)&stack0x0000004c + iStack00000044) = in_stack_00000040;
        *(uint *)((int)&stack0x0000004c + iStack00000044) =
             (in_stack_00000050 + in_stack_0000004c) * 0x10 |
             in_stack_00000050 + in_stack_0000004c >> 0x1c;
        in_stack_0000003c = in_stack_00000058;
        in_stack_0000001c = in_stack_0000005c;
        in_stack_00000040 = in_stack_00000050;
        unaff_EDI = in_stack_0000001c;
      }
    }
    if ((unaff_ESI == *puStack00000048) ||
       (unaff_ESI == *(uint *)((int)&stack0x0000004c + iStack00000044))) break;
    in_stack_0000002c = in_stack_0000002c + 1;
    in_stack_00000010._3_1_ = in_stack_00000010._3_1_ >> 2;
    if (in_stack_00000028 <= in_stack_0000002c) break;
    unaff_ESI = 0;
    param_2 = 4;
  }
  __security_check_cookie(in_stack_00000104 ^ (uint)&stack0x00000010);
  return;
}



//==== FUN_000024cd @ 000024cd ====

void __fastcall FUN_000024cd(undefined4 param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *unaff_EBX;
  byte *unaff_EBP;
  uint unaff_ESI;
  uint unaff_EDI;
  undefined4 in_stack_00000010;
  byte *in_stack_00000014;
  byte *in_stack_00000018;
  uint in_stack_0000001c;
  byte bStack00000023;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  byte *in_stack_00000034;
  uint in_stack_0000003c;
  uint in_stack_00000040;
  int iStack00000044;
  uint *puStack00000048;
  uint in_stack_0000004c;
  uint in_stack_00000050;
  uint in_stack_00000058;
  uint in_stack_0000005c;
  byte in_stack_00000064;
  uint in_stack_00000104;
  
  while( true ) {
    bStack00000023 = param_2 & 3;
    uVar3 = (uint)(byte)((param_2 & 3) - 1);
    iStack00000044 = uVar3 * 4;
    puStack00000048 = &stack0x00000058 + uVar3;
    if ((&stack0x00000058)[uVar3] == 0) {
      iVar4 = in_stack_00000024;
      param_2 = param_2;
      if (((param_2 & 2) != 0) && (param_2 = param_2, unaff_EDI == 0)) {
        in_stack_00000034 = (byte *)ossGetUserNameR(in_stack_00000024);
        iVar4 = in_stack_00000024;
        param_2 = in_stack_00000010._3_1_;
        if (in_stack_00000034 != (byte *)0x0) {
          in_stack_0000001c = 0;
          if (*in_stack_00000034 != 0) {
            bVar2 = *in_stack_00000034;
            in_stack_0000001c = 0;
            pbVar5 = in_stack_00000034;
            do {
              uVar3 = (uint)bVar2;
              pbVar5 = pbVar5 + 1;
              bVar2 = *pbVar5;
              in_stack_0000001c =
                   (in_stack_0000001c + uVar3) * 0x10 | in_stack_0000001c + uVar3 >> 0x1c;
            } while (bVar2 != 0);
          }
          in_stack_0000005c = in_stack_0000001c;
          (**(code **)(in_stack_00000024 + 8))(in_stack_00000034);
          in_stack_00000040 = in_stack_0000001c;
          in_stack_00000050 = in_stack_0000001c;
          param_2 = in_stack_00000010._3_1_;
        }
      }
      if (((param_2 & 1) != 0) && (in_stack_0000003c == 0)) {
        oss_gethostname(&stack0x00000064,0xa0);
        in_stack_00000034 = (byte *)gethostidex(iVar4 + 0xec);
        in_stack_0000004c = 0;
        if (in_stack_00000064 != 0) {
          pbVar5 = &stack0x00000064;
          do {
            bVar2 = *pbVar5;
            if ((bVar2 < 0x80) && (((&__ossCharFlags)[(uint)bVar2 * 2] & 8) != 0)) {
              bVar2 = bVar2 & 0xdf;
            }
            pbVar5 = pbVar5 + 1;
            in_stack_0000004c =
                 (bVar2 + in_stack_0000004c) * 0x10 | bVar2 + in_stack_0000004c >> 0x1c;
          } while (*pbVar5 != 0);
        }
        in_stack_0000003c =
             (int)(in_stack_00000034 + in_stack_0000004c) * 0x10 |
             (uint)(in_stack_00000034 + in_stack_0000004c) >> 0x1c;
        in_stack_00000058 = in_stack_0000003c;
        param_2 = in_stack_00000010._3_1_;
      }
      unaff_EDI = in_stack_0000001c;
      if (bStack00000023 == 3) {
        *puStack00000048 = in_stack_0000001c;
        *puStack00000048 =
             (in_stack_0000005c + in_stack_00000058) * 0x10 |
             in_stack_0000005c + in_stack_00000058 >> 0x1c;
        *(uint *)((int)&stack0x0000004c + iStack00000044) = in_stack_00000040;
        *(uint *)((int)&stack0x0000004c + iStack00000044) =
             (in_stack_00000050 + in_stack_0000004c) * 0x10 |
             in_stack_00000050 + in_stack_0000004c >> 0x1c;
        in_stack_0000003c = in_stack_00000058;
        in_stack_0000001c = in_stack_0000005c;
        in_stack_00000040 = in_stack_00000050;
        unaff_EDI = in_stack_0000001c;
      }
    }
    if ((unaff_ESI == *puStack00000048) ||
       (unaff_ESI == *(uint *)((int)&stack0x0000004c + iStack00000044))) break;
    in_stack_0000002c = in_stack_0000002c + 1;
    param_2 = param_2 >> 2;
    in_stack_00000010._3_1_ = param_2;
    if (in_stack_00000028 <= in_stack_0000002c) break;
    unaff_ESI = 0;
    iVar4 = 4;
    do {
      bVar2 = *unaff_EBX;
      unaff_EBX = unaff_EBX + 1;
      bVar1 = *unaff_EBP;
      unaff_EBP = unaff_EBP + 1;
      unaff_ESI = unaff_ESI << 8 | (uint)(bVar2 ^ bVar1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (param_2 == 0) {
      param_2 = *in_stack_00000018 ^ *in_stack_00000014;
      in_stack_00000010._3_1_ = param_2;
      in_stack_00000018 = in_stack_00000018 + 1;
      in_stack_00000014 = in_stack_00000014 + 1;
    }
  }
  __security_check_cookie(in_stack_00000104 ^ (uint)&stack0x00000010);
  return;
}



//==== FUN_00002523 @ 00002523 ====

void __fastcall FUN_00002523(byte *param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *unaff_EBX;
  byte *unaff_EBP;
  uint unaff_ESI;
  uint unaff_EDI;
  undefined4 in_stack_00000010;
  byte *in_stack_00000014;
  byte *in_stack_00000018;
  uint uStack0000001c;
  undefined4 in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  byte *in_stack_00000034;
  uint in_stack_0000003c;
  uint in_stack_00000040;
  int in_stack_00000044;
  uint *in_stack_00000048;
  uint in_stack_0000004c;
  uint in_stack_00000050;
  uint in_stack_00000058;
  uint uStack0000005c;
  byte in_stack_00000064;
  uint in_stack_00000104;
  
  do {
    do {
      uVar3 = (uint)param_2;
      param_1 = param_1 + 1;
      param_2 = *param_1;
      unaff_EDI = (unaff_EDI + uVar3) * 0x10 | unaff_EDI + uVar3 >> 0x1c;
      uStack0000001c = unaff_EDI;
    } while (param_2 != 0);
    do {
      iVar4 = in_stack_00000024;
      uStack0000005c = uStack0000001c;
      (**(code **)(in_stack_00000024 + 8))(in_stack_00000034);
      in_stack_00000040 = uStack0000001c;
      in_stack_00000050 = uStack0000001c;
      do {
        do {
          if (((in_stack_00000010._3_1_ & 1) != 0) && (in_stack_0000003c == 0)) {
            oss_gethostname(&stack0x00000064,0xa0);
            in_stack_00000034 = (byte *)gethostidex(iVar4 + 0xec);
            in_stack_0000004c = 0;
            if (in_stack_00000064 != 0) {
              pbVar5 = &stack0x00000064;
              do {
                bVar2 = *pbVar5;
                if ((bVar2 < 0x80) && (((&__ossCharFlags)[(uint)bVar2 * 2] & 8) != 0)) {
                  bVar2 = bVar2 & 0xdf;
                }
                pbVar5 = pbVar5 + 1;
                in_stack_0000004c =
                     (bVar2 + in_stack_0000004c) * 0x10 | bVar2 + in_stack_0000004c >> 0x1c;
              } while (*pbVar5 != 0);
            }
            in_stack_0000003c =
                 (int)(in_stack_00000034 + in_stack_0000004c) * 0x10 |
                 (uint)(in_stack_00000034 + in_stack_0000004c) >> 0x1c;
            in_stack_00000058 = in_stack_0000003c;
          }
          if (in_stack_00000020._3_1_ == 3) {
            *in_stack_00000048 = uStack0000001c;
            *in_stack_00000048 =
                 (uStack0000005c + in_stack_00000058) * 0x10 |
                 uStack0000005c + in_stack_00000058 >> 0x1c;
            *(uint *)((int)&stack0x0000004c + in_stack_00000044) = in_stack_00000040;
            *(uint *)((int)&stack0x0000004c + in_stack_00000044) =
                 (in_stack_00000050 + in_stack_0000004c) * 0x10 |
                 in_stack_00000050 + in_stack_0000004c >> 0x1c;
            in_stack_0000003c = in_stack_00000058;
            uStack0000001c = uStack0000005c;
            in_stack_00000040 = in_stack_00000050;
          }
          do {
            if ((unaff_ESI == *in_stack_00000048) ||
               (unaff_ESI == *(uint *)((int)&stack0x0000004c + in_stack_00000044))) {
FUN_0000266e:
              __security_check_cookie(in_stack_00000104 ^ (uint)&stack0x00000010);
              return;
            }
            in_stack_0000002c = in_stack_0000002c + 1;
            in_stack_00000010._3_1_ = in_stack_00000010._3_1_ >> 2;
            if (in_stack_00000028 <= in_stack_0000002c) goto FUN_0000266e;
            unaff_ESI = 0;
            iVar4 = 4;
            do {
              bVar2 = *unaff_EBX;
              unaff_EBX = unaff_EBX + 1;
              bVar1 = *unaff_EBP;
              unaff_EBP = unaff_EBP + 1;
              unaff_ESI = unaff_ESI << 8 | (uint)(bVar2 ^ bVar1);
              iVar4 = iVar4 + -1;
            } while (iVar4 != 0);
            if (in_stack_00000010._3_1_ == 0) {
              in_stack_00000010._3_1_ = *in_stack_00000018 ^ *in_stack_00000014;
              in_stack_00000018 = in_stack_00000018 + 1;
              in_stack_00000014 = in_stack_00000014 + 1;
            }
            in_stack_00000020._3_1_ = in_stack_00000010._3_1_ & 3;
            uVar3 = (uint)(byte)((in_stack_00000010._3_1_ & 3) - 1);
            in_stack_00000044 = uVar3 * 4;
            in_stack_00000048 = &stack0x00000058 + uVar3;
          } while ((&stack0x00000058)[uVar3] != 0);
          iVar4 = in_stack_00000024;
        } while (((in_stack_00000010._3_1_ & 2) == 0) || (uStack0000001c != 0));
        param_1 = (byte *)ossGetUserNameR(in_stack_00000024);
        in_stack_00000034 = param_1;
        iVar4 = in_stack_00000024;
      } while (param_1 == (byte *)0x0);
      uStack0000001c = 0;
    } while (*param_1 == 0);
    param_2 = *param_1;
    unaff_EDI = 0;
  } while( true );
}



//==== FUN_00002540 @ 00002540 ====

void FUN_00002540(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint in_EAX;
  int iVar4;
  byte *pbVar5;
  byte *unaff_EBX;
  byte *unaff_EBP;
  uint unaff_ESI;
  byte *unaff_EDI;
  undefined4 in_stack_00000010;
  byte *in_stack_00000014;
  byte *in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  byte *in_stack_00000034;
  uint in_stack_0000003c;
  uint in_stack_00000040;
  int in_stack_00000044;
  uint *in_stack_00000048;
  uint in_stack_0000004c;
  uint in_stack_00000050;
  uint in_stack_00000058;
  uint uStack0000005c;
  byte in_stack_00000064;
  uint in_stack_00000104;
  
  do {
    iVar4 = in_stack_00000024;
    uStack0000005c = in_EAX;
    (**(code **)(in_stack_00000024 + 8))(unaff_EDI);
    in_stack_00000040 = in_stack_0000001c;
    in_stack_00000050 = in_stack_0000001c;
    do {
      do {
        if (((in_stack_00000010._3_1_ & 1) != 0) && (in_stack_0000003c == 0)) {
          oss_gethostname(&stack0x00000064,0xa0);
          in_stack_00000034 = (byte *)gethostidex(iVar4 + 0xec);
          in_stack_0000004c = 0;
          if (in_stack_00000064 != 0) {
            pbVar5 = &stack0x00000064;
            do {
              bVar2 = *pbVar5;
              if ((bVar2 < 0x80) && (((&__ossCharFlags)[(uint)bVar2 * 2] & 8) != 0)) {
                bVar2 = bVar2 & 0xdf;
              }
              pbVar5 = pbVar5 + 1;
              in_stack_0000004c =
                   (bVar2 + in_stack_0000004c) * 0x10 | bVar2 + in_stack_0000004c >> 0x1c;
            } while (*pbVar5 != 0);
          }
          in_stack_0000003c =
               (int)(in_stack_00000034 + in_stack_0000004c) * 0x10 |
               (uint)(in_stack_00000034 + in_stack_0000004c) >> 0x1c;
          in_stack_00000058 = in_stack_0000003c;
        }
        if (in_stack_00000020._3_1_ == 3) {
          *in_stack_00000048 = in_stack_0000001c;
          *in_stack_00000048 =
               (uStack0000005c + in_stack_00000058) * 0x10 |
               uStack0000005c + in_stack_00000058 >> 0x1c;
          *(uint *)((int)&stack0x0000004c + in_stack_00000044) = in_stack_00000040;
          *(uint *)((int)&stack0x0000004c + in_stack_00000044) =
               (in_stack_00000050 + in_stack_0000004c) * 0x10 |
               in_stack_00000050 + in_stack_0000004c >> 0x1c;
          in_stack_0000003c = in_stack_00000058;
          in_stack_0000001c = uStack0000005c;
          in_stack_00000040 = in_stack_00000050;
        }
        do {
          if ((unaff_ESI == *in_stack_00000048) ||
             (unaff_ESI == *(uint *)((int)&stack0x0000004c + in_stack_00000044))) {
FUN_0000266e:
            __security_check_cookie(in_stack_00000104 ^ (uint)&stack0x00000010);
            return;
          }
          in_stack_0000002c = in_stack_0000002c + 1;
          in_stack_00000010._3_1_ = in_stack_00000010._3_1_ >> 2;
          if (in_stack_00000028 <= in_stack_0000002c) goto FUN_0000266e;
          unaff_ESI = 0;
          iVar4 = 4;
          do {
            bVar2 = *unaff_EBX;
            unaff_EBX = unaff_EBX + 1;
            bVar1 = *unaff_EBP;
            unaff_EBP = unaff_EBP + 1;
            unaff_ESI = unaff_ESI << 8 | (uint)(bVar2 ^ bVar1);
            iVar4 = iVar4 + -1;
          } while (iVar4 != 0);
          if (in_stack_00000010._3_1_ == 0) {
            in_stack_00000010._3_1_ = *in_stack_00000018 ^ *in_stack_00000014;
            in_stack_00000018 = in_stack_00000018 + 1;
            in_stack_00000014 = in_stack_00000014 + 1;
          }
          in_stack_00000020._3_1_ = in_stack_00000010._3_1_ & 3;
          uVar3 = (uint)(byte)((in_stack_00000010._3_1_ & 3) - 1);
          in_stack_00000044 = uVar3 * 4;
          in_stack_00000048 = &stack0x00000058 + uVar3;
        } while ((&stack0x00000058)[uVar3] != 0);
        iVar4 = in_stack_00000024;
      } while (((in_stack_00000010._3_1_ & 2) == 0) || (in_stack_0000001c != 0));
      unaff_EDI = (byte *)ossGetUserNameR(in_stack_00000024);
      in_stack_00000034 = unaff_EDI;
      iVar4 = in_stack_00000024;
    } while (unaff_EDI == (byte *)0x0);
    in_EAX = 0;
    in_stack_0000001c = 0;
    if (*unaff_EDI != 0) {
      bVar2 = *unaff_EDI;
      in_EAX = 0;
      pbVar5 = unaff_EDI;
      do {
        uVar3 = (uint)bVar2;
        pbVar5 = pbVar5 + 1;
        bVar2 = *pbVar5;
        in_EAX = (in_EAX + uVar3) * 0x10 | in_EAX + uVar3 >> 0x1c;
        in_stack_0000001c = in_EAX;
      } while (bVar2 != 0);
    }
  } while( true );
}



//==== FUN_00002560 @ 00002560 ====

void FUN_00002560(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *unaff_EBX;
  byte *unaff_EBP;
  uint unaff_ESI;
  undefined4 in_stack_00000010;
  byte *in_stack_00000014;
  byte *in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  byte *in_stack_00000034;
  uint in_stack_0000003c;
  uint in_stack_00000040;
  int in_stack_00000044;
  uint *in_stack_00000048;
  uint in_stack_0000004c;
  uint in_stack_00000050;
  uint in_stack_00000058;
  uint in_stack_0000005c;
  byte in_stack_00000064;
  uint in_stack_00000104;
  
  iVar4 = in_stack_00000024;
  do {
    if (((in_stack_00000010._3_1_ & 1) != 0) && (in_stack_0000003c == 0)) {
      oss_gethostname(&stack0x00000064,0xa0);
      in_stack_00000034 = (byte *)gethostidex(iVar4 + 0xec);
      in_stack_0000004c = 0;
      if (in_stack_00000064 != 0) {
        pbVar5 = &stack0x00000064;
        do {
          bVar2 = *pbVar5;
          if ((bVar2 < 0x80) && (((&__ossCharFlags)[(uint)bVar2 * 2] & 8) != 0)) {
            bVar2 = bVar2 & 0xdf;
          }
          pbVar5 = pbVar5 + 1;
          in_stack_0000004c = (bVar2 + in_stack_0000004c) * 0x10 | bVar2 + in_stack_0000004c >> 0x1c
          ;
        } while (*pbVar5 != 0);
      }
      in_stack_0000003c =
           (int)(in_stack_00000034 + in_stack_0000004c) * 0x10 |
           (uint)(in_stack_00000034 + in_stack_0000004c) >> 0x1c;
      in_stack_00000058 = in_stack_0000003c;
    }
    if (in_stack_00000020._3_1_ == 3) {
      *in_stack_00000048 = in_stack_0000001c;
      *in_stack_00000048 =
           (in_stack_0000005c + in_stack_00000058) * 0x10 |
           in_stack_0000005c + in_stack_00000058 >> 0x1c;
      *(uint *)((int)&stack0x0000004c + in_stack_00000044) = in_stack_00000040;
      *(uint *)((int)&stack0x0000004c + in_stack_00000044) =
           (in_stack_00000050 + in_stack_0000004c) * 0x10 |
           in_stack_00000050 + in_stack_0000004c >> 0x1c;
      in_stack_0000003c = in_stack_00000058;
      in_stack_0000001c = in_stack_0000005c;
      in_stack_00000040 = in_stack_00000050;
    }
    do {
      if ((unaff_ESI == *in_stack_00000048) ||
         (unaff_ESI == *(uint *)((int)&stack0x0000004c + in_stack_00000044))) {
FUN_0000266e:
        __security_check_cookie(in_stack_00000104 ^ (uint)&stack0x00000010);
        return;
      }
      in_stack_0000002c = in_stack_0000002c + 1;
      in_stack_00000010._3_1_ = in_stack_00000010._3_1_ >> 2;
      if (in_stack_00000028 <= in_stack_0000002c) goto FUN_0000266e;
      unaff_ESI = 0;
      iVar4 = 4;
      do {
        bVar2 = *unaff_EBX;
        unaff_EBX = unaff_EBX + 1;
        bVar1 = *unaff_EBP;
        unaff_EBP = unaff_EBP + 1;
        unaff_ESI = unaff_ESI << 8 | (uint)(bVar2 ^ bVar1);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      if (in_stack_00000010._3_1_ == 0) {
        in_stack_00000010._3_1_ = *in_stack_00000018 ^ *in_stack_00000014;
        in_stack_00000018 = in_stack_00000018 + 1;
        in_stack_00000014 = in_stack_00000014 + 1;
      }
      in_stack_00000020._3_1_ = in_stack_00000010._3_1_ & 3;
      uVar3 = (uint)(byte)((in_stack_00000010._3_1_ & 3) - 1);
      in_stack_00000044 = uVar3 * 4;
      in_stack_00000048 = &stack0x00000058 + uVar3;
    } while ((&stack0x00000058)[uVar3] != 0);
    iVar4 = in_stack_00000024;
    if (((in_stack_00000010._3_1_ & 2) != 0) && (in_stack_0000001c == 0)) {
      in_stack_00000034 = (byte *)ossGetUserNameR(in_stack_00000024);
      iVar4 = in_stack_00000024;
      if (in_stack_00000034 != (byte *)0x0) {
        in_stack_0000001c = 0;
        if (*in_stack_00000034 != 0) {
          bVar2 = *in_stack_00000034;
          in_stack_0000001c = 0;
          pbVar5 = in_stack_00000034;
          do {
            uVar3 = (uint)bVar2;
            pbVar5 = pbVar5 + 1;
            bVar2 = *pbVar5;
            in_stack_0000001c =
                 (in_stack_0000001c + uVar3) * 0x10 | in_stack_0000001c + uVar3 >> 0x1c;
          } while (bVar2 != 0);
        }
        in_stack_0000005c = in_stack_0000001c;
        (**(code **)(in_stack_00000024 + 8))(in_stack_00000034);
        in_stack_00000040 = in_stack_0000001c;
        in_stack_00000050 = in_stack_0000001c;
      }
    }
  } while( true );
}



//==== FUN_00002564 @ 00002564 ====

void __fastcall FUN_00002564(undefined4 param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *unaff_EBX;
  byte *unaff_EBP;
  uint unaff_ESI;
  undefined4 in_stack_00000010;
  byte *in_stack_00000014;
  byte *in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  byte *in_stack_00000034;
  uint in_stack_0000003c;
  uint in_stack_00000040;
  int in_stack_00000044;
  uint *in_stack_00000048;
  uint in_stack_0000004c;
  uint in_stack_00000050;
  uint in_stack_00000058;
  uint in_stack_0000005c;
  byte in_stack_00000064;
  uint in_stack_00000104;
  
  iVar4 = in_stack_00000024;
  bVar2 = param_2;
  do {
    if (((bVar2 & 1) != 0) && (in_stack_0000003c == 0)) {
      oss_gethostname(&stack0x00000064,0xa0);
      in_stack_00000034 = (byte *)gethostidex(iVar4 + 0xec);
      in_stack_0000004c = 0;
      if (in_stack_00000064 != 0) {
        pbVar5 = &stack0x00000064;
        do {
          bVar2 = *pbVar5;
          if ((bVar2 < 0x80) && (((&__ossCharFlags)[(uint)bVar2 * 2] & 8) != 0)) {
            bVar2 = bVar2 & 0xdf;
          }
          pbVar5 = pbVar5 + 1;
          in_stack_0000004c = (bVar2 + in_stack_0000004c) * 0x10 | bVar2 + in_stack_0000004c >> 0x1c
          ;
        } while (*pbVar5 != 0);
      }
      in_stack_0000003c =
           (int)(in_stack_00000034 + in_stack_0000004c) * 0x10 |
           (uint)(in_stack_00000034 + in_stack_0000004c) >> 0x1c;
      in_stack_00000058 = in_stack_0000003c;
      bVar2 = in_stack_00000010._3_1_;
    }
    if (in_stack_00000020._3_1_ == 3) {
      *in_stack_00000048 = in_stack_0000001c;
      *in_stack_00000048 =
           (in_stack_0000005c + in_stack_00000058) * 0x10 |
           in_stack_0000005c + in_stack_00000058 >> 0x1c;
      *(uint *)((int)&stack0x0000004c + in_stack_00000044) = in_stack_00000040;
      *(uint *)((int)&stack0x0000004c + in_stack_00000044) =
           (in_stack_00000050 + in_stack_0000004c) * 0x10 |
           in_stack_00000050 + in_stack_0000004c >> 0x1c;
      in_stack_0000003c = in_stack_00000058;
      in_stack_0000001c = in_stack_0000005c;
      in_stack_00000040 = in_stack_00000050;
    }
    do {
      if ((unaff_ESI == *in_stack_00000048) ||
         (unaff_ESI == *(uint *)((int)&stack0x0000004c + in_stack_00000044))) {
FUN_0000266e:
        __security_check_cookie(in_stack_00000104 ^ (uint)&stack0x00000010);
        return;
      }
      in_stack_0000002c = in_stack_0000002c + 1;
      in_stack_00000010._3_1_ = bVar2 >> 2;
      if (in_stack_00000028 <= in_stack_0000002c) goto FUN_0000266e;
      unaff_ESI = 0;
      iVar4 = 4;
      do {
        bVar2 = *unaff_EBX;
        unaff_EBX = unaff_EBX + 1;
        bVar1 = *unaff_EBP;
        unaff_EBP = unaff_EBP + 1;
        unaff_ESI = unaff_ESI << 8 | (uint)(bVar2 ^ bVar1);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      if (in_stack_00000010._3_1_ == 0) {
        in_stack_00000010._3_1_ = *in_stack_00000018 ^ *in_stack_00000014;
        in_stack_00000018 = in_stack_00000018 + 1;
        in_stack_00000014 = in_stack_00000014 + 1;
      }
      in_stack_00000020._3_1_ = in_stack_00000010._3_1_ & 3;
      uVar3 = (uint)(byte)((in_stack_00000010._3_1_ & 3) - 1);
      in_stack_00000044 = uVar3 * 4;
      in_stack_00000048 = &stack0x00000058 + uVar3;
      bVar2 = in_stack_00000010._3_1_;
    } while ((&stack0x00000058)[uVar3] != 0);
    iVar4 = in_stack_00000024;
    if (((in_stack_00000010._3_1_ & 2) != 0) && (in_stack_0000001c == 0)) {
      in_stack_00000034 = (byte *)ossGetUserNameR(in_stack_00000024);
      iVar4 = in_stack_00000024;
      bVar2 = in_stack_00000010._3_1_;
      if (in_stack_00000034 != (byte *)0x0) {
        in_stack_0000001c = 0;
        if (*in_stack_00000034 != 0) {
          bVar2 = *in_stack_00000034;
          in_stack_0000001c = 0;
          pbVar5 = in_stack_00000034;
          do {
            uVar3 = (uint)bVar2;
            pbVar5 = pbVar5 + 1;
            bVar2 = *pbVar5;
            in_stack_0000001c =
                 (in_stack_0000001c + uVar3) * 0x10 | in_stack_0000001c + uVar3 >> 0x1c;
          } while (bVar2 != 0);
        }
        in_stack_0000005c = in_stack_0000001c;
        (**(code **)(in_stack_00000024 + 8))(in_stack_00000034);
        in_stack_00000040 = in_stack_0000001c;
        in_stack_00000050 = in_stack_0000001c;
        bVar2 = in_stack_00000010._3_1_;
      }
    }
  } while( true );
}



//==== FUN_00002568 @ 00002568 ====

void __fastcall FUN_00002568(undefined4 param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *unaff_EBX;
  byte *unaff_EBP;
  uint unaff_ESI;
  int unaff_EDI;
  undefined4 in_stack_00000010;
  byte *in_stack_00000014;
  byte *in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  byte *in_stack_00000034;
  uint in_stack_0000003c;
  uint in_stack_00000040;
  int in_stack_00000044;
  uint *in_stack_00000048;
  uint in_stack_0000004c;
  uint in_stack_00000050;
  uint in_stack_00000058;
  uint in_stack_0000005c;
  byte in_stack_00000064;
  uint in_stack_00000104;
  
  bVar2 = param_2;
  do {
    if (((bVar2 & 1) != 0) && (in_stack_0000003c == 0)) {
      oss_gethostname(&stack0x00000064,0xa0);
      in_stack_00000034 = (byte *)gethostidex(unaff_EDI + 0xec);
      in_stack_0000004c = 0;
      if (in_stack_00000064 != 0) {
        pbVar5 = &stack0x00000064;
        do {
          bVar2 = *pbVar5;
          if ((bVar2 < 0x80) && (((&__ossCharFlags)[(uint)bVar2 * 2] & 8) != 0)) {
            bVar2 = bVar2 & 0xdf;
          }
          pbVar5 = pbVar5 + 1;
          in_stack_0000004c = (bVar2 + in_stack_0000004c) * 0x10 | bVar2 + in_stack_0000004c >> 0x1c
          ;
        } while (*pbVar5 != 0);
      }
      in_stack_0000003c =
           (int)(in_stack_00000034 + in_stack_0000004c) * 0x10 |
           (uint)(in_stack_00000034 + in_stack_0000004c) >> 0x1c;
      in_stack_00000058 = in_stack_0000003c;
      bVar2 = in_stack_00000010._3_1_;
    }
    if (in_stack_00000020._3_1_ == 3) {
      *in_stack_00000048 = in_stack_0000001c;
      *in_stack_00000048 =
           (in_stack_0000005c + in_stack_00000058) * 0x10 |
           in_stack_0000005c + in_stack_00000058 >> 0x1c;
      *(uint *)((int)&stack0x0000004c + in_stack_00000044) = in_stack_00000040;
      *(uint *)((int)&stack0x0000004c + in_stack_00000044) =
           (in_stack_00000050 + in_stack_0000004c) * 0x10 |
           in_stack_00000050 + in_stack_0000004c >> 0x1c;
      in_stack_0000003c = in_stack_00000058;
      in_stack_0000001c = in_stack_0000005c;
      in_stack_00000040 = in_stack_00000050;
    }
    do {
      if ((unaff_ESI == *in_stack_00000048) ||
         (unaff_ESI == *(uint *)((int)&stack0x0000004c + in_stack_00000044))) {
FUN_0000266e:
        __security_check_cookie(in_stack_00000104 ^ (uint)&stack0x00000010);
        return;
      }
      in_stack_0000002c = in_stack_0000002c + 1;
      in_stack_00000010._3_1_ = bVar2 >> 2;
      if (in_stack_00000028 <= in_stack_0000002c) goto FUN_0000266e;
      unaff_ESI = 0;
      iVar4 = 4;
      do {
        bVar2 = *unaff_EBX;
        unaff_EBX = unaff_EBX + 1;
        bVar1 = *unaff_EBP;
        unaff_EBP = unaff_EBP + 1;
        unaff_ESI = unaff_ESI << 8 | (uint)(bVar2 ^ bVar1);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      if (in_stack_00000010._3_1_ == 0) {
        in_stack_00000010._3_1_ = *in_stack_00000018 ^ *in_stack_00000014;
        in_stack_00000018 = in_stack_00000018 + 1;
        in_stack_00000014 = in_stack_00000014 + 1;
      }
      in_stack_00000020._3_1_ = in_stack_00000010._3_1_ & 3;
      uVar3 = (uint)(byte)((in_stack_00000010._3_1_ & 3) - 1);
      in_stack_00000044 = uVar3 * 4;
      in_stack_00000048 = &stack0x00000058 + uVar3;
      bVar2 = in_stack_00000010._3_1_;
    } while ((&stack0x00000058)[uVar3] != 0);
    unaff_EDI = in_stack_00000024;
    if (((in_stack_00000010._3_1_ & 2) != 0) && (in_stack_0000001c == 0)) {
      in_stack_00000034 = (byte *)ossGetUserNameR(in_stack_00000024);
      unaff_EDI = in_stack_00000024;
      bVar2 = in_stack_00000010._3_1_;
      if (in_stack_00000034 != (byte *)0x0) {
        in_stack_0000001c = 0;
        if (*in_stack_00000034 != 0) {
          bVar2 = *in_stack_00000034;
          in_stack_0000001c = 0;
          pbVar5 = in_stack_00000034;
          do {
            uVar3 = (uint)bVar2;
            pbVar5 = pbVar5 + 1;
            bVar2 = *pbVar5;
            in_stack_0000001c =
                 (in_stack_0000001c + uVar3) * 0x10 | in_stack_0000001c + uVar3 >> 0x1c;
          } while (bVar2 != 0);
        }
        in_stack_0000005c = in_stack_0000001c;
        (**(code **)(in_stack_00000024 + 8))(in_stack_00000034);
        in_stack_00000040 = in_stack_0000001c;
        in_stack_00000050 = in_stack_0000001c;
        bVar2 = in_stack_00000010._3_1_;
      }
    }
  } while( true );
}



//==== FUN_000025a7 @ 000025a7 ====

void __fastcall FUN_000025a7(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte *unaff_EBX;
  byte *unaff_EBP;
  uint unaff_ESI;
  uint unaff_EDI;
  undefined4 in_stack_00000010;
  byte *in_stack_00000014;
  byte *in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  byte *in_stack_00000034;
  uint uStack0000003c;
  uint in_stack_00000040;
  int in_stack_00000044;
  uint *in_stack_00000048;
  uint uStack0000004c;
  uint in_stack_00000050;
  uint uStack00000058;
  uint in_stack_0000005c;
  byte in_stack_00000064;
  uint in_stack_00000104;
  
  do {
    do {
      bVar2 = *param_2;
      if ((bVar2 < 0x80) && (((&__ossCharFlags)[(uint)bVar2 * 2] & 8) != 0)) {
        bVar2 = bVar2 & 0xdf;
      }
      param_2 = param_2 + 1;
      unaff_EDI = (bVar2 + unaff_EDI) * 0x10 | bVar2 + unaff_EDI >> 0x1c;
    } while (*param_2 != 0);
    do {
      uStack0000003c =
           (int)(in_stack_00000034 + unaff_EDI) * 0x10 |
           (uint)(in_stack_00000034 + unaff_EDI) >> 0x1c;
      uStack0000004c = unaff_EDI;
      uStack00000058 = uStack0000003c;
      do {
        if (in_stack_00000020._3_1_ == 3) {
          *in_stack_00000048 = in_stack_0000001c;
          *in_stack_00000048 =
               (in_stack_0000005c + uStack00000058) * 0x10 |
               in_stack_0000005c + uStack00000058 >> 0x1c;
          *(uint *)((int)&stack0x0000004c + in_stack_00000044) = in_stack_00000040;
          *(uint *)((int)&stack0x0000004c + in_stack_00000044) =
               (in_stack_00000050 + uStack0000004c) * 0x10 |
               in_stack_00000050 + uStack0000004c >> 0x1c;
          uStack0000003c = uStack00000058;
          in_stack_0000001c = in_stack_0000005c;
          in_stack_00000040 = in_stack_00000050;
        }
        do {
          if ((unaff_ESI == *in_stack_00000048) ||
             (unaff_ESI == *(uint *)((int)&stack0x0000004c + in_stack_00000044))) {
FUN_0000266e:
            __security_check_cookie(in_stack_00000104 ^ (uint)&stack0x00000010);
            return;
          }
          in_stack_0000002c = in_stack_0000002c + 1;
          in_stack_00000010._3_1_ = in_stack_00000010._3_1_ >> 2;
          if (in_stack_00000028 <= in_stack_0000002c) goto FUN_0000266e;
          unaff_ESI = 0;
          iVar5 = 4;
          do {
            bVar2 = *unaff_EBX;
            unaff_EBX = unaff_EBX + 1;
            bVar1 = *unaff_EBP;
            unaff_EBP = unaff_EBP + 1;
            unaff_ESI = unaff_ESI << 8 | (uint)(bVar2 ^ bVar1);
            iVar5 = iVar5 + -1;
          } while (iVar5 != 0);
          if (in_stack_00000010._3_1_ == 0) {
            in_stack_00000010._3_1_ = *in_stack_00000018 ^ *in_stack_00000014;
            in_stack_00000018 = in_stack_00000018 + 1;
            in_stack_00000014 = in_stack_00000014 + 1;
          }
          in_stack_00000020._3_1_ = in_stack_00000010._3_1_ & 3;
          in_stack_00000044 = (uint)(byte)((in_stack_00000010._3_1_ & 3) - 1) * 4;
          in_stack_00000048 = (uint *)((int)&stack0x00000058 + in_stack_00000044);
        } while (*(uint *)((int)&stack0x00000058 + in_stack_00000044) != 0);
        iVar5 = in_stack_00000024;
        if (((in_stack_00000010._3_1_ & 2) != 0) && (in_stack_0000001c == 0)) {
          in_stack_00000034 = (byte *)ossGetUserNameR(in_stack_00000024);
          iVar5 = in_stack_00000024;
          if (in_stack_00000034 != (byte *)0x0) {
            in_stack_0000001c = 0;
            if (*in_stack_00000034 != 0) {
              bVar2 = *in_stack_00000034;
              in_stack_0000001c = 0;
              pbVar4 = in_stack_00000034;
              do {
                uVar3 = (uint)bVar2;
                pbVar4 = pbVar4 + 1;
                bVar2 = *pbVar4;
                in_stack_0000001c =
                     (in_stack_0000001c + uVar3) * 0x10 | in_stack_0000001c + uVar3 >> 0x1c;
              } while (bVar2 != 0);
            }
            in_stack_0000005c = in_stack_0000001c;
            (**(code **)(in_stack_00000024 + 8))(in_stack_00000034);
            in_stack_00000040 = in_stack_0000001c;
            in_stack_00000050 = in_stack_0000001c;
          }
        }
      } while (((in_stack_00000010._3_1_ & 1) == 0) || (uStack0000003c != 0));
      oss_gethostname(&stack0x00000064,0xa0);
      in_stack_00000034 = (byte *)gethostidex(iVar5 + 0xec);
      unaff_EDI = 0;
    } while (in_stack_00000064 == 0);
    param_2 = &stack0x00000064;
  } while( true );
}



//==== FUN_000025bc @ 000025bc ====

void __fastcall FUN_000025bc(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  byte in_AL;
  uint uVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  byte *unaff_EBX;
  byte *unaff_EBP;
  uint unaff_ESI;
  uint unaff_EDI;
  undefined4 in_stack_00000010;
  byte *in_stack_00000014;
  byte *in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  byte *in_stack_00000034;
  uint uStack0000003c;
  uint in_stack_00000040;
  int in_stack_00000044;
  uint *in_stack_00000048;
  uint uStack0000004c;
  uint in_stack_00000050;
  uint uStack00000058;
  uint in_stack_0000005c;
  byte in_stack_00000064;
  uint in_stack_00000104;
  
  do {
    param_2 = param_2 + 1;
    unaff_EDI = (in_AL + unaff_EDI) * 0x10 | in_AL + unaff_EDI >> 0x1c;
    if (*param_2 == 0) {
      do {
        uStack0000003c =
             (int)(in_stack_00000034 + unaff_EDI) * 0x10 |
             (uint)(in_stack_00000034 + unaff_EDI) >> 0x1c;
        uStack0000004c = unaff_EDI;
        uStack00000058 = uStack0000003c;
        do {
          if (in_stack_00000020._3_1_ == 3) {
            *in_stack_00000048 = in_stack_0000001c;
            *in_stack_00000048 =
                 (in_stack_0000005c + uStack00000058) * 0x10 |
                 in_stack_0000005c + uStack00000058 >> 0x1c;
            *(uint *)((int)&stack0x0000004c + in_stack_00000044) = in_stack_00000040;
            *(uint *)((int)&stack0x0000004c + in_stack_00000044) =
                 (in_stack_00000050 + uStack0000004c) * 0x10 |
                 in_stack_00000050 + uStack0000004c >> 0x1c;
            uStack0000003c = uStack00000058;
            in_stack_0000001c = in_stack_0000005c;
            in_stack_00000040 = in_stack_00000050;
          }
          do {
            if ((unaff_ESI == *in_stack_00000048) ||
               (unaff_ESI == *(uint *)((int)&stack0x0000004c + in_stack_00000044))) {
FUN_0000266e:
              __security_check_cookie(in_stack_00000104 ^ (uint)&stack0x00000010);
              return;
            }
            in_stack_0000002c = in_stack_0000002c + 1;
            in_stack_00000010._3_1_ = in_stack_00000010._3_1_ >> 2;
            if (in_stack_00000028 <= in_stack_0000002c) goto FUN_0000266e;
            unaff_ESI = 0;
            iVar5 = 4;
            do {
              bVar4 = *unaff_EBX;
              unaff_EBX = unaff_EBX + 1;
              bVar1 = *unaff_EBP;
              unaff_EBP = unaff_EBP + 1;
              unaff_ESI = unaff_ESI << 8 | (uint)(bVar4 ^ bVar1);
              iVar5 = iVar5 + -1;
            } while (iVar5 != 0);
            if (in_stack_00000010._3_1_ == 0) {
              in_stack_00000010._3_1_ = *in_stack_00000018 ^ *in_stack_00000014;
              in_stack_00000018 = in_stack_00000018 + 1;
              in_stack_00000014 = in_stack_00000014 + 1;
            }
            in_stack_00000020._3_1_ = in_stack_00000010._3_1_ & 3;
            in_stack_00000044 = (uint)(byte)((in_stack_00000010._3_1_ & 3) - 1) * 4;
            in_stack_00000048 = (uint *)((int)&stack0x00000058 + in_stack_00000044);
          } while (*(uint *)((int)&stack0x00000058 + in_stack_00000044) != 0);
          iVar5 = in_stack_00000024;
          if (((in_stack_00000010._3_1_ & 2) != 0) && (in_stack_0000001c == 0)) {
            in_stack_00000034 = (byte *)ossGetUserNameR(in_stack_00000024);
            iVar5 = in_stack_00000024;
            if (in_stack_00000034 != (byte *)0x0) {
              in_stack_0000001c = 0;
              if (*in_stack_00000034 != 0) {
                bVar4 = *in_stack_00000034;
                in_stack_0000001c = 0;
                pbVar3 = in_stack_00000034;
                do {
                  uVar2 = (uint)bVar4;
                  pbVar3 = pbVar3 + 1;
                  bVar4 = *pbVar3;
                  in_stack_0000001c =
                       (in_stack_0000001c + uVar2) * 0x10 | in_stack_0000001c + uVar2 >> 0x1c;
                } while (bVar4 != 0);
              }
              in_stack_0000005c = in_stack_0000001c;
              (**(code **)(in_stack_00000024 + 8))(in_stack_00000034);
              in_stack_00000040 = in_stack_0000001c;
              in_stack_00000050 = in_stack_0000001c;
            }
          }
        } while (((in_stack_00000010._3_1_ & 1) == 0) || (uStack0000003c != 0));
        oss_gethostname(&stack0x00000064,0xa0);
        in_stack_00000034 = (byte *)gethostidex(iVar5 + 0xec);
        unaff_EDI = 0;
      } while (in_stack_00000064 == 0);
      param_2 = &stack0x00000064;
    }
    in_AL = *param_2;
    if ((in_AL < 0x80) && (((&__ossCharFlags)[(uint)in_AL * 2] & 8) != 0)) {
      in_AL = in_AL & 0xdf;
    }
  } while( true );
}



//==== FUN_000025d0 @ 000025d0 ====

void FUN_000025d0(void)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *in_EAX;
  int iVar4;
  byte *pbVar5;
  byte *unaff_EBX;
  byte *unaff_EBP;
  uint unaff_ESI;
  uint unaff_EDI;
  undefined4 in_stack_00000010;
  byte *in_stack_00000014;
  byte *in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  byte *in_stack_00000034;
  uint uStack0000003c;
  uint in_stack_00000040;
  int in_stack_00000044;
  uint *in_stack_00000048;
  uint uStack0000004c;
  uint in_stack_00000050;
  uint uStack00000058;
  uint in_stack_0000005c;
  byte in_stack_00000064;
  uint in_stack_00000104;
  
  do {
    uStack0000003c = (int)(in_EAX + unaff_EDI) * 0x10 | (uint)(in_EAX + unaff_EDI) >> 0x1c;
    uStack0000004c = unaff_EDI;
    uStack00000058 = uStack0000003c;
    do {
      if (in_stack_00000020._3_1_ == 3) {
        *in_stack_00000048 = in_stack_0000001c;
        *in_stack_00000048 =
             (in_stack_0000005c + uStack00000058) * 0x10 |
             in_stack_0000005c + uStack00000058 >> 0x1c;
        *(uint *)((int)&stack0x0000004c + in_stack_00000044) = in_stack_00000040;
        *(uint *)((int)&stack0x0000004c + in_stack_00000044) =
             (in_stack_00000050 + uStack0000004c) * 0x10 |
             in_stack_00000050 + uStack0000004c >> 0x1c;
        uStack0000003c = uStack00000058;
        in_stack_0000001c = in_stack_0000005c;
        in_stack_00000040 = in_stack_00000050;
      }
      do {
        if ((unaff_ESI == *in_stack_00000048) ||
           (unaff_ESI == *(uint *)((int)&stack0x0000004c + in_stack_00000044))) {
FUN_0000266e:
          __security_check_cookie(in_stack_00000104 ^ (uint)&stack0x00000010);
          return;
        }
        in_stack_0000002c = in_stack_0000002c + 1;
        in_stack_00000010._3_1_ = in_stack_00000010._3_1_ >> 2;
        if (in_stack_00000028 <= in_stack_0000002c) goto FUN_0000266e;
        unaff_ESI = 0;
        iVar4 = 4;
        do {
          bVar2 = *unaff_EBX;
          unaff_EBX = unaff_EBX + 1;
          bVar1 = *unaff_EBP;
          unaff_EBP = unaff_EBP + 1;
          unaff_ESI = unaff_ESI << 8 | (uint)(bVar2 ^ bVar1);
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
        if (in_stack_00000010._3_1_ == 0) {
          in_stack_00000010._3_1_ = *in_stack_00000018 ^ *in_stack_00000014;
          in_stack_00000018 = in_stack_00000018 + 1;
          in_stack_00000014 = in_stack_00000014 + 1;
        }
        in_stack_00000020._3_1_ = in_stack_00000010._3_1_ & 3;
        in_stack_00000044 = (uint)(byte)((in_stack_00000010._3_1_ & 3) - 1) * 4;
        in_stack_00000048 = (uint *)((int)&stack0x00000058 + in_stack_00000044);
      } while (*(uint *)((int)&stack0x00000058 + in_stack_00000044) != 0);
      iVar4 = in_stack_00000024;
      if (((in_stack_00000010._3_1_ & 2) != 0) && (in_stack_0000001c == 0)) {
        in_stack_00000034 = (byte *)ossGetUserNameR(in_stack_00000024);
        iVar4 = in_stack_00000024;
        if (in_stack_00000034 != (byte *)0x0) {
          in_stack_0000001c = 0;
          if (*in_stack_00000034 != 0) {
            bVar2 = *in_stack_00000034;
            in_stack_0000001c = 0;
            pbVar5 = in_stack_00000034;
            do {
              uVar3 = (uint)bVar2;
              pbVar5 = pbVar5 + 1;
              bVar2 = *pbVar5;
              in_stack_0000001c =
                   (in_stack_0000001c + uVar3) * 0x10 | in_stack_0000001c + uVar3 >> 0x1c;
            } while (bVar2 != 0);
          }
          in_stack_0000005c = in_stack_0000001c;
          (**(code **)(in_stack_00000024 + 8))(in_stack_00000034);
          in_stack_00000040 = in_stack_0000001c;
          in_stack_00000050 = in_stack_0000001c;
        }
      }
    } while (((in_stack_00000010._3_1_ & 1) == 0) || (uStack0000003c != 0));
    oss_gethostname(&stack0x00000064,0xa0);
    in_EAX = (byte *)gethostidex(iVar4 + 0xec);
    in_stack_00000034 = in_EAX;
    unaff_EDI = 0;
    if (in_stack_00000064 != 0) {
      pbVar5 = &stack0x00000064;
      do {
        bVar2 = *pbVar5;
        if ((bVar2 < 0x80) && (((&__ossCharFlags)[(uint)bVar2 * 2] & 8) != 0)) {
          bVar2 = bVar2 & 0xdf;
        }
        pbVar5 = pbVar5 + 1;
        unaff_EDI = (bVar2 + unaff_EDI) * 0x10 | bVar2 + unaff_EDI >> 0x1c;
      } while (*pbVar5 != 0);
    }
  } while( true );
}



//==== FUN_000025e5 @ 000025e5 ====

void __fastcall FUN_000025e5(undefined4 param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *unaff_EBX;
  byte *unaff_EBP;
  uint unaff_ESI;
  undefined4 in_stack_00000010;
  byte *in_stack_00000014;
  byte *in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  byte *in_stack_00000034;
  uint in_stack_0000003c;
  uint in_stack_00000040;
  int in_stack_00000044;
  uint *in_stack_00000048;
  uint in_stack_0000004c;
  uint in_stack_00000050;
  uint in_stack_00000058;
  uint in_stack_0000005c;
  byte in_stack_00000064;
  uint in_stack_00000104;
  
  do {
    if (in_stack_00000020._3_1_ == 3) {
      *in_stack_00000048 = in_stack_0000001c;
      *in_stack_00000048 =
           (in_stack_0000005c + in_stack_00000058) * 0x10 |
           in_stack_0000005c + in_stack_00000058 >> 0x1c;
      *(uint *)((int)&stack0x0000004c + in_stack_00000044) = in_stack_00000040;
      *(uint *)((int)&stack0x0000004c + in_stack_00000044) =
           (in_stack_00000050 + in_stack_0000004c) * 0x10 |
           in_stack_00000050 + in_stack_0000004c >> 0x1c;
      in_stack_0000003c = in_stack_00000058;
      in_stack_0000001c = in_stack_0000005c;
      in_stack_00000040 = in_stack_00000050;
    }
    do {
      if ((unaff_ESI == *in_stack_00000048) ||
         (unaff_ESI == *(uint *)((int)&stack0x0000004c + in_stack_00000044))) {
FUN_0000266e:
        __security_check_cookie(in_stack_00000104 ^ (uint)&stack0x00000010);
        return;
      }
      in_stack_0000002c = in_stack_0000002c + 1;
      in_stack_00000010._3_1_ = param_2 >> 2;
      if (in_stack_00000028 <= in_stack_0000002c) goto FUN_0000266e;
      unaff_ESI = 0;
      iVar4 = 4;
      do {
        bVar2 = *unaff_EBX;
        unaff_EBX = unaff_EBX + 1;
        bVar1 = *unaff_EBP;
        unaff_EBP = unaff_EBP + 1;
        unaff_ESI = unaff_ESI << 8 | (uint)(bVar2 ^ bVar1);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      if (in_stack_00000010._3_1_ == 0) {
        in_stack_00000010._3_1_ = *in_stack_00000018 ^ *in_stack_00000014;
        in_stack_00000018 = in_stack_00000018 + 1;
        in_stack_00000014 = in_stack_00000014 + 1;
      }
      in_stack_00000020._3_1_ = in_stack_00000010._3_1_ & 3;
      uVar3 = (uint)(byte)((in_stack_00000010._3_1_ & 3) - 1);
      in_stack_00000044 = uVar3 * 4;
      in_stack_00000048 = &stack0x00000058 + uVar3;
      param_2 = in_stack_00000010._3_1_;
    } while ((&stack0x00000058)[uVar3] != 0);
    iVar4 = in_stack_00000024;
    if (((in_stack_00000010._3_1_ & 2) != 0) && (in_stack_0000001c == 0)) {
      in_stack_00000034 = (byte *)ossGetUserNameR(in_stack_00000024);
      iVar4 = in_stack_00000024;
      if (in_stack_00000034 != (byte *)0x0) {
        in_stack_0000001c = 0;
        if (*in_stack_00000034 != 0) {
          bVar2 = *in_stack_00000034;
          in_stack_0000001c = 0;
          pbVar5 = in_stack_00000034;
          do {
            uVar3 = (uint)bVar2;
            pbVar5 = pbVar5 + 1;
            bVar2 = *pbVar5;
            in_stack_0000001c =
                 (in_stack_0000001c + uVar3) * 0x10 | in_stack_0000001c + uVar3 >> 0x1c;
          } while (bVar2 != 0);
        }
        in_stack_0000005c = in_stack_0000001c;
        (**(code **)(in_stack_00000024 + 8))(in_stack_00000034);
        in_stack_00000040 = in_stack_0000001c;
        in_stack_00000050 = in_stack_0000001c;
      }
    }
    param_2 = in_stack_00000010._3_1_;
    if (((in_stack_00000010._3_1_ & 1) != 0) && (in_stack_0000003c == 0)) {
      oss_gethostname(&stack0x00000064,0xa0);
      in_stack_00000034 = (byte *)gethostidex(iVar4 + 0xec);
      in_stack_0000004c = 0;
      if (in_stack_00000064 != 0) {
        pbVar5 = &stack0x00000064;
        do {
          bVar2 = *pbVar5;
          if ((bVar2 < 0x80) && (((&__ossCharFlags)[(uint)bVar2 * 2] & 8) != 0)) {
            bVar2 = bVar2 & 0xdf;
          }
          pbVar5 = pbVar5 + 1;
          in_stack_0000004c = (bVar2 + in_stack_0000004c) * 0x10 | bVar2 + in_stack_0000004c >> 0x1c
          ;
        } while (*pbVar5 != 0);
      }
      in_stack_0000003c =
           (int)(in_stack_00000034 + in_stack_0000004c) * 0x10 |
           (uint)(in_stack_00000034 + in_stack_0000004c) >> 0x1c;
      in_stack_00000058 = in_stack_0000003c;
      param_2 = in_stack_00000010._3_1_;
    }
  } while( true );
}



//==== FUN_0000263a @ 0000263a ====

void __fastcall FUN_0000263a(uint *param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *unaff_EBX;
  byte *unaff_EBP;
  uint unaff_ESI;
  undefined4 in_stack_00000010;
  byte *in_stack_00000014;
  byte *in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  byte *in_stack_00000034;
  uint in_stack_0000003c;
  uint in_stack_00000040;
  int in_stack_00000044;
  uint *in_stack_00000048;
  uint in_stack_0000004c;
  uint in_stack_00000050;
  uint in_stack_00000058;
  uint in_stack_0000005c;
  byte in_stack_00000064;
  uint in_stack_00000104;
  
  while ((unaff_ESI != *param_1 &&
         (unaff_ESI != *(uint *)((int)&stack0x0000004c + in_stack_00000044)))) {
    in_stack_0000002c = in_stack_0000002c + 1;
    in_stack_00000010._3_1_ = param_2 >> 2;
    if (in_stack_00000028 <= in_stack_0000002c) break;
    unaff_ESI = 0;
    iVar4 = 4;
    do {
      bVar2 = *unaff_EBX;
      unaff_EBX = unaff_EBX + 1;
      bVar1 = *unaff_EBP;
      unaff_EBP = unaff_EBP + 1;
      unaff_ESI = unaff_ESI << 8 | (uint)(bVar2 ^ bVar1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (in_stack_00000010._3_1_ == 0) {
      in_stack_00000010._3_1_ = *in_stack_00000018 ^ *in_stack_00000014;
      in_stack_00000018 = in_stack_00000018 + 1;
      in_stack_00000014 = in_stack_00000014 + 1;
    }
    in_stack_00000020._3_1_ = in_stack_00000010._3_1_ & 3;
    uVar3 = (uint)(byte)((in_stack_00000010._3_1_ & 3) - 1);
    in_stack_00000048 = &stack0x00000058 + uVar3;
    in_stack_00000044 = uVar3 * 4;
    param_1 = in_stack_00000048;
    param_2 = in_stack_00000010._3_1_;
    if (*in_stack_00000048 == 0) {
      iVar4 = in_stack_00000024;
      if (((in_stack_00000010._3_1_ & 2) != 0) && (in_stack_0000001c == 0)) {
        in_stack_00000034 = (byte *)ossGetUserNameR(in_stack_00000024);
        iVar4 = in_stack_00000024;
        if (in_stack_00000034 != (byte *)0x0) {
          in_stack_0000001c = 0;
          if (*in_stack_00000034 != 0) {
            bVar2 = *in_stack_00000034;
            in_stack_0000001c = 0;
            pbVar5 = in_stack_00000034;
            do {
              uVar3 = (uint)bVar2;
              pbVar5 = pbVar5 + 1;
              bVar2 = *pbVar5;
              in_stack_0000001c =
                   (in_stack_0000001c + uVar3) * 0x10 | in_stack_0000001c + uVar3 >> 0x1c;
            } while (bVar2 != 0);
          }
          in_stack_0000005c = in_stack_0000001c;
          (**(code **)(in_stack_00000024 + 8))(in_stack_00000034);
          in_stack_00000040 = in_stack_0000001c;
          in_stack_00000050 = in_stack_0000001c;
        }
      }
      if (((in_stack_00000010._3_1_ & 1) != 0) && (in_stack_0000003c == 0)) {
        oss_gethostname(&stack0x00000064,0xa0);
        in_stack_00000034 = (byte *)gethostidex(iVar4 + 0xec);
        in_stack_0000004c = 0;
        if (in_stack_00000064 != 0) {
          pbVar5 = &stack0x00000064;
          do {
            bVar2 = *pbVar5;
            if ((bVar2 < 0x80) && (((&__ossCharFlags)[(uint)bVar2 * 2] & 8) != 0)) {
              bVar2 = bVar2 & 0xdf;
            }
            pbVar5 = pbVar5 + 1;
            in_stack_0000004c =
                 (bVar2 + in_stack_0000004c) * 0x10 | bVar2 + in_stack_0000004c >> 0x1c;
          } while (*pbVar5 != 0);
        }
        in_stack_0000003c =
             (int)(in_stack_00000034 + in_stack_0000004c) * 0x10 |
             (uint)(in_stack_00000034 + in_stack_0000004c) >> 0x1c;
        in_stack_00000058 = in_stack_0000003c;
      }
      param_1 = in_stack_00000048;
      param_2 = in_stack_00000010._3_1_;
      if (in_stack_00000020._3_1_ == 3) {
        *in_stack_00000048 = in_stack_0000001c;
        *in_stack_00000048 =
             (in_stack_0000005c + in_stack_00000058) * 0x10 |
             in_stack_0000005c + in_stack_00000058 >> 0x1c;
        *(uint *)((int)&stack0x0000004c + in_stack_00000044) = in_stack_00000040;
        *(uint *)((int)&stack0x0000004c + in_stack_00000044) =
             (in_stack_00000050 + in_stack_0000004c) * 0x10 |
             in_stack_00000050 + in_stack_0000004c >> 0x1c;
        in_stack_0000003c = in_stack_00000058;
        in_stack_0000001c = in_stack_0000005c;
        in_stack_00000040 = in_stack_00000050;
      }
    }
  }
  __security_check_cookie(in_stack_00000104 ^ (uint)&stack0x00000010);
  return;
}



//==== FUN_0000263e @ 0000263e ====

void __fastcall FUN_0000263e(uint *param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  byte *pbVar6;
  byte *unaff_EBX;
  byte *unaff_EBP;
  uint unaff_ESI;
  uint unaff_EDI;
  undefined4 in_stack_00000010;
  byte *in_stack_00000014;
  byte *in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  byte *in_stack_00000034;
  uint in_stack_0000003c;
  uint in_stack_00000040;
  int in_stack_00000044;
  uint *in_stack_00000048;
  uint in_stack_0000004c;
  uint in_stack_00000050;
  uint in_stack_00000058;
  uint in_stack_0000005c;
  byte in_stack_00000064;
  uint in_stack_00000104;
  
  puVar4 = param_1;
  bVar2 = param_2;
  while ((unaff_ESI != *puVar4 &&
         (unaff_ESI != *(uint *)((int)&stack0x0000004c + in_stack_00000044)))) {
    in_stack_0000002c = in_stack_0000002c + 1;
    in_stack_00000010._3_1_ = bVar2 >> 2;
    if (in_stack_00000028 <= in_stack_0000002c) break;
    unaff_ESI = 0;
    iVar5 = 4;
    do {
      bVar2 = *unaff_EBX;
      unaff_EBX = unaff_EBX + 1;
      bVar1 = *unaff_EBP;
      unaff_EBP = unaff_EBP + 1;
      unaff_ESI = unaff_ESI << 8 | (uint)(bVar2 ^ bVar1);
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    if (in_stack_00000010._3_1_ == 0) {
      in_stack_00000010._3_1_ = *in_stack_00000018 ^ *in_stack_00000014;
      in_stack_00000018 = in_stack_00000018 + 1;
      in_stack_00000014 = in_stack_00000014 + 1;
    }
    in_stack_00000020._3_1_ = in_stack_00000010._3_1_ & 3;
    uVar3 = (uint)(byte)((in_stack_00000010._3_1_ & 3) - 1);
    in_stack_00000048 = &stack0x00000058 + uVar3;
    in_stack_00000044 = uVar3 * 4;
    puVar4 = in_stack_00000048;
    bVar2 = in_stack_00000010._3_1_;
    if (*in_stack_00000048 == 0) {
      iVar5 = in_stack_00000024;
      if (((in_stack_00000010._3_1_ & 2) != 0) && (unaff_EDI == 0)) {
        in_stack_00000034 = (byte *)ossGetUserNameR(in_stack_00000024);
        iVar5 = in_stack_00000024;
        if (in_stack_00000034 != (byte *)0x0) {
          in_stack_0000001c = 0;
          if (*in_stack_00000034 != 0) {
            bVar2 = *in_stack_00000034;
            in_stack_0000001c = 0;
            pbVar6 = in_stack_00000034;
            do {
              uVar3 = (uint)bVar2;
              pbVar6 = pbVar6 + 1;
              bVar2 = *pbVar6;
              in_stack_0000001c =
                   (in_stack_0000001c + uVar3) * 0x10 | in_stack_0000001c + uVar3 >> 0x1c;
            } while (bVar2 != 0);
          }
          in_stack_0000005c = in_stack_0000001c;
          (**(code **)(in_stack_00000024 + 8))(in_stack_00000034);
          in_stack_00000040 = in_stack_0000001c;
          in_stack_00000050 = in_stack_0000001c;
        }
      }
      if (((in_stack_00000010._3_1_ & 1) != 0) && (in_stack_0000003c == 0)) {
        oss_gethostname(&stack0x00000064,0xa0);
        in_stack_00000034 = (byte *)gethostidex(iVar5 + 0xec);
        in_stack_0000004c = 0;
        if (in_stack_00000064 != 0) {
          pbVar6 = &stack0x00000064;
          do {
            bVar2 = *pbVar6;
            if ((bVar2 < 0x80) && (((&__ossCharFlags)[(uint)bVar2 * 2] & 8) != 0)) {
              bVar2 = bVar2 & 0xdf;
            }
            pbVar6 = pbVar6 + 1;
            in_stack_0000004c =
                 (bVar2 + in_stack_0000004c) * 0x10 | bVar2 + in_stack_0000004c >> 0x1c;
          } while (*pbVar6 != 0);
        }
        in_stack_0000003c =
             (int)(in_stack_00000034 + in_stack_0000004c) * 0x10 |
             (uint)(in_stack_00000034 + in_stack_0000004c) >> 0x1c;
        in_stack_00000058 = in_stack_0000003c;
      }
      puVar4 = in_stack_00000048;
      bVar2 = in_stack_00000010._3_1_;
      unaff_EDI = in_stack_0000001c;
      if (in_stack_00000020._3_1_ == 3) {
        *in_stack_00000048 = in_stack_0000001c;
        *in_stack_00000048 =
             (in_stack_0000005c + in_stack_00000058) * 0x10 |
             in_stack_0000005c + in_stack_00000058 >> 0x1c;
        *(uint *)((int)&stack0x0000004c + in_stack_00000044) = in_stack_00000040;
        *(uint *)((int)&stack0x0000004c + in_stack_00000044) =
             (in_stack_00000050 + in_stack_0000004c) * 0x10 |
             in_stack_00000050 + in_stack_0000004c >> 0x1c;
        in_stack_0000003c = in_stack_00000058;
        in_stack_0000001c = in_stack_0000005c;
        in_stack_00000040 = in_stack_00000050;
        unaff_EDI = in_stack_0000005c;
      }
    }
  }
  __security_check_cookie(in_stack_00000104 ^ (uint)&stack0x00000010);
  return;
}



//==== FUN_00002642 @ 00002642 ====

void __fastcall FUN_00002642(uint *param_1,byte param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int in_EAX;
  int iVar4;
  byte *pbVar5;
  byte *unaff_EBX;
  byte *unaff_EBP;
  uint unaff_ESI;
  uint unaff_EDI;
  undefined4 in_stack_00000010;
  byte *in_stack_00000014;
  byte *in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  byte *in_stack_00000034;
  uint in_stack_0000003c;
  uint in_stack_00000040;
  int in_stack_00000044;
  uint *in_stack_00000048;
  uint in_stack_0000004c;
  uint in_stack_00000050;
  uint in_stack_00000058;
  uint in_stack_0000005c;
  byte in_stack_00000064;
  uint in_stack_00000104;
  
  bVar2 = param_2;
  while ((unaff_ESI != *param_1 && (unaff_ESI != *(uint *)((int)&stack0x0000004c + in_EAX)))) {
    in_stack_0000002c = in_stack_0000002c + 1;
    in_stack_00000010._3_1_ = bVar2 >> 2;
    if (in_stack_00000028 <= in_stack_0000002c) break;
    unaff_ESI = 0;
    iVar4 = 4;
    do {
      bVar2 = *unaff_EBX;
      unaff_EBX = unaff_EBX + 1;
      bVar1 = *unaff_EBP;
      unaff_EBP = unaff_EBP + 1;
      unaff_ESI = unaff_ESI << 8 | (uint)(bVar2 ^ bVar1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
    if (in_stack_00000010._3_1_ == 0) {
      in_stack_00000010._3_1_ = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + 1;
      in_stack_00000010._3_1_ = in_stack_00000010._3_1_ ^ *in_stack_00000014;
      in_stack_00000014 = in_stack_00000014 + 1;
    }
    in_stack_00000020._3_1_ = in_stack_00000010._3_1_ & 3;
    in_EAX = (uint)(byte)(in_stack_00000020._3_1_ - 1) * 4;
    param_1 = &stack0x00000058 + (byte)(in_stack_00000020._3_1_ - 1);
    in_stack_00000044 = in_EAX;
    in_stack_00000048 = param_1;
    bVar2 = in_stack_00000010._3_1_;
    if (*param_1 == 0) {
      iVar4 = in_stack_00000024;
      if ((((in_stack_00000010._3_1_ & 2) != 0) && (unaff_EDI == 0)) &&
         (in_stack_00000034 = (byte *)ossGetUserNameR(in_stack_00000024), iVar4 = in_stack_00000024,
         in_stack_00000034 != (byte *)0x0)) {
        in_stack_0000001c = 0;
        if (*in_stack_00000034 != 0) {
          bVar2 = *in_stack_00000034;
          in_stack_0000001c = 0;
          pbVar5 = in_stack_00000034;
          do {
            uVar3 = (uint)bVar2;
            pbVar5 = pbVar5 + 1;
            bVar2 = *pbVar5;
            in_stack_0000001c =
                 (in_stack_0000001c + uVar3) * 0x10 | in_stack_0000001c + uVar3 >> 0x1c;
          } while (bVar2 != 0);
        }
        in_stack_0000005c = in_stack_0000001c;
        (**(code **)(in_stack_00000024 + 8))(in_stack_00000034);
        in_stack_00000040 = in_stack_0000001c;
        in_stack_00000050 = in_stack_0000001c;
      }
      if (((in_stack_00000010._3_1_ & 1) != 0) && (in_stack_0000003c == 0)) {
        oss_gethostname(&stack0x00000064,0xa0);
        in_stack_00000034 = (byte *)gethostidex(iVar4 + 0xec);
        in_stack_0000004c = 0;
        if (in_stack_00000064 != 0) {
          pbVar5 = &stack0x00000064;
          do {
            bVar2 = *pbVar5;
            if ((bVar2 < 0x80) && (((&__ossCharFlags)[(uint)bVar2 * 2] & 8) != 0)) {
              bVar2 = bVar2 & 0xdf;
            }
            pbVar5 = pbVar5 + 1;
            in_stack_0000004c =
                 (bVar2 + in_stack_0000004c) * 0x10 | bVar2 + in_stack_0000004c >> 0x1c;
          } while (*pbVar5 != 0);
        }
        in_stack_0000003c =
             (int)(in_stack_00000034 + in_stack_0000004c) * 0x10 |
             (uint)(in_stack_00000034 + in_stack_0000004c) >> 0x1c;
        in_stack_00000058 = in_stack_0000003c;
      }
      in_EAX = in_stack_00000044;
      param_1 = in_stack_00000048;
      unaff_EDI = in_stack_0000001c;
      bVar2 = in_stack_00000010._3_1_;
      if (in_stack_00000020._3_1_ == 3) {
        *in_stack_00000048 = in_stack_0000001c;
        *in_stack_00000048 =
             (in_stack_0000005c + in_stack_00000058) * 0x10 |
             in_stack_0000005c + in_stack_00000058 >> 0x1c;
        *(uint *)((int)&stack0x0000004c + in_stack_00000044) = in_stack_00000040;
        *(uint *)((int)&stack0x0000004c + in_stack_00000044) =
             (in_stack_00000050 + in_stack_0000004c) * 0x10 |
             in_stack_00000050 + in_stack_0000004c >> 0x1c;
        in_stack_0000003c = in_stack_00000058;
        in_stack_0000001c = in_stack_0000005c;
        in_stack_00000040 = in_stack_00000050;
        unaff_EDI = in_stack_0000005c;
      }
    }
  }
  __security_check_cookie(in_stack_00000104 ^ (uint)&stack0x00000010);
  return;
}



//==== FUN_0000266a @ 0000266a ====

void FUN_0000266a(void)

{
  undefined4 uStack0000000c;
  undefined4 in_stack_0000002c;
  uint in_stack_00000104;
  
  uStack0000000c = 0x268f;
  __security_check_cookie(in_stack_00000104 ^ (uint)&stack0x00000010);
  return;
}



//==== FUN_0000266e @ 0000266e ====

void FUN_0000266e(void)

{
  undefined4 uStack0000000c;
  uint in_stack_00000104;
  
  uStack0000000c = 0x268f;
  __security_check_cookie(in_stack_00000104 ^ (uint)&stack0x00000010);
  return;
}



//==== FUN_00002679 @ 00002679 ====

void FUN_00002679(void)

{
  undefined4 uStack0000000c;
  uint in_stack_00000104;
  
  uStack0000000c = 0x268f;
  __security_check_cookie(in_stack_00000104 ^ (uint)&stack0x00000010);
  return;
}



//==== FUN_0000267d @ 0000267d ====

void FUN_0000267d(void)

{
  undefined4 uStack0000000c;
  uint in_stack_00000104;
  
  uStack0000000c = 0x268f;
  __security_check_cookie(in_stack_00000104 ^ (uint)&stack0x00000010);
  return;
}



//==== __init_hi @ 000026a0 ====

void __init_hi(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  oss_gethostname(param_3,param_4);
  uVar1 = gethostidex(param_1 + 0xec);
  *param_2 = uVar1;
  return;
}



//==== __init_nd @ 000026d0 ====

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



//==== FUN_000026e2 @ 000026e2 ====

uint __fastcall FUN_000026e2(undefined4 param_1,byte *param_2)

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



//==== FUN_000026f9 @ 000026f9 ====

uint __fastcall FUN_000026f9(undefined4 param_1,byte *param_2)

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



//==== FUN_0000270b @ 0000270b ====

void FUN_0000270b(void)

{
  return;
}



//==== _gmtime @ 00002710 ====

/* WARNING: Control flow encountered bad instruction data */

void _gmtime(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== ossInitRootContext2 @ 00002720 ====

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* __stdcall ossInitRootContext2,8 */

void ossInitRootContext2(undefined4 param_1,undefined4 param_2)

{
  ossInitRootContext(param_1,param_2);
  ___init_ul = __init_em;
  return;
}



//==== _time @ 00002740 ====

/* WARNING: Control flow encountered bad instruction data */

void _time(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== __gmtime64 @ 00003748 ====

/* WARNING: Control flow encountered bad instruction data */

void __gmtime64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== __time64 @ 00003750 ====

/* WARNING: Control flow encountered bad instruction data */

void __time64(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== ossInitRootContext @ 00003758 ====

/* WARNING: Control flow encountered bad instruction data */

void ossInitRootContext(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== ossGetUserNameR @ 00003760 ====

/* WARNING: Control flow encountered bad instruction data */

void __cdecl ossGetUserNameR(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== oss_gethostname @ 00003768 ====

/* WARNING: Control flow encountered bad instruction data */

void __cdecl oss_gethostname(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== gethostidex @ 00003770 ====

/* WARNING: Control flow encountered bad instruction data */

void __cdecl gethostidex(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



//==== __security_check_cookie @ 00003778 ====

/* WARNING: Control flow encountered bad instruction data */

void __fastcall __security_check_cookie(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



