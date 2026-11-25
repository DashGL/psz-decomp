// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_020201ac(void *);
extern unsigned short FUN_0202018c(void *, unsigned short);

int FUN_020204c0(unsigned short *a) {
    if (FUN_020201ac(a) != 0) {
        return 0;
    }
    a[5] = FUN_0202018c(a, a[5]);
    a[6] = (unsigned short)(a[6] + 1);
    return 1;
}
