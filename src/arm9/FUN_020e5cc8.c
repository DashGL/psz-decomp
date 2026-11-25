// flags: -O4,p
typedef unsigned int uint;
typedef unsigned char byte;
typedef unsigned short ushort;
typedef unsigned long long ulonglong;
typedef int (*code_t)(int, int);

struct MatchCnt {
    int f00;
    int *f04;
    int f08;
    byte f0c;
    byte f0d;
    byte f0e[2];
    int f10;
    byte f14;
    byte f15;
    byte f16;
    byte f17;
    byte f18[2];
    ushort f1a;
    uint f1c;
    int f20;
    int f24[32];
    ushort fa4[32];
    int fe4;
    int fe8;
    ulonglong fec;
    int ff4[32];
    byte f174[0x18];
    int f18c;
    int f190;
    byte f194[8];
    int f19c;
    int f1a0;
    byte f1a4;
    byte f1a5;
    byte f1a6;
    byte f1a7;
    byte f1a8[0x0c];
    ushort f1b4;
    ushort f1b6;
    int f1b8;
    int f1bc;
    ulonglong f1c0;
    int f1c8;
    ulonglong f1cc;
    byte f1d4[8];
    uint f1dc;
    byte f1e0[0x20];
    int f200;
    int f204;
    int f208;
    int f20c;
    byte f210[0xc0];
    byte f2d0[0x3cc - 0x2d0];
    byte f3cc;
    byte f3cd[0x46c - 0x3cd];
    code_t f46c;
    int f470;
};

extern ulonglong FUN_02067e0c(void);
extern int FUN_020d36ec(int);
extern int FUN_020d374c(int);
extern int FUN_020d5e78(int);
extern int FUN_020d6674(int);
extern int FUN_020d8b30(int, int);
extern int FUN_020e143c(int);
extern int FUN_020e1534(void);
extern int FUN_020e2a58(int);
extern int FUN_020e4a2c(int, int);
extern int FUN_020e5564(int);
extern int FUN_020e5714(int, int, int);
extern int FUN_020e59d8(int, int, int, int, int, int);
extern byte FUN_020e67b4(int, int, int, int, int);
extern int FUN_020e69ec(int, int, int);
extern int FUN_020e6b38(int, int);
extern int FUN_020e6b74(int);
extern int FUN_020e6cf4(int, int, int);
extern int FUN_020e6f24(int);
extern int FUN_020e6fc4(int);
extern int FUN_020e7000(int);
extern int FUN_020e7194(int);
extern int FUN_020e7224(void);
extern int FUN_020e72d0(int);
extern int FUN_020e77b0(int, int);
extern int FUN_020e79fc(void);
extern int FUN_020e7a8c(int);
extern int FUN_020e7b3c(void);
extern int FUN_020e7b60(void);
extern int FUN_020e7c40(void);
extern int FUN_020e8028(int, int, int);
extern int FUN_020e83f0(int);
extern byte FUN_020e84e4(int, int);
extern int FUN_020e8574(void);
extern int FUN_020e88f8(int);
extern int FUN_020e8a00(int);
extern int FUN_020e92f8(int, int, int, int);
extern struct MatchCnt *FUN_020e961c(void);
extern int FUN_020e9628(int);
extern byte *DAT_0211de64;

