// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x3c, exact bytes and relocation targets.
extern void FUN_020d1b74(void *, const char *);
extern int FUN_020cadc8(void *, int);
extern const char D_020fcda4[];

int FUN_020c8c44(char **p, int a) {
    char *q;
    if (p == 0 || (q = *p) == 0) {
        return 2;
    }
    if (*(int *)(q + 0x108) != 0) {
        return 0;
    }
    if (*(int *)(q + 0x1f4) == 4) {
        FUN_020d1b74(p, D_020fcda4);
        return 2;
    }
    return FUN_020cadc8(p, a);
}
