// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
extern int FUN_020c7540(int, int, int, int, void *, int);

int FUN_020d5880(int a, int b, int c, int d, int e) {
    struct {
        unsigned char b0;
        unsigned char b1;
        unsigned short h2;
        int w4;
    } s;
    s.b1 = 2;
    s.h2 = ((c >> 8) & 0xff) | ((c << 8) & 0xff00);
    s.w4 = b;
    return FUN_020c7540(a, d, e, 0, &s, 8);
}
