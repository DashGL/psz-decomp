// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x92, exact bytes and relocation targets.
extern int FUN_020d37a4(void *, int);
extern int FUN_020d3828(void *);
extern int FUN_020c6e0c(void *);
extern void *FUN_020c6e10(void *, int);
extern int FUN_020d37c8(int, int);
extern int FUN_020d4b14(void *, void *);

int FUN_020d3fe4(void *param_1, void *param_2, int param_3) {
    volatile int v0 = FUN_020d37a4(param_2, 0);
    volatile int v1;
    int n, i;
    if (param_3 == 2) {
        v1 = v0;
    } else if (param_3 == 4) {
        v1 = FUN_020d37a4(param_2, 2);
    } else {
        return FUN_020d3828(param_1) != 0 ? 1 : 0;
    }
    n = FUN_020c6e0c(*(void **)((char *)param_1 + 0x60));
    for (i = 0; i < n; i++) {
        void *item = FUN_020c6e10(*(void **)((char *)param_1 + 0x60), i);
        if (FUN_020d37c8(*(unsigned short *)((char *)item + 8), v0) >= 0 &&
            FUN_020d37c8(*(unsigned short *)((char *)item + 8), v1) <= 0) {
            if (FUN_020d4b14(param_1, item) == 0) {
                return 0;
            }
        }
    }
    return 1;
}
