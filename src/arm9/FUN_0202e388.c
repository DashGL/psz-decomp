// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x9c, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);
extern char *DAT_02108c0c;

unsigned int FUN_0202e388(unsigned int param_1) {
    int s = FUN_020683d4();
    unsigned int mask = 0;
    char *p = DAT_02108c0c;
    unsigned int old = *(unsigned int *)(p + 0x2264);
    if (p == 0) {
        FUN_020683e8(s);
        return 0;
    }
    if (param_1 & 0x8000) {
        mask |= 0x3ffe;
        if ((param_1 & 0x3ffe) == 0) {
            param_1 |= 0xa082;
        }
    }
    if (param_1 & 0x20000) {
        mask |= 0x10000;
    }
    if (param_1 & 0x80000) {
        mask |= 0x40000;
    }
    if (param_1 & 0x200000) {
        mask |= 0x100000;
    }
    if (param_1 & 0x800000) {
        mask |= 0x400000;
    }
    *(unsigned int *)(p + 0x2264) = param_1 | (old & ~mask);
    FUN_020683e8(s);
    return old;
}
