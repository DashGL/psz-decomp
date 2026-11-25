//cpp
// flags: -O4,p
extern "C" void FUN_02037390(int *, void *);
extern "C" int DAT_021a1688;
extern "C" int FUN_overlay_22__021a006c(int *p) {
    int square;
    p[19]++;
    if (p[19] >= 200) return 0;
    if (p[22] == 1 && p[21] >= 20) return 0;
    FUN_02037390(&square, p + 2);
    int ok = (square > DAT_021a1688) ? 1 : 0;
    if (ok) return 0;
    return 1;
}
