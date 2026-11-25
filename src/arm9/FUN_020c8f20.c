// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
extern void FUN_020d1b74(int *, const void *);
extern int FUN_020cae6c(int *, int, int);
extern const char D_020fcda4[];

int FUN_020c8f20(int *a, int b) {
    int p;
    if (a == 0 || (p = *a) == 0) {
        return 2;
    }
    if (*(int *)(p + 0x108) != 0) {
        return 0;
    }
    if (*(int *)(p + 0x1f4) == 4) {
        FUN_020d1b74(a, D_020fcda4);
        return 2;
    }
    int r = FUN_020cae6c(a, b, 1);
    if (r != 0) {
        return r;
    }
    return 0;
}
