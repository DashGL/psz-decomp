// flags: -O4,p
int FUN_overlay_12__0212d394(char *p, int index, int row) {
    if (index >= 0 && index < 29 && row >= 0 && row <= 2) return *(short *)(p + 14 + row * 58 + index * 2);
    return 0;
}
