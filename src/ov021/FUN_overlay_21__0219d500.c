// flags: -O4,p
extern void *FUN_02090c20(void);
extern void FUN_02090f74(short *, void *, void *, int);
extern void FUN_020c1d7c(int, int, int, int, int);
extern int FUN_02040d2c(void *, int);
void FUN_overlay_21__0219d500(int *p) {
    void *c = (void *)p[1];
    int *s = (int *)p[2];
    struct V { int x, y, z; } v = *(struct V *)(s + 24);
    short xy[2];
    FUN_02090f74(xy, FUN_02090c20(), &v, 1);
    FUN_020c1d7c(26, 16, xy[0], xy[1], 4);
    if (FUN_02040d2c(c, p[3])) s[6] = -1;
}
