//cpp
// flags: -O4,s
extern "C" int FUN_overlay_23__0219bd88(unsigned int *p) {
    unsigned int v = p[28];
    int present = (v != ~0U) ? 1 : 0;
    if (present && p[26] != v) {
        return 1;
    }
    return 0;
}
