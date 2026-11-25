//cpp
// flags: -O4,s
struct S {
    int pad[9];
    unsigned int bits[8];
};
extern "C" int FUN_overlay_12__021204e4(S *p, int bit) {
    int valid;
    if (bit < 0) valid = 0;
    else if (bit >= 256) valid = 0;
    else valid = 1;
    int res;
    if (valid) {
        res = (p->bits[bit / 32] & (1U << (bit % 32))) != 0;
    } else {
        res = 0;
    }
    return res;
}
