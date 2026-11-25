// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x60, exact bytes and relocation targets.
// flags: -O4,p
extern void *FUN_020c7bcc(int);
extern void FUN_02001540(void *, int, int);
extern int FUN_020c7788(int);
extern void *FUN_020c6da8(int, int, void *);
extern void FUN_020cf128(void);
int *FUN_020cf138(int *a, int b, int c) {
    int r5 = *a;
    int *r4 = (int *)FUN_020c7bcc(0x50);
    if (r4 == 0) {
        return 0;
    }
    FUN_02001540(r4, 0, 0x50);
    r4[0] = 0x64;
    r4[1] = c;
    r4[4] = b;
    r4[5] = FUN_020c7788(0) + 10000;
    r4[0x13] = *(int *)(r5 + 0x5d4);
    r4[0xf] = (int)FUN_020c6da8(0x18, 0, (void *)FUN_020cf128);
    *(int **)(r5 + 0x5d4) = r4;
    r4[0x11] = 0;
    r4[0x12] = 0;
    r4[0x10] = 0;
    return r4;
}
