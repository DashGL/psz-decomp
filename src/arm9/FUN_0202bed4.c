// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern char DAT_020f6a74[];
extern void FUN_0202b988(void *, void *, int);
extern void FUN_0202be1c(void *, void *, int);
void FUN_0202bed4(char *a, void *b) {
    FUN_0202b988(b, a + 0x10, 8);
    int r0 = (int)((*(unsigned int *)(a + 0x10) >> 3) & 0x3f);
    FUN_0202be1c(a, DAT_020f6a74, r0 < 0x38 ? 0x38 - r0 : 0x78 - r0);
    FUN_0202be1c(a, b, 8);
    FUN_0202b988(b, a, 0x10);
}
