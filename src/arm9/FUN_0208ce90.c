//cpp
// flags: -O4,s
struct Entity8CE90 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3();
    virtual void v4(); virtual void v5(); virtual void v6(); virtual void v7();
    virtual void v8(); virtual void v9(); virtual void v10(); virtual void v11();
    virtual void v12(); virtual void v13(); virtual void v14(); virtual void v15();
    virtual int v16();
    unsigned char pad4[0xf8 - 4];
    unsigned int flags;
    unsigned char padfc[0x143 - 0xfc];
    signed char f143;
    unsigned char pad144[0x200 - 0x144];
    signed char f200;
};
struct Pkt8CE90 {
    int f0; int f4; int f8; int fc;
    unsigned short u10; unsigned short u12;
    int f14; signed char arr18[4];
};
extern "C" {
extern int FUN_02085880(int);
extern Entity8CE90 *FUN_0208555c(int);
extern void FUN_02035408(int *, int, int, int);
extern void FUN_02070020(void *, int *, int);
extern void *FUN_0203bca0(void *);
extern int FUN_0204dab0(int);
extern void FUN_020a8e54(int);
extern void FUN_020a8e2c(int);

static inline bool is_one(Entity8CE90 *e) { return e->v16() == 1; }

void FUN_0208ce90(Pkt8CE90 *p0) {
    int sp4[3];
    if (FUN_02085880(p0->f14) == 1) {
        Entity8CE90 *r6 = FUN_0208555c(p0->f14);
        if (r6 != 0 && !is_one(r6)) {
            FUN_02035408(sp4, p0->f4, p0->f8, p0->fc);
            r6->f143 = (signed char)p0->u12;
            FUN_02070020(r6, sp4, p0->u10);
            for (int i = 0; i < 4; i++) {
                if (p0->arr18[i] != -1) {
                    Entity8CE90 *s = FUN_0208555c(p0->arr18[i]);
                    if (s != 0) {
                        FUN_0203bca0(s);
                        if (FUN_0204dab0(p0->arr18[i]) != 0) {
                            FUN_020a8e54(1);
                        }
                        if (p0->f14 != p0->arr18[i]) {
                            s->f200 = -10;
                        }
                        FUN_020a8e2c(p0->arr18[i]);
                    }
                }
            }
            r6->flags &= ~0x04000000U;
        }
    }
}
}
