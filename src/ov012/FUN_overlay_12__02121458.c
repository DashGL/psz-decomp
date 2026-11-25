// flags: -O4,s
extern void FUN_020c32b4(void *, int);

struct D_1458 {
    unsigned short a;
    unsigned short b;
    unsigned short c;
    unsigned short pad;
    int x;
    int y;
};

struct S_1458 {
    int f00[6];
    int sel;        // +0x18
    int res1;       // +0x1c
    int res2;       // +0x20
    int pad[2];     // +0x24, +0x28
    int disabled[4];// +0x2c
    int pad2[2];    // +0x3c, +0x40
    int enabled;    // +0x44
};

void FUN_overlay_12__02121458(struct S_1458 *p) {
    struct D_1458 d;
    int i;
    if (p->enabled) {
        d.a = 0; d.b = 0; d.c = 0;
        ((volatile struct D_1458 *)&d)->a = 0;
        ((volatile struct D_1458 *)&d)->b = 0;
        ((volatile struct D_1458 *)&d)->c = 0;
        d.x = 0;
        d.y = 0;
        d.x = 5 << 12;
        for (i = 0; i < 4; i++) {
            d.y = (i * 17 + 27) << 12;
            if (p->disabled[i]) {
                d.a = 2;
                FUN_020c32b4(&d, p->res1);
            } else if (i == p->sel) {
                d.a = 1;
                FUN_020c32b4(&d, p->res1);
            } else {
                d.a = 0;
                FUN_020c32b4(&d, p->res1);
            }
        }
        d.x = 0;
        d.y = 5 << 12;
        d.a = 7;
        FUN_020c32b4(&d, p->res2);
    }
}
