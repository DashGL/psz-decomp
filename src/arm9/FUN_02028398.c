// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_02027d14(unsigned int, unsigned int);
int FUN_02028398(unsigned int *a, unsigned int *b) {
    unsigned int v1 = *b;
    unsigned int v0 = *a;
    unsigned int s0 = ((v0 >> 24) & 0xff) | ((v0 >> 8) & 0xff00) | ((v0 << 8) & 0xff0000) | ((v0 << 24) & 0xff000000);
    unsigned int s1 = ((v1 >> 24) & 0xff) | ((v1 >> 8) & 0xff00) | ((v1 << 8) & 0xff0000) | ((v1 << 24) & 0xff000000);
    return FUN_02027d14(s0, s1);
}
