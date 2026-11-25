// flags: -O4,s
typedef struct { unsigned char b[4]; } Id_12_3150;

unsigned int FUN_overlay_12__02133150(void *unused, const Id_12_3150 *in) {
    Id_12_3150 t1, t2, t3, t4, copy;
    unsigned char a, b, c;
    unsigned int high, full;
    copy = *in;
    t1 = copy; a = ((volatile Id_12_3150 *)&t1)->b[0];
    t2 = copy; b = t2.b[1];
    t3 = copy; c = t3.b[0];
    if (c == 0) {
        if (b == 17) high = 295;
        else high = b * 10;
    } else {
        high = a * 255 + b * 10;
    }
    t4 = copy;
    full = ((unsigned int)t4.b[0] << 24) | ((unsigned int)t4.b[1] << 16) | ((unsigned int)t4.b[2] << 8) | t4.b[3];
    full = (unsigned short)full;
    return (high << 16) | full;
}
