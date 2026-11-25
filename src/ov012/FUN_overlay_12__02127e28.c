// flags: -O4,s
extern void FUN_020c32b4(void *, int);
void FUN_overlay_12__02127e28(int *p) {
    struct D { unsigned short a, b, c, pad; int x, y; } d;
    int i;
    d.a = 0; d.b = 0; d.c = 0;
    d.a = 0; d.b = 0; d.c = 0;
    d.x = 0; d.y = 0;
    d.x = 20480;
    for (i = 0; i < 2; i++) {
        d.y = (i * 17 + 27) << 12;
        if (i == p[3]) {
            d.a = 1;
            FUN_020c32b4(&d, p[7]);
        } else {
            d.a = 0;
            FUN_020c32b4(&d, p[7]);
        }
    }
    d.x = 0;
    d.y = 20480;
    d.a = 2;
    FUN_020c32b4(&d, p[8]);
}
