// flags: -O4,p -noThumb
typedef struct {
    signed char f00;
    unsigned char f01;
    short f02;
    unsigned char f04;
    unsigned char f05;
    unsigned char f06[0x20];
} Dec_020079f0;

extern int __signbitd(double);
extern int __fpclassifyd(double);
extern double FUN_02006b0c(double, int *);
extern int FUN_0200823c(unsigned long long);
extern void FUN_02007208(Dec_020079f0 *, int);
extern double FUN_02006bc8(double, int);
extern long long FUN_02008868(double);
extern void FUN_02006f1c(Dec_020079f0 *, long long);
extern void FUN_02006fe8(Dec_020079f0 *, Dec_020079f0 *, Dec_020079f0 *);

void FUN_020079f0(Dec_020079f0 *r7, double d) {
    int exp;
    Dec_020079f0 dec2;
    Dec_020079f0 dec1;
    signed char sgn = __signbitd(d) != 0;
    if (d == 0.0) {
        r7->f00 = sgn;
        r7->f02 = 0;
        r7->f04 = 1;
        r7->f05 = 0;
        return;
    }
    if (__fpclassifyd(d) <= 2) {
        r7->f00 = sgn;
        r7->f02 = 0;
        r7->f04 = 1;
        r7->f05 = (__fpclassifyd(d) == 1) ? 'N' : 'I';
        return;
    }
    if (sgn != 0) {
        d = 0.0 - d;
    }
    {
        double mant = FUN_02006b0c(d, &exp);
        double tmp = mant;
        unsigned long long m = (*(unsigned long long *)&tmp) | 0x0010000000000000ULL;
        int sh = 53 - FUN_0200823c((m & -m) - 1);
        FUN_02007208(&dec1, exp - sh);
        FUN_02006f1c(&dec2, FUN_02008868(FUN_02006bc8(mant, sh)));
        FUN_02006fe8(r7, &dec2, &dec1);
        r7->f00 = sgn;
    }
}
