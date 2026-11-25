// flags: -O4,p
int FUN_020c7724(const unsigned int *p) {
    unsigned int x = *p;
    unsigned int n = ((x << 24) & 0xff000000u) | (((x << 8) & 0xff0000u) | ((unsigned char)(x >> 24) | ((x >> 8) & 0xff00u)));
    int a = (unsigned char)(n >> 24);
    int b = (unsigned char)(n >> 16);
    if (a == 10) return 1;
    if (a == 172 && b >= 16 && b <= 31) return 1;
    if (a == 192 && b == 168) return 1;
    return 0;
}
