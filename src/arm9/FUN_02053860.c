// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x90, exact bytes and relocation targets.
// flags: -noThumb
struct S53860_inner {
    unsigned short f00;
    unsigned char pad02[0xba];
    unsigned short fbc;
    unsigned char padbe[0xc4];
    unsigned short f182;
};
struct S53860 {
    int f00;
    struct S53860_inner *f04;
};
extern struct S53860 *FUN_02052f70(void);
extern int FUN_02052f80(void);
extern void FUN_020673d4(void *a, int b);

unsigned short FUN_02053860(void) {
    struct S53860 *r4 = FUN_02052f70();
    if (FUN_02052f80() != 0) {
        return 0;
    }
    FUN_020673d4(r4->f04, 2);
    switch (r4->f04->f00) {
    case 9:
        FUN_020673d4(&r4->f04->f182, 2);
        if (r4->f04->f182 == 0) {
            return 0;
        }
    case 10:
    case 11:
        FUN_020673d4(&r4->f04->fbc, 2);
        return r4->f04->fbc;
    default:
        return 0;
    }
}
