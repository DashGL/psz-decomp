//cpp
// flags: -O4,s
extern "C" int FUN_overlay_28__0219a250(unsigned int *p) {
    unsigned int flags = p[54];
    int a = (flags & 2) ? 1 : 0;
    int b = (flags & 4) ? 1 : 0;
    int c = (p[53] == 1) ? 1 : 0;
    return a | b | c;
}
