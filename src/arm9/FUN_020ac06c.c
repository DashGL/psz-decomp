// flags: -O4,s
extern short DAT_020ed83c[];
extern int FUN_02034b8c(void *, int);

int FUN_020ac06c(char *s, int *position, int angle, int delta, unsigned short *out) {
    int p[3];
    unsigned short wrapped;
    int result = 0;
    int a = angle + delta;
    int i, radius, x, z;
    if (a > 0x8000) {
        a = -(0x10000 - a);
    } else if (a < -0x8000) {
        a = a + 0x10000;
    }
    wrapped = (unsigned short)a;
    i = ((int)wrapped >> 4) * 2;
    radius = *(int *)(s + 0x104);
    x = position[0] + ((DAT_020ed83c[i] * radius) >> 12);
    z = position[2] + ((DAT_020ed83c[i + 1] * radius) >> 12);
    x += *(int *)(s + 0x11c);
    z += *(int *)(s + 0x124);
    p[0] = x;
    p[1] = 0;
    p[2] = z;
    if (FUN_02034b8c(p, 0x100)) {
        *out = wrapped;
        result = 1;
    }
    return result;
}
