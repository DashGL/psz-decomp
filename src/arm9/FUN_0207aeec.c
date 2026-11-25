// flags: -O4,s
typedef struct { unsigned char b[6]; } Six;
typedef struct { int x, y, z; } Vec;
extern int UNK_020f2b8c[];
extern Vec UNK_020f2a54;
extern void *UNK_02108cf4;
#pragma thumb off
extern void FUN_0200c938(void *, int);
#pragma thumb on
extern void FUN_0207a514(void *, void *, int, int, int), FUN_0207a3f4(Six *, int, int, int), FUN_0207a1ec(Vec *, void *, int), FUN_0207a5b4(void *), FUN_020be4f8(void *, int, int);
extern int FUN_0204dab0(int), FUN_0204dac4(int), FUN_02078198(int), FUN_0207f770(void *), FUN_020beccc(void *, void *, int, void *, void *);
extern void *FUN_020be450(void), *FUN_020352a4(void *, int);
extern char *FUN_020352c0(void *);
#define W(n) (*(int *)(s + (n)))
void FUN_0207aeec(char *s, char *parent, int value) {
    Vec mask, projected, flat;
    Six copy;
    int pair[2];
    Six desc;
    int tier;
    char *owner;
    FUN_0207a514(s, parent, value, 1, 4);
    tier = W(280);
    if (tier >= 0 && tier < 3) W(384) = UNK_020f2b8c[tier];
    FUN_0207a3f4(&desc, 1, W(276), 0);
    copy = desc;
    W(272) = copy.b[3] << 7;
    W(72) = W(68) + ((W(76) * copy.b[2]) / W(272)) * W(76);
    FUN_0207a1ec(&projected, s + 92, *(unsigned short *)(s + 106));
    *(Vec *)(s + 92) = projected;
    flat.x = W(92);
    flat.y = 0;
    flat.z = W(100);
    *(Vec *)(s + 92) = flat;
    if (FUN_0204dab0(W(232)) || FUN_0204dac4(W(232)) || FUN_02078198(W(232))) {
        mask = UNK_020f2a54;
        if (FUN_02078198(W(232))) {
            mask.x = 2;
            mask.y = 1;
            W(256) = *(int *)(parent + 96);
            owner = FUN_020352c0(FUN_020352a4(UNK_02108cf4, W(232)));
            if (owner) {
                owner = (char *)((unsigned)owner + 100);
                if (owner && FUN_0207f770(owner) == 3) mask.y = 3;
            }
        } else {
            W(256) = 21;
        }
        FUN_0200c938(pair, 8);
        pair[1] = W(232);
        FUN_0207a5b4(s);
        W(376) = FUN_020beccc(FUN_020be450(), s + 324, 1, &mask, pair);
        FUN_020be4f8(FUN_020be450(), W(376), 0);
    }
    W(228) |= 1;
}
