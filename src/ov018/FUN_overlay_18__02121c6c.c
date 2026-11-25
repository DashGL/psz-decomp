// flags: -O4,s
extern int DAT_overlay_18__02123ad8[4][3];
int FUN_overlay_18__02121c6c(unsigned char *s) {
    int a = *(int *)s;
    if (a >= 0 && a < 4) {
        int b = *(int *)(s + 0x98);
        if (b >= 0 && b < 2) {
            return DAT_overlay_18__02123ad8[a][b];
        }
    }
    return -1;
}
