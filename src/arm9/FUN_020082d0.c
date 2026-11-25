// flags: -O4,p -noThumb
unsigned int FUN_020082d0(double value, ...) {
    unsigned int *p = (unsigned int *)&value;
    return p[1] & 0x80000000u;
}
