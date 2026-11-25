// flags: -noThumb -O4,p
double FUN_02006aec(double x) {
    ((unsigned int *)&x)[1] &= 0x7fffffff;
    return x;
}
