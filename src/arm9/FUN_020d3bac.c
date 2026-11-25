// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
extern int FUN_020d3828(void *);
extern void FUN_020d3424(void *);
extern int FUN_020d4ab0(void *);
extern int FUN_020d2cf0(void *, int, int, int);

int FUN_020d3bac(char *a, int b, int c) {
    if (*(int *)(a + 0xc) != 1) {
        if (FUN_020d3828(a) != 0) {
            return 1;
        }
        return 0;
    }
    FUN_020d3424(a);
    if (FUN_020d4ab0(a) == 0) {
        return 0;
    }
    if (FUN_020d2cf0(a, 2, b, c) != 0) {
        return 1;
    }
    return 0;
}
