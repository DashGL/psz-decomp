//cpp
// flags: -O4,s
extern "C" {
extern int FUN_02036c34(void *);
extern void FUN_020bc5cc(int *, const int *, const int *);
extern void FUN_02037910(void *, int);
extern const int DAT_0219c290;
extern int DAT_020fc988;
}
extern "C" void FUN_overlay_27__02198598(int *p, int unused1, int unused2, int target) {
    int time = FUN_02036c34((void *)p[1]);
    int step;
    FUN_020bc5cc(&step, &DAT_0219c290, &time);
    p[30] -= step;
    int done = (p[30] <= DAT_020fc988) ? 1 : 0;
    if (!done && p[26] != 2 && target != -1) {
        FUN_02037910(p, p[25]);
        p[26] = 1;
    }
}
