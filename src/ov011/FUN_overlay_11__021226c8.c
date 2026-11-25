// flags: -O4,s
extern void *const DAT_overlay_11__0212397c[];
extern int FUN_overlay_11__0211fe2c(int, int, void *, void *, void *, int);
extern char *FUN_overlay_11__0211ff28(int);
extern void FUN_overlay_11__0211ffe4(void *, int);
extern void FUN_overlay_11__02120030(void *, int, int);

void FUN_overlay_11__021226c8(int *s) {
    char *p;
    if (s[3] == -1) {
        s[3] = FUN_overlay_11__0211fe2c(0, 0, DAT_overlay_11__0212397c[15], DAT_overlay_11__0212397c[16], DAT_overlay_11__0212397c[17], 0);
        p = FUN_overlay_11__0211ff28(s[3]);
        if (p != 0) {
            FUN_overlay_11__0211ffe4(p, 0);
            FUN_overlay_11__02120030(p, 0, 1);
            *(int *)(p + 0x2ba8) = 100;
        }
    }
}
