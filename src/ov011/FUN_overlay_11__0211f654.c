//cpp
// flags: -O4,s
extern "C" int FUN_overlay_11__0211f654(int *s) {
    int v = *s;
    int r = (v == 1 || v == 3) ? 1 : 0;
    if (r) return -10;
    return 0;
}
