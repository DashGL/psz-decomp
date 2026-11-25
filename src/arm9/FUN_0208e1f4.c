// flags: -O4,s
extern void FUN_020bc638(int *, int *);
extern void FUN_0208e25c(int *, int *);

void FUN_0208e1f4(int *v) {
    int factor;
    int sum;
    if (v[0] || v[1]) {
        long long y = v[1];
        long long x = ((volatile int *)v)[0];
        sum = (int)((x * x + 0x800) >> 12) + (int)((y * y + 0x800) >> 12);
        FUN_020bc638(&factor, &sum);
        FUN_0208e25c(v, &factor);
    }
}
