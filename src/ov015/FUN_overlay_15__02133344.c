// flags: -O4,p
extern int FUN_overlay_15__02135884(void *);
extern void FUN_overlay_15__02135a54(void *, int, int *, int *);
extern void FUN_overlay_15__02135888(void *, int, int, int);
void FUN_overlay_15__02133344(void *sprite, int lower) {
    int n = FUN_overlay_15__02135884(sprite);
    int i;
    for (i = 0; i < n; i++) {
        int x, y, flag;
        FUN_overlay_15__02135a54(sprite, i, &x, &y);
        if (y >= lower && y < 192) flag = 0;
        else flag = 512;
        FUN_overlay_15__02135888(sprite, i, flag, 0);
    }
}
