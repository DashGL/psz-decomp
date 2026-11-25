// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
extern int FUN_020c7590(int);
extern int FUN_020da5c4(char *, int, unsigned short, int, int);

int FUN_020d8a48(char *p, int a, int b, int c, int d) {
    int r = FUN_020c7590(a);
    return FUN_020da5c4(p + 0x4c, r, ((b >> 8) & 0xff) | ((b << 8) & 0xff00), c, d);
}
