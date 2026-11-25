// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// flags: -O4,s
struct Entry {
    int f0;
    int f4;
};
extern struct Entry D_020f4534[3];
extern int FUN_020b7fdc(int, int);
extern void FUN_02097088(void *);

int FUN_02097a58(void *a) {
    int i;
    for (i = 0; i < 3; i++) {
        if (FUN_020b7fdc(D_020f4534[i].f0, **(int **)((char *)a + 8)) != 0) {
            break;
        }
    }
    if (i >= 0 && i < 3) {
        *(int *)((char *)a + 0x34) = D_020f4534[i].f4;
        *(int *)((char *)a + 0x38) = D_020f4534[i].f0;
        FUN_02097088(a);
        return 1;
    }
    return 0;
}
