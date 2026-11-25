// flags: -O4,p
int FUN_020958a4(const unsigned char *p) {
    int r1 = p[0x181];
    int r2 = 0;
    int r0 = 1;
    if (r1 >= 8 && r1 <= 13) r2 = 1;
    if (r2 && r1 != 10) r0 = 0;
    return r0;
}
