// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { int w[25]; } Effect;
typedef struct {
    unsigned char pad0[0x48];
    int f48;
    int f4c;
    Vec scale;      /* 0x50 */
    Vec pos;        /* 0x5c */
    unsigned short f68;
    unsigned short f6a;
    unsigned short f6c;
    unsigned short pad6e;
    unsigned char pad70[0x38];
    int fa8;        /* 0xa8 = 168 */
    int fac;        /* 0xac = 172 */
    unsigned char padb0[0x34];
    int fe4;        /* 0xe4 = 228 */
    int fe8;        /* 0xe8 = 232 */
    unsigned char padec[0x18];
    Vec f104;       /* 0x104 = 260 */
    int f110;       /* 0x110 = 272 */
    int f114;       /* 0x114 = 276 */
    int f118;       /* 0x118 = 280 */
    unsigned short f11c; /* 0x11c = 284 */
} Obj;

extern int DAT_020f2b5c[], DAT_020f2b68[], DAT_020f2c04[];
extern unsigned short DAT_020f2a0a[];
extern char DAT_0211c844[];
extern void FUN_020473e8(void *, void *, int);
extern void FUN_0204bf88(void *);
extern void FUN_0203647c(Vec *, Vec *, Vec *);
extern void FUN_0203666c(Effect *);
extern void FUN_02046d94(Effect *, int, int);
extern int FUN_0207b860(void *, int);

void FUN_0207ddec(Obj *s, void *parent, int tier) {
    int base, range, spread, random; void *rng = DAT_0211c844;
    Effect effect;
    Vec scale, position, delta;

    FUN_020473e8(s, parent, 0);
    base = 4096;
    range = 0;
    s->f11c = 0;
    spread = 0;
    if (tier >= 0 && tier < 3) {
        base = (DAT_020f2b5c[tier] << 12) / 10;
        range = (DAT_020f2b68[tier] << 12) / 10;
        s->f11c = DAT_020f2a0a[tier];
        spread = (DAT_020f2c04[tier] << 12) / 10;
    }
    random = FUN_0207b860(rng, 15) + 10;
    s->f48 = random * s->f4c;
    s->f110 = 31 / (random - 5);
    s->fa8 = 31;
    random = FUN_0207b860(rng, range) + base;
    scale.x = random;
    scale.y = random;
    scale.z = random;
    s->scale = scale;
    s->f68 = FUN_0207b860(rng, 0x2aaa) - 0x1555;
    FUN_0204bf88(s);
    s->f6a = FUN_0207b860(rng, 65536);
    FUN_0204bf88(s);
    s->f6c = FUN_0207b860(rng, 0x2aaa) - 0x1555;
    FUN_0204bf88(s);
    delta.x = FUN_0207b860(rng, spread * 2) - spread;
    delta.y = 0;
    delta.z = 0;
    FUN_0203647c(&position, &s->pos, &delta);
    s->pos = position;
    s->f114 = 0;
    s->f104 = s->pos;
    s->fe4 |= 1;
    s->fac = 2;
    FUN_0203666c(&effect);
    *(Vec *)((char *)&effect + 32) = s->pos;
    effect.w[21] = 33;
    effect.w[22] = s->fe8;
    FUN_02046d94(&effect, tier, 0);
}
