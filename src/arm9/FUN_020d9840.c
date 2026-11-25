// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x50, exact bytes and relocation targets.
extern void FUN_020c7bec(int);
extern void FUN_020c7478(int);
extern void FUN_020d9800(void *);
extern void FUN_020d97c8(void *);

void FUN_020d9840(char *a) {
    if (*(int *)(a + 0x7c) != 0) {
        FUN_020c7bec(*(int *)(a + 0x7c));
    }
    *(int *)(a + 0x7c) = 0;
    *(int *)(a + 0x80) = 0;
    if (*(int *)(a + 0x6b4) != -1) {
        FUN_020c7478(*(int *)(a + 0x6b4));
    }
    *(int *)(a + 0x6b4) = -1;
    *(int *)a = 1;
    FUN_020d9800(a);
    *(int *)(a + 0x484) = -1;
    FUN_020d97c8(a);
}
