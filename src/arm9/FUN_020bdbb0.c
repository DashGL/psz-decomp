// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe0, exact bytes and relocation targets.
extern int FUN_020e369c(void *, const char *, int);
extern void *FUN_020c0c0c(void);
extern void *FUN_020c0724(void *);
extern int FUN_020dd3fc(void *, long long);
extern int FUN_020c0a08(long long);
extern const char DAT_020f5b98[];
extern const char DAT_020f5ba0[];
extern const char DAT_020f5b90[];

int FUN_020bdbb0(void *a0, void *a1) {
    void *sp00 = a0;
    void *sp04 = a1;
    int sp08 = 0;
    int r7 = FUN_020e369c(sp04, DAT_020f5b98, sp08);
    int r6 = FUN_020e369c(sp04, DAT_020f5ba0, 0);
    long long r45 = ((long long)r7 << 32) | ((long long)r6 & 0xffffffffLL);
    void *r0 = FUN_020c0724(FUN_020c0c0c());
    if (r0 != 0 && FUN_020dd3fc(r0, r45) == 0) {
        r45 = 0;
    }
    if (r45 != 0) {
        int r0_2 = FUN_020e369c(sp04, DAT_020f5b90, 0);
        if (((r0_2 ^ r7) ^ r6) > 0) {
            int rem1 = ((r0_2 ^ r7) ^ r6) % 0x3ef;
            int v2 = *(int *)((char *)sp00 + 0xf54);
            int rem2 = v2 % 0x3ef;
            if ((rem2 == 0 && rem1 != 0) || (rem2 != 0 && rem1 == 0)) {
                r45 = 0;
            }
        } else {
            r45 = 0;
        }
    }
    if (r45 != 0) {
        if (FUN_020c0a08(r45) == 1) {
            sp08 = 0;
        } else {
            sp08 = 10000;
        }
    }
    return sp08;
}
