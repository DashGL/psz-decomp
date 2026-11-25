// flags: -O4,s -lang c++
extern "C" {
extern void *FUN_020ba894(unsigned);
extern void *FUN_020c3564(void *);
extern void *FUN_0208f068(void);
extern void *FUN_020c1fc8(void);
extern void FUN_020c35d4(void *, const void *);
extern void FUN_020c38f0(void *, unsigned);
extern void FUN_020c2b84(void *, const void *, unsigned, unsigned, unsigned);
extern int FUN_0208ef48(void *, unsigned, unsigned);
extern int FUN_020c2438(void *, unsigned, const void *, unsigned);
struct Desc { unsigned w[8]; };
extern const Desc DAT_02137e00;
extern const unsigned DAT_0213dca0;
extern const unsigned DAT_0213dca4[2];
extern const unsigned char DAT_0213dd50[];
extern const unsigned char DAT_0213dd18[];
extern const unsigned char DAT_0213dcbc[];
}
struct Child {
    virtual ~Child();
};
struct Self {
    int pad0;
    int f4;
    int f8[2];
    Child *child;
    int f14;
    int f18;
};
extern "C" void FUN_overlay_12__02125040(Self *self)
{
    if (self->child) {
        delete self->child;
        self->child = 0;
    }
    Child *c = (Child *)FUN_020ba894(0x3c);
    if (c) c = (Child *)FUN_020c3564(c);
    self->child = c;
    if (c) {
        Desc desc = DAT_02137e00;
        FUN_020c35d4(self->child, &desc);
        FUN_020c38f0(self->child, 0);
    }
    FUN_020c2b84(&self->f14, DAT_0213dd50, 3, 1, 4);
    FUN_020c2b84(&self->f18, DAT_0213dd18, 7, 1, 4);
    if (self->f4 == -1) {
        void *mgr = FUN_0208f068();
        if (mgr)
            self->f4 = FUN_0208ef48(mgr, DAT_0213dca0, 11);
    }
    for (int i = 0; i < 2; i++) {
        if (self->f8[i] == -1)
            self->f8[i] = FUN_020c2438(FUN_020c1fc8(), DAT_0213dca4[i], DAT_0213dcbc, 1);
    }
}
