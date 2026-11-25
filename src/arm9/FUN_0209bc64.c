//cpp
// flags: -O4,s
enum E { E0 = 0, E1 = 1 };
struct Key { unsigned char b[4]; };
struct Vec { int v[3]; };
struct Effect {
    unsigned short f00;
    unsigned short f02;
    unsigned short f04[5];
    unsigned short pad0e;
    int f10;
    int f14;
    int f18;
    unsigned int f1c;
    Vec pos;
    Vec scale;
    unsigned short f38;
    unsigned short f3a;
    unsigned short f3c;
    unsigned short f3e;
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
    int f54;
    int f58;
    int f5c;
    int f60;
};
extern "C" {
extern void *DAT_02108c54, *DAT_02108cf4;
extern char *DAT_02108c64;
extern void FUN_02030d5c(Key *, void *);
extern void FUN_02035408(Vec *, int, int, int);
extern void FUN_02033658(int, int, Vec *);
extern void FUN_02046d94(Effect *, int, int);
extern unsigned char *FUN_02030a98(void *, Key *);
extern int FUN_0207f47c(void *, Key *);
extern int FUN_020855bc(int);
extern void *FUN_020352a4(void *, int);
extern char *FUN_0209b2a4(void *);
void FUN_0209bc64(char *s);
}

#pragma always_inline on
static inline E has_flag1(unsigned char v) {
    E r = E1;
    if (!(v & 1)) r = E0;
    return r;
}

void FUN_0209bc64(char *s) {
    Effect effect;
    Vec position, large, small;
    Key key;
    unsigned char *flags;
    char *actor;
    int type, i;
    FUN_02030d5c(&key, s + 4);
    flags = FUN_02030a98(DAT_02108c54, &key);
    type = *(signed char *)(s + 24);
    if (type == 0) {
        *flags |= 1;
    } else if (type == 1) {
        if (!has_flag1(*flags)) *flags |= 1;
        *flags |= 2;
        if (!FUN_0207f47c(DAT_02108c64 + 20, &key)) return;
        position.v[0] = *(int *)(s + 8);
        position.v[1] = *(int *)(s + 12);
        position.v[2] = *(int *)(s + 16);
        effect.f00 = 65535;
        effect.f02 = 65535;
        for (i = 0; i < 5; i++) effect.f04[i] = 65535;
        effect.f10 = -1;
        effect.f14 = -1;
        effect.f18 = 4096;
        effect.f1c = 0;
        FUN_02035408(&effect.pos, 0, 0, 0);
        FUN_02035408(&effect.scale, 4096, 4096, 4096);
        effect.f38 = 0;
        effect.f3a = 0;
        effect.f3c = 0;
        effect.f3e = 0;
        effect.f40 = -1;
        effect.f44 = -1;
        effect.f48 = -1;
        effect.f4c = -1;
        effect.f50 = 0;
        effect.f1c |= 2;
        effect.f54 = 149;
        effect.f58 = -1;
        effect.f5c = 0;
        effect.f60 = 0;
        if (*(signed char *)(s + 25) == 0) {
            effect.f54 = 11;
            FUN_02033658(72, 0, &position);
            large.v[0] = 16384;
            large.v[1] = 16384;
            large.v[2] = 16384;
            effect.scale = large;
        } else {
            effect.f54 = 40;
            small.v[0] = 8192;
            small.v[1] = 8192;
            small.v[2] = 8192;
            effect.scale = small;
            FUN_02033658(4, 8, &position);
        }
        effect.pos = position;
        FUN_02046d94(&effect, 0, 0);
    } else if (type == 2) {
        actor = (char *)FUN_020352a4(DAT_02108cf4, *(int *)(s + 20));
        if (actor) {
            actor = FUN_0209b2a4(actor);
            if (actor && FUN_020855bc(*(signed char *)(s + 26)) == 1) {
                *(int *)(actor + 320) |= 16;
            }
        }
    }
}
