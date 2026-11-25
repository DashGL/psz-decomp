//cpp
// flags: -O4,p
struct Pair {
    unsigned int a;
    unsigned int b;
};
extern Pair DAT_020ebb98;
extern Pair DAT_021a142c[];
extern Pair DAT_021a14ac[];
extern "C" void FUN_overlay_22__021a0fcc(void) {
    Pair v = DAT_020ebb98;
    DAT_021a142c[0] = v;
    DAT_021a142c[1] = v;
    DAT_021a142c[2] = v;
    DAT_021a142c[8] = v;
    DAT_021a142c[10] = v;
    DAT_021a14ac[3] = v;
    DAT_021a14ac[12] = v;
}
