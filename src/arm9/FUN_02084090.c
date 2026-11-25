//cpp
// flags: -O4,s
extern "C" {
extern char *FUN_020837e8(void *);
extern void FUN_0207137c(void *);
extern int UNK_020fc988;
extern int UNK_0211a4ec[];
extern int UNK_020fa750[];
}
static inline int FX_Mul(int a, int b) {
    return (int)(((long long)a * b + 0x800LL) >> 12);
}
static inline int has_flag(char *actor) {
    return (*(int *)(actor + 236) & 16) ? 1 : 0;
}
static inline int is_lerp(char *state) {
    return (*(int *)(state + 4) < 4096) ? 1 : 0;
}
extern "C" void FUN_02084090(char *s) {
    char *state = s + 364;
    char *actor = FUN_020837e8(s);
    int distance, angle, factor;
    if (actor) {
        if (*(int *)state == 0 && has_flag(actor)) {
            *(int *)state = 1;
            *(int *)(state + 4) = UNK_020fc988;
            *(int *)(state + 8) = *(int *)(s + 124);
            *(unsigned short *)(state + 12) = *(unsigned short *)(s + 128);
        } else if (*(int *)state == 1 && !has_flag(actor)) {
            *(int *)state = 0;
            *(int *)(state + 4) = UNK_020fc988;
            *(int *)(state + 8) = *(int *)(s + 124);
            *(unsigned short *)(state + 12) = *(unsigned short *)(s + 128);
        }
    }
    distance = 0;
    angle = 0;
    switch (*(int *)state) {
    case 0:
        distance = 21504;
        angle = 2048;
        break;
    case 1:
        distance = 25267;
        angle = 96;
        break;
    }
    if (is_lerp(state)) {
        if (!(UNK_0211a4ec[4] & 1)) {
            UNK_020fa750[1] = 137;
            UNK_0211a4ec[4] |= 1;
        }
        factor = 4096 - *(int *)(state + 4);
        distance += FX_Mul(*(int *)(state + 8) - distance, factor);
        angle = (unsigned short)(angle + FX_Mul(*(unsigned short *)(state + 12) - angle, factor));
        *(int *)(state + 4) += UNK_020fa750[1];
    }
    *(int *)(s + 124) = distance;
    *(unsigned short *)(s + 128) = angle;
    FUN_0207137c(s);
}
