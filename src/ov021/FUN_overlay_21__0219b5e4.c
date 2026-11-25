// flags: -O4,s
struct S {
    unsigned char pad[0x4c];
    unsigned short f4c;
    unsigned short f4e;
    unsigned short f50;
    unsigned short f52;
};

int FUN_overlay_21__0219b5e4(struct S *s) {
    int reached = 0;
    unsigned short distance = s->f4c - s->f4e;
    int reverse = 0;
    unsigned short step;
    if (distance >= 0x8000) {
        distance = 0x10000 - distance;
        reverse = 1;
    }
    if (s->f52 < 182) {
        s->f52 += 6;
    }
    step = s->f52;
    if (step > distance) {
        step = distance;
        s->f52 = 0;
        reached = 1;
    }
    if (reverse) {
        s->f4c += step;
    } else {
        s->f4c -= step;
    }
    return reached;
}
