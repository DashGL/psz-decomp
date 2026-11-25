// flags: -O4,s
typedef struct {
    int x, y, z;
} Vec;

typedef struct {
    int w[5];
} Area;

typedef struct {
    unsigned short h0;
    unsigned short h1;
    unsigned short h2[5];
    unsigned short pad;
    int w4;
    int w5;
    int w6;
    int w7;
    Vec pos;
    Vec scale;
    unsigned short h28;
    unsigned short h29;
    unsigned short h30;
    unsigned short h31;
    int w16;
    int w17;
    int w18;
    int w19;
    int w20;
    int w21;
    int w22;
    int w23;
    int w24;
} Effect;

extern char *DAT_02108c64;
extern int DAT_0210e234;
extern void FUN_020380d4(void *);
extern void FUN_0203acc0(void *);
extern void FUN_0203ae04(void *);
extern void FUN_0203a850(void *, void *, int);
extern void FUN_0203a6f8(void *, void *);
extern int FUN_0206d36c(Area *, int);
extern void FUN_020391f8(void *, int, int);
extern int FUN_02085880(int);
extern void FUN_02035408(Vec *, int, int, int);
extern char *FUN_02046d94(Effect *, int, int);

void FUN_020759f0(unsigned char *s) {
    Effect effect;
    Area area;
    Vec pos;
    int i;
    char *g;

    FUN_020380d4(s);
    if (!s[0x25b]) {
        FUN_0203acc0(s);
        s[0x25b] = 1;
    }
    FUN_0203ae04(s);
    FUN_0203a850(s, s + 0x1a0, 0);
    FUN_0203a6f8(s, s + 0x180);
    g = DAT_02108c64;
    area.w[0] = *(int *)(g + 0x24);
    area.w[1] = *(int *)(g + 0x28);
    area.w[2] = *(int *)(g + 0x2c);
    area.w[3] = *(int *)(g + 0x30);
    area.w[4] = *(int *)(g + 0x34);
    *(int *)(s + 0x108) = FUN_0206d36c(&area, 0) ? 0x400 : 0x2b8;
    *(int *)(s + 0x240) = 0x18;
    *(int *)(s + 0xcc) = -1;
    FUN_020391f8(s, *(int *)(s + 0xd4), 4);
    *(int *)(s + 0xf8) |= 8;
    if (FUN_02085880(*(int *)(s + 0xfc)) == 1 && (((*(int *)(s + 0xf8) & 0x01000000) ? 1 : 0) != 0)) {
        *(int *)(s + 0xf8) &= ~2;
        *(int *)(s + 0xf8) &= ~1;
    }
    if (DAT_0210e234) {
        effect.h0 = 0xffff;
        effect.h1 = 0xffff;
        for (i = 0; i < 5; i++) {
            effect.h2[i] = 0xffff;
        }
        effect.w4 = -1;
        effect.w5 = -1;
        effect.w6 = 0x1000;
        effect.w7 = 0;
        FUN_02035408(&effect.pos, 0, 0, 0);
        FUN_02035408(&effect.scale, 0x1000, 0x1000, 0x1000);
        effect.h28 = 0;
        effect.h29 = 0;
        effect.h30 = 0;
        effect.h31 = 0;
        effect.w16 = -1;
        effect.w7 |= 2;
        effect.w17 = -1;
        effect.w18 = -1;
        effect.w19 = -1;
        effect.w20 = 0;
        effect.w21 = 0x95;
        effect.w22 = -1;
        effect.w23 = 0;
        effect.w24 = 0;
        FUN_02035408(&pos, *(int *)(s + 0x9c), *(int *)(s + 0xa0) + 0xcd, *(int *)(s + 0xa4));
        effect.pos = pos;
        effect.w21 = 5;
        effect.w22 = *(int *)(s + 0xfc);
        *(char **)(s + 0xe0) = FUN_02046d94(&effect, 0, 0);
        if (*(char **)(s + 0xe0)) {
            *(int *)(*(char **)(s + 0xe0) + 0xe4) &= ~1;
        }
    }
    ((signed char *)s)[0x1ff] = -1;
}
