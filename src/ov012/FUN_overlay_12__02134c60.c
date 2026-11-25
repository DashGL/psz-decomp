//cpp
// flags: -O4,s
extern "C" {
extern int DAT_0213f2dc;
extern void FUN_overlay_12__02135338(void *);
extern int FUN_overlay_12__02134ca0(void *);
int FUN_overlay_12__02134c60(int *s) {
    FUN_overlay_12__02135338(s);
    switch (s[2]) {
    case 0:
        if (FUN_overlay_12__02134ca0(s)) s[2] = 1;
    case 1:
        if ((DAT_0213f2dc == 0 ? 1 : 0) != 0) return 0;
        break;
    }
    return 1;
}
}
