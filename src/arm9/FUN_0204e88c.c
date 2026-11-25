// flags: -O4,s
int FUN_0204e88c(int *a, int *b, int rad) {
    int res = 0;
    int dx = (a[0] - b[0]) >> 8;
    int dz = (a[2] - b[2]) >> 8;
    int r = rad >> 8;
    if (r * r > dx * dx + dz * dz) res = 1;
    return res;
}
