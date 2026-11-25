// flags: -O4,s
extern int DAT_overlay_14__02121a24[4][3];
int FUN_overlay_14__0211f2e0(unsigned char *s) {
    int a = *(int *)s;
    if (a >= 0 && a < 4) {
        int b = *(int *)(s + 0x98);
        if (b >= 0 && b < 2) {
            return DAT_overlay_14__02121a24[a][b];
        }
    }
    return -1;
}
