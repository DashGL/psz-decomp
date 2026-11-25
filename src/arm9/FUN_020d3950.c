// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// flags: -O4,p
extern int FUN_020d3828(void *);
extern int FUN_020c6e0c(int);
extern int FUN_020d2f8c(void *, int, int, int, int);
extern int FUN_020d2d78(void *, int, int, int);
int FUN_020d3950(char *a, int b, int c) {
    int st = *(int *)(a + 0xc);
    if (st != 5 && st != 6) {
        if (FUN_020d3828(a) == 0) {
            return 0;
        }
    } else if (FUN_020c6e0c(*(int *)(a + 0x9c)) != 0) {
        if (FUN_020d2f8c(a, 0, b, c, 1) != 0) {
            return 1;
        }
        return 0;
    } else {
        if (FUN_020d2d78(a, b, c, 1) == 0) {
            return 0;
        }
    }
    return 1;
}
