// flags: -O4,s
typedef struct {
    unsigned char b[6];
} Six;
typedef struct {
    int x, y, z;
} Vec;
extern const int UNK_020f2bb0[];
extern const Vec UNK_020f2a60;
extern void FUN_0207a514(void *, void *, int, int, int);
extern void FUN_0207a3f4(void *, int, int, int);
extern void FUN_0207a1ec(void *, void *, int);
#pragma thumb off
extern void FUN_0200c938(void *, int);
#pragma thumb on
extern void FUN_0207a5b4(void *);
extern void FUN_020be4f8(void *, int, int);
extern int FUN_0204dab0(int);
extern int FUN_0204dac4(int);
extern int FUN_02078198(int);
extern int FUN_020beccc(void *, void *, int, void *, void *);
extern void *FUN_020be450(void);
#define W(n) (*(int *)(s + (n)))

void FUN_0207b26c(char *s, char *parent, int value) {
    int tier;
    Vec mask;
    Vec pos;
    Six b;
    int pair[2];
    Six a;
    FUN_0207a514(s, parent, value, 1, 5);
    tier = W(280);
    if (tier >= 0 && tier < 3)
        W(384) = UNK_020f2bb0[tier];
    FUN_0207a3f4(&a, 1, W(276), 1);
    b = a;
    W(388) = b.b[3] << 7;
    W(72) = W(68) + 30 * W(76);
    W(396) = 2;
    FUN_0207a1ec(&pos, s + 92, *(unsigned short *)(s + 106));
    *(Vec *)(s + 92) = pos;
    if (FUN_0204dab0(W(232)) || FUN_0204dac4(W(232)) || FUN_02078198(W(232))) {
        mask = UNK_020f2a60;
        if (FUN_02078198(W(232))) {
            mask.x = 2;
            mask.y = 1;
            W(256) = *(int *)(parent + 96);
        } else {
            W(256) = 22;
        }
        FUN_0200c938(pair, 8);
        pair[1] = W(232);
        FUN_0207a5b4(s);
        W(376) = FUN_020beccc(FUN_020be450(), s + 324, 1, &mask, pair);
        FUN_020be4f8(FUN_020be450(), W(376), 0);
    }
    W(228) |= 1;
}
