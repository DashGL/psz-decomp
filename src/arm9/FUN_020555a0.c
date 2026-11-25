// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_02052f9c(void);
extern void FUN_020673f0(void *, int);
extern void FUN_02052de4(int, int);
extern int FUN_02052e54(int, int, unsigned int, void *);
int FUN_020555a0(int a, unsigned int b, void *c) {
    int res = FUN_02052f9c();
    if (res != 0) {
        return res;
    }
    if (b > 3) {
        return 6;
    }
    if (b != 0) {
        if (c == 0) {
            return 6;
        }
        FUN_020673f0(c, 0x50);
    }
    FUN_02052de4(0x14, a);
    res = FUN_02052e54(0x14, 2, b, c);
    if (res == 0) {
        return 2;
    }
    return res;
}
