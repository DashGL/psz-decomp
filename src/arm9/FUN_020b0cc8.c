// Verified 2026-11-12: pinned 2.0/sp2p3, full extent 0xc8, exact bytes and relocation targets.
// flags: -O4,s

struct Vec3_B0CC8 {
    int x, y, z;
};

struct Vec2_B0CC8 {
    int y, z;
};

struct Mat8_B0CC8 {
    int m[8];
};

struct SelfB0CC8 {
    unsigned char pad0[0x34];
    int f34;
    int f38;
    unsigned char pad3c[0x88 - 0x3c];
    int f88;
    int f8c;
    int f90;
    int f94;
    int f98;
    struct Mat8_B0CC8 f9c;
    unsigned char fbc[0xc];
    int fc8;
    struct Mat8_B0CC8 fcc;
    unsigned char pad_ec[4];
    void *ff0;
};

extern const int DAT_020f5734[4];
extern const struct Vec3_B0CC8 DAT_020f5728;
extern const int DAT_020f56f8[12];
extern void FUN_020bc628(void *, int *);
extern void FUN_020bf680(void *, void *, int);
extern void FUN_020c0488(void *);
extern void *FUN_020be450(void);
extern void *FUN_020beccc(void *, void *, int, struct Vec3_B0CC8 *, struct Vec2_B0CC8 *);
extern void FUN_020be4f8(void *, void *, int);

void FUN_020b0cc8(struct SelfB0CC8 *self, int idx) {
    int k = idx - 1;
    if (k >= 0 && k < 4) {
        int val = DAT_020f5734[k];
        if (val != 0) {
            int sp10;
            struct Vec2_B0CC8 v2;
            int sp04;
            struct Vec3_B0CC8 v3;

            sp10 = val;
            self->f88 = self->f34;
            self->f8c = self->f38;
            self->f90 = val;
            FUN_020bc628(&sp04, &sp10);
            self->f94 = sp10;
            FUN_020bf680(&self->f98, &self->f88, self->f90);
            FUN_020c0488(self->fbc);
            self->fc8 = self->f98;
            self->fcc = self->f9c;
            v3 = DAT_020f5728;
            v2.y = DAT_020f56f8[10];
            v2.z = DAT_020f56f8[11];
            self->ff0 = FUN_020beccc(FUN_020be450(), self->fbc, 1, &v3, &v2);
            FUN_020be4f8(FUN_020be450(), self->ff0, 2);
        }
    }
}
