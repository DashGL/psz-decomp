// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
extern int FUN_020c7590(int);
extern char *FUN_0202820c(int);

int FUN_020c7c00(int a, int b, char *c) {
    unsigned short u = b;
    int r;
    c[1] = 2;
    *(unsigned short *)(c + 2) = (unsigned char)((int)u >> 8) | ((u << 8) & 0xff00);
    r = FUN_020c7590(a);
    *(int *)(c + 4) = r;
    if (r == -1) {
        char *p = FUN_0202820c(a);
        if (p == 0) {
            return 0;
        }
        *(int *)(c + 4) = ***(int ****)(p + 0xc);
    }
    return 1;
}
