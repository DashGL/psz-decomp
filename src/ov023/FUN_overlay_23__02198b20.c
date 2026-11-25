//cpp
// flags: -O4,s
extern "C" int FUN_02036c34(void *);
extern "C" void FUN_overlay_23__02198b50(void *);
extern int DAT_020fc988;
extern "C" void FUN_overlay_23__02198b20(int *p) {
    p[4] -= FUN_02036c34((void *)p[1]);
    int ok = (p[4] <= DAT_020fc988) ? 1 : 0;
    if (ok) {
        FUN_overlay_23__02198b50(p);
    }
}
