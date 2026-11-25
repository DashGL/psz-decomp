// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_02052f9c(void);
extern void FUN_020673f0(int, int);
extern void FUN_02052de4(int, int);
extern int FUN_02052e54(int, int, unsigned int, int, int);

int FUN_02055614(int a, unsigned int b, int c, int d) {
    int res = FUN_02052f9c();
    if (res != 0) {
        return res;
    }
    if (b > 3) {
        return 6;
    }
    if (b != 0) {
        if (d == 0) {
            return 6;
        }
        FUN_020673f0(d, 0x50);
    }
    FUN_02052de4(0x27, a);
    res = FUN_02052e54(0x27, 3, b, d, c);
    if (res == 0) {
        return 2;
    }
    return res;
}
