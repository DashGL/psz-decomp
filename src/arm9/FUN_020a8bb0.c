// flags: -O4,s
struct B4 {
    unsigned char f0, f1, f2, f3;
};
struct S {
    struct B4 b;
    int f4;
    int f8;
};

int FUN_020a8bb0(const struct S *a) {
    int r = (a->f8 & 0x1c) >> 2;
    if (r == 0) {
        struct B4 loc = a->b;
        switch (loc.f3) {
        case 0:
        case 25:
        case 26:
        case 27:
        case 28:
        case 29:
        default:
            r = 0;
            break;
        case 1:
        case 7:
        case 9:
        case 16:
        case 19:
        case 22:
            r = 1;
            break;
        case 2:
        case 8:
        case 10:
        case 13:
        case 20:
        case 23:
            r = 3;
            break;
        case 3:
        case 5:
        case 11:
        case 14:
        case 17:
        case 24:
            r = 2;
            break;
        case 4:
        case 6:
        case 12:
        case 15:
        case 18:
        case 21:
            r = 4;
            break;
        }
    }
    return r;
}
