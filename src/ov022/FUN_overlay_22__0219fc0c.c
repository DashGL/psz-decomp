//cpp
// flags: -O4,s
extern "C" void FUN_02037390(int *, const void *);
extern int DAT_021a1688[];
extern "C" int FUN_overlay_22__0219fc0c(char *p) {
    int magnitude;
    FUN_02037390(&magnitude, p + 8);
    int ok = (magnitude <= DAT_021a1688[1]) ? 1 : 0;
    if (ok) {
        return 1;
    }
    return 0;
}
