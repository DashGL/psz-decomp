// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern unsigned int FUN_02027cc8(void *);
int FUN_0202865c(void *a, unsigned int *b) {
    unsigned int v = FUN_02027cc8(a);
    if (v == 0) {
        return 0;
    }
    *b = ((v >> 24) & 0xff) | ((v >> 8) & 0xff00) | ((v << 8) & 0xff0000) | ((v << 24) & 0xff000000u);
    return 1;
}
