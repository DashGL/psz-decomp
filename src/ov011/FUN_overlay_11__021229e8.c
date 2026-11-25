// flags: -O4,s
int FUN_overlay_11__021229e8(const unsigned char *a, const unsigned char *p) {
    if (a[0] == p[36] && a[1] == p[37] && a[2] == p[38] && a[4] == p[40] && a[3] == p[39] && a[5] == p[41]) {
        return 1;
    }
    return 0;
}
