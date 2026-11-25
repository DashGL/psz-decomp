// flags: -O4,s
extern void FUN_020c32b4(void *, int);
extern const int DAT_02138114[];

struct Draw {
    unsigned short a, b, c, pad;
    int x, y;
};

void FUN_overlay_12__0212601c(int *p) {
    struct Draw d;
    int handle;

    d.a = 0;
    d.b = 0;
    d.c = 0;
    ((volatile struct Draw *)&d)->a = 0;
    ((volatile struct Draw *)&d)->b = 0;
    ((volatile struct Draw *)&d)->c = 0;
    d.y = 0;
    d.x = 0;
    handle = p[89];
    if (p[16] != 0) {
        d.x = 0x29 << 12;
        if (p[16] == 1) {
            d.y = 0x79 << 12;
        } else if (p[16] == 2) {
            d.y = (DAT_02138114[p[22] + 2] - 1) << 12;
        } else {
            d.y = (DAT_02138114[p[22]] - 1) << 12;
        }
        d.a = ((unsigned short *)p)[180];
        FUN_020c32b4(&d, handle);
    }
    d.x = 0x28 << 12;
    d.y = 0x31 << 12;
    d.a = ((unsigned short *)p)[181];
    FUN_020c32b4(&d, handle);
}
