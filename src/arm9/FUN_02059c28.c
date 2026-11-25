// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x84, exact bytes and relocation targets.
// flags: -noThumb
struct Sub {
    char pad[0x14];
    int f14;
};

struct S {
    char pad[0x1c];
    unsigned int f1c;
    int f20;
    struct Sub *f24;
};

extern void FUN_020585b0(struct Sub *, int);
extern void *FUN_020591e8(struct S *);
extern void FUN_020593fc(void *);
extern int FUN_020683d4(void);
extern void FUN_02066a2c(void *);
extern void FUN_020683e8(int);

void FUN_02059c28(struct S *r4, int r6) {
    unsigned int b = r4->f1c;
    if (b & 0x100) b = 1; else b = 0;
    if (b) {
        struct Sub *sub = r4->f24;
        r4->f1c &= ~0x100;
        FUN_020585b0(sub, r6);
        void *p = FUN_020591e8(r4);
        if (p != 0) {
            FUN_020593fc(p);
        }
    } else {
        struct Sub *v = r4->f24;
        int s = FUN_020683d4();
        v->f14 = r6;
        r4->f1c &= ~0x200;
        FUN_02066a2c((char *)r4 + 0xc);
        FUN_020683e8(s);
    }
}
