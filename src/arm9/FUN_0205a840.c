// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xf4, exact bytes and relocation targets.
// flags: -O4,p -noThumb
extern int FUN_0205a4ac(void *);
extern int FUN_0205a7ac(void *, int, int);
extern void FUN_020656b8(int, int, int);
extern void FUN_02068728(void);
extern void FUN_02000970(int);
extern void FUN_0206740c(int, int);
extern struct S20 {
    int d[5];
} DAT_02101874[], END_02101874[];

void FUN_0205a840(unsigned int *a0) {
    int r4 = FUN_0205a4ac(a0);
    if (*(unsigned short *)0x027ffc40 == 2) {
        int r0 = 0;
        if ((a0[7] >> 24) & 2) {
            if (a0[0] < (unsigned int)(END_02101874 - DAT_02101874)) {
                r0 = FUN_0205a7ac(&DAT_02101874[a0[0]], a0[1], r4);
            }
        }
        if (r0 == 0) {
            FUN_020656b8(a0[1], 0, r4);
            FUN_02068728();
            return;
        }
    }
    if ((a0[7] >> 24) & 1) {
        FUN_02000970(a0[1] + r4);
    }
    FUN_0206740c(a0[1], a0[2]);
    {
        void (**p)(void) = (void (**)(void))a0[4];
        void (**end)(void) = (void (**)(void))a0[5];
        for (; p < end; p++) {
            if (*p != 0) {
                (*p)();
            }
        }
    }
}
