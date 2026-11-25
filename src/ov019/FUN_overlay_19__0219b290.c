//cpp
// flags: -O4,s
extern "C" int FUN_overlay_19__0219b290(unsigned int *p) {
    int same = (p[2] == p[4]) ? 1 : 0;
    if (same == 1) {
        return 0;
    }
    if (p[37] == 1) {
        p[37] = 0;
        return 0;
    }
    return 1;
}
