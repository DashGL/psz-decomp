//cpp
// flags: -O4,s -inline auto
static inline int fx_mul(int a, int b) {
    return (int)(((long long)a * b + 0x800) >> 12);
}
struct Fx; static inline int add_fx(const Fx &a, const Fx &b); struct Vec3 { int v[3]; };
struct Fx {
    int v;
    Fx() {}
    Fx(int x) : v(x) {}
    Fx(const Fx &o) : v(o.v) {}
    inline Fx operator-() const { return Fx(-v); }
    
};
#define I(p,o) (*(int *)((char *)(p)+(o)))
#define F(p,o) (*(Fx *)((char *)(p)+(o)))
#define P(p,o) (*(void **)((char *)(p)+(o)))
#define V(p,o) (*(Vec3 *)((char *)(p)+(o)))

extern "C" {
extern int DAT_0219ccd4[];
extern Fx DAT_overlay_31__0219ccd4;
extern Fx DAT_0219ccd8;
extern int FUN_02036c34(void *);
extern int FUN_02040d2c(void *, int);
extern int FUN_overlay_31__0219a638(void *, int);
extern void FUN_overlay_31__0219982c(void *, void *);
extern void FUN_overlay_31__021998a4(void *);
extern void FUN_overlay_31__021998c8(void *);
extern Fx FUN_020bc5cc(const Fx *, const Fx *);
extern Fx FUN_020bc610(const Fx *, const Fx *);
extern void FUN_02044570(void *, int, int);
extern void FUN_02040c0c(void *, int, int, int, int);
void FUN_overlay_31__021991a4(void *self);
}

static inline int add_fx(const Fx &a, const Fx &b) { return a.v + b.v; }
void FUN_overlay_31__021991a4(void *self) {
    void *actor = P(self, 4);
    void *owner = P(self, 8);
    int channel = I(actor, 0xe0);
    switch (I(self, 0xc)) {
    case 0: {
        int delta = FUN_02036c34(actor);
        I(self, 0x2c) += delta;
        if ((I(self, 0x2c) > DAT_0219ccd4[4]) ? 1 : 0) {
            I(self, 0x2c) = 0;
            FUN_overlay_31__0219982c(actor, (char *)self + 0x10);
            FUN_overlay_31__021998a4(actor);
            I(self, 0xc) = 1;
        }
        break;
    }
    case 1: {
        Vec3 position;
        Fx quadratic = FUN_020bc610(&(-FUN_020bc5cc(&Fx(0x4000), &DAT_overlay_31__0219ccd4)), &FUN_020bc5cc(&DAT_0219ccd8, &DAT_0219ccd8));
        Fx linear = FUN_020bc610(&FUN_020bc5cc(&Fx(0x4000), &DAT_overlay_31__0219ccd4), &DAT_0219ccd8);

        position.v[0] = I(self, 0x20) - I(self, 0x14);
        position.v[1] = I(self, 0x24) - I(self, 0x18);
        position.v[2] = I(self, 0x28) - I(self, 0x1c);

        int f = FUN_020bc610(&F(self, 0x2c), &DAT_0219ccd8).v;
        position.v[0] = fx_mul(position.v[0], f);
        position.v[1] = fx_mul(position.v[1], f);
        position.v[2] = fx_mul(position.v[2], f);
        position.v[0] += I(self, 0x14);
        position.v[1] += I(self, 0x18);
        position.v[2] += I(self, 0x1c);

        position.v[1] += add_fx(FUN_020bc5cc(&FUN_020bc5cc(&quadratic, &F(self, 0x2c)), &F(self, 0x2c)), FUN_020bc5cc(&linear, &F(self, 0x2c)));
        V(actor, 0x38) = position;

        int vis = I(actor, 0xe8);
        if ((DAT_0219ccd4[2] < position.v[1]) ? 1 : 0) {
            FUN_02044570(actor, vis, 0);
        } else {
            FUN_02044570(actor, vis, 1);
        }

        int delta = FUN_02036c34(actor);
        I(self, 0x2c) += delta;
        if ((I(self, 0x2c) > DAT_0219ccd4[1]) ? 1 : 0) {
            V(actor, 0x38) = V(self, 0x20);
            FUN_overlay_31__021998c8(actor);
            I(self, 0xc) = 2;
        } else if (FUN_02040d2c(actor, channel) && ((I(self, 0x2c) > DAT_0219ccd4[3]) ? 1 : 0)) {
            FUN_02040c0c(actor, channel, 2, 0x1000, 0);
        }
        break;
    }
    case 2:
        if (FUN_02040d2c(actor, channel) && !FUN_overlay_31__0219a638(owner, 3)) {
            FUN_02040c0c(actor, channel, 0, 0x1000, 0);
        }
        break;
    case 3:
        if (!FUN_overlay_31__0219a638(owner, 3)) {
            FUN_02040c0c(actor, channel, 0, 0x1000, 0);
        }
        I(self, 0xc) = 2;
        break;
    }
}
