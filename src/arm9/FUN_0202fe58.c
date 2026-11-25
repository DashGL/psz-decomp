// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x44, exact bytes and relocation targets.
// flags: -noThumb
extern char *FUN_0202e424(void);
extern int FUN_020683d4(void);
extern void FUN_020683e8(int);

void *FUN_0202fe58(void) {
    void *res = 0;
    char *p = FUN_0202e424();
    int s = FUN_020683d4();
    if (p != 0 && *(int *)(p + 0x2260) == 9 && *(unsigned char *)(p + 0x226b) == 0) {
        res = p + 0x2144;
    }
    FUN_020683e8(s);
    return res;
}
