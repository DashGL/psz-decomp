// flags: -O4,s
typedef struct { int x, y, z; } Vec;
typedef struct {
    unsigned short f00;
    unsigned short f02;
    unsigned short f04[5];
    unsigned short pad0e;
    int f10;
    int f14;
    int f18;
    int f1c;
    Vec f20;
    Vec f2c;
    unsigned short f38;
    unsigned short f3a;
    unsigned short f3c;
    unsigned short f3e;
    int f40;
    int f44;
    int f48;
    int f4c;
    int f50;
    int f54;
    int f58;
    int f5c;
    int f60;
} Effect;

extern void FUN_02035408(void *, int, int, int);
extern void FUN_02046d94(void *, int, int);

void FUN_02081900(char *s, int kind, int height, int scale) {
    Effect e;
    Vec p;
    Vec q;
    int i;

    e.f00 = 0xFFFF;
    e.f02 = 0xFFFF;
    for (i = 0; i < 5; i++) {
        e.f04[i] = 0xFFFF;
    }
    e.f10 = -1;
    e.f14 = -1;
    e.f18 = 0x1000;
    e.f1c = 0;
    FUN_02035408(&e.f20, 0, 0, 0);
    FUN_02035408(&e.f2c, 0x1000, 0x1000, 0x1000);
    e.f38 = 0;
    e.f3a = 0;
    e.f3c = 0;
    e.f3e = 0;
    e.f40 = -1;
    e.f1c |= 2;
    e.f44 = -1;
    e.f48 = -1;
    e.f4c = -1;
    e.f50 = 0;
    e.f54 = 0x95;
    e.f58 = -1;
    e.f5c = 0;
    e.f60 = 0;

    if (kind == 0) {
        e.f54 = 0x26;
    } else if (kind == 1) {
        e.f54 = 0x94;
    } else {
        e.f54 = 0x24;
        e.f44 = 1;
        e.f48 = 0x10;
        e.f4c = -1;
    }

    p = *(Vec *)(s + 0x1c);
    p.y = height;
    e.f20 = p;
    q.x = scale;
    q.y = scale;
    q.z = scale;
    e.f2c = q;
    FUN_02046d94(&e, 0, 0);
}
