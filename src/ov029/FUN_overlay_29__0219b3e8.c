//cpp
// flags: -O4,s
extern "C" int FUN_02037208(void *, int);
extern "C" int FUN_overlay_29__0219b3e8(int *p) {
    int current = p[2];
    if (((current == p[4]) ? 1 : 0) == 1) return 0;
    if (((p[15] == current) ? 1 : 0) == 1) {
        if (!FUN_02037208((void *)p[1], 10)) return 0;
    } else if (((p[16] == current) ? 1 : 0) == 1) {
        if (!FUN_02037208((void *)p[1], 10)) return 0;
    }
    return 1;
}
