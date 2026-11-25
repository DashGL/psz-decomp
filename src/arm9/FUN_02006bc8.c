// flags: -O4,p -noThumb
extern int FUN_020082e4(double);
extern double FUN_02006ac4(double, double);

#define __HI(x) (*((int *)&(x) + 1))
#define __LO(x) (*(int *)&(x))

double FUN_02006bc8(double x, int n) {
    int k, hx, lx;
    if (FUN_020082e4(x) <= 2 || 0.0 == x) {
        return x;
    }
    hx = __HI(x);
    lx = __LO(x);
    k = (hx & 0x7ff00000) >> 20;
    if (k == 0) {
        if ((lx | (hx & 0x7fffffff)) == 0) {
            return x;
        }
        x *= 18014398509481984.0;
        hx = __HI(x);
        k = ((hx & 0x7ff00000) >> 20) - 54;
        if (n < -50000) {
            return 1.0e-300 * x;
        }
    }
    if (k == 0x7ff) {
        return x + x;
    }
    k = k + n;
    if (k > 0x7fe) {
        return 1.0e+300 * FUN_02006ac4(1.0e+300, x);
    }
    if (k > 0) {
        __HI(x) = (hx & 0x800fffff) | (k << 20);
        return x;
    }
    if (k <= -54) {
        if (n > 50000) {
            return 1.0e+300 * FUN_02006ac4(1.0e+300, x);
        } else {
            return 1.0e-300 * FUN_02006ac4(1.0e-300, x);
        }
    }
    k += 54;
    __HI(x) = (hx & 0x800fffff) | (k << 20);
    return 5.55111512312578270212e-17 * x;
}
