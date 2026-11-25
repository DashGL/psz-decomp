// flags: -O4,s
extern void FUN_020c32b4(void *, int);

struct D_828c {
    unsigned short a;
    unsigned short b;
    unsigned short c;
    unsigned short pad;
    int x;
    int y;
};

void FUN_overlay_12__0212828c(void *unused, int *p, int selected, int mode) {
    struct D_828c d;
    int i;
    d.a = 0; d.b = 0; d.c = 0;
    ((volatile struct D_828c *)&d)->a = 0;
    ((volatile struct D_828c *)&d)->b = 0;
    ((volatile struct D_828c *)&d)->c = 0;
    d.x = 0;
    d.y = 0;
    d.x = 5 << 12;
    for (i = 0; i < 4; i++) {
        d.y = (i * 17 + 27) << 12;
        if (i == selected) {
            d.a = 1;
            FUN_020c32b4(&d, p[2]);
        } else {
            d.a = 0;
            FUN_020c32b4(&d, p[2]);
        }
    }
    d.x = 0;
    d.y = 5 << 12;
    d.a = (mode == 0) ? 9 : 8;
    FUN_020c32b4(&d, p[3]);
}
