// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc4, exact bytes and relocation targets.
// flags: -noThumb
extern void *FUN_02052f70(void);
extern int FUN_02052fe4(int, int, int);
extern void FUN_020673d4(void *, int);

int FUN_02053698(void) {
    void *r4 = FUN_02052f70();
    int r5;
    unsigned short s3e;
    if (FUN_02052fe4(2, 7, 8) != 0) {
        return 0;
    }
    FUN_020673d4((char *)*((void **)r4 + 1) + 0xc, 4);
    if (*(int *)((char *)*((void **)r4 + 1) + 0xc) == 1) {
        return 0;
    }
    FUN_020673d4((char *)*((void **)r4 + 1) + 0x188, 2);
    r5 = (*(unsigned short *)((char *)*((void **)r4 + 1) + 0x188) == 0) ? 1 : 0;
    FUN_020673d4((char *)*((void **)r4 + 1) + 0x3e, 2);
    s3e = *(unsigned short *)((char *)*((void **)r4 + 1) + 0x3e);
    if (r5 == 1) {
        FUN_020673d4((char *)*((void **)r4 + 1) + 0xf8, 2);
        return (((s3e + 0xc) * *(unsigned short *)((char *)*((void **)r4 + 1) + 0xf8) + 0x29) & ~0x1f) << 1;
    }
    return ((s3e + 0x51) & ~0x1f) << 1;
}
