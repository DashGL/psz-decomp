// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x58, exact bytes and relocation targets.
// flags: -O4,s
typedef struct {
    void *f0;
    void *f4;
    int f8;
    int fc;
    signed char *f10;
} S_b2698;
extern void FUN_02083590(void *);
extern void *FUN_020ba894(int);
extern void *FUN_020835c0(void *, void *);
extern void *FUN_020b24f0(void *, void *);
S_b2698 *FUN_020b2698(S_b2698 *a, signed char *b, char *c) {
    void *p;
    a->f0 = 0;
    a->f4 = 0;
    a->f8 = 0;
    a->fc = 0;
    a->f10 = b;
    if (*(unsigned int *)(c + 0x50) >= 2) {
        a->f8 = ((*(unsigned int *)(c + 0x50) - 2) * a->f10[5]) / 100u;
    }
    FUN_02083590(c);
    p = FUN_020ba894(0x50);
    if (p != 0) {
        p = FUN_020835c0(p, c);
    }
    a->f0 = p;
    p = FUN_020ba894(0x58);
    if (p != 0) {
        p = FUN_020b24f0(p, c);
    }
    a->f4 = p;
    return a;
}
