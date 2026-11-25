// flags: -O4,s
extern char *FUN_020a0ce8(void);
extern int FUN_overlay_12__0212d454(void *);
extern void FUN_overlay_12__0211f870(void *, int, int, int);
void FUN_overlay_12__021308c8(int *s) {
    char *base;
    int i;
    s[18] = 0;
    base = FUN_020a0ce8() + 604;
    for (i = 0; i < 12; i++) {
        if (FUN_overlay_12__0212d454(base + 60 * i) > 0) {
            s[19 + s[18]] = i;
            ++s[18];
        }
    }
    int v32 = s[32]; int v31 = s[31]; int v18 = s[18]; s[36] = v32; FUN_overlay_12__0211f870(s + 33, v18, 5, v31);
    s[17] = 0;
    s[37] = 1;
}
