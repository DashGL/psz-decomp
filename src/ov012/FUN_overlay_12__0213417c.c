//cpp
// flags: -O4,s
extern "C" int FUN_overlay_12__0213417c(unsigned char *p) {
    int zero = (p[0] == 0) ? 1 : 0;
    if (zero && p[1] == 0x11) {
        return 1;
    }
    return 0;
}
