// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
extern void FUN_020bba64(void);
extern void FUN_020bbb18(void);
extern int D_0211b2c0[];

void FUN_020bb288(void) {
    switch (D_0211b2c0[0x14]) {
    case 0:
        D_0211b2c0[0x14] = 2;
        D_0211b2c0[0x13] = 4;
        FUN_020bba64();
        break;
    case 2:
        D_0211b2c0[0x13] = 4;
        break;
    case 3:
        D_0211b2c0[0x14] = 2;
        D_0211b2c0[0x13] = 4;
        FUN_020bbb18();
        break;
    case 1:
    case 4:
        break;
    }
}
