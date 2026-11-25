// flags: -O4,s
typedef struct { unsigned int w[9]; } Matrix;
extern const short DAT_020ed83c[];
extern void FUN_0205ab90(Matrix *, int, int);
extern void FUN_0205abac(Matrix *, int, int);
extern void FUN_0205abc8(Matrix *, int, int);
#pragma thumb off
extern void FUN_0205aa80(Matrix *);
extern void FUN_0205aed0(Matrix *, Matrix *, Matrix *);
#pragma thumb on

void FUN_0204bf88(char *s) {
    Matrix a, b, c;
    int angle;
    angle = *(unsigned short *)(s + 104) >> 4;
    FUN_0205ab90(&a, DAT_020ed83c[2 * angle], DAT_020ed83c[2 * angle + 1]);
    angle = *(unsigned short *)(s + 106) >> 4;
    FUN_0205abac(&b, DAT_020ed83c[2 * angle], DAT_020ed83c[2 * angle + 1]);
    angle = *(unsigned short *)(s + 108) >> 4;
    FUN_0205abc8(&c, DAT_020ed83c[2 * angle], DAT_020ed83c[2 * angle + 1]);
    FUN_0205aa80((Matrix *)(s + 112));
    if (*(unsigned int *)(s + 228) & 0x10000000U) {
        FUN_0205aed0((Matrix *)(s + 112), &c, (Matrix *)(s + 112));
        FUN_0205aed0((Matrix *)(s + 112), &b, (Matrix *)(s + 112));
        FUN_0205aed0((Matrix *)(s + 112), &a, (Matrix *)(s + 112));
    } else {
        FUN_0205aed0((Matrix *)(s + 112), &a, (Matrix *)(s + 112));
        FUN_0205aed0((Matrix *)(s + 112), &c, (Matrix *)(s + 112));
        FUN_0205aed0((Matrix *)(s + 112), &b, (Matrix *)(s + 112));
    }
}
