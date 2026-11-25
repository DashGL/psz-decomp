// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_02068400(void);
extern int FUN_020683d4(void);
extern int FUN_02065904(int, short *);
extern int FUN_02068414(int);
extern int FUN_020683e8(int);
int FUN_0206606c(int a, short *b, void (*c)(void), int d) {
    int r5 = d ? FUN_02068400() : FUN_020683d4();
    int r4 = FUN_02065904(a, b);
    if (r4 == 0) {
        if (c != 0) {
            c();
        }
        b[2] = a;
    }
    if (d) {
        FUN_02068414(r5);
    } else {
        FUN_020683e8(r5);
    }
    return r4;
}
