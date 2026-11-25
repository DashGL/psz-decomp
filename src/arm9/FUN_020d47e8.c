// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x40, exact bytes and relocation targets.
extern int FUN_020d4584(int, int, int, int *);
extern int FUN_020d4640(int);

int FUN_020d47e8(int a) {
    int v;
    if (FUN_020d4584(a, 4, *(int *)(*(int *)(a + 8) + 0x44) + 7, &v) == 0) {
        return 0;
    }
    if (v != 0) {
        return 1;
    }
    if (FUN_020d4640(a) != 0) {
        return 1;
    }
    return 0;
}
