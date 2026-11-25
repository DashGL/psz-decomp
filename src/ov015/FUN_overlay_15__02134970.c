// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xa0, exact bytes and relocation targets.
extern void FUN_020641b0(void);
extern unsigned char *data_0213e8e8;

int FUN_overlay_15__02134970(void) {
    unsigned char st = data_0213e8e8[0xa90];

    if (st == 1 || st == 0x14 || st == 0x17 || st == 0x1a || st == 0x1d) {
        data_0213e8e8[0xa90] = 0x22;
        data_0213e8e8[0xaac] = 0;
        return 1;
    }
    if (st == 4 || st == 5 || st == 6 || st == 0xd) {
        if (st == 4 && *(unsigned int *)(data_0213e8e8 + 0xa98) < 6) {
            return 0;
        }
        FUN_020641b0();
        data_0213e8e8[0xa90] = 0x10;
        data_0213e8e8[0xaac] = 2;
        return 1;
    }
    if ((unsigned char)(st + 0xf7) <= 1) {
        data_0213e8e8[0xa90] = 0x20;
        return 1;
    }
    if (st == 0xc) {
        data_0213e8e8[0xa90] = 0x22;
        return 1;
    }
    return 0;
}
