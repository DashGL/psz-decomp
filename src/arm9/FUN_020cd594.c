// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x30, exact bytes and relocation targets.
extern int FUN_020cb184(void *, char *, int);

int FUN_020cd594(char **p, int a, int b) {
    char *q = *p;
    int r = FUN_020cb184(p, q + 0x5f0, a);
    if (r == 0) {
        r = FUN_020cb184(p, q + 0x5f0, b);
        if (r == 0) {
            return 0;
        }
    }
    return r;
}
