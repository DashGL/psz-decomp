// FUN_overlay_14__02120bc8 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// FUN_overlay_14__02120bc8 @ 0x02120bc8 (code 0x11e, pool extent 0x12c, thumb)
// check: vers=2.0/sp2p3 target=0x12c candidate=0x12c words=0 exact_bytes=0 bad_relocs=0
// flags: -O4,s
extern void *FUN_0209081c(void);
extern void *FUN_02086e3c(void);
extern int FUN_020872c4(void *);
extern void *FUN_02093c1c(int, int, int);
extern void FUN_overlay_14__02120d34(void *, void *);
extern void *FUN_overlay_14__02120078(void);
extern void FUN_overlay_14__02120574(void *);
extern void FUN_020c4434(void *);
extern void FUN_overlay_14__0212072c(void *);
extern void *FUN_020870c4(void *);
extern void FUN_overlay_14__02120764(void *, void *);
extern void FUN_overlay_14__0212026c(void *, void *);
extern void FUN_020144f0(void);
extern void FUN_02071d0c(void *);
extern void FUN_02090b44(void *);
extern void FUN_02090b54(void *, void *, int);
extern void FUN_02014714(void);
extern void FUN_02090a28(void *);
extern const unsigned short data_02121954[];

int FUN_overlay_14__02120bc8(int *self)
{
    unsigned char sp20[0x3c];
    unsigned short sp10[8];
    unsigned short sp0[8];
    void *mgr = FUN_0209081c();
    int st = self[4];

    if (st == 2) {
        if (FUN_020872c4(FUN_02086e3c()) == 0) {
            void *p;
            self[4] = 3;
            FUN_overlay_14__02120d34(self, FUN_02093c1c(0, 1, 3));
            p = FUN_overlay_14__02120078();
            if (p != 0) {
                FUN_overlay_14__02120574(p);
            }
        }
    } else if (st == 4) {
        if (FUN_020872c4(FUN_02086e3c()) == 0) {
            void *p;
            self[4] = 5;
            FUN_overlay_14__02120d34(self, FUN_02093c1c(0, 0, 1));
            FUN_020c4434(sp20 + 8);
            FUN_020c4434(sp20 + 0x18);
            FUN_overlay_14__0212072c(sp20);
            FUN_overlay_14__02120764(sp20, FUN_020870c4(FUN_02086e3c()));
            p = FUN_overlay_14__02120078();
            if (p != 0) {
                FUN_overlay_14__0212026c(p, sp20);
            }
        }
    }

    FUN_020144f0();

    if ((unsigned int)self[4] <= 1) {
        int i;
        for (i = 0; i < 2; i++) {
            FUN_02071d0c(sp10);
            FUN_02090b44(sp10);
            sp10[0] = data_02121954[i];
            if (i == self[1]) {
                sp10[0]++;
            }
            *(int *)&sp10[4] = 0x80000;
            *(int *)&sp10[6] = (i * 0x17 + 0x13a) << 12;
            FUN_02090b54(mgr, sp10, 1);
        }
    }

    FUN_02071d0c(sp0);
    FUN_02090b44(sp0);
    sp0[0] = 5;
    *(int *)&sp0[4] = 0x80000;
    *(int *)&sp0[6] = 0x107000;
    FUN_02090b54(mgr, sp0, 2);
    FUN_02014714();
    FUN_02090a28(mgr);
    return 1;
}
