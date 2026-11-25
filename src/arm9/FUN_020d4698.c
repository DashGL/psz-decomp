// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
extern int FUN_020d4584(void *, int, int, int *);
extern void FUN_020d2b30(void *, const void *, int);
extern int FUN_020d4640(void *);

int FUN_020d4698(char *a, const void *b, int c) {
    int flag;
    if (FUN_020d4584(a, 0, c + 7, &flag) == 0) {
        return 0;
    }
    if (flag != 0) {
        return 1;
    }
    FUN_020d2b30(a + 0x50, b, c);
    if (FUN_020d4640(a) != 0) {
        return 1;
    }
    return 0;
}
