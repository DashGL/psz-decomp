// flags: -O4,s
#pragma thumb off
extern void FUN_0200c938(void *, unsigned int);
#pragma thumb on
extern unsigned int FUN_020c3f6c(const signed char *, unsigned int), FUN_020c3f00(signed char *, const signed char *, unsigned int);
extern signed char *FUN_020c3ec4(signed char *, const signed char *, unsigned int);
void FUN_020c4320(signed char *text, int width, int side, unsigned int capacity, signed char fill) {
    signed char original[64], padding[64];
    unsigned int length;
    int i, n;
    if (!text || !side) return;
    i = 0;
    FUN_0200c938(original, 64);
    FUN_0200c938(padding, 64);
    length = FUN_020c3f6c(text, 128);
    n = (int)((unsigned int)width - length);
    for (; i < n; ++i) padding[i] = fill;
    FUN_020c3f00(original, text, length);
    if (side == 2) {
        FUN_020c3f00(text, padding, capacity);
        FUN_020c3ec4(text, original, capacity);
    } else if (side == 1) {
        FUN_020c3ec4(text, padding, capacity);
    }
}