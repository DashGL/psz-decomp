// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,s
extern int FUN_02098ed0(void *, void *);
extern int FUN_02098dcc(void *, int);
extern void FUN_02098b48(void *, void *, int);
void FUN_020c6ce8(char *a) {
    int sp0[3];
    if (FUN_02098ed0(a, sp0) == 0) {
        *(int *)(*(char **)(a + 0xc) + 0x30) = 0;
        *(int *)(*(char **)(*(char **)(a + 0xc) + 8) + 4) = 0;
    } else if (FUN_02098dcc(*(void **)(*(char **)(a + 0xc) + 8), 0) != 0) {
        *(int *)(*(char **)(a + 0xc) + 0x30) = 0;
        *(int *)(*(char **)(*(char **)(a + 0xc) + 8) + 4) = 0;
    } else {
        (*(int *)(a + 8))--;
        if (*(int *)(a + 8) > 0) {
            if (*(short *)(a + 4) > 0) {
                FUN_02098b48(*(void **)(*(char **)(a + 0xc) + 8), sp0, 1);
            } else {
                FUN_02098b48(*(void **)(*(char **)(a + 0xc) + 8), sp0, 0);
            }
        } else {
            *(int *)(*(char **)(a + 0xc) + 0x30) = 0;
            *(int *)(*(char **)(*(char **)(a + 0xc) + 8) + 4) = 0;
        }
    }
}
