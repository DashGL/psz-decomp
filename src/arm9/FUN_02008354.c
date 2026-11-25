// FUN_02008354 - full bytes and relocation targets verified by tools/match.py (2.0/sp2p3).
// flags: -noThumb
// FUN_02008354 @ 0x02008354 (0x2c, arm)
// check: 2.0/sp2p3 target=0x2c candidate=0x2c words=0 exact_bytes=0 bad_relocs=0
extern double FUN_02006b0c(double, int *);
extern double FUN_02006bc8(double, int);

double FUN_02008354(double x, int n) {
    int exp;
    double r = FUN_02006b0c(x, &exp);
    exp += n;
    return FUN_02006bc8(r, exp);
}
