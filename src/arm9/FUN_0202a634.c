// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void *FUN_0202430c(unsigned int *, void *);
extern void FUN_02065774(void *, void *, unsigned int);
extern void FUN_020243ec(unsigned int, void *);
int FUN_0202a634(char *a, unsigned int b, void *c) {
    unsigned int sp0;
    do {
        void *r0 = FUN_0202430c(&sp0, c);
        if (sp0 == 0) {
            return -1;
        }
        if (sp0 > b) {
            sp0 = b;
        }
        FUN_02065774(r0, a, sp0);
        FUN_020243ec(sp0, c);
        b -= sp0;
        a += sp0;
    } while ((int)b > 0);
    return 0;
}
