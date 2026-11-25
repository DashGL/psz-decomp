// flags: -O4,s
typedef struct {
    int state;
    int pad0[12];
    int f34;
    int arr1[4];
    int f48;
    int arr2[6];
    int idx;
    int pad1[7];
    short shorts[6];
    int f90;
    int f94;
} State;

typedef struct {
    unsigned short a, b, c, pad;
    int x, y;
} Draw;

extern void FUN_02071d0c(void *);
extern void FUN_020c32b4(void *, int);

void FUN_overlay_4__02126460(State *p) {
    Draw d;
    int enabled;
    int a, b, delta;
    FUN_02071d0c(&d);
    enabled = 0;
    if (p->state == 10) {
        a = p->f34;
        b = p->f48;
    } else {
        a = p->arr1[p->idx];
        b = p->arr2[p->idx];
    }
    delta = a - b;
    switch (p->state) {
        case 3:
            if (p->shorts[p->idx] > 0) {
                enabled = 1;
                d.a = 0;
            }
            break;
        case 10:
            if (p->f90 > 0) {
                enabled = 1;
                d.a = 0;
            }
            break;
        case 7:
        case 9:
            enabled = 1;
            d.a = 1;
            break;
        default:
            return;
    }
    if (enabled) {
        d.x = 5 << 12;
        d.y = (delta * 13 + 250) << 12;
        FUN_020c32b4(&d, p->f94);
    }
}
