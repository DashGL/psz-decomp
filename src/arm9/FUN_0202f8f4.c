// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x54, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_020683d4(void);
extern char *FUN_0202e424(void);
extern void FUN_020683e8(int);
extern void FUN_020656b8(void *, int, int);
void FUN_0202f8f4(void) {
    int r4 = FUN_020683d4();
    char *p = FUN_0202e424();
    if (p == 0) {
        FUN_020683e8(r4);
        return;
    }
    if (*(void **)(p + 0x2270) != 0 && *(int *)(p + 0x2274) > 0) {
        FUN_020656b8(*(void **)(p + 0x2270), 0, *(int *)(p + 0x2274));
    }
    FUN_020683e8(r4);
}
