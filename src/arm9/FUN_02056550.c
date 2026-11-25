// Verified 2026-11-13: pinned 2.0/sp2p3, full extent 0xd0, exact bytes and relocation targets; argument/return contract corrected.
// Actual incoming-word evidence: notes/reference/resume2-upper-20261112/runtime-argument-proof.json
// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xd0, exact bytes and relocation targets.
// flags: -noThumb
#pragma opt_propagation off
extern void FUN_02065078(int);
extern void FUN_02065e30(int);
extern void FUN_02065e60(int);
extern int FUN_0205689c(void);
extern void FUN_02056df8(int);
extern int FUN_020683d4(void);
extern void FUN_02066a2c(void *);
extern void FUN_02066a94(void *);
extern void FUN_020683e8(int);
extern void FUN_020564fc(void);

struct S_021116a0 {
    int *f00;
    char pad04[0x18];
    int f1c;
    int f20;
    int f24;
    int f28;
    char pad2c[0xc];
    void (*f38)(int);
    int f3c;
    char pad40[4];
    int f44;
    char pad48[0xc4];
    int f10c;
    int f110;
    int f114;
};

extern struct S_021116a0 DAT_021116a0;

static inline int step_56550(void) {
    struct S_021116a0 *r3 = &DAT_021116a0;
    r3->f1c += 0x200;
    r3->f20 += 0x200;
    r3->f24 -= 0x200;
    return r3->f24 != 0 ? 1 : 0;
}

void FUN_02056550(void) {
    FUN_02065078(DAT_021116a0.f28);
    if (!step_56550()) {
        struct S_021116a0 *r4;
        void (*r5)(int);
        int r6;
        int r7;
        FUN_02065e30(0x80000);
        FUN_02065e60(0x80000);
        r4 = &DAT_021116a0;
        FUN_02056df8(FUN_0205689c());
        *r4->f00 = 0;
        r5 = r4->f38;
        r6 = r4->f3c;
        r7 = FUN_020683d4();
        r4->f114 &= ~0x4c;
        FUN_02066a2c(&r4->f10c);
        if (r4->f114 & 0x10) {
            FUN_02066a94(&r4->f44);
        }
        FUN_020683e8(r7);
        if (r5 != 0) {
            r5(r6);
        }
    } else {
        FUN_020564fc();
    }
}
