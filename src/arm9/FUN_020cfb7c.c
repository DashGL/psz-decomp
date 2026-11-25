// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,s
extern void *FUN_020c7bcc(int);
extern void FUN_020d1b74(void *, void *);
extern void FUN_02001540(void *, int, int);
extern char DAT_020fe0bc[];
int FUN_020cfb7c(void *a, void **b, int c) {
    char *p = (char *)FUN_020c7bcc(0x154);
    if (p == 0) {
        FUN_020d1b74(a, DAT_020fe0bc);
        return 1;
    }
    FUN_02001540(p, 0, 0x154);
    *(int *)p = c;
    *(int *)(p + 4) = -1;
    *(int *)(p + 8) = 0;
    *(int *)(p + 0x10) = 0;
    *(int *)(p + 0x14) = 0;
    *(int *)(p + 0xc) = 0;
    *(int *)(p + 0x20) = 0;
    *(int *)(p + 0x24) = 0;
    *(int *)(p + 0x1c) = 0x1000;
    *(void **)(p + 0x18) = FUN_020c7bcc(0x1001);
    if (*(void **)(p + 0x18) == 0) {
        FUN_020d1b74(a, DAT_020fe0bc);
        return 1;
    }
    *(int *)(p + 0x140) = 0;
    *(int *)(p + 0x144) = 0;
    *b = p;
    return 0;
}
