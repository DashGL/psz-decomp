// flags: -O2,p -noThumb
struct Sample {
    unsigned short x;
    unsigned short y;
    unsigned short touch;
    unsigned short validity;
};
struct Ring {
    unsigned char pad[0x10];
    unsigned short latest;
    unsigned short count;
    struct Sample *buf;
    unsigned short length;
};
extern struct Ring DAT_0211a144;
struct Sample *FUN_0206ae00(struct Sample *out) {
    int i;
    unsigned int latest;
    int index;
    struct Sample *p;
    out->validity = 3;
    latest = DAT_0211a144.latest;
    if (DAT_0211a144.count == 1 || DAT_0211a144.length == 1) {
        *out = DAT_0211a144.buf[latest];
        return out;
    }
    for (i = 0; i < DAT_0211a144.count && i < DAT_0211a144.length - 1; ++i) {
        index = (int)latest - i;
        if (index < 0)
            index += DAT_0211a144.length;
        p = &DAT_0211a144.buf[index];
        if (!p->touch) {
            *out = *p;
            return out;
        }
        if ((out->validity & 1) && !(p->validity & 1)) {
            out->x = p->x;
            if (i)
                out->validity &= ~1;
        }
        if ((out->validity & 2) && !(p->validity & 2)) {
            out->y = p->y;
            if (i)
                out->validity &= ~2;
        }
        if (!out->validity) {
            out->touch = 1;
            return out;
        }
    }
    out->touch = 1;
    return out;
}
