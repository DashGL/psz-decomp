// flags: -O4,s
struct S {
    unsigned char pad[0x4c];
    unsigned short f4c;
    unsigned short f4e;
    unsigned short f50;
    unsigned short f52;
};

int FUN_overlay_21__0219b56c(struct S *s, unsigned short target) {
    int reached = 0;
    unsigned short distance = s->f50 - target;
    int reverse = 0;
    unsigned short step;
    if (distance >= 0x8000) {
        distance = 0x10000 - distance;
        reverse = 1;
    }
    if (s->f52 < 910) {
        s->f52 += 30;
    }
    step = s->f52;
    if (step > distance) {
        step = distance;
        s->f52 = 0;
        reached = 1;
    }
    if (reverse) {
        s->f50 += step;
    } else {
        s->f50 -= step;
    }
    return reached;
}
