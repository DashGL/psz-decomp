// flags: -O4,s
struct S020a57a0 {
    unsigned char f0, f1, f2, f3;
    int f4;
    int f8;
    signed char fc;
    unsigned char fd;
    signed char fe, ff;
    int f10;
};
struct S020a57a0 *FUN_020a57a0(struct S020a57a0 *out, struct S020a57a0 *in) {
    out->f0 = in->f0;
    out->f1 = in->f1;
    out->f2 = in->f2;
    out->f3 = in->f3;
    out->f4 = in->f4;
    out->f8 = in->f8;
    out->fc = in->fc;
    out->fd = in->fd;
    out->fe = in->fe;
    out->ff = in->ff;
    out->f10 = in->f10;
    return out;
}
