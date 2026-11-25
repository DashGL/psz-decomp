// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
// flags: -noThumb
extern unsigned int FUN_020247bc(void *, unsigned int, void *, int);
extern void FUN_020014f4(void *, const void *, unsigned int);
extern int DAT_021181a0[];

int FUN_02024890(void *param_1, int param_2) {
    void *r5 = *(void **)(DAT_021181a0[1] + 0xa4);
    if (r5 != 0) {
        if (*(unsigned int *)((char *)r5 + 0x60) != 0) {
            unsigned int n = FUN_020247bc(*(void **)((char *)r5 + 0x5c), *(unsigned int *)((char *)r5 + 0x60), param_1, param_2);
            unsigned int len = *(unsigned int *)((char *)r5 + 0x60);
            if (n < len) {
                FUN_020014f4(*(char **)((char *)r5 + 0x5c), *(char **)((char *)r5 + 0x5c) + n, len - n);
                *(unsigned int *)((char *)r5 + 0x60) -= n;
                return 0;
            } else {
                *(unsigned int *)((char *)r5 + 0x60) = 0;
                return n - len;
            }
        } else {
            return FUN_020247bc(param_1, param_2, 0, 0);
        }
    }
    return 0;
}
