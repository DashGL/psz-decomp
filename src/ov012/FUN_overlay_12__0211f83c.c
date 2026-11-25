// flags: -O4,p
extern void FUN_overlay_12__0211f8f0(void *);
extern void FUN_overlay_12__0211f870(void *, int, int, int);
void FUN_overlay_12__0211f83c(int *p) {
    int rem, val;
    FUN_overlay_12__0211f8f0(p);
    rem = 8 - p[4];
    val = p[174];
    p[0xbd8 / 4] = 0;
    FUN_overlay_12__0211f870((char *)p + 0xbcc, val, rem, 0);
    p[0xbdc / 4] = 1;
}
