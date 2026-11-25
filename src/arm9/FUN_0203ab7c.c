// flags: -O4,s
struct S {
    unsigned char pad0[0xc0];
    volatile unsigned short fc0;
    unsigned short fc2;
    unsigned char pad1[0x17c];
    int f240;
};

int FUN_0203ab7c(struct S *s) {
    if (s->f240 == 3) {
        int target = s->fc2;
        int current = s->fc0;
        int delta = target - current;
        if (delta > 0x8000) {
            delta = -(0x10000 - delta);
        } else if (delta < -0x8000) {
            delta += 0x10000;
        }
        if (delta > 0x800 || delta < -0x800) {
            if (delta > 0x6000) {
                s->fc0 = target;
            } else if (delta < -0x6000) {
                s->fc0 = target;
            } else {
                s->fc0 += delta / 6;
                s->fc0 = s->fc0;
            }
        } else {
            s->fc0 = target;
        }
        return 1;
    }
    return 0;
}
