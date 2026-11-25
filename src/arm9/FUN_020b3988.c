// flags: -O4,s
typedef struct {
    int x, y, z;
} Vec_020b3988;
extern char UNK_0211c844[];
extern short UNK_020ed83c[];
extern int FUN_020b3410(void *, int);
extern void FUN_020b3b30(Vec_020b3988 *, Vec_020b3988 *);
static inline int fx_mul_020b3988(int a, int b) {
    return (int)(((long long)a * b + 2048) >> 12);
}
#define W(n) (*(int *)(s + (n)))
void FUN_020b3988(char *s, int reset) {
    int noise, angle;
    noise = FUN_020b3410(UNK_0211c844, 4095) - 2048;
    W(68) += W(72);
    if ((unsigned)W(68) >= 65536 || reset) {
        if (reset) {
            W(64) = 8192 + fx_mul_020b3988(FUN_020b3410(UNK_0211c844, 4095), 3277);
        } else {
            W(68) = 0;
        }
        W(64) += fx_mul_020b3988(noise, 410);
        if (W(64) <= 6144) {
            W(64) = 6144;
        }
    }
    W(56) = fx_mul_020b3988(noise, 410);
    W(28) += W(52);
    W(32) += W(56);
    W(36) += W(60);
    if (W(32) < 2048) {
        FUN_020b3b30((Vec_020b3988 *)(s + 28), (Vec_020b3988 *)(s + 52));
    } else if (W(32) >= 15360) {
        FUN_020b3b30((Vec_020b3988 *)(s + 28), (Vec_020b3988 *)(s + 52));
    }
    if (!(W(72) & 1)) {
        angle = (unsigned short)W(68);
        W(28) = fx_mul_020b3988(UNK_020ed83c[(angle >> 4) * 2 + 1], W(64));
        angle = (unsigned short)W(68);
        W(36) = fx_mul_020b3988(UNK_020ed83c[(angle >> 4) * 2], W(64));
    } else {
        angle = 65535 - (unsigned short)W(68);
        W(28) = fx_mul_020b3988(UNK_020ed83c[(angle >> 4) * 2 + 1], W(64));
        angle = 65535 - (unsigned short)W(68);
        W(36) = fx_mul_020b3988(UNK_020ed83c[(angle >> 4) * 2], W(64));
    }
}
