// flags: -O4,s
extern void FUN_overlay_12__0211f870(void *, int, int, int);
void FUN_overlay_12__0212e73c(int *p) {
    int c = p[24];
    int b = p[23];
    p[133] = 0;
    FUN_overlay_12__0211f870(p + 130, b, 5, c);
    p[17] = 0;
    p[135] = 1;
}
