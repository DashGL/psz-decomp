// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xe0, exact bytes and relocation targets.
// FUN_0207f690: full 0xe0 bytes + relocation targets verified 2.0/sp2p3.
// ABI evidence: notes/sessions/matching-upper-continue-2026-11-12.md
//cpp
// flags: -O4,s
extern "C" {
extern int FUN_0207f7a4(void *, int, int);
extern int FUN_020352a4(void *, int);
struct Obj7f690_0207f690 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4(void *, void *);
};
extern Obj7f690_0207f690 *FUN_0206e748(int);
extern int FUN_0207f808(void *, int, int);
extern void FUN_020360cc(void *);
extern void FUN_0207f4d4(void *);
extern void *DAT_02108cf4;

void FUN_0207f690(int *a0) {
    int i;
    if (a0[1] != -1) {
        if (a0[1] == 0 || a0[1] == 4) {
            a0[2] -= 0x1000;
            if (a0[2] <= 0) {
                Obj7f690_0207f690 *r6;
                a0[2] = FUN_0207f7a4(a0, a0[1], a0[4]);
                r6 = FUN_0206e748(FUN_020352a4(DAT_02108cf4, a0[0]));
                if (r6 != 0) {
                    short r4 = (short)FUN_0207f808(a0, a0[1], a0[4]);
                    short sp0c[12];
                    struct {
                        int d0;
                        int d1;
                        signed char b0, b1, b2, b3;
                    } sp00;
                    FUN_020360cc(sp0c);
                    FUN_020360cc(sp0c);
                    sp0c[0] = -r4;
                    sp0c[4] |= 0x400;
                    sp00.d0 = -1;
                    sp00.d1 = -1;
                    sp00.b0 = -1;
                    sp00.b1 = -1;
                    sp00.b2 = -1;
                    sp00.b3 = -1;
                    sp00.d0 = a0[0];
                    sp00.d1 = a0[0];
                    sp00.b0 = 0;
                    sp00.b1 = 0;
                    sp00.b2 = 2;
                    r6->v4(sp0c, &sp00);
                }
            }
        }
        a0[3] -= 0x1000;
        if (a0[3] <= 0) {
            FUN_0207f4d4(a0 + 1);
        }
    }
    for (i = 0; i < 2; i++) {
        int *r4 = a0 + 5 + i * 2;
        if (r4[1] != 0) {
            r4[0] -= 0x1000;
            if (r4[0] <= 0) {
                r4[0] = 0;
                r4[1] = 0;
            }
        }
    }
}
}
