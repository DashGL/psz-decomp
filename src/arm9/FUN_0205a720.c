// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x8c, exact bytes and relocation targets.
// flags: -noThumb
struct Pair {
    int f0;
    int f4;
};

struct S0 {
    int f0;
    int f4;
};

extern void FUN_02059cd4(void *);
extern struct Pair FUN_0205a504(struct S0 *);
extern int FUN_02059f44(void *, struct Pair);
extern int FUN_0205a4ac(struct S0 *);
extern void FUN_0205a4c8(struct S0 *);
extern int FUN_0205a140(void *, int, int);
extern void FUN_02059ffc(void *);

int FUN_0205a720(struct S0 *r6, void *r5) {
    FUN_02059cd4(r5);
    if (FUN_02059f44(r5, FUN_0205a504(r6)) == 0) {
        return 0;
    }
    int r4 = FUN_0205a4ac(r6);
    FUN_0205a4c8(r6);
    if (r4 == FUN_0205a140(r5, r6->f4, r4)) {
        return 1;
    }
    FUN_02059ffc(r5);
    return 0;
}
