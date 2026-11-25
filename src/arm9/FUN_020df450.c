// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x34, exact bytes and relocation targets.
extern int FUN_020df414(int, int);
extern int FUN_02003c70(int);
extern unsigned int FUN_020e03ac(int, int, char *, unsigned int);

unsigned int FUN_020df450(int a, int b, char *buf, unsigned int cap) {
    int s = FUN_020df414(a, b);
    if (s == 0) {
        return 0;
    }
    unsigned int r = FUN_020e03ac(s, FUN_02003c70(s), buf, cap);
    if (r != ~0u && r < cap) {
        buf[r] = 0;
    }
    return r;
}
