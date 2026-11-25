// flags: -O4,s
enum { E0 = 0, E1 = 1 };
extern int DAT_0219c660;
int FUN_overlay_27__0219adb8(int *p, int *v) {
    int old = p[18];
    long long z, x, y;
    int dz, dx, dy, sum;
    p[18] = 0;
    if (old == 1) return 0;
    z = (long long)v[2] * v[2];
    x = (long long)v[0] * v[0];
    y = (long long)v[1] * v[1];
    dz = (int)((z + 2048) >> 12);
    dx = (int)((x + 2048) >> 12);
    dy = (int)((y + 2048) >> 12);
    sum = dz + (dx + dy);
    if ((sum > DAT_0219c660) ? E1 : E0) return 0;
    p[18] = 1;
    return 1;
}
