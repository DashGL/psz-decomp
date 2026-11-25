// flags: -O4,p
typedef struct {
    int x, y, z;
} Vec;

extern short DAT_020ed83c[];
extern int FUN_02034b8c(Vec *, int);
extern int FUN_020ac06c(void *, Vec *, int, int, unsigned short *);

int FUN_020ac104(char *s) {
    Vec pos;
    Vec test;
    unsigned short right = 0;
    unsigned short left = 0;
    int ok = 1;
    int a, b;

    pos = *(Vec *)(s + 0x9c);
    {
        int idx = (int)(*(unsigned short *)(s + 0xc2)) >> 4;
        pos.x += (DAT_020ed83c[idx * 2] * (*(int *)(s + 0x104))) >> 12;
        pos.z += (DAT_020ed83c[idx * 2 + 1] * (*(int *)(s + 0x104))) >> 12;
    }
    pos.x += *(int *)(s + 0x11c);
    pos.z += *(int *)(s + 0x124);
    test.x = pos.x;
    test.y = pos.y;
    test.z = pos.z;
    if (!FUN_02034b8c(&test, 0x100)) {
        a = FUN_020ac06c(s, (Vec *)(s + 0x9c), *(unsigned short *)(s + 0xc2), 0x1000, &right);
        b = FUN_020ac06c(s, (Vec *)(s + 0x9c), *(unsigned short *)(s + 0xc2), -0x1000, &left);
        if (a == 1 && b == 0) {
            *(unsigned short *)(s + 0xc2) = right;
        } else if (a == 0 && b == 1) {
            *(unsigned short *)(s + 0xc2) = left;
        } else {
            a = FUN_020ac06c(s, (Vec *)(s + 0x9c), *(unsigned short *)(s + 0xc2), 0x2000, &right);
            b = FUN_020ac06c(s, (Vec *)(s + 0x9c), *(unsigned short *)(s + 0xc2), -0x2000, &left);
            if (a == 1 && b == 0) {
                *(unsigned short *)(s + 0xc2) = right;
            } else if (a == 0 && b == 1) {
                *(unsigned short *)(s + 0xc2) = left;
            } else {
                a = FUN_020ac06c(s, (Vec *)(s + 0x9c), *(unsigned short *)(s + 0xc2), 0x2000, &right);
                b = FUN_020ac06c(s, (Vec *)(s + 0x9c), *(unsigned short *)(s + 0xc2), -0x2000, &left);
                if (a == 1 && b == 0) {
                    *(unsigned short *)(s + 0xc2) = right;
                } else if (a == 0 && b == 1) {
                    *(unsigned short *)(s + 0xc2) = left;
                } else {
                    ok = 0;
                }
            }
        }
    }
    *(int *)(s + 0x104) = 0;
    *(int *)(s + 0x11c) = 0;
    *(int *)(s + 0x120) = 0;
    *(int *)(s + 0x11c) = 0;
    return ok;
}
