// flags: -O4,s
extern short UNK_020ed83c[];
static inline int fx_mul(int a, int b) {
    return (int)(((long long)a * (long long)b + 0x800) >> 12);
}
void FUN_020bbfbc(int *v, int angle) {
    int sn = UNK_020ed83c[(angle >> 4) * 2];
    int cs = UNK_020ed83c[(angle >> 4) * 2 + 1];
    int x = v[0];
    int z = v[2];
    v[0] = fx_mul(x, cs) + fx_mul(z, sn);
    v[2] = fx_mul(z, cs) - fx_mul(x, sn);
}
