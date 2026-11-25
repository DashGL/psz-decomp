// flags: -O4,s
extern int DAT_overlay_11__02123f34[4][3];
int FUN_overlay_11__0211f5e0(unsigned char *s) {
    int a = *(int *)s;
    if (a >= 0 && a < 4) {
        int b = *(int *)(s + 0x98);
        if (b >= 0 && b < 2) {
            return DAT_overlay_11__02123f34[a][b];
        }
    }
    return -1;
}
