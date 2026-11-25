// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x68, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern char DAT_020f6bb4[];
extern void FUN_0202bf80(void *, void *, int);
extern void FUN_0202c6e8(void *, void *, int);
void FUN_0202c7a0(char *a, void *b) {
    FUN_0202bf80(b, a + 0x14, 8);
    int r0 = (int)((*(unsigned int *)(a + 0x18) >> 3) & 0x3f);
    FUN_0202c6e8(a, DAT_020f6bb4, r0 < 0x38 ? 0x38 - r0 : 0x78 - r0);
    FUN_0202c6e8(a, b, 8);
    FUN_0202bf80(b, a, 0x14);
}
