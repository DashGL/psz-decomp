// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x114, exact bytes and relocation targets.
// flags: -O4,s
extern unsigned char *FUN_020dac74(int);
extern int FUN_020dad04(void);
extern void FUN_020dbd68(unsigned short);
extern int FUN_020dafe0(void *, int, void *);
extern int FUN_020db038(void *, void *);
extern int FUN_020db0b8(int, void *, int, void *);
extern void FUN_020db1f0(int, void *);

void FUN_020dae58(unsigned char *arg0) {
    int r6 = -1;
    unsigned char *p4 = FUN_020dac74(0x10);
    unsigned char r7;
    FUN_020dac74(1)[0xb] = 1;
    switch (FUN_020dad04()) {
    case 3: {
        unsigned short v = *(unsigned short *)(arg0 + 0xa);
        r7 = p4[0xd11];
        if (v == 0 || arg0[0xc] == 0) {
            FUN_020dbd68(*(unsigned short *)(arg0 + 0x36));
        } else if (v == 1 && arg0[0xc] == 0x20) {
            FUN_020dbd68(*(unsigned short *)(arg0 + 0x36));
            r6 = FUN_020dafe0(arg0, p4[0xd10], p4 + 0x300);
        } else {
            r6 = FUN_020dafe0(arg0, p4[0xd10], p4 + 0x300);
        }
        break;
    }
    case 4:
        r7 = (unsigned char)(*(unsigned short *)(p4 + p4[0xd0f] * 0xc0 + 0x4a6) - 1);
        r6 = FUN_020db038(arg0, p4);
        if (r6 >= 0) {
            (p4 + 0x447)[p4[0xd0f] * 4] |= 0x80;
        }
        break;
    case 5:
        r7 = p4[0xd11];
        r6 = FUN_020dafe0(arg0, 1, p4 + 0x300 + p4[0xd0f] * 0x24);
        if (r6 >= 0) {
            unsigned char *dst = p4 + 0x300 + p4[0xd0f] * 0x24;
            *dst = (*dst & ~0xf) | 1;
        }
        break;
    default:
        return;
    }
    if (r6 >= 0) {
        FUN_020db1f0(FUN_020db0b8(r6, arg0, r7, p4), p4);
    }
}
