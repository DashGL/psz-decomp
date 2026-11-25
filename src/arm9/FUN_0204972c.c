// flags: -O4,s
typedef struct { unsigned int w[3]; } Vector;
extern const short DAT_020ed83c[];
extern const Vector DAT_020ed624;
extern void *DAT_02108c64;
extern void FUN_020473e8(void *, void *, int), FUN_02032dfc(void *, void *), FUN_0200c938(void *, unsigned int), FUN_020bf6e0(void *, void *, int, int, unsigned short), FUN_020c0488(void *), FUN_020c0484(void *, int), FUN_020be4f8(void *, unsigned int, int), FUN_02046390(void *, unsigned int);
extern void *FUN_02047798(void *, void *), *FUN_020be450(void);
extern unsigned int FUN_0204daa8(int);
extern int FUN_02078188(unsigned int), FUN_02078198(unsigned int), FUN_0206d45c(void *), FUN_0204dab0(int), FUN_0204dac4(int);
extern unsigned int FUN_020beccc(void *, void *, int, void *, void *);
#define W(n) (*(unsigned int *)(s + (n)))
#define H(n) (*(unsigned short *)(s + (n)))
void FUN_0204972c(char *s, char *input, unsigned int kind) {
    char *owner;
    Vector groups, copy, zero;
    unsigned int descriptor[5], binding[2];
    int amount;
    FUN_020473e8(s, input, 0);
    W(260) = 0; W(264) = 0; W(268) = 0;
    H(272) = 0; H(274) = 0; H(276) = 0;
    owner = (char *)FUN_0204daa8((int)W(232));
    if (owner) {
        H(272) = *(unsigned short *)(owner + 192);
        H(274) = DAT_020ed83c[2 * (H(272) >> 4)];
        H(276) = DAT_020ed83c[2 * (H(272) >> 4) + 1];
    }
    H(278) = 8;
    W(280) = 0; W(284) = 0; W(292) = 0; W(296) = 8;
    amount = ((int)W(72) / (int)W(76)) * *(int *)(input + 92);
    W(288) = amount / *(short *)(s + 278);
    W(72) = (W(296) + 30) * W(76);
    W(172) = 2;
    zero.w[0] = 0; zero.w[1] = 0; zero.w[2] = 0;
    *(Vector *)(s + 80) = zero;
    groups = DAT_020ed624;
    if (FUN_02078188(W(232))) {
        groups.w[0] = 1; groups.w[1] = 6;
        FUN_02032dfc(descriptor, DAT_02108c64);
        if (!FUN_0206d45c(descriptor)) W(228) |= 0x400000;
        owner = (char *)FUN_0204daa8((int)W(232));
        if (owner) {
            copy = *(Vector *)(owner + 156);
            W(304) = copy.w[0];
            W(308) = copy.w[2];
        }
    }
    if (FUN_02078198(W(232))) {
        groups.w[0] = 2; groups.w[1] = 1;
    }
    FUN_0200c938(binding, 8);
    binding[1] = W(232);
    FUN_020bf6e0(s + 312, s + 304, 0, 0, 0);
    FUN_020c0488(s + 348);
    FUN_02047798(s + 360, s + 312);
    W(356) = 4096;
    FUN_020c0484(s + 348, 2);
    W(304) = 0; W(308) = 0; W(400) = ~0u;
    if (FUN_0204dab0((int)W(232)) || FUN_0204dac4((int)W(232))) {
        W(400) = FUN_020beccc(FUN_020be450(), s + 348, 1, &groups, binding);
        FUN_020be4f8(FUN_020be450(), W(400), 0);
    }
    FUN_02046390(s + 300, kind);
}
