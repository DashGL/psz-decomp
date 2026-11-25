// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x74, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_02061b20(void *, void *, void *, void *);
extern void FUN_02065774(void *, void *, int);
extern int DAT_020f19b0[];
void FUN_02061aac(char *a, char *b) {
    int sp0 = 0x22c0000;
    int *r7 = DAT_020f19b0;
    char *r8 = a + 0xc;
    int i;
    *(int *)a = *(int *)(b + 0x24);
    *(int *)(a + 4) = *(int *)(b + 0x34);
    for (i = 0; i < 3; i++, r8 += 0x10, r7++) {
        FUN_02061b20(b, r7, r8, &sp0);
    }
    FUN_02065774(b + 0x160, a + 0x3c, 0x88);
}
