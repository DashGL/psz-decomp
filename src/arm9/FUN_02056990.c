// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xf8, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern void FUN_02055b28(void);
extern int FUN_020683d4(void);
extern void FUN_020669dc(void *);
extern void FUN_020683e8(int);
extern void FUN_02065078(unsigned int);
extern int FUN_02056620(void *);
extern void FUN_02056aec(void);
extern void FUN_020558bc(void (*)(void *));
extern void FUN_020568f8(void *);
extern char DAT_02111ce0[];
struct S56990 {
    int pad[7];
    int f1c;
    int f20;
    int f24;
    unsigned int f28;
    int pad2[3];
    int f38;
    int f3c;
    int pad3[49];
    int f104;
    int f108;
    int f10c;
    int f110;
    volatile int f114;
};
extern struct S56990 DAT_021116a0;
extern int DAT_02111cc0;
extern struct {
    int f0;
    int f4;
} DAT_021181a0;

void FUN_02056990(unsigned int a0, int a1, int a2, int a3, int a4, int a5, int a6) {
    char *r4 = DAT_02111ce0;
    struct S56990 *r5 = &DAT_021116a0;
    int r6;
    FUN_02055b28();
    r6 = FUN_020683d4();
    goto L_cond;
L_body:
    FUN_020669dc(&r5->f10c);
L_cond:
    if (r5->f114 & 4) {
        goto L_body;
    }
    r5->f114 |= 4;
    r5->f38 = a4;
    r5->f3c = a5;
    FUN_020683e8(r6);
    r5->f28 = a0;
    r5->f20 = a2;
    r5->f1c = a1 + DAT_02111cc0;
    r5->f24 = a3;
    if (a0 <= 3) {
        FUN_02065078(a0);
    }
    if (FUN_02056620(r4) != 0) {
        if (a6 == 0) {
            FUN_02056aec();
        }
    } else {
        if (a6 != 0) {
            FUN_020558bc(FUN_020568f8);
        } else {
            r5->f104 = DAT_021181a0.f4;
            FUN_020568f8(r5);
        }
    }
}
