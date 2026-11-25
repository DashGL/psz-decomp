// flags: -O4,s
extern unsigned char *FUN_overlay_12__0212cbd0(void);
int FUN_overlay_12__0212f264(void *unused, int value) {
    unsigned char *p = FUN_overlay_12__0212cbd0();
    if (p) {
        int n = *(int *)(p + 184), i;
        for (i = 0; i < n; i++) {
            if ((unsigned char)value == p[i]) return 1;
        }
    }
    return 0;
}
