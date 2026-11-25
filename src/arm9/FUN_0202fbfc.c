// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x6c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern char *FUN_0202e424(void);
extern int FUN_02030180(void *, void *);
void *FUN_0202fbfc(void *a) {
    char *r0 = FUN_0202e424();
    void *r4 = 0;
    int r1 = *(int *)(r0 + 0x2270);
    if (a == 0) {
        return 0;
    }
    if (r1 != 0 && *(unsigned int *)(r0 + 0x2274) > 0xc) {
        for (r4 = *(void **)(r1 + 4); r4 != 0; r4 = *(void **)((char *)r4 + 0xc)) {
            if (FUN_02030180((char *)r4 + 0x14, a) != 0) {
                break;
            }
        }
    }
    return r4;
}
