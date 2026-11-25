// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc8, exact bytes and relocation targets.
// flags: -O4,s

struct Sub9DDE8_8 {
    int f0;
    int state;
};

struct Sub9DDE8_C {
    int f0;
    int f4;
    struct Sub9DDE8_8 *f8;
    int fc;
    unsigned char pad10[0x30 - 0x10];
    int f30;
    int f34;
    int f38;
};

struct Self9DDE8 {
    int f0;
    short f4;
    short f6;
    int f8;
    struct Sub9DDE8_C *fc;
};

extern const unsigned char DAT_020f49b0[2];
extern const signed char DAT_020f49b2[][3];
extern void FUN_02098bc8(struct Sub9DDE8_8 *);
extern int FUN_02098f20(struct Self9DDE8 *);
extern int FUN_02098ed0(struct Self9DDE8 *, void *);
extern void FUN_02098960(struct Sub9DDE8_8 *, void *, void *, int);
extern void FUN_0209885c(struct Sub9DDE8_8 *, void *, int, int);
extern int FUN_02035b60(int);

void FUN_0209dde8(struct Self9DDE8 *self) {
    int state;
    FUN_02098bc8(self->fc->f8);
    state = self->fc->f8->state;
    if (state == 4 || state == 0) {
        if (FUN_02098f20(self) != 0 && self->f6 < 3) {
            unsigned char sp00[4];
            unsigned char sp04[12];
            sp00[0] = DAT_020f49b0[0];
            sp00[1] = DAT_020f49b0[1];
            sp00[1] = (unsigned char)DAT_020f49b2[self->f4][self->f6];
            if (FUN_02098ed0(self, sp04) != 0) {
                struct Sub9DDE8_C *c = self->fc;
                FUN_02098960(c->f8, sp00, sp04, c->fc);
            } else {
                struct Sub9DDE8_C *c = self->fc;
                FUN_0209885c(c->f8, sp00, c->fc, 0);
            }
            self->f6++;
            return;
        }
        if (state == 0) {
            self->fc->f30 = 0;
            switch (FUN_02035b60(3)) {
            case 0:
            case 1: {
                int v = FUN_02035b60(15);
                struct Sub9DDE8_C *c = self->fc;
                c->f34 = 6;
                c->f38 = v;
                break;
            }
            case 2: {
                int v = FUN_02035b60(60);
                struct Sub9DDE8_C *c = self->fc;
                c->f34 = 14;
                c->f38 = v;
                break;
            }
            }
        }
    }
}
