// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x48, exact bytes and relocation targets.
extern unsigned long long FUN_020c7824(void);
extern void FUN_020d7568(int, int);
extern int D_020feb98;

void FUN_020d6674(int a) {
    if (a == 0) {
        a = D_020feb98;
    }
    if (*(int *)(a + 0xbc) != 0) {
        if ((unsigned int)FUN_020c7824() - *(unsigned int *)(a + 0xac) < 10000) {
            *(int *)(a + 0xb4) = 1;
        } else {
            FUN_020d7568(a, 1);
            *(int *)(a + 0xb4) = 0;
        }
    }
}
