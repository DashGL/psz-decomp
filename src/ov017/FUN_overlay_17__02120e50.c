//cpp
// flags: -O4,s
extern "C" void FUN_overlay_17__021202e4(void *, int, unsigned int, unsigned int, int);
extern "C" int FUN_overlay_17__02120e50(void **p, int value, unsigned int a, unsigned int b, unsigned int flags) {
    if (!p[4]) {
        return value;
    }
    FUN_overlay_17__021202e4(p[4], value, a, b, (flags & 2) ? 1 : 0);
    return value;
}
