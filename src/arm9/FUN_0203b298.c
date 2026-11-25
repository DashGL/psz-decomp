// flags: -O4,s
typedef struct { unsigned int x, y, z; } Vec;
typedef struct { unsigned short c[5]; } Five;
typedef struct { unsigned short a, b; Five five; } Ids;
typedef struct { unsigned int w[12]; } M43;
typedef struct { unsigned int w[9]; } M33;
typedef struct {
    unsigned short a;
    unsigned short b;
    unsigned short c[5];
    unsigned short pad0e[7];
    unsigned int flags;
    Vec pos;
    Vec scale;
    unsigned short pad38;
    unsigned short h29;
    unsigned int pad3c[7];
    unsigned int w22;
    unsigned int pad5c[2];
} Effect;

extern void *DAT_02108d64;
extern void *DAT_02108c64;
extern Ids *FUN_02041b4c(void *, int);
extern int FUN_0204260c(void *, int, void *, void *);
extern void FUN_02032dfc(void *, void *);
extern int FUN_0206d36c(void *, void *);
extern void FUN_0203666c(void *);
extern unsigned int FUN_02035b60(unsigned int);
extern void FUN_02046d94(void *, int, int);
extern void FUN_0203aa58(void *, int, void *);

void FUN_0203b298(char *s, int mode) {
    Effect effect;
    M43 matrix;
    M33 rotation;
    Ids ids;
    Vec pos;
    Vec scale;
    unsigned int descriptor[5];
    void *manager;
    Ids *p;
    int i;
    int flag;

    if (!*(void **)(s + 140)) {
        return;
    }
    manager = DAT_02108d64;
    if (!manager) {
        return;
    }
    flag = 1;
    if (mode == 1) {
        flag = 0;
    }
    p = FUN_02041b4c(manager, flag);
    ids.a = p->a;
    ids.b = p->b;
    ids.five = p->five;
    FUN_0204260c(*(void **)(s + 140), 0, &matrix, &rotation);
    FUN_02032dfc(descriptor, DAT_02108c64);
    if (!FUN_0206d36c(descriptor, 0)) {
        unsigned int x, y;
        FUN_0203666c(&effect);
        effect.h29 = *(unsigned short *)(s + 192);
        pos.x = matrix.w[9];
        pos.y = 0;
        pos.z = matrix.w[11];
        effect.pos = pos;
        effect.a = ids.a;
        effect.b = ids.b;
        for (i = 0; i < 5; i++) {
            effect.c[i] = ids.five.c[i];
        }
        effect.flags &= ~2u;
        effect.flags |= 16384;
        x = ((FUN_02035b60(40) + 75) << 12) / 100u;
        y = ((FUN_02035b60(40) + 75) << 12) / 100u;
        scale.x = x;
        scale.y = y;
        scale.z = x;
        effect.scale = scale;
        effect.w22 = *(unsigned int *)(s + 252);
        FUN_02046d94(&effect, 0, 0);
    }
    if (mode == 0) {
        FUN_0203aa58(s, 0, s + 36);
    }
}
