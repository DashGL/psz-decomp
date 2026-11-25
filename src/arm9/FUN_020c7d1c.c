// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x7c, exact bytes and relocation targets.
// flags: -O4,s
extern char DAT_0211cf78[];
extern unsigned short DAT_0211cf6c[];
extern char DAT_020fcd68[];
int FUN_020015ac(const void *a, const void *b, int n);

int FUN_020c7d1c(char *a, int b, unsigned short *c, unsigned int *d) {
    if (b < 7) {
        return 1;
    }
    if (FUN_020015ac(c + 2, DAT_0211cf78, 4) != 0) {
        return 1;
    }
    if (c[1] != DAT_0211cf6c[5]) {
        return 1;
    }
    if (FUN_020015ac(a, DAT_020fcd68, 3) != 0) {
        return 1;
    }
    unsigned int v = ((a[3] << 24) & 0xff000000) | ((a[4] << 16) & 0x00ff0000);
    v |= (a[5] << 8) & 0x0000ff00;
    *d = v | (a[6] & 0x000000ff);
    return 0;
}
