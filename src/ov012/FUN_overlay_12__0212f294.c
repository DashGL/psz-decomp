//cpp
// flags: -O4,s
extern "C" void FUN_overlay_12__0212f388(void *);
extern "C" void FUN_overlay_12__0212f2c4(void *);
extern int DAT_0213e20c;
extern "C" void FUN_overlay_12__0212f294(int *p) {
    int active = (DAT_0213e20c == p[2]) ? 1 : 0;
    if (active) {
        if (p[17] != 0) {
            if (p[17] == 1) {
                FUN_overlay_12__0212f388(p);
            }
        } else {
            FUN_overlay_12__0212f2c4(p);
        }
    }
}
