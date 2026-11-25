// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
// flags: -noThumb
struct Sub {
    char pad[0x2260];
    int f2260;
    char pad2[0x68];
    int f22cc;
};

extern struct Sub *DAT_02108c0c;
extern void FUN_0202e940(void);
extern int FUN_020683d4(void);
extern void FUN_020681f0(void *);
extern void FUN_02068114(void *, unsigned long long, void *, int);
extern void FUN_020683e8(int);

void FUN_0202e834(int r5) {
    int r4 = FUN_020683d4();
    struct Sub *p = DAT_02108c0c;
    if (p->f2260 == 9 && r5 != 9) {
        FUN_020681f0(&p->f22cc);
    }
    if (DAT_02108c0c->f2260 != 11) {
        DAT_02108c0c->f2260 = r5;
    }
    if (r5 == 9) {
        FUN_02068114(&DAT_02108c0c->f22cc, 0x022f5341ULL, (void *)FUN_0202e940, 0);
    }
    FUN_020683e8(r4);
}
