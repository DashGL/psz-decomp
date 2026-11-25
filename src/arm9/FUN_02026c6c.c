// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x4c, exact bytes and relocation targets.
// flags: -O4,p -noThumb
struct Sub {
    char pad[0xf8];
    int ff8;
    unsigned short ffc;
};
extern int D_02026cb8;
extern void *FUN_02025f40(void *, void *, int);
extern int FUN_02026088(void *, void *);

int FUN_02026c6c(char *a) {
    struct Sub *s = *(struct Sub **)(a + 0x64);
    void *p;
    if (s->ff8 < s->ffc) {
        return 0;
    }
    p = FUN_02025f40(&D_02026cb8, a, 0);
    if (p == 0) {
        return -0x21;
    }
    return FUN_02026088(a, p);
}
