// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xde, exact bytes and relocation targets.
extern void *FUN_020e961c(void);
extern int FUN_020e59d8(int, int, int, int, void *, int);
extern int FUN_020e6b74(int);
extern int FUN_020e84e4(int, int);
extern void FUN_020e143c(int);

int FUN_020e7c68(int a0) {
    int sp94[32];
    int sp14[32];
    int r4 = 0;
    int sp10 = 0;
    int r6;
    for (r6 = 1; r6 <= *((unsigned char *)FUN_020e961c() + 0xd); r6++) {
        if (a0 & (1 << *((unsigned char *)FUN_020e961c() + r6 + 0x2d0))) {
            sp14[sp10] = *(int *)((char *)FUN_020e961c() + r6 * 4 + 0xf4);
            sp10++;
        } else {
            sp94[r4] = *(int *)((char *)FUN_020e961c() + r6 * 4 + 0xf4);
            r4++;
        }
    }
    for (r6 = 0; r6 < sp10; r6++) {
        if (FUN_020e6b74(FUN_020e59d8(0x10, sp14[r6], 0, 0, sp94, r4)) != 0) {
            return 0;
        }
    }
    *((unsigned char *)FUN_020e961c() + 0x1a8) = 2;
    for (r6 = 0; r6 < r4; r6++) {
        int v = FUN_020e84e4(sp94[r6], 0);
        if (v != 0xff) {
            FUN_020e143c(v);
        }
    }
    *((unsigned char *)FUN_020e961c() + 0x1a8) = 0;
    return 1;
}
