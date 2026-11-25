// flags: -O4,s
typedef unsigned int u32;
typedef struct { int x, y, z; } V;
typedef struct { int m[9]; } M33;
typedef struct { int m[12]; } M43;
typedef struct { char pad[0x7c]; u32 flags; } GfxState;
extern unsigned char DAT_021057d8[];
extern GfxState DAT_0210579c;
#pragma thumb off
extern void FUN_0205aa80(void *);
extern void FUN_020197fc(void *);
extern void FUN_0206564c(void *, void *);
extern void FUN_0201a178(void *);
extern void FUN_0201982c(void *);
extern u32 FUN_02019784(void);
extern int FUN_0201cb44(void *, void *, void *, unsigned int);
extern void FUN_0205b274(void *, void *, int, int, int);
extern void FUN_0205b16c(void *);
extern void FUN_0205b68c(void *, void *, void *);
#pragma thumb on
extern void FUN_0205b2c8(void *, int, int);
#define W(o) (*(int *)(self + (o)))
#define RM(a, b) ((int)(((unsigned long long)((long long)(a) * (long long)(b)) + 2048) >> 12))
void FUN_02041f0c(char *self) {
    int rendered = 0;
    int valid;
    unsigned int i;
    V translation;
    M33 identity;
    M43 matrix, rotation;
    if (W(28) && (W(24) & 1) && W(236) != 1) {
        translation = *(V *)(self + 108);
        if (W(24) & 4) {
            translation.x = 0;
            translation.y = 0;
            translation.z = 0;
            FUN_0205aa80(&identity);
            FUN_020197fc(&translation);
            FUN_0206564c(&identity, DAT_021057d8);
            DAT_0210579c.flags &= ~0xa4u;
            FUN_02019784();
            W(36) |= 4;
            FUN_0201a178(self + 36);
            FUN_0201cb44(self + 36, &matrix, self + 268, 0);
            FUN_0205b274(&matrix, &matrix, W(120), W(124), W(128));
            if (W(24) & 8) {
                FUN_0205b16c(&rotation);
                FUN_0205b2c8(&rotation, W(276), W(268));
                FUN_0205b2c8(&rotation, W(168), W(144));
            } else {
                FUN_0205b16c(&rotation);
                FUN_0205b2c8(&rotation, W(168), W(144));
            }
            FUN_0205b68c(&matrix, &rotation, &matrix);
            W(256) = matrix.m[9];
            W(260) = 0;
            W(264) = matrix.m[11];
            translation.x = W(108) - RM(W(256), W(120));
            translation.y = W(112);
            translation.z = W(116) - RM(W(264), W(128));
            W(36) &= ~4;
        }
        if (!(W(24) & 16)) {
            FUN_020197fc(&translation);
            FUN_0206564c(self + 144, DAT_021057d8);
            DAT_0210579c.flags &= ~0xa4u;
            FUN_0201982c(self + 120);
            FUN_02019784();
        }
        if (*(void (**)(void *))(self + 184)) (*(void (**)(void *))(self + 184))(*(void **)(self + 192));
        FUN_0201a178(self + 36);
        if (*(void (**)(void *))(self + 188)) (*(void (**)(void *))(self + 188))(*(void **)(self + 196));
        rendered = 1;
    }
    valid = 1;
    if (*(void **)(self + 244) && *(void **)(self + 248)) {
        for (i = 0; i < *(unsigned char *)(self + 229); i++)
            valid &= FUN_0201cb44(self + 36, (*(M43 **)(self + 244)) + i, (*(M33 **)(self + 248)) + i, i);
        if (!(W(24) & 4)) {
            W(256) = (*(M43 **)(self + 244))->m[9] - W(108);
            W(260) = 0;
            W(264) = (*(M43 **)(self + 244))->m[11] - W(116);
        }
    }
    W(252) = valid & rendered;
}
