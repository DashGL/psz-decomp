// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xd8, exact bytes and relocation targets.
// flags: -noThumb
extern int FUN_0202a634(int, int, void *);
extern void FUN_0202a6cc(void *, int);
extern int FUN_0202a94c(void *);
extern void (*DAT_02107094)(int);

int FUN_0202b388(int *a0, void *a1) {
    void *r4 = *(void **)((char *)a1 + 0xc);
    if (*(int *)((char *)r4 + 0x824) != 0 && *(unsigned char *)((char *)r4 + 0x456) == 0) {
        if (FUN_0202a634(*(int *)((char *)r4 + 0x824) + *(int *)((char *)r4 + 0x82c), *(int *)((char *)r4 + 0x828) - *(int *)((char *)r4 + 0x82c), a1) != 0) {
            DAT_02107094(*(int *)((char *)r4 + 0x824));
            *(int *)((char *)r4 + 0x824) = 0;
            *a0 = 0;
            return 0;
        }
        FUN_0202a6cc(r4, *(int *)((char *)r4 + 0x824));
        if (*(unsigned char *)((char *)r4 + 0x456) == 0) {
            *(int *)((char *)r4 + 0x824) = 0;
        }
    }
    while (*(int *)((char *)r4 + 0x824) == 0) {
        if (FUN_0202a94c(a1) == 9) {
            *a0 = 0;
            return 0;
        }
    }
    *a0 = *(int *)((char *)r4 + 0x828) - *(int *)((char *)r4 + 0x82c);
    return *(int *)((char *)r4 + 0x824) + *(int *)((char *)r4 + 0x82c);
}
