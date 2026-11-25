// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
extern int FUN_020daa48(void);
extern struct { int f0; int f4; } D_0211dc9c;

int FUN_020e09c8(void) {
    int p = D_0211dc9c.f4;
    if (p == 0) {
        return 1;
    }
    unsigned short st = *(unsigned short *)(p + 4);
    if (st == 8) {
        return 0;
    }
    if (st == 1) {
        D_0211dc9c.f4 = 0;
        return 1;
    }
    *(unsigned short *)(p + 4) = 5;
    if (FUN_020daa48() != 0) {
        D_0211dc9c.f4 = 0;
        return 1;
    }
    return 0;
}
