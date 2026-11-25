// flags: -O4,p
struct S_020b6170 {
    unsigned short f0;
    unsigned short f2_lo : 13;
    unsigned short f2_hi : 3;
    unsigned int f4_lo : 4;
    unsigned int f4_hi : 28;
};
unsigned int FUN_020b6170(struct S_020b6170 *s, int mode) {
    if (mode == 1) {
        unsigned int v = s->f2_hi;
        if (v != 0) {
            return v + 0x2c;
        }
        return 0;
    }
    return s->f4_lo;
}
