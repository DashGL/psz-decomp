// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct { int x, y; } Pair;
typedef struct { int w[12]; } Matrix;
typedef struct { int w[9]; } Rotation;
typedef struct { unsigned char b[6]; } Six;
extern int UNK_020f2c28[];
extern Vec UNK_020f2acc;
#pragma thumb off
extern void FUN_0200c938(void *, int);
#pragma thumb on
extern void FUN_0207a514(void *, void *, int, int, int), FUN_0207a1ec(Vec *, void *, int), FUN_02035408(Vec *, int, int, int), FUN_0207a5b4(void *), FUN_020be4f8(void *, int, int), FUN_0207a3f4(Six *, int, int, int), FUN_020bf680(void *, Pair *, int);
extern int FUN_02078188(int), FUN_0204dab0(int), FUN_0204dac4(int), FUN_02078198(int), FUN_0204260c(void *, int, Matrix *, Rotation *), FUN_020beccc(void *, void *, int, void *, void *);
extern char *FUN_0204daa8(int);
extern void *FUN_020be450(void);
#define W(n) (*(int *)(s + (n)))
void FUN_0207cce4(char *s, char *parent, int value) {
    Matrix matrix;
    Rotation rotation;
    Vec bone, mask, scale, pos;
    Pair key;
    Six copy;
    Pair center;
    Six desc;
    char *actor;
    void *model;
    int tier, amount;
    FUN_0207a514(s, parent, value, 3, 15);
    W(268) = 1;
    tier = W(280);
    amount = 4096;
    if (tier >= 0 && tier < 3) amount = UNK_020f2c28[tier];
    scale.x = amount;
    scale.y = amount;
    scale.z = amount;
    *(Vec *)(s + 80) = scale;
    FUN_0207a1ec(&pos, s + 92, *(unsigned short *)(s + 106));
    *(Vec *)(s + 92) = pos;
    if (FUN_02078188(W(232))) {
        actor = FUN_0204daa8(W(232));
        if (actor) {
            model = *(void **)(actor + 140);
            if (model) {
                FUN_0204260c(model, 2, &matrix, &rotation);
                FUN_02035408(&bone, matrix.w[9], matrix.w[10], matrix.w[11]);
                *(Vec *)(s + 92) = bone;
            }
        }
    }
    if (FUN_0204dab0(W(232)) || FUN_0204dac4(W(232)) || FUN_02078198(W(232))) {
        mask = UNK_020f2acc;
        if (FUN_02078198(W(232))) {
            mask.x = 2;
            mask.y = 1;
            W(256) = *(int *)(parent + 96);
        } else {
            W(256) = 26;
        }
        FUN_0200c938(&key, 8);
        key.y = W(232);
        FUN_0207a5b4(s);
        W(376) = FUN_020beccc(FUN_020be450(), s + 324, 1, &mask, &key);
        FUN_020be4f8(FUN_020be450(), W(376), 0);
    }
    FUN_0207a3f4(&desc, 3, W(276), 1);
    copy = desc;
    center.x = W(92);
    center.y = W(100);
    FUN_020bf680(s + 288, &center, copy.b[2] << 12);
}
