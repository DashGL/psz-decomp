// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe0, exact bytes and relocation targets.
// flags: -O4,s
extern void FUN_020c7bec(void *);
extern void FUN_020c6de0(void *);
extern void FUN_020cf8a0(void *, void *);

int FUN_020cc9c0(void **a0, void **a1) {
    void *r4 = *a0;
    if (a1[2] != 0 && *(int *)((char *)r4 + 0x104) == 0) {
        FUN_020c7bec(((void **)a1[2])[2]);
        ((void **)a1[2])[2] = 0;
        FUN_020c7bec(((void **)a1[2])[3]);
        ((void **)a1[2])[3] = 0;
        FUN_020c7bec(a1[2]);
        a1[2] = 0;
    }
    if (a1[3] != 0 && *(int *)((char *)r4 + 0x104) == 0) {
        FUN_020c7bec(((void **)a1[3])[2]);
        ((void **)a1[3])[2] = 0;
        FUN_020c7bec(((void **)a1[3])[3]);
        ((void **)a1[3])[3] = 0;
        FUN_020c7bec(((void **)a1[3])[4]);
        ((void **)a1[3])[4] = 0;
        FUN_020c7bec(((void **)a1[3])[5]);
        ((void **)a1[3])[5] = 0;
        if (((void **)a1[3])[14] != 0) {
            FUN_020c6de0(((void **)a1[3])[14]);
            ((void **)a1[3])[14] = 0;
        }
        FUN_020c7bec(a1[3]);
        a1[3] = 0;
    }
    FUN_020c7bec(a1[5]);
    a1[5] = 0;
    FUN_020c7bec(a1[7]);
    a1[7] = 0;
    a1[6] = 0;
    if (a1[4] == 0 || (*(int *)((char *)r4 + 0x104) == 1 && a1[2] == 0 && a1[3] == 0)) {
        FUN_020cf8a0(a0, a1);
        return 0;
    }
    return 1;
}
