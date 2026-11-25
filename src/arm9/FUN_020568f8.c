// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets; argument/return contract corrected.
// Actual incoming-word evidence: notes/reference/resume2-upper-20261112/runtime-argument-proof.json
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0x98, exact bytes and relocation targets.
// flags: -noThumb
struct S568f8_a {
    void (*f00)(struct S568f8_a *);
};
struct S568f8_b {
    int *f00;
    char pad04[0x34];
    void (*f38)(int);
    int f3c;
    char pad40[4];
    int f44;
    char pad48[0xc4];
    int f10c;
    int f110;
    int f114;
};
extern struct S568f8_a DAT_02111ce0;
extern struct S568f8_b DAT_021116a0;
extern int FUN_02056410(struct S568f8_a *a);
extern int FUN_0205689c(void);
extern void FUN_02056df8(int);
extern int FUN_020683d4(void);
extern void FUN_020683e8(int a);
extern void FUN_02066a2c(void *a);
extern void FUN_02066a94(void *a);

void FUN_020568f8(void) {
    void *r4 = &DAT_02111ce0;
    void (*r5)(int);
    int r6;
    int r7;
    if (FUN_02056410((struct S568f8_a *)r4) != 0) {
        ((struct S568f8_a *)r4)->f00((struct S568f8_a *)r4);
    }
    r4 = &DAT_021116a0;
    FUN_02056df8(FUN_0205689c());
    *((struct S568f8_b *)r4)->f00 = 0;
    r5 = ((struct S568f8_b *)r4)->f38;
    r6 = ((struct S568f8_b *)r4)->f3c;
    r7 = FUN_020683d4();
    ((struct S568f8_b *)r4)->f114 &= ~0x4c;
    FUN_02066a2c(&((struct S568f8_b *)r4)->f10c);
    if (((struct S568f8_b *)r4)->f114 & 0x10) {
        FUN_02066a94(&((struct S568f8_b *)r4)->f44);
    }
    FUN_020683e8(r7);
    if (r5 != 0) {
        r5(r6);
    }
}
