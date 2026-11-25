// flags: -O4,s
int FUN_overlay_30__02198544(char *p) {
    short *a = (short *)(p + 24);
    int *b;
    if (a == 0) return 0;
    b = (int *)(p + 52);
    if (b == 0) return 0;
    if ((*a >> 1) > *b) return 1;
    return 0;
}
