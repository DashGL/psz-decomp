// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x38, exact bytes and relocation targets.
extern int FUN_020d8298(int);
extern void FUN_020d80f4(int *);

void FUN_020d903c(char *p) {
    int cur = *(int *)(p + 0x7d8);
    if (cur != 0) {
        int tmp = cur;
        while (cur != 0) {
            cur = FUN_020d8298(cur);
            FUN_020d80f4(&tmp);
            tmp = cur;
        }
        *(int *)(p + 0x7d8) = 0;
    }
}
