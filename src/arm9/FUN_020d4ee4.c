// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6a, exact bytes and relocation targets.
// flags: -O4,p
extern int FUN_020c6e0c(void *);
extern void **FUN_020c6e10(void *, int);
extern void FUN_020c6eec(void *, int);
extern void FUN_020c7290(void *, char **);
void FUN_020d4ee4(char *a) {
    if (*(int *)(a + 0x14) != 0 || *(int *)(a + 0x24) != 0) {
        return;
    }
    if (*(int *)(a + 0xc) == 7) {
        int n = FUN_020c6e0c(*(void **)(*(int *)(a + 8) + 0x10));
        int i;
        for (i = 0; i < n; i++) {
            if (a == *FUN_020c6e10(*(void **)(*(int *)(a + 8) + 0x10), i)) {
                FUN_020c6eec(*(void **)(*(int *)(a + 8) + 0x10), i);
                return;
            }
        }
    } else {
        FUN_020c7290(*(void **)(*(int *)(a + 8) + 0xc), &a);
    }
}
