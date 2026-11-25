// flags: -O4,s
extern int DAT_overlay_10__02122494[4][3];
int FUN_overlay_10__0211f43c(unsigned char *s) {
    int a = *(int *)s;
    if (a >= 0 && a < 4) {
        int b = *(int *)(s + 0x98);
        if (b >= 0 && b < 2) {
            return DAT_overlay_10__02122494[a][b];
        }
    }
    return -1;
}
