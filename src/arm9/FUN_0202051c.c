// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_020201c4(void *);
extern unsigned short FUN_0202018c(void *, unsigned short);

int FUN_0202051c(unsigned short *a) {
    if (FUN_020201c4(a) != 0) {
        return 0;
    }
    a[4] = FUN_0202018c(a, a[4]);
    a[6] = (unsigned short)(a[6] - 1);
    return 1;
}
