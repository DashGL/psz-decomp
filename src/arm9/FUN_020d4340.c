// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x90, exact bytes and relocation targets.
extern void *FUN_020d4bc0(void *, int);
extern int FUN_020d3030(void *, void *, int, int, int, int, int, int);
extern int FUN_020c7824(void);
extern int FUN_020d37d0(void *, int, int);

int FUN_020d4340(void *param_1, int param_2, int param_3) {
    void *p = FUN_020d4bc0(param_1, param_2);
    if (*(int *)((char *)param_1 + 0x2c) != 0) {
        if (FUN_020d3030(param_1, p, param_2, param_3, 1, 0, 0, 0) == 0) {
            return 0;
        }
    }
    if (p == 0) {
        return 1;
    }
    if (*(int *)((char *)p + 0xc) == 0) {
        if (*(unsigned int *)((char *)p + 0x20) == 0 ||
            (unsigned int)(FUN_020c7824() - *(int *)((char *)p + 0x1c)) < *(unsigned int *)((char *)p + 0x20)) {
            return 1;
        }
        if (FUN_020d37d0(p, 6, 1) == 0) {
            return 0;
        }
    } else {
        if (FUN_020d37d0(p, 2, 1) == 0) {
            return 0;
        }
    }
    return 1;
}
