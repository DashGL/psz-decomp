// flags: -O4,s
typedef struct { int x, y, z; } Vec;
extern short UNK_020ed83c[];
extern int FUN_02033704(void);
extern void FUN_02030658(void *, Vec *), FUN_0203067c(void *, unsigned short), FUN_0203041c(void *);
#define W(n) (*(int *)(s+(n)))
#define H(n) (*(unsigned short *)(s+(n)))
static inline int FX_Mul(int a, int b) {
    return (int)(((long long)a * b + 0x800LL) >> 12);
}
void FUN_020a01b8(char *s) {
    Vec original, a, b;
    int kind = (unsigned char)s[46];
    unsigned short angle, delta;
    W(80)++;
    if (W(80) > 30) W(80) -= 30;
    original = *(Vec *)(s + 28);
    if (!FUN_02033704()) {
        if (kind == 0) {
            a = *(Vec *)(s + 84);
            { int dy = FX_Mul(UNK_020ed83c[2*((2184*(W(80)%30))>>4)], 410); dy += a.y; a.y = dy; }
            FUN_02030658(s, &a);
        } else if (kind == 1 && original.y != W(88)) {
            b = *(Vec *)(s + 84);
            { int dy = FX_Mul(UNK_020ed83c[2*((2184*(W(80)%30))>>4)], 410); dy += b.y; b.y = dy; }
            FUN_02030658(s, &b);
        }
        delta = H(96);
        if (delta) {
            angle = H(44);
            if (angle >= delta) angle -= delta;
            else angle = angle + 65536 - delta;
            FUN_0203067c(s, (unsigned short)angle);
            if (kind == 1) {
                if (H(96) > 91) H(96) -= 91;
                else H(96) = 0;
            }
        }
    } else if (kind == 1) H(96) = 0;
    FUN_0203041c(s);
}
