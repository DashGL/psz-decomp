// check: vers=2.0/sp2p3 target=0x1d8 candidate=0x1d8 words=3 exact_bytes=12 bad_relocs=0
// near: ndiff=3 size=0x1d8 vers=2.0/sp2p3 next="register coloring in flag-test and unlock-bit accumulation"
// flags: -O4,s
extern void FUN_020af01c(void *, int, int);
extern void FUN_020c2b50(void *);
extern void FUN_020b3044(void *);
extern void FUN_0200c938(void *, int);
extern void FUN_0200c394(void *, int, int, void *, void *);
extern void FUN_02090848(int);
extern void FUN_overlay_9__02120224(int, int, int, int);
extern void FUN_020c2b84(void *, int, int, int, int);
extern void *FUN_020c1fc8(void);
extern int FUN_020c2438(void *, int, int, int);
extern void *FUN_0205e0c4(void);
extern void FUN_0206557c(int, void *, int);
extern void FUN_020c35d4(void *, void *);
extern void FUN_020c38f0(void *, int);
extern void FUN_020c38c8(void *, int, int);
extern void *FUN_0205e35c(void);
extern void *FUN_02086e3c(void);
extern int FUN_02087138(void *);
extern unsigned char *FUN_020870c4(void *);
extern int FUN_overlay_9__02120248(void *, int);
extern void FUN_overlay_9__02120a38(void *, int);
extern void *FUN_020c3564(void *);
extern void FUN_020c3578(void);
extern void *data_021210c8;
extern const int data_02121080[];
extern const unsigned int data_02120eb8[];
struct Copy20 {
    int w[8];
};
extern const struct Copy20 data_02120ec4;

void *FUN_overlay_9__02120294(unsigned int *self) {
    struct Copy20 stk;

    FUN_020af01c(self, 4, 1);
    self[0] = (unsigned int)&data_021210c8;
    FUN_020c2b50(self + 4);
    self[5] = -1;
    FUN_020b3044(self + 6);
    FUN_0200c938(self + 8, 0xc);
    FUN_0200c938(self + 11, 0xc);
    self[14] = 0;
    FUN_0200c394(self + 15, 1, 0x3c, (void *)FUN_020c3564, (void *)FUN_020c3578);
    self[0x1e] = 0;
    FUN_02090848(8);
    FUN_overlay_9__02120224(0, 1, 4, 4);
    FUN_020c2b84(self + 4, data_02121080[1], 7, 4, 4);
    FUN_02090848(0x10);
    {
        /* ROM 02120314 loads pool 0212045c = 02121080, separate from the descriptor. */
        int r4 = data_02121080[0];
        self[5] = FUN_020c2438(FUN_020c1fc8(), r4, r4, 2);
    }
    FUN_0206557c(0, FUN_0205e0c4(), 0x800);
    stk = data_02120ec4;
    stk.w[0] = 1;
    stk.w[4] = 0x23;
    FUN_020c35d4(self + 15, &stk);
    FUN_020c38f0(self + 15, 0);
    FUN_020c38c8(self + 15, 10, 0x23);
    FUN_020c38c8(self + 15, 0x100, 0);
    FUN_0206557c(0, FUN_0205e35c(), 0x20);
    FUN_0206557c(0, self + 11, 0xc);
    if (FUN_02087138(FUN_02086e3c()) != 0) {
        unsigned char *r6 = FUN_020870c4(FUN_02086e3c());
        int i;
        self[11] |= 1;
        if (FUN_overlay_9__02120248(r6 + 0xd28, 0x29) != 0 || r6[0x56] >= 0x1e) {
            self[11] |= 2;
        }
        if (FUN_overlay_9__02120248(r6 + 0xd28, 0x2a) != 0 || r6[0x56] >= 0x3c) {
            self[11] |= 4;
        }
        i = 0;
        for (; i < 3; i++) {
            self[12] |= (1 << data_02120eb8[i]);
        }
        for (i = 1; i <= 7; i++) {
            if (FUN_overlay_9__02120248(r6 + 0xd28, i + 0x2a) != 0) {
                self[12] |= (1 << i);
            }
        }
    }
    self[8] = self[11];
    self[9] = self[12];
    FUN_overlay_9__02120a38(self, 0);
    return self;
}