int FUN_020e5cc8(int param_1, int param_2, int param_3, uint param_4, int *param_5, int param_6) {
    uint auStack_118[65];
    int iStack_11c;
    struct { unsigned char unassigned[2]; unsigned short port; int address; } socket;
    byte cmd;
    int iVar2;
    int iVar3;
    uint uVar4;
    int iVar5;
    byte *pcVar7;
    int iVar8 = 0;
    int i;

    if (FUN_020e961c() == 0 || FUN_020e961c()->f1a0 == 0) {
        return 1;
    }
    if (FUN_020e1534() == 5 && FUN_020e961c()->f1a0 == 1 &&
        param_2 == FUN_020e961c()->ff4[0]) {
        FUN_020e8574();
    }

    switch (param_1) {
    case 1:
    case 0xb:
        if (FUN_020e961c()->f15 != 0) {
            param_3 = param_5[1];
            param_4 = param_5[2] & 0xffff;
        }
        cmd = FUN_020e67b4(param_2, param_3, param_4, *param_5, (param_1 == 0xb) ? 1 : 0);
        if (cmd == 2) {
            FUN_020e961c()->f1dc = 0;
            if (FUN_020e6b74(FUN_020e69ec(param_2, param_3, param_4))) {
                return 0;
            }
            if (FUN_020e961c()->f15 == 2 && FUN_020e961c()->f46c != 0) {
                FUN_020e961c()->f46c(FUN_020e2a58(param_2), FUN_020e961c()->f470);
            }
            auStack_118[0] = FUN_020e961c()->f14;
            for (iVar8 = 1; iVar8 <= FUN_020e961c()->f14; iVar8++) {
                auStack_118[iVar8] = FUN_020e961c()->ff4[iVar8];
            }
            auStack_118[iVar8++] = FUN_020e961c()->f1c;
            auStack_118[iVar8++] = FUN_020e961c()->f1a;
            FUN_020e9628(0xb);
        } else if (cmd == 3 && FUN_020e961c()->f16 != 0) {
            if (FUN_020e961c()->f14 == FUN_020e961c()->f16 &&
                FUN_020e961c()->f15 == 2) {
                auStack_118[0] = 0x10;
                iVar8 = 1;
            }
        }
        if (cmd != 0xff) {
            if (FUN_020e6b74(FUN_020e59d8(cmd, param_2, param_3, param_4, (int)auStack_118, iVar8))) {
                return 0;
            }
        }
        break;
    case 2:
        if (FUN_020e961c()->f1a0 == 4 && param_2 == FUN_020e961c()->f204) {
            FUN_020e961c()->f208 = 0;
            FUN_020e961c()->f1a7 = 0;
            FUN_020e961c()->f1c8 = 0;
            FUN_020e961c()->f1bc = 0;
            FUN_020e961c()->f24[0] = *(param_5 + *param_5 + 1);
            FUN_020e961c()->fa4[0] = (ushort)*(param_5 + *param_5 + 2);
            FUN_020e961c()->f1b8 = *(param_5 + *param_5 + 1);
            FUN_020e961c()->f1b4 = (ushort)*(param_5 + *param_5 + 2);
            if (FUN_020e961c()->f15 == 1) {
                if (FUN_020e77b0((int)(param_5 + 1), *param_5)) {
                    if (FUN_020e961c()->f0d != 0) {
                        FUN_020e6b38(param_2, (int)param_5);
                    }
                } else {
                    if (FUN_020e6b74(FUN_020e6fc4(param_2))) {
                        return 0;
                    }
                    if (FUN_020e6b74(FUN_020e6cf4(0, 0, param_2))) {
                        return 0;
                    }
                    break;
                }
            }
            if (FUN_020e961c()->f15 == 0) {
                if (FUN_020e961c()->f0d != 0) {
                    FUN_020e6b38(param_2, (int)param_5);
                    if (FUN_020e6b74(FUN_020e7224())) {
                        return 0;
                    }
                }
                FUN_020e9628(6);
                iVar2 = FUN_020d8b30(FUN_020e961c()->fe4, 0);
                if (FUN_020e8a00(FUN_020e5714(0, 0, iVar2))) {
                    return 0;
                }
            } else {
                FUN_020e9628(5);
                if (FUN_020e88f8(FUN_020e5564(param_2))) {
                    return 0;
                }
            }
        }
        break;
    case 3:
        if (FUN_020e961c()->f1a0 == 4 && param_2 == FUN_020e961c()->f204) {
            if (param_6 > 0 && *param_5 == 0x10) {
                FUN_020e4a2c(0xd, 0);
                return 0;
            }
            return FUN_020e6f24(FUN_020e961c()->f204);
        }
        break;
    case 4:
        if (FUN_020e961c()->f1a0 == 4 && param_2 == FUN_020e961c()->f204) {
            FUN_020e961c()->f1cc = FUN_02067e0c();
            if ((FUN_020e961c()->f208 != 0 && FUN_020e961c()->f1a7 < 16) ||
                FUN_020e961c()->f15 == 3) {
                FUN_020e961c()->f1bc = 1;
                FUN_020e961c()->f1c0 = FUN_02067e0c();
                if (FUN_020e961c()->f15 != 3) {
                    FUN_020e961c()->f1a7++;
                }
            } else {
                FUN_020e961c()->f208 = 0;
                FUN_020e961c()->f1a7 = 0;
                if (FUN_020e961c()->f15 == 0) {
                    FUN_020e9628(3);
                    FUN_020e961c()->fe8 = 1;
                    FUN_020e961c()->fec = FUN_02067e0c();
                } else if (FUN_020e961c()->f15 == 1) {
                    FUN_020e6cf4(1, 0, 0);
                }
            }
        }
        break;
    case 5:
        if (FUN_020e961c()->f17 != 0 && param_2 == FUN_020e961c()->f20) {
            if (FUN_020e961c()->f15 == 2 && FUN_020e961c()->f0d == 1 &&
                param_2 == FUN_020e961c()->ff4[1]) {
                FUN_020d36ec(*FUN_020e961c()->f04);
            }
            if (!FUN_020e7000(param_2)) {
                return 0;
            }
        }
        break;
    case 6:
        {
            ushort port;
            iVar8 = *param_5;
            port = (ushort)param_5[1];
            if (FUN_020e961c()->f1a0 == 1) {
                FUN_020e9628(6);
            } else {
                if (FUN_020e961c()->f1a0 != 6 && FUN_020e961c()->f1a0 != 0xb) {
                    break;
                }
                if (param_2 != FUN_020e961c()->f20) {
                    break;
                }
            }
            FUN_020e961c()->f3cc = 0xff;
            if (param_2 != FUN_020e961c()->ff4[FUN_020e961c()->f0d + 1]) {
                FUN_020e961c()->ff4[FUN_020e961c()->f0d + 1] = param_2;
            }
            socket.address = iVar8;
            socket.port = (ushort)((((int)port >> 8) & 0xff) | (((int)port << 8) & 0xff00));
            FUN_020e961c()->f194[0] = 1;
            iVar2 = FUN_020d374c(*FUN_020e961c()->f04);
            FUN_020e92f8(0, iVar2, (int)&socket, (int)FUN_020e961c()->f194);
            {
                struct MatchCnt *mc = FUN_020e961c();
                mc->f18c = 0;
                mc->f190 = 0;
            }
        }
        break;
    case 7:
        if (FUN_020e961c()->f1a0 == 1 && param_2 == FUN_020e961c()->ff4[0]) {
            byte b;
            iStack_11c = *param_5;
            b = (byte)param_5[1];
            if (FUN_020e961c()->f15 == 1 && FUN_020e961c()->f1a6 == 0) {
                auStack_118[0] = FUN_020e83f0(iStack_11c);
                if (FUN_020e6b74(FUN_020e59d8(0x20, param_2, param_3, param_4, (int)auStack_118, 1))) {
                    return 0;
                }
            }
            FUN_020e961c()->ff4[FUN_020e961c()->f14 + 1] = iStack_11c;
            FUN_020e961c()->f2d0[FUN_020e961c()->f14 + 1] = b;
            FUN_020d6674(FUN_020e961c()->f10);
            if (FUN_020e961c()->f46c != 0) {
                FUN_020e961c()->f46c(FUN_020e2a58(iStack_11c), FUN_020e961c()->f470);
            }
        }
        break;
    case 8:
        if (FUN_020e961c()->f1a0 == 1 && param_2 == FUN_020e961c()->ff4[0]) {
            iStack_11c = *param_5;
            if (iStack_11c == 0) {
                int idx = param_5[1];
                int val = param_5[2];
                *(byte *)((uint)idx + (uint)FUN_020e961c() + 0x2d0) = (byte)val;
                FUN_020e961c()->ff4[idx] = FUN_020e961c()->f200;
                FUN_020e72d0(3);
            } else {
                int raw_b = param_5[2];
                int off4;
                byte b;
                iVar5 = param_5[1];
                b = (byte)raw_b;
                off4 = iVar5 * 4;
                if (iStack_11c == *(int *)((byte *)FUN_020e961c() + off4 + 0xf4) &&
                    iVar5 == FUN_020e961c()->f0d - 1) {
                    if (FUN_020e6b74(FUN_020e59d8(9, param_2, FUN_020e961c()->f24[0], FUN_020e961c()->fa4[0], (int)&iStack_11c, 1))) {
                        return 0;
                    }
                } else {
                    *(int *)((byte *)FUN_020e961c() + off4 + 0xf4) = iStack_11c;
                    *(byte *)((uint)iVar5 + (uint)FUN_020e961c() + 0x2d0) = b;
                    *(int *)((byte *)FUN_020e961c() + off4 + 0x24) = param_5[3];
                    FUN_020e961c()->fa4[iVar5] = (ushort)param_5[4];
                    FUN_020e961c()->f1b8 = param_5[3];
                    FUN_020e961c()->f1b4 = (ushort)param_5[4];
                    FUN_020e9628(5);
                    if (FUN_020e88f8(FUN_020e5564(iStack_11c))) {
                        return 0;
                    }
                    FUN_020e961c()->f1c8 = 0;
                    FUN_020e961c()->f1bc = 0;
                }
            }
        }
        break;
    case 9:
        if (FUN_020e961c()->f1a0 == 0xd) {
            if (*param_5 == FUN_020e961c()->ff4[FUN_020e961c()->f1a4 + 1]) {
                FUN_020e961c()->f1a4++;
                FUN_020e72d0(0);
            }
        }
        break;
    case 10:
        if (FUN_020e961c()->f1a0 == 1 || FUN_020e961c()->f1a0 == 0x12) {
            if (FUN_020e961c()->f15 == 0 || FUN_020e77b0((int)(param_5 + 1), *param_5) != 0) {
                FUN_020e961c()->f208 = param_5[1];
                FUN_020e961c()->f1a7 = 0;
            } else {
                FUN_020e961c()->f208 = 0;
            }
            if (FUN_020e961c()->f0d != 0) {
                FUN_020d36ec(*FUN_020e961c()->f04);
            } else {
                if (FUN_020e7b60()) {
                    return 0;
                }
            }
        }
        break;
    case 0xc:
        if (param_2 == FUN_020e961c()->ff4[0]) {
            if (FUN_020e961c()->f15 == 0 || FUN_020e961c()->f15 == 1) {
                if (!FUN_020e7194(param_2)) {
                    return 0;
                }
            } else if (FUN_020e961c()->f15 == 3) {
                FUN_020e961c()->f20c = param_2;
                FUN_020e7c40();
                FUN_020e7a8c(0);
            }
        }
        break;
    case 0xd:
    case 0xe:
    case 0xf:
        if (!FUN_020e8028(param_2, param_1, *param_5)) {
            return 0;
        }
        break;
    case 0x10:
        if (param_2 != FUN_020e961c()->ff4[0]) {
            return 1;
        }
        for (i = 0; i < param_6; i++) {
            iVar8 = FUN_020e84e4(param_5[i], 0);
            if (iVar8 != 0xff) {
                FUN_020e143c(iVar8);
            }
        }
        break;
    case 0x11:
        pcVar7 = DAT_0211de64;
        if (pcVar7 && *pcVar7 &&
            (((FUN_02067e0c() - *(ulonglong *)(pcVar7 + 0x10)) << 6) / 33514ULL) >= *(uint *)(pcVar7 + 4)) {
            auStack_118[0] = 1;
        } else {
            auStack_118[0] = 0;
        }
        if (FUN_020e6b74(FUN_020e59d8(0x12, param_2, param_3, param_4, (int)auStack_118, 1))) {
            return 0;
        }
        break;
    case 0x12:
        if (FUN_020e961c()->f1a0 == 0x13) {
            uVar4 = FUN_020e84e4(param_2, 0);
            if (uVar4 != 0xff) {
                *(uint *)(DAT_0211de64 + 8) |= (1u << uVar4);
                if (*param_5 != 0) {
                    *(uint *)(DAT_0211de64 + 0xc) |= (1u << uVar4);
                }
            }
        }
        break;
    case 0x13:
        FUN_020e4a2c(0xc, 0);
        return 0;
    case 0x20:
        if (FUN_020e961c()->f15 == 1 && FUN_020e961c()->f1a6 == 0) {
            for (i = 1; i <= FUN_020e961c()->f0d; i++) {
                if (param_2 == FUN_020e961c()->ff4[i]) {
                    if (*param_5 == 0) {
                        if (FUN_020e961c()->f1a0 == 0xb || FUN_020e961c()->f1a0 == 0xc) {
                            if (FUN_020e6b74(FUN_020e79fc())) {
                                return 0;
                            }
                        }
                        if (FUN_020e961c()->f19c != 0) {
                            FUN_020d5e78(FUN_020e961c()->f19c);
                            FUN_020e961c()->f19c = 0;
                        }
                        FUN_020e7b3c();
                    } else {
                        struct MatchCnt *mc = FUN_020e961c();
                        mc->f1dc |= (1u << FUN_020e84e4(param_2, 0));
                    }
                    break;
                }
            }
        }
        break;
    case 0x40:
        for (i = 1; i <= FUN_020e961c()->f0d; i++) {
            if (param_2 == FUN_020e961c()->ff4[i]) {
                if (FUN_020e6b74(FUN_020e59d8(0x41, param_2, param_3, param_4, 0, 0))) {
                    return 0;
                }
                break;
            }
        }
        break;
    case 0x41:
        break;
    }
    return 1;
}
