// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// flags: -O4,p
extern int FUN_020cf7a8(void *, int, void *);
int FUN_020c8e5c(int **a, int b, int *c) {
    int p;
    int *r3;
    if (a == 0 || (r3 = *a) == 0) {
        return 2;
    }
    if (r3[0x42] != 0) {
        *c = 0;
        return 0;
    }
    if (FUN_020cf7a8(a, b, &p) != 0 && *(int **)(p + 8) != 0) {
        *c = **(int **)(p + 8);
    } else if (FUN_020cf7a8(a, b, &p) != 0 && *(int **)(p + 0xc) != 0) {
        *c = **(int **)(p + 0xc);
    } else {
        *c = -1;
    }
    return 0;
}
