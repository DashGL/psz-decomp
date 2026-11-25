// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
extern int FUN_02003e24(int, int);

int FUN_020df414(char *p, int a) {
    int i = 0;
    char *q = p;
    for (; i < 0x20; i++, q += 8) {
        int s = *(int *)(q + 0x1a38);
        if (s == 0) {
            break;
        }
        if (FUN_02003e24(a, s) == 0) {
            return *(int *)(p + i * 8 + 0x1a3c);
        }
    }
    return 0;
}
